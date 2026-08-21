
/* v8::internal::BytecodeArray::CopyBytecodesTo(v8::internal::BytecodeArray) */

void __thiscall v8::internal::BytecodeArray::CopyBytecodesTo(BytecodeArray *this,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  
  uVar2 = *(uint *)(*(long *)this + 3);
  uVar1 = (int)uVar2 >> 1;
  if (uVar1 != 0) {
    uVar5 = (long)((ulong)uVar2 << 0x20) >> 0x21;
    puVar4 = (undefined1 *)(*(long *)this + 0x21);
    puVar3 = (undefined1 *)(param_2 + 0x21);
    if (7 < uVar1) {
      MemCopy((undefined1 *)(param_2 + 0x21),puVar4,uVar5);
      return;
    }
    do {
      uVar5 = uVar5 - 1;
      *puVar3 = *puVar4;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0);
  }
  return;
}

