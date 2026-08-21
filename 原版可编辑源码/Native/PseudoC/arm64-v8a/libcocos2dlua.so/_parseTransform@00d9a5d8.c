
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
  long lVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  ulong uVar13;
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
  piVar12 = *(int **)(param_1 + 8);
  uVar2 = *(uint *)param_1;
  uVar13 = (ulong)uVar2;
  piVar7 = piVar12 + uVar13 * 0xc;
  piVar11 = piVar12;
  if (uVar2 != 0) {
    uVar8 = (long)pcVar6 - (long)DataParser::ROTATE;
    lVar9 = uVar13 * 0x30;
    piVar10 = piVar12;
    do {
      piVar11 = piVar10;
      iVar5 = *piVar11;
      if ((*(ushort *)((long)piVar11 + 0x16) & 0x1000) != 0) {
        iVar5 = 0x15 - *(char *)((long)piVar11 + 0x15);
      }
      if (iVar5 == (int)uVar8) {
        piVar10 = *(int **)(piVar11 + 2);
        if ((*(ushort *)((long)piVar11 + 0x16) & 0x1000) != 0) {
          piVar10 = piVar11;
        }
        if ((piVar10 == (int *)puVar4) ||
           (iVar5 = memcmp(puVar4,piVar10,uVar8 & 0xffffffff), iVar5 == 0)) break;
      }
      lVar9 = lVar9 + -0x30;
      piVar10 = piVar11 + 0xc;
      piVar11 = piVar7;
    } while (lVar9 != 0);
  }
  puVar3 = DataParser::SKEW;
  if (piVar7 == piVar11) {
    pcVar6 = DataParser::SKEW + -1;
    do {
      pcVar6 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    piVar11 = piVar12;
    if (uVar2 != 0) {
      uVar8 = (long)pcVar6 - (long)DataParser::SKEW;
      lVar9 = uVar13 * 0x30;
      piVar10 = piVar12;
      do {
        iVar5 = *piVar10;
        if ((*(ushort *)((long)piVar10 + 0x16) & 0x1000) != 0) {
          iVar5 = 0x15 - *(char *)((long)piVar10 + 0x15);
        }
        if (iVar5 == (int)uVar8) {
          piVar1 = *(int **)(piVar10 + 2);
          if ((*(ushort *)((long)piVar10 + 0x16) & 0x1000) != 0) {
            piVar1 = piVar10;
          }
          piVar11 = piVar10;
          if ((piVar1 == (int *)puVar3) ||
             (iVar5 = memcmp(puVar3,piVar1,uVar8 & 0xffffffff), iVar5 == 0)) break;
        }
        lVar9 = lVar9 + -0x30;
        piVar10 = piVar10 + 0xc;
        piVar11 = piVar7;
      } while (lVar9 != 0);
    }
    puVar3 = DataParser::SKEW_X;
    if (piVar7 != piVar11) goto LAB_00d9a7b0;
    pcVar6 = DataParser::SKEW_X + -1;
    do {
      pcVar6 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    piVar11 = piVar12;
    if (uVar2 != 0) {
      uVar8 = (long)pcVar6 - (long)DataParser::SKEW_X;
      lVar9 = uVar13 * 0x30;
      piVar10 = piVar12;
      do {
        iVar5 = *piVar10;
        if ((*(ushort *)((long)piVar10 + 0x16) & 0x1000) != 0) {
          iVar5 = 0x15 - *(char *)((long)piVar10 + 0x15);
        }
        if (iVar5 == (int)uVar8) {
          piVar1 = *(int **)(piVar10 + 2);
          if ((*(ushort *)((long)piVar10 + 0x16) & 0x1000) != 0) {
            piVar1 = piVar10;
          }
          piVar11 = piVar10;
          if ((piVar1 == (int *)puVar3) ||
             (iVar5 = memcmp(puVar3,piVar1,uVar8 & 0xffffffff), iVar5 == 0)) break;
        }
        lVar9 = lVar9 + -0x30;
        piVar10 = piVar10 + 0xc;
        piVar11 = piVar7;
      } while (lVar9 != 0);
    }
    puVar4 = DataParser::SKEW_Y;
    if (piVar7 == piVar11) {
      pcVar6 = DataParser::SKEW_Y + -1;
      do {
        pcVar6 = pcVar6 + 1;
      } while (*pcVar6 != '\0');
      piVar11 = piVar12;
      if (uVar2 != 0) {
        uVar8 = (long)pcVar6 - (long)DataParser::SKEW_Y;
        lVar9 = uVar13 * 0x30;
        do {
          iVar5 = *piVar12;
          if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
            iVar5 = 0x15 - *(char *)((long)piVar12 + 0x15);
          }
          if (iVar5 == (int)uVar8) {
            piVar10 = *(int **)(piVar12 + 2);
            if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
              piVar10 = piVar12;
            }
            piVar11 = piVar12;
            if ((piVar10 == (int *)puVar4) ||
               (iVar5 = memcmp(puVar4,piVar10,uVar8 & 0xffffffff), iVar5 == 0)) break;
          }
          lVar9 = lVar9 + -0x30;
          piVar12 = piVar12 + 0xc;
          piVar11 = piVar7;
        } while (lVar9 != 0);
      }
      if (piVar7 == piVar11) goto LAB_00d9a830;
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
LAB_00d9a7b0:
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
LAB_00d9a830:
  uVar16 = _getNumber(param_1,DataParser::SCALE_X,1.0);
  *(undefined4 *)(param_2 + 0x10) = uVar16;
  uVar16 = _getNumber(param_1,DataParser::SCALE_Y,1.0);
  *(undefined4 *)(param_2 + 0x14) = uVar16;
  return;
}

