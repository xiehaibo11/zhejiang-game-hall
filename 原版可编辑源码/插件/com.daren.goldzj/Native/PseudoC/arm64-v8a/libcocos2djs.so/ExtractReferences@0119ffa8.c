
/* v8::internal::V8HeapExplorer::ExtractReferences(v8::internal::HeapEntry*,
   v8::internal::HeapObject) */

void __thiscall
v8::internal::V8HeapExplorer::ExtractReferences
          (V8HeapExplorer *this,undefined8 param_1,ulong param_3)

{
  uint uVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint *puVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  
  uVar8 = param_3 & 0xffffffff00000000;
  uVar4 = uVar8 | 7;
  if (*(short *)(uVar4 + *(uint *)(param_3 - 1)) == 0xab) {
    uVar4 = (ulong)*(uint *)(param_3 + 0xb);
    pcVar2 = "native_context";
  }
  else {
    puVar5 = (uint *)(param_3 - 1);
    if (*(short *)(uVar4 + *puVar5) == 0x424) {
      ExtractJSArrayBufferReferences(this,param_1,param_3);
      return;
    }
    if (0xa9 < *(ushort *)(uVar4 + *puVar5)) {
      if ((((*(ushort *)(uVar4 + *puVar5) == 0x41f) || (*(short *)(uVar4 + *puVar5) == 0x41e)) ||
          (*(short *)(uVar4 + *puVar5) == 0x41d)) || (*(short *)(uVar4 + *puVar5) == 0x41c)) {
        uVar1 = *(uint *)(param_3 + 0xb);
        pcVar2 = "table";
LAB_011a00ac:
        uVar3 = 0xc;
      }
      else {
        if (*(short *)(uVar4 + *puVar5) == 0x42d) {
          uVar1 = *(uint *)(param_3 + 0xb);
          pcVar2 = "reactions_or_result";
          goto LAB_011a00ac;
        }
        if (2 < *(ushort *)(uVar4 + *puVar5) - 0x417) goto LAB_011a00c0;
        SetInternalReference(this,param_1,"function",uVar8 | *(uint *)(param_3 + 0xb),0xc);
        SetInternalReference(this,param_1,"context",uVar8 | *(uint *)(param_3 + 0xf),0x10);
        SetInternalReference(this,param_1,"receiver",uVar8 | *(uint *)(param_3 + 0x13),0x14);
        uVar1 = *(uint *)(param_3 + 0x23);
        pcVar2 = "parameters_and_registers";
        uVar3 = 0x24;
      }
      SetInternalReference(this,param_1,pcVar2,uVar8 | uVar1,uVar3);
LAB_011a00c0:
      ExtractJSObjectReferences(this,param_1,param_3);
      return;
    }
    if (*(ushort *)(uVar4 + *puVar5) < 0x40) {
      ExtractStringReferences(this,param_1,param_3);
      return;
    }
    if (*(short *)(uVar4 + *puVar5) != 0x40) {
      if (*(short *)(uVar4 + *puVar5) == 0xa2) {
        ExtractMapReferences(this,param_1,param_3);
        return;
      }
      if (*(short *)(uVar4 + *puVar5) == 0xa6) {
        ExtractSharedFunctionInfoReferences(this,param_1,param_3);
        return;
      }
      if (*(short *)(uVar4 + *puVar5) == 0x65) {
        SetInternalReference(this,param_1,"source",uVar8 | *(uint *)(param_3 + 3),4);
        SetInternalReference(this,param_1,"name",uVar8 | *(uint *)(param_3 + 7),8);
        SetInternalReference(this,param_1,"context_data",uVar8 | *(uint *)(param_3 + 0x13),0x14);
        TagObject(this,uVar8 | *(uint *)(param_3 + 0x1b),"(script line ends)");
        uVar1 = *(uint *)(param_3 + 0x1b);
        pcVar2 = "line_ends";
      }
      else {
        if (*(short *)(uVar4 + *puVar5) != 0x51) {
          if (*(short *)(uVar4 + *puVar5) == 0x52) {
            SetInternalReference(this,param_1,"getter",uVar8 | *(uint *)(param_3 + 3),4);
            uVar1 = *(uint *)(param_3 + 7);
            pcVar2 = "setter";
LAB_011a03c0:
            uVar8 = uVar8 | uVar1;
            uVar3 = 8;
            goto LAB_0119fff8;
          }
          if (*(short *)(uVar4 + *puVar5) != 0x9a) {
            if (*(short *)(uVar4 + *puVar5) != 0x99) {
              if (*(short *)(uVar4 + *puVar5) != 0x5d) {
                if (*(short *)(uVar4 + *puVar5) == 0xa5) {
                  SetInternalReference(this,param_1,"value",uVar8 | *(uint *)(param_3 + 0xb),0xc);
                  TagObject(this,uVar8 | *(uint *)(param_3 + 0xf),"(dependent code)");
                  pcVar2 = "dependent_code";
                  uVar3 = 0x10;
                  uVar8 = uVar8 | *(uint *)(param_3 + 0xf);
                  goto LAB_0119fff8;
                }
                if (*(short *)(uVar4 + *puVar5) != 0x55) {
                  if (*(short *)(uVar4 + *puVar5) != 0x56) {
                    if (*(short *)(uVar4 + *puVar5) == 0x9f) {
                      uVar1 = *(uint *)(param_3 + 7);
                      if ((uVar1 != 3) && (((ulong)uVar1 & 3) == 3)) {
                        SetWeakReference(this,param_1,"optimized code",
                                         (ulong)uVar1 & 0xfffffffffffffffd | uVar8,8);
                        return;
                      }
                    }
                    else {
                      if (*(short *)(uVar4 + *puVar5) == 0x9c) {
                        ExtractDescriptorArrayReferences(this,param_1,param_3);
                        return;
                      }
                      if (*(ushort *)(uVar4 + *puVar5) - 0x97 < 2) {
                        if (1 < *(int *)(param_3 + 3)) {
                          uVar4 = 0;
                          iVar7 = 8;
                          do {
                            uVar1 = *(uint *)(param_3 + 7 + (long)(iVar7 + -8));
                            uVar6 = (ulong)uVar1;
                            if ((uVar1 == 3) || ((uVar6 & 3) != 3)) {
                              if ((uVar6 & 3) == 1) {
                                SetInternalReference
                                          (this,param_1,uVar4 & 0xffffffff,uVar8 | uVar6,iVar7);
                              }
                            }
                            else {
                              SetWeakReference(this,param_1,uVar4 & 0xffffffff,
                                               uVar8 | uVar6 & 0xfffffffffffffffd,iVar7);
                            }
                            uVar4 = uVar4 + 1;
                            iVar7 = iVar7 + 4;
                          } while ((long)uVar4 < (long)(*(int *)(param_3 + 3) >> 1));
                        }
                      }
                      else if (*(short *)(uVar4 + *puVar5) == 0xa7) {
                        if (1 < *(int *)(param_3 + 7)) {
                          uVar4 = 0;
                          iVar7 = 0xc;
                          do {
                            uVar1 = *(uint *)(param_3 + 0xb + (long)(iVar7 + -0xc));
                            uVar6 = (ulong)uVar1;
                            if ((uVar1 == 3) || ((uVar6 & 3) != 3)) {
                              if ((uVar6 & 3) == 1) {
                                SetInternalReference
                                          (this,param_1,uVar4 & 0xffffffff,uVar8 | uVar6,iVar7);
                              }
                            }
                            else {
                              SetWeakReference(this,param_1,uVar4 & 0xffffffff,
                                               uVar8 | uVar6 & 0xfffffffffffffffd,iVar7);
                            }
                            uVar4 = uVar4 + 1;
                            iVar7 = iVar7 + 4;
                          } while ((long)uVar4 < (long)(*(int *)(param_3 + 7) >> 1));
                        }
                      }
                      else {
                        if (*(ushort *)(uVar4 + *puVar5) - 0x88 < 10) {
                          ExtractContextReferences(this,param_1,param_3);
                          return;
                        }
                        if (*(short *)(uVar4 + *puVar5) == 0x78) {
                          ExtractEphemeronHashTableReferences(this,param_1,param_3);
                          return;
                        }
                        if ((*(ushort *)(uVar4 + *puVar5) - 0x76 < 0xf) &&
                           (uVar1 = *(uint *)(param_3 + 3), 1 < (int)uVar1)) {
                          uVar4 = 0;
                          iVar7 = 8;
                          do {
                            SetInternalReference
                                      (this,param_1,uVar4 & 0xffffffff,
                                       uVar8 | *(uint *)(param_3 + 7 + (long)(iVar7 + -8)),iVar7);
                            uVar4 = uVar4 + 1;
                            iVar7 = iVar7 + 4;
                          } while (uVar4 < uVar1 >> 1);
                        }
                      }
                    }
                    return;
                  }
                  uVar1 = *(uint *)(param_3 + 7);
                  pcVar2 = "constant_elements";
                  goto LAB_011a03c0;
                }
                SetInternalReference
                          (this,param_1,"transition_info",uVar8 | *(uint *)(param_3 + 3),4);
                SetInternalReference(this,param_1,"nested_site",uVar8 | *(uint *)(param_3 + 7),8);
                TagObject(this,uVar8 | *(uint *)(param_3 + 0xb),"(dependent code)");
                uVar4 = (ulong)*(uint *)(param_3 + 0xb);
                pcVar2 = "dependent_code";
                goto LAB_0119fff0;
              }
              TagObject(this,param_3,"(feedback cell)");
            }
            pcVar2 = "value";
            uVar3 = 4;
            uVar8 = uVar8 | *(uint *)(param_3 + 3);
            goto LAB_0119fff8;
          }
          TagObject(this,uVar8 | *(uint *)(param_3 + 3),"(code relocation info)");
          SetInternalReference(this,param_1,"relocation_info",uVar8 | *(uint *)(param_3 + 3),4);
          TagObject(this,uVar8 | *(uint *)(param_3 + 7),"(code deopt data)");
          SetInternalReference(this,param_1,"deoptimization_data",uVar8 | *(uint *)(param_3 + 7),8);
          TagObject(this,uVar8 | *(uint *)(param_3 + 0xb),"(source position table)");
          uVar4 = (ulong)*(uint *)(param_3 + 0xb);
          pcVar2 = "source_position_table";
          goto LAB_0119fff0;
        }
        SetInternalReference(this,param_1,"name",uVar8 | *(uint *)(param_3 + 3),4);
        SetInternalReference
                  (this,param_1,"expected_receiver_type",uVar8 | *(uint *)(param_3 + 0xb),0xc);
        SetInternalReference(this,param_1,"getter",uVar8 | *(uint *)(param_3 + 0x13),0x14);
        SetInternalReference(this,param_1,"setter",uVar8 | *(uint *)(param_3 + 0xf),0x10);
        uVar1 = *(uint *)(param_3 + 0x1b);
        pcVar2 = "data";
      }
      uVar8 = uVar8 | uVar1;
      uVar3 = 0x1c;
      goto LAB_0119fff8;
    }
    uVar4 = (ulong)*(uint *)(param_3 + 0xb);
    pcVar2 = "name";
  }
LAB_0119fff0:
  uVar8 = uVar8 | uVar4;
  uVar3 = 0xc;
LAB_0119fff8:
  SetInternalReference(this,param_1,pcVar2,uVar8,uVar3);
  return;
}

