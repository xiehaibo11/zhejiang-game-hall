
/* v8::internal::wasm::AsmJsParser::~AsmJsParser() */

void __thiscall v8::internal::wasm::AsmJsParser::~AsmJsParser(AsmJsParser *this)

{
  long *plVar1;
  AsmJsParser *pAVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(this + 0x2b0) != 0) {
    lVar4 = *(long *)(this + 0x2a0);
    pAVar2 = *(AsmJsParser **)(this + 0x2a8);
    *(undefined8 *)(*(long *)pAVar2 + 8) = *(undefined8 *)(lVar4 + 8);
    **(undefined8 **)(lVar4 + 8) = *(undefined8 *)pAVar2;
    *(undefined8 *)(this + 0x2b0) = 0;
    for (; pAVar2 != this + 0x2a0; pAVar2 = *(AsmJsParser **)(pAVar2 + 8)) {
    }
  }
  if (*(long *)(this + 0x210) != 0) {
    *(long *)(this + 0x218) = *(long *)(this + 0x210);
  }
  plVar3 = *(long **)(this + 0x1b8);
  if (plVar3 != (long *)0x0) {
    plVar5 = *(long **)(this + 0x1c0);
    if (plVar5 != plVar3) {
      lVar4 = plVar5[-4];
      plVar1 = plVar5 + -4;
      while( true ) {
        if (lVar4 != 0) {
          plVar5[-3] = lVar4;
        }
        if (plVar3 == plVar1) break;
        lVar4 = plVar1[-4];
        plVar5 = plVar1;
        plVar1 = plVar1 + -4;
      }
    }
    *(long **)(this + 0x1c0) = plVar3;
  }
  plVar3 = *(long **)(this + 0x198);
  if (plVar3 != (long *)0x0) {
    plVar5 = *(long **)(this + 0x1a0);
    if (plVar5 != plVar3) {
      lVar4 = plVar5[-4];
      plVar1 = plVar5 + -4;
      while( true ) {
        if (lVar4 != 0) {
          plVar5[-3] = lVar4;
        }
        if (plVar3 == plVar1) break;
        lVar4 = plVar1[-4];
        plVar5 = plVar1;
        plVar1 = plVar1 + -4;
      }
    }
    *(long **)(this + 0x1a0) = plVar3;
  }
  plVar3 = *(long **)(this + 0x178);
  if (plVar3 != (long *)0x0) {
    plVar5 = *(long **)(this + 0x180);
    if (plVar5 != plVar3) {
      lVar4 = plVar5[-4];
      plVar1 = plVar5 + -4;
      while( true ) {
        if (lVar4 != 0) {
          plVar5[-3] = lVar4;
        }
        if (plVar3 == plVar1) break;
        lVar4 = plVar1[-4];
        plVar5 = plVar1;
        plVar1 = plVar1 + -4;
      }
    }
    *(long **)(this + 0x180) = plVar3;
  }
  plVar3 = *(long **)(this + 0x158);
  if (plVar3 != (long *)0x0) {
    plVar5 = *(long **)(this + 0x160);
    if (plVar5 != plVar3) {
      lVar4 = plVar5[-4];
      plVar1 = plVar5 + -4;
      while( true ) {
        if (lVar4 != 0) {
          plVar5[-3] = lVar4;
        }
        if (plVar3 == plVar1) break;
        lVar4 = plVar1[-4];
        plVar5 = plVar1;
        plVar1 = plVar1 + -4;
      }
    }
    *(long **)(this + 0x160) = plVar3;
  }
  if (*(long *)(this + 0x138) != 0) {
    *(long *)(this + 0x140) = *(long *)(this + 0x138);
  }
  if (*(long *)(this + 0x118) != 0) {
    *(long *)(this + 0x120) = *(long *)(this + 0x118);
  }
  AsmJsScanner::~AsmJsScanner((AsmJsScanner *)(this + 8));
  return;
}

