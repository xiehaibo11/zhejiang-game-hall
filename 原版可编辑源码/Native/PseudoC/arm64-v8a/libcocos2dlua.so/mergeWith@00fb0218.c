
/* cocos2d::Properties::mergeWith(cocos2d::Properties*) */

void __thiscall cocos2d::Properties::mergeWith(Properties *this,Properties *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  Properties *pPVar5;
  Properties *pPVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  Properties *pPVar11;
  Properties *pPVar12;
  long *plVar13;
  long *plVar14;
  Properties *local_170 [32];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  pbVar10 = *(byte **)(param_1 + 0x58);
  pbVar7 = *(byte **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x80);
  *(byte **)(param_1 + 0x70) = pbVar10;
  if (pbVar7 != pbVar10) {
    if ((*pbVar10 & 1) == 0) {
      pbVar9 = pbVar10 + 1;
      if (pbVar10 != pbVar7) goto LAB_00fb0298;
      goto LAB_00fb02ac;
    }
    pbVar9 = *(byte **)(pbVar10 + 0x10);
    while (pbVar9 != (byte *)0x0) {
      if (pbVar10 == pbVar7) {
LAB_00fb02ac:
        pbVar10 = (byte *)0x0;
      }
      else {
LAB_00fb0298:
        if ((pbVar10[0x18] & 1) == 0) {
          pbVar10 = pbVar10 + 0x19;
        }
        else {
          pbVar10 = *(byte **)(pbVar10 + 0x28);
          if (pbVar10 == (byte *)0x0) goto LAB_00fb02e0;
        }
        uVar4 = FUN_00fafa28(pbVar10,local_170);
        if ((uVar4 & 1) != 0) {
          pbVar10 = (byte *)getVariable(param_1,(char *)local_170,(char *)0x0);
        }
      }
LAB_00fb02e0:
      setString(this,(char *)pbVar9,(char *)pbVar10);
      pbVar7 = *(byte **)(param_1 + 0x60);
      if (*(byte **)(param_1 + 0x70) == pbVar7) {
        pbVar10 = *(byte **)(param_1 + 0x58);
      }
      else {
        pbVar10 = *(byte **)(param_1 + 0x70) + 0x30;
      }
      *(byte **)(param_1 + 0x70) = pbVar10;
      if (pbVar10 == pbVar7) break;
      if ((*pbVar10 & 1) == 0) {
        pbVar9 = pbVar10 + 1;
      }
      else {
        pbVar9 = *(byte **)(pbVar10 + 0x10);
      }
    }
  }
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(this + 0x60);
  if (*(long **)(param_1 + 0x90) == *(long **)(param_1 + 0x80)) {
    plVar14 = *(long **)(param_1 + 0x78);
  }
  else {
    plVar14 = *(long **)(param_1 + 0x90) + 1;
  }
  *(long **)(param_1 + 0x90) = plVar14;
  if ((plVar14 != *(long **)(param_1 + 0x80)) &&
     (pPVar11 = (Properties *)*plVar14, pPVar11 != (Properties *)0x0)) {
    do {
      plVar14 = *(long **)(this + 0x78);
      plVar13 = *(long **)(this + 0x80);
      *(undefined8 *)(this + 0x70) = *(undefined8 *)(this + 0x60);
      *(long **)(this + 0x90) = plVar14;
      if ((plVar13 == plVar14) || (pPVar12 = (Properties *)*plVar14, pPVar12 == (Properties *)0x0))
      {
LAB_00fb0464:
        pPVar12 = operator_new(0xb0,(nothrow_t *)&std::nothrow);
        if (pPVar12 != (Properties *)0x0) {
          Properties(pPVar12,pPVar11);
          plVar13 = *(long **)(this + 0x80);
        }
        local_170[0] = pPVar12;
        if (plVar13 == *(long **)(this + 0x88)) {
          std::__ndk1::vector<cocos2d::Properties*,std::__ndk1::allocator<cocos2d::Properties*>>::
          __push_back_slow_path<cocos2d::Properties*const&>
                    ((vector<cocos2d::Properties*,std::__ndk1::allocator<cocos2d::Properties*>> *)
                     (this + 0x78),local_170);
          *(undefined8 *)(this + 0x90) = *(undefined8 *)(this + 0x80);
        }
        else {
          *plVar13 = (long)pPVar12;
          *(long **)(this + 0x80) = plVar13 + 1;
          *(long **)(this + 0x90) = plVar13 + 1;
        }
      }
      else {
        bVar2 = false;
        do {
          if (((byte)pPVar12[0x10] & 1) == 0) {
            pPVar5 = pPVar12 + 0x11;
          }
          else {
            pPVar5 = *(Properties **)(pPVar12 + 0x20);
          }
          pPVar6 = pPVar11 + 0x11;
          if (((byte)pPVar11[0x10] & 1) != 0) {
            pPVar6 = *(Properties **)(pPVar11 + 0x20);
          }
          iVar3 = strcmp((char *)pPVar5,(char *)pPVar6);
          if (iVar3 == 0) {
            if (((byte)pPVar12[0x28] & 1) == 0) {
              pPVar5 = pPVar12 + 0x29;
            }
            else {
              pPVar5 = *(Properties **)(pPVar12 + 0x38);
            }
            pPVar6 = pPVar11 + 0x29;
            if (((byte)pPVar11[0x28] & 1) != 0) {
              pPVar6 = *(Properties **)(pPVar11 + 0x38);
            }
            iVar3 = strcmp((char *)pPVar5,(char *)pPVar6);
            if (iVar3 != 0) goto LAB_00fb0408;
            mergeWith(pPVar12,pPVar11);
            plVar13 = *(long **)(this + 0x80);
            plVar14 = *(long **)(this + 0x90);
            bVar2 = true;
            if (plVar14 == plVar13) goto LAB_00fb043c;
LAB_00fb0410:
            plVar14 = plVar14 + 1;
          }
          else {
LAB_00fb0408:
            if (plVar14 != plVar13) goto LAB_00fb0410;
LAB_00fb043c:
            plVar14 = *(long **)(this + 0x78);
          }
          *(long **)(this + 0x90) = plVar14;
        } while ((plVar14 != plVar13) &&
                (pPVar12 = (Properties *)*plVar14, pPVar12 != (Properties *)0x0));
        if (!bVar2) goto LAB_00fb0464;
      }
      if (*(undefined8 **)(param_1 + 0x90) == *(undefined8 **)(param_1 + 0x80)) {
        puVar8 = *(undefined8 **)(param_1 + 0x78);
      }
      else {
        puVar8 = *(undefined8 **)(param_1 + 0x90) + 1;
      }
      *(undefined8 **)(param_1 + 0x90) = puVar8;
    } while ((puVar8 != *(undefined8 **)(param_1 + 0x80)) &&
            (pPVar11 = (Properties *)*puVar8, pPVar11 != (Properties *)0x0));
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

