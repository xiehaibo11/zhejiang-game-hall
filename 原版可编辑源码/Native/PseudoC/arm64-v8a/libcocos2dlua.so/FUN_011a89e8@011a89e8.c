
void FUN_011a89e8(long param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  timespec local_60;
  
  FUN_011a3688(*(undefined8 *)(param_2 + -0x80),param_2,1);
  if (*(int *)(param_2 + 0x30) != -1) {
    do {
      while (uVar2 = FUN_011a2f64(), (int)uVar2 < 0) {
        if (uVar2 != 0xffffff99) {
          if (uVar2 == 0xfffffff5) {
            return;
          }
          if ((uVar2 | 1) == 0xffffffe9) {
            if (*(int *)(param_1 + 0x300) == -1) {
              uVar2 = 0xffffffe8;
            }
            else {
              uVar1 = *(undefined4 *)(param_2 + 0x30);
              FUN_011a2d5c();
              *(undefined4 *)(param_1 + 0x300) = 0xffffffff;
              do {
                while (uVar2 = FUN_011a2f64(uVar1), -1 < (int)uVar2) {
                  FUN_011a2d5c(uVar2);
                }
              } while (uVar2 == 0xfffffffc);
              iVar3 = FUN_011a2e68(&DAT_0144b7ba,0);
              if (-1 < iVar3) {
                *(int *)(param_1 + 0x300) = iVar3;
              }
              if (uVar2 == 0xfffffff5) {
                return;
              }
            }
          }
          (**(code **)(param_2 + 0x58))(param_2 + -0x88,uVar2);
        }
LAB_011a8b30:
        if (*(int *)(param_2 + 0x30) == -1) {
          return;
        }
      }
      *(uint *)(param_2 + 100) = uVar2;
      (**(code **)(param_2 + 0x58))(param_2 + -0x88,0);
      if (*(int *)(param_2 + 100) != -1) {
        FUN_011a37d8(param_1,param_2,1);
        return;
      }
      if ((*(int *)(param_2 + -0x78) != 0xc) || ((*(byte *)(param_2 + -0x2d) >> 2 & 1) == 0))
      goto LAB_011a8b30;
      local_60.tv_nsec = 1;
      local_60.tv_sec = 0;
      nanosleep(&local_60,(timespec *)0x0);
    } while (*(int *)(param_2 + 0x30) != -1);
  }
  return;
}

