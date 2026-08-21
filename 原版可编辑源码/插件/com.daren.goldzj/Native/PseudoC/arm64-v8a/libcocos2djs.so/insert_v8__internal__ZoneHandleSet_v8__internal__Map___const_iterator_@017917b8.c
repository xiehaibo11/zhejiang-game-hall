
/* std::__ndk1::enable_if<__is_forward_iterator<v8::internal::ZoneHandleSet<v8::internal::Map>::const_iterator>::value&&is_constructible<v8::internal::Handle<v8::internal::Map>,
   std::__ndk1::iterator_traits<v8::internal::ZoneHandleSet<v8::internal::Map>::const_iterator>::reference>::value,
   std::__ndk1::__wrap_iter<v8::internal::Handle<v8::internal::Map>*> >::type
   std::__ndk1::vector<v8::internal::Handle<v8::internal::Map>,
   std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map> >
   >::insert<v8::internal::ZoneHandleSet<v8::internal::Map>::const_iterator>(std::__ndk1::__wrap_iter<v8::internal::Handle<v8::internal::Map>
   const*>, v8::internal::ZoneHandleSet<v8::internal::Map>::const_iterator,
   v8::internal::ZoneHandleSet<v8::internal::Map>::const_iterator) */

ulong * __thiscall
std::__ndk1::
vector<v8::internal::Handle<v8::internal::Map>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map>>>
::insert<v8::internal::ZoneHandleSet<v8::internal::Map>::const_iterator>
          (vector<v8::internal::Handle<v8::internal::Map>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map>>>
           *this,ulong *param_2,long *param_3,long *param_4)

