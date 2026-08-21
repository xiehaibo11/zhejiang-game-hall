
/* v8::internal::IdentityMapBase::DeleteIndex(int, void**) */

undefined8 __thiscall
v8::internal::IdentityMapBase::DeleteIndex(IdentityMapBase *this,int param_1,void **param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar8 = (ulong)(uint)param_1;
  if (param_2 != (void **)0x0) {
    *param_2 = *(void **)(*(long *)(this + 0x30) + (long)param_1 * 8);
  }
  uVar9 = *(ulong *)(*(long *)(this + 0x10) + -0x7cb0);
  *(ulong *)(*(long *)(this + 0x28) + (long)param_1 * 8) = uVar9;
  *(undefined8 *)(*(long *)(this + 0x30) + (long)param_1 * 8) = 0;
  iVar7 = *(int *)(this + 0x1c);
  *(int *)(this + 0x1c) = iVar7 + -1;
  if (((int)*(uint *)(this + 0x20) < 5) ||
     (uVar3 = *(uint *)(this + 0x20) >> 1, (int)uVar3 <= (iVar7 + -1) * 2)) {
    uVar12 = (long)*(int *)(this + 0x24) & (long)param_1 + 1U;
    uVar2 = *(ulong *)(*(long *)(this + 0x28) + uVar12 * 8);
    if (uVar2 != uVar9) {
      uVar11 = uVar12 & 0xffffffff;
      do {
        if (*(ulong *)(*(long *)(this + 0x10) + -0x7cb0) == uVar2) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","address != ReadOnlyRoots(heap_).not_mapped_symbol().ptr()");
        }
        uVar1 = base::hash_value(uVar2);
        uVar3 = *(uint *)(this + 0x24);
        iVar7 = (int)uVar8;
        iVar10 = (int)uVar11;
        uVar1 = uVar3 & uVar1;
        if (iVar7 < iVar10) {
          if (iVar7 < (int)uVar1) {
LAB_011fbb78:
            if ((int)uVar1 <= iVar10) goto LAB_011fbb24;
          }
          lVar4 = *(long *)(this + 0x28);
          uVar8 = -(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar8 << 3;
          lVar5 = uVar12 * 8;
          uVar6 = *(undefined8 *)(lVar4 + uVar8);
          *(undefined8 *)(lVar4 + uVar8) = *(undefined8 *)(lVar4 + lVar5);
          *(undefined8 *)(lVar4 + lVar5) = uVar6;
          lVar4 = *(long *)(this + 0x30);
          uVar6 = *(undefined8 *)(lVar4 + uVar8);
          *(undefined8 *)(lVar4 + uVar8) = *(undefined8 *)(lVar4 + lVar5);
          *(undefined8 *)(lVar4 + lVar5) = uVar6;
          uVar3 = *(uint *)(this + 0x24);
          uVar8 = uVar11;
        }
        else if ((int)uVar1 <= iVar7) goto LAB_011fbb78;
LAB_011fbb24:
        uVar3 = uVar3 & iVar10 + 1U;
        uVar11 = (ulong)uVar3;
        uVar12 = (ulong)(int)uVar3;
        uVar2 = *(ulong *)(*(long *)(this + 0x28) + (long)(int)uVar3 * 8);
      } while (uVar2 != uVar9);
    }
  }
  else {
    Resize(this,uVar3);
  }
  return 1;
}

