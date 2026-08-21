
/* cocos2d::experimental::AssetFd::~AssetFd() */

int __thiscall cocos2d::experimental::AssetFd::~AssetFd(AssetFd *this)

{
  int __fd;
  
  __fd = *(int *)this;
  if (0 < __fd) {
    __fd = close(__fd);
    *(undefined4 *)this = 0;
  }
  return __fd;
}

