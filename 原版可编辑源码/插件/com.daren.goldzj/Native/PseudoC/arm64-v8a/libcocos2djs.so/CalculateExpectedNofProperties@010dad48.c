
/* v8::internal::JSFunction::CalculateExpectedNofProperties(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSFunction>) */

void v8::internal::JSFunction::CalculateExpectedNofProperties(Isolate *param_1,ulong *param_2)

{
  long lVar1;
  ulong *puVar2;
  int iVar3;
  ulong *puVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  Isolate *local_80;
  undefined8 uStack_78;
  ulong *local_70;
  undefined4 local_68;
  char local_64;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uStack_78 = 0;
  local_68 = 0;
  local_64 = '\0';
  local_60 = 0;
  local_80 = param_1;
  local_70 = param_2;
  if (param_2 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!handle_.is_null()");
  }
  uVar6 = *param_2;
  uVar7 = uVar6 & 0xffffffff00000000;
  if (*(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x439) {
    uVar8 = 0;
    do {
      puVar2 = local_70;
      uVar7 = uVar7 | *(uint *)(uVar6 + 0xb);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar4 = *(ulong **)(param_1 + 0x95a0);
        if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
          puVar4 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)(param_1 + 0x95a0) = puVar4 + 1;
        *puVar4 = uVar7;
      }
      else {
        puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
        uVar7 = *puVar4;
      }
      IsCompiledScope::IsCompiledScope
                ((IsCompiledScope *)&local_90,uVar7,uVar7 & 0xffffffff00000000);
      local_a0 = local_90;
      uStack_98 = uStack_88;
      if (((uStack_88 & 0xff) == 0) &&
         (uVar6 = Compiler::Compile(puVar2,1,&local_a0), (uVar6 & 1) == 0)) break;
      if ((int)(0xfc - (uint)*(ushort *)(*puVar4 + 0x17)) < (int)uVar8) {
        iVar3 = 0xfc;
        goto LAB_010daea0;
      }
      uVar8 = uVar8 + *(ushort *)(*puVar4 + 0x17);
      PrototypeIterator::Advance((PrototypeIterator *)&local_80);
      if (local_64 != '\0') break;
      uVar6 = *local_70;
      uVar7 = uVar6 & 0xffffffff00000000;
    } while (*(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x439);
  }
  else {
    uVar8 = 0;
  }
  uVar5 = uVar8;
  if (0xf3 < uVar8) {
    uVar5 = 0xf4;
  }
  iVar3 = 0;
  if (uVar8 != 0) {
    iVar3 = uVar5 + 8;
  }
LAB_010daea0:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3);
  }
  return;
}

