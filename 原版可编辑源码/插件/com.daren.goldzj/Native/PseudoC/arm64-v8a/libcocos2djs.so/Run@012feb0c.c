
/* v8::internal::compiler::Typer::Run() */

void __thiscall v8::internal::compiler::Typer::Run(Typer *this)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_18 = **(undefined8 **)(this + 8);
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  Run(this,(ZoneVector *)&local_30,(LoopVariableOptimizer *)0x0);
  return;
}

