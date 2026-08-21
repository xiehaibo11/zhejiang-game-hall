
long FUN_01587700(Factory *param_1,long *param_2,ulong *param_3,long *param_4,undefined8 param_5)

{
  Factory *pFVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  void *pvVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  int iVar13;
  undefined4 local_68;
  int local_64;
  
  pFVar1 = param_1 + 0xb620;
  *(long *)(param_1 + 0xb628) = *(long *)pFVar1;
  uVar10 = *param_3 & 0xffffffff00000000;
  iVar4 = *(int *)(*param_2 + 7);
  iVar5 = *(int *)((uVar10 | *(uint *)((uVar10 | *(uint *)(*param_3 + 0xb)) + 0x13)) + 7);
  iVar6 = *(int *)(*param_4 + 7);
  v8::internal::FindStringIndicesDispatch();
  if (*(long *)pFVar1 == *(long *)(param_1 + 0xb628)) {
    lVar11 = *param_2;
  }
  else {
    lVar11 = (long)iVar4 +
             (*(long *)(param_1 + 0xb628) - *(long *)pFVar1 >> 2) * ((long)iVar6 - (long)iVar5);
    iVar9 = 0x7fffffff;
    if (lVar11 < 0xffffff1) {
      iVar9 = (int)lVar11;
    }
    if (iVar9 == 0) {
      lVar11 = *(long *)(param_1 + 200);
    }
    else {
      plVar7 = (long *)v8::internal::Factory::NewRawOneByteString(param_1,iVar9,0);
      if (plVar7 == (long *)0x0) {
        lVar11 = *(long *)(param_1 + 0x180);
      }
      else {
        piVar12 = *(int **)pFVar1;
        piVar2 = *(int **)(param_1 + 0xb628);
        if (piVar12 == piVar2) {
          iVar13 = 0;
          iVar9 = 0;
        }
        else {
          iVar9 = 0;
          iVar13 = 0;
          do {
            iVar3 = *piVar12;
            if (iVar9 < iVar3) {
              v8::internal::String::WriteToFlat<unsigned_char>
                        (*param_2,*plVar7 + (long)iVar13 + 0xb,iVar9,iVar3);
              iVar13 = (iVar13 - iVar9) + iVar3;
            }
            if (0 < iVar6) {
              v8::internal::String::WriteToFlat<unsigned_char>
                        (*param_4,*plVar7 + (long)iVar13 + 0xb,0,iVar6);
              iVar13 = iVar13 + iVar6;
            }
            piVar12 = piVar12 + 1;
            iVar9 = iVar3 + iVar5;
          } while (piVar2 != piVar12);
        }
        if (iVar9 < iVar4) {
          v8::internal::String::WriteToFlat<unsigned_char>
                    (*param_2,*plVar7 + (long)iVar13 + 0xb,iVar9);
        }
        local_68 = *(undefined4 *)(*(long *)(param_1 + 0xb628) + -4);
        local_64 = *(int *)(*(long *)(param_1 + 0xb628) + -4) + iVar5;
        v8::internal::RegExp::SetLastMatchInfo(param_1,param_5,param_2,0,&local_68);
        pvVar8 = *(void **)pFVar1;
        if ((0x2000 < (ulong)((long)*(void **)(param_1 + 0xb630) - (long)pvVar8 >> 2)) &&
           (*(void **)(param_1 + 0xb628) = pvVar8, *(void **)(param_1 + 0xb630) != pvVar8)) {
          *(long *)pFVar1 = 0;
          *(undefined8 *)(param_1 + 0xb628) = 0;
          *(undefined8 *)(param_1 + 0xb630) = 0;
          if (pvVar8 != (void *)0x0) {
            operator_delete(pvVar8);
          }
        }
        lVar11 = *plVar7;
      }
    }
  }
  return lVar11;
}