{
  ulong *puVar1;
  void *pvVar2;
  size_t sVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  void *pvVar14;
  size_t __n;
  long lVar15;
  ulong *puVar16;
  
  puVar16 = (ulong *)*param_4;
  uVar13 = param_4[1];
  puVar1 = (ulong *)*param_3;
  uVar12 = param_3[1];
  pvVar14 = *(void **)this;
  if ((puVar1 != puVar16) || (uVar12 != uVar13)) {
    lVar15 = (long)param_2 - (long)pvVar14 >> 3;
    lVar4 = lVar15 * -8;
    uVar6 = 0;
    do {
      do {
        uVar9 = uVar6;
        uVar6 = uVar9 - 1;
        lVar4 = lVar4 + -8;
      } while (puVar1 != puVar16);
    } while ((uVar12 - uVar13) + 1 != uVar9);
    puVar10 = *(ulong **)(this + 8);
    if ((long)~uVar6 < *(long *)(this + 0x10) - (long)puVar10 >> 3) {
      lVar8 = (long)puVar10 - (long)param_2;
      lVar15 = lVar8 >> 3;
      puVar7 = puVar10;
      if (lVar15 <= (long)~uVar6) {
        if (lVar8 < 1) {
          lVar15 = 0;
        }
        uVar12 = lVar15 + uVar12;
        if (uVar12 != uVar13) {
          lVar11 = uVar13 - uVar12;
          lVar15 = uVar12 << 0x20;
          do {
            uVar13 = *puVar1;
            if ((uVar13 & 3) != 0) {
              if ((ulong)(*(long *)(uVar13 + 6) - *(long *)(uVar13 - 2) >> 3) <=
                  (ulong)(lVar15 >> 0x20)) goto LAB_01791ad4;
              uVar13 = *(ulong *)(*(long *)(uVar13 - 2) + (lVar15 >> 0x20) * 8);
            }
            *puVar7 = uVar13;
            lVar11 = lVar11 + -1;
            lVar15 = lVar15 + 0x100000000;
            puVar7 = (ulong *)(*(long *)(this + 8) + 8);
            *(ulong **)(this + 8) = puVar7;
          } while (lVar11 != 0);
        }
        puVar16 = puVar1;
        uVar13 = uVar12;
        if (lVar8 < 1) {
          return param_2;
        }
      }
      sVar3 = (long)puVar7 + (lVar4 - (long)pvVar14);
      puVar1 = puVar7;
      for (puVar5 = (ulong *)((long)param_2 + sVar3); puVar5 < puVar10; puVar5 = puVar5 + 1) {
        *puVar1 = *puVar5;
        puVar1 = (ulong *)(*(long *)(this + 8) + 8);
        *(ulong **)(this + 8) = puVar1;
      }
      if (sVar3 != 0) {
        memmove(puVar7 + -((long)sVar3 >> 3),param_2,sVar3);
      }
      puVar1 = (ulong *)*param_3;
      uVar12 = param_3[1];
      if ((puVar1 != puVar16) || (uVar12 != uVar13)) {
        lVar4 = uVar12 << 0x20;
        puVar10 = param_2;
        lVar15 = ~uVar12 + uVar13;
        do {
          lVar8 = lVar15;
          uVar12 = *puVar1;
          if ((uVar12 & 3) != 0) {
            if ((ulong)(*(long *)(uVar12 + 6) - *(long *)(uVar12 - 2) >> 3) <=
                (ulong)(lVar4 >> 0x20)) goto LAB_01791ad4;
            uVar12 = *(ulong *)(*(long *)(uVar12 - 2) + (lVar4 >> 0x20) * 8);
          }
          puVar7 = puVar10 + 1;
          *puVar10 = uVar12;
          lVar15 = lVar8 + -1;
          lVar4 = lVar4 + 0x100000000;
          puVar10 = puVar7;
        } while ((puVar1 != puVar16) || (lVar8 != 0));
      }
    }
    else {
      uVar6 = ((long)puVar10 - (long)pvVar14 >> 3) - uVar6;
      if (uVar6 >> 0x3d != 0) {
LAB_01791ad4:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = *(long *)(this + 0x10) - (long)pvVar14;
      uVar9 = lVar4 >> 2;
      if (uVar6 <= uVar9) {
        uVar6 = uVar9;
      }
      if (0xffffffffffffffe < (ulong)(lVar4 >> 3)) {
        uVar6 = 0x1fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar2 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3d != 0) goto LAB_01791ad4;
        pvVar2 = operator_new(uVar6 << 3);
      }
      puVar16 = (ulong *)((long)pvVar2 + lVar15 * 8);
      puVar10 = puVar16;
      if (uVar12 != uVar13) {
        lVar15 = uVar13 - uVar12;
        lVar4 = uVar12 << 0x20;
        puVar7 = puVar16;
        do {
          uVar12 = *puVar1;
          if ((uVar12 & 3) != 0) {
            if ((ulong)(*(long *)(uVar12 + 6) - *(long *)(uVar12 - 2) >> 3) <=
                (ulong)(lVar4 >> 0x20)) goto LAB_01791ad4;
            uVar12 = *(ulong *)(*(long *)(uVar12 - 2) + (lVar4 >> 0x20) * 8);
          }
          puVar10 = puVar7 + 1;
          *puVar7 = uVar12;
          lVar15 = lVar15 + -1;
          lVar4 = lVar4 + 0x100000000;
          puVar7 = puVar10;
        } while (lVar15 != 0);
        pvVar14 = *(void **)this;
      }
      sVar3 = (long)param_2 - (long)pvVar14;
      if (0 < (long)sVar3) {
        memcpy((void *)((long)puVar16 - sVar3),pvVar14,sVar3);
      }
      __n = *(long *)(this + 8) - (long)param_2;
      if (0 < (long)__n) {
        memcpy(puVar10,param_2,__n);
        puVar10 = (ulong *)((long)puVar10 + __n);
      }
      pvVar14 = *(void **)this;
      *(void **)this = (void *)((long)puVar16 - sVar3);
      *(ulong **)(this + 8) = puVar10;
      *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar6 * 8);
      param_2 = puVar16;
      if (pvVar14 != (void *)0x0) {
        operator_delete(pvVar14);
      }
    }
  }
  return param_2;
}

