
/* v8::internal::StringStream::Put(char) */

undefined8 __thiscall v8::internal::StringStream::Put(StringStream *this,char param_1)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  uint local_24;
  
  local_24 = *(uint *)(this + 0xc);
  uVar3 = *(uint *)(this + 0x10);
  if (local_24 - uVar3 == 1) {
    uVar1 = 0;
  }
  else {
    if (uVar3 == local_24 - 2) {
      lVar2 = (**(code **)(**(long **)this + 0x18))(*(long **)this,&local_24);
      uVar3 = *(uint *)(this + 0xc);
      if (local_24 <= uVar3) {
        *(uint *)(this + 0x10) = uVar3 - 1;
        *(undefined1 *)(*(long *)(this + 0x18) + (ulong)(uVar3 - 5)) = 0x2e;
        *(undefined1 *)(*(long *)(this + 0x18) + (ulong)(*(int *)(this + 0x10) - 3)) = 0x2e;
        *(undefined1 *)(*(long *)(this + 0x18) + (ulong)(*(int *)(this + 0x10) - 2)) = 0x2e;
        *(undefined1 *)(*(long *)(this + 0x18) + (ulong)(*(int *)(this + 0x10) - 1)) = 10;
        *(undefined1 *)(*(long *)(this + 0x18) + (ulong)*(uint *)(this + 0x10)) = 0;
        return 0;
      }
      uVar3 = *(uint *)(this + 0x10);
      *(uint *)(this + 0xc) = local_24;
      *(long *)(this + 0x18) = lVar2;
    }
    else {
      lVar2 = *(long *)(this + 0x18);
    }
    *(char *)(lVar2 + (ulong)uVar3) = param_1;
    uVar1 = 1;
    *(undefined1 *)(*(long *)(this + 0x18) + (ulong)(*(int *)(this + 0x10) + 1)) = 0;
    *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  }
  return uVar1;
}

