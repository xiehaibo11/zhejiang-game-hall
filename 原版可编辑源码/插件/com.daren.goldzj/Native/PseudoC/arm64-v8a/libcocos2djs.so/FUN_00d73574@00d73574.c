
int FUN_00d73574(long param_1,undefined4 param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x170);
  if (iVar2 != 0) {
    local_78 = (undefined1)((uint)iVar2 >> 0x18);
    local_77 = (undefined1)((uint)iVar2 >> 0x10);
    local_76 = (undefined1)((uint)iVar2 >> 8);
    local_75 = (undefined1)iVar2;
    png_safecat(&local_78,0x40,4," using zstream");
    png_chunk_warning(param_1,&local_78);
    *(undefined4 *)(param_1 + 0x170) = 0;
  }
  uVar3 = 0xf;
  if (((*(byte *)(param_1 + 0x400) ^ 0xff) & 0xc) != 0) {
    uVar3 = 0;
  }
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  if ((*(byte *)(param_1 + 0x168) >> 1 & 1) == 0) {
    iVar2 = inflateInit2_(param_1 + 0x178,uVar3,"1.2.8",0x70);
    if (iVar2 != 0) {
LAB_00d7364c:
      png_zstream_error(param_1,iVar2);
      goto LAB_00d73664;
    }
    *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 2;
  }
  else {
    iVar2 = inflateReset2(param_1 + 0x178,uVar3);
    if (iVar2 != 0) goto LAB_00d7364c;
  }
  iVar2 = 0;
  *(undefined4 *)(param_1 + 0x170) = param_2;
LAB_00d73664:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

