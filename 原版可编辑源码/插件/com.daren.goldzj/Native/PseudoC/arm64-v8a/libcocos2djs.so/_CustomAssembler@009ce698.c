
/* cocos2d::renderer::CustomAssembler::~CustomAssembler() */

void __thiscall cocos2d::renderer::CustomAssembler::~CustomAssembler(CustomAssembler *this)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  InputAssembler *this_00;
  undefined8 *puVar4;
  ulong uVar5;
  
  puVar3 = *(undefined8 **)(this + 0x38);
  lVar1 = *(long *)(this + 0x40);
  *(undefined ***)this = &PTR__CustomAssembler_01c6b5c0;
  if (lVar1 - (long)puVar3 != 0) {
    uVar5 = 0;
    this_00 = (InputAssembler *)*puVar3;
    while( true ) {
      if (this_00 != (InputAssembler *)0x0) {
        InputAssembler::~InputAssembler(this_00);
        operator_delete(this_00);
      }
      uVar5 = uVar5 + 1;
      if ((ulong)(lVar1 - (long)puVar3 >> 3) <= uVar5) break;
      this_00 = *(InputAssembler **)(*(long *)(this + 0x38) + uVar5 * 8);
    }
    puVar3 = *(undefined8 **)(this + 0x38);
  }
  puVar4 = *(undefined8 **)(this + 0x50);
  *(undefined8 **)(this + 0x40) = puVar3;
  if (puVar4 != *(undefined8 **)(this + 0x58)) {
    do {
      Ref::release((Ref *)*puVar4);
      puVar4 = puVar4 + 1;
    } while (puVar4 != *(undefined8 **)(this + 0x58));
    puVar4 = *(undefined8 **)(this + 0x50);
  }
  *(undefined8 **)(this + 0x58) = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x58) = puVar4;
                    /* try { // try from 009ce74c to 00ace753 has its CatchHandler @ 009ce798 */
    operator_delete(puVar4);
  }
  pvVar2 = *(void **)(this + 0x38);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x40) = pvVar2;
    operator_delete(pvVar2);
  }
                    /* try { // try from 009ce768 to 00ace77b has its CatchHandler @ 009ce79c */
  AssemblerBase::~AssemblerBase((AssemblerBase *)this);
  return;
}

