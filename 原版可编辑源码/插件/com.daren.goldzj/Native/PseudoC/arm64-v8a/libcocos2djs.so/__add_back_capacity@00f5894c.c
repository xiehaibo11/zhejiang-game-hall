
/* std::__ndk1::deque<std::__ndk1::pair<void (*)(v8::Isolate*, void*), void*>,
   std::__ndk1::allocator<std::__ndk1::pair<void (*)(v8::Isolate*, void*), void*> >
   >::__add_back_capacity() */

void __thiscall
std::__ndk1::
deque<std::__ndk1::pair<void(*)(v8::Isolate*,void*),void*>,std::__ndk1::allocator<std::__ndk1::pair<void(*)(v8::Isolate*,void*),void*>>>
::__add_back_capacity
          (deque<std::__ndk1::pair<void(*)(v8::Isolate*,void*),void*>,std::__ndk1::allocator<std::__ndk1::pair<void(*)(v8::Isolate*,void*),void*>>>
           *this)

{
  pair *ppVar1;
  ulong uVar2;
  pair **pppVar3;
  undefined8 uVar4;
  long lVar5;
  pair **pppVar6;
  ulong uVar7;
  pair *local_60;
  pair *ppStack_58;
  pair *local_50;
  pair *ppStack_48;
  deque<std::__ndk1::pair<void(*)(v8::Isolate*,void*),void*>,std::__ndk1::allocator<std::__ndk1::pair<void(*)(v8::Isolate*,void*),void*>>>
  *pdStack_40;
  pair *local_18;
  
  if (*(ulong *)(this + 0x20) < 0x100) {
    uVar7 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    lVar5 = *(long *)(this + 0x18) - *(long *)this;
    if ((ulong)(lVar5 >> 3) <= uVar7) {
      uVar2 = lVar5 >> 2;
      if (lVar5 == 0) {
        uVar2 = 1;
      }
      pdStack_40 = this + 0x18;
      ppStack_48 = (pair *)0x0;
      if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_60 = operator_new(uVar2 * 8);
      ppStack_58 = local_60 + uVar7 * 8;
      ppStack_48 = local_60 + uVar2 * 8;
      local_50 = ppStack_58;
      local_18 = operator_new(0x1000);
      __split_buffer<std::__ndk1::pair<void(*)(v8::Isolate*,void*),void*>*,std::__ndk1::allocator<std::__ndk1::pair<void(*)(v8::Isolate*,void*),void*>*>&>
      ::push_back((__split_buffer<std::__ndk1::pair<void(*)(v8::Isolate*,void*),void*>*,std::__ndk1::allocator<std::__ndk1::pair<void(*)(v8::Isolate*,void*),void*>*>&>
                   *)&local_60,&local_18);
      pppVar3 = *(pair ***)(this + 8);
      pppVar6 = *(pair ***)(this + 0x10);
      if (pppVar6 != pppVar3) {
        do {
          pppVar6 = pppVar6 + -1;
          __split_buffer<std::__ndk1::pair<void(*)(v8::Isolate*,void*),void*>*,std::__ndk1::allocator<std::__ndk1::pair<void(*)(v8::Isolate*,void*),void*>*>&>
          ::push_front((__split_buffer<std::__ndk1::pair<void(*)(v8::Isolate*,void*),void*>*,std::__ndk1::allocator<std::__ndk1::pair<void(*)(v8::Isolate*,void*),void*>*>&>
                        *)&local_60,pppVar6);
          pppVar3 = *(pair ***)(this + 8);
        } while (pppVar6 != pppVar3);
        pppVar6 = *(pair ***)(this + 0x10);
      }
      ppVar1 = *(pair **)this;
      *(pair **)(this + 8) = ppStack_58;
      *(pair **)this = local_60;
      uVar4 = *(undefined8 *)(this + 0x18);
      *(pair **)(this + 0x18) = ppStack_48;
      *(pair **)(this + 0x10) = local_50;
      local_50 = (pair *)pppVar6;
      if (pppVar3 != pppVar6) {
        local_50 = (pair *)(pppVar6 +
                           ((ulong)((long)pppVar6 + (-8 - (long)pppVar3)) >> 3 ^ 0xffffffffffffffff)
                           );
      }
      if (ppVar1 == (pair *)0x0) {
        return;
      }
      local_60 = ppVar1;
      ppStack_58 = (pair *)pppVar3;
      ppStack_48 = (pair *)uVar4;
      operator_delete(ppVar1);
      return;
    }
    if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
      local_60 = operator_new(0x1000);
      __split_buffer<std::__ndk1::pair<void(*)(v8::Isolate*,void*),void*>*,std::__ndk1::allocator<std::__ndk1::pair<void(*)(v8::Isolate*,void*),void*>*>>
      ::push_back((__split_buffer<std::__ndk1::pair<void(*)(v8::Isolate*,void*),void*>*,std::__ndk1::allocator<std::__ndk1::pair<void(*)(v8::Isolate*,void*),void*>*>>
                   *)this,&local_60);
      return;
    }
    local_60 = operator_new(0x1000);
    __split_buffer<std::__ndk1::pair<void(*)(v8::Isolate*,void*),void*>*,std::__ndk1::allocator<std::__ndk1::pair<void(*)(v8::Isolate*,void*),void*>*>>
    ::push_front((__split_buffer<std::__ndk1::pair<void(*)(v8::Isolate*,void*),void*>*,std::__ndk1::allocator<std::__ndk1::pair<void(*)(v8::Isolate*,void*),void*>*>>
                  *)this,&local_60);
    local_60 = (pair *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  else {
    *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) - 0x100;
    local_60 = (pair *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  FUN_00f58adc(this,&local_60);
  return;
}

