
/* cocos2d::PhysicsBody::~PhysicsBody() */

void __thiscall cocos2d::PhysicsBody::~PhysicsBody(PhysicsBody *this)

{
  undefined8 *puVar1;
  size_t __n;
  void *pvVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  PhysicsBody *pPVar8;
  
  *(undefined ***)this = &PTR__PhysicsBody_01724d90;
                    /* try { // try from 00fff1b0 to 010ff1b7 has its CatchHandler @ 00fff280 */
  plVar5 = *(long **)(this + 0x50);
  plVar6 = *(long **)(this + 0x58);
                    /* try { // try from 00fff1b8 to 010ff293 has its CatchHandler @ 00fff078 */
  do {
    if (plVar5 == plVar6) {
      if (*(long *)(this + 0x88) != 0) {
        cpBodyFree();
      }
      puVar4 = *(undefined8 **)(this + 0x68);
      puVar7 = *(undefined8 **)(this + 0x70);
      if (puVar4 != puVar7) {
        do {
          Ref::release((Ref *)*puVar4);
          puVar4 = puVar4 + 1;
        } while (puVar7 != puVar4);
        puVar4 = *(undefined8 **)(this + 0x68);
      }
      *(undefined8 **)(this + 0x70) = puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined8 **)(this + 0x70) = puVar4;
        operator_delete(puVar4);
      }
      pvVar2 = *(void **)(this + 0x50);
      if (pvVar2 != (void *)0x0) {
        *(void **)(this + 0x58) = pvVar2;
        operator_delete(pvVar2);
      }
      Component::~Component((Component *)this);
      return;
    }
    plVar3 = (long *)*plVar5;
    pPVar8 = (PhysicsBody *)plVar3[7];
    if (pPVar8 == this) {
      pPVar8 = (PhysicsBody *)plVar3[8];
    }
    puVar4 = *(undefined8 **)(pPVar8 + 0x50);
    puVar7 = *(undefined8 **)(pPVar8 + 0x58);
    if (puVar4 != puVar7) {
      if ((long *)*puVar4 != plVar3) {
        do {
          if (puVar7 + -1 == puVar4) goto LAB_00fff2c0;
          puVar1 = puVar4 + 1;
                    /* catch() { ... } // from try @ 00fff1b0 with catch @ 00fff280 */
          puVar4 = puVar4 + 1;
        } while ((long *)*puVar1 != plVar3);
      }
      if (puVar4 != puVar7) {
        __n = (long)puVar7 - (long)(puVar4 + 1);
        if (__n != 0) {
          memmove(puVar4,puVar4 + 1,__n);
        }
        *(undefined8 **)(pPVar8 + 0x58) = puVar4 + ((long)__n >> 3);
        plVar3 = (long *)*plVar5;
      }
    }
LAB_00fff2c0:
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar5 = plVar5 + 1;
  } while( true );
}

