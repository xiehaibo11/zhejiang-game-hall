
/* v8::internal::MaterializedLiteral::InitDepthAndFlags() */

undefined8 __thiscall
v8::internal::MaterializedLiteral::InitDepthAndFlags(MaterializedLiteral *this)

{
  undefined8 uVar1;
  
  if ((*(uint *)(this + 4) & 0x3f) == 0x16) {
    uVar1 = ObjectLiteral::InitDepthAndFlags((ObjectLiteral *)this);
    return uVar1;
  }
  if ((*(uint *)(this + 4) & 0x3f) == 0x17) {
    uVar1 = ArrayLiteral::InitDepthAndFlags((ArrayLiteral *)this);
    return uVar1;
  }
  return 1;
}

