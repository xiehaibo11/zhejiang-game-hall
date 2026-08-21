
/* v8::internal::WasmCompileLazyFrame::Iterate(v8::internal::RootVisitor*) const */

void __thiscall
v8::internal::WasmCompileLazyFrame::Iterate(WasmCompileLazyFrame *this,RootVisitor *param_1)

{
  (**(code **)(*(long *)param_1 + 0x10))
            (param_1,6,0,*(undefined8 *)(this + 0x18),*(long *)(this + 0x20) + -0x90);
                    /* WARNING: Could not recover jumptable at 0x00f48c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x18))(param_1,6,0,*(long *)(this + 0x20) + -0x18);
  return;
}

