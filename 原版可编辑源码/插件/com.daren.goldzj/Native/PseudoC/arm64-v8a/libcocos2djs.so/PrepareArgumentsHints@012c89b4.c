
/* v8::internal::compiler::SerializerForBackgroundCompilation::PrepareArgumentsHints(v8::internal::interpreter::Register,
   unsigned long) */

void v8::internal::compiler::SerializerForBackgroundCompilation::PrepareArgumentsHints
               (vector<v8::internal::compiler::Hints,v8::internal::ZoneAllocator<v8::internal::compiler::Hints>>
                *param_1,long param_2,int param_3,int param_4)

{
  Hints *pHVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  Zone *this;
  int local_50 [2];
  int local_48 [2];
  
  lVar3 = *(long *)(param_2 + 0x20);
  if (lVar3 == 0) {
    lVar3 = ZoneStats::NewEmptyZone(*(ZoneStats **)(param_2 + 0x18),*(char **)(param_2 + 0x10));
    *(long *)(param_2 + 0x20) = lVar3;
  }
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(long *)(param_1 + 0x18) = lVar3;
  if (0 < param_4) {
    do {
      lVar3 = *(long *)(param_2 + 0x28);
      local_50[0] = param_3;
      uVar4 = interpreter::Register::is_function_closure((Register *)local_50);
      if ((uVar4 & 1) == 0) {
        uVar4 = interpreter::Register::is_current_context((Register *)local_50);
        if ((uVar4 & 1) == 0) {
          local_48[0] = local_50[0];
          if (local_50[0] < 0) {
            uVar2 = interpreter::Register::ToParameterIndex
                              ((Register *)local_48,*(int *)(lVar3 + 0x18));
            lVar6 = *(long *)(lVar3 + 0x30);
          }
          else {
            uVar2 = *(int *)(lVar3 + 0x18) + local_50[0];
            lVar6 = *(long *)(lVar3 + 0x30);
          }
          if ((-1 < (int)uVar2) && ((ulong)(*(long *)(lVar3 + 0x38) - lVar6 >> 3) <= (ulong)uVar2))
          {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","local_index < ephemeral_hints_.size()");
          }
          pHVar1 = (Hints *)(lVar6 + (long)(int)uVar2 * 8);
          this = *(Zone **)(param_2 + 0x20);
        }
        else {
          pHVar1 = (Hints *)(lVar3 + 0x28);
          this = *(Zone **)(param_2 + 0x20);
        }
      }
      else {
        pHVar1 = (Hints *)(lVar3 + 0x20);
        this = *(Zone **)(param_2 + 0x20);
      }
      if (this == (Zone *)0x0) {
        this = (Zone *)ZoneStats::NewEmptyZone
                                 (*(ZoneStats **)(param_2 + 0x18),*(char **)(param_2 + 0x10));
        *(Zone **)(param_2 + 0x20) = this;
      }
      puVar5 = *(undefined8 **)pHVar1;
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = *(undefined8 **)(this + 0x10);
        if ((ulong)(*(long *)(this + 0x18) - (long)puVar5) < 0x30) {
          puVar5 = (undefined8 *)Zone::NewExpand(this,0x30);
        }
        else {
          *(undefined8 **)(this + 0x10) = puVar5 + 6;
        }
        puVar5[1] = 0;
        *puVar5 = 0;
        puVar5[3] = 0;
        puVar5[2] = 0;
        puVar5[4] = 0;
        puVar5[5] = this;
        *(undefined8 **)pHVar1 = puVar5;
      }
      if (*(undefined8 **)(param_1 + 8) == *(undefined8 **)(param_1 + 0x10)) {
        std::__ndk1::
        vector<v8::internal::compiler::Hints,v8::internal::ZoneAllocator<v8::internal::compiler::Hints>>
        ::__push_back_slow_path<v8::internal::compiler::Hints_const&>(param_1,pHVar1);
      }
      else {
        **(undefined8 **)(param_1 + 8) = puVar5;
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      }
      param_4 = param_4 + -1;
      param_3 = param_3 + 1;
    } while (param_4 != 0);
  }
  return;
}

