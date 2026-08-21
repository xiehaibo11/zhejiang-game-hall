
void FUN_01127c4c(undefined8 param_1,uint *param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5,int param_6,int param_7,int param_8,undefined1 *param_9,
                 undefined1 *param_10,undefined1 *param_11)

{
  long lVar1;
  uint *puVar2;
  uint *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  
  if (param_6 != 0) {
    lVar1 = (ulong)(param_5 - 8 & 0xfffffff8) + 8;
    do {
      uVar10 = param_5;
      if (7 < param_5) {
        puVar4 = param_9 + lVar1;
        puVar7 = param_11 + lVar1;
        puVar2 = param_2;
        puVar5 = param_10;
        do {
          uVar10 = uVar10 - 8;
          *puVar2 = CONCAT12(*param_11,CONCAT11(*puVar5,*param_9)) | 0xff000000;
          puVar2[1] = CONCAT12(param_11[1],CONCAT11(puVar5[1],param_9[1])) | 0xff000000;
          puVar2[2] = CONCAT12(param_11[2],CONCAT11(puVar5[2],param_9[2])) | 0xff000000;
          puVar2[3] = CONCAT12(param_11[3],CONCAT11(puVar5[3],param_9[3])) | 0xff000000;
          puVar2[4] = CONCAT12(param_11[4],CONCAT11(puVar5[4],param_9[4])) | 0xff000000;
          puVar2[5] = CONCAT12(param_11[5],CONCAT11(puVar5[5],param_9[5])) | 0xff000000;
          puVar2[6] = CONCAT12(param_11[6],CONCAT11(puVar5[6],param_9[6])) | 0xff000000;
          puVar6 = param_9 + 7;
          puVar9 = puVar5 + 7;
          puVar8 = param_11 + 7;
          param_9 = param_9 + 8;
          puVar5 = puVar5 + 8;
          param_11 = param_11 + 8;
          puVar2[7] = CONCAT12(*puVar8,CONCAT11(*puVar9,*puVar6)) | 0xff000000;
          puVar2 = puVar2 + 8;
        } while (7 < uVar10);
        param_10 = param_10 + lVar1;
        param_2 = param_2 + lVar1;
        param_9 = puVar4;
        param_11 = puVar7;
        uVar10 = param_5 - 8 & 7;
      }
      param_6 = param_6 + -1;
      puVar2 = param_2;
      puVar3 = param_2;
      puVar5 = param_10;
      puVar4 = param_10;
      puVar7 = param_9;
      puVar6 = param_9;
      puVar9 = param_11;
      puVar8 = param_11;
      switch(uVar10) {
      case 7:
        puVar6 = param_9 + 1;
        puVar4 = param_10 + 1;
        puVar8 = param_11 + 1;
        puVar3 = param_2 + 1;
        *param_2 = CONCAT12(*param_11,CONCAT11(*param_10,*param_9)) | 0xff000000;
      case 6:
        puVar7 = puVar6 + 1;
        puVar5 = puVar4 + 1;
        puVar9 = puVar8 + 1;
        puVar2 = puVar3 + 1;
        *puVar3 = CONCAT12(*puVar8,CONCAT11(*puVar4,*puVar6)) | 0xff000000;
      case 5:
        param_9 = puVar7 + 1;
        param_10 = puVar5 + 1;
        param_11 = puVar9 + 1;
        param_2 = puVar2 + 1;
        *puVar2 = CONCAT12(*puVar9,CONCAT11(*puVar5,*puVar7)) | 0xff000000;
      case 4:
        puVar7 = param_9 + 1;
        puVar5 = param_10 + 1;
        puVar9 = param_11 + 1;
        puVar2 = param_2 + 1;
        *param_2 = CONCAT12(*param_11,CONCAT11(*param_10,*param_9)) | 0xff000000;
      case 3:
        param_9 = puVar7 + 1;
        param_10 = puVar5 + 1;
        param_11 = puVar9 + 1;
        param_2 = puVar2 + 1;
        *puVar2 = CONCAT12(*puVar9,CONCAT11(*puVar5,*puVar7)) | 0xff000000;
      case 2:
        puVar7 = param_9 + 1;
        puVar5 = param_10 + 1;
        puVar9 = param_11 + 1;
        puVar2 = param_2 + 1;
        *param_2 = CONCAT12(*param_11,CONCAT11(*param_10,*param_9)) | 0xff000000;
      case 1:
        param_9 = puVar7 + 1;
        param_10 = puVar5 + 1;
        param_11 = puVar9 + 1;
        param_2 = puVar2 + 1;
        *puVar2 = CONCAT12(*puVar9,CONCAT11(*puVar5,*puVar7)) | 0xff000000;
      }
      param_9 = param_9 + param_7;
      param_10 = param_10 + param_7;
      param_11 = param_11 + param_7;
      param_2 = param_2 + param_8;
    } while (param_6 != 0);
  }
  return;
}

