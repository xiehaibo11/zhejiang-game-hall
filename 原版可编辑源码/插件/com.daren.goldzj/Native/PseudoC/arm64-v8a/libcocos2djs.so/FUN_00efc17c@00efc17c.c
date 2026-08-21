
undefined8 FUN_00efc17c(long *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  CoverageBlock *pCVar4;
  int *piVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  uVar6 = *(uint *)((long)param_1 + 0x24);
  lVar1 = *(long *)(*param_1 + 0x18);
  if ((int)((ulong)(*(long *)(*param_1 + 0x20) - lVar1) >> 2) * -0x55555555 <= (int)(uVar6 + 1)) {
    if (((char)param_1[4] == '\0') && (*(char *)((long)param_1 + 0x21) == '\0')) {
      if ((-1 < (int)uVar6) && (*(uint *)(param_1 + 5) != uVar6)) {
        puVar7 = (undefined8 *)(lVar1 + (ulong)uVar6 * 0xc);
        uVar9 = *puVar7;
        puVar8 = (undefined8 *)(lVar1 + (long)(int)*(uint *)(param_1 + 5) * 0xc);
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar7 + 1);
        *puVar8 = uVar9;
      }
      *(int *)(param_1 + 5) = (int)param_1[5] + 1;
    }
    *(undefined1 *)(param_1 + 4) = 1;
    return 0;
  }
  if (*(char *)((long)param_1 + 0x21) == '\0') {
    if ((-1 < (int)uVar6) && (*(uint *)(param_1 + 5) != uVar6)) {
      puVar7 = (undefined8 *)(lVar1 + (ulong)uVar6 * 0xc);
      uVar9 = *puVar7;
      puVar8 = (undefined8 *)(lVar1 + (long)(int)*(uint *)(param_1 + 5) * 0xc);
      *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar7 + 1);
      *puVar8 = uVar9;
      uVar6 = *(uint *)((long)param_1 + 0x24);
    }
    *(int *)(param_1 + 5) = (int)param_1[5] + 1;
    if (uVar6 == 0xffffffff) goto LAB_00efc2a4;
LAB_00efc1c8:
    if (*(char *)((long)param_1 + 0x21) != '\0') goto LAB_00efc2f0;
    puVar7 = (undefined8 *)param_1[2];
    pCVar4 = (CoverageBlock *)(*(long *)(*param_1 + 0x18) + (long)(int)uVar6 * 0xc);
    if ((undefined8 *)param_1[3] <= puVar7) {
      std::__ndk1::
      vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>::
      __emplace_back_slow_path<v8::internal::CoverageBlock&>
                ((vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>
                  *)(param_1 + 1),pCVar4);
      goto LAB_00efc2f0;
    }
    uVar9 = *(undefined8 *)pCVar4;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(pCVar4 + 8);
    *puVar7 = uVar9;
  }
  else {
    if (uVar6 != 0xffffffff) goto LAB_00efc1c8;
LAB_00efc2a4:
    puVar7 = (undefined8 *)param_1[2];
    piVar5 = (int *)*param_1;
    if ((undefined8 *)param_1[3] <= puVar7) {
      std::__ndk1::
      vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>::
      __emplace_back_slow_path<int&,int&,unsigned_int&>
                ((vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>
                  *)(param_1 + 1),piVar5,piVar5 + 1,(uint *)(piVar5 + 2));
      goto LAB_00efc2f0;
    }
    iVar2 = piVar5[2];
    *puVar7 = *(undefined8 *)piVar5;
    *(int *)(puVar7 + 1) = iVar2;
  }
  param_1[2] = param_1[2] + 0xc;
LAB_00efc2f0:
  *(undefined1 *)((long)param_1 + 0x21) = 0;
  lVar1 = (long)*(int *)((long)param_1 + 0x24) + 1;
  *(int *)((long)param_1 + 0x24) = (int)lVar1;
  if (1 < (ulong)((param_1[2] - param_1[1] >> 2) * -0x5555555555555555)) {
    lVar11 = *(long *)(*param_1 + 0x18);
    lVar3 = param_1[2];
    do {
      lVar10 = lVar3 + -0xc;
      if (*(int *)(lVar11 + lVar1 * 0xc) < *(int *)(lVar3 + -8)) {
        return 1;
      }
      param_1[2] = lVar10;
      lVar3 = lVar10;
    } while (1 < (ulong)((lVar10 - param_1[1] >> 2) * -0x5555555555555555));
  }
  return 1;
}

