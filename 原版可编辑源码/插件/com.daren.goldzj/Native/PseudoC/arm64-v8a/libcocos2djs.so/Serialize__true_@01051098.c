
/* v8::internal::JsonStringifier::Result
   v8::internal::JsonStringifier::Serialize_<true>(v8::internal::Handle<v8::internal::Object>, bool,
   v8::internal::Handle<v8::internal::Object>) */

ulong __thiscall
v8::internal::JsonStringifier::Serialize_<true>
          (JsonStringifier *this,ulong *param_2,ulong param_3,undefined8 param_4)

{
  IncrementalStringBuilder *pIVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  Isolate *pIVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  short *psVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  undefined1 uVar21;
  undefined2 uVar22;
  Factory *pFVar23;
  long lVar24;
  uint uVar25;
  Isolate *pIVar26;
  int iVar27;
  Isolate *pIVar28;
  byte bVar29;
  double dVar30;
  double dVar31;
  LookupIterator local_b8 [88];
  
  lVar24 = *(long *)this;
  uVar7 = GetCurrentStackPosition();
  if ((((uVar7 < *(ulong *)(lVar24 + 0x68)) &&
       (uVar4 = StackGuard::HandleInterrupts((StackGuard *)(*(long *)this + 0x48)), (uVar4 & 1) != 0
       )) && (uVar4 == *(uint *)(*(long *)this + 0x180))) ||
     ((((uVar7 = *param_2, puVar8 = param_2, (uVar7 & 1) != 0 &&
        ((uVar15 = uVar7 & 0xffffffff00000000 | 7, 0xa8 < *(ushort *)(uVar15 + *(uint *)(uVar7 - 1))
         || (*(short *)(uVar15 + *(uint *)(uVar7 - 1)) == 0x41)))) &&
       (puVar8 = (ulong *)ApplyToJsonFunction(this,param_2,param_4), puVar8 == (ulong *)0x0)) ||
      ((*(long *)(this + 0x40) != 0 &&
       (puVar8 = (ulong *)ApplyReplacerFunction(this,puVar8,param_4,param_2), puVar8 == (ulong *)0x0
       )))))) {
LAB_01051210:
    uVar4 = 2;
    goto switchD_010511e0_caseD_40;
  }
  uVar7 = *puVar8;
  if ((uVar7 & 1) == 0) {
    if ((param_3 & 1) != 0) {
      iVar6 = *(int *)(this + 0x1c);
      lVar24 = **(long **)(this + 0x28);
      *(int *)(this + 0x1c) = iVar6 + 1;
      if (*(int *)(this + 0x10) == 0) {
        *(undefined1 *)(lVar24 + iVar6 + 0xb) = 0x2c;
      }
      else {
        *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 0x2c;
      }
      if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
        IncrementalStringBuilder::Extend((IncrementalStringBuilder *)(this + 8));
      }
    }
    if (*(long *)(this + 0x48) != 0) {
      iVar6 = *(int *)(this + 0x1c);
      pIVar1 = (IncrementalStringBuilder *)(this + 8);
      lVar24 = **(long **)(this + 0x28);
      *(int *)(this + 0x1c) = iVar6 + 1;
      if (*(int *)(this + 0x10) == 0) {
        *(undefined1 *)(lVar24 + iVar6 + 0xb) = 10;
      }
      else {
        *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 10;
      }
      if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
        IncrementalStringBuilder::Extend(pIVar1);
      }
      if (0 < *(int *)(this + 0x50)) {
        iVar6 = 0;
        do {
          psVar16 = *(short **)(this + 0x48);
          sVar2 = *psVar16;
          if (*(int *)(this + 0x10) == 0) {
            while (sVar2 != 0) {
              psVar16 = psVar16 + 1;
              iVar27 = *(int *)(this + 0x1c);
              lVar24 = **(long **)(this + 0x28);
              *(int *)(this + 0x1c) = iVar27 + 1;
              *(char *)(lVar24 + iVar27 + 0xb) = (char)sVar2;
              if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                IncrementalStringBuilder::Extend(pIVar1);
              }
              sVar2 = *psVar16;
            }
          }
          else {
            while (sVar2 != 0) {
              psVar16 = psVar16 + 1;
              iVar27 = *(int *)(this + 0x1c);
              lVar24 = **(long **)(this + 0x28);
              *(int *)(this + 0x1c) = iVar27 + 1;
              *(short *)(lVar24 + (long)iVar27 * 2 + 0xb) = sVar2;
              if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                IncrementalStringBuilder::Extend(pIVar1);
              }
              sVar2 = *psVar16;
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(this + 0x50));
      }
    }
    SerializeString(this,param_4);
    iVar6 = *(int *)(this + 0x1c);
    lVar24 = **(long **)(this + 0x28);
    *(int *)(this + 0x1c) = iVar6 + 1;
    if (*(int *)(this + 0x10) == 0) {
      *(undefined1 *)(lVar24 + iVar6 + 0xb) = 0x3a;
    }
    else {
      *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 0x3a;
    }
    if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
      IncrementalStringBuilder::Extend((IncrementalStringBuilder *)(this + 8));
    }
    if (*(long *)(this + 0x48) != 0) {
      iVar6 = *(int *)(this + 0x1c);
      lVar24 = **(long **)(this + 0x28);
      *(int *)(this + 0x1c) = iVar6 + 1;
      if (*(int *)(this + 0x10) == 0) {
        *(undefined1 *)(lVar24 + iVar6 + 0xb) = 0x20;
      }
      else {
        *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 0x20;
      }
      if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
        IncrementalStringBuilder::Extend((IncrementalStringBuilder *)(this + 8));
      }
    }
    SerializeSmi(this,*puVar8);
  }
  else {
    uVar15 = uVar7 & 0xffffffff00000000;
    sVar2 = *(short *)((uVar15 | *(uint *)(uVar7 - 1)) + 7);
    uVar4 = 0;
    switch(sVar2) {
    case 0x40:
      goto switchD_010511e0_caseD_40;
    case 0x41:
      pFVar23 = *(Factory **)this;
      puVar9 = (undefined8 *)Factory::NewTypeError(pFVar23,0x15,0,0,0);
      Isolate::Throw((Isolate *)pFVar23,*puVar9,0);
      goto LAB_01051210;
    case 0x42:
      if ((param_3 & 1) != 0) {
        iVar6 = *(int *)(this + 0x1c);
        lVar24 = **(long **)(this + 0x28);
        *(int *)(this + 0x1c) = iVar6 + 1;
        if (*(int *)(this + 0x10) == 0) {
          *(undefined1 *)(lVar24 + iVar6 + 0xb) = 0x2c;
        }
        else {
          *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 0x2c;
        }
        if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
          IncrementalStringBuilder::Extend((IncrementalStringBuilder *)(this + 8));
        }
      }
      if (*(long *)(this + 0x48) != 0) {
        iVar6 = *(int *)(this + 0x1c);
        pIVar1 = (IncrementalStringBuilder *)(this + 8);
        lVar24 = **(long **)(this + 0x28);
        *(int *)(this + 0x1c) = iVar6 + 1;
        if (*(int *)(this + 0x10) == 0) {
          *(undefined1 *)(lVar24 + iVar6 + 0xb) = 10;
        }
        else {
          *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 10;
        }
        if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
          IncrementalStringBuilder::Extend(pIVar1);
        }
        if (0 < *(int *)(this + 0x50)) {
          iVar6 = 0;
          do {
            psVar16 = *(short **)(this + 0x48);
            sVar2 = *psVar16;
            if (*(int *)(this + 0x10) == 0) {
              while (sVar2 != 0) {
                psVar16 = psVar16 + 1;
                iVar27 = *(int *)(this + 0x1c);
                lVar24 = **(long **)(this + 0x28);
                *(int *)(this + 0x1c) = iVar27 + 1;
                *(char *)(lVar24 + iVar27 + 0xb) = (char)sVar2;
                if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                  IncrementalStringBuilder::Extend(pIVar1);
                }
                sVar2 = *psVar16;
              }
            }
            else {
              while (sVar2 != 0) {
                psVar16 = psVar16 + 1;
                iVar27 = *(int *)(this + 0x1c);
                lVar24 = **(long **)(this + 0x28);
                *(int *)(this + 0x1c) = iVar27 + 1;
                *(short *)(lVar24 + (long)iVar27 * 2 + 0xb) = sVar2;
                if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                  IncrementalStringBuilder::Extend(pIVar1);
                }
                sVar2 = *psVar16;
              }
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)(this + 0x50));
        }
      }
      SerializeString(this,param_4);
      iVar6 = *(int *)(this + 0x1c);
      lVar24 = **(long **)(this + 0x28);
      *(int *)(this + 0x1c) = iVar6 + 1;
      if (*(int *)(this + 0x10) == 0) {
        *(undefined1 *)(lVar24 + iVar6 + 0xb) = 0x3a;
      }
      else {
        *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 0x3a;
      }
      if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
        IncrementalStringBuilder::Extend((IncrementalStringBuilder *)(this + 8));
      }
      if (*(long *)(this + 0x48) != 0) {
        iVar6 = *(int *)(this + 0x1c);
        lVar24 = **(long **)(this + 0x28);
        *(int *)(this + 0x1c) = iVar6 + 1;
        if (*(int *)(this + 0x10) == 0) {
          *(undefined1 *)(lVar24 + iVar6 + 0xb) = 0x20;
        }
        else {
          *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 0x20;
        }
        if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
          IncrementalStringBuilder::Extend((IncrementalStringBuilder *)(this + 8));
        }
      }
      SerializeDouble(this,*(double *)(*puVar8 + 3));
      break;
    case 0x43:
      uVar4 = *(uint *)(uVar7 + 0x17) >> 1 & 0xff;
      if (uVar4 == 3) {
        if ((param_3 & 1) != 0) {
          iVar6 = *(int *)(this + 0x1c);
          lVar24 = **(long **)(this + 0x28);
          *(int *)(this + 0x1c) = iVar6 + 1;
          if (*(int *)(this + 0x10) == 0) {
            *(undefined1 *)(lVar24 + iVar6 + 0xb) = 0x2c;
          }
          else {
            *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 0x2c;
          }
          if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
            IncrementalStringBuilder::Extend((IncrementalStringBuilder *)(this + 8));
          }
        }
        if (*(long *)(this + 0x48) != 0) {
          iVar6 = *(int *)(this + 0x1c);
          pIVar1 = (IncrementalStringBuilder *)(this + 8);
          lVar24 = **(long **)(this + 0x28);
          *(int *)(this + 0x1c) = iVar6 + 1;
          if (*(int *)(this + 0x10) == 0) {
            *(undefined1 *)(lVar24 + iVar6 + 0xb) = 10;
          }
          else {
            *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 10;
          }
          if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
            IncrementalStringBuilder::Extend(pIVar1);
          }
          if (0 < *(int *)(this + 0x50)) {
            iVar6 = 0;
            do {
              psVar16 = *(short **)(this + 0x48);
              sVar2 = *psVar16;
              if (*(int *)(this + 0x10) == 0) {
                while (sVar2 != 0) {
                  psVar16 = psVar16 + 1;
                  iVar27 = *(int *)(this + 0x1c);
                  lVar24 = **(long **)(this + 0x28);
                  *(int *)(this + 0x1c) = iVar27 + 1;
                  *(char *)(lVar24 + iVar27 + 0xb) = (char)sVar2;
                  if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                    IncrementalStringBuilder::Extend(pIVar1);
                  }
                  sVar2 = *psVar16;
                }
              }
              else {
                while (sVar2 != 0) {
                  psVar16 = psVar16 + 1;
                  iVar27 = *(int *)(this + 0x1c);
                  lVar24 = **(long **)(this + 0x28);
                  *(int *)(this + 0x1c) = iVar27 + 1;
                  *(short *)(lVar24 + (long)iVar27 * 2 + 0xb) = sVar2;
                  if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                    IncrementalStringBuilder::Extend(pIVar1);
                  }
                  sVar2 = *psVar16;
                }
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < *(int *)(this + 0x50));
          }
        }
        SerializeString(this,param_4);
        iVar6 = *(int *)(this + 0x1c);
        pIVar1 = (IncrementalStringBuilder *)(this + 8);
        lVar24 = **(long **)(this + 0x28);
        *(int *)(this + 0x1c) = iVar6 + 1;
        if (*(int *)(this + 0x10) == 0) {
          *(undefined1 *)(lVar24 + iVar6 + 0xb) = 0x3a;
        }
        else {
          *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 0x3a;
        }
        if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
          IncrementalStringBuilder::Extend(pIVar1);
        }
        if (*(long *)(this + 0x48) != 0) {
          iVar6 = *(int *)(this + 0x1c);
          lVar24 = **(long **)(this + 0x28);
          *(int *)(this + 0x1c) = iVar6 + 1;
          if (*(int *)(this + 0x10) == 0) {
            *(undefined1 *)(lVar24 + iVar6 + 0xb) = 0x20;
          }
          else {
            *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 0x20;
          }
          if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
            IncrementalStringBuilder::Extend(pIVar1);
          }
        }
        iVar6 = *(int *)(this + 0x1c);
        lVar24 = **(long **)(this + 0x28);
        *(int *)(this + 0x1c) = iVar6 + 1;
        if (*(int *)(this + 0x10) == 0) {
          *(undefined1 *)(lVar24 + iVar6 + 0xb) = 0x6e;
          iVar6 = *(int *)(this + 0x1c);
          if (iVar6 == *(int *)(this + 0x18)) {
            IncrementalStringBuilder::Extend(pIVar1);
            iVar6 = *(int *)(this + 0x1c);
          }
          lVar24 = **(long **)(this + 0x28);
          *(int *)(this + 0x1c) = iVar6 + 1;
          *(undefined1 *)(lVar24 + iVar6 + 0xb) = 0x75;
          iVar6 = *(int *)(this + 0x1c);
          if (iVar6 == *(int *)(this + 0x18)) {
            IncrementalStringBuilder::Extend(pIVar1);
            iVar6 = *(int *)(this + 0x1c);
          }
          lVar24 = **(long **)(this + 0x28);
          *(int *)(this + 0x1c) = iVar6 + 1;
          *(undefined1 *)(lVar24 + iVar6 + 0xb) = 0x6c;
          iVar6 = *(int *)(this + 0x1c);
          if (iVar6 == *(int *)(this + 0x18)) {
            IncrementalStringBuilder::Extend(pIVar1);
            iVar6 = *(int *)(this + 0x1c);
          }
          lVar24 = **(long **)(this + 0x28);
          *(int *)(this + 0x1c) = iVar6 + 1;
          *(undefined1 *)(lVar24 + iVar6 + 0xb) = 0x6c;
        }
        else {
          *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 0x6e;
          iVar6 = *(int *)(this + 0x1c);
          if (iVar6 == *(int *)(this + 0x18)) {
            IncrementalStringBuilder::Extend(pIVar1);
            iVar6 = *(int *)(this + 0x1c);
          }
          lVar24 = **(long **)(this + 0x28);
          *(int *)(this + 0x1c) = iVar6 + 1;
          *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 0x75;
          iVar6 = *(int *)(this + 0x1c);
          if (iVar6 == *(int *)(this + 0x18)) {
            IncrementalStringBuilder::Extend(pIVar1);
            iVar6 = *(int *)(this + 0x1c);
          }
          lVar24 = **(long **)(this + 0x28);
          *(int *)(this + 0x1c) = iVar6 + 1;
          *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 0x6c;
          iVar6 = *(int *)(this + 0x1c);
          if (iVar6 == *(int *)(this + 0x18)) {
            IncrementalStringBuilder::Extend(pIVar1);
            iVar6 = *(int *)(this + 0x1c);
          }
          lVar24 = **(long **)(this + 0x28);
          *(int *)(this + 0x1c) = iVar6 + 1;
          *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 0x6c;
        }
      }
      else {
        if (uVar4 == 1) {
          if ((param_3 & 1) != 0) {
            iVar6 = *(int *)(this + 0x1c);
            lVar24 = **(long **)(this + 0x28);
            *(int *)(this + 0x1c) = iVar6 + 1;
            if (*(int *)(this + 0x10) == 0) {
              *(undefined1 *)(lVar24 + iVar6 + 0xb) = 0x2c;
            }
            else {
              *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 0x2c;
            }
            if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
              IncrementalStringBuilder::Extend((IncrementalStringBuilder *)(this + 8));
            }
          }
          if (*(long *)(this + 0x48) != 0) {
            iVar6 = *(int *)(this + 0x1c);
            pIVar1 = (IncrementalStringBuilder *)(this + 8);
            lVar24 = **(long **)(this + 0x28);
            *(int *)(this + 0x1c) = iVar6 + 1;
            if (*(int *)(this + 0x10) == 0) {
              *(undefined1 *)(lVar24 + iVar6 + 0xb) = 10;
            }
            else {
              *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 10;
            }
            if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
              IncrementalStringBuilder::Extend(pIVar1);
            }
            if (0 < *(int *)(this + 0x50)) {
              iVar6 = 0;
              do {
                psVar16 = *(short **)(this + 0x48);
                sVar2 = *psVar16;
                if (*(int *)(this + 0x10) == 0) {
                  while (sVar2 != 0) {
                    psVar16 = psVar16 + 1;
                    iVar27 = *(int *)(this + 0x1c);
                    lVar24 = **(long **)(this + 0x28);
                    *(int *)(this + 0x1c) = iVar27 + 1;
                    *(char *)(lVar24 + iVar27 + 0xb) = (char)sVar2;
                    if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                      IncrementalStringBuilder::Extend(pIVar1);
                    }
                    sVar2 = *psVar16;
                  }
                }
                else {
                  while (sVar2 != 0) {
                    psVar16 = psVar16 + 1;
                    iVar27 = *(int *)(this + 0x1c);
                    lVar24 = **(long **)(this + 0x28);
                    *(int *)(this + 0x1c) = iVar27 + 1;
                    *(short *)(lVar24 + (long)iVar27 * 2 + 0xb) = sVar2;
                    if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                      IncrementalStringBuilder::Extend(pIVar1);
                    }
                    sVar2 = *psVar16;
                  }
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < *(int *)(this + 0x50));
            }
          }
          SerializeString(this,param_4);
          iVar6 = *(int *)(this + 0x1c);
          pIVar1 = (IncrementalStringBuilder *)(this + 8);
          lVar24 = **(long **)(this + 0x28);
          *(int *)(this + 0x1c) = iVar6 + 1;
          if (*(int *)(this + 0x10) == 0) {
            *(undefined1 *)(lVar24 + iVar6 + 0xb) = 0x3a;
          }
          else {
            *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 0x3a;
          }
          if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
            IncrementalStringBuilder::Extend(pIVar1);
          }
          if (*(long *)(this + 0x48) != 0) {
            iVar6 = *(int *)(this + 0x1c);
            lVar24 = **(long **)(this + 0x28);
            *(int *)(this + 0x1c) = iVar6 + 1;
            if (*(int *)(this + 0x10) == 0) {
              *(undefined1 *)(lVar24 + iVar6 + 0xb) = 0x20;
            }
            else {
              *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 0x20;
            }
            if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
              IncrementalStringBuilder::Extend(pIVar1);
            }
          }
          iVar6 = *(int *)(this + 0x1c);
          lVar24 = **(long **)(this + 0x28);
          *(int *)(this + 0x1c) = iVar6 + 1;
          if (*(int *)(this + 0x10) == 0) {
            *(undefined1 *)(lVar24 + iVar6 + 0xb) = 0x74;
            iVar6 = *(int *)(this + 0x1c);
            if (iVar6 == *(int *)(this + 0x18)) {
              IncrementalStringBuilder::Extend(pIVar1);
              iVar6 = *(int *)(this + 0x1c);
            }
            lVar24 = **(long **)(this + 0x28);
            *(int *)(this + 0x1c) = iVar6 + 1;
            *(undefined1 *)(lVar24 + iVar6 + 0xb) = 0x72;
            iVar6 = *(int *)(this + 0x1c);
            if (iVar6 == *(int *)(this + 0x18)) {
              IncrementalStringBuilder::Extend(pIVar1);
              iVar6 = *(int *)(this + 0x1c);
            }
            plVar18 = *(long **)(this + 0x28);
            uVar21 = 0x75;
LAB_01052cb4:
            lVar24 = *plVar18;
            *(int *)(this + 0x1c) = iVar6 + 1;
            *(undefined1 *)(lVar24 + iVar6 + 0xb) = uVar21;
            iVar6 = *(int *)(this + 0x1c);
            if (iVar6 == *(int *)(this + 0x18)) {
              IncrementalStringBuilder::Extend((IncrementalStringBuilder *)(this + 8));
              iVar6 = *(int *)(this + 0x1c);
            }
            lVar24 = **(long **)(this + 0x28);
            *(int *)(this + 0x1c) = iVar6 + 1;
            *(undefined1 *)(lVar24 + iVar6 + 0xb) = 0x65;
            goto LAB_01052cf8;
          }
          *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 0x74;
          iVar6 = *(int *)(this + 0x1c);
          if (iVar6 == *(int *)(this + 0x18)) {
            IncrementalStringBuilder::Extend(pIVar1);
            iVar6 = *(int *)(this + 0x1c);
          }
          lVar24 = **(long **)(this + 0x28);
          *(int *)(this + 0x1c) = iVar6 + 1;
          *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 0x72;
          iVar6 = *(int *)(this + 0x1c);
          if (iVar6 == *(int *)(this + 0x18)) {
            IncrementalStringBuilder::Extend(pIVar1);
            iVar6 = *(int *)(this + 0x1c);
          }
          plVar18 = *(long **)(this + 0x28);
          uVar22 = 0x75;
        }
        else {
          if (uVar4 != 0) goto LAB_010515c0;
          if ((param_3 & 1) != 0) {
            iVar6 = *(int *)(this + 0x1c);
            lVar24 = **(long **)(this + 0x28);
            *(int *)(this + 0x1c) = iVar6 + 1;
            if (*(int *)(this + 0x10) == 0) {
              *(undefined1 *)(lVar24 + iVar6 + 0xb) = 0x2c;
            }
            else {
              *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 0x2c;
            }
            if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
              IncrementalStringBuilder::Extend((IncrementalStringBuilder *)(this + 8));
            }
          }
          if (*(long *)(this + 0x48) != 0) {
            iVar6 = *(int *)(this + 0x1c);
            pIVar1 = (IncrementalStringBuilder *)(this + 8);
            lVar24 = **(long **)(this + 0x28);
            *(int *)(this + 0x1c) = iVar6 + 1;
            if (*(int *)(this + 0x10) == 0) {
              *(undefined1 *)(lVar24 + iVar6 + 0xb) = 10;
            }
            else {
              *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 10;
            }
            if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
              IncrementalStringBuilder::Extend(pIVar1);
            }
            if (0 < *(int *)(this + 0x50)) {
              iVar6 = 0;
              do {
                psVar16 = *(short **)(this + 0x48);
                sVar2 = *psVar16;
                if (*(int *)(this + 0x10) == 0) {
                  while (sVar2 != 0) {
                    psVar16 = psVar16 + 1;
                    iVar27 = *(int *)(this + 0x1c);
                    lVar24 = **(long **)(this + 0x28);
                    *(int *)(this + 0x1c) = iVar27 + 1;
                    *(char *)(lVar24 + iVar27 + 0xb) = (char)sVar2;
                    if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                      IncrementalStringBuilder::Extend(pIVar1);
                    }
                    sVar2 = *psVar16;
                  }
                }
                else {
                  while (sVar2 != 0) {
                    psVar16 = psVar16 + 1;
                    iVar27 = *(int *)(this + 0x1c);
                    lVar24 = **(long **)(this + 0x28);
                    *(int *)(this + 0x1c) = iVar27 + 1;
                    *(short *)(lVar24 + (long)iVar27 * 2 + 0xb) = sVar2;
                    if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                      IncrementalStringBuilder::Extend(pIVar1);
                    }
                    sVar2 = *psVar16;
                  }
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < *(int *)(this + 0x50));
            }
          }
          SerializeString(this,param_4);
          iVar6 = *(int *)(this + 0x1c);
          pIVar1 = (IncrementalStringBuilder *)(this + 8);
          lVar24 = **(long **)(this + 0x28);
          *(int *)(this + 0x1c) = iVar6 + 1;
          if (*(int *)(this + 0x10) == 0) {
            *(undefined1 *)(lVar24 + iVar6 + 0xb) = 0x3a;
          }
          else {
            *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 0x3a;
          }
          if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
            IncrementalStringBuilder::Extend(pIVar1);
          }
          if (*(long *)(this + 0x48) != 0) {
            iVar6 = *(int *)(this + 0x1c);
            lVar24 = **(long **)(this + 0x28);
            *(int *)(this + 0x1c) = iVar6 + 1;
            if (*(int *)(this + 0x10) == 0) {
              *(undefined1 *)(lVar24 + iVar6 + 0xb) = 0x20;
            }
            else {
              *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 0x20;
            }
            if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
              IncrementalStringBuilder::Extend(pIVar1);
            }
          }
          iVar6 = *(int *)(this + 0x1c);
          lVar24 = **(long **)(this + 0x28);
          *(int *)(this + 0x1c) = iVar6 + 1;
          if (*(int *)(this + 0x10) == 0) {
            *(undefined1 *)(lVar24 + iVar6 + 0xb) = 0x66;
            iVar6 = *(int *)(this + 0x1c);
            if (iVar6 == *(int *)(this + 0x18)) {
              IncrementalStringBuilder::Extend(pIVar1);
              iVar6 = *(int *)(this + 0x1c);
            }
            lVar24 = **(long **)(this + 0x28);
            *(int *)(this + 0x1c) = iVar6 + 1;
            *(undefined1 *)(lVar24 + iVar6 + 0xb) = 0x61;
            iVar6 = *(int *)(this + 0x1c);
            if (iVar6 == *(int *)(this + 0x18)) {
              IncrementalStringBuilder::Extend(pIVar1);
              iVar6 = *(int *)(this + 0x1c);
            }
            lVar24 = **(long **)(this + 0x28);
            *(int *)(this + 0x1c) = iVar6 + 1;
            *(undefined1 *)(lVar24 + iVar6 + 0xb) = 0x6c;
            iVar6 = *(int *)(this + 0x1c);
            if (iVar6 == *(int *)(this + 0x18)) {
              IncrementalStringBuilder::Extend(pIVar1);
              iVar6 = *(int *)(this + 0x1c);
            }
            plVar18 = *(long **)(this + 0x28);
            uVar21 = 0x73;
            goto LAB_01052cb4;
          }
          *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 0x66;
          iVar6 = *(int *)(this + 0x1c);
          if (iVar6 == *(int *)(this + 0x18)) {
            IncrementalStringBuilder::Extend(pIVar1);
            iVar6 = *(int *)(this + 0x1c);
          }
          lVar24 = **(long **)(this + 0x28);
          *(int *)(this + 0x1c) = iVar6 + 1;
          *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 0x61;
          iVar6 = *(int *)(this + 0x1c);
          if (iVar6 == *(int *)(this + 0x18)) {
            IncrementalStringBuilder::Extend(pIVar1);
            iVar6 = *(int *)(this + 0x1c);
          }
          lVar24 = **(long **)(this + 0x28);
          *(int *)(this + 0x1c) = iVar6 + 1;
          *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 0x6c;
          iVar6 = *(int *)(this + 0x1c);
          if (iVar6 == *(int *)(this + 0x18)) {
            IncrementalStringBuilder::Extend(pIVar1);
            iVar6 = *(int *)(this + 0x1c);
          }
          plVar18 = *(long **)(this + 0x28);
          uVar22 = 0x73;
        }
        lVar24 = *plVar18;
        *(int *)(this + 0x1c) = iVar6 + 1;
        *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = uVar22;
        iVar6 = *(int *)(this + 0x1c);
        if (iVar6 == *(int *)(this + 0x18)) {
          IncrementalStringBuilder::Extend((IncrementalStringBuilder *)(this + 8));
          iVar6 = *(int *)(this + 0x1c);
        }
        lVar24 = **(long **)(this + 0x28);
        *(int *)(this + 0x1c) = iVar6 + 1;
        *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 0x65;
      }
