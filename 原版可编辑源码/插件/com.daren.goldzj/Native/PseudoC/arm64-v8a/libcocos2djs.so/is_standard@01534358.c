
/* v8::internal::RegExpCharacterClass::is_standard(v8::internal::Zone*) */

undefined8 __thiscall
v8::internal::RegExpCharacterClass::is_standard(RegExpCharacterClass *this,Zone *param_1)

{
  ZoneList *pZVar1;
  ZoneList *pZVar2;
  undefined2 uVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  
  if (((byte)this[0x1c] & 1) != 0) {
    return 0;
  }
  if (*(short *)(this + 0x10) != 0) {
    return 1;
  }
  plVar4 = *(long **)(this + 8);
  if (plVar4 == (long *)0x0) {
    pZVar1 = *(ZoneList **)(param_1 + 0x10);
    lVar7 = *(long *)(param_1 + 0x18);
    if ((ulong)(lVar7 - (long)pZVar1) < 0x10) {
      pZVar1 = (ZoneList *)Zone::NewExpand(param_1,0x10);
      pZVar2 = *(ZoneList **)(param_1 + 0x10);
      lVar7 = *(long *)(param_1 + 0x18);
    }
    else {
      pZVar2 = pZVar1 + 0x10;
      *(ZoneList **)(param_1 + 0x10) = pZVar2;
    }
    if ((ulong)(lVar7 - (long)pZVar2) < 0x10) {
      pZVar2 = (ZoneList *)Zone::NewExpand(param_1,0x10);
    }
    else {
      *(ZoneList **)(param_1 + 0x10) = pZVar2 + 0x10;
    }
    *(ZoneList **)pZVar1 = pZVar2;
    *(undefined8 *)(pZVar1 + 8) = 2;
    *(ZoneList **)(this + 8) = pZVar1;
    CharacterRange::AddClassEscape((char)this[0x10],pZVar1,param_1);
    plVar4 = *(long **)(this + 8);
  }
  iVar5 = *(int *)((long)plVar4 + 0xc);
  if (iVar5 == 10) {
    plVar4 = (long *)*plVar4;
    if (*plVar4 != 0xd00000009) {
      return 0;
    }
    if (plVar4[1] != 0x2000000020) {
      return 0;
    }
    if (plVar4[2] != 0xa0000000a0) {
      return 0;
    }
    if (plVar4[3] != 0x168000001680) {
      return 0;
    }
    if (plVar4[4] != 0x200a00002000) {
      return 0;
    }
    if (plVar4[5] != 0x202900002028) {
      return 0;
    }
    if (plVar4[6] != 0x202f0000202f) {
      return 0;
    }
    if (plVar4[7] != 0x205f0000205f) {
      return 0;
    }
    if (plVar4[8] != 0x300000003000) {
      return 0;
    }
    if (plVar4[9] != 0xfeff0000feff) {
      return 0;
    }
    uVar3 = 0x73;
  }
  else {
    if (plVar4 == (long *)0x0) {
      pZVar1 = *(ZoneList **)(param_1 + 0x10);
      lVar7 = *(long *)(param_1 + 0x18);
      if ((ulong)(lVar7 - (long)pZVar1) < 0x10) {
        pZVar1 = (ZoneList *)Zone::NewExpand(param_1,0x10);
        pZVar2 = *(ZoneList **)(param_1 + 0x10);
        lVar7 = *(long *)(param_1 + 0x18);
      }
      else {
        pZVar2 = pZVar1 + 0x10;
        *(ZoneList **)(param_1 + 0x10) = pZVar2;
      }
      if ((ulong)(lVar7 - (long)pZVar2) < 0x10) {
        pZVar2 = (ZoneList *)Zone::NewExpand(param_1,0x10);
      }
      else {
        *(ZoneList **)(param_1 + 0x10) = pZVar2 + 0x10;
      }
      *(ZoneList **)pZVar1 = pZVar2;
      *(undefined8 *)(pZVar1 + 8) = 2;
      *(ZoneList **)(this + 8) = pZVar1;
      CharacterRange::AddClassEscape((char)this[0x10],pZVar1,param_1);
      plVar4 = *(long **)(this + 8);
      iVar5 = *(int *)((long)plVar4 + 0xc);
    }
    if (iVar5 == 0xb) {
      plVar4 = (long *)*plVar4;
      if (*plVar4 != 0x800000000) {
        return 0;
      }
      if (plVar4[1] != 0x1f0000000e) {
        return 0;
      }
      if (plVar4[2] != 0x9f00000021) {
        return 0;
      }
      if (plVar4[3] != 0x167f000000a1) {
        return 0;
      }
      if (plVar4[4] != 0x1fff00001681) {
        return 0;
      }
      if (plVar4[5] != 0x20270000200b) {
        return 0;
      }
      if (plVar4[6] != 0x202e0000202a) {
        return 0;
      }
      if (plVar4[7] != 0x205e00002030) {
        return 0;
      }
      if (plVar4[8] != 0x2fff00002060) {
        return 0;
      }
      if (plVar4[9] != 0xfefe00003001) {
        return 0;
      }
      if (plVar4[10] != 0x10ffff0000ff00) {
        return 0;
      }
      uVar3 = 0x53;
    }
    else {
      if (plVar4 == (long *)0x0) {
        pZVar1 = *(ZoneList **)(param_1 + 0x10);
        lVar7 = *(long *)(param_1 + 0x18);
        if ((ulong)(lVar7 - (long)pZVar1) < 0x10) {
          pZVar1 = (ZoneList *)Zone::NewExpand(param_1,0x10);
          pZVar2 = *(ZoneList **)(param_1 + 0x10);
          lVar7 = *(long *)(param_1 + 0x18);
        }
        else {
          pZVar2 = pZVar1 + 0x10;
          *(ZoneList **)(param_1 + 0x10) = pZVar2;
        }
        if ((ulong)(lVar7 - (long)pZVar2) < 0x10) {
          pZVar2 = (ZoneList *)Zone::NewExpand(param_1,0x10);
        }
        else {
          *(ZoneList **)(param_1 + 0x10) = pZVar2 + 0x10;
        }
        *(ZoneList **)pZVar1 = pZVar2;
        *(undefined8 *)(pZVar1 + 8) = 2;
        *(ZoneList **)(this + 8) = pZVar1;
        CharacterRange::AddClassEscape((char)this[0x10],pZVar1,param_1);
        plVar4 = *(long **)(this + 8);
        iVar5 = *(int *)((long)plVar4 + 0xc);
      }
      if (iVar5 == 4) {
        plVar6 = (long *)*plVar4;
        if ((((*plVar6 == 0x900000000) && (plVar6[1] == 0xc0000000b)) &&
            (plVar6[2] == 0x20270000000e)) && (plVar6[3] == 0x10ffff0000202a)) {
          uVar3 = 0x2e;
          goto LAB_01534828;
        }
      }
      else {
        if (plVar4 == (long *)0x0) {
          pZVar1 = *(ZoneList **)(param_1 + 0x10);
          lVar7 = *(long *)(param_1 + 0x18);
          if ((ulong)(lVar7 - (long)pZVar1) < 0x10) {
            pZVar1 = (ZoneList *)Zone::NewExpand(param_1,0x10);
            pZVar2 = *(ZoneList **)(param_1 + 0x10);
            lVar7 = *(long *)(param_1 + 0x18);
          }
          else {
            pZVar2 = pZVar1 + 0x10;
            *(ZoneList **)(param_1 + 0x10) = pZVar2;
          }
          if ((ulong)(lVar7 - (long)pZVar2) < 0x10) {
            pZVar2 = (ZoneList *)Zone::NewExpand(param_1,0x10);
          }
          else {
            *(ZoneList **)(param_1 + 0x10) = pZVar2 + 0x10;
          }
          *(ZoneList **)pZVar1 = pZVar2;
          *(undefined8 *)(pZVar1 + 8) = 2;
          *(ZoneList **)(this + 8) = pZVar1;
          CharacterRange::AddClassEscape((char)this[0x10],pZVar1,param_1);
          plVar4 = *(long **)(this + 8);
          iVar5 = *(int *)((long)plVar4 + 0xc);
        }
        if (iVar5 == 3) {
          plVar4 = (long *)*plVar4;
          if (*plVar4 != 0xa0000000a) {
            return 0;
          }
          if (plVar4[1] != 0xd0000000d) {
            return 0;
          }
          if (plVar4[2] != 0x202900002028) {
            return 0;
          }
          uVar3 = 0x6e;
          goto LAB_01534828;
        }
        if (plVar4 == (long *)0x0) {
          pZVar1 = *(ZoneList **)(param_1 + 0x10);
          lVar7 = *(long *)(param_1 + 0x18);
          if ((ulong)(lVar7 - (long)pZVar1) < 0x10) {
            pZVar1 = (ZoneList *)Zone::NewExpand(param_1,0x10);
            pZVar2 = *(ZoneList **)(param_1 + 0x10);
            lVar7 = *(long *)(param_1 + 0x18);
          }
          else {
            pZVar2 = pZVar1 + 0x10;
            *(ZoneList **)(param_1 + 0x10) = pZVar2;
          }
          if ((ulong)(lVar7 - (long)pZVar2) < 0x10) {
            pZVar2 = (ZoneList *)Zone::NewExpand(param_1,0x10);
          }
          else {
            *(ZoneList **)(param_1 + 0x10) = pZVar2 + 0x10;
          }
          *(ZoneList **)pZVar1 = pZVar2;
          *(undefined8 *)(pZVar1 + 8) = 2;
          *(ZoneList **)(this + 8) = pZVar1;
          CharacterRange::AddClassEscape((char)this[0x10],pZVar1,param_1);
          plVar4 = *(long **)(this + 8);
          iVar5 = *(int *)((long)plVar4 + 0xc);
        }
        if (iVar5 != 4) {
          if (plVar4 == (long *)0x0) {
            pZVar1 = *(ZoneList **)(param_1 + 0x10);
            lVar7 = *(long *)(param_1 + 0x18);
            if ((ulong)(lVar7 - (long)pZVar1) < 0x10) {
              pZVar1 = (ZoneList *)Zone::NewExpand(param_1,0x10);
              pZVar2 = *(ZoneList **)(param_1 + 0x10);
              lVar7 = *(long *)(param_1 + 0x18);
            }
            else {
              pZVar2 = pZVar1 + 0x10;
              *(ZoneList **)(param_1 + 0x10) = pZVar2;
            }
            if ((ulong)(lVar7 - (long)pZVar2) < 0x10) {
              pZVar2 = (ZoneList *)Zone::NewExpand(param_1,0x10);
            }
            else {
              *(ZoneList **)(param_1 + 0x10) = pZVar2 + 0x10;
            }
            *(ZoneList **)pZVar1 = pZVar2;
            *(undefined8 *)(pZVar1 + 8) = 2;
            *(ZoneList **)(this + 8) = pZVar1;
            CharacterRange::AddClassEscape((char)this[0x10],pZVar1,param_1);
            plVar4 = *(long **)(this + 8);
            iVar5 = *(int *)((long)plVar4 + 0xc);
          }
          if (iVar5 != 5) {
            return 0;
          }
          plVar4 = (long *)*plVar4;
          if (*plVar4 != 0x2f00000000) {
            return 0;
          }
          if (plVar4[1] != 0x400000003a) {
            return 0;
          }
          if (plVar4[2] != 0x5e0000005b) {
            return 0;
          }
          if (plVar4[3] != 0x6000000060) {
            return 0;
          }
          if (plVar4[4] != 0x10ffff0000007b) {
            return 0;
          }
          uVar3 = 0x57;
          goto LAB_01534828;
        }
      }
      plVar4 = (long *)*plVar4;
      if (((*plVar4 != 0x3900000030) || (plVar4[1] != 0x5a00000041)) ||
         ((plVar4[2] != 0x5f0000005f || (plVar4[3] != 0x7a00000061)))) {
        return 0;
      }
      uVar3 = 0x77;
    }
  }
LAB_01534828:
  *(undefined2 *)(this + 0x10) = uVar3;
  return 1;
}

