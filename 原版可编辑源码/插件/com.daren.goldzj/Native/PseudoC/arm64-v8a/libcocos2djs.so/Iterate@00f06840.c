
/* v8::internal::Debug::Iterate(v8::internal::RootVisitor*) */

void __thiscall v8::internal::Debug::Iterate(Debug *this,RootVisitor *param_1)

{
  (**(code **)(*(long *)param_1 + 0x18))(param_1,8,0,this + 0x68);
  (**(code **)(*(long *)param_1 + 0x18))(param_1,8,0,this + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00f068ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x18))(param_1,8,0,this + 0x50);
  return;
}

