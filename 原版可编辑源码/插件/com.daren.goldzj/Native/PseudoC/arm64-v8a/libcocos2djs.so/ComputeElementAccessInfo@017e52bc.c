
/* WARNING: Removing unreachable block (ram,0x017e53f8) */
/* WARNING: Removing unreachable block (ram,0x017e538c) */
/* v8::internal::compiler::AccessInfoFactory::ComputeElementAccessInfo(v8::internal::Handle<v8::internal::Map>,
   v8::internal::compiler::AccessMode) const */

void __thiscall
v8::internal::compiler::AccessInfoFactory::ComputeElementAccessInfo
          (undefined1 *param_1,AccessInfoFactory *this,undefined8 param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  Zone *this_00;
  undefined8 uVar5;
  ObjectRef aOStack_50 [16];
  
  ObjectRef::ObjectRef(aOStack_50,*(undefined8 *)this,param_3,0);
  uVar2 = ObjectRef::IsMap(aOStack_50);
  if ((uVar2 & 1) != 0) {
    uVar2 = CanInlineElementAccess(aOStack_50);
    if ((uVar2 & 1) == 0) {
      *param_1 = 0;
      param_1[8] = 0;
    }
    else {
      uVar1 = MapRef::elements_kind((MapRef *)aOStack_50);
      this_00 = *(Zone **)(this + 0x18);
      puVar3 = *(undefined8 **)(this_00 + 0x10);
      if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar3) < 8) {
        puVar3 = (undefined8 *)Zone::NewExpand(this_00,8);
      }
      else {
        *(undefined8 **)(this_00 + 0x10) = puVar3 + 1;
      }
      *puVar3 = param_3;
      uVar5 = *(undefined8 *)(this + 0x18);
      puVar4 = *(undefined8 **)(this_00 + 0x10);
      if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar4) < 8) {
        puVar4 = (undefined8 *)Zone::NewExpand(this_00,8);
      }
      else {
        *(undefined8 **)(this_00 + 0x10) = puVar4 + 1;
      }
      *puVar4 = *puVar3;
      *param_1 = 1;
      param_1[8] = uVar1;
      *(undefined8 **)(param_1 + 0x20) = puVar4 + 1;
      *(Zone **)(param_1 + 0x28) = this_00;
      *(undefined8 **)(param_1 + 0x10) = puVar4;
      *(undefined8 **)(param_1 + 0x18) = puVar4 + 1;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = uVar5;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsMap()");
}

