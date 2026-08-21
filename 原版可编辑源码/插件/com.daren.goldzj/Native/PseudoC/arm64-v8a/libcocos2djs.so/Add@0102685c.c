
/* v8::internal::SourceCodeCache::Add(v8::internal::Isolate*, v8::internal::Vector<char const>,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>) */

void v8::internal::SourceCodeCache::Add
               (int *param_1,Isolate *param_2,undefined8 param_3,int param_4,ulong *param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  FixedArray *pFVar10;
  ulong uVar11;
  undefined8 local_70;
  long lStack_68;
  
  uVar3 = *(undefined8 *)(param_2 + 0x95a0);
  lVar4 = *(long *)(param_2 + 0x95a8);
  *(int *)(param_2 + 0x95b0) = *(int *)(param_2 + 0x95b0) + 1;
  pFVar10 = (FixedArray *)(param_1 + 2);
  iVar2 = *(int *)(*(long *)pFVar10 + 3) >> 1;
  puVar5 = (undefined8 *)Factory::NewFixedArray((Factory *)param_2,iVar2 + 2,1);
  FixedArray::CopyTo(pFVar10,0,*puVar5,0,*(int *)(*(long *)pFVar10 + 3) >> 1);
  lStack_68 = (long)param_4;
  *(undefined8 *)pFVar10 = *puVar5;
  local_70 = param_3;
  puVar6 = (ulong *)Factory::NewStringFromOneByte(param_2,&local_70,1);
  if (puVar6 != (ulong *)0x0) {
    uVar11 = *puVar6;
    iVar2 = iVar2 * 4;
    lVar1 = (long)iVar2 + 7;
    *(int *)(*(long *)pFVar10 + lVar1) = (int)uVar11;
    uVar7 = *(ulong *)pFVar10;
    if ((uVar11 & 1) != 0) {
      uVar9 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
      lVar8 = uVar7 + lVar1;
      if (((uint)uVar9 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar7,lVar8,uVar11);
        uVar7 = *(ulong *)pFVar10;
        uVar9 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
        lVar8 = uVar7 + lVar1;
      }
      if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar7,lVar8,uVar11);
        uVar7 = *(ulong *)pFVar10;
      }
    }
    uVar11 = *param_5;
    lVar1 = (long)(iVar2 + 4) + 7;
    *(int *)(uVar7 + lVar1) = (int)uVar11;
    if ((uVar11 & 1) != 0) {
      uVar7 = *(ulong *)pFVar10;
      uVar9 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
      lVar8 = uVar7 + lVar1;
      if (((uint)uVar9 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar7,lVar8,uVar11);
        uVar7 = *(ulong *)pFVar10;
        uVar9 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
        lVar8 = uVar7 + lVar1;
      }
      if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar7,lVar8,uVar11);
      }
    }
    uVar11 = *param_5 & 0xffffffff00000000;
    uVar7 = uVar11 | *(uint *)(*param_5 + 0xf);
    if (*(short *)((uVar11 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x5b) {
      uVar7 = uVar11 | *(uint *)(uVar7 + 0xb);
    }
    *(int *)(uVar7 + 0x17) = *param_1 << 1;
    *(undefined8 *)(param_2 + 0x95a0) = uVar3;
    *(int *)(param_2 + 0x95b0) = *(int *)(param_2 + 0x95b0) + -1;
    if (*(long *)(param_2 + 0x95a8) != lVar4) {
      *(long *)(param_2 + 0x95a8) = lVar4;
      HandleScope::DeleteExtensions(param_2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

