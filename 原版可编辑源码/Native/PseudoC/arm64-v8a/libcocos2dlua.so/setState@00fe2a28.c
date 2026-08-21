
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::RenderState::StateBlock::setState(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
cocos2d::RenderState::StateBlock::setState
          (StateBlock *this,basic_string *param_1,basic_string *param_2)

{
  size_t __n;
  size_t sVar1;
  basic_string bVar2;
  long lVar3;
  StateBlock SVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  basic_string *pbVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [8];
  ulong local_78;
  long *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 00fe29f4 with catch @ 00fe2a60 */
  bVar2 = *param_1;
  uVar9 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar9 = *(ulong *)(param_1 + 8);
  }
                    /* catch() { ... } // from try @ 00fe2ab0 with catch @ 00fe2a7c */
  sVar1 = 5;
  if (uVar9 < 6) {
    sVar1 = uVar9;
  }
  if (sVar1 == 0) {
LAB_00fe2aa0:
                    /* try { // try from 00fe2aa8 to 010e2aaf has its CatchHandler @ 00fe2b14 */
                    /* try { // try from 00fe2ab0 to 010e2b2f has its CatchHandler @ 00fe2a7c */
    if (5 < uVar9 == 4 < uVar9) goto LAB_00fe2b24;
    bVar2 = *param_2;
    uVar9 = (ulong)((byte)bVar2 >> 1);
    if (((byte)bVar2 & 1) != 0) {
      uVar9 = *(ulong *)(param_2 + 8);
    }
    sVar1 = 4;
    if (uVar9 < 5) {
      sVar1 = uVar9;
    }
    if (sVar1 == 0) {
LAB_00fe2af8:
      uVar6 = (uint)(4 < uVar9);
      if (uVar9 < 4) {
        uVar6 = 0xffffffff;
      }
    }
    else {
      pbVar8 = *(basic_string **)(param_2 + 0x10);
      if (((byte)bVar2 & 1) == 0) {
        pbVar8 = param_2 + 1;
      }
      uVar6 = memcmp(pbVar8,&DAT_012a5ace,sVar1);
      if (uVar6 == 0) goto LAB_00fe2af8;
    }
    this[0x28] = (StateBlock)(uVar6 == 0);
                    /* catch() { ... } // from try @ 00fe2aa8 with catch @ 00fe2b14 */
    uVar9 = *(ulong *)(this + 0x60) & 0xfffffffe;
    if (uVar6 != 0) {
      uVar9 = *(ulong *)(this + 0x60) | 1;
    }
  }
  else {
    pbVar8 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar8 = param_1 + 1;
    }
    iVar5 = memcmp(pbVar8,"blend",sVar1);
    if (iVar5 == 0) goto LAB_00fe2aa0;
LAB_00fe2b24:
    sVar1 = 8;
    if (uVar9 < 9) {
      sVar1 = uVar9;
    }
    if (sVar1 == 0) {
LAB_00fe2b54:
      if (8 < uVar9 == 7 < uVar9) {
        if (sVar1 != 0) goto LAB_00fe2b98;
        goto LAB_00fe2bb8;
      }
      iVar5 = FUN_00fe33c0(param_2);
      *(int *)(this + 0x2c) = iVar5;
      if ((iVar5 == 1) && (*(int *)(this + 0x30) == 0)) {
        uVar9 = *(ulong *)(this + 0x60) & 0xfffffffd;
                    /* catch() { ... } // from try @ 00fe2f0c with catch @ 00fe2ed4 */
      }
      else {
        uVar9 = *(ulong *)(this + 0x60) | 2;
      }
    }
    else {
      pbVar8 = *(basic_string **)(param_1 + 0x10);
      if (((byte)bVar2 & 1) == 0) {
        pbVar8 = param_1 + 1;
      }
      iVar5 = memcmp(pbVar8,"blendSrc",sVar1);
      if (iVar5 == 0) goto LAB_00fe2b54;
LAB_00fe2b98:
      pbVar8 = *(basic_string **)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 00fe2bd4 with catch @ 00fe2ba0 */
      if (((byte)bVar2 & 1) == 0) {
        pbVar8 = param_1 + 1;
      }
      iVar5 = memcmp(pbVar8,"blendDst",sVar1);
      if (iVar5 == 0) {
LAB_00fe2bb8:
                    /* try { // try from 00fe2bcc to 010e2bd3 has its CatchHandler @ 00fe2c38 */
        if (8 < uVar9 == 7 < uVar9) {
          if (sVar1 != 0) goto LAB_00fe2c04;
          goto LAB_00fe2c24;
        }
                    /* try { // try from 00fe2bd4 to 010e2c53 has its CatchHandler @ 00fe2ba0 */
        iVar5 = FUN_00fe33c0(param_2);
        *(int *)(this + 0x30) = iVar5;
        uVar9 = *(ulong *)(this + 0x60) & 0xfffffffd;
        if (*(int *)(this + 0x2c) != 1 || iVar5 != 0) {
          uVar9 = *(ulong *)(this + 0x60) | 2;
        }
      }
      else {
LAB_00fe2c04:
        pbVar8 = *(basic_string **)(param_1 + 0x10);
        if (((byte)bVar2 & 1) == 0) {
          pbVar8 = param_1 + 1;
        }
        iVar5 = memcmp(pbVar8,"cullFace",sVar1);
        if (iVar5 == 0) {
LAB_00fe2c24:
                    /* catch() { ... } // from try @ 00fe2bcc with catch @ 00fe2c38 */
          if (8 < uVar9 != 7 < uVar9) {
            bVar2 = *param_2;
            uVar9 = (ulong)((byte)bVar2 >> 1);
            if (((byte)bVar2 & 1) != 0) {
              uVar9 = *(ulong *)(param_2 + 8);
            }
                    /* catch() { ... } // from try @ 00fe2c88 with catch @ 00fe2c54 */
            sVar1 = 4;
            if (uVar9 < 5) {
              sVar1 = uVar9;
            }
            if (sVar1 == 0) {
LAB_00fe2c7c:
                    /* try { // try from 00fe2c80 to 010e2c87 has its CatchHandler @ 00fe2cf4 */
              uVar6 = (uint)(4 < uVar9);
              if (uVar9 < 4) {
                uVar6 = 0xffffffff;
              }
            }
            else {
              pbVar8 = *(basic_string **)(param_2 + 0x10);
              if (((byte)bVar2 & 1) == 0) {
                pbVar8 = param_2 + 1;
              }
              uVar6 = memcmp(pbVar8,&DAT_012a5ace,sVar1);
              if (uVar6 == 0) goto LAB_00fe2c7c;
            }
                    /* try { // try from 00fe2c88 to 010e2d0f has its CatchHandler @ 00fe2c54 */
            this[0x21] = (StateBlock)(uVar6 == 0);
            uVar9 = *(ulong *)(this + 0x60) | 4;
            if (uVar6 != 0) {
              uVar9 = *(ulong *)(this + 0x60) & 0xfffffffb;
            }
            goto LAB_00fe2fd8;
          }
        }
        sVar1 = 0xc;
        if (uVar9 < 0xd) {
          sVar1 = uVar9;
        }
        if (sVar1 == 0) {
LAB_00fe2cdc:
          if (0xc < uVar9 == 0xb < uVar9) goto LAB_00fe2d20;
                    /* catch() { ... } // from try @ 00fe2c80 with catch @ 00fe2cf4 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string(local_80,param_2);
          uVar9 = (ulong)(byte)local_80[0];
          if (((byte)local_80[0] & 1) == 0) {
            plVar11 = (long *)((ulong)local_80 | 1);
            plVar13 = (long *)((long)plVar11 + (ulong)((byte)local_80[0] >> 1));
            if (plVar11 != plVar13) {
LAB_00fe2e50:
              do {
                    /* try { // try from 00fe2e50 to 010e2e57 has its CatchHandler @ 00fe2eb8 */
                iVar5 = toupper((int)(char)*plVar11);
                    /* try { // try from 00fe2e58 to 010e2ed3 has its CatchHandler @ 00fe2e20 */
                plVar12 = (long *)((long)plVar11 + 1);
                *(char *)plVar11 = (char)iVar5;
                plVar11 = plVar12;
              } while (plVar13 != plVar12);
              uVar9 = (ulong)(byte)local_80[0];
            }
          }
          else {
            plVar13 = (long *)((long)local_70 + local_78);
            plVar11 = local_70;
            if (local_70 != plVar13) goto LAB_00fe2e50;
          }
          uVar10 = uVar9 >> 1;
          if ((uVar9 & 1) != 0) {
            uVar10 = local_78;
          }
          iVar5 = 0x405;
          if (uVar10 == 0xe) {
                    /* catch() { ... } // from try @ 00fe2fc0 with catch @ 00fe2f88 */
            plVar13 = (long *)((ulong)local_80 | 1);
            if ((uVar9 & 1) != 0) {
              plVar13 = local_70;
            }
            iVar7 = memcmp(plVar13,"FRONT_AND_BACK",0xe);
            iVar5 = 0x408;
            if (iVar7 != 0) {
              iVar5 = 0x405;
            }
          }
          else if (uVar10 == 5) {
            plVar13 = (long *)((ulong)local_80 | 1);
            if ((uVar9 & 1) != 0) {
              plVar13 = local_70;
            }
            iVar7 = memcmp(plVar13,"FRONT",5);
            iVar5 = 0x404;
                    /* catch() { ... } // from try @ 00fe2e50 with catch @ 00fe2eb8 */
            if (iVar7 != 0) {
              iVar5 = 0x405;
            }
          }
          if ((uVar9 & 1) != 0) {
            operator_delete(local_70);
          }
                    /* try { // try from 00fe2fb8 to 010e2fbf has its CatchHandler @ 00fe3028 */
                    /* try { // try from 00fe2fc0 to 010e3043 has its CatchHandler @ 00fe2f88 */
          *(int *)(this + 0x34) = iVar5;
          uVar10 = *(ulong *)(this + 0x60) | 0x40;
          uVar9 = *(ulong *)(this + 0x60) & 0xffffffbf;
          SVar4 = (StateBlock)(iVar5 == 0x405);
        }
        else {
          pbVar8 = *(basic_string **)(param_1 + 0x10);
          if (((byte)bVar2 & 1) == 0) {
            pbVar8 = param_1 + 1;
          }
          iVar5 = memcmp(pbVar8,"cullFaceSide",sVar1);
          if (iVar5 == 0) goto LAB_00fe2cdc;
LAB_00fe2d20:
          sVar1 = 9;
          if (uVar9 < 10) {
            sVar1 = uVar9;
          }
          if (sVar1 == 0) {
LAB_00fe2d50:
            if (9 < uVar9 == 8 < uVar9) {
                    /* try { // try from 00fe2d94 to 010e2d97 has its CatchHandler @ 00fe2e04 */
              if (sVar1 != 0) goto LAB_00fe2d98;
              if (9 < uVar9 != 8 < uVar9) goto LAB_00fe2dd0;
              goto LAB_00fe3024;
            }
                    /* catch() { ... } // from try @ 00fe2d98 with catch @ 00fe2d68 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string(local_80,param_2);
            uVar9 = (ulong)(byte)local_80[0];
            if (((byte)local_80[0] & 1) == 0) {
              plVar11 = (long *)((ulong)local_80 | 1);
              plVar13 = (long *)((long)plVar11 + (ulong)((byte)local_80[0] >> 1));
              if (plVar11 != plVar13) {
LAB_00fe2ee8:
                do {
                  iVar5 = toupper((int)(char)*plVar11);
                  plVar12 = (long *)((long)plVar11 + 1);
                  *(char *)plVar11 = (char)iVar5;
                  plVar11 = plVar12;
                } while (plVar13 != plVar12);
                uVar9 = (ulong)(byte)local_80[0];
              }
            }
            else {
              plVar13 = (long *)((long)local_70 + local_78);
              plVar11 = local_70;
              if (local_70 != plVar13) goto LAB_00fe2ee8;
            }
                    /* try { // try from 00fe2f04 to 010e2f0b has its CatchHandler @ 00fe2f6c */
                    /* try { // try from 00fe2f0c to 010e2f87 has its CatchHandler @ 00fe2ed4 */
            uVar10 = uVar9 >> 1;
            if ((uVar9 & 1) != 0) {
              uVar10 = local_78;
            }
            if (uVar10 == 2) {
              plVar13 = (long *)((ulong)local_80 | 1);
              if ((uVar9 & 1) != 0) {
                plVar13 = local_70;
              }
              iVar5 = 0x900;
              if ((short)*plVar13 != 0x5743) {
                iVar5 = 0x901;
              }
            }
            else {
              iVar5 = 0x901;
            }
            if ((uVar9 & 1) != 0) {
              operator_delete(local_70);
            }
            *(int *)(this + 0x38) = iVar5;
                    /* catch() { ... } // from try @ 00fe2f04 with catch @ 00fe2f6c */
            uVar10 = *(ulong *)(this + 0x60) | 0x800;
            uVar9 = *(ulong *)(this + 0x60) & 0xfffff7ff;
            SVar4 = (StateBlock)(iVar5 == 0x901);
          }
          else {
            pbVar8 = *(basic_string **)(param_1 + 0x10);
            if (((byte)bVar2 & 1) == 0) {
              pbVar8 = param_1 + 1;
            }
            iVar5 = memcmp(pbVar8,"frontFace",sVar1);
            if (iVar5 == 0) goto LAB_00fe2d50;
LAB_00fe2d98:
                    /* try { // try from 00fe2d98 to 010e2e1f has its CatchHandler @ 00fe2d68 */
            pbVar8 = *(basic_string **)(param_1 + 0x10);
            if (((byte)bVar2 & 1) == 0) {
              pbVar8 = param_1 + 1;
            }
            iVar5 = memcmp(pbVar8,"depthTest",sVar1);
            if ((iVar5 == 0) && (9 < uVar9 != 8 < uVar9)) {
LAB_00fe2dd0:
              bVar2 = *param_2;
              uVar9 = (ulong)((byte)bVar2 >> 1);
              if (((byte)bVar2 & 1) != 0) {
                uVar9 = *(ulong *)(param_2 + 8);
              }
              sVar1 = 4;
              if (uVar9 < 5) {
                sVar1 = uVar9;
              }
              if (sVar1 == 0) {
LAB_00fe2e10:
                uVar6 = (uint)(4 < uVar9);
                if (uVar9 < 4) {
                  uVar6 = 0xffffffff;
                }
              }
              else {
                pbVar8 = *(basic_string **)(param_2 + 0x10);
                    /* catch() { ... } // from try @ 00fe2d94 with catch @ 00fe2e04 */
                if (((byte)bVar2 & 1) == 0) {
                  pbVar8 = param_2 + 1;
                }
                uVar6 = memcmp(pbVar8,&DAT_012a5ace,sVar1);
                if (uVar6 == 0) goto LAB_00fe2e10;
              }
                    /* catch() { ... } // from try @ 00fe2e58 with catch @ 00fe2e20 */
              SVar4 = (StateBlock)(uVar6 == 0);
              this[0x22] = SVar4;
              uVar10 = *(ulong *)(this + 0x60) | 8;
              uVar9 = *(ulong *)(this + 0x60) & 0xfffffff7;
            }
            else {
LAB_00fe3024:
                    /* catch() { ... } // from try @ 00fe2fb8 with catch @ 00fe3028 */
              __n = 10;
              if (uVar9 < 0xb) {
                __n = uVar9;
              }
              if (__n == 0) {
                if (10 < uVar9 != 9 < uVar9) goto LAB_00fe3068;
              }
              else {
                pbVar8 = *(basic_string **)(param_1 + 0x10);
                if (((byte)bVar2 & 1) == 0) {
                  pbVar8 = param_1 + 1;
                }
                iVar5 = memcmp(pbVar8,"depthWrite",__n);
                if ((iVar5 == 0) && (10 < uVar9 != 9 < uVar9)) {
LAB_00fe3068:
                  bVar2 = *param_2;
                  uVar9 = (ulong)((byte)bVar2 >> 1);
                  if (((byte)bVar2 & 1) != 0) {
                    uVar9 = *(ulong *)(param_2 + 8);
                  }
                  sVar1 = 4;
                  if (uVar9 < 5) {
                    sVar1 = uVar9;
                  }
                  if (sVar1 == 0) {
LAB_00fe30a8:
                    uVar6 = (uint)(4 < uVar9);
                    if (uVar9 < 4) {
                      uVar6 = 0xffffffff;
                    }
                  }
                  else {
                    pbVar8 = *(basic_string **)(param_2 + 0x10);
                    if (((byte)bVar2 & 1) == 0) {
                      pbVar8 = param_2 + 1;
                    }
                    uVar6 = memcmp(pbVar8,&DAT_012a5ace,sVar1);
                    if (uVar6 == 0) goto LAB_00fe30a8;
                  }
                    /* catch() { ... } // from try @ 00fe3158 with catch @ 00fe30d0 */
                  this[0x23] = (StateBlock)(uVar6 == 0);
                  uVar9 = *(ulong *)(this + 0x60) | 0x10;
                  if (uVar6 != 0) {
                    uVar9 = *(ulong *)(this + 0x60) & 0xffffffef;
                  }
                  goto LAB_00fe2fd8;
                }
              }
              if (sVar1 == 0) {
                if (9 < uVar9 == 8 < uVar9) goto LAB_00fe2fdc;
              }
              else {
                pbVar8 = *(basic_string **)(param_1 + 0x10);
                if (((byte)bVar2 & 1) == 0) {
                  pbVar8 = param_1 + 1;
                }
                    /* try { // try from 00fe3120 to 010e3127 has its CatchHandler @ 00fe31e0 */
                iVar5 = memcmp(pbVar8,"depthFunc",sVar1);
                if ((iVar5 != 0) || (9 < uVar9 == 8 < uVar9)) goto LAB_00fe2fdc;
              }
                    /* try { // try from 00fe3148 to 010e3157 has its CatchHandler @ 00fe31e8 */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string(local_80,param_2);
                    /* try { // try from 00fe3158 to 010e320b has its CatchHandler @ 00fe30d0 */
              uVar9 = (ulong)(byte)local_80[0];
              if (((byte)local_80[0] & 1) == 0) {
                plVar11 = (long *)((ulong)local_80 | 1);
                plVar13 = (long *)((long)plVar11 + (ulong)((byte)local_80[0] >> 1));
                if (plVar11 != plVar13) {
LAB_00fe3184:
                  do {
                    iVar5 = toupper((int)(char)*plVar11);
                    plVar12 = (long *)((long)plVar11 + 1);
                    *(char *)plVar11 = (char)iVar5;
                    plVar11 = plVar12;
                  } while (plVar13 != plVar12);
                  uVar9 = (ulong)(byte)local_80[0];
                }
              }
              else {
                plVar13 = (long *)((long)local_70 + local_78);
                plVar11 = local_70;
                if (local_70 != plVar13) goto LAB_00fe3184;
              }
              uVar10 = uVar9 >> 1;
              if ((uVar9 & 1) != 0) {
                uVar10 = local_78;
              }
              switch(uVar10) {
              case 5:
                    /* catch() { ... } // from try @ 00fe3120 with catch @ 00fe31e0 */
                plVar13 = (long *)((ulong)local_80 | 1);
                if ((uVar9 & 1) != 0) {
                  plVar13 = local_70;
                }
                    /* catch() { ... } // from try @ 00fe3148 with catch @ 00fe31e8 */
                iVar5 = memcmp(plVar13,"NEVER",5);
                if (iVar5 == 0) {
                  iVar5 = 0x200;
                }
                else {
                  iVar7 = memcmp(plVar13,"EQUAL",5);
                  iVar5 = 0x201;
                  if (iVar7 == 0) {
                    iVar5 = 0x202;
                  }
                }
                break;
              case 6:
                plVar13 = (long *)((ulong)local_80 | 1);
                if ((uVar9 & 1) != 0) {
                  plVar13 = local_70;
                }
                iVar5 = memcmp(plVar13,"LEQUAL",6);
                if (iVar5 == 0) {
                  iVar5 = 0x203;
                }
                else {
                  iVar5 = memcmp(plVar13,"GEQUAL",6);
                  if (iVar5 != 0) {
                    iVar7 = memcmp(plVar13,"ALWAYS",6);
                    iVar5 = 0x207;
                    goto LAB_00fe32cc;
                  }
                  iVar5 = 0x206;
                }
                break;
              case 7:
                plVar13 = (long *)((ulong)local_80 | 1);
                if ((uVar9 & 1) != 0) {
                  plVar13 = local_70;
                }
                iVar7 = memcmp(plVar13,"GREATER",7);
                iVar5 = 0x204;
LAB_00fe32cc:
                if (iVar7 != 0) {
                  iVar5 = 0x201;
                }
                break;
              case 8:
                plVar13 = (long *)((ulong)local_80 | 1);
                if ((uVar9 & 1) != 0) {
                  plVar13 = local_70;
                }
                iVar5 = 0x205;
                if (*plVar13 != 0x4c41555145544f4e) {
                  iVar5 = 0x201;
                }
                break;
              default:
                iVar5 = 0x201;
              }
              if ((uVar9 & 1) != 0) {
                operator_delete(local_70);
              }
              SVar4 = (StateBlock)(iVar5 == 0x201);
              uVar10 = *(ulong *)(this + 0x60) | 0x20;
              uVar9 = *(ulong *)(this + 0x60) & 0xffffffdf;
              *(int *)(this + 0x24) = iVar5;
            }
          }
        }
        if (!(bool)SVar4) {
          uVar9 = uVar10;
        }
      }
    }
  }
LAB_00fe2fd8:
  *(ulong *)(this + 0x60) = uVar9;
LAB_00fe2fdc:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

