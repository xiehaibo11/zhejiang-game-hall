
/* dragonBones::JSONDataParser::_getString(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, char const*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
dragonBones::JSONDataParser::_getString
          (JSONDataParser *this,GenericValue *param_1,char *param_2,basic_string *param_3)

{
  GenericValue *__s2;
  uint uVar1;
  ushort uVar2;
  int iVar3;
  size_t __n;
  ulong *in_x8;
  GenericValue *pGVar4;
  long lVar5;
  GenericValue *pGVar6;
  void *__dest;
  void *pvVar7;
  GenericValue *pGVar8;
  long lVar9;
  ulong uVar10;
  GenericValue *pGVar11;
  GenericValue *pGVar12;
  GenericValue *pGVar13;
  ulong uVar14;
  double local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  pGVar11 = param_1 + -1;
  pGVar4 = pGVar11;
  do {
    pGVar4 = pGVar4 + 1;
  } while (*pGVar4 != (GenericValue)0x0);
  pGVar6 = *(GenericValue **)(this + 8);
  uVar1 = *(uint *)this;
  uVar14 = (ulong)uVar1;
  pGVar8 = pGVar6 + uVar14 * 0x30;
  pGVar13 = pGVar6;
  if (uVar1 != 0) {
    lVar9 = uVar14 * 0x30;
    pGVar12 = pGVar6;
    do {
      iVar3 = *(int *)pGVar12;
      if ((*(ushort *)(pGVar12 + 0x16) & 0x1000) != 0) {
        iVar3 = 0x15 - (char)pGVar12[0x15];
      }
      if (iVar3 == (int)((long)pGVar4 - (long)param_1)) {
        __s2 = *(GenericValue **)(pGVar12 + 8);
        if ((*(ushort *)(pGVar12 + 0x16) & 0x1000) != 0) {
          __s2 = pGVar12;
        }
        pGVar13 = pGVar12;
        if ((__s2 == param_1) ||
           (iVar3 = memcmp(param_1,__s2,(long)pGVar4 - (long)param_1 & 0xffffffff), iVar3 == 0))
        break;
      }
      lVar9 = lVar9 + -0x30;
      pGVar12 = pGVar12 + 0x30;
      pGVar13 = pGVar8;
    } while (lVar9 != 0);
  }
  pGVar4 = pGVar11;
  if (pGVar8 == pGVar13) {
    in_x8[1] = 0;
    in_x8[2] = 0;
    *in_x8 = 0;
    if ((*param_2 & 1U) == 0) {
      uVar10 = *(ulong *)(param_2 + 8);
      uVar14 = *(ulong *)param_2;
      in_x8[2] = *(ulong *)(param_2 + 0x10);
      in_x8[1] = uVar10;
      *in_x8 = uVar14;
      lVar5 = *(long *)(lVar5 + 0x28);
      goto LAB_00d3cb70;
    }
    uVar14 = *(ulong *)(param_2 + 8);
    if (0xffffffffffffffef < uVar14) goto LAB_00d3cba0;
    pvVar7 = *(void **)(param_2 + 0x10);
    if (uVar14 < 0x17) {
      __dest = (void *)((long)in_x8 + 1);
      *(char *)in_x8 = (char)((int)uVar14 << 1);
      if (uVar14 != 0) goto LAB_00d3ca80;
    }
    else {
      uVar10 = uVar14 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar10);
      in_x8[1] = uVar14;
      in_x8[2] = (ulong)__dest;
      *in_x8 = uVar10 | 1;
LAB_00d3ca80:
      memcpy(__dest,pvVar7,uVar14);
    }
    *(undefined1 *)((long)__dest + uVar14) = 0;
  }
  else {
    do {
      pGVar4 = pGVar4 + 1;
    } while (*pGVar4 != (GenericValue)0x0);
    if (uVar1 == 0) {
LAB_00d3c878:
      if (pGVar6 == pGVar8) goto LAB_00d3c940;
      if (((byte)pGVar6[0x2f] >> 2 & 1) != 0) {
        do {
          pGVar11 = pGVar11 + 1;
        } while (*pGVar11 != (GenericValue)0x0);
        uVar1 = *(uint *)this;
        pGVar6 = *(GenericValue **)(this + 8);
        pGVar4 = pGVar6;
        if (uVar1 == 0) {
LAB_00d3caac:
          if (pGVar4 == pGVar6 + (ulong)uVar1 * 0x30) goto LAB_00d3cad0;
          pGVar11 = pGVar4 + 0x18;
          if (((byte)pGVar4[0x2f] >> 4 & 1) == 0) goto LAB_00d3cae0;
        }
        else {
          lVar9 = (ulong)uVar1 * 0x30;
          do {
            iVar3 = *(int *)pGVar4;
            if ((*(ushort *)(pGVar4 + 0x16) & 0x1000) != 0) {
              iVar3 = 0x15 - (char)pGVar4[0x15];
            }
            if (iVar3 == (int)((long)pGVar11 - (long)param_1)) {
              pGVar13 = *(GenericValue **)(pGVar4 + 8);
              if ((*(ushort *)(pGVar4 + 0x16) & 0x1000) != 0) {
                pGVar13 = pGVar4;
              }
              if ((pGVar13 == param_1) ||
                 (iVar3 = memcmp(param_1,pGVar13,(long)pGVar11 - (long)param_1 & 0xffffffff),
                 iVar3 == 0)) goto LAB_00d3caac;
            }
            lVar9 = lVar9 + -0x30;
            pGVar4 = pGVar4 + 0x30;
          } while (lVar9 != 0);
LAB_00d3cad0:
          pGVar11 = (GenericValue *)
                    &rapidjson::
                     GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                     ::
                     operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                     ::buffer;
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::
          operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
          ::buffer = 0;
          DAT_01d38c18 = 0;
          DAT_01d38c20 = 0;
LAB_00d3cae0:
          pGVar11 = *(GenericValue **)(pGVar11 + 8);
        }
        *in_x8 = 0;
        in_x8[1] = 0;
        in_x8[2] = 0;
        __n = strlen((char *)pGVar11);
        if (0xffffffffffffffef < __n) {
LAB_00d3cba0:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (__n < 0x17) {
          pvVar7 = (void *)((long)in_x8 + 1);
          *(char *)in_x8 = (char)((int)__n << 1);
          if (__n != 0) goto LAB_00d3cb3c;
        }
        else {
          uVar14 = __n + 0x10 & 0xfffffffffffffff0;
          pvVar7 = operator_new(uVar14);
          in_x8[1] = __n;
          in_x8[2] = (ulong)pvVar7;
          *in_x8 = uVar14 | 1;
LAB_00d3cb3c:
          memcpy(pvVar7,pGVar11,__n);
        }
        *(undefined1 *)((long)pvVar7 + __n) = 0;
        goto LAB_00d3cb6c;
      }
    }
    else {
      lVar9 = uVar14 * 0x30;
      do {
        iVar3 = *(int *)pGVar6;
        if ((*(ushort *)(pGVar6 + 0x16) & 0x1000) != 0) {
          iVar3 = 0x15 - (char)pGVar6[0x15];
        }
        if (iVar3 == (int)((long)pGVar4 - (long)param_1)) {
          pGVar13 = *(GenericValue **)(pGVar6 + 8);
          if ((*(ushort *)(pGVar6 + 0x16) & 0x1000) != 0) {
            pGVar13 = pGVar6;
          }
          if ((pGVar13 == param_1) ||
             (iVar3 = memcmp(param_1,pGVar13,(long)pGVar4 - (long)param_1 & 0xffffffff), iVar3 == 0)
             ) goto LAB_00d3c878;
        }
        lVar9 = lVar9 + -0x30;
        pGVar6 = pGVar6 + 0x30;
      } while (lVar9 != 0);
LAB_00d3c940:
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01d38c18 = 0;
      DAT_01d38c20 = 0;
    }
    do {
      pGVar11 = pGVar11 + 1;
    } while (*pGVar11 != (GenericValue)0x0);
    uVar1 = *(uint *)this;
    pGVar6 = *(GenericValue **)(this + 8);
    pGVar4 = pGVar6;
    if (uVar1 == 0) {
LAB_00d3ca00:
      if (pGVar4 == pGVar6 + (ulong)uVar1 * 0x30) goto LAB_00d3ca34;
      uVar2 = *(ushort *)(pGVar4 + 0x2e);
      if ((uVar2 >> 9 & 1) == 0) {
        if ((uVar2 >> 5 & 1) != 0) {
          local_70 = (double)(long)*(int *)(pGVar4 + 0x18);
          goto LAB_00d3cb60;
        }
        if ((uVar2 >> 6 & 1) != 0) {
          local_70 = (double)NEON_ucvtf((ulong)*(uint *)(pGVar4 + 0x18));
          goto LAB_00d3cb60;
        }
        uVar14 = *(ulong *)(pGVar4 + 0x18);
        if ((uVar2 >> 7 & 1) != 0) {
          local_70 = (double)(long)uVar14;
          goto LAB_00d3cb60;
        }
        goto LAB_00d3ca4c;
      }
      local_70 = *(double *)(pGVar4 + 0x18);
    }
    else {
      lVar9 = (ulong)uVar1 * 0x30;
      do {
        iVar3 = *(int *)pGVar4;
        if ((*(ushort *)(pGVar4 + 0x16) & 0x1000) != 0) {
          iVar3 = 0x15 - (char)pGVar4[0x15];
        }
        if (iVar3 == (int)((long)pGVar11 - (long)param_1)) {
          pGVar13 = *(GenericValue **)(pGVar4 + 8);
          if ((*(ushort *)(pGVar4 + 0x16) & 0x1000) != 0) {
            pGVar13 = pGVar4;
          }
          if ((pGVar13 == param_1) ||
             (iVar3 = memcmp(param_1,pGVar13,(long)pGVar11 - (long)param_1 & 0xffffffff), iVar3 == 0
             )) goto LAB_00d3ca00;
        }
        lVar9 = lVar9 + -0x30;
        pGVar4 = pGVar4 + 0x30;
      } while (lVar9 != 0);
LAB_00d3ca34:
      uVar14 = 0;
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01d38c18 = 0;
      DAT_01d38c20 = 0;
LAB_00d3ca4c:
      local_70 = (double)uVar14;
    }
LAB_00d3cb60:
    to_string<double>(&local_70);
  }
LAB_00d3cb6c:
  lVar5 = *(long *)(lVar5 + 0x28);
LAB_00d3cb70:
  if (lVar5 != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

