
void FUN_00d6b8cc(float *param_1,undefined8 param_2,long param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  float *__ptr;
  undefined4 *__ptr_00;
  undefined4 *__ptr_01;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  float *pfVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  
  *(uint *)(param_3 + 0x40) = param_4;
  lVar4 = Json_getItem(param_2,"vertices");
  uVar2 = *(uint *)(lVar4 + 0x14);
  __ptr = (float *)_spMalloc((long)(int)uVar2 << 2,
                             "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.c"
                             ,0x20e);
  pfVar8 = __ptr;
  for (plVar5 = *(long **)(lVar4 + 8); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
    *pfVar8 = *(float *)((long)plVar5 + 0x24);
    pfVar8 = pfVar8 + 1;
  }
  if (uVar2 != param_4) {
    __ptr_00 = (undefined4 *)spFloatArray_create(param_4 * 9);
    __ptr_01 = (undefined4 *)spIntArray_create(param_4 * 3);
    if (0 < (int)uVar2) {
      uVar6 = 0;
      do {
        fVar12 = __ptr[(int)uVar6];
        uVar1 = (int)uVar6 + 1;
        uVar6 = (ulong)uVar1;
        spIntArray_add(__ptr_01,(int)fVar12);
        iVar3 = (int)fVar12 * 4;
        if (0 < iVar3) {
          uVar6 = (ulong)(int)uVar1;
          pfVar8 = __ptr + (long)(int)uVar1 + 2;
          do {
            spIntArray_add(__ptr_01,(int)pfVar8[-2]);
            spFloatArray_add(pfVar8[-1] * *param_1,__ptr_00);
            spFloatArray_add(*pfVar8 * *param_1,__ptr_00);
            spFloatArray_add(pfVar8[1],__ptr_00);
            uVar6 = uVar6 + 4;
            pfVar8 = pfVar8 + 4;
          } while ((long)uVar6 < (long)(int)(iVar3 + uVar1));
        }
      } while ((int)uVar6 < (int)uVar2);
    }
    *(undefined4 *)(param_3 + 0x30) = *__ptr_00;
    *(undefined8 *)(param_3 + 0x38) = *(undefined8 *)(__ptr_00 + 2);
    _spFree(__ptr_00);
    *(undefined4 *)(param_3 + 0x20) = *__ptr_01;
    *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(__ptr_01 + 2);
    _spFree(__ptr_01);
    _spFree(__ptr);
    return;
  }
  if (((*param_1 != 1.0) && (0 < (int)param_4)) && (*__ptr = *param_1 * *__ptr, param_4 != 1)) {
    uVar6 = (ulong)param_4;
    uVar7 = uVar6 - 1;
    if ((uVar7 < 8) || ((__ptr + 1 < (float *)((long)param_1 + 1U) && (param_1 < __ptr + uVar6)))) {
      uVar9 = 1;
    }
    else {
      fVar12 = *param_1;
      uVar10 = uVar7 & 0xfffffffffffffff8;
      uVar9 = uVar10 | 1;
      pfVar8 = __ptr + 5;
      uVar11 = uVar10;
      do {
        uVar11 = uVar11 - 8;
        *(ulong *)(pfVar8 + -2) =
             CONCAT44(fVar12 * (float)((ulong)*(undefined8 *)(pfVar8 + -2) >> 0x20),
                      fVar12 * (float)*(undefined8 *)(pfVar8 + -2));
        *(ulong *)(pfVar8 + -4) =
             CONCAT44(fVar12 * (float)((ulong)*(undefined8 *)(pfVar8 + -4) >> 0x20),
                      fVar12 * (float)*(undefined8 *)(pfVar8 + -4));
        *(ulong *)(pfVar8 + 2) =
             CONCAT44(fVar12 * (float)((ulong)*(undefined8 *)(pfVar8 + 2) >> 0x20),
                      fVar12 * (float)*(undefined8 *)(pfVar8 + 2));
        *(ulong *)pfVar8 =
             CONCAT44(fVar12 * (float)((ulong)*(undefined8 *)pfVar8 >> 0x20),
                      fVar12 * (float)*(undefined8 *)pfVar8);
        pfVar8 = pfVar8 + 8;
      } while (uVar11 != 0);
      if (uVar7 == uVar10) goto LAB_00d6b9cc;
    }
    lVar4 = uVar6 - uVar9;
    pfVar8 = __ptr + uVar9;
    do {
      lVar4 = lVar4 + -1;
      *pfVar8 = *param_1 * *pfVar8;
      pfVar8 = pfVar8 + 1;
    } while (lVar4 != 0);
  }
LAB_00d6b9cc:
  *(uint *)(param_3 + 0x30) = param_4;
  *(float **)(param_3 + 0x38) = __ptr;
  *(undefined4 *)(param_3 + 0x20) = 0;
  *(undefined8 *)(param_3 + 0x28) = 0;
  return;
}

