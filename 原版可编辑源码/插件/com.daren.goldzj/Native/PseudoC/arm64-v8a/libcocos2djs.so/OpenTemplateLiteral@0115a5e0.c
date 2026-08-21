
/* v8::internal::Parser::OpenTemplateLiteral(int) */

TemplateLiteral * __thiscall v8::internal::Parser::OpenTemplateLiteral(Parser *this,int param_1)

{
  Zone *this_00;
  TemplateLiteral *this_01;
  
  this_00 = *(Zone **)(this + 0xb8);
  this_01 = *(TemplateLiteral **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < 0x38) {
    this_01 = (TemplateLiteral *)Zone::NewExpand(this_00,0x38);
  }
  else {
    *(TemplateLiteral **)(this_00 + 0x10) = this_01 + 0x38;
  }
  TemplateLiteral::TemplateLiteral(this_01,*(Zone **)(this + 0xb8),param_1);
  return this_01;
}

