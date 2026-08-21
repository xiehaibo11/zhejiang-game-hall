
/* WARNING: Type propagation algorithm not settling */
/* tinyxml2::XMLDocument::Identify(char*, tinyxml2::XMLNode**) */

byte * __thiscall tinyxml2::XMLDocument::Identify(XMLDocument *this,char *param_1,XMLNode **param_2)

{
  int iVar1;
  bool bVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined *puVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  Block *__s;
  
  uVar13 = (uint)*param_1;
                    /* try { // try from 010217cc to 011217cf has its CatchHandler @ 01021844 */
  pbVar12 = (byte *)param_1;
  if (-1 < *param_1) {
    do {
                    /* try { // try from 010217d0 to 01121857 has its CatchHandler @ 01021790 */
      iVar4 = isspace(uVar13 & 0xff);
      if (iVar4 == 0) {
        if ((uVar13 & 0xff) == 0) {
          return pbVar12;
        }
        break;
      }
      pbVar12 = pbVar12 + 1;
      uVar13 = (uint)(char)*pbVar12;
    } while (-1 < (int)uVar13);
  }
  if (pbVar12 == &DAT_01458a19) {
LAB_0102190c:
    __s = *(Block **)(this + 0x268);
    if (__s == (Block *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01021894 with catch @ 01021914
                        */
      __s = operator_new(0x3c8);
                    /* try { // try from 01021928 to 01121983 has its CatchHandler @ 01021928
                       catch() { ... } // from try @ 01021928 with catch @ 01021928
                       catch() { ... } // from try @ 01021988 with catch @ 01021928 */
      memset(__s,0,0x3c8);
      DynArray<tinyxml2::MemPoolT<88>::Block*,10>::Push
                ((DynArray<tinyxml2::MemPoolT<88>::Block*,10> *)(this + 0x208),(Block *)__s);
      *(Block **)__s = (Block *)(__s + 0x58);
      *(Block **)(__s + 0x58) = (Block *)(__s + 0xb0);
      *(Block **)(__s + 0xb0) = (Block *)(__s + 0x108);
      *(Block **)(__s + 0x108) = (Block *)(__s + 0x160);
      *(Block **)(__s + 0x160) = (Block *)(__s + 0x1b8);
      *(Block **)(__s + 0x1b8) = (Block *)(__s + 0x210);
      *(Block **)(__s + 0x210) = (Block *)(__s + 0x268);
      *(Block **)(__s + 0x268) = (Block *)(__s + 0x2c0);
      *(Block **)(__s + 0x2c0) = (Block *)(__s + 0x318);
                    /* try { // try from 01021984 to 01121987 has its CatchHandler @ 01021994 */
      *(Block **)(__s + 0x318) = (Block *)(__s + 0x370);
                    /* try { // try from 01021988 to 011219a7 has its CatchHandler @ 01021928 */
      *(undefined8 *)(__s + 0x370) = 0;
      *(Block **)(this + 0x268) = __s;
    }
                    /* catch() { ... } // from try @ 01021984 with catch @ 01021994 */
    iVar1 = *(int *)(this + 0x270);
    *(undefined8 *)(this + 0x268) = *(undefined8 *)__s;
    iVar4 = iVar1 + 1;
    *(int *)(this + 0x270) = iVar4;
    if (*(int *)(this + 0x278) <= iVar1) {
      *(int *)(this + 0x278) = iVar4;
    }
    *(int *)(this + 0x274) = *(int *)(this + 0x274) + 1;
    *(int *)(this + 0x27c) = *(int *)(this + 0x27c) + 1;
                    /* try { // try from 010219d8 to 011219db has its CatchHandler @ 01021a44 */
    puVar10 = &XMLDeclaration::vtable;
  }
  else {
    lVar7 = 0;
    uVar11 = uVar13;
    do {
      lVar6 = lVar7;
      uVar5 = (uint)lVar6;
      if (((1 < uVar5) || ((byte)(&DAT_01458a19)[lVar6] == 0)) ||
         ((uint)(byte)(&DAT_01458a19)[lVar6] != (uVar11 & 0xff))) {
        bVar2 = false;
        puVar3 = &DAT_01458a19;
        goto joined_r0x01021908;
      }
      uVar11 = (uint)pbVar12[lVar6 + 1];
      lVar7 = lVar6 + 1;
    } while (pbVar12[lVar6 + 1] != 0);
    puVar3 = &DAT_01458a1a;
    bVar2 = true;
    uVar5 = (uint)(lVar6 + 1);
joined_r0x01021908:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010217cc with catch @ 01021844
                        */
    if ((uVar5 == 2) || ((bVar2 && (puVar3[lVar6] == '\0')))) goto LAB_0102190c;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01021898 with catch @ 01021858
                        */
    if (pbVar12 == &DAT_01458a1c) {
LAB_01021a2c:
      __s = *(Block **)(this + 0x268);
      if (__s == (Block *)0x0) {
        __s = operator_new(0x3c8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010219d8 with catch @ 01021a44
                        */
        memset(__s,0,0x3c8);
        DynArray<tinyxml2::MemPoolT<88>::Block*,10>::Push
                  ((DynArray<tinyxml2::MemPoolT<88>::Block*,10> *)(this + 0x208),(Block *)__s);
        *(Block **)__s = (Block *)(__s + 0x58);
        *(Block **)(__s + 0x58) = (Block *)(__s + 0xb0);
        *(Block **)(__s + 0xb0) = (Block *)(__s + 0x108);
        *(Block **)(__s + 0x108) = (Block *)(__s + 0x160);
        *(Block **)(__s + 0x160) = (Block *)(__s + 0x1b8);
        *(Block **)(__s + 0x1b8) = (Block *)(__s + 0x210);
        *(Block **)(__s + 0x210) = (Block *)(__s + 0x268);
        *(Block **)(__s + 0x268) = (Block *)(__s + 0x2c0);
        *(Block **)(__s + 0x2c0) = (Block *)(__s + 0x318);
        *(Block **)(__s + 0x318) = (Block *)(__s + 0x370);
        *(undefined8 *)(__s + 0x370) = 0;
        *(Block **)(this + 0x268) = __s;
      }
                    /* catch() { ... } // from try @ 01021b4c with catch @ 01021ab4 */
      iVar1 = *(int *)(this + 0x270);
      *(undefined8 *)(this + 0x268) = *(undefined8 *)__s;
      iVar4 = iVar1 + 1;
      *(int *)(this + 0x270) = iVar4;
      if (*(int *)(this + 0x278) <= iVar1) {
        *(int *)(this + 0x278) = iVar4;
      }
      param_1 = (char *)(pbVar12 + 4);
      *(int *)(this + 0x274) = *(int *)(this + 0x274) + 1;
      *(int *)(this + 0x27c) = *(int *)(this + 0x27c) + 1;
                    /* try { // try from 01021af8 to 01121aff has its CatchHandler @ 01021bac */
      *(undefined8 *)(__s + 0x10) = 0;
      *(undefined4 *)(__s + 0x18) = 0;
      *(undefined8 *)(__s + 0x28) = 0;
      *(undefined8 *)(__s + 0x20) = 0;
      *(undefined8 *)(__s + 0x38) = 0;
      *(undefined8 *)(__s + 0x30) = 0;
      *(undefined ***)__s = &PTR_ToElement_01727420;
      *(XMLDocument **)(__s + 8) = this;
      *(undefined8 *)(__s + 0x48) = 0;
      *(undefined8 *)(__s + 0x40) = 0;
      *(XMLDocument **)(__s + 0x50) = this + 0x200;
      goto LAB_010219fc;
    }
    lVar7 = 0;
    uVar11 = uVar13;
    do {
      lVar6 = lVar7;
      uVar5 = (uint)lVar6;
      if (((3 < uVar5) || ((byte)(&DAT_01458a1c)[lVar6] == 0)) ||
         ((uint)(byte)(&DAT_01458a1c)[lVar6] != (uVar11 & 0xff))) {
        bVar2 = false;
        puVar3 = &DAT_01458a1c;
        goto joined_r0x01021a28;
      }
      uVar11 = (uint)pbVar12[lVar6 + 1];
      lVar7 = lVar6 + 1;
    } while (pbVar12[lVar6 + 1] != 0);
    puVar3 = &DAT_01458a1d;
    bVar2 = true;
                    /* try { // try from 01021894 to 01121897 has its CatchHandler @ 01021914 */
    uVar5 = (uint)(lVar6 + 1);
                    /* try { // try from 01021898 to 01121927 has its CatchHandler @ 01021858 */
joined_r0x01021a28:
    if ((uVar5 == 4) || ((bVar2 && (puVar3[lVar6] == '\0')))) goto LAB_01021a2c;
    if (pbVar12 == &DAT_01458a24) {
LAB_01021b90:
      __s = *(Block **)(this + 0x1e8);
      if (__s == (Block *)0x0) {
                    /* catch() { ... } // from try @ 01021b48 with catch @ 01021b9c */
        __s = operator_new(0x3c0);
                    /* catch() { ... } // from try @ 01021af8 with catch @ 01021bac */
        memset(__s,0,0x3c0);
        DynArray<tinyxml2::MemPoolT<96>::Block*,10>::Push
                  ((DynArray<tinyxml2::MemPoolT<96>::Block*,10> *)(this + 0x188),__s);
        *(Block **)__s = __s + 0x60;
        *(Block **)(__s + 0x60) = __s + 0xc0;
        *(Block **)(__s + 0xc0) = __s + 0x120;
        *(Block **)(__s + 0x120) = __s + 0x180;
        *(Block **)(__s + 0x180) = __s + 0x1e0;
        *(Block **)(__s + 0x1e0) = __s + 0x240;
        *(Block **)(__s + 0x240) = __s + 0x2a0;
        *(Block **)(__s + 0x2a0) = __s + 0x300;
        *(Block **)(__s + 0x300) = __s + 0x360;
        *(undefined8 *)(__s + 0x360) = 0;
        *(Block **)(this + 0x1e8) = __s;
      }
      iVar1 = *(int *)(this + 0x1f0);
      *(undefined8 *)(this + 0x1e8) = *(undefined8 *)__s;
      iVar4 = iVar1 + 1;
      *(int *)(this + 0x1f0) = iVar4;
      if (*(int *)(this + 0x1f8) <= iVar1) {
        *(int *)(this + 0x1f8) = iVar4;
      }
                    /* catch() { ... } // from try @ 01021cd8 with catch @ 01021c40 */
      param_1 = (char *)(pbVar12 + 9);
      *(int *)(this + 500) = *(int *)(this + 500) + 1;
      *(int *)(this + 0x1fc) = *(int *)(this + 0x1fc) + 1;
      *(undefined ***)__s = &PTR_ToElement_017277a0;
      *(XMLDocument **)(__s + 8) = this;
      *(undefined8 *)(__s + 0x10) = 0;
      *(undefined4 *)(__s + 0x18) = 0;
      *(undefined8 *)(__s + 0x28) = 0;
      *(undefined8 *)(__s + 0x20) = 0;
      *(undefined8 *)(__s + 0x38) = 0;
      *(undefined8 *)(__s + 0x30) = 0;
      *(undefined8 *)(__s + 0x48) = 0;
      *(undefined8 *)(__s + 0x40) = 0;
      *(XMLDocument **)(__s + 0x50) = this + 0x180;
      *(Block *)(__s + 0x58) = (Block)0x1;
      goto LAB_010219fc;
    }
    lVar7 = 0;
    uVar11 = uVar13;
    do {
      uVar5 = (uint)lVar7;
      if (((8 < uVar5) || ((byte)(&DAT_01458a24)[lVar7] == 0)) ||
         ((uint)(byte)(&DAT_01458a24)[lVar7] != (uVar11 & 0xff))) {
        bVar2 = false;
        goto joined_r0x01021b2c;
      }
      lVar6 = lVar7 + 1;
      uVar11 = (uint)pbVar12[lVar6];
      lVar7 = lVar7 + 1;
    } while (pbVar12[lVar6] != 0);
    bVar2 = true;
    uVar5 = (uint)lVar7;
joined_r0x01021b2c:
    if ((uVar5 == 9) || ((bVar2 && ((&DAT_01458a24)[lVar7] == '\0')))) goto LAB_01021b90;
                    /* try { // try from 01021b48 to 01121b4b has its CatchHandler @ 01021b9c */
    if (pbVar12 != &DAT_01458a21) {
                    /* try { // try from 01021b4c to 01121bc7 has its CatchHandler @ 01021ab4 */
      lVar7 = 0;
      uVar11 = uVar13;
      do {
        uVar5 = (uint)lVar7;
        if (((1 < uVar5) || ((byte)(&DAT_01458a21)[lVar7] == 0)) ||
           ((uint)(byte)(&DAT_01458a21)[lVar7] != (uVar11 & 0xff))) {
                    /* try { // try from 01021c84 to 01121c8b has its CatchHandler @ 01021d28 */
          bVar2 = false;
          goto joined_r0x01021c90;
        }
        lVar6 = lVar7 + 1;
        uVar11 = (uint)pbVar12[lVar6];
        lVar7 = lVar7 + 1;
      } while (pbVar12[lVar6] != 0);
      bVar2 = true;
      uVar5 = (uint)lVar7;
joined_r0x01021c90:
      if ((uVar5 != 2) && ((!bVar2 || ((&DAT_01458a21)[lVar7] != '\0')))) {
        if (pbVar12 != (byte *)0x1447ee8) {
          bVar2 = false;
          pbVar9 = (byte *)0x1447ee8;
          pbVar8 = pbVar12;
          do {
            pbVar8 = pbVar8 + 1;
            if (((bVar2) || (*pbVar9 == 0)) || ((uint)*pbVar9 != (uVar13 & 0xff))) {
              if (!bVar2) {
                __s = *(Block **)(this + 0x1e8);
                if (__s == (Block *)0x0) {
                  __s = operator_new(0x3c0);
                  memset(__s,0,0x3c0);
                  DynArray<tinyxml2::MemPoolT<96>::Block*,10>::Push
                            ((DynArray<tinyxml2::MemPoolT<96>::Block*,10> *)(this + 0x188),__s);
                  *(Block **)__s = __s + 0x60;
                  *(Block **)(__s + 0x60) = __s + 0xc0;
                  *(Block **)(__s + 0xc0) = __s + 0x120;
                  *(Block **)(__s + 0x120) = __s + 0x180;
                  *(Block **)(__s + 0x180) = __s + 0x1e0;
                  *(Block **)(__s + 0x1e0) = __s + 0x240;
                  *(Block **)(__s + 0x240) = __s + 0x2a0;
                  *(Block **)(__s + 0x2a0) = __s + 0x300;
                  *(Block **)(__s + 0x300) = __s + 0x360;
                    /* catch() { ... } // from try @ 01021e8c with catch @ 01021f24 */
                  *(undefined8 *)(__s + 0x360) = 0;
                  *(Block **)(this + 0x1e8) = __s;
                }
                iVar1 = *(int *)(this + 0x1f0);
                *(undefined8 *)(this + 0x1e8) = *(undefined8 *)__s;
                iVar4 = iVar1 + 1;
                *(int *)(this + 0x1f0) = iVar4;
                if (*(int *)(this + 0x1f8) <= iVar1) {
                  *(int *)(this + 0x1f8) = iVar4;
                }
                *(int *)(this + 500) = *(int *)(this + 500) + 1;
                *(int *)(this + 0x1fc) = *(int *)(this + 0x1fc) + 1;
                *(undefined8 *)(__s + 0x10) = 0;
                *(undefined4 *)(__s + 0x18) = 0;
                *(undefined8 *)(__s + 0x28) = 0;
                *(undefined8 *)(__s + 0x20) = 0;
                *(undefined8 *)(__s + 0x38) = 0;
                *(undefined8 *)(__s + 0x30) = 0;
                *(undefined ***)__s = &PTR_ToElement_017277a0;
                *(XMLDocument **)(__s + 8) = this;
                *(undefined8 *)(__s + 0x48) = 0;
                *(undefined8 *)(__s + 0x40) = 0;
                *(Block *)(__s + 0x58) = (Block)0x0;
                *(XMLDocument **)(__s + 0x50) = this + 0x180;
                goto LAB_010219fc;
              }
              break;
            }
                    /* try { // try from 01021cd4 to 01121cd7 has its CatchHandler @ 01021d18 */
            uVar13 = (uint)*pbVar8;
                    /* try { // try from 01021cd8 to 01121d43 has its CatchHandler @ 01021c40 */
            pbVar9 = pbVar9 + 1;
            bVar2 = true;
          } while (uVar13 != 0);
        }
        __s = *(Block **)(this + 0xe8);
        if (__s == (Block *)0x0) {
          __s = operator_new(0x3a8);
          memset(__s,0,0x3a8);
          DynArray<tinyxml2::MemPoolT<104>::Block*,10>::Push
                    ((DynArray<tinyxml2::MemPoolT<104>::Block*,10> *)(this + 0x88),(Block *)__s);
          *(Block **)__s = (Block *)(__s + 0x68);
          *(Block **)(__s + 0x68) = (Block *)(__s + 0xd0);
          *(Block **)(__s + 0xd0) = (Block *)(__s + 0x138);
          *(Block **)(__s + 0x138) = (Block *)(__s + 0x1a0);
          *(Block **)(__s + 0x1a0) = (Block *)(__s + 0x208);
          *(Block **)(__s + 0x208) = (Block *)(__s + 0x270);
          *(Block **)(__s + 0x270) = (Block *)(__s + 0x2d8);
          *(Block **)(__s + 0x2d8) = (Block *)(__s + 0x340);
          *(undefined8 *)(__s + 0x340) = 0;
          *(Block **)(this + 0xe8) = __s;
        }
        iVar1 = *(int *)(this + 0xf0);
        *(undefined8 *)(this + 0xe8) = *(undefined8 *)__s;
        iVar4 = iVar1 + 1;
        *(int *)(this + 0xf0) = iVar4;
        if (*(int *)(this + 0xf8) <= iVar1) {
          *(int *)(this + 0xf8) = iVar4;
        }
        param_1 = (char *)(pbVar12 + 1);
        *(int *)(this + 0xf4) = *(int *)(this + 0xf4) + 1;
        *(int *)(this + 0xfc) = *(int *)(this + 0xfc) + 1;
        *(undefined8 *)(__s + 0x10) = 0;
                    /* try { // try from 01021e8c to 01121eab has its CatchHandler @ 01021f24 */
        *(undefined4 *)(__s + 0x18) = 0;
        *(undefined ***)__s = &PTR_ToElement_01727600;
        *(XMLDocument **)(__s + 8) = this;
        *(undefined8 *)(__s + 0x28) = 0;
        *(undefined8 *)(__s + 0x20) = 0;
        *(undefined8 *)(__s + 0x38) = 0;
        *(undefined8 *)(__s + 0x30) = 0;
        *(undefined8 *)(__s + 0x48) = 0;
        *(undefined8 *)(__s + 0x40) = 0;
        *(undefined4 *)(__s + 0x58) = 0;
        *(undefined8 *)(__s + 0x60) = 0;
        *(XMLDocument **)(__s + 0x50) = this + 0x80;
                    /* try { // try from 01021eac to 01121f3f has its CatchHandler @ 01021d44 */
        goto LAB_010219fc;
      }
    }
    __s = *(Block **)(this + 0x268);
    if (__s == (Block *)0x0) {
      __s = operator_new(0x3c8);
      memset(__s,0,0x3c8);
      DynArray<tinyxml2::MemPoolT<88>::Block*,10>::Push
                ((DynArray<tinyxml2::MemPoolT<88>::Block*,10> *)(this + 0x208),(Block *)__s);
                    /* catch() { ... } // from try @ 01021cd4 with catch @ 01021d18 */
      *(Block **)__s = (Block *)(__s + 0x58);
      *(Block **)(__s + 0x58) = (Block *)(__s + 0xb0);
                    /* catch() { ... } // from try @ 01021c84 with catch @ 01021d28 */
      *(Block **)(__s + 0xb0) = (Block *)(__s + 0x108);
      *(Block **)(__s + 0x108) = (Block *)(__s + 0x160);
      *(Block **)(__s + 0x160) = (Block *)(__s + 0x1b8);
                    /* try { // try from 01021d44 to 01121e8b has its CatchHandler @ 01021d44
                       catch() { ... } // from try @ 01021d44 with catch @ 01021d44
                       catch() { ... } // from try @ 01021eac with catch @ 01021d44 */
      *(Block **)(__s + 0x1b8) = (Block *)(__s + 0x210);
      *(Block **)(__s + 0x210) = (Block *)(__s + 0x268);
      *(Block **)(__s + 0x268) = (Block *)(__s + 0x2c0);
      *(Block **)(__s + 0x2c0) = (Block *)(__s + 0x318);
      *(Block **)(__s + 0x318) = (Block *)(__s + 0x370);
      *(undefined8 *)(__s + 0x370) = 0;
      *(Block **)(this + 0x268) = __s;
    }
    iVar1 = *(int *)(this + 0x270);
    *(undefined8 *)(this + 0x268) = *(undefined8 *)__s;
    iVar4 = iVar1 + 1;
    *(int *)(this + 0x270) = iVar4;
    if (*(int *)(this + 0x278) <= iVar1) {
      *(int *)(this + 0x278) = iVar4;
    }
    *(int *)(this + 0x274) = *(int *)(this + 0x274) + 1;
    *(int *)(this + 0x27c) = *(int *)(this + 0x27c) + 1;
    puVar10 = &XMLUnknown::vtable;
  }
  *(undefined **)__s = puVar10 + 0x10;
  *(XMLDocument **)(__s + 8) = this;
  *(undefined8 *)(__s + 0x10) = 0;
  *(undefined4 *)(__s + 0x18) = 0;
  *(undefined8 *)(__s + 0x28) = 0;
  *(undefined8 *)(__s + 0x20) = 0;
  *(undefined8 *)(__s + 0x38) = 0;
  *(undefined8 *)(__s + 0x30) = 0;
  *(undefined8 *)(__s + 0x48) = 0;
  *(undefined8 *)(__s + 0x40) = 0;
  *(XMLDocument **)(__s + 0x50) = this + 0x200;
  param_1 = (char *)(pbVar12 + 2);
LAB_010219fc:
  *param_2 = (XMLNode *)__s;
  return (byte *)param_1;
}

