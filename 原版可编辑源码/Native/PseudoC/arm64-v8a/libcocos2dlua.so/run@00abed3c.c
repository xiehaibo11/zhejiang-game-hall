
/* fairygui::ControllerAction::run(fairygui::GController*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
fairygui::ControllerAction::run
          (ControllerAction *this,GController *param_1,basic_string *param_2,basic_string *param_3)

{
  size_t sVar1;
  size_t sVar2;
  byte *pbVar3;
  basic_string *pbVar4;
  byte bVar5;
  int iVar6;
  code *UNRECOVERED_JUMPTABLE;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  pbVar10 = *(byte **)(this + 8);
  pbVar3 = *(byte **)(this + 0x10);
  if (pbVar10 == pbVar3) {
LAB_00abee10:
    pbVar10 = *(byte **)(this + 0x20);
    pbVar3 = *(byte **)(this + 0x28);
    if (pbVar10 == pbVar3) {
      lVar7 = *(long *)this;
    }
    else {
      sVar2 = *(size_t *)(param_3 + 8);
      pbVar4 = *(basic_string **)(param_3 + 0x10);
      if (((byte)*param_3 & 1) == 0) {
        pbVar4 = param_3 + 1;
        sVar2 = (ulong)((byte)*param_3 >> 1);
      }
      do {
        bVar5 = *pbVar10;
        sVar1 = (ulong)(bVar5 >> 1);
        if ((bVar5 & 1) != 0) {
          sVar1 = *(size_t *)(pbVar10 + 8);
        }
        if (sVar1 == sVar2) {
          pbVar9 = *(byte **)(pbVar10 + 0x10);
          if ((bVar5 & 1) == 0) {
            pbVar9 = pbVar10 + 1;
          }
          pbVar11 = pbVar10;
          if ((bVar5 & 1) == 0) {
            if (sVar2 == 0) break;
            uVar8 = 0;
            while (*(basic_string *)(pbVar10 + uVar8 + 1) == pbVar4[uVar8]) {
              uVar8 = uVar8 + 1;
              if (bVar5 >> 1 == uVar8) goto LAB_00abeec8;
            }
          }
          else if ((sVar2 == 0) || (iVar6 = memcmp(pbVar9,pbVar4,sVar2), iVar6 == 0)) break;
        }
        pbVar10 = pbVar10 + 0x18;
        pbVar11 = pbVar3;
      } while (pbVar10 != pbVar3);
LAB_00abeec8:
      lVar7 = *(long *)this;
      if (pbVar3 == pbVar11) goto LAB_00abeedc;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar7 + 0x18);
  }
  else {
    sVar2 = *(size_t *)(param_2 + 8);
    pbVar4 = *(basic_string **)(param_2 + 0x10);
    if (((byte)*param_2 & 1) == 0) {
      pbVar4 = param_2 + 1;
      sVar2 = (ulong)((byte)*param_2 >> 1);
    }
    do {
      bVar5 = *pbVar10;
      sVar1 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        sVar1 = *(size_t *)(pbVar10 + 8);
      }
      if (sVar1 == sVar2) {
        pbVar9 = *(byte **)(pbVar10 + 0x10);
        if ((bVar5 & 1) == 0) {
          pbVar9 = pbVar10 + 1;
        }
        pbVar11 = pbVar10;
        if ((bVar5 & 1) == 0) {
          if (sVar2 == 0) break;
          uVar8 = 0;
          while (*(basic_string *)(pbVar10 + uVar8 + 1) == pbVar4[uVar8]) {
            uVar8 = uVar8 + 1;
            if (bVar5 >> 1 == uVar8) goto LAB_00abee08;
          }
        }
        else if ((sVar2 == 0) || (iVar6 = memcmp(pbVar9,pbVar4,sVar2), iVar6 == 0)) break;
      }
      pbVar10 = pbVar10 + 0x18;
      pbVar11 = pbVar3;
    } while (pbVar10 != pbVar3);
LAB_00abee08:
    if (pbVar3 != pbVar11) goto LAB_00abee10;
    lVar7 = *(long *)this;
LAB_00abeedc:
    UNRECOVERED_JUMPTABLE = *(code **)(lVar7 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00abeefc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,param_1);
  return;
}

