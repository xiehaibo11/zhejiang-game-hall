
int __gxx_personality_v0(int param_1,ulong param_2,ulong param_3,long param_4,long param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  int local_38;
  
  iVar2 = 3;
  if (((param_1 == 1) && (param_4 != 0)) && (param_5 != 0)) {
    param_3 = param_3 & 0xffffffffffffff00;
    if ((param_2 & 1) == 0) {
      if (((uint)param_2 >> 1 & 1) == 0) {
        iVar2 = 3;
      }
      else {
        if (((uint)param_2 >> 2 & 1) == 0) {
          FUN_00116cc8(&local_60,param_2,param_3 == 0x434c4e47432b2b00,param_4,param_5);
          if (local_38 != 6) {
            return local_38;
          }
          FUN_0012ae7c(param_5,0,param_4);
          FUN_0012ae7c(param_5,1,local_60);
          uVar3 = local_48;
        }
        else {
          if (param_3 == 0x434c4e47432b2b00) {
            local_60 = (long)*(int *)(param_4 + -0x2c);
            uStack_50 = *(undefined8 *)(param_4 + -0x20);
            local_58 = *(undefined8 *)(param_4 + -0x28);
            uStack_40 = *(undefined8 *)(param_4 + -0x10);
            local_48 = *(undefined8 *)(param_4 + -0x18);
          }
          else {
            FUN_00116cc8(&local_60,param_2,0,param_4,param_5);
            if (local_38 != 6) {
                    /* WARNING: Subroutine does not return */
              FUN_001172e4(0,param_4);
            }
          }
          uVar3 = local_48;
          lVar1 = local_60;
          FUN_0012ae7c(param_5,0,param_4);
          FUN_0012ae7c(param_5,1,lVar1);
        }
        FUN_0012aef0(param_5,uVar3);
        iVar2 = 7;
      }
    }
    else {
      FUN_00116cc8(&local_60,param_2,param_3 == 0x434c4e47432b2b00,param_4,param_5);
      iVar2 = local_38;
      if ((local_38 == 6) && (param_3 == 0x434c4e47432b2b00)) {
        iVar2 = 6;
        *(int *)(param_4 + -0x2c) = (int)local_60;
        *(undefined8 *)(param_4 + -0x20) = uStack_50;
        *(undefined8 *)(param_4 + -0x28) = local_58;
        *(undefined8 *)(param_4 + -0x10) = uStack_40;
        *(undefined8 *)(param_4 + -0x18) = local_48;
      }
    }
  }
  return iVar2;
}

