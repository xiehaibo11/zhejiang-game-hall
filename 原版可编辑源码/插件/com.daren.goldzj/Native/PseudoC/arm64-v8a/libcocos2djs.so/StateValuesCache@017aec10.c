
/* v8::internal::compiler::StateValuesCache::StateValuesCache(v8::internal::compiler::JSGraph*) */

void __thiscall
v8::internal::compiler::StateValuesCache::StateValuesCache(StateValuesCache *this,JSGraph *param_1)

{
  undefined8 *puVar1;
  Zone *this_00;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  *(JSGraph **)this = param_1;
  this_00 = (Zone *)**(undefined8 **)param_1;
  *(code **)(this + 0x18) = AreKeysEqual;
  puVar1 = *(undefined8 **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar1) < 0xc0) {
    puVar1 = (undefined8 *)Zone::NewExpand(this_00,0xc0);
    *(undefined8 **)(this + 8) = puVar1;
  }
  else {
    *(undefined8 **)(this_00 + 0x10) = puVar1 + 0x18;
    *(undefined8 **)(this + 8) = puVar1;
  }
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(this + 0x10) = 8;
    *puVar1 = 0;
    if (1 < *(uint *)(this + 0x10)) {
      uVar2 = 1;
      lVar4 = 0x18;
      do {
        uVar2 = uVar2 + 1;
        *(undefined8 *)(*(long *)(this + 8) + lVar4) = 0;
        lVar4 = lVar4 + 0x18;
      } while (uVar2 < *(uint *)(this + 0x10));
    }
    *(undefined4 *)(this + 0x14) = 0;
    uVar3 = *(undefined8 *)**(undefined8 **)this;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Out of memory: HashMap::Initialize");
}

