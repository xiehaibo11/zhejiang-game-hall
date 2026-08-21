
/* cocos2d::TextRenderGroupItem::addIndexes() */

void __thiscall cocos2d::TextRenderGroupItem::addIndexes(TextRenderGroupItem *this)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  long lVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  long lVar9;
  
  lVar9 = *(long *)(this + 8);
  uVar1 = *(long *)(lVar9 + 0xf8) + (long)(*(int *)(this + 0x18) * 0xc);
  if ((*(ulong *)(lVar9 + 0x110) != 0) && (*(ulong *)(lVar9 + 0x110) < uVar1)) {
    if (*(long **)(lVar9 + 0x140) != (long *)0x0) {
      (**(code **)(**(long **)(lVar9 + 0x140) + 0x30))();
    }
    *(undefined8 *)(lVar9 + 0xf8) = 0;
  }
  if (*(ulong *)(lVar9 + 0xf0) < uVar1) {
    (**(code **)(*(long *)(lVar9 + 0xe0) + 0x10))
              (lVar9 + 0xe0,(long)((float)(int)((float)uVar1 * 0.0009765625) * 1024.0),1);
    if (*(long **)(lVar9 + 0x170) != (long *)0x0) {
      (**(code **)(**(long **)(lVar9 + 0x170) + 0x30))();
    }
  }
  iVar2 = *(int *)(this + 0x18);
  iVar3 = *(int *)(this + 0x1c);
  lVar5 = (long)iVar3;
  if (iVar3 < iVar2) {
    lVar9 = *(long *)(lVar9 + 0xe8);
    uVar6 = iVar3 * 6 | 1;
    puVar7 = (ushort *)(lVar9 + lVar5 * 0xc + 6);
    do {
      iVar8 = (int)lVar5;
      uVar4 = (ushort)(iVar8 << 2) | 1;
      puVar7[-3] = (ushort)(iVar8 << 2);
      *(ushort *)(lVar9 + (long)(int)uVar6 * 2) = uVar4;
      *puVar7 = uVar4;
      uVar4 = (ushort)(iVar8 << 2) | 2;
      lVar5 = lVar5 + 1;
      puVar7[-1] = uVar4;
      puVar7[1] = (ushort)(iVar8 << 2) | 3;
      puVar7[2] = uVar4;
      uVar6 = uVar6 + 6;
      puVar7 = puVar7 + 6;
    } while (lVar5 < iVar2);
    if (iVar3 < iVar2) {
      *(int *)(this + 0x1c) = iVar2;
      *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 2;
    }
  }
  return;
}

