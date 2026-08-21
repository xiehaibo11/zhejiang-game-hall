
/* v8::internal::VariableMap::VariableMap(v8::internal::Zone*) */

void __thiscall v8::internal::VariableMap::VariableMap(VariableMap *this,Zone *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar1) < 0xc0) {
    puVar1 = (undefined8 *)Zone::NewExpand(param_1,0xc0);
    *(undefined8 **)this = puVar1;
  }
  else {
    *(undefined8 **)(param_1 + 0x10) = puVar1 + 0x18;
    *(undefined8 **)this = puVar1;
  }
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(this + 8) = 8;
    *puVar1 = 0;
    if (1 < *(uint *)(this + 8)) {
      uVar2 = 1;
      lVar3 = 0x18;
      do {
        uVar2 = uVar2 + 1;
        *(undefined8 *)(*(long *)this + lVar3) = 0;
        lVar3 = lVar3 + 0x18;
      } while (uVar2 < *(uint *)(this + 8));
    }
    *(undefined4 *)(this + 0xc) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Out of memory: HashMap::Initialize");
}

