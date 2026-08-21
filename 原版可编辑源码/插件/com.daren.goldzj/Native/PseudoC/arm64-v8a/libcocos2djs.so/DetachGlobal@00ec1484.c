
/* v8::Context::DetachGlobal() */

void __thiscall v8::Context::DetachGlobal(Context *this)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  
  uVar1 = *(uint *)(this + 4);
  lVar3 = (ulong)uVar1 << 0x20;
  uVar2 = *(undefined4 *)(lVar3 + 0x2c60);
  *(undefined4 *)(lVar3 + 0x2c60) = 5;
  internal::Bootstrapper::DetachGlobal(*(Bootstrapper **)((ulong)uVar1 << 0x20 | 0x9508),this);
  *(undefined4 *)(lVar3 + 0x2c60) = uVar2;
  return;
}

