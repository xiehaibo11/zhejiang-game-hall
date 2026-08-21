
/* v8::internal::BaseConsumedPreparseData<v8::internal::ZoneVectorWrapper>::GetDataForSkippableFunction(v8::internal::Zone*,
   int, int*, int*, int*, int*, bool*, v8::internal::LanguageMode*) */

undefined8 __thiscall
v8::internal::BaseConsumedPreparseData<v8::internal::ZoneVectorWrapper>::GetDataForSkippableFunction
          (BaseConsumedPreparseData<v8::internal::ZoneVectorWrapper> *this,Zone *param_1,int param_2
          ,int *param_3,int *param_4,int *param_5,int *param_6,bool *param_7,LanguageMode *param_8)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  
  puVar6 = *(undefined8 **)(this + 8);
  uVar5 = (**(code **)(*(long *)this + 0x20))();
  *puVar6 = uVar5;
  puVar6 = *(undefined8 **)(this + 8);
  plVar7 = (long *)*puVar6;
  iVar13 = *(int *)(puVar6 + 1);
  uVar12 = (ulong)iVar13;
  iVar4 = (int)plVar7[1] - (int)*plVar7;
  if ((iVar4 < iVar13) || ((uint)(iVar4 - iVar13) < 5)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "scope_data_->HasRemainingBytes( PreparseByteDataConstants::kSkippableFunctionMinDataSize)"
            );
  }
  uVar10 = 0;
  uVar8 = 0;
  do {
    iVar13 = iVar13 + 1;
    *(int *)(puVar6 + 1) = iVar13;
    if ((ulong)(plVar7[1] - *plVar7) <= uVar12) goto LAB_01173094;
    bVar2 = *(byte *)(*plVar7 + uVar12);
    uVar12 = uVar12 + 1;
    uVar11 = uVar10 & 0x1f;
    uVar10 = uVar10 + 7;
    uVar8 = (bVar2 & 0x7f) << (ulong)uVar11 | uVar8;
  } while ((char)bVar2 < '\0');
  *(undefined1 *)((long)puVar6 + 0xc) = 0;
  if (uVar8 != param_2) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","start_position == start_position_from_data");
  }
  puVar6 = *(undefined8 **)(this + 8);
  uVar10 = 0;
  uVar8 = 0;
  iVar13 = *(int *)(puVar6 + 1);
  uVar12 = (ulong)iVar13;
  do {
    iVar13 = iVar13 + 1;
    *(int *)(puVar6 + 1) = iVar13;
    lVar1 = *(long *)*puVar6;
    if ((ulong)(((long *)*puVar6)[1] - lVar1) <= uVar12) goto LAB_01173094;
    bVar2 = *(byte *)(lVar1 + uVar12);
    uVar12 = uVar12 + 1;
    uVar11 = uVar10 & 0x1f;
    uVar10 = uVar10 + 7;
    uVar8 = (bVar2 & 0x7f) << (ulong)uVar11 | uVar8;
  } while ((char)bVar2 < '\0');
  *(undefined1 *)((long)puVar6 + 0xc) = 0;
  *param_3 = uVar8;
  puVar6 = *(undefined8 **)(this + 8);
  uVar10 = 0;
  uVar8 = 0;
  iVar13 = *(int *)(puVar6 + 1);
  uVar12 = (ulong)iVar13;
  do {
    iVar13 = iVar13 + 1;
    *(int *)(puVar6 + 1) = iVar13;
    lVar1 = *(long *)*puVar6;
    if ((ulong)(((long *)*puVar6)[1] - lVar1) <= uVar12) goto LAB_01173094;
    bVar2 = *(byte *)(lVar1 + uVar12);
    uVar12 = uVar12 + 1;
    uVar11 = uVar10 & 0x1f;
    uVar10 = uVar10 + 7;
    uVar8 = (bVar2 & 0x7f) << (ulong)uVar11 | uVar8;
  } while ((char)bVar2 < '\0');
  uVar10 = uVar8 >> 2 & 0xffff;
  *(undefined1 *)((long)puVar6 + 0xc) = 0;
  *param_4 = uVar10;
  if ((uVar8 >> 1 & 1) == 0) {
    puVar6 = *(undefined8 **)(this + 8);
    uVar11 = 0;
    uVar10 = 0;
    iVar13 = *(int *)(puVar6 + 1);
    uVar12 = (ulong)iVar13;
    do {
      iVar13 = iVar13 + 1;
      *(int *)(puVar6 + 1) = iVar13;
      lVar1 = *(long *)*puVar6;
      if ((ulong)(((long *)*puVar6)[1] - lVar1) <= uVar12) goto LAB_01173094;
      bVar2 = *(byte *)(lVar1 + uVar12);
      uVar12 = uVar12 + 1;
      uVar3 = uVar11 & 0x1f;
      uVar11 = uVar11 + 7;
      uVar10 = (bVar2 & 0x7f) << (ulong)uVar3 | uVar10;
    } while ((char)bVar2 < '\0');
    *(undefined1 *)((long)puVar6 + 0xc) = 0;
  }
  *param_5 = uVar10;
  puVar6 = *(undefined8 **)(this + 8);
  uVar10 = 0;
  uVar11 = 0;
  iVar13 = *(int *)(puVar6 + 1);
  uVar12 = (ulong)iVar13;
  do {
    iVar13 = iVar13 + 1;
    *(int *)(puVar6 + 1) = iVar13;
    lVar1 = *(long *)*puVar6;
    if ((ulong)(((long *)*puVar6)[1] - lVar1) <= uVar12) goto LAB_01173094;
    bVar2 = *(byte *)(lVar1 + uVar12);
    uVar12 = uVar12 + 1;
    uVar3 = uVar10 & 0x1f;
    uVar10 = uVar10 + 7;
    uVar11 = (bVar2 & 0x7f) << (ulong)uVar3 | uVar11;
  } while ((char)bVar2 < '\0');
  *(undefined1 *)((long)puVar6 + 0xc) = 0;
  *param_6 = uVar11;
  puVar6 = *(undefined8 **)(this + 8);
  if (*(char *)((long)puVar6 + 0xc) == '\0') {
    iVar13 = *(int *)(puVar6 + 1);
    *(int *)(puVar6 + 1) = iVar13 + 1;
    lVar1 = *(long *)*puVar6;
    if ((ulong)(((long *)*puVar6)[1] - lVar1) <= (ulong)(long)iVar13) {
LAB_01173094:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    bVar2 = *(byte *)(lVar1 + iVar13);
    *(undefined1 *)((long)puVar6 + 0xc) = 4;
    cVar9 = '\x03';
    *(byte *)((long)puVar6 + 0xd) = bVar2;
  }
  else {
    bVar2 = *(byte *)((long)puVar6 + 0xd);
    cVar9 = *(char *)((long)puVar6 + 0xc) + -1;
  }
  *(char *)((long)puVar6 + 0xc) = cVar9;
  *(byte *)((long)puVar6 + 0xd) = bVar2 << 2;
  *param_8 = bVar2 >> 6 & 1;
  *param_7 = (bool)(bVar2 >> 7);
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x01173090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*(long *)this + 0x28))(this,param_1);
  return uVar5;
}

