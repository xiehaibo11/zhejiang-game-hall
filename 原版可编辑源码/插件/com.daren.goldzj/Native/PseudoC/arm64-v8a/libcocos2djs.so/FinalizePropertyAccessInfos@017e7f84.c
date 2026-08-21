
/* v8::internal::compiler::AccessInfoFactory::FinalizePropertyAccessInfos(v8::internal::ZoneVector<v8::internal::compiler::PropertyAccessInfo>,
   v8::internal::compiler::AccessMode,
   v8::internal::ZoneVector<v8::internal::compiler::PropertyAccessInfo>*) const */

undefined8 __thiscall
v8::internal::compiler::AccessInfoFactory::FinalizePropertyAccessInfos
          (AccessInfoFactory *this,long *param_2,undefined4 param_3,
          vector<v8::internal::compiler::PropertyAccessInfo,v8::internal::ZoneAllocator<v8::internal::compiler::PropertyAccessInfo>>
          *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  bool bVar3;
  Zone *this_00;
  ulong uVar4;
  PropertyAccessInfo *pPVar5;
  PropertyAccessInfo *pPVar6;
  int *piVar7;
  CompilationDependencies *this_01;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int *piVar11;
  long lVar12;
  int *piVar13;
  PropertyAccessInfo *pPVar14;
  long lVar15;
  int *piVar8;
  
  if (*param_2 == param_2[1]) {
    return 0;
  }
  uVar4 = param_2[1] - *param_2;
  if (uVar4 == 0) {
    pPVar5 = (PropertyAccessInfo *)0x0;
    pPVar14 = (PropertyAccessInfo *)0x0;
    bVar3 = true;
  }
  else {
    if (0xf0f0f0 < (ulong)(((long)uVar4 >> 3) * -0xf0f0f0f0f0f0f0f)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    this_00 = (Zone *)param_2[3];
    pPVar5 = *(PropertyAccessInfo **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)pPVar5) < uVar4) {
      pPVar5 = (PropertyAccessInfo *)Zone::NewExpand(this_00,uVar4);
    }
    else {
      *(PropertyAccessInfo **)(this_00 + 0x10) = pPVar5 + uVar4;
    }
    lVar15 = *param_2;
    lVar1 = param_2[1];
    if (lVar15 != lVar1) {
      lVar12 = 0;
      do {
        PropertyAccessInfo::PropertyAccessInfo
                  (pPVar5 + lVar12,(PropertyAccessInfo *)(lVar15 + lVar12));
        lVar12 = lVar12 + 0x88;
      } while (lVar1 - lVar15 != lVar12);
      if (lVar12 != 0) {
        pPVar14 = pPVar5 + lVar12;
        pPVar6 = pPVar5;
        do {
          lVar12 = lVar12 + -0x88;
          if (pPVar14 + -0x88 != pPVar6) {
            lVar15 = 0;
            do {
              uVar4 = PropertyAccessInfo::Merge
                                (pPVar6 + lVar15 + 0x88,pPVar6,param_3,*(undefined8 *)(this + 0x18))
              ;
              if ((uVar4 & 1) != 0) goto LAB_017e8050;
              lVar15 = lVar15 + 0x88;
            } while (lVar12 != lVar15);
          }
          if (*(PropertyAccessInfo **)(param_4 + 8) == *(PropertyAccessInfo **)(param_4 + 0x10)) {
            std::__ndk1::
            vector<v8::internal::compiler::PropertyAccessInfo,v8::internal::ZoneAllocator<v8::internal::compiler::PropertyAccessInfo>>
            ::__push_back_slow_path<v8::internal::compiler::PropertyAccessInfo_const&>
                      (param_4,pPVar6);
          }
          else {
            PropertyAccessInfo::PropertyAccessInfo(*(PropertyAccessInfo **)(param_4 + 8),pPVar6);
            *(long *)(param_4 + 8) = *(long *)(param_4 + 8) + 0x88;
          }
LAB_017e8050:
          bVar3 = pPVar14 + -0x88 != pPVar6;
          pPVar6 = pPVar6 + 0x88;
        } while (bVar3);
        bVar3 = false;
        goto LAB_017e80dc;
      }
    }
    bVar3 = true;
    pPVar14 = pPVar5;
  }
LAB_017e80dc:
  piVar7 = *(int **)param_4;
  piVar13 = *(int **)(param_4 + 8);
  if (piVar7 == piVar13) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!result->empty()");
  }
  if (bVar3 || pPVar5 == (PropertyAccessInfo *)0x0) {
    piVar11 = piVar7;
    if (piVar7 == piVar13) {
      return 1;
    }
  }
  else {
    do {
      if (*(long *)(pPVar14 + -0x60) != 0) {
        *(long *)(pPVar14 + -0x58) = *(long *)(pPVar14 + -0x60);
      }
      pPVar6 = pPVar14 + -0x88;
      if (*(long *)(pPVar14 + -0x80) != 0) {
        *(long *)(pPVar14 + -0x78) = *(long *)(pPVar14 + -0x80);
      }
      pPVar14 = pPVar6;
    } while (pPVar5 != pPVar6);
    piVar7 = *(int **)param_4;
    piVar13 = *(int **)(param_4 + 8);
    piVar11 = piVar7;
    if (piVar7 == piVar13) {
      return 1;
    }
  }
  do {
    piVar8 = piVar7 + 0x22;
    if (*piVar7 == 0) {
      return 0;
    }
    piVar7 = piVar8;
  } while (piVar13 != piVar8);
  for (; piVar11 != piVar13; piVar11 = piVar11 + 0x22) {
    puVar10 = *(undefined8 **)(piVar11 + 10);
    puVar2 = *(undefined8 **)(piVar11 + 0xc);
    if (puVar10 != puVar2) {
      this_01 = *(CompilationDependencies **)(this + 8);
      do {
        puVar9 = puVar10 + 1;
        CompilationDependencies::RecordDependency(this_01,(CompilationDependency *)*puVar10);
        puVar10 = puVar9;
      } while (puVar2 != puVar9);
      puVar10 = *(undefined8 **)(piVar11 + 10);
    }
    *(undefined8 **)(piVar11 + 0xc) = puVar10;
  }
  return 1;
}

