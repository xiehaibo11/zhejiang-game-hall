
/* v8::internal::GlobalHandles::PostGarbageCollectionProcessing(v8::internal::GarbageCollector,
   v8::GCCallbackFlags) */

long __thiscall
v8::internal::GlobalHandles::PostGarbageCollectionProcessing
          (GlobalHandles *this,ulong param_2,uint param_3)

{
  int iVar1;
  undefined8 *puVar2;
  Node NVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  Node *pNVar7;
  ulong uVar8;
  undefined8 *puVar9;
  Node *pNVar10;
  
  iVar1 = *(int *)(this + 0xa4) + 1;
  *(int *)(this + 0xa4) = iVar1;
  InvokeOrScheduleSecondPassPhantomCallbacks
            (this,(param_3 & 0x1c) != 0 || *(int *)(*(long *)this + 0x89c8) == 4);
  if (*(int *)(this + 0xa4) != iVar1) {
    return 0;
  }
  iVar4 = iVar1;
  if ((param_2 & 0xfffffffd) == 0) {
    puVar9 = *(undefined8 **)(this + 0x10);
    puVar2 = *(undefined8 **)(this + 0x18);
    if (puVar9 == puVar2) goto LAB_00f681f4;
    lVar5 = 0;
    do {
      pNVar7 = (Node *)*puVar9;
      NVar3 = pNVar7[0xb];
      if ((((byte)NVar3 & 7) != 0) && ((((byte)NVar3 & 7) != 4 || (((byte)NVar3 & 0x30) == 0)))) {
        if (((byte)NVar3 & 7) == 3) {
          Node::PostGarbageCollectionProcessing(pNVar7,*(Isolate **)this);
          iVar4 = *(int *)(this + 0xa4);
          if (iVar4 != iVar1) break;
        }
        NVar3 = pNVar7[0xb];
        if (((byte)NVar3 & 7) == 4) {
          if (((byte)NVar3 & 0x30) != 0) goto LAB_00f68180;
        }
        else if (((byte)NVar3 & 7) == 0) {
LAB_00f68180:
          lVar5 = lVar5 + 1;
        }
      }
      puVar9 = puVar9 + 1;
    } while (puVar2 != puVar9);
  }
  else {
    lVar6 = *(long *)(*(long *)(this + 8) + 0x10);
    if (lVar6 == 0) {
LAB_00f681f4:
      lVar5 = 0;
      goto LAB_00f681f8;
    }
    lVar5 = 0;
    uVar8 = 0;
LAB_00f680f0:
    do {
      pNVar7 = (Node *)(lVar6 + uVar8 * 0x20);
      pNVar10 = pNVar7 + 0xb;
      NVar3 = *pNVar10;
      if ((((byte)NVar3 & 7) != 0) && ((((byte)NVar3 & 7) != 4 || (((byte)NVar3 & 0x30) == 0)))) {
        if (((byte)NVar3 & 7) == 3) {
          Node::PostGarbageCollectionProcessing(pNVar7,*(Isolate **)this);
          iVar4 = *(int *)(this + 0xa4);
          if (iVar4 != iVar1) break;
        }
        NVar3 = *pNVar10;
        if (((byte)NVar3 & 7) == 4) {
          if (((byte)NVar3 & 0x30) != 0) goto LAB_00f680dc;
        }
        else if (((byte)NVar3 & 7) == 0) {
LAB_00f680dc:
          lVar5 = lVar5 + 1;
        }
      }
      uVar8 = uVar8 + 1;
      if (uVar8 < 0x100) {
        if (lVar6 == 0) break;
        goto LAB_00f680f0;
      }
      lVar6 = *(long *)(lVar6 + 0x2018);
      uVar8 = 0;
    } while (lVar6 != 0);
  }
  if (iVar4 != iVar1) {
    return lVar5;
  }
LAB_00f681f8:
  UpdateAndCompactListOfYoungNode<v8::internal::GlobalHandles::Node>(this,(vector *)(this + 0x10));
  UpdateAndCompactListOfYoungNode<v8::internal::GlobalHandles::TracedNode>
            (this,(vector *)(this + 0x30));
  return lVar5;
}

