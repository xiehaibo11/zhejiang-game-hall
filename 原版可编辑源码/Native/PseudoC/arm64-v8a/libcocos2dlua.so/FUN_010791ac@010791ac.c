
undefined8 FUN_010791ac(long param_1,int param_2,uint param_3,uint param_4,long *param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 auStack_be8 [8];
  long local_be0;
  undefined8 local_b98;
  undefined1 local_b64;
  undefined1 local_b62;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 auStack_50 [16];
  
                    /* try { // try from 010791b8 to 011791c7 has its CatchHandler @ 0107924c */
                    /* try { // try from 010791c8 to 011792bb has its CatchHandler @ 010790b4 */
  if ((param_4 >> 4 & 1) == 0) {
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(param_1 + 0x308) + 0x18))
                      (auStack_be8,param_1,0,0,*(undefined8 *)(param_1 + 0x280),
                       *(undefined8 *)(param_1 + 0x348),0,0,FUN_0107c454);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    local_b62 = 1;
    local_b64 = 0;
    local_14c = *(undefined4 *)(param_1 + 0x260);
    uStack_140 = *(undefined8 *)(param_1 + 0x270);
    local_148 = *(undefined8 *)(param_1 + 0x268);
    local_60 = *(undefined8 *)(param_1 + 0x360);
    local_58 = *(undefined4 *)(param_1 + 0x358);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010791a8 with catch @ 01079248
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010791b8 with catch @ 0107924c
                        */
    if (param_3 != 0) {
      uVar5 = (ulong)param_3;
      do {
        iVar1 = FUN_0107c4ac(auStack_be8,param_2,auStack_50);
        if (iVar1 == 0) {
          plVar4 = *(long **)(*(long *)(local_be0 + 0xf0) + 0x60);
          if (plVar4 != (long *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01079150 with catch @ 01079280
                        */
            (**(code **)(*plVar4 + 8))(plVar4[1],auStack_50);
          }
          lVar3 = FT_RoundFix(local_b98);
          lVar3 = lVar3 >> 0x10;
        }
        else {
          lVar3 = 0;
        }
        *param_5 = lVar3;
        uVar5 = uVar5 - 1;
        param_2 = param_2 + 1;
        param_5 = param_5 + 1;
      } while (uVar5 != 0);
    }
  }
  else if (param_3 != 0) {
    memset(param_5,0,(ulong)(param_3 - 1) * 8 + 8);
  }
  return 0;
}

