
/* v8::internal::Scope::Snapshot::Reparent(v8::internal::DeclarationScope*) */

void __thiscall v8::internal::Scope::Snapshot::Reparent(Snapshot *this,DeclarationScope *param_1)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  byte bVar9;
  long lVar10;
  
  lVar3 = *(long *)(param_1 + 0x18);
  lVar10 = *(long *)(this + 8);
  if (lVar3 != lVar10) {
    plVar4 = (long *)(lVar3 + 0x18);
    *(DeclarationScope **)(lVar3 + 8) = param_1;
    bVar9 = *(byte *)(lVar3 + 0x81) >> 6 & 1;
    lVar3 = *plVar4;
    if (*plVar4 != lVar10) {
      do {
        if (bVar9 != 0) {
          *(ushort *)(param_1 + 0x81) = *(ushort *)(param_1 + 0x81) | 0x40;
          lVar3 = *plVar4;
        }
        plVar4 = (long *)(lVar3 + 0x18);
        lVar10 = *(long *)(this + 8);
        *(DeclarationScope **)(lVar3 + 8) = param_1;
        bVar9 = *(byte *)(lVar3 + 0x81) >> 6 & 1;
        lVar3 = *plVar4;
      } while (*plVar4 != lVar10);
    }
    if (bVar9 != 0) {
      *(ushort *)(param_1 + 0x81) = *(ushort *)(param_1 + 0x81) | 0x40;
    }
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
    *plVar4 = 0;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(this + 8);
  }
  puVar6 = *(undefined8 **)(this + 0x10);
  uVar5 = *(ulong *)this & 0xfffffffffffffffe;
  if (*(undefined8 **)(uVar5 + 0x50) == puVar6) goto LAB_014a21d0;
  **(undefined8 **)(param_1 + 0x50) = *puVar6;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(uVar5 + 0x50);
  *(undefined8 **)(uVar5 + 0x50) = puVar6;
  *puVar6 = 0;
  if ((*(byte *)(uVar5 + 0x82) & 1) != 0) goto LAB_014a21d8;
  do {
    do {
      uVar5 = *(ulong *)(uVar5 + 8);
LAB_014a21d0:
    } while ((*(byte *)(uVar5 + 0x82) & 1) == 0);
LAB_014a21d8:
  } while ((*(char *)(uVar5 + 0x80) == '\x06') || (*(char *)(uVar5 + 0x80) == '\0'));
  plVar7 = *(long **)(this + 0x18);
  plVar4 = plVar7;
  if (plVar7 != *(long **)(uVar5 + 0x40)) {
    do {
      *(DeclarationScope **)*plVar4 = param_1;
      plVar4 = (long *)(*plVar4 + 0x18);
    } while (plVar4 != *(long **)(uVar5 + 0x40));
    plVar7 = *(long **)(this + 0x18);
    if (plVar4 != plVar7) {
      **(long **)(param_1 + 0x40) = *plVar7;
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(uVar5 + 0x40);
      *(long **)(uVar5 + 0x40) = plVar7;
      *plVar7 = 0;
      plVar7 = *(long **)(this + 0x18);
    }
  }
  *(long **)(uVar5 + 0x40) = plVar7;
  *plVar7 = 0;
  uVar5 = *(ulong *)this;
  if ((*(byte *)((uVar5 & 0xfffffffffffffffe) + 0x81) >> 1 & 1) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x81);
    uVar2 = uVar1 | 2;
    *(ushort *)(param_1 + 0x81) = uVar2;
    if ((((uVar1 & 1) == 0) && (param_1[0x80] != (DeclarationScope)0x1)) &&
       (param_1[0x80] != (DeclarationScope)0x4)) {
      uVar2 = uVar1 | 6;
      *(ushort *)(param_1 + 0x81) = uVar2;
      *(undefined4 *)(param_1 + 0x7c) = 3;
    }
    *(ushort *)(param_1 + 0x81) = uVar2 | 0x40;
    uVar5 = *(ulong *)this;
  }
  if ((uVar5 & 1) != 0) {
    uVar5 = uVar5 & 0xfffffffffffffffe;
    uVar1 = *(ushort *)(uVar5 + 0x81);
    uVar2 = uVar1 | 2;
    *(ushort *)(uVar5 + 0x81) = uVar2;
    uVar8 = uVar5;
    while ((uVar1 >> 8 & 1) == 0) {
      uVar8 = *(ulong *)(uVar8 + 8);
      uVar2 = *(ushort *)(uVar8 + 0x81);
      uVar1 = uVar2;
    }
    *(ushort *)(uVar8 + 0x81) = uVar2 | 2;
    if ((((uVar2 & 1) == 0) && (*(char *)(uVar8 + 0x80) != '\x01')) &&
       (*(char *)(uVar8 + 0x80) != '\x04')) {
      *(ushort *)(uVar8 + 0x81) = uVar2 | 6;
      *(undefined4 *)(uVar8 + 0x7c) = 3;
    }
    lVar3 = *(long *)(uVar5 + 8);
    *(ushort *)(uVar5 + 0x81) = *(ushort *)(uVar5 + 0x81) | 0x40;
    while ((lVar3 != 0 && ((*(ushort *)(lVar3 + 0x81) >> 6 & 1) == 0))) {
      *(ushort *)(lVar3 + 0x81) = *(ushort *)(lVar3 + 0x81) | 0x40;
      lVar3 = *(long *)(lVar3 + 8);
    }
  }
  *(ulong *)this = *(ulong *)this & 1;
  return;
}

