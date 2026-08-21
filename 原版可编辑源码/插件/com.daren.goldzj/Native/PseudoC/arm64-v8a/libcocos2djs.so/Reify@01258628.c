
/* v8::internal::wasm::ErrorThrower::Reify() */

void __thiscall v8::internal::wasm::ErrorThrower::Reify(ErrorThrower *this)

{
  uint uVar1;
  ErrorThrower EVar2;
  Isolate *pIVar3;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ErrorThrower *local_40;
  ulong uStack_38;
  
  switch(*(undefined4 *)(this + 0x10)) {
  case 0:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 1:
    pIVar3 = *(Isolate **)this;
    uVar6 = *(ulong *)(pIVar3 + 0x2bc8) & 0xffffffff00000000;
    puVar5 = (uint *)((uVar6 | *(uint *)((uVar6 | *(uint *)(*(ulong *)(pIVar3 + 0x2bc8) - 1)) + 0x13
                                        )) + 0x3af);
    break;
  case 2:
    pIVar3 = *(Isolate **)this;
    uVar6 = *(ulong *)(pIVar3 + 0x2bc8) & 0xffffffff00000000;
    puVar5 = (uint *)((uVar6 | *(uint *)((uVar6 | *(uint *)(*(ulong *)(pIVar3 + 0x2bc8) - 1)) + 0x13
                                        )) + 0x397);
    break;
  case 3:
    pIVar3 = *(Isolate **)this;
    uVar6 = *(ulong *)(pIVar3 + 0x2bc8) & 0xffffffff00000000;
    puVar5 = (uint *)((uVar6 | *(uint *)((uVar6 | *(uint *)(*(ulong *)(pIVar3 + 0x2bc8) - 1)) + 0x13
                                        )) + 0x3b7);
    break;
  case 4:
    pIVar3 = *(Isolate **)this;
    uVar6 = *(ulong *)(pIVar3 + 0x2bc8) & 0xffffffff00000000;
    puVar5 = (uint *)((uVar6 | *(uint *)((uVar6 | *(uint *)(*(ulong *)(pIVar3 + 0x2bc8) - 1)) + 0x13
                                        )) + 0x3bb);
    break;
  case 5:
    pIVar3 = *(Isolate **)this;
    uVar6 = *(ulong *)(pIVar3 + 0x2bc8) & 0xffffffff00000000;
    puVar5 = (uint *)((uVar6 | *(uint *)((uVar6 | *(uint *)(*(ulong *)(pIVar3 + 0x2bc8) - 1)) + 0x13
                                        )) + 0x3bf);
    break;
  default:
    puVar7 = (ulong *)0x0;
    goto LAB_0125877c;
  }
  uVar1 = *puVar5;
  if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar7 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar7 + 1;
    *puVar7 = uVar6 | uVar1;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar6 | uVar1);
  }
LAB_0125877c:
  EVar2 = this[0x18];
  uStack_38 = *(ulong *)(this + 0x20);
  local_40 = *(ErrorThrower **)(this + 0x28);
  if (((byte)EVar2 & 1) == 0) {
    local_40 = this + 0x19;
    uStack_38 = (ulong)((byte)EVar2 >> 1);
  }
  lVar4 = Factory::NewStringFromUtf8(*(Factory **)this,&local_40,0);
  if (lVar4 != 0) {
    *(undefined4 *)(this + 0x10) = 0;
    if (((byte)this[0x18] & 1) == 0) {
      *(undefined2 *)(this + 0x18) = 0;
    }
    else {
      **(undefined1 **)(this + 0x28) = 0;
      *(undefined8 *)(this + 0x20) = 0;
    }
    Factory::NewError(*(Factory **)this,puVar7,lVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

