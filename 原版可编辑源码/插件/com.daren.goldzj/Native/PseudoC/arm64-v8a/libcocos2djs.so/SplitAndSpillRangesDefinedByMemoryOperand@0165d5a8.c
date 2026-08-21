
/* v8::internal::compiler::RegisterAllocator::SplitAndSpillRangesDefinedByMemoryOperand() */

void __thiscall
v8::internal::compiler::RegisterAllocator::SplitAndSpillRangesDefinedByMemoryOperand
          (RegisterAllocator *this)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar5 = *(long *)this;
  lVar6 = *(long *)(lVar5 + 0x90) - *(long *)(lVar5 + 0x88);
  if (lVar6 == 0) {
    return;
  }
  uVar8 = lVar6 >> 3;
  uVar9 = 0;
LAB_0165d5e8:
  puVar7 = *(uint **)(*(long *)(lVar5 + 0x88) + uVar9 * 8);
  if (((((puVar7 != (uint *)0x0) && (*(uint **)(puVar7 + 4) != (uint *)0x0)) &&
       (uVar2 = puVar7[1], *(uint *)(this + 8) == (uint)(10 < (uVar2 >> 0xd & 0xff)))) &&
      ((uVar2 & 0x60) != 0)) && (((uVar2 >> 6 & 1) == 0 || ((uVar2 & 6) == 4)))) {
    uVar2 = **(uint **)(puVar7 + 4);
    if ((*(byte *)(lVar5 + 0x1d0) >> 2 & 1) != 0) {
      PrintF("Live range %d:%d is defined by a spill operand.\n",
             (ulong)*(uint *)(*(long *)(puVar7 + 8) + 0x5c),(ulong)*puVar7);
    }
    lVar6 = *(long *)(puVar7 + 0xe);
    uVar1 = uVar2 + 2 & 0xfffffffe;
    if ((uVar2 & 2) != 0) {
      uVar1 = uVar2;
    }
    if (*(long *)(puVar7 + 0x1a) == 0) {
      if ((lVar6 != 0) && (*(int *)(lVar6 + 0x18) <= (int)uVar1)) goto LAB_0165d6b4;
      for (lVar6 = *(long *)(puVar7 + 6); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x10)) {
LAB_0165d6b4:
        if ((int)uVar1 <= *(int *)(lVar6 + 0x18)) {
          *(long *)(puVar7 + 0xe) = lVar6;
          goto LAB_0165d724;
        }
      }
    }
    else {
      if ((lVar6 != 0) && (*(int *)(lVar6 + 0x18) <= (int)uVar1)) goto LAB_0165d684;
      for (lVar6 = *(long *)(puVar7 + 6); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x10)) {
LAB_0165d684:
        if ((int)uVar1 <= *(int *)(lVar6 + 0x18)) {
          *(long *)(puVar7 + 0xe) = lVar6;
          goto LAB_0165d704;
        }
      }
    }
    puVar7[0xe] = 0;
    puVar7[0xf] = 0;
    goto LAB_0165d6cc;
  }
  goto LAB_0165d6dc;
  while (lVar6 = *(long *)(lVar6 + 0x10), lVar6 != 0) {
LAB_0165d724:
    if ((*(byte *)(lVar6 + 0x1c) >> 5 & 1) != 0) goto LAB_0165d738;
  }
  goto LAB_0165d6cc;
  while (lVar6 = *(long *)(lVar6 + 0x10), lVar6 != 0) {
LAB_0165d704:
    if ((*(uint *)(lVar6 + 0x1c) & 3) == 2) goto LAB_0165d738;
  }
LAB_0165d6cc:
  Spill(this,puVar7,0);
LAB_0165d6dc:
  uVar9 = uVar9 + 1;
  if (uVar8 <= uVar9) {
    return;
  }
  lVar5 = *(long *)this;
  if (uVar8 != *(long *)(lVar5 + 0x90) - *(long *)(lVar5 + 0x88) >> 3) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","initial_range_count == data()->live_ranges().size()");
  }
  goto LAB_0165d5e8;
LAB_0165d738:
  uVar2 = *(uint *)(lVar6 + 0x18);
  iVar3 = **(int **)(puVar7 + 4);
  if ((int)uVar2 <= (int)(iVar3 + 2U & 0xfffffffe)) goto LAB_0165d6dc;
  uVar1 = uVar2 + 3;
  if (-1 < (int)uVar2) {
    uVar1 = uVar2;
  }
  uVar1 = uVar1 & 0xfffffffc;
  if (((int)uVar1 <= iVar3) || (*(int *)(*(long *)(puVar7 + 2) + 4) <= (int)uVar1))
  goto LAB_0165d6dc;
  uVar4 = FindOptimalSplitPos(this,iVar3 + 4U & 0xfffffffc,uVar1);
  SplitRangeAt(this,puVar7,uVar4);
  goto LAB_0165d6cc;
}

