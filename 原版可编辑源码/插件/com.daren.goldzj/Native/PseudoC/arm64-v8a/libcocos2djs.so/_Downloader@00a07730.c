
/* universe::Downloader::~Downloader() */

void __thiscall universe::Downloader::~Downloader(Downloader *this)

{
  ~Downloader(this);
  operator_delete(this);
  return;
}

