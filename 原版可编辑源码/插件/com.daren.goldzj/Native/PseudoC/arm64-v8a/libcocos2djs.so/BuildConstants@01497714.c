
/* v8::internal::MaterializedLiteral::BuildConstants(v8::internal::Isolate*) */

void __thiscall
v8::internal::MaterializedLiteral::BuildConstants(MaterializedLiteral *this,Isolate *param_1)

{
  if ((*(uint *)(this + 4) & 0x3f) == 0x16) {
    ObjectLiteral::BuildBoilerplateDescription((ObjectLiteral *)this,param_1);
    return;
  }
  if ((*(uint *)(this + 4) & 0x3f) == 0x17) {
    ArrayLiteral::BuildBoilerplateDescription((ArrayLiteral *)this,param_1);
    return;
  }
  return;
}

