
/* cocos2d::Vector<cocos2d::MeshVertexData*>::~Vector() */

void __thiscall
cocos2d::Vector<cocos2d::MeshVertexData*>::~Vector(Vector<cocos2d::MeshVertexData*> *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d3f020 with catch @ 00d3f090
                        */
  puVar2 = *(undefined8 **)this;
  puVar1 = *(undefined8 **)(this + 8);
  if (puVar2 != puVar1) {
    do {
      Ref::release((Ref *)*puVar2);
      puVar2 = puVar2 + 1;
    } while (puVar1 != puVar2);
    puVar2 = *(undefined8 **)this;
  }
  *(undefined8 **)(this + 8) = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 8) = puVar2;
    operator_delete(puVar2);
    return;
  }
  return;
}

