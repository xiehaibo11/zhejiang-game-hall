
void FUN_00d6bb4c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  lVar2 = Json_getItem(param_1,"curve");
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x10) == 5) {
      plVar3 = (long *)**(long **)(lVar2 + 8);
      plVar4 = (long *)*plVar3;
      spCurveTimeline_setCurve
                (*(undefined4 *)((long)*(long **)(lVar2 + 8) + 0x24),
                 *(undefined4 *)((long)plVar3 + 0x24),*(undefined4 *)((long)plVar4 + 0x24),
                 *(undefined4 *)(*plVar4 + 0x24),param_2,param_3);
      return;
    }
    if ((*(int *)(lVar2 + 0x10) == 4) &&
       (iVar1 = strcmp(*(char **)(lVar2 + 0x18),"stepped"), iVar1 == 0)) {
      spCurveTimeline_setStepped(param_2,param_3);
      return;
    }
  }
  return;
}

