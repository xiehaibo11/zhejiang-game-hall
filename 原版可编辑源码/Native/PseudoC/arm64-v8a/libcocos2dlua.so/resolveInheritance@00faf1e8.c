
/* cocos2d::Properties::resolveInheritance(char const*) */

void __thiscall cocos2d::Properties::resolveInheritance(Properties *this,char *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  Properties PVar3;
  long lVar4;
  long lVar5;
  Properties *this_00;
  Properties *pPVar6;
  Properties *pPVar7;
  void *pvVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  Properties *this_01;
  vector<cocos2d::Properties*,std::__ndk1::allocator<cocos2d::Properties*>> *this_02;
  Properties *pPVar13;
  Properties *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if (param_1 == (char *)0x0) {
    if (*(long **)(this + 0x90) == *(long **)(this + 0x80)) {
      plVar11 = *(long **)(this + 0x78);
    }
    else {
      plVar11 = *(long **)(this + 0x90) + 1;
    }
    *(long **)(this + 0x90) = plVar11;
    if (plVar11 == *(long **)(this + 0x80)) goto LAB_00faf480;
    this_00 = (Properties *)*plVar11;
  }
  else {
    this_00 = (Properties *)getNamespace(this,param_1,false,true);
  }
  if (this_00 != (Properties *)0x0) {
    do {
      PVar3 = this_00[0x40];
      if (((byte)PVar3 & 1) == 0) {
        if ((byte)PVar3 >> 1 != 0) {
LAB_00faf294:
          if (((byte)PVar3 & 1) == 0) {
                    /* catch() { ... } // from try @ 00faf1d8 with catch @ 00faf298 */
            pPVar6 = this_00 + 0x41;
          }
          else {
            pPVar6 = *(Properties **)(this_00 + 0x50);
          }
                    /* try { // try from 00faf2b4 to 010af2cb has its CatchHandler @ 00faf2b4
                       catch() { ... } // from try @ 00faf2b4 with catch @ 00faf2b4
                       catch() { ... } // from try @ 00faf2d4 with catch @ 00faf2b4 */
          pPVar6 = (Properties *)getNamespace(this,(char *)pPVar6,false,true);
          if (pPVar6 != (Properties *)0x0) {
                    /* try { // try from 00faf2cc to 010af2d3 has its CatchHandler @ 00faf2ec */
            if (((byte)pPVar6[0x28] & 1) == 0) {
                    /* try { // try from 00faf2d4 to 010af2ff has its CatchHandler @ 00faf2b4 */
              pPVar7 = pPVar6 + 0x29;
            }
            else {
              pPVar7 = *(Properties **)(pPVar6 + 0x38);
            }
            resolveInheritance(this,(char *)pPVar7);
                    /* catch() { ... } // from try @ 00faf2cc with catch @ 00faf2ec */
            pPVar7 = operator_new(0xb0,(nothrow_t *)&std::nothrow);
            if (pPVar7 == (Properties *)0x0) {
              this_01 = (Properties *)0x0;
            }
            else {
                    /* try { // try from 00faf300 to 010af41b has its CatchHandler @ 00faf300
                       catch() { ... } // from try @ 00faf300 with catch @ 00faf300
                       catch() { ... } // from try @ 00faf438 with catch @ 00faf300 */
              Properties(pPVar7,this_00);
              this_01 = pPVar7;
            }
            this_02 = (vector<cocos2d::Properties*,std::__ndk1::allocator<cocos2d::Properties*>> *)
                      (this_00 + 0x78);
            puVar9 = *(undefined8 **)this_02;
            lVar4 = *(long *)(this_00 + 0x80) - (long)puVar9;
            if (lVar4 != 0) {
              uVar12 = 0;
              pPVar13 = (Properties *)*puVar9;
              while( true ) {
                if (pPVar13 != (Properties *)0x0) {
                  ~Properties(pPVar13);
                  operator_delete(pPVar13);
                  puVar9 = *(undefined8 **)this_02;
                }
                puVar9[uVar12] = 0;
                uVar12 = uVar12 + 1;
                if ((ulong)(lVar4 >> 3) <= uVar12) break;
                puVar9 = *(undefined8 **)this_02;
                pPVar13 = (Properties *)puVar9[uVar12];
              }
            }
            if (this_00 != pPVar6) {
              std::__ndk1::
              vector<cocos2d::Properties::Property,std::__ndk1::allocator<cocos2d::Properties::Property>>
              ::assign<cocos2d::Properties::Property*>
                        ((vector<cocos2d::Properties::Property,std::__ndk1::allocator<cocos2d::Properties::Property>>
                          *)(this_00 + 0x58),*(Property **)(pPVar6 + 0x58),
                         *(Property **)(pPVar6 + 0x60));
            }
            pvVar8 = *(void **)this_02;
            if (pvVar8 != (void *)0x0) {
              *(void **)(this_00 + 0x80) = pvVar8;
              operator_delete(pvVar8);
              *(undefined8 *)this_02 = 0;
              *(undefined8 *)(this_00 + 0x80) = 0;
              *(undefined8 *)(this_00 + 0x88) = 0;
            }
            *(undefined8 *)this_02 = 0;
            *(undefined8 *)(this_00 + 0x80) = 0;
            *(undefined8 *)(this_00 + 0x88) = 0;
            puVar9 = *(undefined8 **)(pPVar6 + 0x78);
            puVar2 = *(undefined8 **)(pPVar6 + 0x80);
            if (puVar9 == puVar2) {
              uVar10 = 0;
            }
            else {
              do {
                pPVar13 = (Properties *)*puVar9;
                pPVar6 = operator_new(0xb0,(nothrow_t *)&std::nothrow);
                if (pPVar6 != (Properties *)0x0) {
                  Properties(pPVar6,pPVar13);
                }
                puVar1 = *(undefined8 **)(this_00 + 0x80);
                local_70 = pPVar6;
                if (puVar1 < *(undefined8 **)(this_00 + 0x88)) {
                  *puVar1 = pPVar6;
                  *(undefined8 **)(this_00 + 0x80) = puVar1 + 1;
                }
                else {
                  std::__ndk1::
                  vector<cocos2d::Properties*,std::__ndk1::allocator<cocos2d::Properties*>>::
                  __push_back_slow_path<cocos2d::Properties*>(this_02,&local_70);
                }
                puVar9 = puVar9 + 1;
              } while (puVar2 != puVar9);
              uVar10 = *(undefined8 *)(this_00 + 0x80);
            }
                    /* try { // try from 00faf41c to 010af437 has its CatchHandler @ 00faf488 */
            *(undefined8 *)(this_00 + 0x90) = uVar10;
            *(undefined8 *)(this_00 + 0x70) = *(undefined8 *)(this_00 + 0x60);
            mergeWith(this_00,this_01);
            if (this_01 != (Properties *)0x0) {
              ~Properties(this_01);
                    /* try { // try from 00faf438 to 010af4a3 has its CatchHandler @ 00faf300 */
              operator_delete(pPVar7);
            }
          }
        }
      }
      else if (*(long *)(this_00 + 0x48) != 0) goto LAB_00faf294;
      resolveInheritance(this_00,(char *)0x0);
      if (param_1 != (char *)0x0) break;
      if (*(undefined8 **)(this + 0x90) == *(undefined8 **)(this + 0x80)) {
        puVar9 = *(undefined8 **)(this + 0x78);
      }
      else {
        puVar9 = *(undefined8 **)(this + 0x90) + 1;
      }
      *(undefined8 **)(this + 0x90) = puVar9;
      if ((puVar9 == *(undefined8 **)(this + 0x80)) ||
         (this_00 = (Properties *)*puVar9, this_00 == (Properties *)0x0)) break;
    } while( true );
  }
LAB_00faf480:
                    /* catch() { ... } // from try @ 00faf41c with catch @ 00faf488 */
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00faf4a4 to 010af5df has its CatchHandler @ 00faf4a4
                       catch() { ... } // from try @ 00faf4a4 with catch @ 00faf4a4
                       catch() { ... } // from try @ 00faf5e8 with catch @ 00faf4a4 */
  return;
}

