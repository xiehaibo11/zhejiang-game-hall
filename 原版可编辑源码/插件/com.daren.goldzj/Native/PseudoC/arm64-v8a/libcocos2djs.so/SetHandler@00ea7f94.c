
/* v8::ObjectTemplate::SetHandler(v8::IndexedPropertyHandlerConfiguration const&) */

void __thiscall
v8::ObjectTemplate::SetHandler(ObjectTemplate *this,IndexedPropertyHandlerConfiguration *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  Isolate *pIVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  
  uVar4 = *(uint *)(this + 4);
  uVar10 = (ulong)uVar4;
  pIVar12 = (Isolate *)(uVar10 << 0x20);
  piVar1 = (int *)(uVar10 << 0x20 | 0x95b0);
  uVar5 = *(undefined4 *)(pIVar12 + 0x2c60);
  *(undefined4 *)(pIVar12 + 0x2c60) = 5;
  puVar2 = (undefined8 *)(uVar10 << 0x20 | 0x95a0);
  plVar3 = (long *)(uVar10 << 0x20 | 0x95a8);
  uVar15 = *puVar2;
  lVar14 = *plVar3;
  *piVar1 = *piVar1 + 1;
  puVar7 = (ulong *)FUN_00ea6c84(pIVar12,this);
  uVar6 = *(uint *)(*puVar7 + 0x27);
  if (((uVar6 & 1) != 0) &&
     (uVar10 = *puVar7 & 0xffffffff00000000,
     *(short *)((uVar10 | 7) + (ulong)*(uint *)((uVar10 | uVar6) - 1)) == 0xa6)) {
    lVar8 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
    if (lVar8 != 0) {
      if (*(code **)(lVar8 + 0xb738) != (code *)0x0) {
        (**(code **)(lVar8 + 0xb738))
                  ("v8::ObjectTemplate::SetHandler","FunctionTemplate already instantiated");
        *(undefined1 *)(lVar8 + 0xb6b9) = 1;
        goto LAB_00ea8070;
      }
    }
    base::OS::PrintError
              ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::ObjectTemplate::SetHandler",
               "FunctionTemplate already instantiated");
                    /* WARNING: Subroutine does not return */
    base::OS::Abort();
  }
LAB_00ea8070:
  puVar9 = (ulong *)FUN_00ea7ab8(pIVar12,*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8),
                                 *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x30),
                                 *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                                 *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38),
                                 *(undefined4 *)(param_1 + 0x40));
  if (*(int *)(*puVar7 + 0x23) == *(int *)(pIVar12 + 0xa0)) {
    uVar10 = internal::FunctionTemplateInfo::AllocateFunctionTemplateRareData(pIVar12,puVar7);
  }
  else {
    uVar10 = CONCAT44(uVar4,*(int *)(*puVar7 + 0x23));
  }
  uVar13 = *puVar9;
  *(int *)(uVar10 + 0x13) = (int)uVar13;
  if ((uVar13 & 1) != 0) {
    uVar11 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar11 >> 0x12 & 1) != 0) {
      internal::Heap_MarkingBarrierSlow(uVar10,uVar10 + 0x13,uVar13);
      uVar11 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      internal::Heap_GenerationalBarrierSlow(uVar10,uVar10 + 0x13,uVar13);
    }
  }
  *puVar2 = uVar15;
  *piVar1 = *piVar1 + -1;
  if (*plVar3 != lVar14) {
    *plVar3 = lVar14;
    internal::HandleScope::DeleteExtensions(pIVar12);
  }
  *(undefined4 *)(pIVar12 + 0x2c60) = uVar5;
  return;
}

