
/* WARNING: Type propagation algorithm not settling */
/* tinyxml2::XMLNode::ParseDeep(char*, tinyxml2::StrPair*) */

char * __thiscall tinyxml2::XMLNode::ParseDeep(XMLNode *this,char *param_1,StrPair *param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  char cVar8;
  char *unaff_x21;
  long *plVar9;
  XMLNode *pXVar10;
  long lVar11;
  undefined4 local_88;
  void *local_80;
  void *pvStack_78;
  XMLNode *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  do {
    if ((param_1 == (char *)0x0) || (*param_1 == '\0')) goto LAB_01022c74;
    local_70 = (XMLNode *)0x0;
                    /* try { // try from 010229a0 to 011229df has its CatchHandler @ 010229a0
                       catch(type#1 @ 00000000) { ... } // from try @ 010229a0 with catch @ 010229a0
                       catch(type#1 @ 00000000) { ... } // from try @ 01022b40 with catch @ 010229a0
                        */
    lVar3 = XMLDocument::Identify(*(XMLDocument **)(this + 8),param_1,&local_70);
    pXVar10 = local_70;
    if ((lVar3 == 0) || (local_70 == (XMLNode *)0x0)) goto LAB_01022c74;
    local_88 = 0;
    local_80 = (void *)0x0;
    pvStack_78 = (void *)0x0;
    param_1 = (char *)(**(code **)(*(long *)local_70 + 0x78))(local_70,lVar3,&local_88);
    if (param_1 == (char *)0x0) {
      plVar9 = *(long **)(pXVar10 + 0x50);
      (**(code **)(*(long *)pXVar10 + 0x80))(pXVar10);
      (**(code **)(*plVar9 + 0x20))(plVar9,local_70);
      local_70 = (XMLNode *)0x0;
      lVar3 = *(long *)(this + 8);
      if (*(int *)(lVar3 + 0x5c) == 0) {
        *(undefined4 *)(lVar3 + 0x5c) = 0x11;
        *(undefined8 *)(lVar3 + 0x68) = 0;
        *(undefined8 *)(lVar3 + 0x70) = 0;
      }
      param_1 = (char *)0x0;
      iVar7 = 3;
    }
    else {
                    /* try { // try from 010229e0 to 011229e7 has its CatchHandler @ 01022bb0 */
      lVar3 = (*(code *)**(undefined8 **)pXVar10)(pXVar10);
      if ((lVar3 == 0) ||
         (lVar3 = (*(code *)**(undefined8 **)local_70)(), *(int *)(lVar3 + 0x58) != 2)) {
        lVar3 = (*(code *)**(undefined8 **)local_70)();
        pXVar10 = local_70;
        if (lVar3 != 0) {
          if (local_80 == pvStack_78) {
            if (*(int *)(lVar3 + 0x58) == 0) {
              lVar3 = *(long *)(this + 8);
              uVar4 = StrPair::GetStr((StrPair *)(local_70 + 0x18));
              goto LAB_01022c1c;
            }
          }
          else {
            if (*(int *)(lVar3 + 0x58) != 0) {
              lVar3 = *(long *)(this + 8);
              uVar4 = StrPair::GetStr((StrPair *)(local_70 + 0x18));
LAB_01022c1c:
              *(undefined4 *)(lVar3 + 0x5c) = 0x10;
              *(undefined8 *)(lVar3 + 0x68) = uVar4;
              *(undefined8 *)(lVar3 + 0x70) = 0;
              if (local_70 != (XMLNode *)0x0) {
                plVar9 = *(long **)(local_70 + 0x50);
                (**(code **)(*(long *)local_70 + 0x80))();
                (**(code **)(*plVar9 + 0x20))(plVar9,local_70);
              }
              iVar7 = 0;
              param_1 = (char *)0x0;
              local_70 = (XMLNode *)0x0;
              goto joined_r0x01022bd4;
            }
                    /* try { // try from 01022b40 to 01122cab has its CatchHandler @ 010229a0 */
            pcVar5 = (char *)StrPair::GetStr((StrPair *)&local_88);
            pXVar10 = local_70;
            pcVar6 = (char *)StrPair::GetStr((StrPair *)(local_70 + 0x18));
            if (pcVar5 != pcVar6) {
              cVar8 = *pcVar5;
              pXVar10 = local_70;
              if (cVar8 == '\0') {
LAB_01022c04:
                if (*pcVar6 != '\0') {
LAB_01022c0c:
                  lVar3 = *(long *)(this + 8);
                  uVar4 = StrPair::GetStr((StrPair *)(local_70 + 0x18));
                  goto LAB_01022c1c;
                }
              }
              else {
                lVar3 = 0;
                do {
                  iVar7 = (int)lVar3;
                  if (((iVar7 == 0x7fffffff) || (pcVar6[lVar3] == '\0')) || (pcVar6[lVar3] != cVar8)
                     ) {
                    bVar2 = false;
                    goto joined_r0x01022bfc;
                  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01022a7c with catch @ 01022b88
                        */
                  cVar8 = pcVar5[lVar3 + 1];
                  lVar3 = lVar3 + 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01022a44 with catch @ 01022b90
                        */
                } while (cVar8 != '\0');
                bVar2 = true;
                iVar7 = (int)lVar3;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01022a30 with catch @ 01022ba0
                        */
joined_r0x01022bfc:
                if (iVar7 != 0x7fffffff) {
                  pcVar6 = pcVar6 + lVar3;
                  if (bVar2) goto LAB_01022c04;
                  goto LAB_01022c0c;
                }
              }
            }
          }
        }
        if (pXVar10 != (XMLNode *)0x0) {
                    /* try { // try from 01022b28 to 01122b3f has its CatchHandler @ 01022bb8 */
          lVar3 = *(long *)(this + 0x38);
          if (lVar3 == 0) {
            *(XMLNode **)(this + 0x30) = pXVar10;
            *(XMLNode **)(this + 0x38) = pXVar10;
            *(long *)(pXVar10 + 0x40) = 0;
          }
          else {
            *(XMLNode **)(lVar3 + 0x48) = pXVar10;
            *(long *)(pXVar10 + 0x40) = lVar3;
            *(XMLNode **)(this + 0x38) = pXVar10;
          }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010229e0 with catch @ 01022bb0
                        */
          *(long *)(pXVar10 + 0x48) = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01022b28 with catch @ 01022bb8
                        */
          *(XMLNode **)(pXVar10 + 0x10) = this;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01022a0c with catch @ 01022bbc
                        */
          (**(code **)(**(long **)(pXVar10 + 0x50) + 0x28))();
        }
        iVar7 = 0;
      }
      else {
                    /* try { // try from 01022a0c to 01122a2b has its CatchHandler @ 01022bbc */
        if (param_2 != (StrPair *)0x0) {
          lVar11 = *(long *)(local_70 + 0x20);
          lVar3 = *(long *)(local_70 + 0x18);
          *(long *)(param_2 + 0x10) = *(long *)(local_70 + 0x28);
          *(long *)(param_2 + 8) = lVar11;
          *(long *)param_2 = lVar3;
        }
        (**(code **)(**(long **)(local_70 + 0x50) + 0x28))();
                    /* try { // try from 01022a30 to 01122a37 has its CatchHandler @ 01022ba0 */
        if (local_70 != (XMLNode *)0x0) {
          plVar9 = *(long **)(local_70 + 0x50);
                    /* try { // try from 01022a44 to 01122a4b has its CatchHandler @ 01022b90 */
          (**(code **)(*(long *)local_70 + 0x80))();
          (**(code **)(*plVar9 + 0x20))(plVar9,local_70);
        }
        iVar7 = 1;
        unaff_x21 = param_1;
      }
    }
joined_r0x01022bd4:
    if (((local_88._1_1_ >> 1 & 1) != 0) && (local_80 != (void *)0x0)) {
      operator_delete__(local_80);
    }
  } while (iVar7 == 0);
  if (iVar7 != 1) {
LAB_01022c74:
    unaff_x21 = (char *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return unaff_x21;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 01022cac to 01122caf has its CatchHandler @ 01022ce0 */
  __stack_chk_fail();
}

