
/* v8::internal::RegExpBuilder::AddCharacter(unsigned short) */

void __thiscall v8::internal::RegExpBuilder::AddCharacter(RegExpBuilder *this,ushort param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  Zone *pZVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  long *plVar8;
  void *pvVar9;
  
  uVar3 = *(ushort *)(this + 0x18);
  if (uVar3 != 0) {
    *(undefined2 *)(this + 0x18) = 0;
    AddCharacterClassForDesugaring(this,(uint)uVar3);
  }
  plVar8 = *(long **)(this + 0x10);
  this[8] = (RegExpBuilder)0x0;
  if (plVar8 == (long *)0x0) {
    pZVar4 = *(Zone **)this;
    plVar8 = *(long **)(pZVar4 + 0x10);
    if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)plVar8) < 0x10) {
      plVar8 = (long *)Zone::NewExpand(pZVar4,0x10);
    }
    else {
      *(long **)(pZVar4 + 0x10) = plVar8 + 2;
    }
    pZVar4 = *(Zone **)this;
    lVar5 = *(long *)(pZVar4 + 0x10);
    if ((ulong)(*(long *)(pZVar4 + 0x18) - lVar5) < 8) {
      lVar5 = Zone::NewExpand(pZVar4,8);
    }
    else {
      *(long *)(pZVar4 + 0x10) = lVar5 + 8;
    }
    *plVar8 = lVar5;
    plVar8[1] = 4;
    *(long **)(this + 0x10) = plVar8;
  }
  uVar2 = *(uint *)(plVar8 + 1);
  uVar7 = *(uint *)((long)plVar8 + 0xc);
  if ((int)uVar7 < (int)uVar2) {
    pvVar9 = (void *)*plVar8;
  }
  else {
    pZVar4 = *(Zone **)this;
    uVar1 = uVar2 << 1 | 1;
    pvVar9 = *(void **)(pZVar4 + 0x10);
    uVar6 = (-(ulong)((uVar2 & 0x7fffffff) >> 0x1e) & 0xfffffffe00000000 | (ulong)uVar1 << 1) + 7 &
            0xfffffffffffffff8;
    if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)pvVar9) < uVar6) {
      pvVar9 = (void *)Zone::NewExpand(pZVar4,uVar6);
    }
    else {
      *(ulong *)(pZVar4 + 0x10) = (long)pvVar9 + uVar6;
    }
    uVar7 = *(uint *)((long)plVar8 + 0xc);
    if (0 < (int)uVar7) {
      MemCopy(pvVar9,(void *)*plVar8,(ulong)uVar7 << 1);
      uVar7 = *(uint *)((long)plVar8 + 0xc);
    }
    *plVar8 = (long)pvVar9;
    *(uint *)(plVar8 + 1) = uVar1;
  }
  *(uint *)((long)plVar8 + 0xc) = uVar7 + 1;
  *(ushort *)((long)pvVar9 + (long)(int)uVar7 * 2) = param_1;
  return;
}

