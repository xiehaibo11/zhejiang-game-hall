
/* spine::AnimationStateData::setMix(spine::Animation*, spine::Animation*, float) */

void __thiscall
spine::AnimationStateData::setMix
          (AnimationStateData *this,Animation *param_1,Animation *param_2,float param_3)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  undefined8 *puVar4;
  char *__s2;
  char *__s2_00;
  long lVar5;
  undefined **local_80;
  Animation *local_78;
  Animation *pAStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_80 = &PTR__SpineObject_01c8e5d8;
  lVar5 = *(long *)(this + 0x20);
  local_78 = param_1;
  pAStack_70 = param_2;
  if (lVar5 != 0) {
    __s2_00 = *(char **)(param_1 + 0x58);
    do {
      pcVar3 = *(char **)(*(long *)(lVar5 + 0x10) + 0x58);
      if ((pcVar3 == __s2_00) ||
         ((((__s2_00 != (char *)0x0 && (pcVar3 != (char *)0x0)) &&
           (*(long *)(*(long *)(lVar5 + 0x10) + 0x50) == *(long *)(param_1 + 0x50))) &&
          (iVar2 = strcmp(pcVar3,__s2_00), iVar2 == 0)))) {
        __s2 = *(char **)(param_2 + 0x58);
        pcVar3 = *(char **)(*(long *)(lVar5 + 0x18) + 0x58);
        if ((pcVar3 == __s2) ||
           (((*(long *)(*(long *)(lVar5 + 0x18) + 0x50) == *(long *)(param_2 + 0x50) &&
             (pcVar3 != (char *)0x0)) &&
            ((__s2 != (char *)0x0 && (iVar2 = strcmp(pcVar3,__s2), iVar2 == 0)))))) {
          *(float *)(lVar5 + 0x20) = param_3;
          *(Animation **)(lVar5 + 0x18) = pAStack_70;
          *(Animation **)(lVar5 + 0x10) = local_78;
          goto LAB_00ce1148;
        }
      }
      lVar5 = *(long *)(lVar5 + 0x28);
    } while (lVar5 != 0);
  }
  puVar4 = SpineObject::operator_new
                     (0x38,
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/HashMap.h",
                      0x73);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[1] = &PTR__SpineObject_01c8e5d8;
  *puVar4 = &PTR__Entry_01c8e660;
  *(float *)(puVar4 + 4) = param_3;
  puVar4[3] = pAStack_70;
  puVar4[2] = local_78;
  lVar5 = *(long *)(this + 0x20);
  *(undefined8 **)(this + 0x20) = puVar4;
  if (lVar5 != 0) {
    *(undefined8 **)(lVar5 + 0x30) = puVar4;
    puVar4[5] = lVar5;
  }
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
LAB_00ce1148:
  SpineObject::~SpineObject((SpineObject *)&local_80);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

