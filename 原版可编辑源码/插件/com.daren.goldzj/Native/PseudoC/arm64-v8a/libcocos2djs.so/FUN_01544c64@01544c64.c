
void FUN_01544c64(long param_1,long param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  ulong uVar5;
  ZoneList *pZVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  Isolate *pIVar11;
  RegExpCharacterClass *this;
  long lVar12;
  
  plVar7 = *(long **)(param_2 + 0x40);
  pIVar11 = *(Isolate **)(param_1 + 8);
  uVar2 = *(uint *)((long)plVar7 + 0xc);
  if (0 < (int)uVar2) {
    cVar4 = *(char *)(param_1 + 0x10);
    lVar12 = 0;
    while( true ) {
      if (((*(int *)(*plVar7 + lVar12 + 4) == 1) &&
          (this = *(RegExpCharacterClass **)(*plVar7 + lVar12 + 8), ((byte)this[0x18] >> 1 & 1) != 0
          )) && (uVar5 = v8::internal::RegExpCharacterClass::is_standard
                                   (this,*(Zone **)(param_2 + 0x30)), (uVar5 & 1) == 0)) {
        pZVar6 = (ZoneList *)
                 v8::internal::CharacterSet::ranges
                           ((CharacterSet *)(this + 8),*(Zone **)(param_2 + 0x30));
        v8::internal::CharacterRange::AddCaseEquivalents
                  (pIVar11,*(Zone **)(param_2 + 0x30),pZVar6,cVar4 != '\0');
      }
      if ((ulong)uVar2 * 0x10 + -0x10 == lVar12) break;
      plVar7 = *(long **)(param_2 + 0x40);
      lVar12 = lVar12 + 0x10;
    }
    pIVar11 = *(Isolate **)(param_1 + 8);
  }
  plVar7 = *(long **)(param_2 + 0x38);
  uVar5 = v8::internal::GetCurrentStackPosition();
  if (uVar5 < *(ulong *)(pIVar11 + 0x58)) {
    *(char **)(param_1 + 0x18) = "Stack overflow";
    lVar12 = *(long *)(param_1 + 0x18);
  }
  else if ((*(byte *)((long)plVar7 + 0x19) & 3) == 0) {
    *(byte *)((long)plVar7 + 0x19) = *(byte *)((long)plVar7 + 0x19) | 1;
    (**(code **)(*plVar7 + 0x10))(plVar7,param_1);
    *(byte *)((long)plVar7 + 0x19) = *(byte *)((long)plVar7 + 0x19) & 0xfc | 2;
    lVar12 = *(long *)(param_1 + 0x18);
  }
  else {
    lVar12 = *(long *)(param_1 + 0x18);
  }
  if (lVar12 == 0) {
    plVar7 = *(long **)(param_2 + 0x40);
    uVar2 = *(uint *)((long)plVar7 + 0xc);
    if (0 < (int)uVar2) {
      lVar12 = 0;
      iVar8 = 0;
      while( true ) {
        lVar9 = *plVar7;
        piVar1 = (int *)(lVar9 + lVar12);
        iVar3 = piVar1[1];
        *piVar1 = iVar8;
        iVar10 = 1;
        if (iVar3 != 1) {
          if (iVar3 != 0) goto LAB_01544ec4;
          iVar10 = *(int *)(*(long *)(lVar9 + lVar12 + 8) + 0x10);
        }
        if ((ulong)uVar2 * 0x10 + -0x10 == lVar12) break;
        plVar7 = *(long **)(param_2 + 0x40);
        iVar8 = iVar10 + iVar8;
        lVar12 = lVar12 + 0x10;
      }
    }
    if (*(char *)(param_2 + 0x48) == '\0') {
      lVar12 = **(long **)(param_2 + 0x40);
      lVar9 = (long)*(int *)((long)*(long **)(param_2 + 0x40) + 0xc) + -1;
      piVar1 = (int *)(lVar12 + lVar9 * 0x10);
      iVar8 = *piVar1;
      iVar3 = piVar1[1];
      if (iVar3 == 1) {
        iVar8 = iVar8 + 1 + (uint)*(byte *)(*(long *)(param_2 + 0x38) + 0x1b);
                    /* WARNING: Could not recover jumptable at 0x01544e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_01544e98 +
                  (ulong)(byte)(&DAT_01a4b1d8)[CONCAT14(0xff < iVar8,iVar8) >> 0x1f] * 4))();
        return;
      }
      if (iVar3 == 0) {
        iVar8 = *(int *)(*(long *)(lVar12 + lVar9 * 0x10 + 8) + 0x10) + iVar8 +
                (uint)*(byte *)(*(long *)(param_2 + 0x38) + 0x1b);
                    /* WARNING: Could not recover jumptable at 0x01544e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_01544e98 +
                  (ulong)(byte)(&DAT_01a4b1d8)[CONCAT14(0xff < iVar8,iVar8) >> 0x1f] * 4))();
        return;
      }
LAB_01544ec4:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
  }
  return;
}

