
/* v8::internal::compiler::MapRef::GetFieldIndexFor(v8::internal::InternalIndex) const */

ulong __thiscall v8::internal::compiler::MapRef::GetFieldIndexFor(MapRef *this,long param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  Representation local_8 [8];
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    uVar9 = *(ulong *)**(undefined8 **)this;
    uVar1 = *(int *)((uVar9 & 0xffffffff00000000) +
                     (param_2 * 0xc00000000 + 0x1000000000 >> 0x20 | 3U) +
                    (ulong)*(uint *)(uVar9 + 0x17)) >> 1;
    uVar3 = uVar1 >> 0x13 & 0x3ff;
    iVar2 = (uint)*(byte *)(uVar9 + 3) - (uint)*(byte *)(uVar9 + 4);
    if ((int)uVar3 < iVar2) {
      uVar10 = (ulong)*(byte *)(uVar9 + 4) << 0x1c;
      iVar11 = (uVar3 + *(byte *)(uVar9 + 4)) * 4;
    }
    else {
      iVar11 = (uVar3 - iVar2) * 4 + 8;
      uVar10 = 0x20000000;
    }
    uVar1 = uVar1 >> 6 & 7;
    local_8[0] = SUB41(uVar1,0);
    if (4 < uVar1) {
      uVar5 = Representation::Mnemonic(local_8);
      PrintF("%s\n",uVar5);
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar9 = (ulong)((int)uVar3 < iVar2) << 0xd | (long)iVar2 << 0x10 | (long)iVar11 | uVar10 |
            *(ulong *)(&DAT_01a5e7b0 + (ulong)uVar1 * 8);
  }
  else {
    lVar4 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar4 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar4 + 0x10) + 0x18) != 0xa2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsMap()");
    }
    plVar8 = (long *)(*(long *)(lVar4 + 0x70) + 0x20);
    plVar6 = (long *)*plVar8;
    if (plVar6 != (long *)0x0) {
      plVar8 = (long *)(*(long *)(lVar4 + 0x70) + 0x20);
      do {
        while( true ) {
          plVar7 = plVar6;
          if ((int)plVar7[4] <= (int)param_2) break;
          plVar6 = (long *)*plVar7;
          plVar8 = plVar7;
          if ((long *)*plVar7 == (long *)0x0) goto LAB_01723244;
        }
        if ((int)param_2 <= (int)plVar7[4]) break;
        plVar8 = plVar7 + 1;
        plVar6 = (long *)*plVar8;
      } while ((long *)*plVar8 != (long *)0x0);
    }
LAB_01723244:
    uVar9 = *(ulong *)(*plVar8 + 0x40);
  }
  return uVar9;
}

