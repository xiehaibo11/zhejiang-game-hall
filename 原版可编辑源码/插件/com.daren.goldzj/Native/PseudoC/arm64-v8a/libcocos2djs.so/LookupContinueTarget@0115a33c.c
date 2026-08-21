
/* v8::internal::Parser::LookupContinueTarget(v8::internal::AstRawString const*) */

long __thiscall v8::internal::Parser::LookupContinueTarget(Parser *this,AstRawString *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(this + 0x300);
  do {
    if (lVar5 == 0) {
      return 0;
    }
    lVar2 = AstNode::AsIterationStatement(*(AstNode **)(lVar5 + 8));
    if ((param_1 == (AstRawString *)0x0) || (lVar2 == 0)) {
      if (lVar2 != 0) {
        return lVar2;
      }
    }
    else {
      plVar3 = *(long **)(lVar2 + 0x10);
      if (plVar3 != (long *)0x0) {
        lVar4 = (long)*(int *)((long)plVar3 + 0xc);
        while (0 < lVar4) {
          lVar1 = lVar4 * 8;
          lVar4 = lVar4 + -1;
          if (*(AstRawString **)(*plVar3 + lVar1 + -8) == param_1) {
            return lVar2;
          }
        }
      }
      plVar3 = *(long **)(lVar2 + 8);
      if (plVar3 != (long *)0x0) {
        lVar2 = (long)*(int *)((long)plVar3 + 0xc);
        while (0 < lVar2) {
          lVar4 = lVar2 * 8;
          lVar2 = lVar2 + -1;
          if (*(AstRawString **)(*plVar3 + lVar4 + -8) == param_1) {
            return 0;
          }
        }
      }
    }
    lVar5 = *(long *)(lVar5 + 0x10);
  } while( true );
}

