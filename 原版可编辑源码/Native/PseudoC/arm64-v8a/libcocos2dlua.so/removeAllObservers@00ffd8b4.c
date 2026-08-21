
/* cocos2d::__NotificationCenter::removeAllObservers(cocos2d::Ref*) */

undefined4 __thiscall
cocos2d::__NotificationCenter::removeAllObservers(__NotificationCenter *this,Ref *param_1)

{
  __Array *this_00;
  Ref *pRVar1;
  __Array *this_01;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  this_00 = (__Array *)__Array::create();
  this_01 = *(__Array **)(this + 0x28);
                    /* try { // try from 00ffd8dc to 010fd8e7 has its CatchHandler @ 00ffd8e8 */
  if (this_01 != (__Array *)0x0) {
    lVar2 = **(long **)(this_01 + 0x30);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ffd7c0 with catch @ 00ffd8e8
                       catch(type#1 @ 00000000) { ... } // from try @ 00ffd8dc with catch @ 00ffd8e8
                       try { // try from 00ffd8e8 to 010fd8ff has its CatchHandler @ 00ffd6f8 */
    if (0 < lVar2) {
      puVar3 = (undefined8 *)(*(long **)(this_01 + 0x30))[2];
      puVar4 = puVar3 + lVar2 + -1;
                    /* try { // try from 00ffd900 to 010fd967 has its CatchHandler @ 00ffd900
                       catch() { ... } // from try @ 00ffd900 with catch @ 00ffd900
                       catch() { ... } // from try @ 00ffdb54 with catch @ 00ffd900
                       catch() { ... } // from try @ 00ffddb0 with catch @ 00ffd900 */
      if (puVar3 <= puVar4) {
        do {
          pRVar1 = (Ref *)*puVar3;
          if (pRVar1 == (Ref *)0x0) break;
          if (*(Ref **)(pRVar1 + 0x28) == param_1) {
            __Array::addObject(this_00,pRVar1);
          }
          puVar3 = puVar3 + 1;
        } while (puVar3 <= puVar4);
        this_01 = *(__Array **)(this + 0x28);
      }
    }
  }
  __Array::removeObjectsInArray(this_01,this_00);
  return **(undefined4 **)(this_00 + 0x30);
}

