
/* cocos2d::Animation::initWithSpriteFrames(cocos2d::Vector<cocos2d::SpriteFrame*> const&, float,
   unsigned int) */

undefined8 __thiscall
cocos2d::Animation::initWithSpriteFrames(Animation *this,Vector *param_1,float param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  AnimationFrame *pAVar4;
  Ref *pRVar5;
  undefined8 *puVar6;
  void *pvVar7;
  AnimationFrame *local_90;
  undefined8 uStack_88;
  void *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  *(float *)(this + 0x34) = param_2;
  *(uint *)(this + 0x5c) = param_3;
  puVar6 = *(undefined8 **)param_1;
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar6 != puVar2) {
    do {
      uStack_88 = 0;
      local_90 = (AnimationFrame *)0x0;
      uStack_78 = 0;
      local_80 = (void *)0x0;
      local_70 = 0x3f800000;
      pRVar5 = (Ref *)AnimationFrame::create((SpriteFrame *)*puVar6,1.0,(unordered_map *)&local_90);
      pAVar4 = local_90;
      puVar1 = local_80;
                    /* try { // try from 00eec0d8 to 00fec10b has its CatchHandler @ 00eec1fc */
      while (puVar1 != (void *)0x0) {
        pvVar7 = (void *)*puVar1;
        local_90 = pAVar4;
        cocos2d::Value::~Value((Value *)(puVar1 + 5));
        if ((*(byte *)(puVar1 + 2) & 1) != 0) {
          operator_delete((void *)puVar1[4]);
        }
        operator_delete(puVar1);
        pAVar4 = local_90;
        puVar1 = pvVar7;
      }
      local_90 = (AnimationFrame *)0x0;
      if (pAVar4 != (AnimationFrame *)0x0) {
        operator_delete(pAVar4);
      }
      puVar1 = *(undefined8 **)(this + 0x48);
      local_90 = (AnimationFrame *)pRVar5;
      if (puVar1 == *(undefined8 **)(this + 0x50)) {
        std::__ndk1::
        vector<cocos2d::AnimationFrame*,std::__ndk1::allocator<cocos2d::AnimationFrame*>>::
        __push_back_slow_path<cocos2d::AnimationFrame*const&>
                  ((vector<cocos2d::AnimationFrame*,std::__ndk1::allocator<cocos2d::AnimationFrame*>>
                    *)(this + 0x40),&local_90);
      }
      else {
        *puVar1 = pRVar5;
        *(undefined8 **)(this + 0x48) = puVar1 + 1;
      }
      Ref::retain((Ref *)local_90);
      puVar6 = puVar6 + 1;
                    /* try { // try from 00eec0b0 to 00fec0b7 has its CatchHandler @ 00eec1ec */
      *(float *)(this + 0x30) = *(float *)(this + 0x30) + 1.0;
    } while (puVar6 != puVar2);
  }
                    /* try { // try from 00eec140 to 00fec14f has its CatchHandler @ 00eec1ec */
  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 00eec150 to 00fec25b has its CatchHandler @ 00eebf9c */
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

