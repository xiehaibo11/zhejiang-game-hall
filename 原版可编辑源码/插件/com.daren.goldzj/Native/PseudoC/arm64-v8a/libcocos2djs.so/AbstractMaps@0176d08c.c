
/* v8::internal::compiler::LoadElimination::AbstractMaps::AbstractMaps(v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::LoadElimination::AbstractMaps::AbstractMaps
          (AbstractMaps *this,Zone *param_1)

{
  *(undefined8 *)(this + 8) = 0;
  *(Zone **)(this + 0x10) = param_1;
  *(undefined8 *)(this + 0x18) = 0;
  *(AbstractMaps **)this = this + 8;
  return;
}

