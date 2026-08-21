
/* v8::internal::compiler::NodeProperties::InferReceiverMapsUnsafe(v8::internal::compiler::JSHeapBroker*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*,
   v8::internal::ZoneHandleSet<v8::internal::Map>*) */

undefined4
v8::internal::compiler::NodeProperties::InferReceiverMapsUnsafe
          (JSHeapBroker *param_1,Node *param_2,Node *param_3,ZoneHandleSet *param_4)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  Operator *pOVar8;
  char *pcVar9;
  long lVar10;
  MapRef *this;
  undefined8 *puVar11;
  Node *pNVar12;
  JSHeapBroker *pJVar13;
  JSHeapBroker *pJVar14;
  Node *pNVar15;
  JSHeapBroker *pJVar16;
  Node *pNVar17;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_88 [16];
  undefined1 local_70 [16];
  Node *pNVar18;
  
  pNVar12 = param_3;
  if (*(short *)(*(long *)param_2 + 0x10) == 0x1e) {
    pNVar12 = *(Node **)(*(long *)param_2 + 0x30);
    ObjectRef::ObjectRef((ObjectRef *)local_88,param_1,pNVar12,0);
    uVar6 = ObjectRef::IsHeapObject((ObjectRef *)local_88);
    if ((uVar6 & 1) == 0) {
LAB_017996c0:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsHeapObject()");
    }
    local_70._0_8_ = local_88._0_8_;
    local_70._8_8_ = local_88._8_8_;
    uVar6 = ObjectRef::IsJSObject((ObjectRef *)local_70);
    if ((uVar6 & 1) != 0) {
      local_88 = ObjectRef::AsJSObject((ObjectRef *)local_70);
      uVar6 = JSHeapBroker::IsArrayOrObjectPrototype(param_1,local_88);
      if ((uVar6 & 1) != 0) goto LAB_0179903c;
    }
    auVar21 = HeapObjectRef::map((HeapObjectRef *)local_70);
    local_88 = auVar21;
    uVar6 = MapRef::is_stable((MapRef *)local_88);
    if ((uVar6 & 1) != 0) {
      auVar21 = HeapObjectRef::map((HeapObjectRef *)local_70);
      local_88 = auVar21;
      uVar7 = MapRef::object((MapRef *)local_88);
      *(undefined8 *)param_4 = uVar7;
      return 2;
    }
  }
