
/* cocos2d::Animation::initWithAnimationFrames(cocos2d::Vector<cocos2d::AnimationFrame*> const&,
   float, unsigned int) */

undefined8 __thiscall
cocos2d::Animation::initWithAnimationFrames
          (Animation *this,Vector *param_1,float param_2,uint param_3)

{
  vector<cocos2d::AnimationFrame*,std::__ndk1::allocator<cocos2d::AnimationFrame*>> *this_00;
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float fVar6;
  long *plVar3;
  
  this_00 = (vector<cocos2d::AnimationFrame*,std::__ndk1::allocator<cocos2d::AnimationFrame*>> *)
            (this + 0x40);
  *(float *)(this + 0x34) = param_2;
  *(uint *)(this + 0x5c) = param_3;
                    /* try { // try from 00eec2b8 to 00fec2c3 has its CatchHandler @ 00eec660 */
  if (this_00 !=
      (vector<cocos2d::AnimationFrame*,std::__ndk1::allocator<cocos2d::AnimationFrame*>> *)param_1)
  {
    puVar5 = *(undefined8 **)(this + 0x40);
    puVar1 = *(undefined8 **)(this + 0x48);
                    /* try { // try from 00eec2c4 to 00fec2e7 has its CatchHandler @ 00eec25c */
    if (puVar5 != puVar1) {
      do {
        puVar4 = puVar5 + 1;
        Ref::release((Ref *)*puVar5);
        puVar5 = puVar4;
      } while (puVar1 != puVar4);
      puVar5 = *(undefined8 **)this_00;
    }
    *(undefined8 **)(this + 0x48) = puVar5;
                    /* try { // try from 00eec2e8 to 00fec2eb has its CatchHandler @ 00eec64c */
    std::__ndk1::vector<cocos2d::AnimationFrame*,std::__ndk1::allocator<cocos2d::AnimationFrame*>>::
    assign<cocos2d::AnimationFrame**>
              (this_00,*(AnimationFrame ***)param_1,*(AnimationFrame ***)(param_1 + 8));
                    /* try { // try from 00eec2f0 to 00fec2fb has its CatchHandler @ 00eec648 */
    puVar1 = *(undefined8 **)(this + 0x48);
    for (puVar5 = *(undefined8 **)(this + 0x40); puVar5 != puVar1; puVar5 = puVar5 + 1) {
      Ref::retain((Ref *)*puVar5);
                    /* try { // try from 00eec304 to 00fec313 has its CatchHandler @ 00eec634 */
    }
  }
  if (*(long **)(this + 0x40) != *(long **)(this + 0x48)) {
    fVar6 = *(float *)(this + 0x30);
    plVar2 = *(long **)(this + 0x40);
    do {
      plVar3 = plVar2 + 1;
      fVar6 = *(float *)(*plVar2 + 0x38) + fVar6;
      plVar2 = plVar3;
    } while (*(long **)(this + 0x48) != plVar3);
    *(float *)(this + 0x30) = fVar6;
  }
  return 1;
}

