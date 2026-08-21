
/* v8::internal::Heap::IterateWeakRoots(v8::internal::RootVisitor*, v8::internal::VisitMode) */

void __thiscall v8::internal::Heap::IterateWeakRoots(Heap *this,long *param_1,int param_3)

{
  (**(code **)(*param_1 + 0x18))(param_1,0,0,this + -0x7880);
  (**(code **)(*param_1 + 0x20))(param_1,0);
  if ((3 < param_3 - 1U) && (param_3 != 6)) {
    if (*(long *)(this + 0xae8) != *(long *)(this + 0xaf0)) {
      (**(code **)(*param_1 + 0x10))(param_1,1,0);
    }
    if (*(long *)(this + 0xb00) != *(long *)(this + 0xb08)) {
      (**(code **)(*param_1 + 0x10))(param_1,1,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00f9627c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,1);
  return;
}

