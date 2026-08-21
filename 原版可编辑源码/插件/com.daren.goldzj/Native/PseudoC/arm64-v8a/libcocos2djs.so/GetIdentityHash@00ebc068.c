
/* v8::Object::GetIdentityHash() */

int __thiscall v8::Object::GetIdentityHash(Object *this)

{
  int *piVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_38;
  
  uVar4 = *(uint *)(this + 4);
  piVar1 = (int *)((ulong)uVar4 << 0x20 | 0x95b0);
  puVar2 = (undefined8 *)((ulong)uVar4 << 0x20 | 0x95a0);
  plVar3 = (long *)((ulong)uVar4 << 0x20 | 0x95a8);
  uVar7 = *puVar2;
  lVar6 = *plVar3;
  *piVar1 = *piVar1 + 1;
  local_38 = *(undefined8 *)this;
  iVar5 = internal::JSReceiver::GetOrCreateIdentityHash
                    ((JSReceiver *)&local_38,(Isolate *)((ulong)uVar4 << 0x20));
  if (uVar4 != 0) {
    *puVar2 = uVar7;
    *piVar1 = *piVar1 + -1;
    if (*plVar3 != lVar6) {
      *plVar3 = lVar6;
      internal::HandleScope::DeleteExtensions((Isolate *)((ulong)uVar4 << 0x20));
    }
  }
  return iVar5 >> 1;
}

