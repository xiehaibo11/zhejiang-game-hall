
/* v8::internal::compiler::ValueNumberingReducer::Grow() */

void __thiscall v8::internal::compiler::ValueNumberingReducer::Grow(ValueNumberingReducer *this)

{
  void *__s;
  ulong uVar1;
  Zone *this_00;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  Node *pNVar6;
  Node *pNVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  lVar8 = *(long *)(this + 0x10);
  this_00 = *(Zone **)(this + 0x20);
  *(long *)(this + 0x10) = lVar8 << 1;
  __s = *(void **)(this_00 + 0x10);
  puVar9 = *(undefined8 **)(this + 8);
  uVar1 = lVar8 * 0x10;
  if (uVar1 < (ulong)(*(long *)(this_00 + 0x18) - (long)__s) ||
      uVar1 - (*(long *)(this_00 + 0x18) - (long)__s) == 0) {
    *(void **)(this_00 + 0x10) = (void *)((long)__s + uVar1);
  }
  else {
    __s = (void *)Zone::NewExpand(this_00,uVar1);
  }
  *(void **)(this + 8) = __s;
  memset(__s,0,*(long *)(this + 0x10) << 3);
  *(undefined8 *)(this + 0x18) = 0;
  if (lVar8 == 0) {
    return;
  }
  lVar2 = *(long *)(this + 0x10);
  lVar10 = 0;
  pNVar7 = (Node *)*puVar9;
  do {
    if (pNVar7 != (Node *)0x0) {
      uVar4 = (byte)pNVar7[0x17] & 0xf;
      pNVar6 = pNVar7 + 0x20;
      if (uVar4 == 0xf) {
        uVar4 = *(uint *)(*(long *)pNVar6 + 8);
        pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
      }
      if (((int)uVar4 < 1) || (*(long *)pNVar6 != 0)) {
        uVar1 = NodeProperties::HashCode(pNVar7);
        lVar3 = *(long *)(this + 8);
        uVar1 = uVar1 & lVar2 - 1U;
        puVar5 = (undefined8 *)(lVar3 + uVar1 * 8);
        if ((Node *)*puVar5 != pNVar7) {
          if ((Node *)*puVar5 != (Node *)0x0) {
            do {
              uVar1 = uVar1 + 1 & lVar2 - 1U;
              pNVar6 = *(Node **)(lVar3 + uVar1 * 8);
              if (pNVar6 == pNVar7) goto LAB_0130c974;
            } while (pNVar6 != (Node *)0x0);
            puVar5 = (undefined8 *)(lVar3 + uVar1 * 8);
          }
          *puVar5 = pNVar7;
          *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
        }
      }
    }
LAB_0130c974:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar8) {
      return;
    }
    pNVar7 = (Node *)puVar9[lVar10];
  } while( true );
}

