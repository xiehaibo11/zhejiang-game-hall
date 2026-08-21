
/* spine::AttachmentVertices::AttachmentVertices(cocos2d::Texture2D*, int, unsigned short*, int) */

void __thiscall
spine::AttachmentVertices::AttachmentVertices
          (AttachmentVertices *this,Texture2D *param_1,int param_2,ushort *param_3,int param_4)

{
  Vec3 *pVVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  Vec3 *pVVar4;
  ulong uVar5;
  Vec3 *this_00;
  ulong uVar6;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d6d6e0 with catch @ 00d6d71c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d6d6a0 with catch @ 00d6d730
                        */
  *(undefined ***)this = &PTR__AttachmentVertices_016d5f48;
  *(Texture2D **)(this + 8) = param_1;
  puVar3 = operator_new(0x18);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d6d660 with catch @ 00d6d744
                        */
  uVar6 = (ulong)param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar6;
  uVar5 = (uVar6 + (long)param_2 * 2) * 8;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  *(undefined8 **)(this + 0x10) = puVar3;
  if (SUB168(auVar2 * ZEXT816(0x18),8) != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  pVVar4 = operator_new__(uVar5);
  if (param_2 != 0) {
    this_00 = pVVar4;
    do {
                    /* catch() { ... } // from try @ 00d6d7b0 with catch @ 00d6d784 */
      cocos2d::Vec3::Vec3(this_00);
      cocos2d::Color4B::Color4B((Color4B *)(this_00 + 0xc));
      pVVar1 = this_00 + 0x18;
      *(undefined4 *)(this_00 + 0x10) = 0;
      *(undefined4 *)(this_00 + 0x14) = 0;
      this_00 = pVVar1;
    } while (pVVar1 != pVVar4 + uVar6 * 0x18);
                    /* try { // try from 00d6d7a8 to 00e6d7af has its CatchHandler @ 00d6d828 */
    puVar3 = *(undefined8 **)(this + 0x10);
  }
  *puVar3 = pVVar4;
  puVar3[1] = param_3;
                    /* try { // try from 00d6d7b0 to 00e6d843 has its CatchHandler @ 00d6d784 */
  *(int *)(puVar3 + 2) = param_2;
  *(int *)((long)puVar3 + 0x14) = param_4;
  return;
}

