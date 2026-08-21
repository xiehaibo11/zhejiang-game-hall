
/* dragonBones::DeformVertices* dragonBones::BaseObject::borrowObject<dragonBones::DeformVertices>()
    */

DeformVertices * dragonBones::BaseObject::borrowObject<dragonBones::DeformVertices>(void)

{
  int iVar1;
  BaseObject *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  DeformVertices *pDVar4;
  
  if (((DeformVertices::getTypeIndex()::typeIndex & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&DeformVertices::getTypeIndex()::typeIndex), iVar1 != 0)) {
    DeformVertices::getTypeIndex()::typeIndex = "N11dragonBones14DeformVerticesE";
    __cxa_guard_release(&DeformVertices::getTypeIndex()::typeIndex);
  }
  if (DAT_01d3dfd8 != (undefined8 *)0x0) {
    puVar2 = &DAT_01d3dfd8;
    puVar3 = DAT_01d3dfd8;
    do {
      if ((char *)puVar3[4] >= DeformVertices::getTypeIndex()::typeIndex) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(char *)puVar3[4] < DeformVertices::getTypeIndex()::typeIndex];
    } while (puVar3 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar2 != &DAT_01d3dfd8) &&
        ((char *)puVar2[4] <= DeformVertices::getTypeIndex()::typeIndex)) &&
       (puVar2[5] != puVar2[6])) {
      puVar3 = (undefined8 *)(puVar2[6] + -8);
      pDVar4 = (DeformVertices *)*puVar3;
      puVar2[6] = puVar3;
      pDVar4[0xc] = (DeformVertices)0x0;
      return pDVar4;
    }
  }
  this = operator_new(0x48,(nothrow_t *)&std::nothrow);
  if (this != (BaseObject *)0x0) {
    BaseObject(this);
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined ***)this = &PTR__DeformVertices_01c91f80;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    DeformVertices::_onClear((DeformVertices *)this);
  }
  return (DeformVertices *)this;
}

