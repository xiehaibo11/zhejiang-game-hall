
/* v8::internal::GetTemplateObject::GetOrBuildDescription(v8::internal::Isolate*) */

void __thiscall
v8::internal::GetTemplateObject::GetOrBuildDescription(GetTemplateObject *this,Isolate *param_1)

{
  long lVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  
  puVar3 = (ulong *)Factory::NewFixedArray
                              ((Factory *)param_1,*(undefined4 *)(*(long *)(this + 0x10) + 0xc),1);
  uVar8 = *puVar3;
  puVar4 = puVar3;
  if (1 < *(int *)(uVar8 + 3)) {
    iVar9 = 0;
    lVar10 = 0;
    bVar2 = true;
    do {
      puVar5 = *(undefined8 **)(**(long **)(this + 8) + lVar10 * 8);
      uVar7 = *(ulong *)**(undefined8 **)(**(long **)(this + 0x10) + lVar10 * 8);
      if ((puVar5 == (undefined8 *)0x0) || ((int)uVar7 != *(int *)*puVar5)) {
        bVar2 = false;
      }
      *(int *)(uVar8 + (long)iVar9 + 7) = (int)uVar7;
      if ((uVar7 & 1) != 0) {
        uVar6 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
        lVar1 = uVar8 + (long)iVar9 + 7;
        if (((uint)uVar6 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar8,lVar1,uVar7);
          uVar6 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar8,lVar1,uVar7);
        }
      }
      uVar8 = *puVar3;
      lVar10 = lVar10 + 1;
      iVar9 = iVar9 + 4;
    } while (lVar10 < *(int *)(uVar8 + 3) >> 1);
    if (!bVar2) {
      puVar4 = (ulong *)Factory::NewFixedArray
                                  ((Factory *)param_1,*(undefined4 *)(*(long *)(this + 8) + 0xc),1);
      uVar8 = *puVar4;
      if (1 < *(int *)(uVar8 + 3)) {
        iVar9 = 0;
        lVar10 = 0;
        do {
          puVar5 = *(undefined8 **)(**(long **)(this + 8) + lVar10 * 8);
          if (puVar5 == (undefined8 *)0x0) {
            uVar7 = *(ulong *)(param_1 + 0xa0);
          }
          else {
            uVar7 = *(ulong *)*puVar5;
          }
          *(int *)(uVar8 + (long)iVar9 + 7) = (int)uVar7;
          if ((uVar7 & 1) != 0) {
            uVar6 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
            lVar1 = uVar8 + (long)iVar9 + 7;
            if (((uint)uVar6 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar8,lVar1,uVar7);
              uVar6 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
               ) {
              Heap_GenerationalBarrierSlow(uVar8,lVar1,uVar7);
            }
          }
          uVar8 = *puVar4;
          lVar10 = lVar10 + 1;
          iVar9 = iVar9 + 4;
        } while (lVar10 < *(int *)(uVar8 + 3) >> 1);
      }
    }
  }
  Factory::NewTemplateObjectDescription((Factory *)param_1,puVar3,puVar4);
  return;
}

