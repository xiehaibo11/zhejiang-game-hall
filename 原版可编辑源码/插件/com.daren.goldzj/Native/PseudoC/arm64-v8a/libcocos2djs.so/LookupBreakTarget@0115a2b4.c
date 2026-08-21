
/* v8::internal::Parser::LookupBreakTarget(v8::internal::AstRawString const*) */

BreakableStatement * __thiscall
v8::internal::Parser::LookupBreakTarget(Parser *this,AstRawString *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  BreakableStatement *this_00;
  long lVar4;
  
  lVar4 = *(long *)(this + 0x300);
  if (lVar4 == 0) {
LAB_0115a324:
    this_00 = (BreakableStatement *)0x0;
  }
  else {
    this_00 = *(BreakableStatement **)(lVar4 + 8);
    if (param_1 != (AstRawString *)0x0) goto LAB_0115a2f0;
    while (((byte)this_00[4] >> 6 & 1) != 0) {
      while( true ) {
        lVar4 = *(long *)(lVar4 + 0x10);
        if (lVar4 == 0) goto LAB_0115a324;
        this_00 = *(BreakableStatement **)(lVar4 + 8);
        if (param_1 == (AstRawString *)0x0) break;
LAB_0115a2f0:
        plVar2 = (long *)BreakableStatement::labels(this_00);
        if (plVar2 != (long *)0x0) {
          lVar3 = (long)*(int *)((long)plVar2 + 0xc);
          while (0 < lVar3) {
            lVar1 = lVar3 * 8;
            lVar3 = lVar3 + -1;
            if (*(AstRawString **)(*plVar2 + lVar1 + -8) == param_1) {
              return this_00;
            }
          }
        }
      }
    }
  }
  return this_00;
}