LAB_0179903c:
  uVar19 = 1;
  do {
    while( true ) {
      pOVar8 = *(Operator **)param_3;
      uVar2 = *(ushort *)(pOVar8 + 0x10);
      if (uVar2 != 0x24) break;
      iVar1 = *(int *)(pOVar8 + 0x14);
      uVar4 = OperatorProperties::HasContextInput(pOVar8);
      uVar5 = OperatorProperties::HasFrameStateInput(*(Operator **)param_3);
      pOVar8 = *(Operator **)param_3;
      pNVar15 = param_3 + 0x20;
      pNVar17 = pNVar15;
      if ((~*(uint *)(param_3 + 0x14) & 0xf000000) == 0) {
        pNVar17 = (Node *)(*(long *)pNVar15 + 0x10);
      }
      if (*(short *)(**(long **)(pNVar17 +
                                (long)(int)(iVar1 + (uVar4 & 1) + (uVar5 & 1) +
                                           *(int *)(pOVar8 + 0x18)) * 8) + 0x10) != 1) {
        return 0;
      }
      iVar1 = *(int *)(pOVar8 + 0x14);
      uVar4 = OperatorProperties::HasContextInput(pOVar8);
      uVar5 = OperatorProperties::HasFrameStateInput(*(Operator **)param_3);
      if ((~*(uint *)(param_3 + 0x14) & 0xf000000) == 0) {
        pNVar15 = (Node *)(*(long *)pNVar15 + 0x10);
      }
      param_3 = *(Node **)(pNVar15 + (long)(int)(iVar1 + (uVar4 & 1) + (uVar5 & 1)) * 8);
      uVar19 = 2;
    }
    uVar20 = uVar19;
    if (uVar2 < 0x2d3) {
      switch(uVar2) {
      case 0xd6:
        pNVar15 = param_3 + 0x20;
        if ((~*(uint *)(param_3 + 0x14) & 0xf000000) == 0) {
          pNVar15 = (Node *)(*(long *)pNVar15 + 0x10);
        }
        pJVar13 = *(JSHeapBroker **)pNVar15;
        sVar3 = *(short *)(*(long *)param_2 + 0x10);
        pJVar16 = (JSHeapBroker *)param_2;
        while (sVar3 == 0xde) {
          pJVar14 = pJVar16 + 0x20;
          if ((~*(uint *)(pJVar16 + 0x14) & 0xf000000) == 0) {
            pJVar14 = (JSHeapBroker *)(*(long *)pJVar14 + 0x10);
          }
          pJVar16 = *(JSHeapBroker **)pJVar14;
          sVar3 = *(short *)(*(long *)pJVar16 + 0x10);
        }
        while (*(short *)(*(long *)pJVar13 + 0x10) == 0xde) {
          pJVar14 = pJVar13 + 0x20;
          if ((~*(uint *)(pJVar13 + 0x14) & 0xf000000) == 0) {
            pJVar14 = (JSHeapBroker *)(*(long *)pJVar14 + 0x10);
          }
          pJVar13 = *(JSHeapBroker **)pJVar14;
        }
        if (pJVar16 == pJVar13) {
          lVar10 = CheckMapsParametersOf(pOVar8);
          *(undefined8 *)param_4 = *(undefined8 *)(lVar10 + 8);
          return uVar19;
        }
        break;
      case 0xd7:
      case 0xd8:
      case 0xd9:
      case 0xda:
      case 0xdb:
      case 0xdc:
      case 0xdd:
      case 0xde:
      case 0xdf:
      case 0xe0:
      case 0xe1:
      case 0xe2:
      case 0xe3:
      case 0xe4:
      case 0xe5:
      case 0xe6:
      case 0xe7:
      case 0xe8:
      case 0xe9:
      case 0xea:
      case 0xeb:
      case 0xec:
      case 0xed:
      case 0xee:
      case 0xef:
      case 0xf0:
      case 0xf3:
switchD_01799130_caseD_d7:
        if (*(int *)(pOVar8 + 0x18) != 1) {
          return 0;
        }
        uVar20 = 2;
        if (((byte)pOVar8[0x12] & 0x10) != 0) {
          uVar20 = uVar19;
        }
        break;
      case 0xf1:
        pNVar15 = param_3 + 0x20;
        pNVar17 = pNVar15;
        if ((~*(uint *)(param_3 + 0x14) & 0xf000000) == 0) {
          pNVar17 = (Node *)(*(long *)pNVar15 + 0x10);
        }
        pJVar16 = *(JSHeapBroker **)pNVar17;
        pcVar9 = (char *)FieldAccessOf(pOVar8);
        if ((*pcVar9 == '\x01') && (*(int *)(pcVar9 + 4) == 0)) {
          sVar3 = *(short *)(*(long *)param_2 + 0x10);
          pJVar13 = (JSHeapBroker *)param_2;
          while (sVar3 == 0xde) {
            pJVar14 = pJVar13 + 0x20;
            if ((~*(uint *)(pJVar13 + 0x14) & 0xf000000) == 0) {
              pJVar14 = (JSHeapBroker *)(*(long *)pJVar14 + 0x10);
            }
            pJVar13 = *(JSHeapBroker **)pJVar14;
            sVar3 = *(short *)(*(long *)pJVar13 + 0x10);
          }
          while (*(short *)(*(long *)pJVar16 + 0x10) == 0xde) {
            pJVar14 = pJVar16 + 0x20;
            if ((~*(uint *)(pJVar16 + 0x14) & 0xf000000) == 0) {
              pJVar14 = (JSHeapBroker *)(*(long *)pJVar14 + 0x10);
            }
            pJVar16 = *(JSHeapBroker **)pJVar14;
          }
          if (pJVar13 == pJVar16) {
            if ((~*(uint *)(param_3 + 0x14) & 0xf000000) == 0) {
              pNVar15 = (Node *)(*(long *)pNVar15 + 0x10);
            }
            if (*(short *)(**(long **)(pNVar15 + 8) + 0x10) == 0x1e) {
              ObjectRef::ObjectRef
                        ((ObjectRef *)local_88,param_1,
                         *(undefined8 *)(**(long **)(pNVar15 + 8) + 0x30),0);
              uVar6 = ObjectRef::IsHeapObject((ObjectRef *)local_88);
              if ((uVar6 & 1) != 0) {
                local_70 = local_88;
                auVar21 = ObjectRef::AsMap((ObjectRef *)local_70);
LAB_01799668:
                this = (MapRef *)local_88;
                local_88 = auVar21;
LAB_01799670:
                uVar7 = MapRef::object(this);
                *(undefined8 *)param_4 = uVar7;
                return uVar19;
              }
              goto LAB_017996c0;
            }
          }
          uVar20 = 2;
        }
        break;
      case 0xf2:
      case 0xf4:
        break;
      default:
        if (uVar2 == 0x28) {
          sVar3 = *(short *)(*(long *)param_2 + 0x10);
          pNVar15 = param_2;
          while (sVar3 == 0xde) {
            pNVar17 = pNVar15 + 0x20;
            if ((~*(uint *)(pNVar15 + 0x14) & 0xf000000) == 0) {
              pNVar17 = (Node *)(*(long *)pNVar17 + 0x10);
            }
            pNVar15 = *(Node **)pNVar17;
            sVar3 = *(short *)(*(long *)pNVar15 + 0x10);
          }
          if (pNVar15 == param_3) {
            pNVar15 = param_3 + 0x20;
            if ((~*(uint *)(param_3 + 0x14) & 0xf000000) == 0) {
              pNVar15 = (Node *)(*(long *)pNVar15 + 0x10);
            }
            param_2 = *(Node **)pNVar15;
          }
        }
        else {
          if (uVar2 != 0x39) goto switchD_01799130_caseD_d7;
          pNVar15 = param_3 + 0x20;
          if ((~*(uint *)(param_3 + 0x14) & 0xf000000) == 0) {
            pNVar15 = (Node *)(*(long *)pNVar15 + 0x10);
          }
          pJVar13 = *(JSHeapBroker **)pNVar15;
          sVar3 = *(short *)(*(long *)param_2 + 0x10);
          pJVar16 = (JSHeapBroker *)param_2;
          while (sVar3 == 0xde) {
            pJVar14 = pJVar16 + 0x20;
            if ((~*(uint *)(pJVar16 + 0x14) & 0xf000000) == 0) {
              pJVar14 = (JSHeapBroker *)(*(long *)pJVar14 + 0x10);
            }
            pJVar16 = *(JSHeapBroker **)pJVar14;
            sVar3 = *(short *)(*(long *)pJVar16 + 0x10);
          }
          while (*(short *)(*(long *)pJVar13 + 0x10) == 0xde) {
            pJVar14 = pJVar13 + 0x20;
            if ((~*(uint *)(pJVar13 + 0x14) & 0xf000000) == 0) {
              pJVar14 = (JSHeapBroker *)(*(long *)pJVar14 + 0x10);
            }
            pJVar13 = *(JSHeapBroker **)pJVar14;
          }
          if (pJVar16 == pJVar13) {
            puVar11 = (undefined8 *)MapGuardMapsOf(pOVar8);
            *(undefined8 *)param_4 = *puVar11;
            return uVar19;
          }
        }
      }
    }
    else if (uVar2 < 0x30d) {
      if (uVar2 == 0x2d3) {
        sVar3 = *(short *)(*(long *)param_2 + 0x10);
        pNVar15 = param_2;
        while (sVar3 == 0xde) {
          pNVar17 = pNVar15 + 0x20;
          if ((~*(uint *)(pNVar15 + 0x14) & 0xf000000) == 0) {
            pNVar17 = (Node *)(*(long *)pNVar17 + 0x10);
          }
          pNVar15 = *(Node **)pNVar17;
          sVar3 = *(short *)(*(long *)pNVar15 + 0x10);
        }
        if (pNVar15 == param_3) {
          GetJSCreateMap((NodeProperties *)param_1,(JSHeapBroker *)param_2,pNVar12);
          if (local_88[0] == (ObjectRef)0x0) {
            return 0;
          }
          this = (MapRef *)(local_88 + 8);
          goto LAB_01799670;
        }
      }
      else {
        if (uVar2 != 0x2e5) goto switchD_01799130_caseD_d7;
        sVar3 = *(short *)(*(long *)param_2 + 0x10);
        pNVar15 = param_2;
        while (sVar3 == 0xde) {
          pNVar17 = pNVar15 + 0x20;
          if ((~*(uint *)(pNVar15 + 0x14) & 0xf000000) == 0) {
            pNVar17 = (Node *)(*(long *)pNVar17 + 0x10);
          }
          pNVar15 = *(Node **)pNVar17;
          sVar3 = *(short *)(*(long *)pNVar15 + 0x10);
        }
        if (pNVar15 == param_3) {
          if (param_1[0x18] != (JSHeapBroker)0x1) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","storage_.is_populated_");
          }
          uStack_98 = *(undefined8 *)(param_1 + 0x28);
          local_a0 = *(undefined8 *)(param_1 + 0x20);
          local_70 = NativeContextRef::promise_function((NativeContextRef *)&local_a0);
          auVar21 = JSFunctionRef::initial_map((JSFunctionRef *)local_70);
          goto LAB_01799668;
        }
      }
    }
    else if ((uVar2 != 0x30d) && (uVar2 != 0x30f)) goto switchD_01799130_caseD_d7;
    sVar3 = *(short *)(*(long *)param_2 + 0x10);
    pNVar15 = param_2;
    while (sVar3 == 0xde) {
      pNVar17 = pNVar15 + 0x20;
      if ((~*(uint *)(pNVar15 + 0x14) & 0xf000000) == 0) {
        pNVar17 = (Node *)(*(long *)pNVar17 + 0x10);
      }
      pNVar15 = *(Node **)pNVar17;
      sVar3 = *(short *)(*(long *)pNVar15 + 0x10);
    }
    pOVar8 = *(Operator **)param_3;
    sVar3 = *(short *)(pOVar8 + 0x10);
    pNVar17 = param_3;
    while (sVar3 == 0xde) {
      pNVar18 = pNVar17 + 0x20;
      if ((~*(uint *)(pNVar17 + 0x14) & 0xf000000) == 0) {
        pNVar18 = (Node *)(*(long *)pNVar18 + 0x10);
      }
      pNVar17 = *(Node **)pNVar18;
      sVar3 = *(short *)(*(long *)pNVar17 + 0x10);
    }
    if (pNVar15 == pNVar17) {
      return 0;
    }
    iVar1 = *(int *)(pOVar8 + 0x14);
    uVar4 = OperatorProperties::HasContextInput(pOVar8);
    uVar5 = OperatorProperties::HasFrameStateInput(*(Operator **)param_3);
    pNVar15 = param_3 + 0x20;
    if ((~*(uint *)(param_3 + 0x14) & 0xf000000) == 0) {
      pNVar15 = (Node *)(*(long *)pNVar15 + 0x10);
    }
    param_3 = *(Node **)(pNVar15 + (long)(int)(iVar1 + (uVar4 & 1) + (uVar5 & 1)) * 8);
    uVar19 = uVar20;
  } while( true );
}

