
/* cocos2d::experimental::ui::VideoPlayer::createCloneInstance() */

VideoPlayer * cocos2d::experimental::ui::VideoPlayer::createCloneInstance(void)

{
  VideoPlayer *this;
  ulong uVar1;
  
                    /* try { // try from 00de0aec to 00ee0af7 has its CatchHandler @ 00de1134 */
  this = operator_new(0x560,(nothrow_t *)&std::nothrow);
  if (this != (VideoPlayer *)0x0) {
    VideoPlayer(this);
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (VideoPlayer *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

