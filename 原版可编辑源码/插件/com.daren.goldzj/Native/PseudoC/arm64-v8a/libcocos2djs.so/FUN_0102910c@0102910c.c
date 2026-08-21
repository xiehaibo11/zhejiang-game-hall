
ulong * FUN_0102910c(Factory *param_1,undefined8 param_2,undefined4 param_3,undefined2 param_4,
                    uint param_5)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  NewFunctionArgs aNStack_88 [64];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  v8::internal::NewFunctionArgs::ForBuiltinWithoutPrototype(aNStack_88,param_2,param_3,1);
  puVar2 = (ulong *)v8::internal::Factory::NewFunction(param_1,aNStack_88);
  v8::internal::JSObject::MakePrototypesFast(puVar2,0,param_1);
  uVar3 = *puVar2 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar2 + 0xb);
  *(uint *)(uVar3 + 0x1b) = *(uint *)(uVar3 + 0x1b) | 0x20;
  uVar3 = *puVar2 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar2 + 0xb);
  if ((param_5 & 1) == 0) {
    *(undefined2 *)(uVar3 + 0x15) = 0xffff;
  }
  else {
    *(undefined2 *)(uVar3 + 0x15) = param_4;
  }
  *(undefined2 *)((*puVar2 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar2 + 0xb)) + 0x13) = param_4
  ;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

