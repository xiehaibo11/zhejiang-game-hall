
/* v8::internal::ClassScope::LookupPrivateNameInScopeInfo(v8::internal::AstRawString const*) */

long __thiscall
v8::internal::ClassScope::LookupPrivateNameInScopeInfo(ClassScope *this,AstRawString *param_1)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_3c [4];
  undefined1 local_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_18 [4];
  undefined1 local_14 [4];
  
  iVar1 = ScopeInfo::ContextSlotIndex
                    (**(undefined8 **)(this + 0x68),**(undefined8 **)param_1,local_14,auStack_18,
                     auStack_34,local_38);
  if (iVar1 < 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = DeclarePrivateName(this,param_1,local_14[0],local_38[0],auStack_3c);
    *(int *)(lVar2 + 0x20) = iVar1;
    *(ushort *)(lVar2 + 0x28) = *(ushort *)(lVar2 + 0x28) & 0xfdff | 0x180;
  }
  return lVar2;
}

