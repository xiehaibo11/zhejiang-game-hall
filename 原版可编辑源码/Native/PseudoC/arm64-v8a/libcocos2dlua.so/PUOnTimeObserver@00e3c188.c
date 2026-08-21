
/* cocos2d::PUOnTimeObserver::PUOnTimeObserver() */

void __thiscall cocos2d::PUOnTimeObserver::PUOnTimeObserver(PUOnTimeObserver *this)

{
  PUObserver::PUObserver((PUObserver *)this);
                    /* try { // try from 00e3c1a4 to 00f3c1a7 has its CatchHandler @ 00e3c28c */
  *(undefined8 *)(this + 0xa4) = 0x200000000;
  this[0xac] = (PUOnTimeObserver)0x0;
  *(undefined ***)this = &PTR__PUObserver_016f1920;
  return;
}

