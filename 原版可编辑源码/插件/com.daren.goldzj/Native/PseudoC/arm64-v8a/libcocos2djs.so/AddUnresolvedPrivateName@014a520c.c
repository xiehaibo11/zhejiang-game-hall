
/* v8::internal::PrivateNameScopeIterator::AddUnresolvedPrivateName(v8::internal::VariableProxy*) */

void __thiscall
v8::internal::PrivateNameScopeIterator::AddUnresolvedPrivateName
          (PrivateNameScopeIterator *this,VariableProxy *param_1)

{
  Zone *pZVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  VariableProxy *pVVar7;
  undefined8 *puVar8;
  
  puVar8 = *(undefined8 **)(this + 0x10);
  uVar4 = puVar8[0x11];
  if (uVar4 < 8) {
    pZVar1 = (Zone *)*puVar8;
    puVar2 = *(undefined8 **)(pZVar1 + 0x10);
    if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)puVar2) < 0x30) {
      puVar2 = (undefined8 *)Zone::NewExpand(pZVar1,0x30);
    }
    else {
      *(undefined8 **)(pZVar1 + 0x10) = puVar2 + 6;
    }
    pZVar1 = (Zone *)*puVar8;
    *puVar2 = 0;
    puVar2[1] = puVar2;
    puVar3 = *(undefined8 **)(pZVar1 + 0x10);
    if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)puVar3) < 0xc0) {
      puVar3 = (undefined8 *)Zone::NewExpand(pZVar1,0xc0);
      puVar2[2] = puVar3;
    }
    else {
      *(undefined8 **)(pZVar1 + 0x10) = puVar3 + 0x18;
      puVar2[2] = puVar3;
    }
    if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Out of memory: HashMap::Initialize");
    }
    *(undefined4 *)(puVar2 + 3) = 8;
    *puVar3 = 0;
    if (1 < *(uint *)(puVar2 + 3)) {
      uVar4 = 1;
      lVar5 = 0x18;
      do {
        uVar4 = uVar4 + 1;
        *(undefined8 *)(puVar2[2] + lVar5) = 0;
        lVar5 = lVar5 + 0x18;
      } while (uVar4 < *(uint *)(puVar2 + 3));
    }
    *(undefined4 *)((long)puVar2 + 0x1c) = 0;
    puVar2[5] = 0;
    uVar4 = puVar8[0x11] & 7 | (ulong)puVar2;
    puVar8[0x11] = uVar4;
  }
  **(undefined8 **)((uVar4 & 0xfffffffffffffff8) + 8) = param_1;
  pVVar7 = param_1 + 0x10;
  lVar5 = *(long *)pVVar7;
  if ((lVar5 != 0) && ((*(byte *)(lVar5 + 5) >> 1 & 1) != 0)) {
    do {
      lVar6 = lVar5;
      lVar5 = *(long *)(lVar6 + 0x10);
      if (lVar5 == 0) break;
    } while ((*(byte *)(lVar5 + 5) >> 1 & 1) != 0);
    pVVar7 = (VariableProxy *)(lVar6 + 0x10);
  }
  *(VariableProxy **)((uVar4 & 0xfffffffffffffff8) + 8) = pVVar7;
  if (*this != (PrivateNameScopeIterator)0x0) {
    do {
      do {
        this = *(PrivateNameScopeIterator **)(this + 8);
      } while (((byte)this[0x82] & 1) == 0);
    } while ((this[0x80] == (PrivateNameScopeIterator)0x6) ||
            (this[0x80] == (PrivateNameScopeIterator)0x0));
    while ((*(ushort *)(this + 0x83) >> 0xd & 1) == 0) {
      *(ushort *)(this + 0x83) = *(ushort *)(this + 0x83) | 0x2000;
      this = *(PrivateNameScopeIterator **)(this + 8);
      if (this == (PrivateNameScopeIterator *)0x0) {
        return;
      }
      for (; ((((byte)this[0x82] & 1) == 0 || (this[0x80] == (PrivateNameScopeIterator)0x6)) ||
             (this[0x80] == (PrivateNameScopeIterator)0x0));
          this = *(PrivateNameScopeIterator **)(this + 8)) {
      }
    }
  }
  return;
}

