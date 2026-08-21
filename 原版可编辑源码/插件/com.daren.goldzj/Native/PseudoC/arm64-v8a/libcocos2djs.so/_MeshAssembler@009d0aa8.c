
/* cocos2d::renderer::MeshAssembler::~MeshAssembler() */

void __thiscall cocos2d::renderer::MeshAssembler::~MeshAssembler(MeshAssembler *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
                    /* try { // try from 009d0acc to 00ad0ad7 has its CatchHandler @ 009d0c90 */
  *(undefined ***)this = &PTR__MeshAssembler_01c6ba80;
  if (*(Ref **)(this + 0x70) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x70));
  }
                    /* try { // try from 009d0ad8 to 00ad0aeb has its CatchHandler @ 009d0c8c */
  *(undefined ***)(this + 0x78) = &PTR__RenderDataList_01c69758;
  puVar3 = *(undefined8 **)(this + 0x88);
  if (puVar3 != (undefined8 *)0x0) {
                    /* try { // try from 009d0af4 to 00ad0b07 has its CatchHandler @ 009d0cb0 */
    puVar2 = *(undefined8 **)(this + 0x90);
    puVar1 = puVar3;
    if (puVar2 != puVar3) {
      do {
        puVar2 = puVar2 + -7;
        (**(code **)*puVar2)(puVar2);
                    /* try { // try from 009d0b14 to 00ad0c13 has its CatchHandler @ 009d0cd8 */
      } while (puVar3 != puVar2);
      puVar1 = *(undefined8 **)(this + 0x88);
    }
    *(undefined8 **)(this + 0x90) = puVar3;
    operator_delete(puVar1);
  }
  Ref::~Ref((Ref *)(this + 0x78));
  CustomAssembler::~CustomAssembler((CustomAssembler *)this);
  return;
}

