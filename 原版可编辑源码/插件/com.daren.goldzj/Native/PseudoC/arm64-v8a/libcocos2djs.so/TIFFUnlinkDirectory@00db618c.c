
undefined8 TIFFUnlinkDirectory(long param_1,short param_2)

{
  short sVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 local_3c;
  undefined8 local_38;
  ulong local_28;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x3b8);
    pcVar4 = "Can not unlink directory in read-only file";
LAB_00db62bc:
    TIFFErrorExt(uVar2,"TIFFUnlinkDirectory",pcVar4);
LAB_00db62c0:
    uVar2 = 0;
  }
  else {
    sVar1 = param_2;
    if ((*(byte *)(param_1 + 0x12) >> 3 & 1) == 0) {
      local_28 = (ulong)*(uint *)(param_1 + 0x26c);
      local_38 = 4;
    }
    else {
      local_28 = *(ulong *)(param_1 + 0x270);
      local_38 = 8;
    }
    do {
      sVar1 = sVar1 + -1;
      if (sVar1 == 0) {
        uVar2 = FUN_00db5d50(param_1,&local_28,0);
        if ((int)uVar2 == 0) {
          return uVar2;
        }
        (**(code **)(param_1 + 0x3d0))(*(undefined8 *)(param_1 + 0x3b8),local_38,0);
        uVar5 = *(uint *)(param_1 + 0x10);
        if ((uVar5 >> 0x13 & 1) == 0) {
          local_3c = (undefined4)local_28;
          if ((uVar5 >> 7 & 1) != 0) {
            TIFFSwabLong(&local_3c);
          }
          lVar3 = (**(code **)(param_1 + 0x3c8))(*(undefined8 *)(param_1 + 0x3b8),&local_3c,4);
          if (lVar3 == 4) {
LAB_00db6300:
            (**(code **)(param_1 + 0x338))(param_1);
            uVar5 = *(uint *)(param_1 + 0x10);
            if (((uVar5 >> 9 & 1) != 0) && (*(void **)(param_1 + 0x368) != (void *)0x0)) {
              _TIFFfree(*(void **)(param_1 + 0x368));
              *(undefined8 *)(param_1 + 0x368) = 0;
              *(undefined8 *)(param_1 + 0x390) = 0;
              *(undefined8 *)(param_1 + 0x380) = 0;
              *(undefined8 *)(param_1 + 0x378) = 0;
              uVar5 = *(uint *)(param_1 + 0x10);
            }
            *(uint *)(param_1 + 0x10) = uVar5 & 0xffefefaf;
            TIFFFreeDirectory(param_1);
            TIFFDefaultDirectory(param_1);
            *(undefined8 *)(param_1 + 0x288) = 0;
            *(undefined8 *)(param_1 + 0x18) = 0;
            *(undefined8 *)(param_1 + 0x20) = 0;
            *(undefined4 *)(param_1 + 0x27c) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x284) = 0xffffffff;
            return 1;
          }
        }
        else {
          if ((uVar5 >> 7 & 1) != 0) {
            TIFFSwabLong8(&local_28);
          }
          lVar3 = (**(code **)(param_1 + 0x3c8))(*(undefined8 *)(param_1 + 0x3b8),&local_28,8);
          if (lVar3 == 8) goto LAB_00db6300;
        }
        uVar2 = *(undefined8 *)(param_1 + 0x3b8);
        pcVar4 = "Error writing directory link";
        goto LAB_00db62bc;
      }
      if (local_28 == 0) {
        TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFUnlinkDirectory",
                     "Directory %d does not exist",param_2);
        goto LAB_00db62c0;
      }
      uVar2 = FUN_00db5d50(param_1,&local_28,&local_38);
    } while ((int)uVar2 != 0);
  }
  return uVar2;
}

