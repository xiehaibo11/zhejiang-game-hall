
/* v8::internal::compiler::MapData::SerializeElementsKindGeneralizations(v8::internal::compiler::JSHeapBroker*)
    */

void __thiscall
v8::internal::compiler::MapData::SerializeElementsKindGeneralizations
          (MapData *this,JSHeapBroker *param_1)

{
  long *plVar1;
  byte bVar2;
  short sVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  Zone *this_00;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  int iVar14;
  long lVar15;
  MapData *local_70;
  JSHeapBroker *pJStack_68;
  long local_48;
  
  if (this[0x43] == (MapData)0x0) {
    this[0x43] = (MapData)0x1;
    TraceScope::TraceScope
              ((TraceScope *)&local_48,param_1,this,"MapData::SerializeElementsKindGeneralizations")
    ;
    local_70 = this;
    pJStack_68 = param_1;
    puVar4 = (undefined8 *)ObjectRef::data((ObjectRef *)&local_70);
    if (*(int *)(puVar4 + 1) == 2) {
      uVar5 = *(ulong *)*puVar4;
      if ((uVar5 & 1) == 0) goto LAB_0170ed68;
      sVar3 = *(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1));
    }
    else {
      if (*(int *)(puVar4 + 1) == 0) goto LAB_0170ed68;
      sVar3 = *(short *)(puVar4[2] + 0x18);
    }
    if (sVar3 != 0xa2) {
LAB_0170ed68:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsMap()");
    }
    if (*(int *)(this + 8) == 2) {
      pbVar8 = (byte *)(**(long **)this + 10);
    }
    else {
      lVar7 = ObjectRef::data((ObjectRef *)&local_70);
      if (*(int *)(lVar7 + 8) != 1) {
LAB_0170ed7c:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
      }
      if (*(short *)(*(long *)(lVar7 + 0x10) + 0x18) != 0xa2) goto LAB_0170ed68;
      pbVar8 = (byte *)(lVar7 + 0x21);
    }
    bVar2 = *pbVar8;
    iVar14 = 0;
    do {
      uVar5 = IsMoreGeneralElementsKindTransition(bVar2 >> 3,iVar14);
      if ((uVar5 & 1) != 0) {
        uVar6 = Map::AsElementsKind(*(undefined8 *)param_1,*(undefined8 *)local_70,iVar14);
        lVar7 = JSHeapBroker::GetOrCreateData(param_1,uVar6);
        if (*(int *)(lVar7 + 8) != 1) goto LAB_0170ed7c;
        if (*(short *)(*(long *)(lVar7 + 0x10) + 0x18) != 0xa2) goto LAB_0170ed68;
        plVar10 = *(long **)(this + 0x50);
        if (plVar10 < *(long **)(this + 0x58)) {
          *plVar10 = lVar7;
          *(long *)(this + 0x50) = *(long *)(this + 0x50) + 8;
        }
        else {
          lVar15 = (long)plVar10 - *(long *)(this + 0x48) >> 3;
          uVar5 = lVar15 + 1;
          if (uVar5 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          lVar9 = (long)*(long **)(this + 0x58) - *(long *)(this + 0x48);
          uVar12 = lVar9 >> 2;
          if (uVar5 <= uVar12) {
            uVar5 = uVar12;
          }
          if (0x7fffffe < (ulong)(lVar9 >> 3)) {
            uVar5 = 0xfffffff;
          }
          if (uVar5 == 0) {
            lVar9 = 0;
          }
          else {
            this_00 = *(Zone **)(this + 0x60);
            uVar12 = uVar5 * 8;
            lVar9 = *(long *)(this_00 + 0x10);
            if (uVar12 < (ulong)(*(long *)(this_00 + 0x18) - lVar9) ||
                uVar12 - (*(long *)(this_00 + 0x18) - lVar9) == 0) {
              *(ulong *)(this_00 + 0x10) = lVar9 + uVar12;
            }
            else {
              lVar9 = Zone::NewExpand(this_00,uVar12);
            }
          }
          plVar10 = (long *)(lVar9 + lVar15 * 8);
          plVar11 = plVar10 + 1;
          *plVar10 = lVar7;
          plVar1 = *(long **)(this + 0x48);
          plVar13 = *(long **)(this + 0x50);
          while (plVar13 != plVar1) {
            plVar13 = plVar13 + -1;
            plVar10 = plVar10 + -1;
            *plVar10 = *plVar13;
          }
          *(long **)(this + 0x48) = plVar10;
          *(long **)(this + 0x50) = plVar11;
          *(ulong *)(this + 0x58) = lVar9 + uVar5 * 8;
        }
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 != 6);
    *(int *)(local_48 + 0x170) = *(int *)(local_48 + 0x170) + -1;
  }
  return;
}

