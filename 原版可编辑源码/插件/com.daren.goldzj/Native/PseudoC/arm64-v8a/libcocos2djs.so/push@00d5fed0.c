
/* cocos2d::middleware::TypedArrayPool::push(se::Object::TypedArrayType, unsigned long, se::Object*)
    */

void __thiscall
cocos2d::middleware::TypedArrayPool::push
          (TypedArrayPool *this,undefined8 param_2,undefined8 param_3,Object *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  vector<se::Object*,std::__ndk1::allocator<se::Object*>> *this_00;
  Object *pOVar4;
  long *plVar5;
  Object *local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  local_30 = param_4;
  if (param_4 == (Object *)0x0) goto LAB_00d5ff94;
  if (this[0x18] != (TypedArrayPool)0x0) {
    this_00 = (vector<se::Object*,std::__ndk1::allocator<se::Object*>> *)getObjPool();
    plVar1 = *(long **)this_00;
    plVar2 = *(long **)(this_00 + 8);
    plVar5 = plVar1;
    if (plVar1 != plVar2) {
      pOVar4 = (Object *)*plVar1;
      while (pOVar4 != param_4) {
        plVar5 = plVar5 + 1;
        if (plVar2 == plVar5) goto LAB_00d5ff50;
        pOVar4 = (Object *)*plVar5;
      }
    }
    if (plVar5 != plVar2) goto LAB_00d5ff94;
LAB_00d5ff50:
    if ((ulong)((long)plVar2 - (long)plVar1 >> 3) < 0x32) {
      if (*(long **)(this_00 + 0x10) == plVar2) {
        std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>::
        __push_back_slow_path<se::Object*const&>(this_00,&local_30);
      }
      else {
        *plVar2 = (long)param_4;
        *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 8;
      }
      goto LAB_00d5ff94;
    }
  }
  se::Object::unroot(param_4);
  se::RefCounter::decRef((RefCounter *)param_4);
  local_30 = (Object *)0x0;
LAB_00d5ff94:
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

