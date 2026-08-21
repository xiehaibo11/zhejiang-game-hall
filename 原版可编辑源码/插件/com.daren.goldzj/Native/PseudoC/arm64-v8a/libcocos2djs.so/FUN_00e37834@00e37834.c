
undefined8 FUN_00e37834(long param_1,int param_2,uint param_3,uint param_4,long *param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 auStack_c08 [8];
  long local_c00;
  undefined8 local_bb8;
  undefined1 local_b84;
  undefined1 local_b82;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 auStack_50 [16];
  undefined1 local_34 [4];
  
  if ((param_4 >> 4 & 1) == 0) {
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(param_1 + 0x310) + 0x18))
                      (auStack_c08,param_1,0,0,*(undefined8 *)(param_1 + 0x288),
                       *(undefined8 *)(param_1 + 0x350),0,0,FUN_00e394cc);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    local_b82 = 1;
    local_b84 = 0;
    local_16c = *(undefined4 *)(param_1 + 0x260);
    uStack_160 = *(undefined8 *)(param_1 + 0x270);
    local_168 = *(undefined8 *)(param_1 + 0x268);
    local_158 = *(undefined8 *)(param_1 + 0x278);
    local_70 = *(undefined8 *)(param_1 + 0x368);
    local_68 = *(undefined4 *)(param_1 + 0x360);
    if (param_3 != 0) {
      uVar5 = (ulong)param_3;
      do {
        while( true ) {
          local_34[0] = 0;
          iVar1 = FUN_00e3952c(auStack_c08,param_2,auStack_50,local_34);
          if (iVar1 == 0) break;
          *param_5 = 0;
          uVar5 = uVar5 - 1;
          param_2 = param_2 + 1;
          param_5 = param_5 + 1;
          if (uVar5 == 0) {
            return 0;
          }
        }
        plVar4 = *(long **)(*(long *)(local_c00 + 0xf0) + 0x68);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))(plVar4[1],auStack_50);
        }
        lVar3 = FT_RoundFix(local_bb8);
        *param_5 = lVar3 >> 0x10;
        uVar5 = uVar5 - 1;
        param_2 = param_2 + 1;
        param_5 = param_5 + 1;
      } while (uVar5 != 0);
    }
  }
  else if (param_3 != 0) {
    memset(param_5,0,(ulong)param_3 << 3);
  }
  return 0;
}

