
/* v8::internal::Heap::CompactRetainedMaps(v8::internal::WeakArrayList) */

void __thiscall v8::internal::Heap::CompactRetainedMaps(Heap *this,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  ulong local_68;
  
  uVar1 = *(int *)(param_2 + 7) >> 1;
  local_68 = param_2;
  if (*(int *)(param_2 + 7) < 2) {
    iVar8 = 0;
    uVar6 = 0;
  }
  else {
    lVar9 = 0;
    uVar10 = 0;
    uVar6 = 0;
    iVar8 = 0;
    iVar11 = 4;
    while( true ) {
      uVar2 = *(uint *)(local_68 + 0xb + (lVar9 >> 0x20));
      iVar4 = iVar8;
      if (uVar2 != 3) {
        uVar3 = *(uint *)(local_68 + 0xb + (long)iVar11);
        if (uVar10 != uVar6) {
          uVar5 = local_68 & 0xffffffff00000000;
          WeakArrayList::Set((WeakArrayList *)&local_68,uVar6,uVar5 | uVar2,4);
          WeakArrayList::Set((WeakArrayList *)&local_68,uVar6 + 1,uVar5 | uVar3,4);
        }
        uVar6 = uVar6 + 2;
        iVar4 = iVar8 + 2;
        if ((long)*(int *)(this + 0xe4) <= (long)uVar10) {
          iVar4 = iVar8;
        }
      }
      iVar8 = iVar4;
      uVar10 = uVar10 + 2;
      if ((long)(int)uVar1 <= (long)uVar10) break;
      iVar11 = iVar11 + 8;
      lVar9 = lVar9 + 0x800000000;
    }
  }
  *(int *)(this + 0xe4) = iVar8;
  if ((int)uVar6 < (int)uVar1) {
    uVar7 = *(undefined8 *)(this + -0x87b0);
    uVar2 = uVar6;
    do {
      WeakArrayList::Set((WeakArrayList *)&local_68,uVar2,uVar7,4);
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  if (uVar6 != uVar1) {
    *(uint *)(local_68 + 7) = uVar6 << 1;
  }
  return;
}

