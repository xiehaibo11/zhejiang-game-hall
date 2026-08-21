
/* cocos2d::Console::printSceneGraph(int, cocos2d::Node*, int) */

int __thiscall
cocos2d::Console::printSceneGraph(Console *this,int param_1,Node *param_2,int param_3)

{
  ulong uVar1;
  void *pvVar2;
  char *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  int iVar8;
  undefined8 *puVar9;
  byte local_80 [16];
  void *local_70;
  long local_68;
  undefined8 *puVar10;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  iVar8 = param_3;
  if (0 < param_3) {
    do {
      while( true ) {
        uVar1 = (ulong)(Utility::_prompt >> 1);
        if ((Utility::_prompt & 1) != 0) {
          uVar1 = DAT_0178fc00;
        }
        if (uVar1 == 1) break;
LAB_00f94a6c:
        sendto(param_1,"-",1,0,(sockaddr *)0x0,0);
        iVar8 = iVar8 + -1;
        if (iVar8 == 0) goto LAB_00f94ae0;
      }
      pcVar3 = DAT_0178fc08;
      if ((Utility::_prompt & 1) == 0) {
        pcVar3 = &DAT_0178fbf9;
      }
      if (*pcVar3 != '-') goto LAB_00f94a6c;
      fwrite("bad parameter error: a buffer is the prompt string.\n",0x34,1,
             (FILE *)pthread_rwlock_tryrdlock);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
LAB_00f94ae0:
  (**(code **)(*(long *)param_2 + 0x10))(local_80,param_2);
  pvVar2 = (void *)((ulong)local_80 | 1);
  if ((local_80[0] & 1) != 0) {
    pvVar2 = local_70;
  }
  Utility::mydprintf(param_1," %s\n",pvVar2);
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  plVar7 = (long *)(**(code **)(*(long *)param_2 + 0x240))(param_2);
  puVar4 = (undefined8 *)plVar7[1];
  if ((undefined8 *)*plVar7 == puVar4) {
    iVar8 = 1;
  }
  else {
    iVar8 = 1;
    puVar9 = (undefined8 *)*plVar7;
    do {
      puVar10 = puVar9 + 1;
      iVar6 = printSceneGraph(this,param_1,(Node *)*puVar9,param_3 + 1);
      iVar8 = iVar6 + iVar8;
      puVar9 = puVar10;
    } while (puVar4 != puVar10);
  }
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar8;
}

