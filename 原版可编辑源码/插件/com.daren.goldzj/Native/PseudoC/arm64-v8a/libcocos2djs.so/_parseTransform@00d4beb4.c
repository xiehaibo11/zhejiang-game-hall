
/* dragonBones::JSONDataParser::_parseTransform(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, dragonBones::Transform&, float)
    */

void __thiscall
dragonBones::JSONDataParser::_parseTransform
          (JSONDataParser *this,GenericValue *param_1,Transform *param_2,float param_3)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  ulong uVar8;
  int *piVar9;
  int *piVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  
  fVar14 = (float)_getNumber(param_1,DataParser::X,0.0);
  *(float *)param_2 = fVar14 * param_3;
  fVar14 = (float)_getNumber(param_1,DataParser::Y,0.0);
  *(float *)(param_2 + 4) = fVar14 * param_3;
  puVar4 = DataParser::ROTATE;
  pcVar6 = DataParser::ROTATE + -1;
  do {
    pcVar6 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  piVar9 = *(int **)(param_1 + 8);
  uVar2 = *(uint *)param_1;
  uVar11 = (ulong)uVar2;
  piVar7 = piVar9 + uVar11 * 0xc;
  piVar10 = piVar9;
  if (uVar2 != 0) {
    uVar8 = (long)pcVar6 - (long)DataParser::ROTATE;
    lVar13 = uVar11 * 0x30;
    piVar12 = piVar9;
    do {
      iVar5 = *piVar12;
      if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
        iVar5 = 0x15 - *(char *)((long)piVar12 + 0x15);
      }
      if (iVar5 == (int)uVar8) {
        piVar1 = *(int **)(piVar12 + 2);
        if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar12;
        }
        piVar10 = piVar12;
        if ((piVar1 == (int *)puVar4) ||
           (iVar5 = memcmp(puVar4,piVar1,uVar8 & 0xffffffff), iVar5 == 0)) break;
      }
      lVar13 = lVar13 + -0x30;
      piVar12 = piVar12 + 0xc;
      piVar10 = piVar7;
    } while (lVar13 != 0);
  }
  puVar3 = DataParser::SKEW;
  if (piVar7 == piVar10) {
    pcVar6 = DataParser::SKEW + -1;
    do {
      pcVar6 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    piVar10 = piVar9;
    if (uVar2 != 0) {
      uVar8 = (long)pcVar6 - (long)DataParser::SKEW;
      lVar13 = uVar11 * 0x30;
      piVar12 = piVar9;
      do {
        iVar5 = *piVar12;
        if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
          iVar5 = 0x15 - *(char *)((long)piVar12 + 0x15);
        }
        if (iVar5 == (int)uVar8) {
          piVar1 = *(int **)(piVar12 + 2);
          if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
            piVar1 = piVar12;
          }
          piVar10 = piVar12;
          if ((piVar1 == (int *)puVar3) ||
             (iVar5 = memcmp(puVar3,piVar1,uVar8 & 0xffffffff), iVar5 == 0)) break;
        }
        lVar13 = lVar13 + -0x30;
        piVar12 = piVar12 + 0xc;
        piVar10 = piVar7;
      } while (lVar13 != 0);
    }
    puVar3 = DataParser::SKEW_X;
    if (piVar7 != piVar10) goto LAB_00d4c074;
    pcVar6 = DataParser::SKEW_X + -1;
    do {
      pcVar6 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    piVar10 = piVar9;
    if (uVar2 != 0) {
      uVar8 = (long)pcVar6 - (long)DataParser::SKEW_X;
      lVar13 = uVar11 * 0x30;
      piVar12 = piVar9;
      do {
        iVar5 = *piVar12;
        if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
          iVar5 = 0x15 - *(char *)((long)piVar12 + 0x15);
        }
        if (iVar5 == (int)uVar8) {
          piVar1 = *(int **)(piVar12 + 2);
          if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
            piVar1 = piVar12;
          }
          piVar10 = piVar12;
          if ((piVar1 == (int *)puVar3) ||
             (iVar5 = memcmp(puVar3,piVar1,uVar8 & 0xffffffff), iVar5 == 0)) break;
        }
        lVar13 = lVar13 + -0x30;
        piVar12 = piVar12 + 0xc;
        piVar10 = piVar7;
      } while (lVar13 != 0);
    }
    puVar4 = DataParser::SKEW_Y;
    if (piVar7 == piVar10) {
      pcVar6 = DataParser::SKEW_Y + -1;
      do {
        pcVar6 = pcVar6 + 1;
      } while (*pcVar6 != '\0');
      piVar10 = piVar9;
      if (uVar2 != 0) {
        uVar8 = (long)pcVar6 - (long)DataParser::SKEW_Y;
        lVar13 = uVar11 * 0x30;
        do {
          iVar5 = *piVar9;
          if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
            iVar5 = 0x15 - *(char *)((long)piVar9 + 0x15);
          }
          if (iVar5 == (int)uVar8) {
            piVar12 = *(int **)(piVar9 + 2);
            if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
              piVar12 = piVar9;
            }
            piVar10 = piVar9;
            if ((piVar12 == (int *)puVar4) ||
               (iVar5 = memcmp(puVar4,piVar12,uVar8 & 0xffffffff), iVar5 == 0)) break;
          }
          lVar13 = lVar13 + -0x30;
          piVar9 = piVar9 + 0xc;
          piVar10 = piVar7;
        } while (lVar13 != 0);
      }
      if (piVar7 == piVar10) goto LAB_00d4c0fc;
    }
    fVar14 = (float)_getNumber(param_1,puVar4,0.0);
    fVar15 = fmodf(fVar14 * 0.017453292 + 3.1415927,6.2831855);
    fVar14 = -3.1415927;
    if (fVar15 <= 0.0) {
      fVar14 = 3.1415927;
    }
    *(float *)(param_2 + 0xc) = fVar15 + fVar14;
    fVar14 = (float)_getNumber(param_1,DataParser::SKEW_X,0.0);
    fVar15 = fmodf(fVar14 * 0.017453292 + 3.1415927,6.2831855);
    fVar14 = -3.1415927;
    if (fVar15 <= 0.0) {
      fVar14 = 3.1415927;
    }
    fVar15 = (fVar15 + fVar14) - *(float *)(param_2 + 0xc);
  }
  else {
LAB_00d4c074:
    fVar14 = (float)_getNumber(param_1,puVar4,0.0);
    fVar15 = fmodf(fVar14 * 0.017453292 + 3.1415927,6.2831855);
    fVar14 = -3.1415927;
    if (fVar15 <= 0.0) {
      fVar14 = 3.1415927;
    }
    *(float *)(param_2 + 0xc) = fVar15 + fVar14;
    fVar14 = (float)_getNumber(param_1,DataParser::SKEW,0.0);
    fVar15 = fmodf(fVar14 * 0.017453292 + 3.1415927,6.2831855);
    fVar14 = -3.1415927;
    if (fVar15 <= 0.0) {
      fVar14 = 3.1415927;
    }
    fVar15 = fVar15 + fVar14;
  }
  *(float *)(param_2 + 8) = fVar15;
LAB_00d4c0fc:
  uVar16 = _getNumber(param_1,DataParser::SCALE_X,1.0);
  *(undefined4 *)(param_2 + 0x10) = uVar16;
  uVar16 = _getNumber(param_1,DataParser::SCALE_Y,1.0);
  *(undefined4 *)(param_2 + 0x14) = uVar16;
  return;
}

