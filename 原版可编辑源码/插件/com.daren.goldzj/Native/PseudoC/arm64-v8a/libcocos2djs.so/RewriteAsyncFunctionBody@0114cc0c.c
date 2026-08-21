
/* v8::internal::Parser::RewriteAsyncFunctionBody(v8::internal::ScopedList<v8::internal::Statement*,
   void*>*, v8::internal::Block*, v8::internal::Expression*) */

void __thiscall
v8::internal::Parser::RewriteAsyncFunctionBody
          (Parser *this,ScopedList *param_1,Block *param_2,Expression *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  Zone *pZVar4;
  vector<void*,std::__ndk1::allocator<void*>> *this_00;
  undefined4 *puVar5;
  ulong uVar6;
  uint uVar7;
  void *pvVar8;
  void *local_48;
  
  pZVar4 = *(Zone **)(this + 0x68);
  uVar3 = *(undefined4 *)param_3;
  puVar5 = *(undefined4 **)(pZVar4 + 0x10);
  if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)puVar5) < 0x18) {
    puVar5 = (undefined4 *)Zone::NewExpand(pZVar4,0x18);
  }
  else {
    *(undefined4 **)(pZVar4 + 0x10) = puVar5 + 6;
  }
  *(Expression **)(puVar5 + 2) = param_3;
  puVar5[4] = 0xffffffff;
  *puVar5 = uVar3;
  puVar5[1] = 0x8f;
  uVar2 = *(uint *)(param_2 + 0x10);
  uVar7 = *(uint *)(param_2 + 0x14);
  if ((int)uVar7 < (int)uVar2) {
    pvVar8 = *(void **)(param_2 + 8);
  }
  else {
    pZVar4 = *(Zone **)(this + 0xb8);
    uVar1 = uVar2 << 1 | 1;
    uVar6 = -(ulong)((uVar2 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
    pvVar8 = *(void **)(pZVar4 + 0x10);
    if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)pvVar8) < uVar6) {
      pvVar8 = (void *)Zone::NewExpand(pZVar4,uVar6);
    }
    else {
      *(ulong *)(pZVar4 + 0x10) = (long)pvVar8 + uVar6;
    }
    uVar7 = *(uint *)(param_2 + 0x14);
    if (0 < (int)uVar7) {
      MemCopy(pvVar8,*(void **)(param_2 + 8),(ulong)uVar7 << 3);
      uVar7 = *(uint *)(param_2 + 0x14);
    }
    *(void **)(param_2 + 8) = pvVar8;
    *(uint *)(param_2 + 0x10) = uVar1;
  }
  *(uint *)(param_2 + 0x14) = uVar7 + 1;
  *(undefined4 **)((long)pvVar8 + (long)(int)uVar7 * 8) = puVar5;
  local_48 = (void *)BuildRejectPromiseOnException(this,param_2);
  this_00 = *(vector<void*,std::__ndk1::allocator<void*>> **)param_1;
  if (*(undefined8 **)(this_00 + 8) < *(undefined8 **)(this_00 + 0x10)) {
    **(undefined8 **)(this_00 + 8) = local_48;
    *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 8;
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
              (this_00,&local_48);
  }
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
  return;
}

