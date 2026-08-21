
undefined8 FUN_00a50514(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
                    /* try { // try from 00a5051c to 00b5052b has its CatchHandler @ 00a504ac */
                    /* try { // try from 00a5052c to 00b50537 has its CatchHandler @ 00a50568 */
  lVar6 = *param_1;
                    /* try { // try from 00a50538 to 00b5057b has its CatchHandler @ 00a504ac */
  lVar7 = *(long *)(lVar6 + 0x218);
  if ((*(long *)(lVar6 + 0x5f0) != 0) && (*(long *)(lVar6 + 0x5f0) < param_2)) {
    FUN_00a23020(lVar6,"Maximum file size exceeded");
    return 0x3f;
  }
  *(long *)(lVar7 + 0x20) = param_2;
  plVar1 = (long *)(lVar6 + 0x8cd8);
                    /* catch() { ... } // from try @ 00a505e4 with catch @ 00a5057c */
  lVar3 = *plVar1;
  if (lVar3 == 0) {
    uVar2 = FUN_00a3e3a4(param_1 + 0xc3,"RETR %s",param_1[0xd4]);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar4 = 0x20;
  }
  else {
    if (param_2 == -1) {
      FUN_00a22d58(lVar6,"ftp server doesn\'t support SIZE\n");
      lVar5 = *(long *)(lVar7 + 0x20);
    }
    else if (lVar3 < 0) {
      lVar5 = -lVar3;
      if (-param_2 != lVar3 && param_2 <= lVar5) goto LAB_00a50668;
      *(long *)(lVar7 + 0x20) = lVar5;
      *plVar1 = lVar3 + param_2;
    }
    else {
      if (param_2 < lVar3) {
LAB_00a50668:
        FUN_00a23020(lVar6,"Offset (%ld) was beyond file size (%ld)",lVar3,param_2);
        return 0x24;
      }
      lVar5 = param_2 - lVar3;
      *(long *)(lVar7 + 0x20) = lVar5;
    }
    if (lVar5 == 0) {
      FUN_00a335d8(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
                    /* try { // try from 00a505d4 to 00b505e3 has its CatchHandler @ 00a506bc */
      FUN_00a22d58(lVar6,"File already completely downloaded\n");
      *(undefined4 *)(lVar7 + 0x18) = 2;
                    /* try { // try from 00a505e4 to 00b506d7 has its CatchHandler @ 00a5057c */
      *(undefined4 *)(param_1 + 0xd9) = 0;
      return 0;
    }
    FUN_00a22d58(lVar6,"Instructs server to resume from offset %ld\n",*plVar1);
    uVar2 = FUN_00a3e3a4(param_1 + 0xc3,"REST %ld",*plVar1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar4 = 0x1b;
  }
  *(undefined4 *)(param_1 + 0xd9) = uVar4;
                    /* catch() { ... } // from try @ 00a504f0 with catch @ 00a50568
                       catch() { ... } // from try @ 00a5052c with catch @ 00a50568 */
  return uVar2;
}

