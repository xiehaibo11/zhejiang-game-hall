
/* cocos2d::TextureAtlas::insertQuad(cocos2d::V3F_C4B_T2F_Quad*, long) */

void __thiscall
cocos2d::TextureAtlas::insertQuad(TextureAtlas *this,V3F_C4B_T2F_Quad *param_1,long param_2)

{
  void *__src;
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
                    /* try { // try from 00fee66c to 010ee66f has its CatchHandler @ 00fee690 */
  lVar1 = *(long *)(this + 0x40) - param_2;
  *(long *)(this + 0x40) = *(long *)(this + 0x40) + 1;
  if (0 < lVar1) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fee66c with catch @ 00fee690
                        */
    __src = (void *)(*(long *)(this + 0x58) + param_2 * 0x60);
    memmove((void *)((long)__src + 0x60),__src,lVar1 * 0x60);
  }
  uVar3 = *(undefined8 *)param_1;
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = (undefined8 *)(*(long *)(this + 0x58) + param_2 * 0x60);
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  *puVar2 = uVar3;
  puVar2[3] = uVar5;
  puVar2[2] = uVar4;
                    /* catch() { ... } // from try @ 00fee73c with catch @ 00fee6b4 */
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  puVar2[9] = *(undefined8 *)(param_1 + 0x48);
  puVar2[8] = uVar3;
  puVar2[0xb] = uVar5;
  puVar2[10] = uVar4;
  puVar2[5] = uVar7;
  puVar2[4] = uVar6;
  puVar2[7] = uVar9;
  puVar2[6] = uVar8;
  this[0x3c] = (TextureAtlas)0x1;
  return;
}

