
/* v8::internal::LiveObjectRange<(v8::internal::LiveObjectIterationMode)1>::iterator::AdvanceToNextValidObject()
    */

void __thiscall
v8::internal::LiveObjectRange<(v8::internal::LiveObjectIterationMode)1>::iterator::
AdvanceToNextValidObject(iterator *this)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long local_50;
  long local_48;
  
  if (*(uint *)(this + 0x34) < *(uint *)(this + 0x30)) {
    uVar5 = *(uint *)(this + 0x48);
    do {
      local_48 = 0;
      if (uVar5 == 0) {
        local_48 = 0;
        iVar2 = 0;
      }
      else {
        do {
          uVar8 = (uVar5 & 0xaaaaaaaa) >> 1 | (uVar5 & 0x55555555) << 1;
          uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
          lVar7 = *(long *)(this + 0x40);
          uVar8 = (uint)LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10);
          uVar5 = uVar5 & (1 << (ulong)(uVar8 & 0x1f) ^ 0xffffffffU);
          *(uint *)(this + 0x48) = uVar5;
          if (uVar8 < 0x1f) {
            uVar9 = 2 << (ulong)(uVar8 & 0x1f);
          }
          else {
            lVar6 = *(long *)(this + 0x38);
            uVar5 = *(int *)(this + 0x34) + 1;
            *(long *)(this + 0x38) = lVar6 + 0x80;
            *(uint *)(this + 0x34) = uVar5;
            if (uVar5 == *(uint *)(this + 0x30)) goto LAB_00fee0c8;
            *(long *)(this + 0x40) = lVar6 + 0x80;
            uVar5 = *(uint *)(*(long *)(this + 0x28) + (ulong)uVar5 * 4);
            uVar9 = 1;
            *(uint *)(this + 0x48) = uVar5;
          }
          puVar1 = (uint *)(lVar7 + (ulong)(uVar8 << 2));
          if ((uVar5 & uVar9) == 0) {
            local_48 = (long)puVar1 + 1;
            uVar10 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1;
            iVar2 = HeapObject::SizeFromMap((HeapObject *)&local_48,uVar10);
LAB_00fee010:
            iVar3 = (int)local_48;
          }
          else {
            local_50 = (long)puVar1 + 1;
            uVar10 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1;
            iVar2 = HeapObject::SizeFromMap((HeapObject *)&local_50,uVar10);
            puVar4 = (uint *)((long)puVar1 + (long)iVar2 + -4);
            if (puVar1 == puVar4) goto LAB_00fee010;
            iVar3 = *(int *)(this + 0x34);
            uVar8 = (int)puVar4 - *(int *)this;
            uVar5 = uVar8 >> 7;
            if (uVar5 - iVar3 == 0) {
              uVar5 = *(uint *)(this + 0x48);
            }
            else {
              *(uint *)(this + 0x34) = uVar5;
              lVar7 = *(long *)(this + 0x38) + (ulong)((uVar5 - iVar3) * 0x80);
              *(long *)(this + 0x38) = lVar7;
              *(long *)(this + 0x40) = lVar7;
              uVar5 = *(uint *)(*(long *)(this + 0x28) + (ulong)uVar5 * 4);
              *(uint *)(this + 0x48) = uVar5;
            }
            *(uint *)(this + 0x48) = uVar5 & -2 << (ulong)(uVar8 >> 2 & 0x1f);
            iVar3 = (int)local_48;
          }
          if (iVar3 != 0) {
            iVar3 = (int)uVar10;
            if (((iVar3 != *(int *)(this + 8)) && (iVar3 != *(int *)(this + 0x10))) &&
               (iVar3 != *(int *)(this + 0x18))) {
              uVar5 = *(uint *)(this + 0x48);
              if (uVar5 != 0) goto LAB_00fee0a0;
              break;
            }
            local_48 = 0;
          }
          uVar5 = *(uint *)(this + 0x48);
        } while (uVar5 != 0);
      }
      lVar7 = *(long *)(this + 0x38);
      uVar5 = *(int *)(this + 0x34) + 1;
      *(long *)(this + 0x38) = lVar7 + 0x80;
      *(uint *)(this + 0x34) = uVar5;
      if (uVar5 == *(uint *)(this + 0x30)) {
        uVar5 = 0;
LAB_00fee0a0:
        iVar3 = (int)local_48;
      }
      else {
        *(long *)(this + 0x40) = lVar7 + 0x80;
        uVar5 = *(uint *)(*(long *)(this + 0x28) + (ulong)uVar5 * 4);
        *(uint *)(this + 0x48) = uVar5;
        iVar3 = (int)local_48;
      }
      if (iVar3 != 0) {
        *(long *)(this + 0x50) = local_48;
        *(int *)(this + 0x58) = iVar2;
        return;
      }
    } while (*(uint *)(this + 0x34) < *(uint *)(this + 0x30));
  }
LAB_00fee0c8:
  *(undefined8 *)(this + 0x50) = 0;
  return;
}

