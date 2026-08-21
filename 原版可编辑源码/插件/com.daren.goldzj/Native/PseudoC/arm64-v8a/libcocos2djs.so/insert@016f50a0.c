
/* v8::internal::ZoneHandleSet<v8::internal::Map>::insert(v8::internal::Handle<v8::internal::Map>,
   v8::internal::Zone*) */

void __thiscall
v8::internal::ZoneHandleSet<v8::internal::Map>::insert
          (ZoneHandleSet<v8::internal::Map> *this,ulong *param_2,Zone *param_3)

{
  vector<unsigned_long*,v8::internal::ZoneAllocator<unsigned_long*>> *this_00;
  ulong uVar1;
  Zone *pZVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  long lVar14;
  
  puVar13 = *(ulong **)this;
  if (((ulong)puVar13 & 3) == 0) {
    if (puVar13 == param_2) {
      return;
    }
    this_00 = *(vector<unsigned_long*,v8::internal::ZoneAllocator<unsigned_long*>> **)
               (param_3 + 0x10);
    if ((ulong)(*(long *)(param_3 + 0x18) - (long)this_00) < 0x20) {
      this_00 = (vector<unsigned_long*,v8::internal::ZoneAllocator<unsigned_long*>> *)
                Zone::NewExpand(param_3,0x20);
    }
    else {
      *(vector<unsigned_long*,v8::internal::ZoneAllocator<unsigned_long*>> **)(param_3 + 0x10) =
           this_00 + 0x20;
    }
    *(long *)this_00 = 0;
    *(long *)(this_00 + 8) = 0;
    *(long *)(this_00 + 0x10) = 0;
    *(Zone **)(this_00 + 0x18) = param_3;
    puVar13 = *(ulong **)this;
    if (puVar13 < param_2) {
      puVar10 = *(undefined8 **)(this_00 + 8);
      if (puVar10 < *(undefined8 **)(this_00 + 0x10)) {
        *puVar10 = puVar13;
        puVar4 = *(undefined8 **)(this_00 + 0x10);
        puVar10 = (undefined8 *)(*(long *)(this_00 + 8) + 8);
        *(undefined8 **)(this_00 + 8) = puVar10;
        if (puVar10 != puVar4) goto LAB_016f5590;
      }
      else {
        lVar14 = (long)puVar10 - *(long *)this_00 >> 3;
        uVar1 = lVar14 + 1;
        if (uVar1 >> 0x1c != 0) goto LAB_016f5734;
        lVar5 = (long)*(undefined8 **)(this_00 + 0x10) - *(long *)this_00;
        uVar11 = lVar5 >> 2;
        if (uVar1 <= uVar11) {
          uVar1 = uVar11;
        }
        if (0x7fffffe < (ulong)(lVar5 >> 3)) {
          uVar1 = 0xfffffff;
        }
        if (uVar1 == 0) {
          lVar5 = 0;
        }
        else {
          pZVar2 = *(Zone **)(this_00 + 0x18);
          uVar11 = uVar1 * 8;
          lVar5 = *(long *)(pZVar2 + 0x10);
          if (uVar11 < (ulong)(*(long *)(pZVar2 + 0x18) - lVar5) ||
              uVar11 - (*(long *)(pZVar2 + 0x18) - lVar5) == 0) {
            *(ulong *)(pZVar2 + 0x10) = lVar5 + uVar11;
          }
          else {
            lVar5 = Zone::NewExpand(pZVar2,uVar11);
          }
        }
        puVar6 = (undefined8 *)(lVar5 + lVar14 * 8);
        puVar10 = puVar6 + 1;
        *puVar6 = puVar13;
        puVar7 = *(undefined8 **)this_00;
        puVar9 = *(undefined8 **)(this_00 + 8);
        puVar4 = (undefined8 *)(lVar5 + uVar1 * 8);
        while (puVar9 != puVar7) {
          puVar9 = puVar9 + -1;
          puVar6 = puVar6 + -1;
          *puVar6 = *puVar9;
        }
        *(undefined8 **)this_00 = puVar6;
        *(undefined8 **)(this_00 + 8) = puVar10;
        *(undefined8 **)(this_00 + 0x10) = puVar4;
        if (puVar10 != puVar4) goto LAB_016f5590;
      }
      lVar14 = (long)puVar10 - *(long *)this_00 >> 3;
      uVar1 = lVar14 + 1;
      if (uVar1 >> 0x1c != 0) goto LAB_016f5734;
      lVar5 = (long)puVar4 - *(long *)this_00;
      uVar11 = lVar5 >> 2;
      if (uVar1 <= uVar11) {
        uVar1 = uVar11;
      }
      if (0x7fffffe < (ulong)(lVar5 >> 3)) {
        uVar1 = 0xfffffff;
      }
      if (uVar1 == 0) {
        lVar5 = 0;
      }
      else {
        pZVar2 = *(Zone **)(this_00 + 0x18);
        uVar11 = uVar1 * 8;
        lVar5 = *(long *)(pZVar2 + 0x10);
        if (uVar11 < (ulong)(*(long *)(pZVar2 + 0x18) - lVar5) ||
            uVar11 - (*(long *)(pZVar2 + 0x18) - lVar5) == 0) {
          *(ulong *)(pZVar2 + 0x10) = lVar5 + uVar11;
        }
        else {
          lVar5 = Zone::NewExpand(pZVar2,uVar11);
        }
      }
      puVar10 = (undefined8 *)(lVar5 + lVar14 * 8);
      *puVar10 = param_2;
      puVar6 = *(undefined8 **)this_00;
      puVar4 = *(undefined8 **)(this_00 + 8);
      lVar5 = lVar5 + uVar1 * 8;
      puVar7 = puVar10;
      while (puVar4 != puVar6) {
        puVar4 = puVar4 + -1;
        puVar7 = puVar7 + -1;
        *puVar7 = *puVar4;
      }
    }
    else {
      puVar10 = *(undefined8 **)(this_00 + 8);
      if (puVar10 == *(undefined8 **)(this_00 + 0x10)) {
        lVar14 = (long)puVar10 - *(long *)this_00 >> 3;
        uVar1 = lVar14 + 1;
        if (uVar1 >> 0x1c != 0) goto LAB_016f5734;
        lVar5 = (long)*(undefined8 **)(this_00 + 0x10) - *(long *)this_00;
        uVar11 = lVar5 >> 2;
        if (uVar1 <= uVar11) {
          uVar1 = uVar11;
        }
        if (0x7fffffe < (ulong)(lVar5 >> 3)) {
          uVar1 = 0xfffffff;
        }
        if (uVar1 == 0) {
          lVar5 = 0;
        }
        else {
          pZVar2 = *(Zone **)(this_00 + 0x18);
          uVar11 = uVar1 * 8;
          lVar5 = *(long *)(pZVar2 + 0x10);
          if (uVar11 < (ulong)(*(long *)(pZVar2 + 0x18) - lVar5) ||
              uVar11 - (*(long *)(pZVar2 + 0x18) - lVar5) == 0) {
            *(ulong *)(pZVar2 + 0x10) = lVar5 + uVar11;
          }
          else {
            lVar5 = Zone::NewExpand(pZVar2,uVar11);
          }
        }
        puVar6 = (undefined8 *)(lVar5 + lVar14 * 8);
        puVar10 = puVar6 + 1;
        *puVar6 = param_2;
        puVar7 = *(undefined8 **)this_00;
        puVar9 = *(undefined8 **)(this_00 + 8);
        puVar4 = (undefined8 *)(lVar5 + uVar1 * 8);
        while (puVar9 != puVar7) {
          puVar9 = puVar9 + -1;
          puVar6 = puVar6 + -1;
          *puVar6 = *puVar9;
        }
        *(undefined8 **)this_00 = puVar6;
        *(undefined8 **)(this_00 + 8) = puVar10;
        *(undefined8 **)(this_00 + 0x10) = puVar4;
      }
      else {
        *puVar10 = param_2;
        puVar4 = *(undefined8 **)(this_00 + 0x10);
        puVar10 = (undefined8 *)(*(long *)(this_00 + 8) + 8);
        *(undefined8 **)(this_00 + 8) = puVar10;
      }
      param_2 = *(ulong **)this;
      if (puVar10 < puVar4) {
LAB_016f5590:
        *puVar10 = param_2;
        *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 8;
        goto LAB_016f5674;
      }
      lVar14 = (long)puVar10 - *(long *)this_00 >> 3;
      uVar1 = lVar14 + 1;
      if (uVar1 >> 0x1c != 0) goto LAB_016f5734;
      lVar5 = (long)puVar4 - *(long *)this_00;
      uVar11 = lVar5 >> 2;
      if (uVar1 <= uVar11) {
        uVar1 = uVar11;
      }
      if (0x7fffffe < (ulong)(lVar5 >> 3)) {
        uVar1 = 0xfffffff;
      }
      if (uVar1 == 0) {
        lVar5 = 0;
      }
      else {
        pZVar2 = *(Zone **)(this_00 + 0x18);
        uVar11 = uVar1 * 8;
        lVar5 = *(long *)(pZVar2 + 0x10);
        if (uVar11 < (ulong)(*(long *)(pZVar2 + 0x18) - lVar5) ||
            uVar11 - (*(long *)(pZVar2 + 0x18) - lVar5) == 0) {
          *(ulong *)(pZVar2 + 0x10) = lVar5 + uVar11;
        }
        else {
          lVar5 = Zone::NewExpand(pZVar2,uVar11);
        }
      }
      puVar10 = (undefined8 *)(lVar5 + lVar14 * 8);
      *puVar10 = param_2;
      puVar6 = *(undefined8 **)this_00;
      puVar4 = *(undefined8 **)(this_00 + 8);
      lVar5 = lVar5 + uVar1 * 8;
      puVar7 = puVar10;
      while (puVar4 != puVar6) {
        puVar4 = puVar4 + -1;
        puVar7 = puVar7 + -1;
        *puVar7 = *puVar4;
      }
    }
    *(undefined8 **)this_00 = puVar7;
    *(undefined8 **)(this_00 + 8) = puVar10 + 1;
    *(long *)(this_00 + 0x10) = lVar5;
    goto LAB_016f5674;
  }
  if (((ulong)puVar13 & 3) == 1) {
    *(ulong **)this = param_2;
    return;
  }
  lVar14 = *(long *)((long)puVar13 + 6) - *(long *)((long)puVar13 + -2);
  if (lVar14 != 0) {
    uVar1 = 0;
    do {
      puVar3 = *(ulong **)(*(long *)((long)puVar13 + -2) + uVar1 * 8);
      if (puVar3 == param_2) {
        return;
      }
    } while ((puVar3 <= param_2) && (uVar1 = uVar1 + 1, uVar1 < (ulong)(lVar14 >> 3)));
  }
  this_00 = *(vector<unsigned_long*,v8::internal::ZoneAllocator<unsigned_long*>> **)(param_3 + 0x10)
  ;
  if ((ulong)(*(long *)(param_3 + 0x18) - (long)this_00) < 0x20) {
    this_00 = (vector<unsigned_long*,v8::internal::ZoneAllocator<unsigned_long*>> *)
              Zone::NewExpand(param_3,0x20);
  }
  else {
    *(vector<unsigned_long*,v8::internal::ZoneAllocator<unsigned_long*>> **)(param_3 + 0x10) =
         this_00 + 0x20;
  }
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(Zone **)(this_00 + 0x18) = param_3;
  lVar5 = *(long *)((long)puVar13 + -2);
  lVar14 = (*(long *)((long)puVar13 + 6) - lVar5 >> 3) + 1;
  if (lVar14 == 0) {
    puVar10 = (undefined8 *)0x0;
    if (*(long *)((long)puVar13 + 6) == lVar5) goto LAB_016f528c;
LAB_016f51f0:
    lVar14 = 0;
    uVar1 = 0;
    do {
      puVar3 = *(ulong **)(lVar5 + lVar14);
      if (param_2 < puVar3) break;
      if (*(undefined8 **)(this_00 + 8) == *(undefined8 **)(this_00 + 0x10)) {
        std::__ndk1::vector<unsigned_long*,v8::internal::ZoneAllocator<unsigned_long*>>::
        __push_back_slow_path<unsigned_long*const&>(this_00,(ulong **)(lVar5 + lVar14));
      }
      else {
        **(undefined8 **)(this_00 + 8) = puVar3;
        *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 8;
      }
      lVar5 = *(long *)((long)puVar13 + -2);
      uVar1 = uVar1 + 1;
      lVar14 = lVar14 + 8;
    } while (uVar1 < (ulong)(*(long *)((long)puVar13 + 6) - lVar5 >> 3));
    puVar10 = *(undefined8 **)(this_00 + 0x10);
  }
  else {
    pZVar2 = *(Zone **)(this_00 + 0x18);
    lVar8 = *(long *)(this_00 + 8);
    uVar1 = lVar14 * 8;
    lVar5 = *(long *)(pZVar2 + 0x10);
    if (uVar1 < (ulong)(*(long *)(pZVar2 + 0x18) - lVar5) ||
        uVar1 - (*(long *)(pZVar2 + 0x18) - lVar5) == 0) {
      *(ulong *)(pZVar2 + 0x10) = lVar5 + uVar1;
    }
    else {
      lVar5 = Zone::NewExpand(pZVar2,uVar1);
    }
    puVar4 = *(undefined8 **)this_00;
    puVar7 = *(undefined8 **)(this_00 + 8);
    puVar6 = (undefined8 *)(lVar5 + (lVar8 >> 3) * 8);
    puVar10 = (undefined8 *)(lVar5 + lVar14 * 8);
    puVar9 = puVar6;
    while (puVar7 != puVar4) {
      puVar7 = puVar7 + -1;
      puVar9 = puVar9 + -1;
      *puVar9 = *puVar7;
    }
    *(undefined8 **)this_00 = puVar9;
    *(undefined8 **)(this_00 + 8) = puVar6;
    *(undefined8 **)(this_00 + 0x10) = puVar10;
    lVar5 = *(long *)((long)puVar13 + -2);
    if (*(long *)((long)puVar13 + 6) != lVar5) goto LAB_016f51f0;
LAB_016f528c:
    uVar1 = 0;
  }
  puVar6 = *(undefined8 **)(this_00 + 8);
  if (puVar6 == puVar10) {
    lVar14 = (long)puVar6 - *(long *)this_00 >> 3;
    uVar11 = lVar14 + 1;
    if (uVar11 >> 0x1c != 0) {
LAB_016f5734:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = (long)puVar10 - *(long *)this_00;
    uVar12 = lVar5 >> 2;
    if (uVar11 <= uVar12) {
      uVar11 = uVar12;
    }
    if (0x7fffffe < (ulong)(lVar5 >> 3)) {
      uVar11 = 0xfffffff;
    }
    if (uVar11 == 0) {
      lVar5 = 0;
    }
    else {
      pZVar2 = *(Zone **)(this_00 + 0x18);
      uVar12 = uVar11 * 8;
      lVar5 = *(long *)(pZVar2 + 0x10);
      if (uVar12 < (ulong)(*(long *)(pZVar2 + 0x18) - lVar5) ||
          uVar12 - (*(long *)(pZVar2 + 0x18) - lVar5) == 0) {
        *(ulong *)(pZVar2 + 0x10) = lVar5 + uVar12;
      }
      else {
        lVar5 = Zone::NewExpand(pZVar2,uVar12);
      }
    }
    puVar6 = (undefined8 *)(lVar5 + lVar14 * 8);
    puVar10 = puVar6 + 1;
    *puVar6 = param_2;
    puVar4 = *(undefined8 **)this_00;
    puVar7 = *(undefined8 **)(this_00 + 8);
    while (puVar7 != puVar4) {
      puVar7 = puVar7 + -1;
      puVar6 = puVar6 + -1;
      *puVar6 = *puVar7;
    }
    *(undefined8 **)this_00 = puVar6;
    *(undefined8 **)(this_00 + 8) = puVar10;
    *(ulong *)(this_00 + 0x10) = lVar5 + uVar11 * 8;
  }
  else {
    *puVar6 = param_2;
    puVar10 = (undefined8 *)(*(long *)(this_00 + 8) + 8);
    *(undefined8 **)(this_00 + 8) = puVar10;
  }
  lVar14 = *(long *)((long)puVar13 + -2);
  if (uVar1 < (ulong)(*(long *)((long)puVar13 + 6) - lVar14 >> 3)) {
    lVar5 = uVar1 << 3;
    while( true ) {
      uVar1 = uVar1 + 1;
      if (puVar10 == *(undefined8 **)(this_00 + 0x10)) {
        std::__ndk1::vector<unsigned_long*,v8::internal::ZoneAllocator<unsigned_long*>>::
        __push_back_slow_path<unsigned_long*const&>(this_00,(ulong **)(lVar14 + lVar5));
      }
      else {
        *puVar10 = *(undefined8 *)(lVar14 + lVar5);
        *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 8;
      }
      lVar14 = *(long *)((long)puVar13 + -2);
      if ((ulong)(*(long *)((long)puVar13 + 6) - lVar14 >> 3) <= uVar1) break;
      puVar10 = *(undefined8 **)(this_00 + 8);
      lVar5 = lVar5 + 8;
    }
  }
LAB_016f5674:
  *(ulong *)this = (ulong)this_00 | 2;
  return;
}

