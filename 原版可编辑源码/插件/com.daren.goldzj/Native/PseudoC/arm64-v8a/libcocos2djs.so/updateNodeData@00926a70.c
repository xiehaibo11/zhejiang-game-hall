
/* cocos2d::renderer::NodeMemPool::updateNodeData(unsigned long, se::Object*, se::Object*,
   se::Object*, se::Object*, se::Object*, se::Object*, se::Object*, se::Object*, se::Object*,
   se::Object*, se::Object*) */

void __thiscall
cocos2d::renderer::NodeMemPool::updateNodeData
          (NodeMemPool *this,ulong param_1,Object *param_2,Object *param_3,Object *param_4,
          Object *param_5,Object *param_6,Object *param_7,Object *param_8,Object *param_9,
          Object *param_10,Object *param_11,Object *param_12)

{
  long lVar1;
  UnitBase *pUVar2;
  ulong uVar3;
  vector<cocos2d::renderer::UnitNode*,std::__ndk1::allocator<cocos2d::renderer::UnitNode*>> *this_00
  ;
  UnitNode *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_70 = (UnitNode *)0x0;
  this_00 = (vector<cocos2d::renderer::UnitNode*,std::__ndk1::allocator<cocos2d::renderer::UnitNode*>>
             *)(this + 0x38);
  uVar3 = *(long *)(this + 0x40) - *(long *)this_00 >> 3;
  if (uVar3 == param_1) {
    pUVar2 = operator_new(0x118);
    UnitBase::UnitBase(pUVar2);
    *(undefined8 *)(pUVar2 + 0x110) = 0;
    *(undefined8 *)(pUVar2 + 0xf8) = 0;
    *(undefined8 *)(pUVar2 + 0xf0) = 0;
    *(undefined8 *)(pUVar2 + 0x108) = 0;
    *(undefined8 *)(pUVar2 + 0x100) = 0;
    *(undefined8 *)(pUVar2 + 0xd8) = 0;
    *(undefined8 *)(pUVar2 + 0xd0) = 0;
    *(undefined8 *)(pUVar2 + 0xe8) = 0;
    *(undefined8 *)(pUVar2 + 0xe0) = 0;
    *(undefined8 *)(pUVar2 + 0xb8) = 0;
    *(undefined8 *)(pUVar2 + 0xb0) = 0;
    *(undefined8 *)(pUVar2 + 200) = 0;
    *(undefined8 *)(pUVar2 + 0xc0) = 0;
    *(undefined8 *)(pUVar2 + 0x98) = 0;
    *(undefined8 *)(pUVar2 + 0x90) = 0;
    *(undefined8 *)(pUVar2 + 0xa8) = 0;
    *(undefined8 *)(pUVar2 + 0xa0) = 0;
    *(undefined8 *)(pUVar2 + 0x78) = 0;
    *(undefined8 *)(pUVar2 + 0x70) = 0;
    *(undefined8 *)(pUVar2 + 0x88) = 0;
    *(undefined8 *)(pUVar2 + 0x80) = 0;
    *(undefined8 *)(pUVar2 + 0x58) = 0;
    *(undefined8 *)(pUVar2 + 0x50) = 0;
    *(undefined8 *)(pUVar2 + 0x68) = 0;
    *(undefined8 *)(pUVar2 + 0x60) = 0;
    *(undefined8 *)(pUVar2 + 0x38) = 0;
    *(undefined8 *)(pUVar2 + 0x30) = 0;
    *(undefined8 *)(pUVar2 + 0x48) = 0;
    *(undefined8 *)(pUVar2 + 0x40) = 0;
    *(undefined8 *)(pUVar2 + 0x18) = 0;
    *(undefined8 *)(pUVar2 + 0x10) = 0;
    *(undefined8 *)(pUVar2 + 0x28) = 0;
    *(undefined8 *)(pUVar2 + 0x20) = 0;
    *(undefined ***)pUVar2 = &PTR__UnitNode_01c696b8;
    local_70 = (UnitNode *)pUVar2;
    if (*(undefined8 **)(this + 0x40) == *(undefined8 **)(this + 0x48)) {
      std::__ndk1::
      vector<cocos2d::renderer::UnitNode*,std::__ndk1::allocator<cocos2d::renderer::UnitNode*>>::
      __push_back_slow_path<cocos2d::renderer::UnitNode*const&>(this_00,&local_70);
    }
    else {
      **(undefined8 **)(this + 0x40) = pUVar2;
      *(long *)(this + 0x40) = *(long *)(this + 0x40) + 8;
    }
  }
  else {
    if (uVar3 <= param_1) goto LAB_00926ce0;
    local_70 = *(UnitNode **)(*(long *)this_00 + param_1 * 8);
    if (local_70 == (UnitNode *)0x0) {
      pUVar2 = operator_new(0x118);
      UnitBase::UnitBase(pUVar2);
      *(undefined8 *)(pUVar2 + 0x110) = 0;
      *(undefined8 *)(pUVar2 + 0xf8) = 0;
      *(undefined8 *)(pUVar2 + 0xf0) = 0;
      *(undefined8 *)(pUVar2 + 0x108) = 0;
      *(undefined8 *)(pUVar2 + 0x100) = 0;
      *(undefined8 *)(pUVar2 + 0xd8) = 0;
      *(undefined8 *)(pUVar2 + 0xd0) = 0;
      *(undefined8 *)(pUVar2 + 0xe8) = 0;
      *(undefined8 *)(pUVar2 + 0xe0) = 0;
      *(undefined8 *)(pUVar2 + 0xb8) = 0;
      *(undefined8 *)(pUVar2 + 0xb0) = 0;
      *(undefined8 *)(pUVar2 + 200) = 0;
      *(undefined8 *)(pUVar2 + 0xc0) = 0;
      *(undefined8 *)(pUVar2 + 0x98) = 0;
      *(undefined8 *)(pUVar2 + 0x90) = 0;
      *(undefined8 *)(pUVar2 + 0xa8) = 0;
      *(undefined8 *)(pUVar2 + 0xa0) = 0;
      *(undefined8 *)(pUVar2 + 0x78) = 0;
      *(undefined8 *)(pUVar2 + 0x70) = 0;
      *(undefined8 *)(pUVar2 + 0x88) = 0;
      *(undefined8 *)(pUVar2 + 0x80) = 0;
      *(undefined8 *)(pUVar2 + 0x58) = 0;
      *(undefined8 *)(pUVar2 + 0x50) = 0;
      *(undefined8 *)(pUVar2 + 0x68) = 0;
      *(undefined8 *)(pUVar2 + 0x60) = 0;
      *(undefined8 *)(pUVar2 + 0x38) = 0;
      *(undefined8 *)(pUVar2 + 0x30) = 0;
      *(undefined8 *)(pUVar2 + 0x48) = 0;
      *(undefined8 *)(pUVar2 + 0x40) = 0;
      *(undefined8 *)(pUVar2 + 0x18) = 0;
      *(undefined8 *)(pUVar2 + 0x10) = 0;
      *(undefined8 *)(pUVar2 + 0x28) = 0;
      *(undefined8 *)(pUVar2 + 0x20) = 0;
      *(undefined ***)pUVar2 = &PTR__UnitNode_01c696b8;
      *(UnitBase **)(*(long *)this_00 + param_1 * 8) = pUVar2;
      local_70 = (UnitNode *)pUVar2;
    }
  }
  *(ulong *)(local_70 + 8) = param_1;
  UnitBase::set((UnitBase *)local_70,(Object **)(local_70 + 0x10),(uchar **)(local_70 + 0x18),
                (ulong *)(local_70 + 0x20),param_2);
  UnitBase::set((UnitBase *)local_70,(Object **)(local_70 + 0x28),(uchar **)(local_70 + 0x30),
                (ulong *)(local_70 + 0x38),param_3);
  UnitBase::set((UnitBase *)local_70,(Object **)(local_70 + 0x40),(uchar **)(local_70 + 0x48),
                (ulong *)(local_70 + 0x50),param_4);
  UnitBase::set((UnitBase *)local_70,(Object **)(local_70 + 0x58),(uchar **)(local_70 + 0x60),
                (ulong *)(local_70 + 0x68),param_5);
  UnitBase::set((UnitBase *)local_70,(Object **)(local_70 + 0x70),(uchar **)(local_70 + 0x78),
                (ulong *)(local_70 + 0x80),param_6);
  UnitBase::set((UnitBase *)local_70,(Object **)(local_70 + 0x88),(uchar **)(local_70 + 0x90),
                (ulong *)(local_70 + 0x98),param_7);
  UnitBase::set((UnitBase *)local_70,(Object **)(local_70 + 0xa0),(uchar **)(local_70 + 0xa8),
                (ulong *)(local_70 + 0xb0),param_8);
  UnitBase::set((UnitBase *)local_70,(Object **)(local_70 + 0xb8),(uchar **)(local_70 + 0xc0),
                (ulong *)(local_70 + 200),param_9);
  UnitBase::set((UnitBase *)local_70,(Object **)(local_70 + 0xd0),(uchar **)(local_70 + 0xd8),
                (ulong *)(local_70 + 0xe0),param_10);
  UnitBase::set((UnitBase *)local_70,(Object **)(local_70 + 0xe8),(uchar **)(local_70 + 0xf0),
                (ulong *)(local_70 + 0xf8),param_11);
  UnitBase::set((UnitBase *)local_70,(Object **)(local_70 + 0x100),(uchar **)(local_70 + 0x108),
                (ulong *)(local_70 + 0x110),param_12);
LAB_00926ce0:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

