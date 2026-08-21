
/* cocos2d::Terrain::initTextures() */

undefined8 __thiscall cocos2d::Terrain::initTextures(Terrain *this)

{
  long lVar1;
  Image *pIVar2;
  Texture2D *pTVar3;
  Terrain *pTVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(this + 0x460) = 0;
  *(undefined8 *)(this + 0x458) = 0;
  *(undefined8 *)(this + 0x470) = 0;
  *(undefined8 *)(this + 0x468) = 0;
  uStack_68 = 0x290100002901;
                    /* catch() { ... } // from try @ 00d43540 with catch @ 00d435c0 */
  if (((byte)this[0x390] & 1) == 0) {
    uVar5 = (ulong)((byte)this[0x390] >> 1);
  }
  else {
    uVar5 = *(ulong *)(this + 0x398);
  }
  pIVar2 = operator_new(0x170,(nothrow_t *)&std::nothrow);
  if (uVar5 == 0) {
    if (pIVar2 != (Image *)0x0) {
      Image::Image(pIVar2);
    }
    Image::initWithImageFile(pIVar2,(basic_string *)(this + 0x3a8));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d436e4 with catch @ 00d43754
                        */
    pTVar3 = operator_new(0x88,(nothrow_t *)&std::nothrow);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d43718 with catch @ 00d43758
                        */
    if (pTVar3 != (Texture2D *)0x0) {
      Texture2D::Texture2D(pTVar3);
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d436bc with catch @ 00d4376c
                        */
    Texture2D::initWithImage(pTVar3,pIVar2);
    Texture2D::generateMipmap(pTVar3);
    *(Texture2D **)(this + 0x458) = pTVar3;
    local_70 = 0x260100002703;
    Texture2D::setTexParameters(pTVar3,(_TexParams *)&local_70);
    if (pIVar2 != (Image *)0x0) {
      (**(code **)(*(long *)pIVar2 + 8))(pIVar2);
    }
  }
  else {
    if (pIVar2 != (Image *)0x0) {
      Image::Image(pIVar2);
    }
    Image::initWithImageFile(pIVar2,(basic_string *)(this + 0x390));
    pTVar3 = operator_new(0x88,(nothrow_t *)&std::nothrow);
    if (pTVar3 != (Texture2D *)0x0) {
      Texture2D::Texture2D(pTVar3);
    }
    *(Texture2D **)(this + 0x478) = pTVar3;
    Texture2D::initWithImage(pTVar3,pIVar2);
    uStack_68 = 0x812f0000812f;
    local_70 = 0x260100002601;
    Texture2D::setTexParameters(*(Texture2D **)(this + 0x478),(_TexParams *)&local_70);
    if (pIVar2 != (Image *)0x0) {
      (**(code **)(*(long *)pIVar2 + 8))(pIVar2);
    }
    if (0 < *(int *)(this + 0x430)) {
      lVar6 = 0;
      pTVar4 = this + 0x3a8;
      do {
        pIVar2 = operator_new(0x170,(nothrow_t *)&std::nothrow);
        if (pIVar2 != (Image *)0x0) {
          Image::Image(pIVar2);
        }
                    /* try { // try from 00d436e4 to 00e43703 has its CatchHandler @ 00d43754 */
        Image::initWithImageFile(pIVar2,(basic_string *)pTVar4);
        pTVar3 = operator_new(0x88,(nothrow_t *)&std::nothrow);
        if (pTVar3 != (Texture2D *)0x0) {
          Texture2D::Texture2D(pTVar3);
        }
        Texture2D::initWithImage(pTVar3,pIVar2);
                    /* try { // try from 00d43718 to 00e4371b has its CatchHandler @ 00d43758 */
        if (pIVar2 != (Image *)0x0) {
          (**(code **)(*(long *)pIVar2 + 8))(pIVar2);
        }
        Texture2D::generateMipmap(pTVar3);
        *(Texture2D **)(this + lVar6 * 8 + 0x458) = pTVar3;
        uStack_68 = 0x290100002901;
        local_70 = 0x260100002703;
        Texture2D::setTexParameters(pTVar3,(_TexParams *)&local_70);
        lVar6 = lVar6 + 1;
                    /* try { // try from 00d436bc to 00e436bf has its CatchHandler @ 00d4376c */
        pTVar4 = pTVar4 + 0x20;
      } while (lVar6 < *(int *)(this + 0x430));
    }
  }
                    /* try { // try from 00d437ac to 00e437af has its CatchHandler @ 00d437f0 */
  *(undefined4 *)(this + 0x8053c) = *(undefined4 *)(this + 0x430);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

