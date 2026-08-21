
/* v8::internal::ReadOnlyRoots::Iterate(v8::internal::RootVisitor*) */

void __thiscall v8::internal::ReadOnlyRoots::Iterate(ReadOnlyRoots *this,RootVisitor *param_1)

{
  (**(code **)(*(long *)param_1 + 0x10))(param_1,2,0,*(long *)this,*(long *)this + 0xd98);
                    /* WARNING: Could not recover jumptable at 0x011bdab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x20))(param_1,2);
  return;
}

