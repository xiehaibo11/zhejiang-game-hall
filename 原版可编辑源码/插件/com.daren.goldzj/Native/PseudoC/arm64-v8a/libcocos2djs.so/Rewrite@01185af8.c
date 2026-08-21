
/* v8::internal::Rewriter::Rewrite(v8::internal::ParseInfo*) */

undefined4 v8::internal::Rewriter::Rewrite(ParseInfo *param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  RuntimeCallStats *pRVar6;
  Scope *this;
  Variable *pVVar7;
  VariableProxy *this_00;
  undefined8 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  void *pvVar11;
  Zone *pZVar12;
  AstNode *pAVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  RuntimeCallStats *local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  Variable *local_b0;
  undefined8 local_a8;
  Zone *local_a0;
  undefined8 uStack_98;
  Zone *local_90;
  long lStack_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  ulong local_68;
  undefined4 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  pRVar6 = *(RuntimeCallStats **)(param_1 + 0x88);
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = (RuntimeCallStats *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if ((pRVar6 != (RuntimeCallStats *)0x0) && (TracingFlags::runtime_stats != 0)) {
    uVar10 = 0x437;
    if (*(int *)(pRVar6 + 0x14) == 1) {
      uVar10 = 0x438;
    }
    local_e0 = pRVar6;
    RuntimeCallStats::Enter(pRVar6,(RuntimeCallTimer *)((ulong)&local_e0 | 8),uVar10);
  }
  lVar14 = *(long *)(param_1 + 0xa8);
  bVar3 = *(byte *)(*(long *)(lVar14 + 0x28) + 0x80);
  if (((bVar3 < 5) && ((1 << (ulong)(bVar3 & 0x1f) & 0x1aU) != 0)) && (*(int *)(lVar14 + 0x3c) != 0)
     ) {
    this = (Scope *)Scope::AsDeclarationScope();
    pVVar7 = (Variable *)
             Scope::NewTemporary(this,*(AstRawString **)
                                       (*(long *)(*(long *)(param_1 + 0x70) + 0x38) + 0xf8));
    uVar15 = *(ulong *)(param_1 + 0x20);
    uStack_98 = Scope::AsDeclarationScope();
    lStack_88 = *(long *)(param_1 + 0x70);
    local_a8 = 0;
    pZVar12 = *(Zone **)(lStack_88 + 0x448);
    local_80 = *(undefined8 **)(pZVar12 + 0x10);
    local_b0 = pVVar7;
    local_a0 = pZVar12;
    local_90 = pZVar12;
    if ((ulong)(*(long *)(pZVar12 + 0x18) - (long)local_80) < 8) {
      local_80 = (undefined8 *)Zone::NewExpand(pZVar12,8);
    }
    else {
      *(undefined8 **)(pZVar12 + 0x10) = local_80 + 1;
    }
    *local_80 = 0xaffffffff;
    local_78 = *(undefined8 **)(pZVar12 + 0x10);
    if ((ulong)(*(long *)(pZVar12 + 0x18) - (long)local_78) < 8) {
      local_78 = (undefined8 *)Zone::NewExpand(pZVar12,8);
    }
    else {
      *(undefined8 **)(pZVar12 + 0x10) = local_78 + 1;
    }
    *local_78 = 0x32ffffffff;
    local_70 = *(undefined8 **)(pZVar12 + 0x10);
    if ((ulong)(*(long *)(pZVar12 + 0x18) - (long)local_70) < 8) {
      local_70 = (undefined8 *)Zone::NewExpand(pZVar12,8);
    }
    else {
      *(undefined8 **)(pZVar12 + 0x10) = local_70 + 1;
    }
    *local_70 = 0x38ffffffff;
    local_60 = 0;
    local_68 = uVar15;
    if (0 < (int)*(uint *)(lVar14 + 0x3c)) {
      lVar16 = (ulong)*(uint *)(lVar14 + 0x3c) - 1;
      do {
        if ((char)local_60 == '\0') {
          pAVar13 = *(AstNode **)(*(long *)(lVar14 + 0x30) + lVar16 * 8);
          uVar15 = GetCurrentStackPosition();
          if (uVar15 < local_68) {
            local_60 = CONCAT31(local_60._1_3_,1);
          }
          else {
            Processor::VisitNoStackOverflowCheck((Processor *)&local_b0,pAVar13);
          }
        }
        *(undefined8 *)(*(long *)(lVar14 + 0x30) + lVar16 * 8) = local_a8;
        lVar4 = lVar16 + -1;
      } while ((0 < lVar16) &&
              ((lVar16 = lVar4, local_60._3_1_ != '\0' || (local_60._2_1_ == '\0'))));
      if (local_60._1_1_ != '\0') {
        this_00 = *(VariableProxy **)(local_90 + 0x10);
        if ((ulong)(*(long *)(local_90 + 0x18) - (long)this_00) < 0x18) {
          this_00 = (VariableProxy *)Zone::NewExpand(local_90,0x18);
        }
        else {
          *(VariableProxy **)(local_90 + 0x10) = this_00 + 0x18;
        }
        VariableProxy::VariableProxy(this_00,pVVar7,-1);
        puVar8 = *(undefined8 **)(local_90 + 0x10);
        if ((ulong)(*(long *)(local_90 + 0x18) - (long)puVar8) < 0x18) {
          puVar8 = (undefined8 *)Zone::NewExpand(local_90,0x18);
        }
        else {
          *(undefined8 **)(local_90 + 0x10) = puVar8 + 3;
        }
        puVar8[1] = this_00;
        *(undefined4 *)(puVar8 + 2) = 0xffffffff;
        *puVar8 = 0xfffffffff;
        uVar2 = *(uint *)(lVar14 + 0x38);
        uVar9 = *(uint *)(lVar14 + 0x3c);
        if ((int)uVar9 < (int)uVar2) {
          pvVar11 = *(void **)(lVar14 + 0x30);
        }
        else {
          pZVar12 = *(Zone **)param_1;
          uVar1 = uVar2 << 1 | 1;
          uVar15 = -(ulong)((uVar2 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
          pvVar11 = *(void **)(pZVar12 + 0x10);
          if ((ulong)(*(long *)(pZVar12 + 0x18) - (long)pvVar11) < uVar15) {
            pvVar11 = (void *)Zone::NewExpand(pZVar12,uVar15);
          }
          else {
            *(ulong *)(pZVar12 + 0x10) = (long)pvVar11 + uVar15;
          }
          uVar9 = *(uint *)(lVar14 + 0x3c);
          if (0 < (int)uVar9) {
            MemCopy(pvVar11,*(void **)(lVar14 + 0x30),(ulong)uVar9 << 3);
            uVar9 = *(uint *)(lVar14 + 0x3c);
          }
          *(void **)(lVar14 + 0x30) = pvVar11;
          *(uint *)(lVar14 + 0x38) = uVar1;
        }
        *(uint *)(lVar14 + 0x3c) = uVar9 + 1;
        *(undefined8 **)((long)pvVar11 + (long)(int)uVar9 * 8) = puVar8;
      }
      if ((char)local_60 != '\0') {
        uVar10 = 0;
        goto joined_r0x01185d9c;
      }
    }
  }
  uVar10 = 1;
joined_r0x01185d9c:
  if (local_e0 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_e0,(RuntimeCallTimer *)((ulong)&local_e0 | 8));
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

