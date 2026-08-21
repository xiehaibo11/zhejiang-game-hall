
/* cocos2d::renderer::MemPool::updateCommonData(unsigned long, se::Object*, se::Object*) */

void __thiscall
cocos2d::renderer::MemPool::updateCommonData
          (MemPool *this,ulong param_1,Object *param_2,Object *param_3)

{
  long lVar1;
  UnitCommon *pUVar2;
  Object *pOVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  UnitCommon *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_60 = (UnitCommon *)0x0;
  lVar5 = *(long *)(this + 8);
  puVar6 = *(undefined8 **)(this + 0x10);
  uVar4 = (long)puVar6 - lVar5 >> 3;
  if (uVar4 == param_1) {
    local_60 = operator_new(0x40);
    *(undefined8 *)(local_60 + 0x28) = 0;
    *(undefined8 *)(local_60 + 0x20) = 0;
    *(undefined8 *)(local_60 + 0x38) = 0;
    *(undefined8 *)(local_60 + 0x30) = 0;
    *(undefined8 *)(local_60 + 0x18) = 0;
    *(undefined8 *)(local_60 + 0x10) = 0;
    *(undefined ***)local_60 = &PTR__UnitCommon_01c69640;
    *(undefined8 *)(local_60 + 8) = 0;
    if (*(undefined8 **)(this + 0x18) == puVar6) {
      std::__ndk1::
      vector<cocos2d::renderer::UnitCommon*,std::__ndk1::allocator<cocos2d::renderer::UnitCommon*>>
      ::__push_back_slow_path<cocos2d::renderer::UnitCommon*const&>
                ((vector<cocos2d::renderer::UnitCommon*,std::__ndk1::allocator<cocos2d::renderer::UnitCommon*>>
                  *)(this + 8),&local_60);
    }
    else {
      *puVar6 = local_60;
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
    }
LAB_00926400:
    if (*(undefined8 **)(this + 0x28) == *(undefined8 **)(this + 0x30)) {
      std::__ndk1::
      vector<cocos2d::renderer::UnitCommon*,std::__ndk1::allocator<cocos2d::renderer::UnitCommon*>>
      ::__push_back_slow_path<cocos2d::renderer::UnitCommon*const&>
                ((vector<cocos2d::renderer::UnitCommon*,std::__ndk1::allocator<cocos2d::renderer::UnitCommon*>>
                  *)(this + 0x20),&local_60);
    }
    else {
      **(undefined8 **)(this + 0x28) = local_60;
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + 8;
    }
  }
  else {
    if (uVar4 <= param_1) goto LAB_009264e4;
    local_60 = *(UnitCommon **)(lVar5 + param_1 * 8);
    if (local_60 == (UnitCommon *)0x0) {
      local_60 = operator_new(0x40);
      *(undefined8 *)(local_60 + 0x28) = 0;
      *(undefined8 *)(local_60 + 0x20) = 0;
      *(undefined8 *)(local_60 + 0x38) = 0;
      *(undefined8 *)(local_60 + 0x30) = 0;
      *(undefined8 *)(local_60 + 0x18) = 0;
      *(undefined8 *)(local_60 + 0x10) = 0;
      *(undefined ***)local_60 = &PTR__UnitCommon_01c69640;
      *(undefined8 *)(local_60 + 8) = 0;
      *(UnitCommon **)(lVar5 + param_1 * 8) = local_60;
      goto LAB_00926400;
    }
  }
  pUVar2 = local_60;
  pOVar3 = *(Object **)(local_60 + 0x10);
  *(ulong *)(local_60 + 8) = param_1;
  if (pOVar3 != param_2) {
    if (pOVar3 != (Object *)0x0) {
      se::Object::unroot(pOVar3);
      se::RefCounter::decRef(*(RefCounter **)(pUVar2 + 0x10));
      *(undefined8 *)(pUVar2 + 0x10) = 0;
    }
    if (param_2 != (Object *)0x0) {
      *(Object **)(pUVar2 + 0x10) = param_2;
      se::Object::root(param_2);
      se::RefCounter::incRef(*(RefCounter **)(pUVar2 + 0x10));
      *(uchar **)(pUVar2 + 0x18) = (uchar *)0x0;
      *(undefined8 *)(pUVar2 + 0x20) = 0;
      se::Object::getTypedArrayData
                (*(Object **)(pUVar2 + 0x10),(uchar **)(pUVar2 + 0x18),(ulong *)(pUVar2 + 0x20));
    }
  }
  pUVar2 = local_60;
  pOVar3 = *(Object **)(local_60 + 0x28);
  if (pOVar3 != param_3) {
    if (pOVar3 != (Object *)0x0) {
      se::Object::unroot(pOVar3);
      se::RefCounter::decRef(*(RefCounter **)(pUVar2 + 0x28));
      *(undefined8 *)(pUVar2 + 0x28) = 0;
    }
    if (param_3 != (Object *)0x0) {
      *(Object **)(pUVar2 + 0x28) = param_3;
      se::Object::root(param_3);
      se::RefCounter::incRef(*(RefCounter **)(pUVar2 + 0x28));
      *(uchar **)(pUVar2 + 0x30) = (uchar *)0x0;
      *(undefined8 *)(pUVar2 + 0x38) = 0;
      se::Object::getTypedArrayData
                (*(Object **)(pUVar2 + 0x28),(uchar **)(pUVar2 + 0x30),(ulong *)(pUVar2 + 0x38));
    }
  }
LAB_009264e4:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

