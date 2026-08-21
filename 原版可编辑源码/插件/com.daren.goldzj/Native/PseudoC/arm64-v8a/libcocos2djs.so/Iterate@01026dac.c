
/* v8::internal::Bootstrapper::Iterate(v8::internal::RootVisitor*) */

void __thiscall v8::internal::Bootstrapper::Iterate(Bootstrapper *this,RootVisitor *param_1)

{
  (**(code **)(*(long *)param_1 + 0x18))(param_1,0x10,0,this + 0x18);
                    /* WARNING: Could not recover jumptable at 0x01026df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x20))(param_1,0x10);
  return;
}

