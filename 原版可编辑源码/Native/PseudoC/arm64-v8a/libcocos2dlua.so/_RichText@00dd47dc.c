
/* cocos2d::ui::RichText::~RichText() */

void __thiscall cocos2d::ui::RichText::~RichText(RichText *this)

{
  RichText *pRVar1;
  void *pvVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
                    /* catch() { ... } // from try @ 00dd3f2c with catch @ 00dd47dc */
                    /* catch() { ... } // from try @ 00dd3f4c with catch @ 00dd47e0 */
                    /* catch() { ... } // from try @ 00dd3c80 with catch @ 00dd47e4 */
                    /* catch() { ... } // from try @ 00dd3170 with catch @ 00dd47e8 */
                    /* catch() { ... } // from try @ 00dd3184 with catch @ 00dd47f8 */
                    /* catch() { ... } // from try @ 00dd4040 with catch @ 00dd47fc */
  puVar4 = *(undefined8 **)(this + 0x4f8);
                    /* catch() { ... } // from try @ 00dd4238 with catch @ 00dd4800 */
  puVar6 = *(undefined8 **)(this + 0x500);
                    /* catch() { ... } // from try @ 00dd4020 with catch @ 00dd4804 */
                    /* catch() { ... } // from try @ 00dd4218 with catch @ 00dd4808 */
                    /* catch() { ... } // from try @ 00dd3e00 with catch @ 00dd480c */
                    /* catch() { ... } // from try @ 00dd4304 with catch @ 00dd4810 */
                    /* catch() { ... } // from try @ 00dd3de0 with catch @ 00dd4814 */
                    /* catch() { ... } // from try @ 00dd42e4 with catch @ 00dd4818 */
  *(undefined ***)this = &PTR__RichText_016e1d90;
                    /* catch() { ... } // from try @ 00dd3d14 with catch @ 00dd481c */
  *(undefined ***)(this + 0x318) = &PTR__RichText_016e2420;
                    /* catch() { ... } // from try @ 00dd4144 with catch @ 00dd4820 */
  if (puVar4 != puVar6) {
    do {
                    /* catch() { ... } // from try @ 00dd3cf4 with catch @ 00dd4824 */
                    /* catch() { ... } // from try @ 00dd4124 with catch @ 00dd4828 */
      Ref::release((Ref *)*puVar4);
      puVar4 = puVar4 + 1;
    } while (puVar6 != puVar4);
    puVar4 = *(undefined8 **)(this + 0x4f8);
  }
  pRVar1 = *(RichText **)(this + 0x590);
  *(undefined8 **)(this + 0x500) = puVar4;
  if (this + 0x570 == pRVar1) {
    pcVar3 = *(code **)(*(long *)pRVar1 + 0x20);
  }
  else {
    if (pRVar1 == (RichText *)0x0) goto LAB_00dd486c;
    pcVar3 = *(code **)(*(long *)pRVar1 + 0x28);
  }
  (*pcVar3)();
LAB_00dd486c:
  puVar4 = *(void **)(this + 0x558);
  while (puVar4 != (void *)0x0) {
    pvVar2 = (void *)*puVar4;
    cocos2d::Value::~Value((Value *)(puVar4 + 5));
    if ((*(byte *)(puVar4 + 2) & 1) != 0) {
      operator_delete((void *)puVar4[4]);
    }
    operator_delete(puVar4);
    puVar4 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0x548);
  *(undefined8 *)(this + 0x548) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x528);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x530) = pvVar2;
    operator_delete(pvVar2);
  }
  puVar4 = *(undefined8 **)(this + 0x510);
  if (puVar4 != (undefined8 *)0x0) {
    puVar7 = *(undefined8 **)(this + 0x518);
    puVar6 = puVar4;
    if (puVar7 != puVar4) {
      do {
        puVar5 = puVar7 + -3;
        puVar6 = (undefined8 *)*puVar5;
        puVar8 = (undefined8 *)puVar7[-2];
        if (puVar6 != puVar8) {
          do {
            Ref::release((Ref *)*puVar6);
            puVar6 = puVar6 + 1;
          } while (puVar8 != puVar6);
          puVar6 = (undefined8 *)*puVar5;
        }
        puVar7[-2] = puVar6;
        if (puVar6 != (undefined8 *)0x0) {
          puVar7[-2] = puVar6;
          operator_delete(puVar6);
        }
        puVar7 = puVar5;
      } while (puVar5 != puVar4);
      puVar6 = *(undefined8 **)(this + 0x510);
    }
    *(undefined8 **)(this + 0x518) = puVar4;
    operator_delete(puVar6);
  }
  puVar4 = *(undefined8 **)(this + 0x4f8);
  puVar6 = *(undefined8 **)(this + 0x500);
  if (puVar4 != puVar6) {
    do {
      Ref::release((Ref *)*puVar4);
      puVar4 = puVar4 + 1;
    } while (puVar6 != puVar4);
    puVar4 = *(undefined8 **)(this + 0x4f8);
  }
  *(undefined8 **)(this + 0x500) = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x500) = puVar4;
    operator_delete(puVar4);
  }
  Widget::~Widget((Widget *)this);
  return;
}

