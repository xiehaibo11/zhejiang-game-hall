
/* cocos2d::network::Uri::TEMPNAMEPLACEHOLDERVALUE(cocos2d::network::Uri const&) const */

undefined8 __thiscall cocos2d::network::Uri::operator==(Uri *this,Uri *param_1)

{
  size_t sVar1;
  size_t sVar2;
  long lVar3;
  Uri UVar4;
  Uri UVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  Uri *pUVar9;
  Uri *pUVar10;
  long lVar11;
  
                    /* try { // try from 009ee57c to 00aee583 has its CatchHandler @ 009eede8 */
                    /* try { // try from 009ee584 to 00aee5cf has its CatchHandler @ 009ee1e4 */
  if ((*this == *param_1) && (this[1] == param_1[1])) {
    UVar4 = this[8];
    UVar5 = param_1[8];
    sVar1 = (ulong)((byte)UVar4 >> 1);
    if (((byte)UVar4 & 1) != 0) {
      sVar1 = *(size_t *)(this + 0x10);
    }
    sVar2 = (ulong)((byte)UVar5 >> 1);
    if (((byte)UVar5 & 1) != 0) {
      sVar2 = *(size_t *)(param_1 + 0x10);
    }
    if (sVar1 == sVar2) {
      pUVar9 = *(Uri **)(this + 0x18);
      pUVar10 = *(Uri **)(param_1 + 0x18);
      if (((byte)UVar4 & 1) == 0) {
        pUVar9 = this + 9;
      }
                    /* try { // try from 009ee5d0 to 00aee5d7 has its CatchHandler @ 009eeed8 */
      if (((byte)UVar5 & 1) == 0) {
        pUVar10 = param_1 + 9;
      }
      if (((byte)UVar4 & 1) == 0) {
        if (sVar1 != 0) {
          pUVar9 = this + 9;
          lVar8 = -(ulong)((byte)UVar4 >> 1);
          do {
            if (*pUVar9 != *pUVar10) {
              return 0;
            }
            pUVar9 = pUVar9 + 1;
            lVar8 = lVar8 + 1;
            pUVar10 = pUVar10 + 1;
          } while (lVar8 != 0);
        }
      }
      else if ((sVar1 != 0) && (iVar6 = memcmp(pUVar9,pUVar10,sVar1), iVar6 != 0)) {
        return 0;
      }
      UVar4 = this[0x20];
      UVar5 = param_1[0x20];
      sVar1 = (ulong)((byte)UVar4 >> 1);
      if (((byte)UVar4 & 1) != 0) {
        sVar1 = *(size_t *)(this + 0x28);
      }
                    /* try { // try from 009ee640 to 00aee647 has its CatchHandler @ 009eedd0 */
      sVar2 = (ulong)((byte)UVar5 >> 1);
      if (((byte)UVar5 & 1) != 0) {
        sVar2 = *(size_t *)(param_1 + 0x28);
      }
                    /* try { // try from 009ee648 to 00aee6b7 has its CatchHandler @ 009ee1e4 */
      if (sVar1 == sVar2) {
        pUVar9 = *(Uri **)(this + 0x30);
        pUVar10 = *(Uri **)(param_1 + 0x30);
        if (((byte)UVar4 & 1) == 0) {
          pUVar9 = this + 0x21;
        }
        if (((byte)UVar5 & 1) == 0) {
          pUVar10 = param_1 + 0x21;
        }
        if (((byte)UVar4 & 1) == 0) {
          if (sVar1 != 0) {
            pUVar9 = this + 0x21;
            lVar8 = -(ulong)((byte)UVar4 >> 1);
            do {
              if (*pUVar9 != *pUVar10) {
                return 0;
              }
              pUVar9 = pUVar9 + 1;
              lVar8 = lVar8 + 1;
              pUVar10 = pUVar10 + 1;
            } while (lVar8 != 0);
          }
        }
        else if ((sVar1 != 0) && (iVar6 = memcmp(pUVar9,pUVar10,sVar1), iVar6 != 0)) {
          return 0;
        }
        UVar4 = this[0x38];
        UVar5 = param_1[0x38];
                    /* try { // try from 009ee6b8 to 00aee6c3 has its CatchHandler @ 009eeed0 */
        sVar1 = (ulong)((byte)UVar4 >> 1);
        if (((byte)UVar4 & 1) != 0) {
          sVar1 = *(size_t *)(this + 0x40);
        }
        sVar2 = (ulong)((byte)UVar5 >> 1);
        if (((byte)UVar5 & 1) != 0) {
          sVar2 = *(size_t *)(param_1 + 0x40);
        }
        if (sVar1 == sVar2) {
          pUVar9 = *(Uri **)(this + 0x48);
          pUVar10 = *(Uri **)(param_1 + 0x48);
          if (((byte)UVar4 & 1) == 0) {
            pUVar9 = this + 0x39;
          }
          if (((byte)UVar5 & 1) == 0) {
            pUVar10 = param_1 + 0x39;
          }
          if (((byte)UVar4 & 1) == 0) {
            if (sVar1 != 0) {
              pUVar9 = this + 0x39;
              lVar8 = -(ulong)((byte)UVar4 >> 1);
              do {
                if (*pUVar9 != *pUVar10) {
                  return 0;
                }
                pUVar9 = pUVar9 + 1;
                lVar8 = lVar8 + 1;
                pUVar10 = pUVar10 + 1;
              } while (lVar8 != 0);
            }
          }
          else if ((sVar1 != 0) && (iVar6 = memcmp(pUVar9,pUVar10,sVar1), iVar6 != 0)) {
            return 0;
          }
                    /* try { // try from 009ee73c to 00aee763 has its CatchHandler @ 009eef00 */
          UVar4 = this[0x50];
          UVar5 = param_1[0x50];
          sVar1 = (ulong)((byte)UVar4 >> 1);
          if (((byte)UVar4 & 1) != 0) {
            sVar1 = *(size_t *)(this + 0x58);
          }
          sVar2 = (ulong)((byte)UVar5 >> 1);
                    /* try { // try from 009ee764 to 00aee76f has its CatchHandler @ 009eeecc */
          if (((byte)UVar5 & 1) != 0) {
            sVar2 = *(size_t *)(param_1 + 0x58);
          }
          if (sVar1 == sVar2) {
            pUVar9 = *(Uri **)(this + 0x60);
            pUVar10 = *(Uri **)(param_1 + 0x60);
                    /* try { // try from 009ee77c to 00aee783 has its CatchHandler @ 009eeee8 */
            if (((byte)UVar4 & 1) == 0) {
              pUVar9 = this + 0x51;
            }
            if (((byte)UVar5 & 1) == 0) {
              pUVar10 = param_1 + 0x51;
            }
            if (((byte)UVar4 & 1) == 0) {
              if (sVar1 != 0) {
                pUVar9 = this + 0x51;
                lVar8 = -(ulong)((byte)UVar4 >> 1);
                do {
                    /* try { // try from 009ee7a0 to 00aee7a7 has its CatchHandler @ 009eedf0 */
                  if (*pUVar9 != *pUVar10) {
                    return 0;
                  }
                    /* try { // try from 009ee7a8 to 00aee883 has its CatchHandler @ 009ee1e4 */
                  pUVar9 = pUVar9 + 1;
                  lVar8 = lVar8 + 1;
                  pUVar10 = pUVar10 + 1;
                } while (lVar8 != 0);
              }
            }
            else if ((sVar1 != 0) && (iVar6 = memcmp(pUVar9,pUVar10,sVar1), iVar6 != 0)) {
              return 0;
            }
            UVar4 = this[0x68];
            UVar5 = param_1[0x68];
            sVar1 = (ulong)((byte)UVar4 >> 1);
            if (((byte)UVar4 & 1) != 0) {
              sVar1 = *(size_t *)(this + 0x70);
            }
            sVar2 = (ulong)((byte)UVar5 >> 1);
            if (((byte)UVar5 & 1) != 0) {
              sVar2 = *(size_t *)(param_1 + 0x70);
            }
            if (sVar1 == sVar2) {
              pUVar9 = *(Uri **)(this + 0x78);
              pUVar10 = *(Uri **)(param_1 + 0x78);
              if (((byte)UVar4 & 1) == 0) {
                pUVar9 = this + 0x69;
              }
              if (((byte)UVar5 & 1) == 0) {
                pUVar10 = param_1 + 0x69;
              }
              if (((byte)UVar4 & 1) == 0) {
                if (sVar1 != 0) {
                  pUVar9 = this + 0x69;
                  lVar8 = -(ulong)((byte)UVar4 >> 1);
                  do {
                    if (*pUVar9 != *pUVar10) {
                      return 0;
                    }
                    pUVar9 = pUVar9 + 1;
                    lVar8 = lVar8 + 1;
                    pUVar10 = pUVar10 + 1;
                  } while (lVar8 != 0);
                }
              }
              else if ((sVar1 != 0) && (iVar6 = memcmp(pUVar9,pUVar10,sVar1), iVar6 != 0)) {
                return 0;
              }
              if ((this[0x80] == param_1[0x80]) &&
                 (*(short *)(this + 0x82) == *(short *)(param_1 + 0x82))) {
                UVar4 = this[0x88];
                    /* try { // try from 009ee884 to 00aee893 has its CatchHandler @ 009eeee8 */
                UVar5 = param_1[0x88];
                sVar1 = (ulong)((byte)UVar4 >> 1);
                    /* try { // try from 009ee89c to 00aee8a7 has its CatchHandler @ 009eee84 */
                if (((byte)UVar4 & 1) != 0) {
                  sVar1 = *(size_t *)(this + 0x90);
                }
                sVar2 = (ulong)((byte)UVar5 >> 1);
                if (((byte)UVar5 & 1) != 0) {
                  sVar2 = *(size_t *)(param_1 + 0x90);
                }
                    /* try { // try from 009ee8a8 to 00aee8bf has its CatchHandler @ 009eee34 */
                if (sVar1 == sVar2) {
                  pUVar9 = *(Uri **)(this + 0x98);
                  pUVar10 = *(Uri **)(param_1 + 0x98);
                  if (((byte)UVar4 & 1) == 0) {
                    pUVar9 = this + 0x89;
                  }
                    /* try { // try from 009ee8c0 to 00aeea4b has its CatchHandler @ 009ee1e4 */
                  if (((byte)UVar5 & 1) == 0) {
                    pUVar10 = param_1 + 0x89;
                  }
                  if (((byte)UVar4 & 1) == 0) {
                    if (sVar1 != 0) {
                      pUVar9 = this + 0x89;
                      lVar8 = -(ulong)((byte)UVar4 >> 1);
                      do {
                        if (*pUVar9 != *pUVar10) {
                          return 0;
                        }
                        pUVar9 = pUVar9 + 1;
                        lVar8 = lVar8 + 1;
                        pUVar10 = pUVar10 + 1;
                      } while (lVar8 != 0);
                    }
                  }
                  else if ((sVar1 != 0) && (iVar6 = memcmp(pUVar9,pUVar10,sVar1), iVar6 != 0)) {
                    return 0;
                  }
                  UVar4 = this[0xa0];
                  UVar5 = param_1[0xa0];
                  sVar1 = (ulong)((byte)UVar4 >> 1);
                  if (((byte)UVar4 & 1) != 0) {
                    sVar1 = *(size_t *)(this + 0xa8);
                  }
                  sVar2 = (ulong)((byte)UVar5 >> 1);
                  if (((byte)UVar5 & 1) != 0) {
                    sVar2 = *(size_t *)(param_1 + 0xa8);
                  }
                  if (sVar1 == sVar2) {
                    pUVar9 = *(Uri **)(this + 0xb0);
                    pUVar10 = *(Uri **)(param_1 + 0xb0);
                    if (((byte)UVar4 & 1) == 0) {
                      pUVar9 = this + 0xa1;
                    }
                    if (((byte)UVar5 & 1) == 0) {
                      pUVar10 = param_1 + 0xa1;
                    }
                    if (((byte)UVar4 & 1) == 0) {
                      if (sVar1 != 0) {
                        pUVar9 = this + 0xa1;
                        lVar8 = -(ulong)((byte)UVar4 >> 1);
                        do {
                          if (*pUVar9 != *pUVar10) {
                            return 0;
                          }
                          pUVar9 = pUVar9 + 1;
                          lVar8 = lVar8 + 1;
                          pUVar10 = pUVar10 + 1;
                        } while (lVar8 != 0);
                      }
                    }
                    else if ((sVar1 != 0) && (iVar6 = memcmp(pUVar9,pUVar10,sVar1), iVar6 != 0)) {
                      return 0;
                    }
                    UVar4 = this[0xb8];
                    UVar5 = param_1[0xb8];
                    sVar1 = (ulong)((byte)UVar4 >> 1);
                    if (((byte)UVar4 & 1) != 0) {
                      sVar1 = *(size_t *)(this + 0xc0);
                    }
                    sVar2 = (ulong)((byte)UVar5 >> 1);
                    if (((byte)UVar5 & 1) != 0) {
                      sVar2 = *(size_t *)(param_1 + 0xc0);
                    }
                    if (sVar1 == sVar2) {
                      pUVar9 = *(Uri **)(this + 200);
                      pUVar10 = *(Uri **)(param_1 + 200);
                      if (((byte)UVar4 & 1) == 0) {
                        pUVar9 = this + 0xb9;
                      }
                      if (((byte)UVar5 & 1) == 0) {
                        pUVar10 = param_1 + 0xb9;
                      }
                      if (((byte)UVar4 & 1) == 0) {
                        if (sVar1 != 0) {
                          pUVar9 = this + 0xb9;
                          lVar8 = -(ulong)((byte)UVar4 >> 1);
                          do {
                            if (*pUVar9 != *pUVar10) {
                              return 0;
                            }
                            pUVar9 = pUVar9 + 1;
                            lVar8 = lVar8 + 1;
                            pUVar10 = pUVar10 + 1;
                          } while (lVar8 != 0);
                        }
                      }
                      else if ((sVar1 != 0) && (iVar6 = memcmp(pUVar9,pUVar10,sVar1), iVar6 != 0)) {
                        return 0;
                      }
                      UVar4 = this[0xd0];
                      UVar5 = param_1[0xd0];
                      sVar1 = (ulong)((byte)UVar4 >> 1);
                    /* try { // try from 009eea4c to 00aeea57 has its CatchHandler @ 009eedcc */
                      if (((byte)UVar4 & 1) != 0) {
                        sVar1 = *(size_t *)(this + 0xd8);
                      }
                      sVar2 = (ulong)((byte)UVar5 >> 1);
                      if (((byte)UVar5 & 1) != 0) {
                        sVar2 = *(size_t *)(param_1 + 0xd8);
                      }
                      if (sVar1 == sVar2) {
                        pUVar9 = *(Uri **)(this + 0xe0);
                        pUVar10 = *(Uri **)(param_1 + 0xe0);
                        if (((byte)UVar4 & 1) == 0) {
                          pUVar9 = this + 0xd1;
                        }
                        if (((byte)UVar5 & 1) == 0) {
                          pUVar10 = param_1 + 0xd1;
                        }
                        if (((byte)UVar4 & 1) == 0) {
                    /* try { // try from 009eea7c to 00aeea8b has its CatchHandler @ 009eedc8 */
                          if (sVar1 != 0) {
                            pUVar9 = this + 0xd1;
                            lVar8 = -(ulong)((byte)UVar4 >> 1);
                            do {
                    /* try { // try from 009eea90 to 00aeeaa7 has its CatchHandler @ 009ef048 */
                              if (*pUVar9 != *pUVar10) {
                                return 0;
                              }
                              pUVar9 = pUVar9 + 1;
                              lVar8 = lVar8 + 1;
                              pUVar10 = pUVar10 + 1;
                            } while (lVar8 != 0);
                          }
                        }
                        else if ((sVar1 != 0) && (iVar6 = memcmp(pUVar9,pUVar10,sVar1), iVar6 != 0))
                        {
                          return 0;
                        }
                        UVar4 = this[0xe8];
                        UVar5 = param_1[0xe8];
                        sVar1 = (ulong)((byte)UVar4 >> 1);
                        if (((byte)UVar4 & 1) != 0) {
                          sVar1 = *(size_t *)(this + 0xf0);
                        }
                        sVar2 = (ulong)((byte)UVar5 >> 1);
                        if (((byte)UVar5 & 1) != 0) {
                          sVar2 = *(size_t *)(param_1 + 0xf0);
                        }
                        if (sVar1 == sVar2) {
                          pUVar9 = *(Uri **)(this + 0xf8);
                          pUVar10 = *(Uri **)(param_1 + 0xf8);
                          if (((byte)UVar4 & 1) == 0) {
                            pUVar9 = this + 0xe9;
                          }
                          if (((byte)UVar5 & 1) == 0) {
                            pUVar10 = param_1 + 0xe9;
                          }
                          if (((byte)UVar4 & 1) == 0) {
                            if (sVar1 != 0) {
                              pUVar9 = this + 0xe9;
                              lVar8 = -(ulong)((byte)UVar4 >> 1);
                              do {
                                if (*pUVar9 != *pUVar10) {
                                  return 0;
                                }
                    /* try { // try from 009eeb28 to 00aeeb2b has its CatchHandler @ 009eee30 */
                                pUVar9 = pUVar9 + 1;
                                lVar8 = lVar8 + 1;
                                pUVar10 = pUVar10 + 1;
                              } while (lVar8 != 0);
                            }
                          }
                          else if ((sVar1 != 0) &&
                                  (iVar6 = memcmp(pUVar9,pUVar10,sVar1), iVar6 != 0)) {
                            return 0;
                          }
                          lVar8 = *(long *)(this + 0x100);
                          lVar3 = *(long *)(this + 0x108);
                          lVar11 = *(long *)(param_1 + 0x100);
                          if (lVar3 - lVar8 == *(long *)(param_1 + 0x108) - lVar11) {
                            if (lVar8 == lVar3) {
                              return 1;
                            }
                            while (uVar7 = FUN_009f1994(lVar8,lVar11), (uVar7 & 1) != 0) {
                              lVar8 = lVar8 + 0x30;
                              lVar11 = lVar11 + 0x30;
                              if (lVar3 == lVar8) {
                                return 1;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* try { // try from 009eeb94 to 00aeeb9b has its CatchHandler @ 009eedec */
                    /* try { // try from 009eeb9c to 00aeebc7 has its CatchHandler @ 009ee1e4 */
  return 0;
}

