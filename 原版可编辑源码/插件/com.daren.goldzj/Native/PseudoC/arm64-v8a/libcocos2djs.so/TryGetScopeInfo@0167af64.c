
/* v8::internal::compiler::BytecodeGraphBuilder::TryGetScopeInfo() */

void v8::internal::compiler::BytecodeGraphBuilder::TryGetScopeInfo(void)

{
  ushort uVar1;
  undefined8 *in_x0;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined1 *in_x8;
  Operator *pOVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 local_30 [16];
  
  pOVar5 = (Operator *)**(undefined8 **)(in_x0[0x15] + 0x10);
  uVar1 = *(ushort *)(pOVar5 + 0x10);
  if (uVar1 - 0x2f9 < 3) {
    uVar6 = *in_x0;
    uVar2 = ScopeInfoOf(pOVar5);
  }
  else {
    if (uVar1 == 0x32) {
      local_30 = SharedFunctionInfoRef::scope_info((SharedFunctionInfoRef *)(in_x0 + 5));
      uVar4 = ScopeInfoRef::HasOuterScopeInfo((ScopeInfoRef *)local_30);
      auVar7 = local_30;
      if ((uVar4 & 1) != 0) {
        auVar7 = ScopeInfoRef::OuterScopeInfo((ScopeInfoRef *)local_30);
      }
      goto LAB_0167afe4;
    }
    if (uVar1 != 0x2f8) {
      *in_x8 = 0;
      in_x8[8] = 0;
      return;
    }
    uVar6 = *in_x0;
    puVar3 = (undefined8 *)CreateFunctionContextParametersOf(pOVar5);
    uVar2 = *puVar3;
  }
  ObjectRef::ObjectRef((ObjectRef *)local_30,uVar6,uVar2,0);
  uVar4 = ObjectRef::IsScopeInfo((ObjectRef *)local_30);
  auVar7._8_8_ = local_30._8_8_;
  auVar7._0_8_ = local_30._0_8_;
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsScopeInfo()");
  }
LAB_0167afe4:
  *in_x8 = 1;
  *(undefined1 (*) [16])(in_x8 + 8) = auVar7;
  return;
}

