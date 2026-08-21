
/* cocos2d::Animation3DCache::removeAllAnimations() */

void __thiscall cocos2d::Animation3DCache::removeAllAnimations(Animation3DCache *this)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_58 [16];
  void *local_48;
  Ref *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  for (plVar5 = *(long **)(this + 0x10); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_58,(basic_string *)(plVar5 + 2));
    local_40 = (Ref *)plVar5[5];
    if (local_40 != (Ref *)0x0) {
      Ref::release(local_40);
    }
    if (((byte)local_58[0] & 1) != 0) {
      operator_delete(local_48);
    }
  }
  if (*(long *)(this + 0x18) != 0) {
    puVar2 = *(void **)(this + 0x10);
    while (puVar2 != (void *)0x0) {
      pvVar6 = (void *)*puVar2;
      if ((*(byte *)(puVar2 + 2) & 1) != 0) {
        operator_delete((void *)puVar2[4]);
      }
      operator_delete(puVar2);
      puVar2 = pvVar6;
    }
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x10) = 0;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        *(undefined8 *)(*(long *)this + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    *(undefined8 *)(this + 0x18) = 0;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

