
/* v8::internal::CompilationCacheTable::Age() */

void __thiscall v8::internal::CompilationCacheTable::Age(CompilationCacheTable *this)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  ulong local_58;
  
  uVar5 = *(ulong *)this;
  if ((int)*(uint *)(uVar5 + 0xf) >> 1 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)((uVar5 & 0xffffffff00000000) + 0xa8);
  lVar7 = (long)((ulong)*(uint *)(uVar5 + 0xf) << 0x20) >> 0x21;
  lVar8 = 0x1400000000;
  lVar9 = 0x1000000000;
  iVar10 = 0x18;
  do {
    lVar7 = lVar7 + -1;
    lVar11 = (long)(iVar10 + -0xc);
    lVar2 = uVar5 + 7;
    if ((*(uint *)(lVar2 + lVar11) & 1) == 0) {
LAB_0111a8f4:
      uVar3 = *(int *)(lVar2 + (iVar10 + -8)) - 2;
      if (uVar3 < 2) {
        *(undefined4 *)(uVar5 + (long)(iVar10 + -4) + -1) = uVar1;
        lVar2 = (long)(iVar10 + -8) + *(long *)this;
LAB_0111a920:
        *(undefined4 *)(lVar2 + 7) = uVar1;
        *(uint *)(*(long *)this + 7) = *(uint *)(*(long *)this + 7) - 2 & 0xfffffffe;
        *(uint *)(*(long *)this + 0xb) = *(uint *)(*(long *)this + 0xb) + 2 & 0xfffffffe;
      }
      else {
        *(uint *)(uVar5 + (long)iVar10 + -1) = uVar3 & 0xfffffffe;
      }
    }
    else {
      local_58 = uVar5 & 0xffffffff00000000;
      uVar4 = local_58 | 7;
      if (*(short *)(uVar4 + *(uint *)((local_58 | *(uint *)(lVar2 + lVar11)) - 1)) == 0x42)
      goto LAB_0111a8f4;
      if (((*(uint *)(lVar11 + lVar2) & 1) != 0) &&
         (*(ushort *)(uVar4 + *(uint *)((local_58 | *(uint *)(lVar11 + lVar2)) - 1)) - 0x76 < 0xf))
      {
        uVar5 = local_58 | *(uint *)(lVar2 + (iVar10 + -8));
        uVar3 = *(uint *)(uVar5 + 3);
        if ((((uVar3 & 1) == 0) || (*(short *)(uVar4 + *(uint *)((local_58 | uVar3) - 1)) != 0x86))
           && ((uVar3 = *(uint *)(uVar5 + 3), (uVar3 & 1) == 0 ||
               (*(short *)(uVar4 + *(uint *)((local_58 | uVar3) - 1)) != 0x61)))) goto LAB_0111aa74;
        uVar6 = local_58 | *(uint *)(uVar5 + 0xf);
        if ((*(short *)(uVar4 + *(uint *)(uVar6 - 1)) == 0x5b) &&
           (*(short *)(uVar4 + *(uint *)((local_58 | *(uint *)(uVar6 + 0x13)) - 1)) == 0x86)) {
          uVar3 = *(uint *)(uVar6 + 0xf);
        }
        else {
          uVar3 = *(uint *)(uVar5 + 3);
          if (((uVar3 & 1) == 0) || (*(short *)(uVar4 + *(uint *)((local_58 | uVar3) - 1)) != 0x86))
          {
            uVar3 = *(uint *)((local_58 | *(uint *)(uVar5 + 3)) + 3);
          }
          else {
            uVar3 = *(uint *)(uVar5 + 3);
          }
        }
        local_58 = local_58 | uVar3;
        uVar5 = BytecodeArray::IsOld((BytecodeArray *)&local_58);
        if ((uVar5 & 1) == 0) goto LAB_0111aa74;
        *(undefined4 *)(lVar11 + *(long *)this + 7) = uVar1;
        *(undefined4 *)(*(long *)this + (lVar9 >> 0x20) + 7) = uVar1;
        lVar2 = *(long *)this + (lVar8 >> 0x20);
        goto LAB_0111a920;
      }
    }
LAB_0111aa74:
    if (lVar7 == 0) {
      return;
    }
    uVar5 = *(ulong *)this;
    lVar8 = lVar8 + 0xc00000000;
    lVar9 = lVar9 + 0xc00000000;
    iVar10 = iVar10 + 0xc;
  } while( true );
}

