
/* v8::internal::ConsStringIterator::Search(int*) */

ulong __thiscall v8::internal::ConsStringIterator::Search(ConsStringIterator *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  
  iVar1 = *(int *)(this + 0x110);
  iVar5 = 0;
  *(undefined8 *)(this + 0x108) = 0x100000001;
  *(ulong *)this = *(ulong *)(this + 0x100);
  uVar8 = *(ulong *)(this + 0x100);
  do {
    uVar9 = uVar8 & 0xffffffff00000000;
    uVar4 = uVar9 | *(uint *)(uVar8 + 0xb);
    iVar7 = *(int *)(uVar4 + 7) + iVar5;
    if (iVar1 < iVar7) {
      uVar6 = *(uint *)(this + 0x108);
      if ((*(ushort *)((uVar9 | *(uint *)(uVar4 - 1)) + 7) & 7) != 1) {
        if (*(int *)(this + 0x10c) < (int)uVar6) {
          *(uint *)(this + 0x10c) = uVar6;
        }
LAB_0113950c:
        *(int *)(this + 0x110) = iVar7;
        *param_1 = iVar1 - iVar5;
        return uVar4;
      }
      *(uint *)(this + 0x108) = uVar6 + 1;
    }
    else {
      uVar4 = uVar9 | *(uint *)(uVar8 + 0xf);
      iVar5 = iVar7;
      if ((*(ushort *)((uVar9 | *(uint *)(uVar4 - 1)) + 7) & 7) != 1) {
        iVar3 = *(int *)(uVar4 + 7);
        if (iVar3 == 0) {
          *(undefined4 *)(this + 0x108) = 0;
          return 0;
        }
        iVar2 = *(int *)(this + 0x108);
        if (*(int *)(this + 0x10c) < iVar2) {
          *(int *)(this + 0x10c) = iVar2;
        }
        *(int *)(this + 0x108) = iVar2 + -1;
        iVar7 = iVar7 + iVar3;
        goto LAB_0113950c;
      }
      uVar6 = *(int *)(this + 0x108) + 0x1f;
    }
    *(ulong *)(this + (ulong)(uVar6 & 0x1f) * 8) = uVar4;
    uVar8 = uVar4;
  } while( true );
}

