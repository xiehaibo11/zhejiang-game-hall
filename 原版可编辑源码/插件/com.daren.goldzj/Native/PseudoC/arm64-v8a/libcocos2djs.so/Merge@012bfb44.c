
/* v8::internal::compiler::SerializerForBackgroundCompilation::Environment::Merge(v8::internal::compiler::SerializerForBackgroundCompilation::Environment*,
   v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::Environment::Merge
          (Environment *this,Environment *param_1,Zone *param_2)

{
  Hints *this_00;
  long lVar1;
  Hints *pHVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  if (*(int *)(this + 0x18) != *(int *)(param_1 + 0x18)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","parameter_count() == other->parameter_count()");
  }
  if (*(int *)(this + 0x1c) != *(int *)(param_1 + 0x1c)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","register_count() == other->register_count()");
  }
  lVar1 = *(long *)(this + 0x30);
  lVar5 = *(long *)(this + 0x38);
  if (lVar1 == lVar5) {
    uVar3 = *(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x30) >> 3;
    uVar4 = lVar5 - lVar1 >> 3;
    if (uVar3 < uVar4 || uVar3 - uVar4 == 0) {
      if (uVar3 < uVar4) {
        lVar5 = lVar1 + uVar3 * 8;
        *(long *)(this + 0x38) = lVar5;
      }
    }
    else {
      std::__ndk1::
      vector<v8::internal::compiler::Hints,v8::internal::ZoneAllocator<v8::internal::compiler::Hints>>
      ::__append((vector<v8::internal::compiler::Hints,v8::internal::ZoneAllocator<v8::internal::compiler::Hints>>
                  *)(this + 0x30),uVar3 - uVar4);
      lVar1 = *(long *)(this + 0x30);
      lVar5 = *(long *)(this + 0x38);
    }
  }
  if (lVar5 - lVar1 != *(long *)(param_1 + 0x38) - (long)*(Hints **)(param_1 + 0x30)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","ephemeral_hints_.size() == other->ephemeral_hints_.size()");
  }
  this_00 = *(Hints **)(this + 0x30);
  pHVar2 = *(Hints **)(this + 0x38);
  if (pHVar2 != this_00) {
    Hints::Merge(this_00,*(Hints **)(param_1 + 0x30),param_2);
    this_00 = *(Hints **)(this + 0x30);
    pHVar2 = *(Hints **)(this + 0x38);
    if (1 < (ulong)((long)pHVar2 - (long)this_00 >> 3)) {
      uVar3 = 1;
      lVar5 = 8;
      do {
        Hints::Merge(this_00 + lVar5,(Hints *)(*(long *)(param_1 + 0x30) + lVar5),param_2);
        this_00 = *(Hints **)(this + 0x30);
        pHVar2 = *(Hints **)(this + 0x38);
        uVar3 = uVar3 + 1;
        lVar5 = lVar5 + 8;
      } while (uVar3 < (ulong)((long)pHVar2 - (long)this_00 >> 3));
    }
  }
  if (this_00 != pHVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!IsDead()");
}