LAB_01052cf8:
      if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
        IncrementalStringBuilder::Extend((IncrementalStringBuilder *)(this + 8));
      }
      break;
    default:
      if (sVar2 == 0x411) {
        if ((param_3 & 1) != 0) {
          iVar6 = *(int *)(this + 0x1c);
          lVar24 = **(long **)(this + 0x28);
          *(int *)(this + 0x1c) = iVar6 + 1;
          if (*(int *)(this + 0x10) == 0) {
            *(undefined1 *)(lVar24 + iVar6 + 0xb) = 0x2c;
          }
          else {
            *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 0x2c;
          }
          if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
            IncrementalStringBuilder::Extend((IncrementalStringBuilder *)(this + 8));
          }
        }
        if (*(long *)(this + 0x48) != 0) {
          iVar6 = *(int *)(this + 0x1c);
          pIVar1 = (IncrementalStringBuilder *)(this + 8);
          lVar24 = **(long **)(this + 0x28);
          *(int *)(this + 0x1c) = iVar6 + 1;
          if (*(int *)(this + 0x10) == 0) {
            *(undefined1 *)(lVar24 + iVar6 + 0xb) = 10;
          }
          else {
            *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 10;
          }
          if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
            IncrementalStringBuilder::Extend(pIVar1);
          }
          if (0 < *(int *)(this + 0x50)) {
            iVar6 = 0;
            do {
              psVar16 = *(short **)(this + 0x48);
              sVar2 = *psVar16;
              if (*(int *)(this + 0x10) == 0) {
                while (sVar2 != 0) {
                  psVar16 = psVar16 + 1;
                  iVar27 = *(int *)(this + 0x1c);
                  lVar24 = **(long **)(this + 0x28);
                  *(int *)(this + 0x1c) = iVar27 + 1;
                  *(char *)(lVar24 + iVar27 + 0xb) = (char)sVar2;
                  if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                    IncrementalStringBuilder::Extend(pIVar1);
                  }
                  sVar2 = *psVar16;
                }
              }
              else {
                while (sVar2 != 0) {
                  psVar16 = psVar16 + 1;
                  iVar27 = *(int *)(this + 0x1c);
                  lVar24 = **(long **)(this + 0x28);
                  *(int *)(this + 0x1c) = iVar27 + 1;
                  *(short *)(lVar24 + (long)iVar27 * 2 + 0xb) = sVar2;
                  if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                    IncrementalStringBuilder::Extend(pIVar1);
                  }
                  sVar2 = *psVar16;
                }
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < *(int *)(this + 0x50));
          }
        }
        SerializeString(this,param_4);
        iVar6 = *(int *)(this + 0x1c);
        lVar24 = **(long **)(this + 0x28);
        *(int *)(this + 0x1c) = iVar6 + 1;
        if (*(int *)(this + 0x10) == 0) {
          *(undefined1 *)(lVar24 + iVar6 + 0xb) = 0x3a;
        }
        else {
          *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 0x3a;
        }
        if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
          IncrementalStringBuilder::Extend((IncrementalStringBuilder *)(this + 8));
        }
        if (*(long *)(this + 0x48) != 0) {
          iVar6 = *(int *)(this + 0x1c);
          lVar24 = **(long **)(this + 0x28);
          *(int *)(this + 0x1c) = iVar6 + 1;
          if (*(int *)(this + 0x10) == 0) {
            *(undefined1 *)(lVar24 + iVar6 + 0xb) = 0x20;
          }
          else {
            *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 0x20;
          }
          if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
            IncrementalStringBuilder::Extend((IncrementalStringBuilder *)(this + 8));
          }
        }
        uVar7 = SerializeJSPrimitiveWrapper(this,puVar8,param_4);
        return uVar7;
      }
      if (sVar2 == 0x423) {
        if ((param_3 & 1) != 0) {
          iVar6 = *(int *)(this + 0x1c);
          lVar24 = **(long **)(this + 0x28);
          *(int *)(this + 0x1c) = iVar6 + 1;
          if (*(int *)(this + 0x10) == 0) {
            *(undefined1 *)(lVar24 + iVar6 + 0xb) = 0x2c;
          }
          else {
            *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 0x2c;
          }
          if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
            IncrementalStringBuilder::Extend((IncrementalStringBuilder *)(this + 8));
          }
        }
        if (*(long *)(this + 0x48) != 0) {
          iVar6 = *(int *)(this + 0x1c);
          pIVar1 = (IncrementalStringBuilder *)(this + 8);
          lVar24 = **(long **)(this + 0x28);
          *(int *)(this + 0x1c) = iVar6 + 1;
          if (*(int *)(this + 0x10) == 0) {
            *(undefined1 *)(lVar24 + iVar6 + 0xb) = 10;
          }
          else {
            *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 10;
          }
          if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
            IncrementalStringBuilder::Extend(pIVar1);
          }
          if (0 < *(int *)(this + 0x50)) {
            iVar6 = 0;
            do {
              psVar16 = *(short **)(this + 0x48);
              sVar2 = *psVar16;
              if (*(int *)(this + 0x10) == 0) {
                while (sVar2 != 0) {
                  psVar16 = psVar16 + 1;
                  iVar27 = *(int *)(this + 0x1c);
                  lVar24 = **(long **)(this + 0x28);
                  *(int *)(this + 0x1c) = iVar27 + 1;
                  *(char *)(lVar24 + iVar27 + 0xb) = (char)sVar2;
                  if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                    IncrementalStringBuilder::Extend(pIVar1);
                  }
                  sVar2 = *psVar16;
                }
              }
              else {
                while (sVar2 != 0) {
                  psVar16 = psVar16 + 1;
                  iVar27 = *(int *)(this + 0x1c);
                  lVar24 = **(long **)(this + 0x28);
                  *(int *)(this + 0x1c) = iVar27 + 1;
                  *(short *)(lVar24 + (long)iVar27 * 2 + 0xb) = sVar2;
                  if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                    IncrementalStringBuilder::Extend(pIVar1);
                  }
                  sVar2 = *psVar16;
                }
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < *(int *)(this + 0x50));
          }
        }
        SerializeString(this,param_4);
        iVar6 = *(int *)(this + 0x1c);
        pIVar1 = (IncrementalStringBuilder *)(this + 8);
        lVar24 = **(long **)(this + 0x28);
        *(int *)(this + 0x1c) = iVar6 + 1;
        if (*(int *)(this + 0x10) == 0) {
          *(undefined1 *)(lVar24 + iVar6 + 0xb) = 0x3a;
        }
        else {
          *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 0x3a;
        }
        if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
          IncrementalStringBuilder::Extend(pIVar1);
        }
        if (*(long *)(this + 0x48) != 0) {
          iVar6 = *(int *)(this + 0x1c);
          lVar24 = **(long **)(this + 0x28);
          *(int *)(this + 0x1c) = iVar6 + 1;
          if (*(int *)(this + 0x10) == 0) {
            *(undefined1 *)(lVar24 + iVar6 + 0xb) = 0x20;
          }
          else {
            *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 0x20;
          }
          if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
            IncrementalStringBuilder::Extend(pIVar1);
          }
        }
        pIVar26 = *(Isolate **)this;
        uVar14 = *(undefined8 *)(pIVar26 + 0x95a0);
        lVar24 = *(long *)(pIVar26 + 0x95a8);
        *(int *)(pIVar26 + 0x95b0) = *(int *)(pIVar26 + 0x95b0) + 1;
        uVar4 = StackPush(this,puVar8,param_4);
        if (uVar4 != 1) goto joined_r0x01053768;
        uVar4 = *(uint *)(*puVar8 + 0xb);
        if ((uVar4 & 1) == 0) {
          if ((int)uVar4 < 0) goto LAB_01053b84;
          dVar31 = (double)(ulong)(uVar4 >> 1);
        }
        else {
          uVar15 = *puVar8 & 0xffffffff00000000;
          uVar7 = uVar15 | uVar4;
          if (*(short *)((uVar15 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x42) {
LAB_01053b84:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","object->length().ToArrayLength(&length)");
          }
          dVar30 = *(double *)(uVar7 + 3);
          dVar31 = dVar30 + 4503599627370496.0;
          if (((ulong)dVar31 >> 0x20 != 0x43300000) ||
             (dVar30 != (double)((ulong)dVar31 & 0xffffffff))) goto LAB_01053b84;
        }
        iVar6 = *(int *)(this + 0x1c);
        lVar17 = **(long **)(this + 0x28);
        *(int *)(this + 0x1c) = iVar6 + 1;
        if (*(int *)(this + 0x10) == 0) {
          *(undefined1 *)(lVar17 + iVar6 + 0xb) = 0x5b;
        }
        else {
          *(undefined2 *)(lVar17 + (long)iVar6 * 2 + 0xb) = 0x5b;
        }
        if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
          IncrementalStringBuilder::Extend(pIVar1);
        }
        *(int *)(this + 0x50) = *(int *)(this + 0x50) + 1;
        uVar25 = SUB84(dVar31,0);
        if (*(long *)(this + 0x40) == 0) {
          uVar7 = *puVar8;
          uVar15 = uVar7 & 0xffffffff00000000;
          bVar29 = *(byte *)((uVar15 | 10) + (ulong)*(uint *)(uVar7 - 1)) >> 3;
          if (bVar29 != 4) {
            if (bVar29 != 2) {
              if (bVar29 == 0) {
                pIVar10 = *(Isolate **)this;
                uVar15 = uVar15 | *(uint *)(uVar7 + 7);
                if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                  puVar11 = *(ulong **)(pIVar10 + 0x95a0);
                  if (puVar11 == *(ulong **)(pIVar10 + 0x95a8)) {
                    puVar11 = (ulong *)HandleScope::Extend(pIVar10);
                  }
                  *(ulong **)(pIVar10 + 0x95a0) = puVar11 + 1;
                  *puVar11 = uVar15;
                }
                else {
                  puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                               (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar15)
                  ;
                }
                if (uVar25 != 0) {
                  lVar17 = *(long *)this;
                  uVar4 = 0;
                  do {
                    uVar7 = GetCurrentStackPosition();
                    if (((uVar7 < *(ulong *)(lVar17 + 0x68)) &&
                        (uVar5 = StackGuard::HandleInterrupts((StackGuard *)(*(long *)this + 0x48)),
                        (uVar5 & 1) != 0)) && (uVar5 == *(uint *)(*(long *)this + 0x180)))
                    goto LAB_01053750;
                    if (uVar4 != 0) {
                      iVar6 = *(int *)(this + 0x1c);
                      lVar19 = **(long **)(this + 0x28);
                      *(int *)(this + 0x1c) = iVar6 + 1;
                      if (*(int *)(this + 0x10) == 0) {
                        *(undefined1 *)(lVar19 + iVar6 + 0xb) = 0x2c;
                      }
                      else {
                        *(undefined2 *)(lVar19 + (long)iVar6 * 2 + 0xb) = 0x2c;
                      }
                      if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                        IncrementalStringBuilder::Extend(pIVar1);
                      }
                    }
                    if (*(long *)(this + 0x48) != 0) {
                      iVar6 = *(int *)(this + 0x1c);
                      lVar19 = **(long **)(this + 0x28);
                      *(int *)(this + 0x1c) = iVar6 + 1;
                      if (*(int *)(this + 0x10) == 0) {
                        *(undefined1 *)(lVar19 + iVar6 + 0xb) = 10;
                      }
                      else {
                        *(undefined2 *)(lVar19 + (long)iVar6 * 2 + 0xb) = 10;
                      }
                      if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                        IncrementalStringBuilder::Extend(pIVar1);
                      }
                      if (0 < *(int *)(this + 0x50)) {
                        iVar6 = 0;
                        do {
                          psVar16 = *(short **)(this + 0x48);
                          sVar2 = *psVar16;
                          if (*(int *)(this + 0x10) == 0) {
                            while (sVar2 != 0) {
                              psVar16 = psVar16 + 1;
                              iVar27 = *(int *)(this + 0x1c);
                              lVar19 = **(long **)(this + 0x28);
                              *(int *)(this + 0x1c) = iVar27 + 1;
                              *(char *)(lVar19 + iVar27 + 0xb) = (char)sVar2;
                              if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                                IncrementalStringBuilder::Extend(pIVar1);
                              }
                              sVar2 = *psVar16;
                            }
                          }
                          else {
                            while (sVar2 != 0) {
                              psVar16 = psVar16 + 1;
                              iVar27 = *(int *)(this + 0x1c);
                              lVar19 = **(long **)(this + 0x28);
                              *(int *)(this + 0x1c) = iVar27 + 1;
                              *(short *)(lVar19 + (long)iVar27 * 2 + 0xb) = sVar2;
                              if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                                IncrementalStringBuilder::Extend(pIVar1);
                              }
                              sVar2 = *psVar16;
                            }
                          }
                          iVar6 = iVar6 + 1;
                        } while (iVar6 < *(int *)(this + 0x50));
                      }
                    }
                    SerializeSmi(this,*puVar11 & 0xffffffff00000000 |
                                      (ulong)*(uint *)(*puVar11 + (long)(int)(uVar4 << 2) + 7));
                    uVar4 = uVar4 + 1;
                  } while (uVar4 != uVar25);
                  goto LAB_01053594;
                }
              }
              goto LAB_01051d28;
            }
            pIVar10 = *(Isolate **)this;
            uVar15 = uVar15 | *(uint *)(uVar7 + 0xb);
            if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar11 = *(ulong **)(pIVar10 + 0x95a0);
              if (puVar11 == *(ulong **)(pIVar10 + 0x95a8)) {
                puVar11 = (ulong *)HandleScope::Extend(pIVar10);
              }
              *(ulong **)(pIVar10 + 0x95a0) = puVar11 + 1;
              *puVar11 = uVar15;
            }
            else {
              puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                           (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar15);
            }
            uVar7 = 0;
            if (uVar25 != 0) {
              uVar7 = 0;
              do {
                uVar15 = *puVar8;
                if ((*(int *)(uVar15 + 0xb) != (int)*puVar11) ||
                   ((*(byte *)((uVar15 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(uVar15 - 1)) &
                    0xf8) != 0x10)) goto LAB_01051d2c;
                iVar6 = (int)uVar7;
                if (iVar6 != 0) {
                  iVar27 = *(int *)(this + 0x1c);
                  lVar17 = **(long **)(this + 0x28);
                  *(int *)(this + 0x1c) = iVar27 + 1;
                  if (*(int *)(this + 0x10) == 0) {
                    *(undefined1 *)(lVar17 + iVar27 + 0xb) = 0x2c;
                  }
                  else {
                    *(undefined2 *)(lVar17 + (long)iVar27 * 2 + 0xb) = 0x2c;
                  }
                  if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                    IncrementalStringBuilder::Extend(pIVar1);
                  }
                }
                if (*(long *)(this + 0x48) != 0) {
                  iVar27 = *(int *)(this + 0x1c);
                  lVar17 = **(long **)(this + 0x28);
                  *(int *)(this + 0x1c) = iVar27 + 1;
                  if (*(int *)(this + 0x10) == 0) {
                    *(undefined1 *)(lVar17 + iVar27 + 0xb) = 10;
                  }
                  else {
                    *(undefined2 *)(lVar17 + (long)iVar27 * 2 + 0xb) = 10;
                  }
                  if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                    IncrementalStringBuilder::Extend(pIVar1);
                  }
                  if (0 < *(int *)(this + 0x50)) {
                    iVar27 = 0;
                    do {
                      psVar16 = *(short **)(this + 0x48);
                      sVar2 = *psVar16;
                      if (*(int *)(this + 0x10) == 0) {
                        while (sVar2 != 0) {
                          psVar16 = psVar16 + 1;
                          iVar3 = *(int *)(this + 0x1c);
                          lVar17 = **(long **)(this + 0x28);
                          *(int *)(this + 0x1c) = iVar3 + 1;
                          *(char *)(lVar17 + iVar3 + 0xb) = (char)sVar2;
                          if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                            IncrementalStringBuilder::Extend(pIVar1);
                          }
                          sVar2 = *psVar16;
                        }
                      }
                      else {
                        while (sVar2 != 0) {
                          psVar16 = psVar16 + 1;
                          iVar3 = *(int *)(this + 0x1c);
                          lVar17 = **(long **)(this + 0x28);
                          *(int *)(this + 0x1c) = iVar3 + 1;
                          *(short *)(lVar17 + (long)iVar3 * 2 + 0xb) = sVar2;
                          if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                            IncrementalStringBuilder::Extend(pIVar1);
                          }
                          sVar2 = *psVar16;
                        }
                      }
                      iVar27 = iVar27 + 1;
                    } while (iVar27 < *(int *)(this + 0x50));
                  }
                }
                pIVar28 = *(Isolate **)this;
                uVar15 = *puVar8 & 0xffffffff00000000;
                pIVar10 = pIVar28 + 0x95a0;
                uVar15 = uVar15 | *(uint *)((uVar15 | *(uint *)(*puVar8 + 7)) + (long)(iVar6 << 2) +
                                           7);
                if (*(CanonicalHandleScope **)(pIVar28 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                  puVar12 = *(ulong **)pIVar10;
                  if (puVar12 == *(ulong **)(pIVar28 + 0x95a8)) {
                    puVar12 = (ulong *)HandleScope::Extend(pIVar28);
                  }
                  *(ulong **)pIVar10 = puVar12 + 1;
                  *puVar12 = uVar15;
                }
                else {
                  puVar12 = (ulong *)CanonicalHandleScope::Lookup
                                               (*(CanonicalHandleScope **)(pIVar28 + 0x95b8),uVar15)
                  ;
                }
                uVar7 = -(uVar7 >> 0x1f) & 0xfffffffe00000000 | uVar7 << 1;
                if (*(CanonicalHandleScope **)(pIVar28 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                  puVar13 = *(ulong **)pIVar10;
                  if (puVar13 == *(ulong **)(pIVar28 + 0x95a8)) {
                    puVar13 = (ulong *)HandleScope::Extend(pIVar28);
                  }
                  *(ulong **)pIVar10 = puVar13 + 1;
                  *puVar13 = uVar7;
                }
                else {
                  puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                               (*(CanonicalHandleScope **)(pIVar28 + 0x95b8),uVar7);
                }
                uVar4 = Serialize_<false>(this,puVar12,0,puVar13);
                if (uVar4 != 1) {
                  if (uVar4 != 0) goto joined_r0x01053768;
                  iVar27 = *(int *)(this + 0x1c);
                  lVar17 = **(long **)(this + 0x28);
                  *(int *)(this + 0x1c) = iVar27 + 1;
                  if (*(int *)(this + 0x10) == 0) {
                    *(undefined1 *)(lVar17 + iVar27 + 0xb) = 0x6e;
                    iVar27 = *(int *)(this + 0x1c);
                    if (iVar27 == *(int *)(this + 0x18)) {
                      IncrementalStringBuilder::Extend(pIVar1);
                      iVar27 = *(int *)(this + 0x1c);
                    }
                    lVar17 = **(long **)(this + 0x28);
                    *(int *)(this + 0x1c) = iVar27 + 1;
                    *(undefined1 *)(lVar17 + iVar27 + 0xb) = 0x75;
                    iVar27 = *(int *)(this + 0x1c);
                    if (iVar27 == *(int *)(this + 0x18)) {
                      IncrementalStringBuilder::Extend(pIVar1);
                      iVar27 = *(int *)(this + 0x1c);
                    }
                    lVar17 = **(long **)(this + 0x28);
                    *(int *)(this + 0x1c) = iVar27 + 1;
                    *(undefined1 *)(lVar17 + iVar27 + 0xb) = 0x6c;
                    iVar27 = *(int *)(this + 0x1c);
                    if (iVar27 == *(int *)(this + 0x18)) {
                      IncrementalStringBuilder::Extend(pIVar1);
                      iVar27 = *(int *)(this + 0x1c);
                    }
                    lVar17 = **(long **)(this + 0x28);
                    *(int *)(this + 0x1c) = iVar27 + 1;
                    *(undefined1 *)(lVar17 + iVar27 + 0xb) = 0x6c;
                  }
                  else {
                    *(undefined2 *)(lVar17 + (long)iVar27 * 2 + 0xb) = 0x6e;
                    iVar27 = *(int *)(this + 0x1c);
                    if (iVar27 == *(int *)(this + 0x18)) {
                      IncrementalStringBuilder::Extend(pIVar1);
                      iVar27 = *(int *)(this + 0x1c);
                    }
                    lVar17 = **(long **)(this + 0x28);
                    *(int *)(this + 0x1c) = iVar27 + 1;
                    *(undefined2 *)(lVar17 + (long)iVar27 * 2 + 0xb) = 0x75;
                    iVar27 = *(int *)(this + 0x1c);
                    if (iVar27 == *(int *)(this + 0x18)) {
                      IncrementalStringBuilder::Extend(pIVar1);
                      iVar27 = *(int *)(this + 0x1c);
                    }
                    lVar17 = **(long **)(this + 0x28);
                    *(int *)(this + 0x1c) = iVar27 + 1;
                    *(undefined2 *)(lVar17 + (long)iVar27 * 2 + 0xb) = 0x6c;
                    iVar27 = *(int *)(this + 0x1c);
                    if (iVar27 == *(int *)(this + 0x18)) {
                      IncrementalStringBuilder::Extend(pIVar1);
                      iVar27 = *(int *)(this + 0x1c);
                    }
                    lVar17 = **(long **)(this + 0x28);
                    *(int *)(this + 0x1c) = iVar27 + 1;
                    *(undefined2 *)(lVar17 + (long)iVar27 * 2 + 0xb) = 0x6c;
                  }
                  if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                    IncrementalStringBuilder::Extend(pIVar1);
                  }
                }
                uVar7 = (ulong)(iVar6 + 1U);
              } while (iVar6 + 1U != uVar25);
              goto LAB_01053594;
            }
            goto LAB_01051d2c;
          }
          if (uVar25 == 0) goto LAB_01051d28;
          pIVar10 = *(Isolate **)this;
          uVar15 = uVar15 | *(uint *)(uVar7 + 7);
          if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar8 = *(ulong **)(pIVar10 + 0x95a0);
            if (puVar8 == *(ulong **)(pIVar10 + 0x95a8)) {
              puVar8 = (ulong *)HandleScope::Extend(pIVar10);
            }
            *(ulong **)(pIVar10 + 0x95a0) = puVar8 + 1;
            *puVar8 = uVar15;
          }
          else {
            puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar15);
          }
          lVar17 = *(long *)this;
          uVar4 = 0;
          do {
            uVar7 = GetCurrentStackPosition();
            if (((uVar7 < *(ulong *)(lVar17 + 0x68)) &&
                (uVar5 = StackGuard::HandleInterrupts((StackGuard *)(*(long *)this + 0x48)),
                (uVar5 & 1) != 0)) && (uVar5 == *(uint *)(*(long *)this + 0x180)))
            goto LAB_01053750;
            if (uVar4 != 0) {
              iVar6 = *(int *)(this + 0x1c);
              lVar19 = **(long **)(this + 0x28);
              *(int *)(this + 0x1c) = iVar6 + 1;
              if (*(int *)(this + 0x10) == 0) {
                *(undefined1 *)(lVar19 + iVar6 + 0xb) = 0x2c;
              }
              else {
                *(undefined2 *)(lVar19 + (long)iVar6 * 2 + 0xb) = 0x2c;
              }
              if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                IncrementalStringBuilder::Extend(pIVar1);
              }
            }
            if (*(long *)(this + 0x48) != 0) {
              iVar6 = *(int *)(this + 0x1c);
              lVar19 = **(long **)(this + 0x28);
              *(int *)(this + 0x1c) = iVar6 + 1;
              if (*(int *)(this + 0x10) == 0) {
                *(undefined1 *)(lVar19 + iVar6 + 0xb) = 10;
              }
              else {
                *(undefined2 *)(lVar19 + (long)iVar6 * 2 + 0xb) = 10;
              }
              if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                IncrementalStringBuilder::Extend(pIVar1);
              }
              if (0 < *(int *)(this + 0x50)) {
                iVar6 = 0;
                do {
                  psVar16 = *(short **)(this + 0x48);
                  sVar2 = *psVar16;
                  if (*(int *)(this + 0x10) == 0) {
                    while (sVar2 != 0) {
                      psVar16 = psVar16 + 1;
                      iVar27 = *(int *)(this + 0x1c);
                      lVar19 = **(long **)(this + 0x28);
                      *(int *)(this + 0x1c) = iVar27 + 1;
                      *(char *)(lVar19 + iVar27 + 0xb) = (char)sVar2;
                      if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                        IncrementalStringBuilder::Extend(pIVar1);
                      }
                      sVar2 = *psVar16;
                    }
                  }
                  else {
                    while (sVar2 != 0) {
                      psVar16 = psVar16 + 1;
                      iVar27 = *(int *)(this + 0x1c);
                      lVar19 = **(long **)(this + 0x28);
                      *(int *)(this + 0x1c) = iVar27 + 1;
                      *(short *)(lVar19 + (long)iVar27 * 2 + 0xb) = sVar2;
                      if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                        IncrementalStringBuilder::Extend(pIVar1);
                      }
                      sVar2 = *psVar16;
                    }
                  }
                  iVar6 = iVar6 + 1;
                } while (iVar6 < *(int *)(this + 0x50));
              }
            }
            SerializeDouble(this,*(double *)(*puVar8 + ((long)(int)(uVar4 << 3) | 7U)));
            uVar4 = uVar4 + 1;
          } while (uVar4 != uVar25);
