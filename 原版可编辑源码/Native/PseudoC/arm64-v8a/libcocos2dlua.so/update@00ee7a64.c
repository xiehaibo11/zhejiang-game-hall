
/* cocos2d::ActionManager::update(float) */

void __thiscall cocos2d::ActionManager::update(ActionManager *this,float param_1)

{
  int iVar1;
  Ref *this_00;
  ulong uVar2;
  _hashElement *p_Var3;
  undefined8 uVar4;
  _hashElement *p_Var5;
  long *plVar6;
  long lVar7;
  undefined4 in_register_00005004;
  
  p_Var5 = *(_hashElement **)(this + 0x28);
  while( true ) {
    if (p_Var5 == (_hashElement *)0x0) {
      *(undefined8 *)(this + 0x30) = 0;
      return;
    }
    *(_hashElement **)(this + 0x30) = p_Var5;
    this[0x38] = (ActionManager)0x0;
    p_Var3 = p_Var5;
    if (p_Var5[0x21] == (_hashElement)0x0) break;
LAB_00ee7aa4:
    p_Var5 = *(_hashElement **)(p_Var5 + 0x38);
LAB_00ee7ab0:
    iVar1 = Ref::getReferenceCount(*(Ref **)(p_Var3 + 8));
                    /* catch() { ... } // from try @ 00ee7a1c with catch @ 00ee7ab8 */
    if (iVar1 == 1) {
      p_Var3 = *(_hashElement **)(this + 0x30);
LAB_00ee7a88:
                    /* catch() { ... } // from try @ 00ee7a28 with catch @ 00ee7a88 */
      deleteHashElement(this,p_Var3);
    }
  }
  plVar6 = *(long **)p_Var5;
  *(undefined4 *)(p_Var5 + 0x10) = 0;
                    /* try { // try from 00ee7ad4 to 00fe7b0f has its CatchHandler @ 00ee7ad4
                       catch() { ... } // from try @ 00ee7ad4 with catch @ 00ee7ad4
                       catch() { ... } // from try @ 00ee7b24 with catch @ 00ee7ad4 */
  if (*plVar6 < 1) goto LAB_00ee7aa4;
  lVar7 = 0;
  do {
                    /* try { // try from 00ee7b10 to 00fe7b23 has its CatchHandler @ 00ee7b5c */
    plVar6 = *(long **)(plVar6[2] + lVar7 * 8);
    *(long **)(p_Var3 + 0x18) = plVar6;
    if (plVar6 != (long *)0x0) {
      p_Var3[0x20] = (_hashElement)0x0;
                    /* try { // try from 00ee7b24 to 00fe7b77 has its CatchHandler @ 00ee7ad4 */
      (**(code **)(*plVar6 + 0x40))(CONCAT44(in_register_00005004,param_1));
      this_00 = *(Ref **)(*(long *)(this + 0x30) + 0x18);
      if (*(char *)(*(long *)(this + 0x30) + 0x20) == '\0') {
        uVar2 = (**(code **)(*(long *)this_00 + 0x28))();
        if ((uVar2 & 1) != 0) {
                    /* catch() { ... } // from try @ 00ee7b10 with catch @ 00ee7b5c */
          (**(code **)(**(long **)(*(long *)(this + 0x30) + 0x18) + 0x38))();
          uVar4 = *(undefined8 *)(*(long *)(this + 0x30) + 0x18);
          *(undefined8 *)(*(long *)(this + 0x30) + 0x18) = 0;
                    /* try { // try from 00ee7b78 to 00fe7bd3 has its CatchHandler @ 00ee7b78
                       catch() { ... } // from try @ 00ee7b78 with catch @ 00ee7b78
                       catch() { ... } // from try @ 00ee7be4 with catch @ 00ee7b78 */
          (**(code **)(*(long *)this + 0x28))(this,uVar4);
        }
      }
      else {
        Ref::release(this_00);
      }
      p_Var3 = *(_hashElement **)(this + 0x30);
      *(undefined8 *)(p_Var3 + 0x18) = 0;
    }
    plVar6 = *(long **)p_Var3;
    lVar7 = (long)*(int *)(p_Var3 + 0x10) + 1;
    *(int *)(p_Var3 + 0x10) = (int)lVar7;
  } while (lVar7 < *plVar6);
  p_Var5 = *(_hashElement **)(p_Var5 + 0x38);
  if ((this[0x38] == (ActionManager)0x0) || (*plVar6 != 0)) goto LAB_00ee7ab0;
  goto LAB_00ee7a88;
}

