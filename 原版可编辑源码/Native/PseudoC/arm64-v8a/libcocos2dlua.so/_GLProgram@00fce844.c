
/* cocos2d::GLProgram::~GLProgram() */

void __thiscall cocos2d::GLProgram::~GLProgram(GLProgram *this)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fce838 with catch @ 00fce850
                        */
  *(undefined ***)this = &PTR__GLProgram_01723de0;
  if (*(int *)(this + 0x28) != 0) {
    glDeleteShader();
  }
  if (*(int *)(this + 0x2c) != 0) {
    glDeleteShader();
  }
  *(undefined8 *)(this + 0x28) = 0;
  if (*(uint *)(this + 0x24) != 0) {
    GL::deleteProgram(*(uint *)(this + 0x24));
  }
  for (plVar4 = *(long **)(this + 0xd0); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
                    /* try { // try from 00fce898 to 010ce89b has its CatchHandler @ 00fce8b8 */
    free((void *)plVar4[3]);
  }
  if (*(long *)(this + 0xd8) != 0) {
    puVar1 = *(void **)(this + 0xd0);
    while (puVar1 != (void *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fce898 with catch @ 00fce8b8
                        */
      pvVar5 = (void *)*puVar1;
      operator_delete(puVar1);
      puVar1 = pvVar5;
    }
    lVar2 = *(long *)(this + 200);
    *(undefined8 *)(this + 0xd0) = 0;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0xc0) + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    *(undefined8 *)(this + 0xd8) = 0;
  }
  puVar1 = *(void **)(this + 0xd0);
  while (puVar1 != (void *)0x0) {
    pvVar5 = (void *)*puVar1;
                    /* try { // try from 00fce8fc to 010ce8ff has its CatchHandler @ 00fce91c */
    operator_delete(puVar1);
    puVar1 = pvVar5;
  }
  pvVar5 = *(void **)(this + 0xc0);
  *(undefined8 *)(this + 0xc0) = 0;
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  puVar1 = *(void **)(this + 0xa8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fce8fc with catch @ 00fce91c
                        */
  while (puVar1 != (void *)0x0) {
    pvVar5 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 7) & 1) != 0) {
      operator_delete((void *)puVar1[9]);
    }
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar5;
  }
  pvVar5 = *(void **)(this + 0x98);
  *(undefined8 *)(this + 0x98) = 0;
                    /* try { // try from 00fce964 to 010ce967 has its CatchHandler @ 00fce97c */
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  puVar1 = *(void **)(this + 0x80);
  while (puVar1 != (void *)0x0) {
    pvVar5 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 7) & 1) != 0) {
      operator_delete((void *)puVar1[9]);
    }
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fce964 with catch @ 00fce97c
                        */
    operator_delete(puVar1);
    puVar1 = pvVar5;
  }
  pvVar5 = *(void **)(this + 0x70);
  *(undefined8 *)(this + 0x70) = 0;
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
                    /* try { // try from 00fce9c4 to 010ce9c7 has its CatchHandler @ 00fce9e4 */
  Ref::~Ref((Ref *)this);
  return;
}