LAB_01053594:
          *(int *)(this + 0x50) = *(int *)(this + 0x50) + -1;
          if (uVar25 != 0) {
            lVar17 = *(long *)(this + 0x48);
            goto joined_r0x010535b0;
          }
        }
        else {
LAB_01051d28:
          uVar7 = 0;
LAB_01051d2c:
          if (uVar25 <= (uint)uVar7) goto LAB_01053594;
          uVar4 = SerializeArrayLikeSlow(this,puVar8,uVar7,(ulong)dVar31 & 0xffffffff);
          if (uVar4 != 1) goto joined_r0x01053768;
          *(int *)(this + 0x50) = *(int *)(this + 0x50) + -1;
          lVar17 = *(long *)(this + 0x48);
joined_r0x010535b0:
          if (lVar17 != 0) {
            iVar6 = *(int *)(this + 0x1c);
            lVar17 = **(long **)(this + 0x28);
            *(int *)(this + 0x1c) = iVar6 + 1;
            if (*(int *)(this + 0x10) == 0) {
              *(undefined1 *)(lVar17 + iVar6 + 0xb) = 10;
            }
            else {
              *(undefined2 *)(lVar17 + (long)iVar6 * 2 + 0xb) = 10;
            }
            if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
              IncrementalStringBuilder::Extend(pIVar1);
            }
            if (0 < *(int *)(this + 0x50)) {
              iVar6 = 0;
              do {
                psVar16 = *(short **)(this + 0x48);
                sVar2 = *psVar16;
                if (*(int *)(this + 0x10) == 0) {
                  while (sVar2 != 0) {
                    psVar16 = psVar16 + 1;
                    iVar27 = *(int *)(this + 0x1c);
                    lVar17 = **(long **)(this + 0x28);
                    *(int *)(this + 0x1c) = iVar27 + 1;
                    *(char *)(lVar17 + iVar27 + 0xb) = (char)sVar2;
                    if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                      IncrementalStringBuilder::Extend(pIVar1);
                    }
                    sVar2 = *psVar16;
                  }
                }
                else {
                  while (sVar2 != 0) {
                    psVar16 = psVar16 + 1;
                    iVar27 = *(int *)(this + 0x1c);
                    lVar17 = **(long **)(this + 0x28);
                    *(int *)(this + 0x1c) = iVar27 + 1;
                    *(short *)(lVar17 + (long)iVar27 * 2 + 0xb) = sVar2;
                    if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                      IncrementalStringBuilder::Extend(pIVar1);
                    }
                    sVar2 = *psVar16;
                  }
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < *(int *)(this + 0x50));
            }
          }
        }
        iVar6 = *(int *)(this + 0x1c);
        lVar17 = **(long **)(this + 0x28);
        *(int *)(this + 0x1c) = iVar6 + 1;
        if (*(int *)(this + 0x10) == 0) {
          *(undefined1 *)(lVar17 + iVar6 + 0xb) = 0x5d;
        }
        else {
          *(undefined2 *)(lVar17 + (long)iVar6 * 2 + 0xb) = 0x5d;
        }
        if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
          IncrementalStringBuilder::Extend(pIVar1);
        }
        uVar4 = 1;
        *(long *)(this + 0x60) = *(long *)(this + 0x60) + -0x10;
        goto joined_r0x01053768;
      }
      if (0x3f < *(ushort *)((uVar15 | 7) + (ulong)*(uint *)(uVar7 - 1))) {
        if ((*(byte *)((uVar15 | 9) + (ulong)*(uint *)(uVar7 - 1)) >> 1 & 1) == 0) {
          if ((param_3 & 1) != 0) {
            iVar6 = *(int *)(this + 0x1c);
            lVar24 = **(long **)(this + 0x28);
            *(int *)(this + 0x1c) = iVar6 + 1;
            if (*(int *)(this + 0x10) == 0) {
              *(undefined1 *)(lVar24 + iVar6 + 0xb) = 0x2c;
            }
            else {
              *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 0x2c;
            }
            if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
              IncrementalStringBuilder::Extend((IncrementalStringBuilder *)(this + 8));
            }
          }
          if (*(long *)(this + 0x48) != 0) {
            iVar6 = *(int *)(this + 0x1c);
            pIVar1 = (IncrementalStringBuilder *)(this + 8);
            lVar24 = **(long **)(this + 0x28);
            *(int *)(this + 0x1c) = iVar6 + 1;
            if (*(int *)(this + 0x10) == 0) {
              *(undefined1 *)(lVar24 + iVar6 + 0xb) = 10;
            }
            else {
              *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 10;
            }
            if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
              IncrementalStringBuilder::Extend(pIVar1);
            }
            if (0 < *(int *)(this + 0x50)) {
              iVar6 = 0;
              do {
                psVar16 = *(short **)(this + 0x48);
                sVar2 = *psVar16;
                if (*(int *)(this + 0x10) == 0) {
                  while (sVar2 != 0) {
                    psVar16 = psVar16 + 1;
                    iVar27 = *(int *)(this + 0x1c);
                    lVar24 = **(long **)(this + 0x28);
                    *(int *)(this + 0x1c) = iVar27 + 1;
                    *(char *)(lVar24 + iVar27 + 0xb) = (char)sVar2;
                    if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                      IncrementalStringBuilder::Extend(pIVar1);
                    }
                    sVar2 = *psVar16;
                  }
                }
                else {
                  while (sVar2 != 0) {
                    psVar16 = psVar16 + 1;
                    iVar27 = *(int *)(this + 0x1c);
                    lVar24 = **(long **)(this + 0x28);
                    *(int *)(this + 0x1c) = iVar27 + 1;
                    *(short *)(lVar24 + (long)iVar27 * 2 + 0xb) = sVar2;
                    if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                      IncrementalStringBuilder::Extend(pIVar1);
                    }
                    sVar2 = *psVar16;
                  }
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < *(int *)(this + 0x50));
            }
          }
          SerializeString(this,param_4);
          iVar6 = *(int *)(this + 0x1c);
          pIVar1 = (IncrementalStringBuilder *)(this + 8);
          lVar24 = **(long **)(this + 0x28);
          *(int *)(this + 0x1c) = iVar6 + 1;
          if (*(int *)(this + 0x10) == 0) {
            *(undefined1 *)(lVar24 + iVar6 + 0xb) = 0x3a;
          }
          else {
            *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 0x3a;
          }
          if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
            IncrementalStringBuilder::Extend(pIVar1);
          }
          if (*(long *)(this + 0x48) != 0) {
            iVar6 = *(int *)(this + 0x1c);
            lVar24 = **(long **)(this + 0x28);
            *(int *)(this + 0x1c) = iVar6 + 1;
            if (*(int *)(this + 0x10) == 0) {
              *(undefined1 *)(lVar24 + iVar6 + 0xb) = 0x20;
            }
            else {
              *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 0x20;
            }
            if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
              IncrementalStringBuilder::Extend(pIVar1);
            }
          }
          uVar7 = *puVar8;
          if (((uVar7 & 1) != 0) &&
             (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0xa9)) {
            uVar7 = SerializeJSProxy(this,puVar8,param_4);
            return uVar7;
          }
          pIVar26 = *(Isolate **)this;
          uVar14 = *(undefined8 *)(pIVar26 + 0x95a0);
          lVar24 = *(long *)(pIVar26 + 0x95a8);
          *(int *)(pIVar26 + 0x95b0) = *(int *)(pIVar26 + 0x95b0) + 1;
          uVar4 = StackPush(this,puVar8,param_4);
          if (uVar4 == 1) {
            if (*(long *)(this + 0x38) == 0) {
              uVar7 = *puVar8;
              uVar15 = uVar7 & 0xffffffff00000000;
              if ((0x411 < *(ushort *)((uVar15 | *(uint *)(uVar7 - 1)) + 7)) &&
                 ((*(uint *)((uVar15 | 0xb) + (ulong)*(uint *)(uVar7 - 1)) >> 0x15 & 1) == 0)) {
                pIVar10 = *(Isolate **)this;
                if ((*(int *)(uVar7 + 7) == *(int *)(pIVar10 + 0x168)) ||
                   (*(int *)(uVar7 + 7) == *(int *)(pIVar10 + 1000))) {
                  uVar15 = uVar15 | *(uint *)(uVar7 - 1);
                  if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                    puVar11 = *(ulong **)(pIVar10 + 0x95a0);
                    if (puVar11 == *(ulong **)(pIVar10 + 0x95a8)) {
                      puVar11 = (ulong *)HandleScope::Extend(pIVar10);
                    }
                    *(ulong **)(pIVar10 + 0x95a0) = puVar11 + 1;
                    *puVar11 = uVar15;
                  }
                  else {
                    puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                                 (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),
                                                  uVar15);
                  }
                  iVar6 = *(int *)(this + 0x1c);
                  lVar17 = **(long **)(this + 0x28);
                  *(int *)(this + 0x1c) = iVar6 + 1;
                  if (*(int *)(this + 0x10) == 0) {
                    *(undefined1 *)(lVar17 + iVar6 + 0xb) = 0x7b;
                  }
                  else {
                    *(undefined2 *)(lVar17 + (long)iVar6 * 2 + 0xb) = 0x7b;
                  }
                  if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                    IncrementalStringBuilder::Extend(pIVar1);
                  }
                  iVar6 = *(int *)(this + 0x50);
                  *(int *)(this + 0x50) = iVar6 + 1;
                  uVar7 = *puVar11;
                  uVar15 = (ulong)(*(uint *)(uVar7 + 0xb) >> 10) & 0x3ff;
                  if ((int)uVar15 != 0) {
                    bVar29 = 0;
                    lVar17 = 0xc;
                    do {
                      pIVar10 = *(Isolate **)this;
                      uVar7 = uVar7 & 0xffffffff00000000 |
                              (ulong)*(uint *)(lVar17 + (uVar7 & 0xffffffff00000000 |
                                                        (ulong)*(uint *)(uVar7 + 0x17)) + 3);
                      if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) ==
                          (CanonicalHandleScope *)0x0) {
                        puVar12 = *(ulong **)(pIVar10 + 0x95a0);
                        if (puVar12 == *(ulong **)(pIVar10 + 0x95a8)) {
                          puVar12 = (ulong *)HandleScope::Extend(pIVar10);
                        }
                        *(ulong **)(pIVar10 + 0x95a0) = puVar12 + 1;
                        *puVar12 = uVar7;
                      }
                      else {
                        puVar12 = (ulong *)CanonicalHandleScope::Lookup
                                                     (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),
                                                      uVar7);
                        uVar7 = *puVar12;
                      }
                      if (*(ushort *)
                           ((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) < 0x40)
                      {
                        uVar7 = *puVar11;
                        uVar4 = *(uint *)(lVar17 + (uVar7 & 0xffffffff00000000 |
                                                   (ulong)*(uint *)(uVar7 + 0x17)) + 7);
                        if ((uVar4 >> 5 & 1) == 0) {
                          if (((uVar4 >> 2 & 1) == 0) && (*(int *)(*puVar8 - 1) == (int)uVar7)) {
                            uVar25 = *(int *)((uVar7 & 0xffffffff00000000 | lVar17 + 7U) +
                                             (ulong)*(uint *)(uVar7 + 0x17)) >> 1;
                            uVar5 = uVar25 >> 0x13 & 0x3ff;
                            iVar6 = (uint)*(byte *)(uVar7 + 3) - (uint)*(byte *)(uVar7 + 4);
                            if ((int)uVar5 < iVar6) {
                              uVar20 = (ulong)*(byte *)(uVar7 + 4) << 0x1c;
                              iVar27 = (uVar5 + *(byte *)(uVar7 + 4)) * 4;
                            }
                            else {
                              iVar27 = (uVar5 - iVar6) * 4 + 8;
                              uVar20 = 0x20000000;
                            }
                            uVar25 = uVar25 >> 6 & 7;
                            local_b8[0] = SUB41(uVar25,0);
                            if (4 < uVar25) {
                              uVar14 = Representation::Mnemonic((Representation *)local_b8);
                              PrintF("%s\n",uVar14);
                    /* WARNING: Subroutine does not return */
                              V8_Fatal("unreachable code");
                            }
                            lVar19 = JSObject::FastPropertyAt
                                               (puVar8,uVar4 >> 7 & 7,
                                                (ulong)((int)uVar5 < iVar6) << 0xd |
                                                (long)iVar6 << 0x10 | (long)iVar27 | uVar20 |
                                                *(ulong *)(&DAT_019cca38 + (ulong)uVar25 * 8));
LAB_010539a8:
                            iVar6 = Serialize_<true>(this,lVar19,bVar29,puVar12);
                            if (iVar6 != 2) {
                              bVar29 = bVar29 | iVar6 == 1;
                              goto LAB_010539cc;
                            }
                          }
                          else {
                            LookupIterator::PropertyOrElement
                                      (local_b8,*(undefined8 *)this,puVar8,puVar12,3);
                            lVar19 = Object::GetProperty(local_b8,false);
                            if (lVar19 != 0) goto LAB_010539a8;
                          }
                          uVar4 = 2;
                          goto joined_r0x01053a8c;
                        }
                      }
LAB_010539cc:
                      if (uVar15 * 0xc == lVar17) goto LAB_010539e4;
                      uVar7 = *puVar11;
                      lVar17 = lVar17 + 0xc;
                    } while( true );
                  }
                  *(int *)(this + 0x50) = iVar6;
                  goto LAB_01053a34;
                }
              }
            }
            uVar4 = SerializeJSReceiverSlow(this,puVar8);
            if (uVar4 == 1) goto LAB_010525ac;
          }
          goto joined_r0x01053a8c;
        }
