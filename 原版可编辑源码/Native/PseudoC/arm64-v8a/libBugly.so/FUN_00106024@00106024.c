
undefined8 FUN_00106024(uint *param_1,long param_2)

{
  long lVar1;
  byte *pbVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if ((param_1 == (uint *)0x0) || (param_2 == 0)) {
    uVar3 = 0xffffffff;
  }
  else if (param_1[2] == 3) {
    lVar4 = (long)param_1 + ((ulong)*param_1 + 3 & 0xfffffffffffffffc) + 0xc;
    if (0x10 < param_1[1]) {
      lVar4 = lVar4 + (ulong)(param_1[1] - 0x10);
    }
    lVar5 = 0;
    do {
      pbVar2 = (byte *)(lVar4 + lVar5);
      lVar1 = lVar5 * 2;
      lVar5 = lVar5 + 1;
      snprintf((char *)(param_2 + lVar1),3,"%02x",(ulong)*pbVar2);
    } while (lVar5 != 0x10);
    *(undefined1 *)(param_2 + 0x20) = 0;
    uVar3 = 0;
  }
  else {
    log2Console(5,"CrashReport-Native","GNU note type is not GNU_NOTE_TYPE_BUILD_ID(3).");
    uVar3 = 0xfffffffe;
  }
  return uVar3;
}

