#include <iostream>
using namespace std;

class Song
{

  // add class definitions below this line

public:
  Song(string artist, string title, string album)
  {
    this->artist = artist;
    this->title = title;
    this->album = album;
  }
  string GetArtist()
  {
    return artist;
  }
  string GetTitle()
  {
    return title;
  }
  string GetAlbum()
  {
    return album;
  }
  int GetPlayCount()
  {
    return play_count;
  }
  double GetPayRate()
  {
    return pay_rate;
  }
  double GetMoneyEarned()
  {
    return money_earned;
  }
  void SetArtist(string artist)
  {
    this->artist = artist;
  }
  void SetTitle(string title)
  {
    this->title = title;
  }
  void SetAlbum(string album)
  {
    this->album = album;
  }
  void Play(int count)
  {
    for (int i = 0; i < count; i++)
    {
      UpdatePlayCount();
      UpdateMoneyEarned();
    }
  }
  void Stats()
  {
    cout << artist << endl;
    cout << title << endl;
    cout << album << endl;
    cout << play_count << endl;
    cout << pay_rate << endl;
    cout << money_earned << endl;

  }

  // add class definitions above this line

  // DO NOT EDIT CODE BELOW THIS LINE

private:
  string artist;
  string title;
  string album;
  int play_count = 0;
  const double pay_rate = 0.001;
  double money_earned = 0;

  void UpdatePlayCount()
  {
    play_count++;
  }

  void UpdateMoneyEarned()
  {
    money_earned = play_count * pay_rate;
  }
};

int main()
{

  Song my_song("Led Zeppelin", "Ten Years Gone", "Physical Graffiti");
  cout << my_song.GetArtist() << endl;
  cout << my_song.GetTitle() << endl;
  cout << my_song.GetAlbum() << endl;
  cout << my_song.GetPlayCount() << endl;
  cout << my_song.GetPayRate() << endl;
  cout << my_song.GetMoneyEarned() << endl;
  my_song.SetArtist("Michael Jackson");
  my_song.SetTitle("Beat It");
  my_song.SetAlbum("Thriller");
  my_song.Play(1000000);
  my_song.Stats();

  return 0;
}

// DO NOT EDIT CODE ABOVE THIS LINE