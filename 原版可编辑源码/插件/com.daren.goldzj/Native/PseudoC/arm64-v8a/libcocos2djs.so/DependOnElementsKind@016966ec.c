
/* v8::internal::compiler::CompilationDependencies::DependOnElementsKind(v8::internal::compiler::AllocationSiteRef
   const&) */

void __thiscall
v8::internal::compiler::CompilationDependencies::DependOnElementsKind
          (CompilationDependencies *this,AllocationSiteRef *param_1)

{
  byte bVar1;
  ulong uVar2;
  Zone *pZVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char local_48;
  JSObjectRef aJStack_40 [16];
  
  uVar2 = AllocationSiteRef::PointsToLiteral(param_1);
  if ((uVar2 & 1) == 0) {
    bVar1 = AllocationSiteRef::GetElementsKind(param_1);
  }
  else {
    AllocationSiteRef::boilerplate();
    if (local_48 != '\x01') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","storage_.is_populated_");
    }
    bVar1 = JSObjectRef::GetElementsKind(aJStack_40);
  }
  if (bVar1 < 2) {
    pZVar3 = *(Zone **)this;
    puVar4 = *(undefined8 **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar4) < 0x20) {
      puVar4 = (undefined8 *)Zone::NewExpand(pZVar3,0x20);
    }
    else {
      *(undefined8 **)(pZVar3 + 0x10) = puVar4 + 4;
    }
    *puVar4 = &PTR_IsValid_01cccd40;
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)param_1;
    *(byte *)(puVar4 + 3) = bVar1;
    puVar4[2] = uVar7;
    puVar4[1] = uVar6;
    if (puVar4 != (undefined8 *)0x0) {
      pZVar3 = *(Zone **)(this + 0x18);
      puVar5 = *(undefined8 **)(pZVar3 + 0x10);
      if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar5) < 0x10) {
        puVar5 = (undefined8 *)Zone::NewExpand(pZVar3,0x10);
      }
      else {
        *(undefined8 **)(pZVar3 + 0x10) = puVar5 + 2;
      }
      puVar5[1] = puVar4;
      *puVar5 = *(undefined8 *)(this + 0x10);
      *(undefined8 **)(this + 0x10) = puVar5;
    }
  }
  return;
}

