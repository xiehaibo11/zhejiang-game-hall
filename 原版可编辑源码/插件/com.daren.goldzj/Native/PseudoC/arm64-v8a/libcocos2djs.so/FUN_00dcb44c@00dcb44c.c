
void FUN_00dcb44c(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5,int param_6,int param_7,int param_8,undefined1 *param_9,
                 undefined1 *param_10,undefined1 *param_11,undefined1 *param_12)

{
  long lVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  
  if (param_6 != 0) {
    lVar1 = (ulong)(param_5 - 8 & 0xfffffff8) + 8;
    do {
      uVar2 = param_5;
      if (7 < param_5) {
        puVar8 = param_10 + lVar1;
        puVar7 = param_12 + lVar1;
        puVar5 = param_11;
        puVar6 = param_9;
        puVar4 = param_2;
        do {
          uVar2 = uVar2 - 8;
          *puVar4 = CONCAT13(*param_12,CONCAT12(*puVar5,CONCAT11(*param_10,*puVar6)));
          puVar4[1] = CONCAT13(param_12[1],CONCAT12(puVar5[1],CONCAT11(param_10[1],puVar6[1])));
          puVar4[2] = CONCAT13(param_12[2],CONCAT12(puVar5[2],CONCAT11(param_10[2],puVar6[2])));
          puVar4[3] = CONCAT13(param_12[3],CONCAT12(puVar5[3],CONCAT11(param_10[3],puVar6[3])));
          puVar4[4] = CONCAT13(param_12[4],CONCAT12(puVar5[4],CONCAT11(param_10[4],puVar6[4])));
          puVar4[5] = CONCAT13(param_12[5],CONCAT12(puVar5[5],CONCAT11(param_10[5],puVar6[5])));
          puVar4[6] = CONCAT13(param_12[6],CONCAT12(puVar5[6],CONCAT11(param_10[6],puVar6[6])));
          puVar10 = puVar6 + 7;
          puVar9 = param_10 + 7;
          puVar12 = puVar5 + 7;
          puVar6 = puVar6 + 8;
          param_10 = param_10 + 8;
          puVar11 = param_12 + 7;
          puVar5 = puVar5 + 8;
          param_12 = param_12 + 8;
          puVar4[7] = CONCAT13(*puVar11,CONCAT12(*puVar12,CONCAT11(*puVar9,*puVar10)));
          puVar4 = puVar4 + 8;
        } while (7 < uVar2);
        param_9 = param_9 + lVar1;
        param_11 = param_11 + lVar1;
        param_2 = param_2 + lVar1;
        param_10 = puVar8;
        param_12 = puVar7;
        uVar2 = param_5 - 8 & 7;
      }
      param_6 = param_6 + -1;
      puVar4 = param_2;
      puVar3 = param_2;
      puVar6 = param_11;
      puVar5 = param_11;
      puVar8 = param_9;
      puVar7 = param_9;
      puVar10 = param_10;
      puVar9 = param_10;
      puVar12 = param_12;
      puVar11 = param_12;
      switch(uVar2) {
      case 7:
        puVar7 = param_9 + 1;
        puVar9 = param_10 + 1;
        puVar5 = param_11 + 1;
        puVar11 = param_12 + 1;
        puVar3 = param_2 + 1;
        *param_2 = CONCAT13(*param_12,CONCAT12(*param_11,CONCAT11(*param_10,*param_9)));
      case 6:
        puVar8 = puVar7 + 1;
        puVar10 = puVar9 + 1;
        puVar6 = puVar5 + 1;
        puVar12 = puVar11 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = CONCAT13(*puVar11,CONCAT12(*puVar5,CONCAT11(*puVar9,*puVar7)));
      case 5:
        param_9 = puVar8 + 1;
        param_10 = puVar10 + 1;
        param_11 = puVar6 + 1;
        param_12 = puVar12 + 1;
        param_2 = puVar4 + 1;
        *puVar4 = CONCAT13(*puVar12,CONCAT12(*puVar6,CONCAT11(*puVar10,*puVar8)));
      case 4:
        puVar8 = param_9 + 1;
        puVar10 = param_10 + 1;
        puVar6 = param_11 + 1;
        puVar12 = param_12 + 1;
        puVar4 = param_2 + 1;
        *param_2 = CONCAT13(*param_12,CONCAT12(*param_11,CONCAT11(*param_10,*param_9)));
      case 3:
        param_9 = puVar8 + 1;
        param_10 = puVar10 + 1;
        param_11 = puVar6 + 1;
        param_12 = puVar12 + 1;
        param_2 = puVar4 + 1;
        *puVar4 = CONCAT13(*puVar12,CONCAT12(*puVar6,CONCAT11(*puVar10,*puVar8)));
      case 2:
        puVar8 = param_9 + 1;
        puVar10 = param_10 + 1;
        puVar6 = param_11 + 1;
        puVar12 = param_12 + 1;
        puVar4 = param_2 + 1;
        *param_2 = CONCAT13(*param_12,CONCAT12(*param_11,CONCAT11(*param_10,*param_9)));
      case 1:
        param_9 = puVar8 + 1;
        param_10 = puVar10 + 1;
        param_11 = puVar6 + 1;
        param_12 = puVar12 + 1;
        param_2 = puVar4 + 1;
        *puVar4 = CONCAT13(*puVar12,CONCAT12(*puVar6,CONCAT11(*puVar10,*puVar8)));
      }
      param_9 = param_9 + param_7;
      param_10 = param_10 + param_7;
      param_11 = param_11 + param_7;
      param_12 = param_12 + param_7;
      param_2 = param_2 + param_8;
    } while (param_6 != 0);
  }
  return;
}

