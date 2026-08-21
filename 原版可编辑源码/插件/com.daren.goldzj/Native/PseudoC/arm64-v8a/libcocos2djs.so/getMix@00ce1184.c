
/* spine::AnimationStateData::getMix(spine::Animation*, spine::Animation*) */

undefined4 __thiscall
spine::AnimationStateData::getMix(AnimationStateData *this,Animation *param_1,Animation *param_2)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  AnimationStateData *pAVar4;
  char *__s2;
  char *__s2_00;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  undefined **local_80;
  Animation *pAStack_78;
  Animation *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_80 = &PTR__SpineObject_01c8e5d8;
  lVar5 = *(long *)(this + 0x20);
  pAStack_78 = param_1;
  local_70 = param_2;
  if (lVar5 != 0) {
    __s2 = *(char **)(param_1 + 0x58);
    lVar6 = lVar5;
    do {
      pcVar3 = *(char **)(*(long *)(lVar6 + 0x10) + 0x58);
      if ((pcVar3 == __s2) ||
         ((((__s2 != (char *)0x0 && (pcVar3 != (char *)0x0)) &&
           (*(long *)(*(long *)(lVar6 + 0x10) + 0x50) == *(long *)(param_1 + 0x50))) &&
          (iVar2 = strcmp(pcVar3,__s2), iVar2 == 0)))) {
        __s2_00 = *(char **)(param_2 + 0x58);
        pcVar3 = *(char **)(*(long *)(lVar6 + 0x18) + 0x58);
        if ((pcVar3 == __s2_00) ||
           (((*(long *)(*(long *)(lVar6 + 0x18) + 0x50) == *(long *)(param_2 + 0x50) &&
             (pcVar3 != (char *)0x0)) &&
            ((__s2_00 != (char *)0x0 && (iVar2 = strcmp(pcVar3,__s2_00), iVar2 == 0))))))
        goto LAB_00ce1298;
      }
      lVar6 = *(long *)(lVar6 + 0x28);
    } while (lVar6 != 0);
  }
  pAVar4 = this + 0x10;
LAB_00ce1258:
  uVar7 = *(undefined4 *)pAVar4;
  goto LAB_00ce125c;
LAB_00ce1298:
  do {
    pcVar3 = *(char **)(*(long *)(lVar5 + 0x10) + 0x58);
    if ((pcVar3 == __s2) ||
       (((__s2 != (char *)0x0 && (pcVar3 != (char *)0x0)) &&
        ((*(long *)(*(long *)(lVar5 + 0x10) + 0x50) == *(long *)(param_1 + 0x50) &&
         (iVar2 = strcmp(pcVar3,__s2), iVar2 == 0)))))) {
      pcVar3 = *(char **)(*(long *)(lVar5 + 0x18) + 0x58);
      if ((pcVar3 == __s2_00) ||
         ((((*(long *)(*(long *)(lVar5 + 0x18) + 0x50) == *(long *)(param_2 + 0x50) &&
            (pcVar3 != (char *)0x0)) && (__s2_00 != (char *)0x0)) &&
          (iVar2 = strcmp(pcVar3,__s2_00), iVar2 == 0)))) {
        pAVar4 = (AnimationStateData *)(lVar5 + 0x20);
        goto LAB_00ce1258;
      }
    }
    lVar5 = *(long *)(lVar5 + 0x28);
  } while (lVar5 != 0);
  uVar7 = 0;
LAB_00ce125c:
  SpineObject::~SpineObject((SpineObject *)&local_80);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

