
/* v8::internal::BaseConsumedPreparseData<v8::internal::PreparseData>::GetDataForSkippableFunction(v8::internal::Zone*,
   int, int*, int*, int*, int*, bool*, v8::internal::LanguageMode*) */

undefined8 __thiscall
v8::internal::BaseConsumedPreparseData<v8::internal::PreparseData>::GetDataForSkippableFunction
          (BaseConsumedPreparseData<v8::internal::PreparseData> *this,Zone *param_1,int param_2,
          int *param_3,int *param_4,int *param_5,int *param_6,bool *param_7,LanguageMode *param_8)

{
  undefined8 *puVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  puVar1 = *(undefined8 **)(this + 8);
  uVar5 = (**(code **)(*(long *)this + 0x20))();
  *puVar1 = uVar5;
  plVar6 = *(long **)(this + 8);
  iVar12 = (int)plVar6[1];
  iVar13 = *(int *)(*plVar6 + 3);
  if ((iVar13 < iVar12) || ((uint)(iVar13 - iVar12) < 5)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "scope_data_->HasRemainingBytes( PreparseByteDataConstants::kSkippableFunctionMinDataSize)"
            );
  }
  uVar9 = 0;
  uVar7 = 0;
  pbVar8 = (byte *)(*plVar6 + (long)iVar12 + 0xb);
  do {
    iVar12 = iVar12 + 1;
    *(int *)(plVar6 + 1) = iVar12;
    bVar2 = *pbVar8;
    uVar11 = uVar9 & 0x1f;
    uVar9 = uVar9 + 7;
    uVar7 = (bVar2 & 0x7f) << (ulong)uVar11 | uVar7;
    pbVar8 = pbVar8 + 1;
  } while ((char)bVar2 < '\0');
  *(undefined1 *)((long)plVar6 + 0xc) = 0;
  if (uVar7 == param_2) {
    plVar6 = *(long **)(this + 8);
    uVar9 = 0;
    uVar7 = 0;
    iVar13 = (int)plVar6[1];
    pbVar8 = (byte *)(*plVar6 + (long)iVar13 + 0xb);
    do {
      iVar13 = iVar13 + 1;
      *(int *)(plVar6 + 1) = iVar13;
      bVar2 = *pbVar8;
      uVar11 = uVar9 & 0x1f;
      uVar9 = uVar9 + 7;
      uVar7 = (bVar2 & 0x7f) << (ulong)uVar11 | uVar7;
      pbVar8 = pbVar8 + 1;
    } while ((char)bVar2 < '\0');
    *(undefined1 *)((long)plVar6 + 0xc) = 0;
    *param_3 = uVar7;
    plVar6 = *(long **)(this + 8);
    uVar9 = 0;
    uVar7 = 0;
    iVar13 = (int)plVar6[1];
    pbVar8 = (byte *)(*plVar6 + (long)iVar13 + 0xb);
    do {
      iVar13 = iVar13 + 1;
      *(int *)(plVar6 + 1) = iVar13;
      bVar2 = *pbVar8;
      uVar11 = uVar9 & 0x1f;
      uVar9 = uVar9 + 7;
      uVar7 = (bVar2 & 0x7f) << (ulong)uVar11 | uVar7;
      pbVar8 = pbVar8 + 1;
    } while ((char)bVar2 < '\0');
    uVar9 = uVar7 >> 2 & 0xffff;
    *(undefined1 *)((long)plVar6 + 0xc) = 0;
    *param_4 = uVar9;
    if ((uVar7 >> 1 & 1) == 0) {
      plVar6 = *(long **)(this + 8);
      uVar11 = 0;
      uVar9 = 0;
      iVar13 = (int)plVar6[1];
      pbVar8 = (byte *)(*plVar6 + (long)iVar13 + 0xb);
      do {
        iVar13 = iVar13 + 1;
        *(int *)(plVar6 + 1) = iVar13;
        bVar2 = *pbVar8;
        uVar3 = uVar11 & 0x1f;
        uVar11 = uVar11 + 7;
        uVar9 = (bVar2 & 0x7f) << (ulong)uVar3 | uVar9;
        pbVar8 = pbVar8 + 1;
      } while ((char)bVar2 < '\0');
      *(undefined1 *)((long)plVar6 + 0xc) = 0;
    }
    *param_5 = uVar9;
    plVar6 = *(long **)(this + 8);
    uVar9 = 0;
    uVar11 = 0;
    iVar13 = (int)plVar6[1];
    pbVar8 = (byte *)(*plVar6 + (long)iVar13 + 0xb);
    do {
      iVar13 = iVar13 + 1;
      *(int *)(plVar6 + 1) = iVar13;
      bVar2 = *pbVar8;
      uVar3 = uVar9 & 0x1f;
      uVar9 = uVar9 + 7;
      uVar11 = (bVar2 & 0x7f) << (ulong)uVar3 | uVar11;
      pbVar8 = pbVar8 + 1;
    } while ((char)bVar2 < '\0');
    *(undefined1 *)((long)plVar6 + 0xc) = 0;
    *param_6 = uVar11;
    plVar6 = *(long **)(this + 8);
    if (*(char *)((long)plVar6 + 0xc) == '\0') {
      lVar4 = plVar6[1];
      *(int *)(plVar6 + 1) = (int)lVar4 + 1;
      bVar2 = *(byte *)((long)(int)lVar4 + *plVar6 + 0xb);
      *(undefined1 *)((long)plVar6 + 0xc) = 4;
      cVar10 = '\x03';
      *(byte *)((long)plVar6 + 0xd) = bVar2;
    }
    else {
      bVar2 = *(byte *)((long)plVar6 + 0xd);
      cVar10 = *(char *)((long)plVar6 + 0xc) + -1;
    }
    *(char *)((long)plVar6 + 0xc) = cVar10;
    *(byte *)((long)plVar6 + 0xd) = bVar2 << 2;
    *param_8 = bVar2 >> 6 & 1;
    *param_7 = (bool)(bVar2 >> 7);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
    *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x01172ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(*(long *)this + 0x28))(this,param_1);
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","start_position == start_position_from_data");
}

