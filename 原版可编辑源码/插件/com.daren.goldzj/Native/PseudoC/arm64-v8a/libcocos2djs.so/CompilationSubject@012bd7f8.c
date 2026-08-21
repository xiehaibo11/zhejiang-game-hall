
/* v8::internal::compiler::CompilationSubject::CompilationSubject(v8::internal::Handle<v8::internal::JSFunction>,
   v8::internal::Isolate*, v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::CompilationSubject::CompilationSubject
          (CompilationSubject *this,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  VirtualClosure::VirtualClosure();
  *(ulong **)(this + 0x18) = param_2;
  uVar3 = *param_2;
  uVar2 = uVar3 & 0xffffffff00000000;
  uVar1 = *(uint *)((uVar2 | *(uint *)(uVar3 + 0xb)) + 3);
  if ((uVar1 != 0x84) &&
     ((((uVar1 & 1) == 0 ||
       (1 < *(ushort *)((uVar2 | 7) + (ulong)*(uint *)((uVar2 | uVar1) - 1)) - 0x95)) &&
      (*(short *)((uVar2 | 7) +
                 (ulong)*(uint *)((uVar2 | *(uint *)((uVar2 | *(uint *)(uVar3 + 0x13)) + 3)) - 1))
       == 0x9f)))) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","closure->has_feedback_vector()");
}

