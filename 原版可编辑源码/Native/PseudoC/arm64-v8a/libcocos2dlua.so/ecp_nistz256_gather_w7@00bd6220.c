
void ecp_nistz256_gather_w7(ulong *param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  undefined1 *puVar9;
  long lVar10;
  
  puVar9 = (undefined1 *)(param_2 + param_3 + -(ulong)(param_3 != 0));
  lVar10 = 8;
  do {
    uVar8 = *puVar9;
    Hint_Prefetch(puVar9 + 0x1000,0,0,1);
    lVar10 = lVar10 + -1;
    puVar1 = puVar9 + 0x40;
    Hint_Prefetch(puVar9 + 0x1040,0,0,1);
    puVar2 = puVar9 + 0x80;
    Hint_Prefetch(puVar9 + 0x1080,0,0,1);
    puVar3 = puVar9 + 0xc0;
    Hint_Prefetch(puVar9 + 0x10c0,0,0,1);
    puVar4 = puVar9 + 0x100;
    Hint_Prefetch(puVar9 + 0x1100,0,0,1);
    puVar5 = puVar9 + 0x140;
    Hint_Prefetch(puVar9 + 0x1140,0,0,1);
    puVar6 = puVar9 + 0x180;
    Hint_Prefetch(puVar9 + 0x1180,0,0,1);
    puVar7 = puVar9 + 0x1c0;
    Hint_Prefetch(puVar9 + 0x11c0,0,0,1);
    puVar9 = puVar9 + 0x200;
    *param_1 = CONCAT26(CONCAT11(*puVar7,*puVar6),
                        CONCAT24(CONCAT11(*puVar5,*puVar4),
                                 CONCAT22(CONCAT11(*puVar3,*puVar2),CONCAT11(*puVar1,uVar8)))) &
               -(ulong)(param_3 != 0);
    param_1 = param_1 + 1;
  } while (lVar10 != 0);
  return;
}

