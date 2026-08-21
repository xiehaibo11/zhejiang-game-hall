
/* v8::internal::compiler::CallDescriptor::GetStackParameterDelta(v8::internal::compiler::CallDescriptor
   const*) const */

int __thiscall
v8::internal::compiler::CallDescriptor::GetStackParameterDelta
          (CallDescriptor *this,CallDescriptor *param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  uint uVar8;
  CallDescriptor *pCVar7;
  
  plVar3 = *(long **)(this + 0x10);
  uVar8 = 0;
  if (plVar3[1] != -1) {
    lVar5 = -1;
    do {
      pCVar7 = this + 8;
      if (lVar5 != -1) {
        pCVar7 = (CallDescriptor *)(plVar3[2] + (lVar5 + *plVar3) * 8);
      }
      uVar6 = *(ulong *)pCVar7;
      uVar2 = uVar8;
      if ((uVar6 & 1) != 0) {
        uVar2 = (int)(uVar6 >> 0x20) - 1;
        if (0xc < (uVar2 & 0xff)) goto LAB_01767a8c;
        uVar2 = ((int)uVar6 >> 1 ^ 0xffffffffU) +
                ((1 << (ulong)(*(uint *)(&DAT_01a5f990 + (long)(char)uVar2 * 4) & 0x1f)) + 7U >> 3);
        if ((int)uVar2 <= (int)uVar8) {
          uVar2 = uVar8;
        }
      }
      uVar8 = uVar2;
      lVar5 = lVar5 + 1;
    } while (plVar3[1] != lVar5);
  }
  plVar3 = *(long **)(param_1 + 0x10);
  if (plVar3[1] == -1) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    lVar5 = -1;
    do {
      pCVar7 = param_1 + 8;
      if (lVar5 != -1) {
        pCVar7 = (CallDescriptor *)(plVar3[2] + (lVar5 + *plVar3) * 8);
      }
      uVar6 = *(ulong *)pCVar7;
      iVar1 = iVar4;
      if ((uVar6 & 1) != 0) {
        uVar2 = (int)(uVar6 >> 0x20) - 1;
        if (0xc < (uVar2 & 0xff)) {
LAB_01767a8c:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        iVar1 = ((int)uVar6 >> 1 ^ 0xffffffffU) +
                ((1 << (ulong)(*(uint *)(&DAT_01a5f990 + (long)(char)uVar2 * 4) & 0x1f)) + 7U >> 3);
        if (iVar1 <= iVar4) {
          iVar1 = iVar4;
        }
      }
      iVar4 = iVar1;
      lVar5 = lVar5 + 1;
    } while (plVar3[1] != lVar5);
  }
  iVar4 = uVar8 - iVar4;
  uVar6 = ShouldPadArguments(iVar4);
  if ((uVar6 & 1) != 0) {
    if ((uVar8 & 1) == 0) {
      iVar4 = iVar4 + -1;
    }
    else {
      iVar4 = iVar4 + 1;
    }
  }
  return iVar4;
}

