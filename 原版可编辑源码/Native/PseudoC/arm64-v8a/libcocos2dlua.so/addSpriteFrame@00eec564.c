
/* cocos2d::Animation::addSpriteFrame(cocos2d::SpriteFrame*) */

void __thiscall cocos2d::Animation::addSpriteFrame(Animation *this,SpriteFrame *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  AnimationFrame *pAVar3;
  Ref *pRVar4;
  void *pvVar5;
  AnimationFrame *local_70;
  undefined8 uStack_68;
  void *local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
                    /* try { // try from 00eec568 to 00fec58f has its CatchHandler @ 00eec670 */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00eec590 to 00fec607 has its CatchHandler @ 00eec25c */
  uStack_68 = 0;
  local_70 = (AnimationFrame *)0x0;
  uStack_58 = 0;
  local_60 = (void *)0x0;
  local_50 = 0x3f800000;
  pRVar4 = (Ref *)AnimationFrame::create(param_1,1.0,(unordered_map *)&local_70);
  pAVar3 = local_70;
  puVar1 = local_60;
  while (puVar1 != (void *)0x0) {
    pvVar5 = (void *)*puVar1;
    local_70 = pAVar3;
    cocos2d::Value::~Value((Value *)(puVar1 + 5));
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    pAVar3 = local_70;
    puVar1 = pvVar5;
  }
  local_70 = (AnimationFrame *)0x0;
  if (pAVar3 != (AnimationFrame *)0x0) {
    operator_delete(pAVar3);
  }
                    /* try { // try from 00eec608 to 00fec60f has its CatchHandler @ 00eec624 */
  puVar1 = *(undefined8 **)(this + 0x48);
                    /* try { // try from 00eec610 to 00fec61f has its CatchHandler @ 00eec620 */
  local_70 = (AnimationFrame *)pRVar4;
  if (puVar1 == *(undefined8 **)(this + 0x50)) {
                    /* catch() { ... } // from try @ 00eec53c with catch @ 00eec624
                       catch() { ... } // from try @ 00eec608 with catch @ 00eec624 */
    std::__ndk1::vector<cocos2d::AnimationFrame*,std::__ndk1::allocator<cocos2d::AnimationFrame*>>::
    __push_back_slow_path<cocos2d::AnimationFrame*const&>
              ((vector<cocos2d::AnimationFrame*,std::__ndk1::allocator<cocos2d::AnimationFrame*>> *)
               (this + 0x40),&local_70);
  }
  else {
    *puVar1 = pRVar4;
    *(undefined8 **)(this + 0x48) = puVar1 + 1;
                    /* catch() { ... } // from try @ 00eec3f0 with catch @ 00eec620
                       catch() { ... } // from try @ 00eec610 with catch @ 00eec620
                       try { // try from 00eec620 to 00fec6ab has its CatchHandler @ 00eec25c */
  }
                    /* catch() { ... } // from try @ 00eec304 with catch @ 00eec634 */
  Ref::retain((Ref *)local_70);
  *(float *)(this + 0x30) = *(float *)(this + 0x30) + 1.0;
                    /* catch() { ... } // from try @ 00eec2f0 with catch @ 00eec648 */
                    /* catch() { ... } // from try @ 00eec2e8 with catch @ 00eec64c */
                    /* catch() { ... } // from try @ 00eec4cc with catch @ 00eec650 */
  if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 00eec2b8 with catch @ 00eec660 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00eec568 with catch @ 00eec670 */
  __stack_chk_fail();
}