LAB_010515c0:
        uVar4 = 0;
        goto switchD_010511e0_caseD_40;
      }
      if ((param_3 & 1) != 0) {
        iVar6 = *(int *)(this + 0x1c);
        lVar24 = **(long **)(this + 0x28);
        *(int *)(this + 0x1c) = iVar6 + 1;
        if (*(int *)(this + 0x10) == 0) {
          *(undefined1 *)(lVar24 + iVar6 + 0xb) = 0x2c;
        }
        else {
          *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 0x2c;
        }
        if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
          IncrementalStringBuilder::Extend((IncrementalStringBuilder *)(this + 8));
        }
      }
      if (*(long *)(this + 0x48) != 0) {
        iVar6 = *(int *)(this + 0x1c);
        pIVar1 = (IncrementalStringBuilder *)(this + 8);
        lVar24 = **(long **)(this + 0x28);
        *(int *)(this + 0x1c) = iVar6 + 1;
        if (*(int *)(this + 0x10) == 0) {
          *(undefined1 *)(lVar24 + iVar6 + 0xb) = 10;
        }
        else {
          *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 10;
        }
        if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
          IncrementalStringBuilder::Extend(pIVar1);
        }
        if (0 < *(int *)(this + 0x50)) {
          iVar6 = 0;
          do {
            psVar16 = *(short **)(this + 0x48);
            sVar2 = *psVar16;
            if (*(int *)(this + 0x10) == 0) {
              while (sVar2 != 0) {
                psVar16 = psVar16 + 1;
                iVar27 = *(int *)(this + 0x1c);
                lVar24 = **(long **)(this + 0x28);
                *(int *)(this + 0x1c) = iVar27 + 1;
                *(char *)(lVar24 + iVar27 + 0xb) = (char)sVar2;
                if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                  IncrementalStringBuilder::Extend(pIVar1);
                }
                sVar2 = *psVar16;
              }
            }
            else {
              while (sVar2 != 0) {
                psVar16 = psVar16 + 1;
                iVar27 = *(int *)(this + 0x1c);
                lVar24 = **(long **)(this + 0x28);
                *(int *)(this + 0x1c) = iVar27 + 1;
                *(short *)(lVar24 + (long)iVar27 * 2 + 0xb) = sVar2;
                if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                  IncrementalStringBuilder::Extend(pIVar1);
                }
                sVar2 = *psVar16;
              }
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)(this + 0x50));
        }
      }
      SerializeString(this,param_4);
      iVar6 = *(int *)(this + 0x1c);
      lVar24 = **(long **)(this + 0x28);
      *(int *)(this + 0x1c) = iVar6 + 1;
      if (*(int *)(this + 0x10) == 0) {
        *(undefined1 *)(lVar24 + iVar6 + 0xb) = 0x3a;
      }
      else {
        *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 0x3a;
      }
      if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
        IncrementalStringBuilder::Extend((IncrementalStringBuilder *)(this + 8));
      }
      if (*(long *)(this + 0x48) != 0) {
        iVar6 = *(int *)(this + 0x1c);
        lVar24 = **(long **)(this + 0x28);
        *(int *)(this + 0x1c) = iVar6 + 1;
        if (*(int *)(this + 0x10) == 0) {
          *(undefined1 *)(lVar24 + iVar6 + 0xb) = 0x20;
        }
        else {
          *(undefined2 *)(lVar24 + (long)iVar6 * 2 + 0xb) = 0x20;
        }
        if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
          IncrementalStringBuilder::Extend((IncrementalStringBuilder *)(this + 8));
        }
      }
      SerializeString(this,puVar8);
    }
  }
  uVar4 = 1;
  goto switchD_010511e0_caseD_40;
