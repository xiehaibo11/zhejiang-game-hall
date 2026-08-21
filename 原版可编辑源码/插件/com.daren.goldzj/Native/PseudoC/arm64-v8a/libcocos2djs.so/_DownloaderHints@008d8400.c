
/* cocos2d::network::DownloaderHints::~DownloaderHints() */

void __thiscall cocos2d::network::DownloaderHints::~DownloaderHints(DownloaderHints *this)

{
  if (((byte)this[8] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x18));
  return;
}

