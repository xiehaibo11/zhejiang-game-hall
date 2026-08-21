
/* v8::internal::PreParser::BuildParameterInitializationBlock(v8::internal::PreParserFormalParameters
   const&) */

undefined1  [16]
v8::internal::PreParser::BuildParameterInitializationBlock(PreParserFormalParameters *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = Scope::AsDeclarationScope();
  if (((*(byte *)(lVar1 + 0x81) >> 2 & 1) != 0) &&
     (plVar2 = *(long **)(param_1 + 0x120), plVar2 != (long *)0x0)) {
    lVar1 = *plVar2;
    if (lVar1 == 0) {
      *(byte *)((long)plVar2 + 0x4c) = *(byte *)((long)plVar2 + 0x4c) | 1;
    }
    else {
      *(byte *)(lVar1 + 0x4c) = *(byte *)(lVar1 + 0x4c) | 1;
    }
  }
  return ZEXT816(2);
}