LAB_01053750:
  uVar4 = 2;
joined_r0x01053768:
  if (pIVar26 == (Isolate *)0x0) goto switchD_010511e0_caseD_40;
  *(undefined8 *)(pIVar26 + 0x95a0) = uVar14;
  *(int *)(pIVar26 + 0x95b0) = *(int *)(pIVar26 + 0x95b0) + -1;
  if (*(long *)(pIVar26 + 0x95a8) == lVar24) goto switchD_010511e0_caseD_40;
  *(long *)(pIVar26 + 0x95a8) = lVar24;
  goto LAB_01053744;
LAB_010539e4:
  *(int *)(this + 0x50) = *(int *)(this + 0x50) + -1;
  if ((bVar29 != 0) && (*(long *)(this + 0x48) != 0)) {
    iVar6 = *(int *)(this + 0x1c);
    lVar17 = **(long **)(this + 0x28);
    *(int *)(this + 0x1c) = iVar6 + 1;
    if (*(int *)(this + 0x10) == 0) {
      *(undefined1 *)(lVar17 + iVar6 + 0xb) = 10;
    }
    else {
      *(undefined2 *)(lVar17 + (long)iVar6 * 2 + 0xb) = 10;
    }
    if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
      IncrementalStringBuilder::Extend(pIVar1);
    }
    if (0 < *(int *)(this + 0x50)) {
      iVar6 = 0;
      do {
        psVar16 = *(short **)(this + 0x48);
        sVar2 = *psVar16;
        if (*(int *)(this + 0x10) == 0) {
          while (sVar2 != 0) {
            psVar16 = psVar16 + 1;
            iVar27 = *(int *)(this + 0x1c);
            lVar17 = **(long **)(this + 0x28);
            *(int *)(this + 0x1c) = iVar27 + 1;
            *(char *)(lVar17 + iVar27 + 0xb) = (char)sVar2;
            if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
              IncrementalStringBuilder::Extend(pIVar1);
            }
            sVar2 = *psVar16;
          }
        }
        else {
          while (sVar2 != 0) {
            psVar16 = psVar16 + 1;
            iVar27 = *(int *)(this + 0x1c);
            lVar17 = **(long **)(this + 0x28);
            *(int *)(this + 0x1c) = iVar27 + 1;
            *(short *)(lVar17 + (long)iVar27 * 2 + 0xb) = sVar2;
            if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
              IncrementalStringBuilder::Extend(pIVar1);
            }
            sVar2 = *psVar16;
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(this + 0x50));
    }
  }
