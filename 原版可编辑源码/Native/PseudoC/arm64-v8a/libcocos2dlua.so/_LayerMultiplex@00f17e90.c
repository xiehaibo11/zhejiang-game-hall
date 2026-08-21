
/* cocos2d::LayerMultiplex::~LayerMultiplex() */

void __thiscall cocos2d::LayerMultiplex::~LayerMultiplex(LayerMultiplex *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(this + 0x328);
  puVar2 = *(undefined8 **)(this + 0x330);
  *(undefined ***)this = &PTR__LayerMultiplex_01701720;
  puVar3 = puVar1;
  if (puVar1 != puVar2) {
    do {
      (**(code **)(*(long *)*puVar1 + 0x340))();
      puVar1 = puVar1 + 1;
    } while (puVar2 != puVar1);
    puVar3 = *(undefined8 **)(this + 0x328);
    puVar1 = *(undefined8 **)(this + 0x330);
    if (puVar3 != puVar1) {
      do {
        Ref::release((Ref *)*puVar3);
        puVar3 = puVar3 + 1;
      } while (puVar1 != puVar3);
      puVar1 = *(undefined8 **)(this + 0x328);
      puVar3 = puVar1;
    }
  }
  *(undefined8 **)(this + 0x330) = puVar3;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x330) = puVar1;
    operator_delete(puVar1);
  }
  Node::~Node((Node *)this);
  return;
}

