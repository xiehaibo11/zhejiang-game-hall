
/* WARNING: Type propagation algorithm not settling */
/* tinyxml2::XMLNode::ParseDeep(char*, tinyxml2::StrPair*) */

char * __thiscall tinyxml2::XMLNode::ParseDeep(XMLNode *this,char *param_1,StrPair *param_2)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  char cVar9;
  char *unaff_x21;
  long *plVar10;
  XMLNode *pXVar11;
  long lVar12;
  undefined4 local_88;
  void *local_80;
  void *pvStack_78;
  XMLNode *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  while ((param_1 != (char *)0x0 && (*param_1 != '\0'))) {
    local_70 = (XMLNode *)0x0;
    lVar5 = XMLDocument::Identify(*(XMLDocument **)(this + 8),param_1,&local_70);
    pXVar11 = local_70;
    if ((lVar5 == 0) || (local_70 == (XMLNode *)0x0)) break;
    local_88 = 0;
    local_80 = (void *)0x0;
    pvStack_78 = (void *)0x0;
    param_1 = (char *)(**(code **)(*(long *)local_70 + 0x78))(local_70,lVar5,&local_88);
    if (param_1 == (char *)0x0) {
      plVar10 = *(long **)(pXVar11 + 0x50);
      (**(code **)(*(long *)pXVar11 + 0x80))(pXVar11);
      (**(code **)(*plVar10 + 0x20))(plVar10,local_70);
      local_70 = (XMLNode *)0x0;
      lVar5 = *(long *)(this + 8);
      if (*(int *)(lVar5 + 0x5c) == 0) {
        *(undefined4 *)(lVar5 + 0x5c) = 0x11;
        *(undefined8 *)(lVar5 + 0x68) = 0;
        *(undefined8 *)(lVar5 + 0x70) = 0;
      }
      param_1 = (char *)0x0;
      iVar8 = 3;
      bVar3 = local_88._1_1_;
    }
    else {
      lVar5 = (*(code *)**(undefined8 **)pXVar11)(pXVar11);
      if ((lVar5 == 0) ||
         (lVar5 = (*(code *)**(undefined8 **)local_70)(), *(int *)(lVar5 + 0x58) != 2)) {
        lVar5 = (*(code *)**(undefined8 **)local_70)();
        pXVar11 = local_70;
        if (lVar5 == 0) {
LAB_009131fc:
          if (pXVar11 != (XMLNode *)0x0) {
            lVar5 = *(long *)(this + 0x38);
            if (lVar5 == 0) {
              *(XMLNode **)(this + 0x30) = pXVar11;
              *(XMLNode **)(this + 0x38) = pXVar11;
              *(long *)(pXVar11 + 0x40) = 0;
            }
            else {
              *(XMLNode **)(lVar5 + 0x48) = pXVar11;
              *(long *)(pXVar11 + 0x40) = lVar5;
              *(XMLNode **)(this + 0x38) = pXVar11;
            }
            *(long *)(pXVar11 + 0x48) = 0;
            *(XMLNode **)(pXVar11 + 0x10) = this;
            (**(code **)(**(long **)(pXVar11 + 0x50) + 0x28))();
            iVar8 = 0;
            bVar3 = local_88._1_1_;
            goto joined_r0x009134d8;
          }
        }
        else {
          if (local_80 == pvStack_78) {
            if (*(int *)(lVar5 + 0x58) != 0) goto LAB_009131fc;
          }
          else if (*(int *)(lVar5 + 0x58) == 0) {
            pcVar6 = (char *)StrPair::GetStr((StrPair *)&local_88);
            pXVar11 = local_70;
            pcVar7 = (char *)StrPair::GetStr((StrPair *)(local_70 + 0x18));
            if (pcVar6 != pcVar7) {
              cVar9 = *pcVar6;
              pXVar11 = local_70;
              if (cVar9 == '\0') {
                cVar9 = *pcVar7;
              }
              else {
                lVar5 = 0;
                do {
                  iVar8 = (int)lVar5;
                  if (((iVar8 == 0x7fffffff) || (pcVar7[lVar5] == '\0')) || (pcVar7[lVar5] != cVar9)
                     ) {
                    bVar2 = false;
                    goto joined_r0x0091327c;
                  }
                  cVar9 = pcVar6[lVar5 + 1];
                  lVar5 = lVar5 + 1;
                } while (cVar9 != '\0');
                bVar2 = true;
                iVar8 = (int)lVar5;
joined_r0x0091327c:
                if (iVar8 == 0x7fffffff) goto LAB_009131fc;
                if (!bVar2) goto LAB_0091328c;
                cVar9 = pcVar7[lVar5];
              }
              if (cVar9 != '\0') goto LAB_0091328c;
            }
            goto LAB_009131fc;
          }
LAB_0091328c:
          lVar5 = *(long *)(this + 8);
          uVar4 = StrPair::GetStr((StrPair *)(local_70 + 0x18));
          *(undefined4 *)(lVar5 + 0x5c) = 0x10;
          *(undefined8 *)(lVar5 + 0x68) = uVar4;
          *(undefined8 *)(lVar5 + 0x70) = 0;
          if (local_70 != (XMLNode *)0x0) {
            plVar10 = *(long **)(local_70 + 0x50);
            (**(code **)(*(long *)local_70 + 0x80))();
            (**(code **)(*plVar10 + 0x20))(plVar10,local_70);
          }
          param_1 = (char *)0x0;
          local_70 = (XMLNode *)0x0;
        }
        iVar8 = 0;
        bVar3 = local_88._1_1_;
      }
      else {
        if (param_2 != (StrPair *)0x0) {
          lVar12 = *(long *)(local_70 + 0x20);
          lVar5 = *(long *)(local_70 + 0x18);
          *(long *)(param_2 + 0x10) = *(long *)(local_70 + 0x28);
          *(long *)(param_2 + 8) = lVar12;
          *(long *)param_2 = lVar5;
        }
        (**(code **)(**(long **)(local_70 + 0x50) + 0x28))();
        if (local_70 != (XMLNode *)0x0) {
          plVar10 = *(long **)(local_70 + 0x50);
          (**(code **)(*(long *)local_70 + 0x80))();
          (**(code **)(*plVar10 + 0x20))(plVar10,local_70);
        }
        iVar8 = 1;
        unaff_x21 = param_1;
        bVar3 = local_88._1_1_;
      }
    }
joined_r0x009134d8:
    if (((bVar3 >> 1 & 1) != 0) && (local_80 != (void *)0x0)) {
      operator_delete__(local_80);
    }
    if (iVar8 == 1) goto LAB_009134ec;
    if (iVar8 == 3) break;
  }
  unaff_x21 = (char *)0x0;
LAB_009134ec:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return unaff_x21;
}

