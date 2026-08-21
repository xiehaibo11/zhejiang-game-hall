
/* v8::internal::Parser::TemplateLiteral::TemplateLiteral(v8::internal::Zone*, int) */

void __thiscall
v8::internal::Parser::TemplateLiteral::TemplateLiteral
          (TemplateLiteral *this,Zone *param_1,int param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if ((ulong)(*(long *)(param_1 + 0x18) - lVar1) < 0x40) {
    lVar1 = Zone::NewExpand(param_1,0x40);
  }
  else {
    *(long *)(param_1 + 0x10) = lVar1 + 0x40;
  }
  *(long *)this = lVar1;
  *(undefined8 *)(this + 8) = 8;
  lVar1 = *(long *)(param_1 + 0x10);
  if ((ulong)(*(long *)(param_1 + 0x18) - lVar1) < 0x40) {
    lVar1 = Zone::NewExpand(param_1,0x40);
  }
  else {
    *(long *)(param_1 + 0x10) = lVar1 + 0x40;
  }
  *(long *)(this + 0x10) = lVar1;
  *(undefined8 *)(this + 0x18) = 8;
  lVar1 = *(long *)(param_1 + 0x10);
  if ((ulong)(*(long *)(param_1 + 0x18) - lVar1) < 0x40) {
    lVar1 = Zone::NewExpand(param_1,0x40);
  }
  else {
    *(long *)(param_1 + 0x10) = lVar1 + 0x40;
  }
  *(long *)(this + 0x20) = lVar1;
  *(undefined8 *)(this + 0x28) = 8;
  *(int *)(this + 0x30) = param_2;
  return;
}

