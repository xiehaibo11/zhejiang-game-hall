
ulong * FUN_01028494(Factory *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  ulong *puVar4;
  CanonicalHandleScope *this;
  ulong *puVar5;
  undefined8 in_x5;
  ulong uVar6;
  ulong uVar7;
  NewFunctionArgs aNStack_88 [64];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  v8::internal::NewFunctionArgs::ForBuiltinWithPrototype(aNStack_88,param_2,in_x5);
  puVar4 = (ulong *)v8::internal::Factory::NewFunction(param_1,aNStack_88);
  uVar7 = *puVar4;
  uVar6 = uVar7 & 0xffffffff00000000;
  if ((*(byte *)((uVar6 | 9) + (ulong)*(uint *)(uVar7 - 1)) & 1) == 0) {
    uVar7 = uVar6 | *(uint *)(uVar7 + 0x1b);
    if (*(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0xa2) {
      uVar7 = uVar6 | *(uint *)(uVar7 + 0xf);
      this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
      goto joined_r0x01028578;
    }
  }
  else {
    uVar2 = *(uint *)((uVar6 | 0x13) + (ulong)*(uint *)(uVar7 - 1));
    uVar7 = uVar6 | uVar2;
    if ((uVar2 & 1) != 0) {
      do {
        if (*(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0xa2) break;
        puVar1 = (uint *)(uVar7 + 0x13);
        uVar7 = uVar6 | *puVar1;
      } while ((*puVar1 & 1) != 0);
    }
  }
  this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
joined_r0x01028578:
  if (this == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(param_1 + 0x95a0);
    if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
      puVar5 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar7;
  }
  else {
    puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup(this,uVar7);
  }
  v8::internal::JSObject::MakePrototypesFast(puVar5,0,param_1);
  v8::internal::JSObject::MakePrototypesFast(puVar4,0,param_1);
  uVar6 = *puVar4 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar4 + 0xb);
  *(uint *)(uVar6 + 0x1b) = *(uint *)(uVar6 + 0x1b) | 0x20;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

