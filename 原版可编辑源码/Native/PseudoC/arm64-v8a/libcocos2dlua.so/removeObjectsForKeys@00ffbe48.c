
/* cocos2d::__Dictionary::removeObjectsForKeys(cocos2d::__Array*) */

void __thiscall cocos2d::__Dictionary::removeObjectsForKeys(__Dictionary *this,__Array *param_1)

{
  long lVar1;
  __String *this_00;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != (__Array *)0x0) {
    lVar3 = **(long **)(param_1 + 0x30);
    if (0 < lVar3) {
      puVar4 = (undefined8 *)(*(long **)(param_1 + 0x30))[2];
      puVar5 = puVar4 + lVar3 + -1;
      if (puVar4 <= puVar5) {
        this_00 = (__String *)*puVar4;
        while (this_00 != (__String *)0x0) {
          pcVar2 = (char *)__String::getCString(this_00);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_50,pcVar2);
          removeObjectForKey(this,(basic_string *)local_50);
          if (((byte)local_50[0] & 1) != 0) {
            operator_delete(local_40);
          }
          puVar4 = puVar4 + 1;
          if (puVar5 < puVar4) break;
          this_00 = (__String *)*puVar4;
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

