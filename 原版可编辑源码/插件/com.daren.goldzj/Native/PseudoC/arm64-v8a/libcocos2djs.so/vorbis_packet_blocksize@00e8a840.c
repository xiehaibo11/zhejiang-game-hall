
void vorbis_packet_blocksize(long param_1,undefined8 *param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar7 = *(long *)(param_1 + 0x30);
  uVar8 = *(uint *)(lVar7 + 0x10);
  oggpack_readinit(auStack_68,*param_2);
  lVar3 = oggpack_read(auStack_68,1);
  if (lVar3 == 0) {
    if ((int)uVar8 < 2) {
      iVar6 = 0;
    }
    else {
      iVar6 = 0;
      do {
        iVar6 = iVar6 + 1;
        bVar1 = 3 < uVar8;
        uVar8 = uVar8 >> 1;
      } while (bVar1);
    }
    uVar5 = oggpack_read(auStack_68,iVar6);
    if ((int)uVar5 == -1) {
      uVar4 = 0xffffffffffffff78;
    }
    else {
      uVar4 = *(undefined8 *)
               (lVar7 + (ulong)*(byte *)(*(long *)(lVar7 + 0x28) +
                                        (-(uVar5 >> 0x1f & 1) & 0xfffffffe00000000 |
                                        (uVar5 & 0xffffffff) << 1)) * 8);
    }
  }
  else {
    uVar4 = 0xffffffffffffff79;
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

