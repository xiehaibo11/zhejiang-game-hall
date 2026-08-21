
/* cocos2d::AssetFd::~AssetFd() */

int __thiscall cocos2d::AssetFd::~AssetFd(AssetFd *this)

{
  int __fd;
  
                    /* try { // try from 00a999e8 to 00b999fb has its CatchHandler @ 00a99b8c */
  __fd = *(int *)this;
  if (0 < __fd) {
    __fd = close(__fd);
    *(undefined4 *)this = 0;
  }
                    /* try { // try from 00a99a00 to 00b99a0f has its CatchHandler @ 00a99b84 */
  return __fd;
}

