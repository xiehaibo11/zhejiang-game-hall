
/* v8::internal::compiler::JSHeapCopyReducer::Reduce(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::JSHeapCopyReducer::Reduce(JSHeapCopyReducer *this,Node *param_1)

{
  int iVar1;
  ushort uVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  FeedbackSource *pFVar7;
  ulong uVar8;
  undefined1 *puVar9;
  Operator *pOVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 local_170 [8];
  undefined1 local_168;
  ObjectRef aOStack_158 [16];
  ObjectRef aOStack_148 [16];
  ObjectRef aOStack_138 [16];
  ObjectRef aOStack_128 [16];
  ObjectRef aOStack_118 [16];
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined8 uStack_f8;
  ObjectRef aOStack_f0 [16];
  ObjectRef aOStack_e0 [16];
  ObjectRef aOStack_d0 [16];
  ObjectRef aOStack_c0 [16];
  ObjectRef aOStack_b0 [16];
  ObjectRef aOStack_a0 [16];
  ObjectRef aOStack_90 [16];
  ObjectRef aOStack_80 [16];
  ObjectRef aOStack_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar9 = local_170;
  pOVar10 = *(Operator **)param_1;
  uVar2 = *(ushort *)(pOVar10 + 0x10);
  if (uVar2 < 0x2d4) {
    switch(uVar2) {
    case 0xd6:
      lVar11 = CheckMapsParametersOf(pOVar10);
      uVar8 = *(ulong *)(lVar11 + 8);
      if ((uVar8 & 3) == 0) {
        lVar14 = 1;
      }
      else {
        if ((uVar8 & 3) == 1) {
          return 0;
        }
        lVar14 = *(long *)(uVar8 + 6) - *(long *)(uVar8 - 2);
        if (lVar14 == 0) {
          return 0;
        }
        lVar14 = lVar14 >> 3;
      }
      lVar13 = 0;
      do {
        lVar14 = lVar14 + -1;
        if ((uVar8 & 3) != 0) {
          if ((ulong)(*(long *)(uVar8 + 6) - *(long *)(uVar8 - 2) >> 3) <= (ulong)(lVar13 >> 0x20))
          {
LAB_0173e23c:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar8 = *(ulong *)(*(long *)(uVar8 - 2) + (lVar13 >> 0x20) * 8);
        }
        ObjectRef::ObjectRef(aOStack_148,*(undefined8 *)(this + 8),uVar8,0);
        uVar8 = ObjectRef::IsMap(aOStack_148);
        if ((uVar8 & 1) == 0) goto LAB_0173e228;
        if (lVar14 == 0) {
          return 0;
        }
        uVar8 = *(ulong *)(lVar11 + 8);
        lVar13 = lVar13 + 0x100000000;
      } while( true );
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
    case 0xe4:
    case 0xe5:
    case 0xe6:
    case 0xe7:
    case 0xe8:
    case 0xe9:
    case 0xeb:
    case 0xec:
    case 0xed:
    case 0xee:
    case 0xef:
    case 0xf0:
      return 0;
    case 0xe3:
      puVar3 = (ulong *)CompareMapsParametersOf(pOVar10);
      uVar8 = *puVar3;
      if ((uVar8 & 3) == 0) {
        lVar11 = 1;
      }
      else {
        if ((uVar8 & 3) == 1) {
          return 0;
        }
        lVar11 = *(long *)(uVar8 + 6) - *(long *)(uVar8 - 2);
        if (lVar11 == 0) {
          return 0;
        }
        lVar11 = lVar11 >> 3;
      }
      lVar14 = 0;
      do {
        lVar11 = lVar11 + -1;
        if ((uVar8 & 3) != 0) {
          if ((ulong)(*(long *)(uVar8 + 6) - *(long *)(uVar8 - 2) >> 3) <= (ulong)(lVar14 >> 0x20))
          goto LAB_0173e23c;
          uVar8 = *(ulong *)(*(long *)(uVar8 - 2) + (lVar14 >> 0x20) * 8);
        }
        ObjectRef::ObjectRef(aOStack_158,*(undefined8 *)(this + 8),uVar8,0);
        uVar8 = ObjectRef::IsMap(aOStack_158);
        if ((uVar8 & 1) == 0) goto LAB_0173e228;
        if (lVar11 == 0) {
          return 0;
        }
        uVar8 = *puVar3;
        lVar14 = lVar14 + 0x100000000;
      } while( true );
    case 0xea:
    case 0xf1:
      goto switchD_0173dba8_caseD_ea;
    default:
      if (uVar2 == 0x1e) {
        uVar12 = *(undefined8 *)(this + 8);
        uVar6 = HeapConstantOf(pOVar10);
        ObjectRef::ObjectRef((ObjectRef *)&local_50,uVar12,uVar6,1);
        uVar8 = ObjectRef::IsJSFunction((ObjectRef *)&local_50);
        if ((uVar8 & 1) != 0) {
          local_60 = ObjectRef::AsJSFunction((ObjectRef *)&local_50);
          JSFunctionRef::Serialize((JSFunctionRef *)local_60);
        }
        uVar8 = ObjectRef::IsJSObject((ObjectRef *)&local_50);
        if ((uVar8 & 1) != 0) {
          auVar15 = ObjectRef::AsJSObject((ObjectRef *)&local_50);
          local_60 = auVar15;
          JSObjectRef::SerializeObjectCreateMap((JSObjectRef *)local_60);
        }
        uVar8 = ObjectRef::IsSourceTextModule((ObjectRef *)&local_50);
        if ((uVar8 & 1) != 0) {
          auVar15 = ObjectRef::AsSourceTextModule((ObjectRef *)&local_50);
          local_60 = auVar15;
          SourceTextModuleRef::Serialize((SourceTextModuleRef *)local_60);
          return 0;
        }
        return 0;
      }
      if (uVar2 != 0x39) {
        return 0;
      }
      puVar3 = (ulong *)MapGuardMapsOf(pOVar10);
      uVar8 = *puVar3;
      if ((uVar8 & 3) == 0) {
        lVar11 = 1;
      }
      else {
        if ((uVar8 & 3) == 1) {
          return 0;
        }
        lVar11 = *(long *)(uVar8 + 6) - *(long *)(uVar8 - 2);
        if (lVar11 == 0) {
          return 0;
        }
        lVar11 = lVar11 >> 3;
      }
      lVar14 = 0;
      do {
        lVar11 = lVar11 + -1;
        if ((uVar8 & 3) != 0) {
          if ((ulong)(*(long *)(uVar8 + 6) - *(long *)(uVar8 - 2) >> 3) <= (ulong)(lVar14 >> 0x20))
          goto LAB_0173e23c;
          uVar8 = *(ulong *)(*(long *)(uVar8 - 2) + (lVar14 >> 0x20) * 8);
        }
        ObjectRef::ObjectRef(aOStack_138,*(undefined8 *)(this + 8),uVar8,0);
        uVar8 = ObjectRef::IsMap(aOStack_138);
        if ((uVar8 & 1) == 0) goto LAB_0173e228;
        if (lVar11 == 0) {
          return 0;
        }
        uVar8 = *puVar3;
        lVar14 = lVar14 + 0x100000000;
      } while( true );
    }
  }
  switch(uVar2) {
  case 0x2d4:
    puVar4 = (undefined8 *)NodeProperties::GetFrameStateInput(param_1);
    lVar11 = FrameStateInfoOf((Operator *)*puVar4);
    if ((*(long *)(lVar11 + 0x10) == 0) ||
       (lVar11 = *(long *)(*(long *)(lVar11 + 0x10) + 0x10), lVar11 == 0)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    ObjectRef::ObjectRef((ObjectRef *)&local_50,*(undefined8 *)(this + 8),lVar11,0);
    uVar8 = ObjectRef::IsSharedFunctionInfo((ObjectRef *)&local_50);
    if ((uVar8 & 1) == 0) {
LAB_0173ded0:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsSharedFunctionInfo()");
    }
    break;
  case 0x2d5:
    lVar11 = CreateArrayParametersOf(pOVar10);
    if (*(long *)(lVar11 + 8) != 0) {
      ObjectRef::ObjectRef(aOStack_70,*(undefined8 *)(this + 8),*(long *)(lVar11 + 8),0);
      uVar8 = ObjectRef::IsAllocationSite(aOStack_70);
      if ((uVar8 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsAllocationSite()");
      }
    }
    break;
  case 0x2d9:
    lVar11 = CreateBoundFunctionParametersOf(pOVar10);
    ObjectRef::ObjectRef(aOStack_90,*(undefined8 *)(this + 8),*(undefined8 *)(lVar11 + 8),0);
    uVar8 = ObjectRef::IsMap(aOStack_90);
    if ((uVar8 & 1) == 0) {
LAB_0173e228:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsMap()");
    }
    break;
  case 0x2da:
    puVar4 = (undefined8 *)CreateClosureParametersOf(pOVar10);
    ObjectRef::ObjectRef(aOStack_b0,*(undefined8 *)(this + 8),*puVar4,0);
    uVar8 = ObjectRef::IsSharedFunctionInfo(aOStack_b0);
    if ((uVar8 & 1) == 0) goto LAB_0173ded0;
    ObjectRef::ObjectRef(aOStack_c0,*(undefined8 *)(this + 8),puVar4[1],0);
    uVar8 = ObjectRef::IsFeedbackCell(aOStack_c0);
    if ((uVar8 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsFeedbackCell()");
    }
    ObjectRef::ObjectRef(aOStack_d0,*(undefined8 *)(this + 8),puVar4[2],0);
    uVar8 = ObjectRef::IsHeapObject(aOStack_d0);
    if ((uVar8 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsHeapObject()");
    }
    break;
  case 0x2dc:
    pFVar7 = (FeedbackSource *)FeedbackParameterOf(pOVar10);
    if (*(long *)pFVar7 == 0) {
      return 0;
    }
    iVar1 = *(int *)(pFVar7 + 8);
    goto joined_r0x0173db80;
  case 0x2e1:
  case 0x2e2:
    lVar11 = CreateLiteralParametersOf(pOVar10);
    pFVar7 = (FeedbackSource *)(lVar11 + 8);
    if (*(long *)pFVar7 == 0) {
      return 0;
    }
    iVar1 = *(int *)(lVar11 + 0x10);
joined_r0x0173db80:
    if (iVar1 != -1) {
      JSHeapBroker::ProcessFeedbackForArrayOrObjectLiteral(*(JSHeapBroker **)(this + 8),pFVar7);
    }
    break;
  case 0x2e3:
    lVar11 = CreateLiteralParametersOf(pOVar10);
    if ((*(long *)(lVar11 + 8) != 0) && (*(int *)(lVar11 + 0x10) != -1)) {
      JSHeapBroker::ProcessFeedbackForRegExpLiteral
                (*(JSHeapBroker **)(this + 8),(FeedbackSource *)(lVar11 + 8));
    }
    break;
  case 0x2e8:
    puVar4 = (undefined8 *)GetTemplateObjectParametersOf(pOVar10);
    ObjectRef::ObjectRef((ObjectRef *)&local_50,*(undefined8 *)(this + 8),puVar4[1],0);
    uVar8 = ObjectRef::IsSharedFunctionInfo((ObjectRef *)&local_50);
    if ((uVar8 & 1) == 0) goto LAB_0173ded0;
    ObjectRef::ObjectRef((ObjectRef *)local_60,*(undefined8 *)(this + 8),*puVar4,0);
    uVar8 = ObjectRef::IsTemplateObjectDescription((ObjectRef *)local_60);
    if ((uVar8 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsTemplateObjectDescription()");
    }
    SharedFunctionInfoRef::GetTemplateObject(&local_50,local_60._0_8_,local_60._8_8_,puVar4 + 2,1);
    break;
  case 0x2e9:
    plVar5 = (long *)PropertyAccessOf(pOVar10);
    if (*plVar5 == 0) {
      return 0;
    }
    if ((int)plVar5[1] == -1) {
      return 0;
    }
    uVar6 = *(undefined8 *)(this + 8);
    local_170[0] = 0;
    local_168 = 0;
    goto LAB_0173df40;
  case 0x2ea:
    puVar4 = (undefined8 *)NamedAccessOf(pOVar10);
    ObjectRef::ObjectRef((ObjectRef *)&local_50,*(undefined8 *)(this + 8),*puVar4,0);
    uVar8 = ObjectRef::IsName((ObjectRef *)&local_50);
    if ((uVar8 & 1) == 0) goto LAB_0173e240;
    plVar5 = puVar4 + 1;
    if (*plVar5 == 0) {
      return 0;
    }
    if (*(int *)(puVar4 + 2) == -1) {
      return 0;
    }
    uVar6 = *(undefined8 *)(this + 8);
    local_108[0] = 1;
    uStack_f8 = uStack_48;
    local_100 = local_50;
    puVar9 = local_108;
LAB_0173df40:
    JSHeapBroker::ProcessFeedbackForPropertyAccess(uVar6,plVar5,0,puVar9);
    break;
  case 0x2ed:
    puVar4 = (undefined8 *)NamedAccessOf(pOVar10);
    ObjectRef::ObjectRef((ObjectRef *)&local_50,*(undefined8 *)(this + 8),*puVar4,0);
    uVar8 = ObjectRef::IsName((ObjectRef *)&local_50);
    goto joined_r0x0173dbf8;
  case 0x2f8:
    puVar4 = (undefined8 *)CreateFunctionContextParametersOf(pOVar10);
    ObjectRef::ObjectRef(aOStack_e0,*(undefined8 *)(this + 8),*puVar4,0);
    uVar8 = ObjectRef::IsScopeInfo(aOStack_e0);
    goto joined_r0x0173dffc;
  case 0x2f9:
    uVar12 = *(undefined8 *)(this + 8);
    uVar6 = ScopeInfoOf(pOVar10);
    ObjectRef::ObjectRef(aOStack_a0,uVar12,uVar6,0);
    uVar8 = ObjectRef::IsScopeInfo(aOStack_a0);
joined_r0x0173dffc:
    if ((uVar8 & 1) == 0) {
LAB_0173e030:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsScopeInfo()");
    }
    break;
  case 0x2fa:
    uVar12 = *(undefined8 *)(this + 8);
    uVar6 = ScopeInfoOf(pOVar10);
    ObjectRef::ObjectRef(aOStack_f0,uVar12,uVar6,0);
    uVar8 = ObjectRef::IsScopeInfo(aOStack_f0);
    goto joined_r0x0173e02c;
  case 0x2fb:
    uVar12 = *(undefined8 *)(this + 8);
    uVar6 = ScopeInfoOf(pOVar10);
    ObjectRef::ObjectRef(aOStack_80,uVar12,uVar6,0);
    uVar8 = ObjectRef::IsScopeInfo(aOStack_80);
joined_r0x0173e02c:
    if ((uVar8 & 1) != 0) {
      return 0;
    }
    goto LAB_0173e030;
  }
  return 0;
switchD_0173dba8_caseD_ea:
  lVar14 = FieldAccessOf(pOVar10);
  lVar11 = *(long *)(lVar14 + 8);
  if (*(long *)(lVar14 + 0x10) != 0) {
    ObjectRef::ObjectRef(aOStack_118,*(undefined8 *)(this + 8),*(long *)(lVar14 + 0x10),0);
    uVar8 = ObjectRef::IsMap(aOStack_118);
    if ((uVar8 & 1) == 0) goto LAB_0173e228;
  }
  if (lVar11 == 0) {
    return 0;
  }
  ObjectRef::ObjectRef(aOStack_128,*(undefined8 *)(this + 8),lVar11,0);
  uVar8 = ObjectRef::IsName(aOStack_128);
joined_r0x0173dbf8:
  if ((uVar8 & 1) != 0) {
    return 0;
  }
LAB_0173e240:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsName()");
}

