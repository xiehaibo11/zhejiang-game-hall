
/* dragonBones::DeformVertices* dragonBones::BaseObject::borrowObject<dragonBones::DeformVertices>()
    */

DeformVertices * dragonBones::BaseObject::borrowObject<dragonBones::DeformVertices>(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  DeformVertices *pDVar4;
  
  if (((DeformVertices::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&DeformVertices::getTypeIndex()::typeIndex), iVar1 != 0)) {
    DeformVertices::getTypeIndex()::typeIndex = "N11dragonBones14DeformVerticesE";
    __cxa_guard_release(&DeformVertices::getTypeIndex()::typeIndex);
  }
  if (DAT_01787788 != (undefined8 *)0x0) {
    puVar2 = &DAT_01787788;
    puVar3 = DAT_01787788;
    do {
      if ((char *)puVar3[4] >= DeformVertices::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < DeformVertices::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01787788) &&
        ((char *)puVar2[4] <= DeformVertices::getTypeIndex()::typeIndex)) &&
       (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pDVar4 = (DeformVertices *)*puVar3;
      puVar2[6] = puVar3;
      pDVar4[0xc] = (DeformVertices)0x0;
      return pDVar4;
    }
  }
  pDVar4 = operator_new(0x48,(nothrow_t *)&std::nothrow);
  if (pDVar4 != (DeformVertices *)0x0) {
    pDVar4[0xc] = (DeformVertices)0x0;
    *(undefined ***)pDVar4 = &PTR__DeformVertices_016d80d8;
    *(undefined8 *)(pDVar4 + 0x18) = 0;
    *(undefined8 *)(pDVar4 + 0x10) = 0;
    *(undefined8 *)(pDVar4 + 0x28) = 0;
    *(undefined8 *)(pDVar4 + 0x20) = 0;
    *(int *)(pDVar4 + 8) = _hashCode;
    _hashCode = _hashCode + 1;
    *(undefined8 *)(pDVar4 + 0x38) = 0;
    *(undefined8 *)(pDVar4 + 0x30) = 0;
    DeformVertices::_onClear(pDVar4);
  }
  return pDVar4;
}

