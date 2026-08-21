
/* v8::internal::compiler::JSNativeContextSpecialization::InferReceiverMaps(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>
   >*) const */

undefined8 __thiscall
v8::internal::compiler::JSNativeContextSpecialization::InferReceiverMaps
          (JSNativeContextSpecialization *this,Node *param_1,Node *param_2,ZoneVector *param_3)

{
  ulong *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  Zone *pZVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  ObjectRef aOStack_60 [16];
  ulong local_38;
  
  local_38 = 1;
  iVar2 = NodeProperties::InferReceiverMapsUnsafe
                    (*(JSHeapBroker **)(this + 0x18),param_1,param_2,(ZoneHandleSet *)&local_38);
  if (iVar2 == 1) {
    uVar13 = 0;
    while (uVar4 = local_38 & 3, uVar4 != 1) {
      if (uVar4 == 0) {
        if (uVar13 != 0) break;
      }
      else if ((ulong)(*(long *)(local_38 + 6) - *(long *)(local_38 - 2) >> 3) <= uVar13) break;
      uVar8 = local_38;
      if (uVar4 != 0) {
        if ((ulong)(*(long *)(local_38 + 6) - *(long *)(local_38 - 2) >> 3) <=
            (ulong)(long)(int)uVar13) goto LAB_0174bcf0;
        uVar8 = *(ulong *)(*(long *)(local_38 - 2) + (long)(int)uVar13 * 8);
      }
      puVar5 = *(ulong **)(param_3 + 8);
      if (puVar5 < *(ulong **)(param_3 + 0x10)) {
        *puVar5 = uVar8;
        uVar13 = uVar13 + 1;
        *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + 8;
      }
      else {
        lVar12 = (long)puVar5 - *(long *)param_3 >> 3;
        uVar4 = lVar12 + 1;
        if (uVar4 >> 0x1c != 0) {
LAB_0174bcf0:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar6 = (long)*(ulong **)(param_3 + 0x10) - *(long *)param_3;
        uVar10 = lVar6 >> 2;
        if (uVar4 <= uVar10) {
          uVar4 = uVar10;
        }
        if (0x7fffffe < (ulong)(lVar6 >> 3)) {
          uVar4 = 0xfffffff;
        }
        if (uVar4 == 0) {
          lVar6 = 0;
        }
        else {
          pZVar7 = *(Zone **)(param_3 + 0x18);
          uVar10 = uVar4 * 8;
          lVar6 = *(long *)(pZVar7 + 0x10);
          if (uVar10 < (ulong)(*(long *)(pZVar7 + 0x18) - lVar6) ||
              uVar10 - (*(long *)(pZVar7 + 0x18) - lVar6) == 0) {
            *(ulong *)(pZVar7 + 0x10) = lVar6 + uVar10;
          }
          else {
            lVar6 = Zone::NewExpand(pZVar7,uVar10);
          }
        }
        puVar5 = (ulong *)(lVar6 + lVar12 * 8);
        puVar9 = puVar5 + 1;
        *puVar5 = uVar8;
        puVar1 = *(ulong **)param_3;
        puVar11 = *(ulong **)(param_3 + 8);
        while (puVar11 != puVar1) {
          puVar11 = puVar11 + -1;
          puVar5 = puVar5 + -1;
          *puVar5 = *puVar11;
        }
        *(ulong **)param_3 = puVar5;
        *(ulong **)(param_3 + 8) = puVar9;
        *(ulong *)(param_3 + 0x10) = lVar6 + uVar4 * 8;
        uVar13 = uVar13 + 1;
      }
    }
LAB_0174bcd0:
    uVar3 = 1;
  }
  else {
    if (iVar2 == 2) {
      lVar12 = 0;
      uVar13 = 0xffffffffffffffff;
      do {
        uVar4 = local_38 & 3;
        if (uVar4 == 1) {
          uVar8 = 0;
        }
        else if (uVar4 == 0) {
          uVar8 = 1;
        }
        else {
          uVar8 = *(long *)(local_38 + 6) - *(long *)(local_38 - 2) >> 3;
        }
        uVar13 = uVar13 + 1;
        if (uVar8 <= uVar13) {
          uVar13 = 0;
          goto LAB_0174bbbc;
        }
        uVar8 = local_38;
        if (uVar4 != 0) {
          if ((ulong)(*(long *)(local_38 + 6) - *(long *)(local_38 - 2) >> 3) <=
              (ulong)(lVar12 >> 0x20)) goto LAB_0174bcf0;
          uVar8 = *(ulong *)(*(long *)(local_38 - 2) + (lVar12 >> 0x20) * 8);
        }
        ObjectRef::ObjectRef(aOStack_60,*(undefined8 *)(this + 0x18),uVar8,0);
        uVar4 = ObjectRef::IsMap(aOStack_60);
        if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","IsMap()");
        }
        lVar12 = lVar12 + 0x100000000;
        uVar4 = MapRef::is_stable((MapRef *)aOStack_60);
      } while ((uVar4 & 1) != 0);
    }
    uVar3 = 0;
  }
  return uVar3;
LAB_0174bbbc:
  uVar4 = local_38 & 3;
  if (uVar4 == 1) goto LAB_0174bcd0;
  if (uVar4 == 0) {
    if (uVar13 != 0) goto LAB_0174bcd0;
  }
  else if ((ulong)(*(long *)(local_38 + 6) - *(long *)(local_38 - 2) >> 3) <= uVar13)
  goto LAB_0174bcd0;
  uVar8 = local_38;
  if (uVar4 != 0) {
    if ((ulong)(*(long *)(local_38 + 6) - *(long *)(local_38 - 2) >> 3) <= (ulong)(long)(int)uVar13)
    goto LAB_0174bcf0;
    uVar8 = *(ulong *)(*(long *)(local_38 - 2) + (long)(int)uVar13 * 8);
  }
  puVar5 = *(ulong **)(param_3 + 8);
  if (puVar5 < *(ulong **)(param_3 + 0x10)) {
    *puVar5 = uVar8;
    *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + 8;
  }
  else {
    lVar12 = (long)puVar5 - *(long *)param_3 >> 3;
    uVar4 = lVar12 + 1;
    if (uVar4 >> 0x1c != 0) goto LAB_0174bcf0;
    lVar6 = (long)*(ulong **)(param_3 + 0x10) - *(long *)param_3;
    uVar10 = lVar6 >> 2;
    if (uVar4 <= uVar10) {
      uVar4 = uVar10;
    }
    if (0x7fffffe < (ulong)(lVar6 >> 3)) {
      uVar4 = 0xfffffff;
    }
    if (uVar4 == 0) {
      lVar6 = 0;
    }
    else {
      pZVar7 = *(Zone **)(param_3 + 0x18);
      uVar10 = uVar4 * 8;
      lVar6 = *(long *)(pZVar7 + 0x10);
      if (uVar10 < (ulong)(*(long *)(pZVar7 + 0x18) - lVar6) ||
          uVar10 - (*(long *)(pZVar7 + 0x18) - lVar6) == 0) {
        *(ulong *)(pZVar7 + 0x10) = lVar6 + uVar10;
      }
      else {
        lVar6 = Zone::NewExpand(pZVar7,uVar10);
      }
    }
    puVar5 = (ulong *)(lVar6 + lVar12 * 8);
    puVar9 = puVar5 + 1;
    *puVar5 = uVar8;
    puVar1 = *(ulong **)param_3;
    puVar11 = *(ulong **)(param_3 + 8);
    while (puVar11 != puVar1) {
      puVar11 = puVar11 + -1;
      puVar5 = puVar5 + -1;
      *puVar5 = *puVar11;
    }
    *(ulong **)param_3 = puVar5;
    *(ulong **)(param_3 + 8) = puVar9;
    *(ulong *)(param_3 + 0x10) = lVar6 + uVar4 * 8;
  }
  uVar13 = uVar13 + 1;
  goto LAB_0174bbbc;
}

