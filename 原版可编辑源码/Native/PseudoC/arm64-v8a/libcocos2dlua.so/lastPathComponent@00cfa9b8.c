
/* cocosbuilder::CCBReader::lastPathComponent(char const*) */

void __thiscall cocosbuilder::CCBReader::lastPathComponent(CCBReader *this,char *param_1)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong *in_x8;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  ulong uVar8;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_70,(char *)this);
  pvVar7 = local_60;
  uVar2 = uStack_68;
  uVar4 = local_70;
  pvVar1 = (void *)((ulong)&local_70 | 1);
  uVar8 = local_70 >> 1 & 0x7f;
  if ((local_70 & 1) != 0) {
    pvVar1 = local_60;
    uVar8 = uStack_68;
  }
  uVar6 = uVar8;
  if (uVar8 != 0) {
    do {
      uVar5 = uVar6;
      if (uVar5 == 0) goto LAB_00cfaa78;
      uVar6 = uVar5 - 1;
    } while (*(char *)((long)pvVar1 + (uVar5 - 1)) != '/');
    if (uVar6 != 0xffffffffffffffff) {
      uVar2 = uVar8 - uVar6;
      *in_x8 = 0;
      in_x8[1] = 0;
      in_x8[2] = 0;
      if (uVar8 < uVar6 || uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
      }
      uVar6 = uVar8 - uVar5;
      if (uVar2 <= uVar8 - uVar5) {
        uVar6 = uVar2;
      }
      if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (uVar6 < 0x17) {
        pvVar7 = (void *)((long)in_x8 + 1);
        *(char *)in_x8 = (char)((int)uVar6 << 1);
        if (uVar6 != 0) goto LAB_00cfaadc;
      }
      else {
        uVar8 = uVar6 + 0x10 & 0xfffffffffffffff0;
        pvVar7 = operator_new(uVar8);
        in_x8[1] = uVar6;
        in_x8[2] = (ulong)pvVar7;
        *in_x8 = uVar8 | 1;
LAB_00cfaadc:
        memcpy(pvVar7,(void *)((long)pvVar1 + uVar5),uVar6);
      }
      *(undefined1 *)((long)pvVar7 + uVar6) = 0;
      if ((uVar4 & 1) != 0) {
        operator_delete(local_60);
      }
      goto LAB_00cfaa90;
    }
  }
LAB_00cfaa78:
  uStack_68 = 0;
  local_60 = (void *)0x0;
  local_70 = 0;
  in_x8[2] = (ulong)pvVar7;
  in_x8[1] = uVar2;
  *in_x8 = uVar4;
LAB_00cfaa90:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

