
/* v8::internal::RegExpParser::ParseNamedBackReference(v8::internal::RegExpBuilder*,
   v8::internal::RegExpParser::RegExpParserState*) */

undefined8 __thiscall
v8::internal::RegExpParser::ParseNamedBackReference
          (RegExpParser *this,RegExpBuilder *param_1,RegExpParserState *param_2)

{
  uint uVar1;
  short *psVar2;
  short *psVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  RegExpTree *pRVar8;
  void *pvVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  Zone *pZVar13;
  long *plVar14;
  char *local_40;
  long lStack_38;
  
  if (*(int *)(this + 0x38) == 0x3c) {
    Advance(this);
    plVar6 = (long *)ParseCaptureGroupName(this);
    uVar7 = 0;
    if (plVar6 != (long *)0x0) {
      for (; param_2 != (RegExpParserState *)0x0; param_2 = *(RegExpParserState **)param_2) {
        plVar14 = *(long **)(param_2 + 0x20);
        if (plVar14 != (long *)0x0) {
          psVar2 = (short *)*plVar14;
          psVar3 = (short *)*plVar6;
          if (plVar14[1] - (long)psVar2 == plVar6[1] - (long)psVar3) {
            while( true ) {
              if (psVar2 == (short *)plVar14[1]) {
                param_1[8] = (RegExpBuilder)0x1;
                return 1;
              }
              if (*psVar2 != *psVar3) break;
              psVar2 = psVar2 + 1;
              psVar3 = psVar3 + 1;
            }
          }
        }
      }
      pZVar13 = *(Zone **)(this + 8);
      pRVar8 = *(RegExpTree **)(pZVar13 + 0x10);
      if ((ulong)(*(long *)(pZVar13 + 0x18) - (long)pRVar8) < 0x20) {
        pRVar8 = (RegExpTree *)Zone::NewExpand(pZVar13,0x20);
      }
      else {
        *(RegExpTree **)(pZVar13 + 0x10) = pRVar8 + 0x20;
      }
      uVar4 = *(undefined4 *)(param_1 + 0xc);
      *(long **)(pRVar8 + 0x10) = plVar6;
      *(undefined ***)pRVar8 = &PTR__RegExpTree_01cc7d68;
      *(undefined8 *)(pRVar8 + 8) = 0;
      *(undefined4 *)(pRVar8 + 0x18) = uVar4;
      RegExpBuilder::AddAtom(param_1,pRVar8);
      plVar6 = *(long **)(this + 0x28);
      if (plVar6 == (long *)0x0) {
        pZVar13 = *(Zone **)(this + 8);
        plVar6 = *(long **)(pZVar13 + 0x10);
        if ((ulong)(*(long *)(pZVar13 + 0x18) - (long)plVar6) < 0x10) {
          plVar6 = (long *)Zone::NewExpand(pZVar13,0x10);
        }
        else {
          *(long **)(pZVar13 + 0x10) = plVar6 + 2;
        }
        pZVar13 = *(Zone **)(this + 8);
        lVar10 = *(long *)(pZVar13 + 0x10);
        if ((ulong)(*(long *)(pZVar13 + 0x18) - lVar10) < 8) {
          lVar10 = Zone::NewExpand(pZVar13,8);
        }
        else {
          *(long *)(pZVar13 + 0x10) = lVar10 + 8;
        }
        *plVar6 = lVar10;
        plVar6[1] = 1;
        *(long **)(this + 0x28) = plVar6;
      }
      uVar12 = *(uint *)(plVar6 + 1);
      iVar5 = *(int *)((long)plVar6 + 0xc);
      if (iVar5 < (int)uVar12) {
        *(int *)((long)plVar6 + 0xc) = iVar5 + 1;
        *(RegExpTree **)(*plVar6 + (long)iVar5 * 8) = pRVar8;
      }
      else {
        pZVar13 = *(Zone **)(this + 8);
        uVar1 = uVar12 << 1 | 1;
        uVar11 = -(ulong)((uVar12 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
        pvVar9 = *(void **)(pZVar13 + 0x10);
        if ((ulong)(*(long *)(pZVar13 + 0x18) - (long)pvVar9) < uVar11) {
          pvVar9 = (void *)Zone::NewExpand(pZVar13,uVar11);
        }
        else {
          *(ulong *)(pZVar13 + 0x10) = (long)pvVar9 + uVar11;
        }
        uVar12 = *(uint *)((long)plVar6 + 0xc);
        if (0 < (int)uVar12) {
          MemCopy(pvVar9,(void *)*plVar6,(ulong)uVar12 << 3);
          uVar12 = *(uint *)((long)plVar6 + 0xc);
        }
        *plVar6 = (long)pvVar9;
        *(uint *)(plVar6 + 1) = uVar1;
        *(uint *)((long)plVar6 + 0xc) = uVar12 + 1;
        *(RegExpTree **)((long)pvVar9 + (long)(int)uVar12 * 8) = pRVar8;
      }
      uVar7 = 1;
    }
  }
  else {
    iVar5 = __strlen_chk("Invalid named reference",0x18);
    if (this[0x51] == (RegExpParser)0x0) {
      lStack_38 = (long)iVar5;
      this[0x51] = (RegExpParser)0x1;
      local_40 = "Invalid named reference";
      lVar10 = Factory::NewStringFromOneByte(*(undefined8 *)this,&local_40,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(location_) != nullptr");
      }
      uVar7 = 0;
      **(long **)(this + 0x10) = lVar10;
      *(undefined4 *)(this + 0x38) = 0x200000;
      *(undefined4 *)(this + 0x40) = *(undefined4 *)(*(long *)(this + 0x30) + 0x24);
    }
    else {
      uVar7 = 0;
    }
  }
  return uVar7;
}

