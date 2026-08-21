
/* GetDeclaredMethodInternal(void*) */

undefined8 GetDeclaredMethodInternal(void *param_1)

{
  undefined8 uVar1;
  char cVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = *(undefined8 *)param_1;
  uVar1 = *(undefined8 *)((long)param_1 + 8);
  uVar7 = *(undefined8 *)((long)param_1 + 0x10);
  plVar3 = (long *)AttachCurrentThread();
  uVar4 = (**(code **)(*plVar3 + 0xf8))(plVar3,uVar6);
  uVar4 = (**(code **)(*plVar3 + 0x108))
                    (plVar3,uVar4,"getDeclaredMethod",
                     "(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;");
  lVar5 = FUN_00100bf8(plVar3,uVar6,uVar4,uVar1,uVar7);
  cVar2 = (**(code **)(*plVar3 + 0x720))(plVar3);
  if (cVar2 != '\0') {
    (**(code **)(*plVar3 + 0x80))(plVar3);
    (**(code **)(*plVar3 + 0x88))(plVar3);
  }
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_00100ee4(*plVar3,plVar3,lVar5);
  }
  DetachCurrentThread();
  return uVar6;
}

