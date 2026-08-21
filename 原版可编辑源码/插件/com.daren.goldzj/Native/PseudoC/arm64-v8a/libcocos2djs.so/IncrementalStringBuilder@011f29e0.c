
/* v8::internal::IncrementalStringBuilder::IncrementalStringBuilder(v8::internal::Isolate*) */

void __thiscall
v8::internal::IncrementalStringBuilder::IncrementalStringBuilder
          (IncrementalStringBuilder *this,Isolate *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  *(Isolate **)this = param_1;
  *(undefined4 *)(this + 8) = 0;
  this[0xc] = (IncrementalStringBuilder)0x0;
  *(undefined8 *)(this + 0x1c) = 0;
  *(undefined8 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x10) = 0x20;
  puVar1 = *(undefined8 **)(param_1 + 0x95a0);
  uVar3 = *(undefined8 *)(param_1 + 200);
  if (puVar1 == *(undefined8 **)(param_1 + 0x95a8)) {
    puVar1 = (undefined8 *)HandleScope::Extend(param_1);
  }
  *(undefined8 **)(param_1 + 0x95a0) = puVar1 + 1;
  *puVar1 = uVar3;
  *(undefined8 **)(this + 0x18) = puVar1;
  lVar2 = Factory::NewRawOneByteString(*(Factory **)this,*(undefined4 *)(this + 0x10),0);
  if (lVar2 != 0) {
    *(long *)(this + 0x20) = lVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

