
void FUN_00e45398(long param_1,long param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  long local_50;
  long local_48;
  
  iVar5 = *(int *)(param_2 + 0xc0);
  lVar7 = (long)iVar5;
  if ((-1 < iVar5) && (iVar5 < *(int *)(param_1 + 0x238))) {
    lVar8 = *(long *)(param_1 + 0x240);
    iVar5 = (**(code **)(param_2 + 0x68))(param_2,6,&local_70,3);
    if (5 < iVar5) {
      lVar6 = -local_58;
      if (-1 < local_58) {
        lVar6 = local_58;
      }
      if (lVar6 != 0) {
        puVar1 = (undefined8 *)(lVar8 + lVar7 * 0x150 + 0x108);
        if (lVar6 != 0x10000) {
          uVar4 = FT_DivFix(1000,lVar6);
          *(undefined2 *)(param_1 + 0x88) = uVar4;
          local_70 = FT_DivFix(local_70,lVar6);
          local_68 = FT_DivFix(local_68,lVar6);
          local_60 = FT_DivFix(local_60,lVar6);
          local_50 = FT_DivFix(local_50,lVar6);
          local_48 = FT_DivFix(local_48,lVar6);
          bVar2 = local_58 < 0;
          local_58 = 0x10000;
          if (bVar2) {
            local_58 = -0x10000;
          }
        }
        lVar6 = lVar8 + lVar7 * 0x150;
        *puVar1 = local_70;
        *(undefined8 *)(lVar6 + 0x118) = local_68;
        *(undefined8 *)(lVar6 + 0x110) = local_60;
        *(long *)(lVar6 + 0x120) = local_58;
        cVar3 = FUN_00e1317c(puVar1);
        if (cVar3 == '\0') {
          *(undefined4 *)(param_2 + 0x18) = 3;
        }
        else {
          lVar8 = lVar8 + lVar7 * 0x150;
          *(long *)(lVar8 + 0x128) = local_50 >> 0x10;
          *(long *)(lVar8 + 0x130) = local_48 >> 0x10;
        }
      }
    }
  }
  return;
}

