
/* v8::internal::FrameArray::AppendJSFrame(v8::internal::Handle<v8::internal::FrameArray>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::JSFunction>,
   v8::internal::Handle<v8::internal::AbstractCode>, int, int,
   v8::internal::Handle<v8::internal::FixedArray>) */

ulong * v8::internal::FrameArray::AppendJSFrame
                  (ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,int param_5,
                  int param_6,ulong *param_7)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar9 = *param_1;
  iVar4 = *(int *)(uVar9 + 7) >> 1;
  iVar1 = iVar4 + 1;
  uVar6 = iVar1 * 6 | 1;
  iVar5 = *(int *)(uVar9 + 3) >> 1;
  iVar7 = uVar6 - iVar5;
  if (iVar7 != 0 && iVar5 <= (int)uVar6) {
    if ((int)uVar6 < 0) {
      uVar6 = uVar6 + 1;
    }
    iVar5 = (int)uVar6 >> 1;
    if (iVar5 < 3) {
      iVar5 = 2;
    }
    param_1 = (ulong *)Factory::CopyFixedArrayAndGrow
                                 ((ulong)*(uint *)((long)param_3 + 4) << 0x20,param_1,iVar7 + iVar5)
    ;
    uVar9 = *param_1;
  }
  uVar10 = *param_2;
  uVar6 = iVar4 * 0x18 | 4;
  *(int *)(uVar9 + (long)(int)uVar6 + 7) = (int)uVar10;
  if ((uVar10 & 1) != 0) {
    uVar8 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
    lVar2 = uVar9 + (long)(int)uVar6 + 7;
    if (((uint)uVar8 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar9,lVar2,uVar10);
      uVar8 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar9,lVar2,uVar10);
    }
  }
  uVar10 = *param_1;
  uVar9 = *param_3;
  puVar3 = (undefined4 *)(uVar10 + ((long)(int)(uVar6 + 4) | 7U));
  *puVar3 = (int)uVar9;
  if ((uVar9 & 1) != 0) {
    uVar8 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar8 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,puVar3,uVar9);
      uVar8 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar10,puVar3,uVar9);
    }
  }
  uVar10 = *param_1;
  uVar9 = *param_4;
  lVar2 = uVar10 + (long)(int)(uVar6 + 8);
  *(int *)(lVar2 + 7) = (int)uVar9;
  if ((uVar9 & 1) != 0) {
    uVar8 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
    lVar2 = lVar2 + 7;
    if (((uint)uVar8 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,lVar2,uVar9);
      uVar8 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar10,lVar2,uVar9);
    }
  }
  *(int *)(*param_1 + ((long)(int)(uVar6 + 0xc) | 7U)) = param_5 << 1;
  *(int *)(*param_1 + (long)(int)(uVar6 + 0x10) + 7) = param_6 << 1;
  uVar10 = *param_1;
  uVar9 = *param_7;
  puVar3 = (undefined4 *)(uVar10 + ((long)(int)(uVar6 + 0x14) | 7U));
  *puVar3 = (int)uVar9;
  if ((uVar9 & 1) != 0) {
    uVar8 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar8 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,puVar3,uVar9);
      uVar8 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar10,puVar3,uVar9);
    }
  }
  *(int *)(*param_1 + 7) = iVar1 * 2;
  return param_1;
}

