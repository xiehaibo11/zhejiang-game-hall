
/* v8::internal::Parser::NewThrowError(v8::internal::Runtime::FunctionId,
   v8::internal::MessageTemplate, v8::internal::AstRawString const*, int) */

undefined4 * __thiscall
v8::internal::Parser::NewThrowError
          (Parser *this,undefined4 param_2,undefined4 param_3,undefined8 param_4,undefined4 param_5)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  Zone *pZVar4;
  ulong uVar5;
  vector<void*,std::__ndk1::allocator<void*>> *local_58;
  ulong local_50;
  ulong local_48;
  undefined4 *local_28;
  
  local_58 = (vector<void*,std::__ndk1::allocator<void*>> *)(this + 200);
  local_50 = *(long *)(this + 0xd0) - *(long *)(this + 200) >> 3;
  pZVar4 = *(Zone **)(this + 0x68);
  local_28 = *(undefined4 **)(pZVar4 + 0x10);
  local_48 = local_50;
  if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)local_28) < 0x10) {
    local_28 = (undefined4 *)Zone::NewExpand(pZVar4,0x10);
  }
  else {
    *(undefined4 **)(pZVar4 + 0x10) = local_28 + 4;
  }
  *local_28 = param_5;
  local_28[1] = 0x29;
  local_28[2] = param_3;
  if (*(long **)(local_58 + 8) < *(long **)(local_58 + 0x10)) {
    **(long **)(local_58 + 8) = (long)local_28;
    *(long *)(local_58 + 8) = *(long *)(local_58 + 8) + 8;
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
              (local_58,&local_28);
  }
  local_48 = local_48 + 1;
  pZVar4 = *(Zone **)(this + 0x68);
  puVar2 = *(undefined4 **)(pZVar4 + 0x10);
  if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)puVar2) < 0x10) {
    puVar2 = (undefined4 *)Zone::NewExpand(pZVar4,0x10);
  }
  else {
    *(undefined4 **)(pZVar4 + 0x10) = puVar2 + 4;
  }
  *(undefined8 *)(puVar2 + 2) = param_4;
  *puVar2 = param_5;
  puVar2[1] = 0x1a9;
  local_28 = puVar2;
  if (*(long **)(local_58 + 8) < *(long **)(local_58 + 0x10)) {
    **(long **)(local_58 + 8) = (long)puVar2;
    *(long *)(local_58 + 8) = *(long *)(local_58 + 8) + 8;
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
              (local_58,&local_28);
  }
  local_48 = local_48 + 1;
  pZVar4 = *(Zone **)(this + 0x68);
  puVar2 = *(undefined4 **)(pZVar4 + 0x10);
  if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)puVar2) < 0x28) {
    puVar2 = (undefined4 *)Zone::NewExpand(pZVar4,0x28);
  }
  else {
    *(undefined4 **)(pZVar4 + 0x10) = puVar2 + 10;
  }
  pZVar4 = *(Zone **)(this + 0x68);
  uVar1 = Runtime::FunctionForId(param_2);
  *(undefined8 *)(puVar2 + 4) = uVar1;
  *puVar2 = param_5;
  puVar2[1] = 0x1e;
  *(undefined8 *)(puVar2 + 6) = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  ScopedList<v8::internal::Expression*,void*>::CopyTo
            ((ScopedList<v8::internal::Expression*,void*> *)&local_58,(ZoneList *)(puVar2 + 6),
             pZVar4);
  pZVar4 = *(Zone **)(this + 0x68);
  puVar3 = *(undefined4 **)(pZVar4 + 0x10);
  if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)puVar3) < 0x10) {
    puVar3 = (undefined4 *)Zone::NewExpand(pZVar4,0x10);
  }
  else {
    *(undefined4 **)(pZVar4 + 0x10) = puVar3 + 4;
  }
  *(undefined4 **)(puVar3 + 2) = puVar2;
  *puVar3 = param_5;
  puVar3[1] = 0x33;
  uVar5 = *(long *)(local_58 + 8) - *(long *)local_58 >> 3;
  if (local_50 < uVar5 || local_50 - uVar5 == 0) {
    if (local_50 < uVar5) {
      *(ulong *)(local_58 + 8) = *(long *)local_58 + local_50 * 8;
    }
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append(local_58,local_50 - uVar5);
  }
  return puVar3;
}

