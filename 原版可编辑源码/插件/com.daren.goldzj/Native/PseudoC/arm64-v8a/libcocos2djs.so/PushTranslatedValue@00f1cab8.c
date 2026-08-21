
/* v8::internal::FrameWriter::PushTranslatedValue(v8::internal::TranslatedFrame::iterator const&,
   char const*) */

void __thiscall
v8::internal::FrameWriter::PushTranslatedValue(FrameWriter *this,iterator *param_1,char *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long local_68;
  long lStack_60;
  long lStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar4 = TranslatedValue::GetRawValue(*(TranslatedValue **)(param_1 + 8));
  iVar2 = *(int *)(this + 0x18);
  *(uint *)(this + 0x18) = iVar2 - 8U;
  *(undefined8 *)(*(long *)(this + 8) + (ulong)(iVar2 - 8U) + 0x240) = uVar4;
  if (*(long *)(this + 0x10) != 0) {
    DebugPrintOutputObject(this,uVar4,*(undefined4 *)(this + 0x18),param_2);
    if (*(long **)(this + 0x10) != (long *)0x0) {
      PrintF(*(__sFILE **)(**(long **)(this + 0x10) + 0x90)," (input #%d)\n",
             (ulong)*(uint *)(param_1 + 0x10));
    }
  }
  plVar5 = *(long **)this;
  if ((int)uVar4 == *(int *)(*plVar5 + 0x178)) {
    local_68 = *(long *)(*(long *)(this + 8) + 0x210) + (ulong)*(uint *)(this + 0x18);
    uStack_50 = *(undefined4 *)(param_1 + 0x10);
    lStack_58 = *(long *)(param_1 + 8);
    lStack_60 = *(long *)param_1;
    plVar1 = (long *)plVar5[0x20];
    if (plVar1 < (long *)plVar5[0x21]) {
      plVar1[1] = lStack_60;
      *plVar1 = local_68;
      plVar1[3] = CONCAT44(uStack_4c,uStack_50);
      plVar1[2] = lStack_58;
      plVar5[0x20] = plVar5[0x20] + 0x20;
    }
    else {
      std::__ndk1::
      vector<v8::internal::Deoptimizer::ValueToMaterialize,std::__ndk1::allocator<v8::internal::Deoptimizer::ValueToMaterialize>>
      ::__push_back_slow_path<v8::internal::Deoptimizer::ValueToMaterialize>
                ((vector<v8::internal::Deoptimizer::ValueToMaterialize,std::__ndk1::allocator<v8::internal::Deoptimizer::ValueToMaterialize>>
                  *)(plVar5 + 0x1f),(ValueToMaterialize *)&local_68);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

