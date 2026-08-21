
/* cocos2d::BatchSprite3D::setTransparentEnable(bool) */

void __thiscall cocos2d::BatchSprite3D::setTransparentEnable(BatchSprite3D *this,bool param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_58 [16];
  void *local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar5 = pGlobalBatchMeshMap;
  if (pGlobalBatchMeshMap != (long *)&DAT_01787360) {
    do {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(local_58,(basic_string *)(plVar5 + 4));
      local_40 = plVar5[7];
      *(bool *)(local_40 + 0x283) = param_1;
      if (((byte)local_58[0] & 1) != 0) {
        operator_delete(local_48);
      }
      plVar2 = (long *)plVar5[1];
      if ((long *)plVar5[1] == (long *)0x0) {
        plVar2 = plVar5 + 2;
        plVar3 = (long *)*plVar2;
        if ((long *)*plVar3 != plVar5) {
          do {
            lVar4 = *plVar2;
            plVar2 = (long *)(lVar4 + 0x10);
            plVar3 = (long *)*plVar2;
          } while (*plVar3 != lVar4);
        }
      }
      else {
        do {
          plVar3 = plVar2;
          plVar2 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
      plVar5 = plVar3;
    } while (plVar3 != (long *)&DAT_01787360);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

