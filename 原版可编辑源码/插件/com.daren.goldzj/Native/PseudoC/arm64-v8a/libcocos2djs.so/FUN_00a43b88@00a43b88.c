
undefined4
FUN_00a43b88(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4,undefined8 param_5,
            undefined8 param_6)

{
  long lVar1;
  undefined4 uVar2;
  size_t sVar3;
  long lVar4;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_2 == (char *)0x0) {
    sVar3 = 0;
  }
  else {
    sVar3 = strlen(param_2);
  }
  strlen(param_4);
  uVar2 = FUN_00a16cf8();
  lVar4 = FUN_00a52e14(&PTR_MD5_Init_01c6e520,param_4,uVar2);
  if (lVar4 != 0) {
    if (sVar3 != 0) {
      uVar2 = FUN_00a16cf8(sVar3);
      FUN_00a52fa8(lVar4,param_2,uVar2);
    }
    FUN_00a52fc8(lVar4,&local_68);
                    /* try { // try from 00a43c4c to 00b43d33 has its CatchHandler @ 00a43a94 */
    lVar4 = FUN_00a0e870("%s %02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x",
                         param_3,local_68,local_67,local_66,local_65,local_64,local_63,local_62,
                         local_61,local_60,local_5f,local_5e,local_5d,local_5c,local_5b,local_5a,
                         local_59);
    if (lVar4 != 0) {
                    /* catch() { ... } // from try @ 00a43b18 with catch @ 00a43cc4 */
      uVar2 = FUN_00a19db8(param_1,lVar4,0,param_5,param_6);
                    /* catch() { ... } // from try @ 00a43b0c with catch @ 00a43cc8 */
                    /* catch() { ... } // from try @ 00a43aec with catch @ 00a43ccc */
                    /* catch() { ... } // from try @ 00a43b24 with catch @ 00a43cdc */
      (*(code *)PTR_free_01d1b748)(lVar4);
      goto LAB_00a43ce8;
    }
  }
  uVar2 = 0x1b;
LAB_00a43ce8:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

