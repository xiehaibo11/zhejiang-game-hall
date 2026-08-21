
/* v8::internal::compiler::ElementAccessInfo::ElementAccessInfo(v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>
   >&&, v8::internal::ElementsKind, v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::ElementAccessInfo::ElementAccessInfo
          (ElementAccessInfo *this,long *param_1,ElementAccessInfo param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  Zone *this_00;
  undefined8 *puVar4;
  
  *this = param_3;
  this_00 = (Zone *)param_1[3];
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(Zone **)(this + 0x20) = this_00;
  uVar2 = param_1[1] - *param_1;
  if (uVar2 != 0) {
    if ((ulong)((long)uVar2 >> 3) >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar3 = *(undefined8 **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar3) < uVar2) {
      puVar3 = (undefined8 *)Zone::NewExpand(this_00,uVar2);
    }
    else {
      *(ulong *)(this_00 + 0x10) = (long)puVar3 + uVar2;
    }
    *(undefined8 **)(this + 8) = puVar3;
    *(undefined8 **)(this + 0x10) = puVar3;
    *(undefined8 **)(this + 0x18) = puVar3 + ((long)uVar2 >> 3);
    puVar1 = (undefined8 *)param_1[1];
    for (puVar4 = (undefined8 *)*param_1; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      *puVar3 = *puVar4;
      puVar3 = (undefined8 *)(*(long *)(this + 0x10) + 8);
      *(undefined8 **)(this + 0x10) = puVar3;
    }
  }
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = param_4;
  if (*param_1 == param_1[1]) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!receiver_maps.empty()");
  }
  return;
}

