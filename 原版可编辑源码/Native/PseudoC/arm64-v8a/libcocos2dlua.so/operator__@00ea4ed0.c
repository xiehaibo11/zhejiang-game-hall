
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
  Uri *pUVar8;
  Uri *pUVar9;
  long lVar10;
  long lVar11;
  
  if ((*this == *param_1) && (this[1] == param_1[1])) {
    UVar4 = this[8];
    UVar5 = param_1[8];
    uVar7 = (ulong)((byte)UVar4 >> 1);
    sVar1 = uVar7;
    if (((byte)UVar4 & 1) != 0) {
      sVar1 = *(size_t *)(this + 0x10);
    }
    sVar2 = (ulong)((byte)UVar5 >> 1);
    if (((byte)UVar5 & 1) != 0) {
      sVar2 = *(size_t *)(param_1 + 0x10);
    }
    if (sVar1 == sVar2) {
      pUVar8 = *(Uri **)(this + 0x18);
      pUVar9 = *(Uri **)(param_1 + 0x18);
      if (((byte)UVar4 & 1) == 0) {
        pUVar8 = this + 9;
      }
      if (((byte)UVar5 & 1) == 0) {
        pUVar9 = param_1 + 9;
      }
      if (((byte)UVar4 & 1) == 0) {
        if (sVar1 != 0) {
          pUVar8 = this + 9;
          do {
            if (*pUVar8 != *pUVar9) {
              return 0;
            }
            uVar7 = uVar7 - 1;
            pUVar8 = pUVar8 + 1;
            pUVar9 = pUVar9 + 1;
          } while (uVar7 != 0);
        }
      }
      else if ((sVar1 != 0) && (iVar6 = memcmp(pUVar8,pUVar9,sVar1), iVar6 != 0)) {
        return 0;
      }
      UVar4 = this[0x20];
      UVar5 = param_1[0x20];
      uVar7 = (ulong)((byte)UVar4 >> 1);
      sVar1 = uVar7;
      if (((byte)UVar4 & 1) != 0) {
        sVar1 = *(size_t *)(this + 0x28);
      }
      sVar2 = (ulong)((byte)UVar5 >> 1);
      if (((byte)UVar5 & 1) != 0) {
        sVar2 = *(size_t *)(param_1 + 0x28);
      }
      if (sVar1 == sVar2) {
        pUVar8 = *(Uri **)(this + 0x30);
        pUVar9 = *(Uri **)(param_1 + 0x30);
        if (((byte)UVar4 & 1) == 0) {
          pUVar8 = this + 0x21;
        }
        if (((byte)UVar5 & 1) == 0) {
          pUVar9 = param_1 + 0x21;
        }
        if (((byte)UVar4 & 1) == 0) {
          if (sVar1 != 0) {
            pUVar8 = this + 0x21;
            do {
              if (*pUVar8 != *pUVar9) {
                return 0;
              }
              uVar7 = uVar7 - 1;
              pUVar8 = pUVar8 + 1;
              pUVar9 = pUVar9 + 1;
            } while (uVar7 != 0);
          }
        }
        else if ((sVar1 != 0) && (iVar6 = memcmp(pUVar8,pUVar9,sVar1), iVar6 != 0)) {
          return 0;
        }
        UVar4 = this[0x38];
        UVar5 = param_1[0x38];
        uVar7 = (ulong)((byte)UVar4 >> 1);
        sVar1 = uVar7;
        if (((byte)UVar4 & 1) != 0) {
          sVar1 = *(size_t *)(this + 0x40);
        }
        sVar2 = (ulong)((byte)UVar5 >> 1);
        if (((byte)UVar5 & 1) != 0) {
          sVar2 = *(size_t *)(param_1 + 0x40);
        }
        if (sVar1 == sVar2) {
          pUVar8 = *(Uri **)(this + 0x48);
          pUVar9 = *(Uri **)(param_1 + 0x48);
          if (((byte)UVar4 & 1) == 0) {
            pUVar8 = this + 0x39;
          }
          if (((byte)UVar5 & 1) == 0) {
            pUVar9 = param_1 + 0x39;
          }
          if (((byte)UVar4 & 1) == 0) {
            if (sVar1 != 0) {
              pUVar8 = this + 0x39;
              do {
                if (*pUVar8 != *pUVar9) {
                  return 0;
                }
                uVar7 = uVar7 - 1;
                pUVar8 = pUVar8 + 1;
                pUVar9 = pUVar9 + 1;
              } while (uVar7 != 0);
            }
          }
          else if ((sVar1 != 0) && (iVar6 = memcmp(pUVar8,pUVar9,sVar1), iVar6 != 0)) {
            return 0;
          }
          UVar4 = this[0x50];
          UVar5 = param_1[0x50];
          uVar7 = (ulong)((byte)UVar4 >> 1);
          sVar1 = uVar7;
          if (((byte)UVar4 & 1) != 0) {
            sVar1 = *(size_t *)(this + 0x58);
          }
          sVar2 = (ulong)((byte)UVar5 >> 1);
          if (((byte)UVar5 & 1) != 0) {
            sVar2 = *(size_t *)(param_1 + 0x58);
          }
          if (sVar1 == sVar2) {
            pUVar8 = *(Uri **)(this + 0x60);
            pUVar9 = *(Uri **)(param_1 + 0x60);
            if (((byte)UVar4 & 1) == 0) {
              pUVar8 = this + 0x51;
            }
            if (((byte)UVar5 & 1) == 0) {
              pUVar9 = param_1 + 0x51;
            }
            if (((byte)UVar4 & 1) == 0) {
              if (sVar1 != 0) {
                pUVar8 = this + 0x51;
                do {
                  if (*pUVar8 != *pUVar9) {
                    return 0;
                  }
                  uVar7 = uVar7 - 1;
                  pUVar8 = pUVar8 + 1;
                  pUVar9 = pUVar9 + 1;
                } while (uVar7 != 0);
              }
            }
            else if ((sVar1 != 0) && (iVar6 = memcmp(pUVar8,pUVar9,sVar1), iVar6 != 0)) {
              return 0;
            }
            UVar4 = this[0x68];
            UVar5 = param_1[0x68];
            uVar7 = (ulong)((byte)UVar4 >> 1);
            sVar1 = uVar7;
            if (((byte)UVar4 & 1) != 0) {
              sVar1 = *(size_t *)(this + 0x70);
            }
            sVar2 = (ulong)((byte)UVar5 >> 1);
            if (((byte)UVar5 & 1) != 0) {
              sVar2 = *(size_t *)(param_1 + 0x70);
            }
            if (sVar1 == sVar2) {
              pUVar8 = *(Uri **)(this + 0x78);
              pUVar9 = *(Uri **)(param_1 + 0x78);
              if (((byte)UVar4 & 1) == 0) {
                pUVar8 = this + 0x69;
              }
              if (((byte)UVar5 & 1) == 0) {
                pUVar9 = param_1 + 0x69;
              }
              if (((byte)UVar4 & 1) == 0) {
                if (sVar1 != 0) {
                  pUVar8 = this + 0x69;
                  do {
                    if (*pUVar8 != *pUVar9) {
                      return 0;
                    }
                    uVar7 = uVar7 - 1;
                    pUVar8 = pUVar8 + 1;
                    pUVar9 = pUVar9 + 1;
                  } while (uVar7 != 0);
                }
              }
              else if ((sVar1 != 0) && (iVar6 = memcmp(pUVar8,pUVar9,sVar1), iVar6 != 0)) {
                return 0;
              }
              if ((this[0x80] == param_1[0x80]) &&
                 (*(short *)(this + 0x82) == *(short *)(param_1 + 0x82))) {
                UVar4 = this[0x88];
                UVar5 = param_1[0x88];
                uVar7 = (ulong)((byte)UVar4 >> 1);
                sVar1 = uVar7;
                if (((byte)UVar4 & 1) != 0) {
                  sVar1 = *(size_t *)(this + 0x90);
                }
                sVar2 = (ulong)((byte)UVar5 >> 1);
                if (((byte)UVar5 & 1) != 0) {
                  sVar2 = *(size_t *)(param_1 + 0x90);
                }
                if (sVar1 == sVar2) {
                  pUVar8 = *(Uri **)(this + 0x98);
                  pUVar9 = *(Uri **)(param_1 + 0x98);
                  if (((byte)UVar4 & 1) == 0) {
                    pUVar8 = this + 0x89;
                  }
                  if (((byte)UVar5 & 1) == 0) {
                    pUVar9 = param_1 + 0x89;
                  }
                  if (((byte)UVar4 & 1) == 0) {
                    if (sVar1 != 0) {
                      pUVar8 = this + 0x89;
                      do {
                        if (*pUVar8 != *pUVar9) {
                          return 0;
                        }
                        uVar7 = uVar7 - 1;
                        pUVar8 = pUVar8 + 1;
                        pUVar9 = pUVar9 + 1;
                      } while (uVar7 != 0);
                    }
                  }
                  else if ((sVar1 != 0) && (iVar6 = memcmp(pUVar8,pUVar9,sVar1), iVar6 != 0)) {
                    return 0;
                  }
                  UVar4 = this[0xa0];
                  UVar5 = param_1[0xa0];
                  uVar7 = (ulong)((byte)UVar4 >> 1);
                  sVar1 = uVar7;
                  if (((byte)UVar4 & 1) != 0) {
                    sVar1 = *(size_t *)(this + 0xa8);
                  }
                  sVar2 = (ulong)((byte)UVar5 >> 1);
                  if (((byte)UVar5 & 1) != 0) {
                    sVar2 = *(size_t *)(param_1 + 0xa8);
                  }
                  if (sVar1 == sVar2) {
                    pUVar8 = *(Uri **)(this + 0xb0);
                    pUVar9 = *(Uri **)(param_1 + 0xb0);
                    if (((byte)UVar4 & 1) == 0) {
                      pUVar8 = this + 0xa1;
                    }
                    if (((byte)UVar5 & 1) == 0) {
                      pUVar9 = param_1 + 0xa1;
                    }
                    if (((byte)UVar4 & 1) == 0) {
                      if (sVar1 != 0) {
                        pUVar8 = this + 0xa1;
                        do {
                          if (*pUVar8 != *pUVar9) {
                            return 0;
                          }
                          uVar7 = uVar7 - 1;
                          pUVar8 = pUVar8 + 1;
                          pUVar9 = pUVar9 + 1;
                        } while (uVar7 != 0);
                      }
                    }
                    else if ((sVar1 != 0) && (iVar6 = memcmp(pUVar8,pUVar9,sVar1), iVar6 != 0)) {
                      return 0;
                    }
                    UVar4 = this[0xb8];
                    UVar5 = param_1[0xb8];
                    uVar7 = (ulong)((byte)UVar4 >> 1);
                    sVar1 = uVar7;
                    if (((byte)UVar4 & 1) != 0) {
                      sVar1 = *(size_t *)(this + 0xc0);
                    }
                    sVar2 = (ulong)((byte)UVar5 >> 1);
                    if (((byte)UVar5 & 1) != 0) {
                      sVar2 = *(size_t *)(param_1 + 0xc0);
                    }
                    if (sVar1 == sVar2) {
                      pUVar8 = *(Uri **)(this + 200);
                      pUVar9 = *(Uri **)(param_1 + 200);
                      if (((byte)UVar4 & 1) == 0) {
                        pUVar8 = this + 0xb9;
                      }
                      if (((byte)UVar5 & 1) == 0) {
                        pUVar9 = param_1 + 0xb9;
                      }
                      if (((byte)UVar4 & 1) == 0) {
                        if (sVar1 != 0) {
                          pUVar8 = this + 0xb9;
                          do {
                            if (*pUVar8 != *pUVar9) {
                              return 0;
                            }
                            uVar7 = uVar7 - 1;
                            pUVar8 = pUVar8 + 1;
                            pUVar9 = pUVar9 + 1;
                          } while (uVar7 != 0);
                        }
                      }
                      else if ((sVar1 != 0) && (iVar6 = memcmp(pUVar8,pUVar9,sVar1), iVar6 != 0)) {
                        return 0;
                      }
                      UVar4 = this[0xd0];
                      UVar5 = param_1[0xd0];
                      uVar7 = (ulong)((byte)UVar4 >> 1);
                      sVar1 = uVar7;
                      if (((byte)UVar4 & 1) != 0) {
                        sVar1 = *(size_t *)(this + 0xd8);
                      }
                      sVar2 = (ulong)((byte)UVar5 >> 1);
                      if (((byte)UVar5 & 1) != 0) {
                        sVar2 = *(size_t *)(param_1 + 0xd8);
                      }
                      if (sVar1 == sVar2) {
                        pUVar8 = *(Uri **)(this + 0xe0);
                        pUVar9 = *(Uri **)(param_1 + 0xe0);
                        if (((byte)UVar4 & 1) == 0) {
                          pUVar8 = this + 0xd1;
                        }
                        if (((byte)UVar5 & 1) == 0) {
                          pUVar9 = param_1 + 0xd1;
                        }
                        if (((byte)UVar4 & 1) == 0) {
                          if (sVar1 != 0) {
                            pUVar8 = this + 0xd1;
                            do {
                              if (*pUVar8 != *pUVar9) {
                                return 0;
                              }
                              uVar7 = uVar7 - 1;
                              pUVar8 = pUVar8 + 1;
                              pUVar9 = pUVar9 + 1;
                            } while (uVar7 != 0);
                          }
                        }
                        else if ((sVar1 != 0) && (iVar6 = memcmp(pUVar8,pUVar9,sVar1), iVar6 != 0))
                        {
                          return 0;
                        }
                        UVar4 = this[0xe8];
                        UVar5 = param_1[0xe8];
                        uVar7 = (ulong)((byte)UVar4 >> 1);
                        sVar1 = uVar7;
                        if (((byte)UVar4 & 1) != 0) {
                          sVar1 = *(size_t *)(this + 0xf0);
                        }
                        sVar2 = (ulong)((byte)UVar5 >> 1);
                        if (((byte)UVar5 & 1) != 0) {
                          sVar2 = *(size_t *)(param_1 + 0xf0);
                        }
                        if (sVar1 == sVar2) {
                          pUVar8 = *(Uri **)(this + 0xf8);
                          pUVar9 = *(Uri **)(param_1 + 0xf8);
                          if (((byte)UVar4 & 1) == 0) {
                            pUVar8 = this + 0xe9;
                          }
                          if (((byte)UVar5 & 1) == 0) {
                            pUVar9 = param_1 + 0xe9;
                          }
                          if (((byte)UVar4 & 1) == 0) {
                            if (sVar1 != 0) {
                              pUVar8 = this + 0xe9;
                              do {
                                if (*pUVar8 != *pUVar9) {
                                  return 0;
                                }
                                uVar7 = uVar7 - 1;
                                pUVar8 = pUVar8 + 1;
                                pUVar9 = pUVar9 + 1;
                              } while (uVar7 != 0);
                            }
                          }
                          else if ((sVar1 != 0) && (iVar6 = memcmp(pUVar8,pUVar9,sVar1), iVar6 != 0)
                                  ) {
                            return 0;
                          }
                          lVar11 = *(long *)(this + 0x100);
                          lVar3 = *(long *)(this + 0x108);
                          lVar10 = *(long *)(param_1 + 0x100);
                          if (lVar3 - lVar11 == *(long *)(param_1 + 0x108) - lVar10) {
                            if (lVar11 == lVar3) {
                              return 1;
                            }
                            while (uVar7 = FUN_00ea8554(lVar11,lVar10), (uVar7 & 1) != 0) {
                              lVar11 = lVar11 + 0x30;
                              lVar10 = lVar10 + 0x30;
                              if (lVar3 == lVar11) {
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
  return 0;
}

