
/* v8::internal::compiler::PropertyAccessInfo::PropertyAccessInfo(v8::internal::Zone*,
   v8::internal::compiler::PropertyAccessInfo::Kind,
   v8::internal::MaybeHandle<v8::internal::JSObject>,
   v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map> >&&) */

void __thiscall
v8::internal::compiler::PropertyAccessInfo::PropertyAccessInfo
          (PropertyAccessInfo *this,undefined8 param_1,undefined4 param_3,undefined8 param_4,
          long *param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  Zone *this_00;
  undefined8 *puVar4;
  
  *(undefined4 *)this = param_3;
  this_00 = (Zone *)param_5[3];
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(Zone **)(this + 0x20) = this_00;
  uVar2 = param_5[1] - *param_5;
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
    puVar1 = (undefined8 *)param_5[1];
    for (puVar4 = (undefined8 *)*param_5; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      *puVar3 = *puVar4;
      puVar3 = (undefined8 *)(*(long *)(this + 0x10) + 8);
      *(undefined8 **)(this + 0x10) = puVar3;
    }
  }
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = param_1;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = param_4;
  *(undefined8 *)(this + 0x60) = 0;
  this[0x68] = (PropertyAccessInfo)0x0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x70) = 1;
  return;
}

