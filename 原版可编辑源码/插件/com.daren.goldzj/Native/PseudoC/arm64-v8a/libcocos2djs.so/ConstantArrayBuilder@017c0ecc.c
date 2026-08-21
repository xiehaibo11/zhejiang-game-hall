
/* v8::internal::interpreter::ConstantArrayBuilder::ConstantArrayBuilder(v8::internal::Zone*) */

void __thiscall
v8::internal::interpreter::ConstantArrayBuilder::ConstantArrayBuilder
          (ConstantArrayBuilder *this,Zone *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if ((ulong)(*(long *)(param_1 + 0x18) - lVar3) < 0x180) {
    lVar3 = Zone::NewExpand(param_1,0x180);
    *(long *)(this + 0x18) = lVar3;
  }
  else {
    *(long *)(param_1 + 0x10) = lVar3 + 0x180;
    *(long *)(this + 0x18) = lVar3;
  }
  if (lVar3 != 0) {
    *(undefined4 *)(this + 0x20) = 0x10;
    *(undefined1 *)(lVar3 + 0x10) = 0;
    if (1 < *(uint *)(this + 0x20)) {
      uVar2 = 1;
      lVar3 = 0x28;
      do {
        uVar2 = uVar2 + 1;
        *(undefined1 *)(*(long *)(this + 0x18) + lVar3) = 0;
        lVar3 = lVar3 + 0x18;
      } while (uVar2 < *(uint *)(this + 0x20));
    }
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined4 *)(this + 0x24) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined4 *)(this + 0xb0) = 0xffffffff;
    *(Zone **)(this + 0x40) = param_1;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(Zone **)(this + 0x68) = param_1;
    *(Zone **)(this + 0x80) = param_1;
    *(undefined8 *)(this + 0x88) = 0;
    *(ConstantArrayBuilder **)(this + 0x70) = this + 0x78;
    *(undefined8 *)(this + 0x98) = 0xffffffffffffffff;
    *(undefined8 *)(this + 0x90) = 0xffffffffffffffff;
    *(undefined8 *)(this + 0xa8) = 0xffffffffffffffff;
    *(undefined8 *)(this + 0xa0) = 0xffffffffffffffff;
    *(Zone **)(this + 0xb8) = param_1;
    *(ConstantArrayBuilder **)(this + 0x30) = this + 0x38;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar1) < 0x40) {
      puVar1 = (undefined8 *)Zone::NewExpand(param_1,0x40);
    }
    else {
      *(undefined8 **)(param_1 + 0x10) = puVar1 + 8;
    }
    puVar1[2] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = param_1;
    *(undefined1 *)(puVar1 + 3) = 1;
    puVar1[1] = 0x100;
    *puVar1 = 0;
    *(undefined8 **)this = puVar1;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar1) < 0x40) {
      puVar1 = (undefined8 *)Zone::NewExpand(param_1,0x40);
    }
    else {
      *(undefined8 **)(param_1 + 0x10) = puVar1 + 8;
    }
    puVar1[2] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = param_1;
    *(undefined1 *)(puVar1 + 3) = 2;
    puVar1[1] = 0xff00;
    *puVar1 = 0x100;
    *(undefined8 **)(this + 8) = puVar1;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar1) < 0x40) {
      puVar1 = (undefined8 *)Zone::NewExpand(param_1,0x40);
    }
    else {
      *(undefined8 **)(param_1 + 0x10) = puVar1 + 8;
    }
    puVar1[2] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = param_1;
    *(undefined1 *)(puVar1 + 3) = 4;
    puVar1[1] = 0xffff0000;
    *puVar1 = 0x10000;
    *(undefined8 **)(this + 0x10) = puVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Out of memory: HashMap::Initialize");
}

