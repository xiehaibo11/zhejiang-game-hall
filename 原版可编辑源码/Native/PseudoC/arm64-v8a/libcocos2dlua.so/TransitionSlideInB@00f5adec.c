
/* cocos2d::TransitionSlideInB::TransitionSlideInB() */

void __thiscall cocos2d::TransitionSlideInB::TransitionSlideInB(TransitionSlideInB *this)

{
  Scene::Scene((Scene *)this);
                    /* try { // try from 00f5ae08 to 0105ae0f has its CatchHandler @ 00f5ae58 */
                    /* try { // try from 00f5ae10 to 0105ae6f has its CatchHandler @ 00f5ac78 */
  *(undefined8 *)(this + 0x37e) = 0;
  *(undefined8 *)(this + 0x378) = 0;
  *(undefined8 *)(this + 0x370) = 0;
  *(undefined ***)this = &PTR__TransitionSlideInT_01716898;
  *(undefined ***)(this + 0x388) = &PTR__TransitionSlideInB_01716e08;
  return;
}

