
/* v8::internal::CallPrinter::PrintLiteral(v8::internal::Handle<v8::internal::Object>, bool) */

void __thiscall
v8::internal::CallPrinter::PrintLiteral(CallPrinter *this,ulong *param_2,ulong param_3)

{
  Factory *pFVar1;
  IncrementalStringBuilder *pIVar2;
  char *pcVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar5 = *param_2;
  if ((uVar5 & 1) == 0) {
LAB_0149bed4:
    pFVar1 = *(Factory **)this;
LAB_0149bed8:
    param_2 = (ulong *)Factory::NumberToString(pFVar1,param_2,1);
    if ((this[0x1c] != (CallPrinter)0x0) && (this[0x1d] == (CallPrinter)0x0)) {
      iVar4 = *(int *)(this + 8);
      pIVar2 = *(IncrementalStringBuilder **)(this + 0x10);
LAB_0149c0b4:
      *(int *)(this + 8) = iVar4 + 1;
      IncrementalStringBuilder::AppendString(pIVar2,param_2);
      return;
    }
  }
  else {
    uVar6 = uVar5 & 0xffffffff00000000;
    uVar7 = uVar6 | 7;
    if (*(ushort *)(uVar7 + *(uint *)(uVar5 - 1)) < 0x40) {
      if ((param_3 & 1) != 0) {
        Print(this,"\"");
        if ((this[0x1c] != (CallPrinter)0x0) && (this[0x1d] == (CallPrinter)0x0)) {
          *(int *)(this + 8) = *(int *)(this + 8) + 1;
          IncrementalStringBuilder::AppendString
                    (*(IncrementalStringBuilder **)(this + 0x10),param_2);
        }
        pcVar3 = "\"";
LAB_0149c078:
        Print(this,pcVar3);
        return;
      }
    }
    else {
      do {
        pFVar1 = *(Factory **)this;
        iVar4 = (int)uVar5;
        if (iVar4 == *(int *)(pFVar1 + 0xb0)) {
          pcVar3 = "null";
          goto LAB_0149c078;
        }
        if (iVar4 == *(int *)(pFVar1 + 0xb8)) {
          pcVar3 = "true";
          goto LAB_0149c078;
        }
        if (iVar4 == *(int *)(pFVar1 + 0xc0)) {
          pcVar3 = "false";
          goto LAB_0149c078;
        }
        if (iVar4 == *(int *)(pFVar1 + 0xa0)) {
          pcVar3 = "undefined";
          goto LAB_0149c078;
        }
        if (*(short *)(uVar7 + *(uint *)(uVar5 - 1)) == 0x42) goto LAB_0149bed8;
        if (*(short *)(uVar7 + *(uint *)(uVar5 - 1)) != 0x40) {
          return;
        }
        uVar6 = uVar6 | *(uint *)(uVar5 + 0xb);
        if (*(CanonicalHandleScope **)(pFVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          param_2 = *(ulong **)(pFVar1 + 0x95a0);
          if (param_2 == *(ulong **)(pFVar1 + 0x95a8)) {
            param_2 = (ulong *)HandleScope::Extend((Isolate *)pFVar1);
          }
          *(ulong **)(pFVar1 + 0x95a0) = param_2 + 1;
          *param_2 = uVar6;
          uVar5 = *param_2;
        }
        else {
          param_2 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(pFVar1 + 0x95b8),uVar6);
          uVar5 = *param_2;
        }
        if ((uVar5 & 1) == 0) goto LAB_0149bed4;
        uVar6 = uVar5 & 0xffffffff00000000;
        uVar7 = uVar6 | 7;
      } while (0x3f < *(ushort *)(uVar7 + *(uint *)(uVar5 - 1)));
    }
    if ((this[0x1c] != (CallPrinter)0x0) && (this[0x1d] == (CallPrinter)0x0)) {
      iVar4 = *(int *)(this + 8);
      pIVar2 = *(IncrementalStringBuilder **)(this + 0x10);
      goto LAB_0149c0b4;
    }
  }
  return;
}

