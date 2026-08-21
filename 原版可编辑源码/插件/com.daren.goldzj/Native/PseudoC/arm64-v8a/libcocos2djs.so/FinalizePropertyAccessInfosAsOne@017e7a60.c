
/* v8::internal::compiler::AccessInfoFactory::FinalizePropertyAccessInfosAsOne(v8::internal::ZoneVector<v8::internal::compiler::PropertyAccessInfo>,
   v8::internal::compiler::AccessMode) const */

void v8::internal::compiler::AccessInfoFactory::FinalizePropertyAccessInfosAsOne
               (PropertyAccessInfo *param_1,long param_2,long *param_3,undefined4 param_4)

{
  PropertyAccessInfo *pPVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  bool bVar5;
  Zone *this;
  ulong uVar6;
  PropertyAccessInfo *pPVar7;
  undefined8 uVar8;
  CompilationDependencies *this_00;
  undefined8 *puVar9;
  undefined8 *puVar10;
  PropertyAccessInfo *pPVar11;
  PropertyAccessInfo *pPVar12;
  PropertyAccessInfo *pPVar13;
  PropertyAccessInfo *pPVar14;
  PropertyAccessInfo *local_80;
  PropertyAccessInfo *local_78;
  PropertyAccessInfo *local_70;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)(param_2 + 0x18);
  local_80 = (PropertyAccessInfo *)0x0;
  local_78 = (PropertyAccessInfo *)0x0;
  local_70 = (PropertyAccessInfo *)0x0;
  uVar6 = param_3[1] - *param_3;
  if (uVar6 != 0) {
    if (0xf0f0f0 < (ulong)(((long)uVar6 >> 3) * -0xf0f0f0f0f0f0f0f)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    this = (Zone *)param_3[3];
    pPVar7 = *(PropertyAccessInfo **)(this + 0x10);
    if ((ulong)(*(long *)(this + 0x18) - (long)pPVar7) < uVar6) {
      pPVar7 = (PropertyAccessInfo *)Zone::NewExpand(this,uVar6);
    }
    else {
      *(PropertyAccessInfo **)(this + 0x10) = pPVar7 + uVar6;
    }
    lVar2 = *param_3;
    lVar3 = param_3[1];
    if (lVar2 != lVar3) {
      pPVar1 = (PropertyAccessInfo *)0x0;
      do {
        pPVar12 = pPVar1;
        PropertyAccessInfo::PropertyAccessInfo(pPVar7 + (long)pPVar12,pPVar12 + lVar2);
        pPVar1 = pPVar12 + 0x88;
      } while ((PropertyAccessInfo *)(lVar3 - lVar2) != pPVar1);
      if (pPVar1 != (PropertyAccessInfo *)0x0) {
        pPVar11 = pPVar7;
        pPVar13 = pPVar1;
        do {
          pPVar13 = pPVar13 + -0x88;
          if (pPVar7 + (long)pPVar12 != pPVar11) {
            pPVar14 = (PropertyAccessInfo *)0x0;
            do {
              uVar6 = PropertyAccessInfo::Merge
                                (pPVar11 + (long)(pPVar14 + 0x88),pPVar11,param_4,
                                 *(undefined8 *)(param_2 + 0x18));
              if ((uVar6 & 1) != 0) goto LAB_017e7b34;
              pPVar14 = pPVar14 + 0x88;
            } while (pPVar13 != pPVar14);
          }
          if (local_78 == local_70) {
            std::__ndk1::
            vector<v8::internal::compiler::PropertyAccessInfo,v8::internal::ZoneAllocator<v8::internal::compiler::PropertyAccessInfo>>
            ::__push_back_slow_path<v8::internal::compiler::PropertyAccessInfo_const&>
                      ((vector<v8::internal::compiler::PropertyAccessInfo,v8::internal::ZoneAllocator<v8::internal::compiler::PropertyAccessInfo>>
                        *)&local_80,pPVar11);
          }
          else {
            PropertyAccessInfo::PropertyAccessInfo(local_78,pPVar11);
            local_78 = local_78 + 0x88;
          }
LAB_017e7b34:
          pPVar14 = local_80;
          bVar5 = pPVar7 + (long)pPVar12 != pPVar11;
          pPVar11 = pPVar11 + 0x88;
        } while (bVar5);
        pPVar12 = pPVar7;
        if (local_80 != local_78) {
          while (pPVar12 != (PropertyAccessInfo *)0x0) {
            if (*(long *)(pPVar7 + (long)(pPVar1 + -0x60)) != 0) {
              *(long *)(pPVar7 + (long)(pPVar1 + -0x58)) =
                   *(long *)(pPVar7 + (long)(pPVar1 + -0x60));
            }
            if (*(long *)(pPVar7 + (long)(pPVar1 + -0x80)) != 0) {
              *(long *)(pPVar7 + (long)(pPVar1 + -0x78)) =
                   *(long *)(pPVar7 + (long)(pPVar1 + -0x80));
            }
            pPVar1 = pPVar1 + -0x88;
            pPVar12 = pPVar1;
          }
          if (((long)local_78 - (long)local_80 == 0x88) && (*(int *)local_80 != 0)) {
            puVar10 = *(undefined8 **)(local_80 + 0x28);
            puVar4 = *(undefined8 **)(local_80 + 0x30);
            if (puVar10 != puVar4) {
              this_00 = *(CompilationDependencies **)(param_2 + 8);
              do {
                puVar9 = puVar10 + 1;
                CompilationDependencies::RecordDependency(this_00,(CompilationDependency *)*puVar10)
                ;
                puVar10 = puVar9;
              } while (puVar4 != puVar9);
              puVar10 = *(undefined8 **)(pPVar14 + 0x28);
            }
            *(undefined8 **)(pPVar14 + 0x30) = puVar10;
            PropertyAccessInfo::PropertyAccessInfo(param_1,pPVar14);
          }
          else {
            uVar8 = *(undefined8 *)(param_2 + 0x18);
            *(undefined4 *)param_1 = 0;
            *(undefined8 *)(param_1 + 8) = 0;
            *(undefined8 *)(param_1 + 0x10) = 0;
            *(undefined8 *)(param_1 + 0x18) = 0;
            *(undefined8 *)(param_1 + 0x20) = uVar8;
            *(undefined8 *)(param_1 + 0x38) = 0;
            *(undefined8 *)(param_1 + 0x40) = uVar8;
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined8 *)(param_1 + 0x30) = 0;
            param_1[0x68] = (PropertyAccessInfo)0x0;
            *(undefined8 *)(param_1 + 0x78) = 0;
            *(undefined8 *)(param_1 + 0x80) = 0;
            *(undefined8 *)(param_1 + 0x50) = 0;
            *(undefined8 *)(param_1 + 0x48) = 0;
            *(undefined8 *)(param_1 + 0x60) = 0;
            *(undefined8 *)(param_1 + 0x58) = 0;
            *(undefined8 *)(param_1 + 0x70) = 1;
          }
          if (local_80 != (PropertyAccessInfo *)0x0) {
            while (pPVar7 = local_78, pPVar7 != local_80) {
              if (*(long *)(pPVar7 + -0x60) != 0) {
                *(long *)(pPVar7 + -0x58) = *(long *)(pPVar7 + -0x60);
              }
              local_78 = pPVar7 + -0x88;
              if (*(long *)(pPVar7 + -0x80) != 0) {
                *(long *)(pPVar7 + -0x78) = *(long *)(pPVar7 + -0x80);
              }
            }
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!result->empty()");
}

