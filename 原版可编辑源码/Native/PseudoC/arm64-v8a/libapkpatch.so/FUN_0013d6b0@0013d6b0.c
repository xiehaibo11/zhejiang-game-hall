
undefined4
FUN_0013d6b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
            long param_6,long param_7)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined1 auStack_6c [4];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  plVar4 = (long *)FUN_0013d808(param_2,param_3,param_4,0,*(undefined8 *)(param_1 + 0x88),0x2000);
  if (plVar4 == (long *)0x0) {
LAB_0013d7a0:
    uVar6 = 0;
  }
  else {
    if (param_5 != 0) {
      uVar7 = 0;
      lVar1 = *(long *)(param_1 + 0x88) + 0x2000;
      do {
        uVar5 = param_5 - uVar7;
        if (0x1fff < uVar5) {
          uVar5 = 0x2000;
        }
        plVar4[8] = lVar1;
        iVar3 = (int)uVar5;
        *(int *)(plVar4 + 9) = iVar3;
        while (iVar3 != 0) {
          iVar3 = FUN_0013f594(plVar4);
          if (iVar3 == 0) goto LAB_0013d7a0;
          iVar3 = (int)plVar4[9];
        }
        iVar3 = (**(code **)(param_6 + 0x18))(param_6,uVar7 + param_7,lVar1,lVar1 + uVar5);
        if (iVar3 == 0) goto LAB_0013d7a0;
        uVar7 = uVar5 + uVar7;
      } while (uVar7 < param_5);
    }
    do {
      if (*plVar4 == plVar4[1]) {
        if ((int)plVar4[9] == 0 && (int)plVar4[6] == 0) goto LAB_0013d7c4;
        break;
      }
      plVar4[8] = (long)auStack_6c;
      *(undefined4 *)(plVar4 + 9) = 0;
      iVar3 = FUN_0013f594(plVar4);
    } while (iVar3 != 0);
    puts("WARNING: zip format error, decompress not finish!");
LAB_0013d7c4:
    uVar6 = 1;
  }
  FUN_0013d908(plVar4);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

