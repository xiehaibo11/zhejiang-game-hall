
/* v8::internal::compiler::BytecodeGraphBuilder::CheckContextExtensions(unsigned int) */

Environment * __thiscall
v8::internal::compiler::BytecodeGraphBuilder::CheckContextExtensions
          (BytecodeGraphBuilder *this,uint param_1)

{
  ulong uVar1;
  Environment *pEVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  ScopeInfoRef local_60 [24];
  char local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  TryGetScopeInfo();
  if (local_48 == '\0') {
    pEVar2 = (Environment *)CheckContextExtensionsSlowPath(this,param_1);
  }
  else {
    auVar4._8_8_ = uStack_38;
    auVar4._0_8_ = local_40;
    if (param_1 == 0) {
      pEVar2 = (Environment *)0x0;
    }
    else {
      uVar3 = 0;
      pEVar2 = (Environment *)0x0;
      do {
        local_60._0_16_ = auVar4;
        uVar1 = ScopeInfoRef::HasContextExtension(local_60);
        if ((uVar1 & 1) != 0) {
          pEVar2 = (Environment *)CheckContextExtensionAtDepth(this,pEVar2,uVar3);
        }
        uVar1 = ScopeInfoRef::HasOuterScopeInfo(local_60);
        auVar4 = local_60._0_16_;
        if ((uVar1 & 1) != 0) {
          auVar4 = ScopeInfoRef::OuterScopeInfo(local_60);
        }
        uVar3 = uVar3 + 1;
      } while (param_1 != uVar3);
    }
  }
  return pEVar2;
}

