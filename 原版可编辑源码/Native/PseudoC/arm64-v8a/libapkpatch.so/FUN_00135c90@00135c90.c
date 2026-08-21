
void FUN_00135c90(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long local_1078;
  undefined8 uStack_1070;
  long local_1068;
  undefined1 *puStack_1060;
  long local_1058;
  long lStack_1050;
  undefined1 auStack_1048 [4096];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uStack_1070 = *(undefined8 *)(param_3 + 8);
  puStack_1060 = auStack_1048;
  local_1078 = 0;
  lStack_1050 = 0x1000;
  local_1058 = 0x1000;
  local_1068 = param_3;
  uVar4 = FUN_00135a20(&local_1078,0x26,param_1 + 0x14);
  if ((int)uVar4 != 0) {
    iVar3 = strcmp((char *)(param_1 + 0x14),"HDIFF13");
    if (iVar3 == 0) {
      uVar4 = FUN_00135a20(&local_1078,0,param_1 + 0x14);
      if ((int)uVar4 != 0) {
        *(long *)(param_2 + 0x48) = (local_1078 - lStack_1050) + local_1058;
        uVar4 = FUN_00135b90(&local_1078,param_1,0);
        if ((((int)uVar4 != 0) && (uVar4 = FUN_00135b90(&local_1078,param_1 + 8,0), (int)uVar4 != 0)
            ) && (uVar4 = FUN_00135b90(&local_1078,param_2,0), (int)uVar4 != 0)) {
          *(long *)(param_2 + 0x50) = (local_1078 - lStack_1050) + local_1058;
          uVar4 = FUN_00135b90(&local_1078,param_2 + 8,0);
          if ((((((int)uVar4 != 0) &&
                (uVar4 = FUN_00135b90(&local_1078,param_2 + 0x10,0), (int)uVar4 != 0)) &&
               ((uVar4 = FUN_00135b90(&local_1078,param_2 + 0x18,0), (int)uVar4 != 0 &&
                ((uVar4 = FUN_00135b90(&local_1078,param_2 + 0x20,0), (int)uVar4 != 0 &&
                 (uVar4 = FUN_00135b90(&local_1078,param_2 + 0x28,0), (int)uVar4 != 0)))))) &&
              (uVar4 = FUN_00135b90(&local_1078,param_2 + 0x30,0), (int)uVar4 != 0)) &&
             ((uVar4 = FUN_00135b90(&local_1078,param_2 + 0x38,0), (int)uVar4 != 0 &&
              (uVar4 = FUN_00135b90(&local_1078,param_2 + 0x40,0), (int)uVar4 != 0)))) {
            lVar5 = *(long *)(param_2 + 0x10);
            lVar1 = (local_1058 - lStack_1050) + local_1078;
            uVar6 = (uint)(*(long *)(param_2 + 0x20) != 0);
            if (lVar5 != 0) {
              uVar6 = uVar6 + 1;
            }
            if (*(long *)(param_2 + 0x30) != 0) {
              uVar6 = uVar6 + 1;
            }
            if (*(long *)(param_2 + 0x40) != 0) {
              uVar6 = uVar6 + 1;
            }
            *(long *)(param_2 + 0x58) = lVar1;
            *(uint *)(param_1 + 0x10) = uVar6;
            if (lVar5 == 0) {
              lVar5 = *(long *)(param_2 + 8);
            }
            uVar4 = 1;
            *(long *)(param_2 + 0x60) = lVar1 + lVar5;
          }
        }
      }
    }
    else {
      uVar4 = 0;
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

