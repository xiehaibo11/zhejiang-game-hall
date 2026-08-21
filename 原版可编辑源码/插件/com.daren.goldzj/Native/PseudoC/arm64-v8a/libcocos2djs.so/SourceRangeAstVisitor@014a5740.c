
/* v8::internal::SourceRangeAstVisitor::SourceRangeAstVisitor(unsigned long,
   v8::internal::Expression*, v8::internal::SourceRangeMap*) */

void __thiscall
v8::internal::SourceRangeAstVisitor::SourceRangeAstVisitor
          (SourceRangeAstVisitor *this,ulong param_1,Expression *param_2,SourceRangeMap *param_3)

{
  *(Expression **)(this + 0x10) = param_2;
  *(undefined4 *)(this + 0x18) = 0;
  *(ulong *)this = param_1;
  this[8] = (SourceRangeAstVisitor)0x0;
  *(SourceRangeMap **)(this + 0x20) = param_3;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x48) = 0x3f800000;
  return;
}

