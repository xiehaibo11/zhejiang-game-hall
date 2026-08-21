
undefined4 TIFFReadRGBAStrip(long param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  uint local_4dc;
  long local_4d8 [2];
  undefined4 local_4c4;
  code *local_498;
  long local_490;
  uint local_450;
  undefined4 uStack_44c;
  undefined1 auStack_448 [1032];
  
  lVar2 = tpidr_el0;
  lVar7 = *(long *)(lVar2 + 0x28);
  memset(auStack_448,0,0x400);
  iVar3 = TIFFIsTiled(param_1);
  if (iVar3 == 0) {
    TIFFGetFieldDefaulted(param_1,0x116,&local_4dc);
    uVar1 = 0;
    if (local_4dc != 0) {
      uVar1 = param_2 / local_4dc;
    }
    if (param_2 != uVar1 * local_4dc) {
      uVar8 = *(undefined8 *)(param_1 + 0x3b8);
      uVar5 = TIFFFileName(param_1);
      pcVar6 = "Row passed to TIFFReadRGBAStrip() must be first in a strip.";
      goto LAB_00dc5cec;
    }
    iVar3 = TIFFRGBAImageOK(param_1,auStack_448);
    if ((iVar3 != 0) && (iVar3 = TIFFRGBAImageBegin(local_4d8,param_1,0,auStack_448), iVar3 != 0)) {
      uStack_44c = 0;
      local_450 = param_2;
      if (local_498 == (code *)0x0) {
        uVar8 = *(undefined8 *)(local_4d8[0] + 0x3b8);
        uVar5 = TIFFFileName();
        pcVar6 = "No \"get\" routine setup";
LAB_00dc5dec:
        TIFFErrorExt(uVar8,uVar5,pcVar6);
        uVar4 = 0;
      }
      else {
        if (local_490 == 0) {
          uVar8 = *(undefined8 *)(local_4d8[0] + 0x3b8);
          uVar5 = TIFFFileName();
          pcVar6 = "No \"put\" routine setupl; probably can not handle image format";
          goto LAB_00dc5dec;
        }
        uVar4 = (*local_498)(local_4d8,param_3,local_4c4);
      }
      TIFFRGBAImageEnd(local_4d8);
      goto LAB_00dc5cf8;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x3b8);
    uVar5 = TIFFFileName(param_1);
    TIFFErrorExt(uVar8,uVar5,"%s",auStack_448);
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x3b8);
    uVar5 = TIFFFileName(param_1);
    pcVar6 = "Can\'t use TIFFReadRGBAStrip() with tiled file.";
LAB_00dc5cec:
    TIFFErrorExt(uVar8,uVar5,pcVar6);
  }
  uVar4 = 0;
LAB_00dc5cf8:
  if (*(long *)(lVar2 + 0x28) == lVar7) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