LAB_01053a34:
  iVar6 = *(int *)(this + 0x1c);
  lVar17 = **(long **)(this + 0x28);
  *(int *)(this + 0x1c) = iVar6 + 1;
  if (*(int *)(this + 0x10) == 0) {
    *(undefined1 *)(lVar17 + iVar6 + 0xb) = 0x7d;
  }
  else {
    *(undefined2 *)(lVar17 + (long)iVar6 * 2 + 0xb) = 0x7d;
  }
  if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
    IncrementalStringBuilder::Extend(pIVar1);
  }
LAB_010525ac:
  uVar4 = 1;
  *(long *)(this + 0x60) = *(long *)(this + 0x60) + -0x10;
joined_r0x01053a8c:
  if (pIVar26 == (Isolate *)0x0) goto switchD_010511e0_caseD_40;
  *(undefined8 *)(pIVar26 + 0x95a0) = uVar14;
  *(int *)(pIVar26 + 0x95b0) = *(int *)(pIVar26 + 0x95b0) + -1;
  if (*(long *)(pIVar26 + 0x95a8) == lVar24) goto switchD_010511e0_caseD_40;
  *(long *)(pIVar26 + 0x95a8) = lVar24;
LAB_01053744:
  HandleScope::DeleteExtensions(pIVar26);
switchD_010511e0_caseD_40:
  return (ulong)uVar4;
}

