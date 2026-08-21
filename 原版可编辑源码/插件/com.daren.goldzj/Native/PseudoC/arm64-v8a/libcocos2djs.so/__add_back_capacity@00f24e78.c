
/* std::__ndk1::deque<v8::internal::TranslatedValue,
   std::__ndk1::allocator<v8::internal::TranslatedValue> >::__add_back_capacity() */

void __thiscall
std::__ndk1::
deque<v8::internal::TranslatedValue,std::__ndk1::allocator<v8::internal::TranslatedValue>>::
__add_back_capacity(deque<v8::internal::TranslatedValue,std::__ndk1::allocator<v8::internal::TranslatedValue>>
                    *this)

{
  TranslatedValue *pTVar1;
  ulong uVar2;
  TranslatedValue **ppTVar3;
  undefined8 uVar4;
  long lVar5;
  TranslatedValue **ppTVar6;
  ulong uVar7;
  TranslatedValue *local_60;
  TranslatedValue *pTStack_58;
  TranslatedValue *local_50;
  TranslatedValue *pTStack_48;
  deque<v8::internal::TranslatedValue,std::__ndk1::allocator<v8::internal::TranslatedValue>>
  *pdStack_40;
  TranslatedValue *local_18;
  
  if (*(ulong *)(this + 0x20) < 0x80) {
    uVar7 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    lVar5 = *(long *)(this + 0x18) - *(long *)this;
    if ((ulong)(lVar5 >> 3) <= uVar7) {
      uVar2 = lVar5 >> 2;
      if (lVar5 == 0) {
        uVar2 = 1;
      }
      pdStack_40 = this + 0x18;
      pTStack_48 = (TranslatedValue *)0x0;
      if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_60 = operator_new(uVar2 * 8);
      pTStack_58 = local_60 + uVar7 * 8;
      pTStack_48 = local_60 + uVar2 * 8;
      local_50 = pTStack_58;
      local_18 = operator_new(0x1000);
      __split_buffer<v8::internal::TranslatedValue*,std::__ndk1::allocator<v8::internal::TranslatedValue*>&>
      ::push_back((__split_buffer<v8::internal::TranslatedValue*,std::__ndk1::allocator<v8::internal::TranslatedValue*>&>
                   *)&local_60,&local_18);
      ppTVar3 = *(TranslatedValue ***)(this + 8);
      ppTVar6 = *(TranslatedValue ***)(this + 0x10);
      if (ppTVar6 != ppTVar3) {
        do {
          ppTVar6 = ppTVar6 + -1;
          __split_buffer<v8::internal::TranslatedValue*,std::__ndk1::allocator<v8::internal::TranslatedValue*>&>
          ::push_front((__split_buffer<v8::internal::TranslatedValue*,std::__ndk1::allocator<v8::internal::TranslatedValue*>&>
                        *)&local_60,ppTVar6);
          ppTVar3 = *(TranslatedValue ***)(this + 8);
        } while (ppTVar6 != ppTVar3);
        ppTVar6 = *(TranslatedValue ***)(this + 0x10);
      }
      pTVar1 = *(TranslatedValue **)this;
      *(TranslatedValue **)(this + 8) = pTStack_58;
      *(TranslatedValue **)this = local_60;
      uVar4 = *(undefined8 *)(this + 0x18);
      *(TranslatedValue **)(this + 0x18) = pTStack_48;
      *(TranslatedValue **)(this + 0x10) = local_50;
      local_50 = (TranslatedValue *)ppTVar6;
      if (ppTVar3 != ppTVar6) {
        local_50 = (TranslatedValue *)
                   (ppTVar6 +
                   ((ulong)((long)ppTVar6 + (-8 - (long)ppTVar3)) >> 3 ^ 0xffffffffffffffff));
      }
      if (pTVar1 == (TranslatedValue *)0x0) {
        return;
      }
      local_60 = pTVar1;
      pTStack_58 = (TranslatedValue *)ppTVar3;
      pTStack_48 = (TranslatedValue *)uVar4;
      operator_delete(pTVar1);
      return;
    }
    if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
      local_60 = operator_new(0x1000);
      __split_buffer<v8::internal::TranslatedValue*,std::__ndk1::allocator<v8::internal::TranslatedValue*>>
      ::push_back((__split_buffer<v8::internal::TranslatedValue*,std::__ndk1::allocator<v8::internal::TranslatedValue*>>
                   *)this,&local_60);
      return;
    }
    local_60 = operator_new(0x1000);
    __split_buffer<v8::internal::TranslatedValue*,std::__ndk1::allocator<v8::internal::TranslatedValue*>>
    ::push_front((__split_buffer<v8::internal::TranslatedValue*,std::__ndk1::allocator<v8::internal::TranslatedValue*>>
                  *)this,&local_60);
    local_60 = (TranslatedValue *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  else {
    *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) - 0x80;
    local_60 = (TranslatedValue *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  FUN_00f25008(this,&local_60);
  return;
}

