
/* v8::internal::compiler::CompilationDependencies::DependOnFieldConstness(v8::internal::compiler::MapRef
   const&, v8::internal::InternalIndex) */

undefined8 __thiscall
v8::internal::compiler::CompilationDependencies::DependOnFieldConstness
          (CompilationDependencies *this,MapRef *param_1,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  Zone *pZVar6;
  MapRef local_40 [16];
  
  local_40 = (MapRef  [16])MapRef::FindFieldOwner(param_1,param_3);
  uVar1 = MapRef::GetPropertyDetails(local_40,param_3);
  if ((uVar1 >> 2 & 1) == 0) {
LAB_01695ed0:
    uVar3 = 0;
  }
  else {
    uVar1 = MapRef::instance_type(param_1);
    uVar1 = (uVar1 & 0xffff) - 0x411;
    if ((uVar1 < 0x13) && ((1 << (ulong)(uVar1 & 0x1f) & 0x60001U) != 0)) {
      uVar2 = MapRef::is_stable(param_1);
      if ((uVar2 & 1) == 0) goto LAB_01695ed0;
      uVar2 = MapRef::CanTransition(param_1);
      if ((uVar2 & 1) != 0) {
        pZVar6 = *(Zone **)this;
        puVar4 = *(undefined8 **)(pZVar6 + 0x10);
        if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)puVar4) < 0x18) {
          puVar4 = (undefined8 *)Zone::NewExpand(pZVar6,0x18);
        }
        else {
          *(undefined8 **)(pZVar6 + 0x10) = puVar4 + 3;
        }
        *puVar4 = &PTR_IsValid_01cccc78;
        uVar3 = *(undefined8 *)param_1;
        puVar4[2] = *(undefined8 *)(param_1 + 8);
        puVar4[1] = uVar3;
        if (puVar4 != (undefined8 *)0x0) {
          pZVar6 = *(Zone **)(this + 0x18);
          puVar5 = *(undefined8 **)(pZVar6 + 0x10);
          if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)puVar5) < 0x10) {
            puVar5 = (undefined8 *)Zone::NewExpand(pZVar6,0x10);
          }
          else {
            *(undefined8 **)(pZVar6 + 0x10) = puVar5 + 2;
          }
          puVar5[1] = puVar4;
          *puVar5 = *(undefined8 *)(this + 0x10);
          *(undefined8 **)(this + 0x10) = puVar5;
        }
      }
    }
    pZVar6 = *(Zone **)this;
    puVar4 = *(undefined8 **)(pZVar6 + 0x10);
    if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)puVar4) < 0x20) {
      puVar4 = (undefined8 *)Zone::NewExpand(pZVar6,0x20);
    }
    else {
      *(undefined8 **)(pZVar6 + 0x10) = puVar4 + 4;
    }
    *puVar4 = &PTR_IsValid_01ccccc8;
    puVar4[3] = param_3;
    *(MapRef (*) [16])(puVar4 + 1) = local_40;
    if (puVar4 != (undefined8 *)0x0) {
      pZVar6 = *(Zone **)(this + 0x18);
      puVar5 = *(undefined8 **)(pZVar6 + 0x10);
      if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)puVar5) < 0x10) {
        puVar5 = (undefined8 *)Zone::NewExpand(pZVar6,0x10);
      }
      else {
        *(undefined8 **)(pZVar6 + 0x10) = puVar5 + 2;
      }
      puVar5[1] = puVar4;
      *puVar5 = *(undefined8 *)(this + 0x10);
      *(undefined8 **)(this + 0x10) = puVar5;
    }
    uVar3 = 1;
  }
  return uVar3;
}

