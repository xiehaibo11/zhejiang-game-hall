
/* v8::ObjectTemplate::SetHandler(v8::NamedPropertyHandlerConfiguration const&) */

void __thiscall
v8::ObjectTemplate::SetHandler(ObjectTemplate *this,NamedPropertyHandlerConfiguration *param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  ulong *puVar14;
  long lVar15;
  ulong *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  undefined8 uVar22;
  Isolate *pIVar23;
  ulong uVar24;
  
  uVar4 = *(undefined8 *)param_1;
  uVar7 = *(undefined8 *)(param_1 + 8);
  uVar10 = *(undefined4 *)(param_1 + 0x40);
  uVar18 = *(undefined8 *)(param_1 + 0x10);
  uVar19 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uVar11 = *(uint *)(this + 4);
  uVar20 = (ulong)uVar11;
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  pIVar23 = (Isolate *)(uVar20 << 0x20);
  puVar1 = (undefined8 *)(uVar20 << 0x20 | 0x95a0);
  uVar12 = *(undefined4 *)(pIVar23 + 0x2c60);
  *(undefined4 *)(pIVar23 + 0x2c60) = 5;
  uVar22 = *puVar1;
  piVar2 = (int *)(uVar20 << 0x20 | 0x95b0);
  plVar3 = (long *)(uVar20 << 0x20 | 0x95a8);
  lVar21 = *plVar3;
  *piVar2 = *piVar2 + 1;
  puVar14 = (ulong *)FUN_00ea6c84(pIVar23,this);
  uVar13 = *(uint *)(*puVar14 + 0x27);
  if (((uVar13 & 1) != 0) &&
     (uVar20 = *puVar14 & 0xffffffff00000000,
     *(short *)((uVar20 | 7) + (ulong)*(uint *)((uVar20 | uVar13) - 1)) == 0xa6)) {
    lVar15 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
    if (lVar15 != 0) {
      if (*(code **)(lVar15 + 0xb738) != (code *)0x0) {
        (**(code **)(lVar15 + 0xb738))
                  ("ObjectTemplateSetNamedPropertyHandler","FunctionTemplate already instantiated");
        *(undefined1 *)(lVar15 + 0xb6b9) = 1;
        goto LAB_00ea6a08;
      }
    }
    base::OS::PrintError
              ("\n#\n# Fatal error in %s\n# %s\n#\n\n","ObjectTemplateSetNamedPropertyHandler",
               "FunctionTemplate already instantiated");
                    /* WARNING: Subroutine does not return */
    base::OS::Abort();
  }
LAB_00ea6a08:
  puVar16 = (ulong *)FUN_00ea75dc(pIVar23,uVar4,uVar7,uVar18,uVar6,uVar19,uVar5,uVar8,uVar9,uVar10);
  if (*(int *)(*puVar14 + 0x23) == *(int *)(pIVar23 + 0xa0)) {
    uVar20 = internal::FunctionTemplateInfo::AllocateFunctionTemplateRareData(pIVar23,puVar14);
  }
  else {
    uVar20 = CONCAT44(uVar11,*(int *)(*puVar14 + 0x23));
  }
  uVar24 = *puVar16;
  *(int *)(uVar20 + 0xf) = (int)uVar24;
  if ((uVar24 & 1) != 0) {
    uVar17 = *(ulong *)((uVar24 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar17 >> 0x12 & 1) != 0) {
      internal::Heap_MarkingBarrierSlow(uVar20,uVar20 + 0xf,uVar24);
      uVar17 = *(ulong *)(uVar24 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar17 & 0x18) != 0) && ((*(byte *)((uVar20 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      internal::Heap_GenerationalBarrierSlow(uVar20,uVar20 + 0xf,uVar24);
    }
  }
  *puVar1 = uVar22;
  *piVar2 = *piVar2 + -1;
  if (*plVar3 != lVar21) {
    *plVar3 = lVar21;
    internal::HandleScope::DeleteExtensions(pIVar23);
  }
  *(undefined4 *)(pIVar23 + 0x2c60) = uVar12;
  return;
}

