
void jinit_d_coef_controller(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  void *__s;
  long lVar6;
  undefined4 *puVar7;
  code *pcVar8;
  
  puVar4 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0xe0);
  *(undefined8 **)(param_1 + 0x250) = puVar4;
  *puVar4 = FUN_010fb1b8;
  puVar4[2] = FUN_010fb1fc;
  puVar4[0x1b] = 0;
  if (param_2 == 0) {
    __s = (void *)(**(code **)(*(long *)(param_1 + 8) + 8))(param_1,1,0x500);
    puVar4[9] = (long)__s + 0x100;
    puVar4[8] = (long)__s + 0x80;
    puVar4[0xb] = (long)__s + 0x200;
    puVar4[10] = (long)__s + 0x180;
    puVar4[7] = __s;
    puVar4[0xd] = (long)__s + 0x300;
    puVar4[0xc] = (long)__s + 0x280;
    puVar4[0xf] = (long)__s + 0x400;
    puVar4[0xe] = (long)__s + 0x380;
    puVar4[0x10] = (long)__s + 0x480;
    if (*(int *)(param_1 + 0x238) == 0) {
      memset(__s,0,0x500);
    }
    puVar4[1] = FUN_010fb7d0;
    puVar4[3] = FUN_010fb7d8;
    puVar4[4] = 0;
  }
  else {
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar6 = 0;
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x130) + 0x1c);
      do {
        pcVar8 = *(code **)(*(long *)(param_1 + 8) + 0x28);
        iVar2 = puVar7[-4] * 3;
        iVar1 = puVar7[-4];
        if (*(int *)(param_1 + 0x13c) != 0) {
          iVar1 = iVar2;
        }
        uVar3 = jround_up(iVar2,*puVar7,(long)(int)puVar7[-5]);
        uVar5 = jround_up(puVar7[1],(long)(int)puVar7[-4]);
        uVar5 = (*pcVar8)(param_1,1,1,uVar3,uVar5,iVar1);
        puVar4[lVar6 + 0x11] = uVar5;
        lVar6 = lVar6 + 1;
        puVar7 = puVar7 + 0x18;
      } while (lVar6 < *(int *)(param_1 + 0x38));
    }
    puVar4[1] = FUN_010fb368;
    puVar4[3] = FUN_010fb5f8;
    puVar4[4] = puVar4 + 0x11;
  }
  return;
}

