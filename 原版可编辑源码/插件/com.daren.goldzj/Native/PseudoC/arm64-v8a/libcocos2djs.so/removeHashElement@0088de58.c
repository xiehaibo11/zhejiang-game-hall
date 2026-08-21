
/* cocos2d::Scheduler::removeHashElement(cocos2d::_hashSelectorEntry*) */

void __thiscall cocos2d::Scheduler::removeHashElement(Scheduler *this,_hashSelectorEntry *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  ccArrayFree((_ccArray **)param_1);
  lVar3 = *(long *)(param_1 + 0x30);
  if ((lVar3 == 0) && (*(long *)(param_1 + 0x38) == 0)) {
    free((void *)**(undefined8 **)(*(long *)this + 0x28));
    free(*(void **)(*(long *)this + 0x28));
    *(undefined8 *)this = 0;
    goto LAB_0088df2c;
  }
  lVar5 = *(long *)this;
  lVar6 = *(long *)(lVar5 + 0x28);
  lVar2 = *(long *)(lVar6 + 0x20);
  if ((_hashSelectorEntry *)(*(long *)(lVar6 + 0x18) - lVar2) == param_1) {
    *(long *)(lVar6 + 0x18) = lVar2 + lVar3;
    lVar6 = *(long *)(param_1 + 0x38);
    if (lVar3 == 0) goto LAB_0088df4c;
LAB_0088dea4:
    *(long *)(lVar2 + lVar3 + 0x10) = lVar6;
    lVar6 = lVar5;
    lVar2 = *(long *)(param_1 + 0x38);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x38);
    if (lVar3 != 0) goto LAB_0088dea4;
LAB_0088df4c:
    *(long *)this = lVar6;
    lVar2 = lVar6;
  }
  if (lVar2 != 0) {
    *(long *)(*(long *)(*(long *)(lVar6 + 0x28) + 0x20) + lVar2 + 8) = lVar3;
  }
  plVar4 = *(long **)(lVar6 + 0x28);
  puVar1 = (undefined8 *)(*plVar4 + (ulong)((int)plVar4[1] - 1U & *(uint *)(param_1 + 0x5c)) * 0x10)
  ;
  *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + -1;
  if ((_hashSelectorEntry *)*puVar1 == param_1 + 0x28) {
    *puVar1 = *(undefined8 *)(param_1 + 0x48);
  }
  lVar3 = *(long *)(param_1 + 0x40);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(param_1 + 0x48);
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    *(long *)(*(long *)(param_1 + 0x48) + 0x18) = lVar3;
  }
  *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
LAB_0088df2c:
  free(param_1);
  return;
}

