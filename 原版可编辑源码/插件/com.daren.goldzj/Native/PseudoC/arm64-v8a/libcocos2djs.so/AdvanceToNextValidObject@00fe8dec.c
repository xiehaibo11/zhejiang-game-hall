
/* v8::internal::LiveObjectRange<(v8::internal::LiveObjectIterationMode)0>::iterator::AdvanceToNextValidObject()
    */

void __thiscall
v8::internal::LiveObjectRange<(v8::internal::LiveObjectIterationMode)0>::iterator::
AdvanceToNextValidObject(iterator *this)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long local_48;
  
  do {
    if (*(uint *)(this + 0x30) <= *(uint *)(this + 0x34)) {
LAB_00fe8fb8:
      *(undefined8 *)(this + 0x50) = 0;
      return;
    }
    uVar7 = *(uint *)(this + 0x48);
    if (uVar7 == 0) {
      iVar2 = 0;
      local_48 = 0;
    }
    else {
      iVar2 = 0;
      local_48 = 0;
      do {
        uVar6 = (uVar7 & 0xaaaaaaaa) >> 1 | (uVar7 & 0x55555555) << 1;
        uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
        lVar5 = *(long *)(this + 0x40);
        uVar6 = (uint)LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
        uVar7 = uVar7 & (1 << (ulong)(uVar6 & 0x1f) ^ 0xffffffffU);
        *(uint *)(this + 0x48) = uVar7;
        if (uVar6 < 0x1f) {
          if ((uVar7 & 2 << (ulong)(uVar6 & 0x1f)) == 0) goto LAB_00fe8ea4;
LAB_00fe8ebc:
          puVar1 = (uint *)(lVar5 + (ulong)(uVar6 << 2));
          local_48 = (long)puVar1 + 1;
          uVar9 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1;
          iVar2 = HeapObject::SizeFromMap((HeapObject *)&local_48,uVar9);
          puVar4 = (uint *)((long)puVar1 + (long)iVar2 + -4);
          if (puVar1 != puVar4) {
            iVar3 = *(int *)(this + 0x34);
            uVar6 = (int)puVar4 - *(int *)this;
            uVar7 = uVar6 >> 7;
            if (uVar7 - iVar3 == 0) {
              uVar7 = *(uint *)(this + 0x48);
            }
            else {
              *(uint *)(this + 0x34) = uVar7;
              lVar5 = *(long *)(this + 0x38) + (ulong)((uVar7 - iVar3) * 0x80);
              *(long *)(this + 0x38) = lVar5;
              *(long *)(this + 0x40) = lVar5;
              uVar7 = *(uint *)(*(long *)(this + 0x28) + (ulong)uVar7 * 4);
              *(uint *)(this + 0x48) = uVar7;
            }
            *(uint *)(this + 0x48) = uVar7 & -2 << (ulong)(uVar6 >> 2 & 0x1f);
          }
          iVar3 = (int)local_48;
        }
        else {
          lVar8 = *(long *)(this + 0x38);
          uVar7 = *(int *)(this + 0x34) + 1;
          *(long *)(this + 0x38) = lVar8 + 0x80;
          *(uint *)(this + 0x34) = uVar7;
          if (uVar7 == *(uint *)(this + 0x30)) goto LAB_00fe8fb8;
          *(long *)(this + 0x40) = lVar8 + 0x80;
          uVar7 = *(uint *)(*(long *)(this + 0x28) + (ulong)uVar7 * 4);
          *(uint *)(this + 0x48) = uVar7;
          if ((uVar7 & 1) != 0) goto LAB_00fe8ebc;
LAB_00fe8ea4:
          uVar9 = 0;
          iVar3 = (int)local_48;
        }
        if (iVar3 != 0) {
          iVar3 = (int)uVar9;
          if (((iVar3 != *(int *)(this + 8)) && (iVar3 != *(int *)(this + 0x10))) &&
             (iVar3 != *(int *)(this + 0x18))) {
            if (*(int *)(this + 0x48) != 0) goto LAB_00fe8e18;
            break;
          }
          local_48 = 0;
        }
        uVar7 = *(uint *)(this + 0x48);
      } while (uVar7 != 0);
    }
    lVar5 = *(long *)(this + 0x38);
    uVar7 = *(int *)(this + 0x34) + 1;
    *(long *)(this + 0x38) = lVar5 + 0x80;
    *(uint *)(this + 0x34) = uVar7;
    if (uVar7 != *(uint *)(this + 0x30)) {
      *(long *)(this + 0x40) = lVar5 + 0x80;
      *(undefined4 *)(this + 0x48) = *(undefined4 *)(*(long *)(this + 0x28) + (ulong)uVar7 * 4);
    }
LAB_00fe8e18:
    if ((int)local_48 != 0) {
      *(long *)(this + 0x50) = local_48;
      *(int *)(this + 0x58) = iVar2;
      return;
    }
  } while( true );
}

