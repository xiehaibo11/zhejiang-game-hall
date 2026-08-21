
/* XMLHttpRequest::getMimeType() const */

void XMLHttpRequest::getMimeType(void)

{
  basic_string bVar1;
  long lVar2;
  basic_string *in_x0;
  ulong *in_x8;
  long lVar3;
  void *__dest;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  byte local_60;
  undefined7 uStack_5f;
  ulong uStack_58;
  void *local_50;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  bVar1 = in_x0[0x228];
  if (((byte)bVar1 & 1) == 0) {
    if ((byte)bVar1 >> 1 == 0) goto LAB_008fa5d0;
LAB_008fa5a8:
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
    if (((byte)bVar1 & 1) != 0) {
      uVar4 = *(ulong *)(in_x0 + 0x230);
      if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      pvVar5 = *(void **)(in_x0 + 0x238);
      if (uVar4 < 0x17) {
        __dest = (void *)((long)in_x8 + 1);
        *(char *)in_x8 = (char)((int)uVar4 << 1);
        if (uVar4 != 0) goto LAB_008fa68c;
      }
      else {
        uVar6 = uVar4 + 0x10 & 0xfffffffffffffff0;
        __dest = operator_new(uVar6);
        in_x8[1] = uVar4;
        in_x8[2] = (ulong)__dest;
        *in_x8 = uVar6 | 1;
LAB_008fa68c:
        memcpy(__dest,pvVar5,uVar4);
      }
      *(undefined1 *)((long)__dest + uVar4) = 0;
      goto LAB_008fa724;
    }
    uStack_58 = *(ulong *)(in_x0 + 0x230);
    uVar4 = *(ulong *)(in_x0 + 0x228);
    in_x8[2] = *(ulong *)(in_x0 + 0x238);
LAB_008fa63c:
    in_x8[1] = uStack_58;
    *in_x8 = uVar4;
    goto LAB_008fa724;
  }
  if (*(long *)(in_x0 + 0x230) != 0) goto LAB_008fa5a8;
LAB_008fa5d0:
  getResonpseHeader(in_x0);
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  uVar4 = (ulong)(local_60 >> 1);
  if ((local_60 & 1) != 0) {
    uVar4 = uStack_58;
  }
  if (uVar4 == 0) {
    *(undefined1 *)in_x8 = 8;
    *(undefined4 *)((long)in_x8 + 1) = 0x74786574;
    *(undefined1 *)((long)in_x8 + 5) = 0;
    if ((local_60 & 1) == 0) goto LAB_008fa724;
  }
  else {
    if ((local_60 & 1) == 0) {
      uVar4 = CONCAT71(uStack_5f,local_60);
      in_x8[2] = (ulong)local_50;
      goto LAB_008fa63c;
    }
    if (0xffffffffffffffef < uStack_58) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_58 < 0x17) {
      pvVar5 = (void *)((long)in_x8 + 1);
      *(char *)in_x8 = (char)((int)uStack_58 << 1);
      if (uStack_58 != 0) goto LAB_008fa708;
    }
    else {
      uVar4 = uStack_58 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = operator_new(uVar4);
      in_x8[1] = uStack_58;
      in_x8[2] = (ulong)pvVar5;
      *in_x8 = uVar4 | 1;
LAB_008fa708:
      memcpy(pvVar5,local_50,uStack_58);
    }
    *(undefined1 *)((long)pvVar5 + uStack_58) = 0;
  }
  operator_delete(local_50);
LAB_008fa724:
  if (*(long *)(lVar2 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

