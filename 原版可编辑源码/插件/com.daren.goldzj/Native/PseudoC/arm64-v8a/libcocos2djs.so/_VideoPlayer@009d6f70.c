
/* cocos2d::VideoPlayer::~VideoPlayer() */

void __thiscall cocos2d::VideoPlayer::~VideoPlayer(VideoPlayer *this)

{
  ~VideoPlayer(this);
                    /* try { // try from 009d6f88 to 00ad6fc3 has its CatchHandler @ 009d6f88
                       catch() { ... } // from try @ 009d6f88 with catch @ 009d6f88
                       catch() { ... } // from try @ 009d7004 with catch @ 009d6f88 */
  operator_delete(this);
  return;
}

