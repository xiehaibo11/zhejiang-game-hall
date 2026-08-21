
/* WARNING: Removing unreachable block (ram,0x01535ac8) */
/* v8::internal::RegExpDisjunction::SortConsecutiveAtoms(v8::internal::RegExpCompiler*) */

byte __thiscall
v8::internal::RegExpDisjunction::SortConsecutiveAtoms
          (RegExpDisjunction *this,RegExpCompiler *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  byte bVar12;
  long *plVar13;
  code *local_68;
  
  plVar13 = *(long **)(this + 8);
  bVar12 = 0;
  uVar1 = *(uint *)((long)plVar13 + 0xc);
  if (0 < (int)uVar1) {
    iVar7 = 0;
    do {
      uVar8 = (ulong)iVar7;
      do {
        if ((long)(ulong)uVar1 <= (long)uVar8) goto LAB_01535a54;
        uVar3 = (**(code **)(**(long **)(*plVar13 + uVar8 * 8) + 0xa0))();
        uVar8 = uVar8 + 1;
      } while ((uVar3 & 1) == 0);
      uVar8 = (ulong)(((~uVar3 & 1) + (int)uVar8) - 1);
LAB_01535a54:
      uVar3 = (uint)uVar8;
      if (uVar3 == uVar1) {
        return bVar12;
      }
      lVar11 = (long)(int)uVar3;
      lVar4 = (**(code **)(**(long **)(*plVar13 + (long)(int)uVar3 * 8) + 0x98))();
      uVar2 = *(uint *)(lVar4 + 0x18);
      lVar4 = (long)(int)(uVar3 + 1);
      do {
        iVar7 = (int)uVar8;
        if ((long)(ulong)uVar1 <= lVar4) break;
        plVar9 = *(long **)(*plVar13 + lVar4 * 8);
        uVar8 = (**(code **)(*plVar9 + 0xa0))(plVar9);
        if ((uVar8 & 1) == 0) break;
        lVar5 = (**(code **)(*plVar9 + 0x98))(plVar9);
        lVar4 = lVar4 + 1;
        uVar8 = (ulong)(iVar7 + 1);
      } while (*(uint *)(lVar5 + 0x18) == uVar2);
      if ((uVar2 >> 1 & 1) == 0) {
        uVar10 = (iVar7 + 1) - lVar11;
        lVar4 = *plVar13 + lVar11 * 8;
        lVar11 = lVar4 + uVar10 * 8;
        local_68 = CompareFirstChar;
        uVar8 = uVar10;
        if (0x80 < (int)uVar10) {
LAB_01535b54:
          pvVar6 = operator_new(uVar8 << 3,(nothrow_t *)&std::nothrow);
          if (pvVar6 == (void *)0x0) goto code_r0x01535b64;
          std::__ndk1::
          __stable_sort<v8::internal::ZoneList<v8::internal::RegExpTree*>::StableSort<int(*)(v8::internal::RegExpTree*const*,v8::internal::RegExpTree*const*)>(int(*)(v8::internal::RegExpTree*const*,v8::internal::RegExpTree*const*),unsigned_long,unsigned_long)::_lambda(v8::internal::RegExpTree*const&,v8::internal::RegExpTree*const&)_1_&,v8::internal::RegExpTree**>
                    (lVar4,lVar11,&local_68,uVar10,pvVar6,uVar8);
LAB_01535bd0:
          operator_delete(pvVar6);
          goto LAB_01535a04;
        }
LAB_01535b6c:
        std::__ndk1::
        __stable_sort<v8::internal::ZoneList<v8::internal::RegExpTree*>::StableSort<int(*)(v8::internal::RegExpTree*const*,v8::internal::RegExpTree*const*)>(int(*)(v8::internal::RegExpTree*const*,v8::internal::RegExpTree*const*),unsigned_long,unsigned_long)::_lambda(v8::internal::RegExpTree*const&,v8::internal::RegExpTree*const&)_1_&,v8::internal::RegExpTree**>
                  (lVar4,lVar11,&local_68,uVar10,0,0);
      }
      else {
        uVar10 = (iVar7 + 1) - lVar11;
        lVar4 = *plVar13 + lVar11 * 8;
        local_68 = (code *)(*(long *)(param_1 + 0x440) + 0xae18);
        lVar11 = lVar4 + uVar10 * 8;
        uVar8 = uVar10;
        if (0x80 < (int)uVar10) {
          do {
            pvVar6 = operator_new(uVar8 << 3,(nothrow_t *)&std::nothrow);
            if (pvVar6 != (void *)0x0) {
              FUN_01539b44(lVar4,lVar11,&local_68,uVar10,pvVar6,uVar8);
              goto LAB_01535bd0;
            }
            uVar8 = uVar8 >> 1;
          } while (uVar8 != 0);
        }
        FUN_01539b44(lVar4,lVar11,&local_68,uVar10,0,0);
      }
LAB_01535a04:
      iVar7 = iVar7 + 2;
      bVar12 = bVar12 | 1 < (int)uVar10;
    } while (iVar7 < (int)uVar1);
  }
  return bVar12;
code_r0x01535b64:
  uVar8 = uVar8 >> 1;
  if (uVar8 == 0) goto LAB_01535b6c;
  goto LAB_01535b54;
}

