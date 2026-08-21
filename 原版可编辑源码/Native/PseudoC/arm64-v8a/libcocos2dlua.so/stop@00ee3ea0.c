
/* cocos2d::ReverseTime::stop() */

void __thiscall cocos2d::ReverseTime::stop(ReverseTime *this)

{
                    /* try { // try from 00ee3eb8 to 00fe3ebf has its CatchHandler @ 00ee3f04 */
  (**(code **)(**(long **)(this + 0x58) + 0x38))();
                    /* try { // try from 00ee3ec0 to 00fe3f1f has its CatchHandler @ 00ee3e94 */
  Action::stop((Action *)this);
  return;
}

