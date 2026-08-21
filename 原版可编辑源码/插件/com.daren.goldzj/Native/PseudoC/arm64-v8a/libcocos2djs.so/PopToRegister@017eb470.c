
/* v8::internal::wasm::LiftoffAssembler::PopToRegister(v8::internal::wasm::LiftoffRegList) */

ulong __thiscall
v8::internal::wasm::LiftoffAssembler::PopToRegister(LiftoffAssembler *this,ulong param_2)

{
  ulong *puVar1;
  undefined4 uVar2;
  char cVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 local_80;
  uint local_7f;
  int iStack_7b;
  undefined4 uStack_77;
  undefined4 uStack_73;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar6 = *(long *)(this + 0x1d0);
  pcVar7 = (char *)(lVar6 + -0xc);
  cVar3 = *pcVar7;
  bVar4 = *(byte *)(lVar6 + -0xb);
  uVar12 = *(uint *)(lVar6 + -8);
  uVar2 = *(undefined4 *)(lVar6 + -4);
  *(char **)(this + 0x1d0) = pcVar7;
  if (cVar3 != '\x02') {
    if (cVar3 == '\x01') {
      iVar11 = *(int *)(this + (ulong)(byte)uVar12 * 4 + 0x248);
      uVar9 = (ulong)uVar12 & 0xff;
      *(int *)(this + (ulong)(byte)uVar12 * 4 + 0x248) = iVar11 + -1;
      if (iVar11 + -1 == 0) {
        *(ulong *)(this + 0x240) =
             *(ulong *)(this + 0x240) & (1L << ((ulong)uVar12 & 0x3f) ^ 0xffffffffffffffffU);
      }
    }
    else {
      if (cVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      puVar1 = &DAT_01a634d8;
      if (1 < bVar4 - 3) {
        puVar1 = &DAT_01a634d0;
      }
      uVar9 = *puVar1 & (param_2 ^ 0xffffffffffffffff);
      uVar10 = uVar9 & (*(ulong *)(this + 0x240) ^ 0xffffffffffffffff);
      if (uVar10 == 0) {
        uVar8 = *(ulong *)(this + 0x338);
        uVar10 = uVar9 & (uVar8 ^ 0xffffffffffffffff);
        if (uVar10 == 0) {
          uVar8 = 0;
          *(undefined8 *)(this + 0x338) = 0;
          uVar10 = uVar9;
        }
        uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar9 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20);
        uVar10 = 1L << (uVar9 & 0x3f);
        *(ulong *)(this + 0x338) = uVar10 | uVar8;
        iVar11 = *(int *)(this + uVar9 * 4 + 0x248);
        lVar6 = *(long *)(this + 0x1c8);
        uVar12 = (int)((ulong)((long)pcVar7 - lVar6) >> 2) * -0x55555555;
        while( true ) {
          do {
            do {
              uVar12 = uVar12 - 1;
              pcVar7 = (char *)(lVar6 + (ulong)uVar12 * 0xc);
            } while (*pcVar7 != '\x01');
          } while ((uint)*(byte *)(lVar6 + (ulong)uVar12 * 0xc + 4) != (uint)uVar9);
          Spill(this,*(undefined4 *)(pcVar7 + 8),uVar9,pcVar7[1]);
          iVar11 = iVar11 + -1;
          *pcVar7 = '\0';
          if (iVar11 == 0) break;
          lVar6 = *(long *)(this + 0x1c8);
        }
        *(undefined4 *)(this + uVar9 * 4 + 0x248) = 0;
        *(ulong *)(this + 0x240) = *(ulong *)(this + 0x240) & (uVar10 ^ 0xffffffffffffffff);
      }
      else {
        uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar9 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20);
      }
      Fill(this,uVar9,uVar2,(uint)bVar4);
    }
    goto LAB_017eb738;
  }
  uVar9 = (ulong)~(uint)param_2 & 0x13f8ffff;
  uVar10 = uVar9 & (*(ulong *)(this + 0x240) ^ 0xffffffffffffffff);
  if (uVar10 == 0) {
    uVar8 = *(ulong *)(this + 0x338);
    uVar10 = uVar9 & (uVar8 ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      uVar8 = 0;
      *(undefined8 *)(this + 0x338) = 0;
      uVar10 = uVar9;
    }
    uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
    uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
    uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
    uVar9 = LZCOUNT((uVar10 >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10) << 0x20);
    uVar10 = 1L << (uVar9 & 0x3f);
    *(ulong *)(this + 0x338) = uVar10 | uVar8;
    iVar11 = *(int *)(this + uVar9 * 4 + 0x248);
    lVar6 = *(long *)(this + 0x1c8);
    uVar13 = (int)((ulong)((long)pcVar7 - lVar6) >> 2) * -0x55555555;
    while( true ) {
      do {
        do {
          uVar13 = uVar13 - 1;
          pcVar7 = (char *)(lVar6 + (ulong)uVar13 * 0xc);
        } while (*pcVar7 != '\x01');
      } while ((uint)*(byte *)(lVar6 + (ulong)uVar13 * 0xc + 4) != (uint)uVar9);
      Spill(this,*(undefined4 *)(pcVar7 + 8),uVar9,pcVar7[1]);
      iVar11 = iVar11 + -1;
      *pcVar7 = '\0';
      if (iVar11 == 0) break;
      lVar6 = *(long *)(this + 0x1c8);
    }
    *(undefined4 *)(this + uVar9 * 4 + 0x248) = 0;
    *(ulong *)(this + 0x240) = *(ulong *)(this + 0x240) & (uVar10 ^ 0xffffffffffffffff);
    if (bVar4 != 1) goto LAB_017eb710;
LAB_017eb55c:
    iStack_7b = 0;
    local_80 = 1;
  }
  else {
    uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
    uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
    uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
    uVar9 = LZCOUNT((uVar10 >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10) << 0x20);
    if (bVar4 == 1) goto LAB_017eb55c;
LAB_017eb710:
    iStack_7b = (int)uVar12 >> 0x1f;
    local_80 = 2;
  }
  uStack_73 = 0;
  uStack_77 = 0;
  local_7f = uVar12;
  LoadConstant(this,uVar9,&local_80,0x13);
LAB_017eb738:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

