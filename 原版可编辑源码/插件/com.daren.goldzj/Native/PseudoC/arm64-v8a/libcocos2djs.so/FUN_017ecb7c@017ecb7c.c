
void FUN_017ecb7c(long param_1)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  LiftoffAssembler *pLVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 local_80;
  long local_7f;
  undefined8 local_77;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar8 = *(ulong *)(param_1 + 0x340);
  uVar9 = uVar8;
  if (uVar8 != 0) {
    do {
      uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20);
      uVar12 = 1L << (uVar11 & 0x3f);
      if (((uVar12 & uVar8) != 0) && (*(int *)(param_1 + uVar11 * 4 + 0x250) == 0)) {
        do {
          pbVar1 = (byte *)(param_1 + uVar11 * 2);
          v8::internal::wasm::LiftoffAssembler::Move
                    (*(LiftoffAssembler **)(param_1 + 0x350),uVar11,*pbVar1,pbVar1[1]);
          *(ulong *)(param_1 + 0x340) =
               *(ulong *)(param_1 + 0x340) & (1L << (uVar11 & 0x3f) ^ 0xffffffffffffffffU);
          lVar2 = param_1 + (ulong)*pbVar1 * 4;
          iVar5 = *(int *)(lVar2 + 0x250) + -1;
          *(int *)(lVar2 + 0x250) = iVar5;
          if (iVar5 != 0) break;
          uVar11 = (ulong)*pbVar1;
        } while ((*(ulong *)(param_1 + 0x340) >> (uVar11 & 0x3f) & 1) != 0);
      }
      uVar9 = uVar9 & (uVar12 ^ 0xffffffffffffffff);
      if (uVar9 == 0) break;
      uVar8 = *(ulong *)(param_1 + 0x340);
    } while( true );
  }
  pLVar7 = *(LiftoffAssembler **)(param_1 + 0x350);
  if (*(long *)(pLVar7 + 0x1d0) == *(long *)(pLVar7 + 0x1c8)) {
    uVar10 = 0;
    uVar9 = *(ulong *)(param_1 + 0x340);
  }
  else {
    uVar10 = *(uint *)(*(long *)(pLVar7 + 0x1d0) + -4);
    uVar9 = *(ulong *)(param_1 + 0x340);
  }
  if (uVar9 == 0) {
LAB_017ecd50:
    uVar9 = *(ulong *)(param_1 + 0x348);
    if (uVar9 != 0) {
      lVar2 = param_1 + 0x78;
      do {
        uVar8 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20);
        switch(*(undefined1 *)(lVar2 + uVar8 * 8)) {
        case 0:
          lVar3 = lVar2 + uVar8 * 8;
          pLVar7 = *(LiftoffAssembler **)(param_1 + 0x350);
          iVar5 = *(int *)(lVar3 + 4);
          if (*(char *)(lVar3 + 1) == '\x02') {
            local_7f = (long)iVar5;
            local_80 = 2;
            local_77 = 0;
          }
          else {
            local_80 = 1;
            *(undefined4 *)((undefined8 *)((ulong)&local_80 | 5) + 1) = 0;
            *(undefined8 *)((ulong)&local_80 | 5) = 0;
            local_7f = CONCAT44(local_7f._4_4_,iVar5);
          }
          v8::internal::wasm::LiftoffAssembler::LoadConstant(pLVar7,uVar8,&local_80,0x13);
          break;
        case 1:
          lVar3 = lVar2 + uVar8 * 8;
          v8::internal::wasm::LiftoffAssembler::Fill
                    (*(LiftoffAssembler **)(param_1 + 0x350),uVar8,*(undefined4 *)(lVar3 + 4),
                     *(undefined1 *)(lVar3 + 1));
          break;
        case 2:
        case 3:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        uVar9 = uVar9 & (1L << (uVar8 & 0x3f) ^ 0xffffffffffffffffU);
      } while (uVar9 != 0);
    }
    *(undefined8 *)(param_1 + 0x348) = 0;
    if (*(long *)(lVar6 + 0x28) == local_68) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  do {
    uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar8 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
    pbVar1 = (byte *)(param_1 + uVar8 * 2);
    uVar10 = uVar10 + 8;
    v8::internal::wasm::LiftoffAssembler::Spill(pLVar7,uVar10,*pbVar1,pbVar1[1]);
    uVar9 = 1L << (uVar8 & 0x3f);
    if ((*(ulong *)(param_1 + 0x348) & uVar9) == 0) {
      bVar4 = pbVar1[1];
      *(ulong *)(param_1 + 0x348) = *(ulong *)(param_1 + 0x348) | uVar9;
      *(ulong *)(param_1 + 0x78 + uVar8 * 8) = (ulong)bVar4 << 8 | (ulong)uVar10 << 0x20 | 1;
    }
    *(ulong *)(param_1 + 0x340) = *(ulong *)(param_1 + 0x340) & (uVar9 ^ 0xffffffffffffffff);
    lVar2 = param_1 + (ulong)*pbVar1 * 4;
    iVar5 = *(int *)(lVar2 + 0x250) + -1;
    *(int *)(lVar2 + 0x250) = iVar5;
    if (iVar5 == 0) {
      bVar4 = *pbVar1;
      while( true ) {
        uVar8 = (ulong)bVar4;
        uVar9 = *(ulong *)(param_1 + 0x340);
        if ((uVar9 >> (uVar8 & 0x3f) & 1) == 0) break;
        pbVar1 = (byte *)(param_1 + uVar8 * 2);
        v8::internal::wasm::LiftoffAssembler::Move
                  (*(LiftoffAssembler **)(param_1 + 0x350),uVar8,*pbVar1,pbVar1[1]);
        *(ulong *)(param_1 + 0x340) =
             *(ulong *)(param_1 + 0x340) & (1L << (uVar8 & 0x3f) ^ 0xffffffffffffffffU);
        lVar2 = param_1 + (ulong)*pbVar1 * 4;
        iVar5 = *(int *)(lVar2 + 0x250) + -1;
        *(int *)(lVar2 + 0x250) = iVar5;
        if (iVar5 != 0) goto LAB_017ecce4;
        bVar4 = *pbVar1;
      }
    }
    else {
LAB_017ecce4:
      uVar9 = *(ulong *)(param_1 + 0x340);
    }
    if (uVar9 == 0) goto LAB_017ecd50;
    pLVar7 = *(LiftoffAssembler **)(param_1 + 0x350);
  } while( true );
}

