
/* v8::internal::Parser::TargetStackContainsLabel(v8::internal::AstRawString const*) */

undefined8 __thiscall
v8::internal::Parser::TargetStackContainsLabel(Parser *this,AstRawString *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(this + 0x300);
  do {
    if (lVar4 == 0) {
      return 0;
    }
    plVar2 = (long *)BreakableStatement::labels(*(BreakableStatement **)(lVar4 + 8));
    if (plVar2 != (long *)0x0) {
      lVar3 = (long)*(int *)((long)plVar2 + 0xc);
      while (0 < lVar3) {
        lVar1 = lVar3 * 8;
        lVar3 = lVar3 + -1;
        if (*(AstRawString **)(*plVar2 + lVar1 + -8) == param_1) {
          return 1;
        }
      }
    }
    lVar4 = *(long *)(lVar4 + 0x10);
  } while( true );
}

