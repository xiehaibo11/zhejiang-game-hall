
/* cocos2d::__Dictionary::removeObjectForElememt(cocos2d::DictElement*) */

void __thiscall
cocos2d::__Dictionary::removeObjectForElememt(__Dictionary *this,DictElement *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  if (param_1 == (DictElement *)0x0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x118);
  if ((lVar3 == 0) && (*(long *)(param_1 + 0x120) == 0)) {
    free((void *)**(undefined8 **)(*(long *)(this + 0x30) + 0x110));
    free(*(void **)(*(long *)(this + 0x30) + 0x110));
    *(undefined8 *)(this + 0x30) = 0;
    goto LAB_00ffb458;
  }
  lVar5 = *(long *)(this + 0x30);
  lVar6 = *(long *)(lVar5 + 0x110);
  lVar2 = *(long *)(lVar6 + 0x20);
  if (param_1 == (DictElement *)(*(long *)(lVar6 + 0x18) - lVar2)) {
    *(long *)(lVar6 + 0x18) = lVar2 + lVar3;
    lVar6 = *(long *)(param_1 + 0x120);
    if (lVar3 == 0) goto LAB_00ffb484;
LAB_00ffb3d0:
    *(long *)(lVar2 + lVar3 + 0x10) = lVar6;
    lVar6 = lVar5;
    lVar2 = *(long *)(param_1 + 0x120);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x120);
    if (lVar3 != 0) goto LAB_00ffb3d0;
LAB_00ffb484:
    *(long *)(this + 0x30) = lVar6;
    lVar2 = lVar6;
  }
  if (lVar2 != 0) {
    *(long *)(*(long *)(*(long *)(lVar6 + 0x110) + 0x20) + lVar2 + 8) = lVar3;
  }
  plVar4 = *(long **)(lVar6 + 0x110);
  puVar1 = (undefined8 *)
           (*plVar4 + (ulong)((int)plVar4[1] - 1U & *(uint *)(param_1 + 0x144)) * 0x10);
  *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + -1;
  if ((DictElement *)*puVar1 == param_1 + 0x110) {
    *puVar1 = *(undefined8 *)(param_1 + 0x130);
  }
  lVar3 = *(long *)(param_1 + 0x128);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(param_1 + 0x130);
  }
  if (*(long *)(param_1 + 0x130) != 0) {
    *(long *)(*(long *)(param_1 + 0x130) + 0x18) = lVar3;
  }
  *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
LAB_00ffb458:
  Ref::release(*(Ref **)(param_1 + 0x108));
                    /* try { // try from 00ffb468 to 010fb5ab has its CatchHandler @ 00ffb468
                       catch() { ... } // from try @ 00ffb468 with catch @ 00ffb468
                       catch() { ... } // from try @ 00ffb5b4 with catch @ 00ffb468 */
  operator_delete(param_1);
  return;
}

