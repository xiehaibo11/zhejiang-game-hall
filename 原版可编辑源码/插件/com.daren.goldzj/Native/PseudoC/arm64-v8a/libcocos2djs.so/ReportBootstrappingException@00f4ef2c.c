
/* v8::internal::ReportBootstrappingException(v8::internal::Handle<v8::internal::Object>,
   v8::internal::MessageLocation*) */

void v8::internal::ReportBootstrappingException(ulong *param_1,long *param_2)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  ulong local_70;
  void *local_68;
  ulong local_60;
  void *local_58;
  
  base::OS::PrintError("Exception thrown during bootstrapping\n");
  if (param_2 == (long *)0x0) {
    return;
  }
  if ((ulong *)*param_2 == (ulong *)0x0) {
    return;
  }
  local_58 = *(void **)*param_2;
  iVar2 = Script::GetLineNumber((Script *)&local_58,(int)param_2[1]);
  uVar7 = *param_1;
  if (((uVar7 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)))) {
LAB_00f4f048:
    uVar10 = *(uint *)(*(ulong *)*param_2 + 7);
    if (((uVar10 & 1) == 0) ||
       (uVar9 = *(ulong *)*param_2 & 0xffffffff00000000, uVar8 = uVar9 | uVar10,
       0x3f < *(ushort *)((uVar9 | 7) + (ulong)*(uint *)(uVar8 - 1)))) {
      if (((uVar7 & 1) == 0) ||
         (0x3f < *(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)))) {
        base::OS::PrintError("Extension or internal compilation error.\n");
        goto LAB_00f4f110;
      }
      local_60 = uVar7;
      String::ToCString(&local_58,&local_60,1,1,0);
      base::OS::PrintError("Extension or internal compilation error: %s.\n",local_58);
    }
    else {
      local_60 = uVar8;
      String::ToCString(&local_58,&local_60,1,1,0);
      base::OS::PrintError
                ("Extension or internal compilation error in %s at line %d.\n",local_58,
                 (ulong)(iVar2 + 1U));
    }
  }
  else {
    uVar10 = *(uint *)(*(ulong *)*param_2 + 7);
    if (((uVar10 & 1) == 0) ||
       (uVar8 = *(ulong *)*param_2 & 0xffffffff00000000,
       0x3f < *(ushort *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | uVar10) - 1)))) goto LAB_00f4f048;
    local_60 = uVar7;
    String::ToCString(&local_58,&local_60,1,1,0);
    pvVar1 = local_58;
    local_70 = *(ulong *)*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)*param_2 + 7);
    String::ToCString(&local_68,&local_70,1,1,0);
    base::OS::PrintError
              ("Extension or internal compilation error: %s in %s at line %d.\n",pvVar1,local_68,
               (ulong)(iVar2 + 1U));
    pvVar1 = local_68;
    local_68 = (void *)0x0;
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
    }
  }
  pvVar1 = local_58;
  local_58 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
LAB_00f4f110:
  uVar10 = *(uint *)(*(ulong *)*param_2 + 3);
  if ((uVar10 & 1) != 0) {
    pIVar4 = (Isolate *)(*(ulong *)*param_2 & 0xffffffff00000000);
    uVar7 = (ulong)pIVar4 | (ulong)uVar10;
    if (*(ushort *)(((ulong)pIVar4 | 7) + (ulong)*(uint *)(uVar7 - 1)) < 0x40) {
      if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar5 = *(ulong **)(pIVar4 + 0x95a0);
        if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
          puVar5 = (ulong *)HandleScope::Extend(pIVar4);
        }
        *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
        *puVar5 = uVar7;
      }
      else {
        puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar7);
      }
      PrintF("Failing script:");
      iVar2 = *(int *)(*puVar5 + 7);
      if (iVar2 == 0) {
        pcVar6 = " <not available>\n";
      }
      else {
        PrintF("\n");
        PrintF("%5d: ",1);
        if (0 < iVar2) {
          iVar11 = 0;
          uVar10 = 1;
          do {
            local_58 = (void *)*puVar5;
            local_60 = CONCAT44(local_60._4_4_,iVar11);
            local_68 = (void *)CONCAT44(local_68._4_4_,
                                        (uint)*(ushort *)
                                               (((ulong)local_58 & 0xffffffff00000000 |
                                                (ulong)*(uint *)((long)local_58 - 1)) + 7));
            uVar3 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                              (&local_68,&local_58,&local_60);
            PrintF("%c",(ulong)(uVar3 & 0xffff));
            if ((iVar11 < iVar2 + -2) && ((uVar3 & 0xffff) == 10)) {
              uVar10 = uVar10 + 1;
              PrintF("%5d: ",(ulong)uVar10);
            }
            iVar11 = iVar11 + 1;
          } while (iVar2 != iVar11);
        }
        pcVar6 = "\n";
      }
      PrintF(pcVar6);
    }
  }
  return;
}

