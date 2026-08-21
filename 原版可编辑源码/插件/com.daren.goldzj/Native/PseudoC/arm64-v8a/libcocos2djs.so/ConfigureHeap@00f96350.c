
/* v8::internal::Heap::ConfigureHeap(v8::ResourceConstraints const&) */

void __thiscall v8::internal::Heap::ConfigureHeap(Heap *this,ResourceConstraints *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar6 = 0x1000000;
  *(undefined8 *)(this + 0x40) = 0x1000000;
  if (*(ulong *)(param_1 + 0x10) != 0) {
    uVar6 = *(ulong *)(param_1 + 0x10) / 3;
    *(ulong *)(this + 0x40) = uVar6;
  }
  if (FLAG_max_semi_space_size == 0) {
    if (FLAG_max_heap_size != 0) {
      uVar9 = FLAG_max_heap_size * 0x100000;
      if (FLAG_max_old_space_size == 0) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar13 = 0;
          uVar11 = uVar9;
          do {
            uVar14 = uVar13 + (uVar11 - uVar13 >> 1);
            lVar2 = 7;
            if (uVar14 < 0x8000001) {
              lVar2 = 8;
            }
            uVar7 = uVar14 >> lVar2;
            if (0x7fffff < uVar7) {
              uVar7 = 0x800000;
            }
            iVar5 = (int)uVar7;
            if (uVar7 < 0x80001) {
              iVar5 = 0x80000;
            }
            uVar8 = ((ulong)(iVar5 + 0x3ffff) & 0x1fc0000) * 3;
            uVar7 = uVar8 + uVar14;
            uVar1 = uVar14;
            if (uVar7 <= uVar9) {
              uVar1 = uVar11;
              uVar13 = uVar14;
            }
            if (uVar7 <= uVar9) {
              uVar6 = uVar8;
            }
            uVar11 = uVar1;
          } while (uVar13 + 1 < uVar1);
        }
      }
      else {
        uVar6 = 0;
        if ((ulong)(FLAG_max_old_space_size * 0x100000) <= uVar9) {
          uVar6 = uVar9 + FLAG_max_old_space_size * -0x100000;
        }
      }
      uVar6 = uVar6 / 3;
      goto LAB_00f96460;
    }
  }
  else {
    uVar6 = FLAG_max_semi_space_size << 0x14;
LAB_00f96460:
    *(ulong *)(this + 0x40) = uVar6;
  }
  if (FLAG_stress_compaction != '\0') {
    uVar6 = 0x100000;
    *(undefined8 *)(this + 0x40) = 0x100000;
  }
  uVar6 = base::bits::RoundUpToPowerOfTwo64(uVar6);
  if (uVar6 < 0x80001) {
    uVar6 = 0x80000;
  }
  if (0x7fffff < uVar6) {
    uVar6 = 0x800000;
  }
  uVar6 = uVar6 & 0xfffffffffffc0000;
  *(ulong *)(this + 0x40) = uVar6;
  *(undefined8 *)(this + 0x58) = 0x57800000;
  uVar9 = 0x57800000;
  if (*(ulong *)(param_1 + 8) != 0) {
    uVar9 = *(ulong *)(param_1 + 8);
  }
  *(ulong *)(this + 0x58) = uVar9;
  lVar12 = FLAG_max_heap_size;
  lVar2 = FLAG_max_old_space_size;
  if (FLAG_max_old_space_size == 0) {
    if (FLAG_max_heap_size != 0) {
      uVar9 = 0;
      if (uVar6 * 3 <= (ulong)(FLAG_max_heap_size * 0x100000)) {
        uVar9 = FLAG_max_heap_size * 0x100000 + uVar6 * -3;
      }
      *(ulong *)(this + 0x58) = uVar9;
    }
  }
  else {
    uVar9 = FLAG_max_old_space_size << 0x14;
    *(ulong *)(this + 0x58) = uVar9;
    lVar12 = FLAG_max_heap_size;
  }
  if (uVar9 < 0xc0001) {
    uVar9 = 0xc0000;
  }
  uVar9 = uVar9 & 0xfffffffffffc0000;
  *(ulong *)(this + 0x58) = uVar9;
  *(ulong *)(this + 0x68) = uVar9 << 1;
  if (((lVar12 != 0) && (lVar2 != 0)) && (FLAG_max_semi_space_size != 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "FLAG_max_heap_size > 0 implies FLAG_max_semi_space_size == 0 || FLAG_max_old_space_size == 0"
            );
  }
  uVar13 = 0x100000;
  if (uVar6 != 0x800000) {
    uVar13 = 0x80000;
  }
  *(ulong *)(this + 0x48) = uVar13;
  if (*(ulong *)(param_1 + 0x28) != 0) {
    uVar13 = *(ulong *)(param_1 + 0x28) / 3;
    *(ulong *)(this + 0x48) = uVar13;
  }
  lVar2 = FLAG_initial_heap_size;
  uVar11 = FLAG_initial_heap_size * 0x100000;
  if (FLAG_initial_heap_size != 0) {
    uVar13 = 0;
    if (uVar11 != 0) {
      uVar14 = 0;
      uVar7 = uVar11;
      do {
        uVar1 = uVar14 + (uVar7 - uVar14 >> 1);
        lVar12 = 7;
        if (uVar1 < 0x8000001) {
          lVar12 = 8;
        }
        uVar8 = uVar1 >> lVar12;
        if (0x7fffff < uVar8) {
          uVar8 = 0x800000;
        }
        iVar5 = (int)uVar8;
        if (uVar8 < 0x80001) {
          iVar5 = 0x80000;
        }
        uVar4 = ((ulong)(iVar5 + 0x3ffff) & 0x1fc0000) * 3;
        uVar8 = uVar4 + uVar1;
        uVar3 = uVar1;
        if (uVar8 <= uVar11) {
          uVar3 = uVar7;
          uVar14 = uVar1;
        }
        if (uVar8 <= uVar11) {
          uVar13 = uVar4;
        }
        uVar7 = uVar3;
      } while (uVar14 + 1 < uVar3);
      uVar13 = uVar13 / 3;
    }
    *(ulong *)(this + 0x48) = uVar13;
  }
  if (FLAG_min_semi_space_size != 0) {
    uVar13 = FLAG_min_semi_space_size << 0x14;
    *(ulong *)(this + 0x48) = uVar13;
  }
  if (uVar6 <= uVar13) {
    uVar13 = uVar6;
  }
  uVar13 = uVar13 & 0xfffffffffffc0000;
  *(ulong *)(this + 0x48) = uVar13;
  *(undefined8 *)(this + 0x80) = 0x10000000;
  uVar14 = *(ulong *)(param_1 + 0x20);
  uVar6 = 0x10000000;
  if (uVar14 != 0) {
    this[0x88] = (Heap)0x1;
    *(ulong *)(this + 0x80) = uVar14;
    uVar6 = uVar14;
  }
  if (lVar2 != 0) {
    uVar6 = 0;
    if (uVar13 * 3 <= uVar11) {
      uVar6 = uVar11 + uVar13 * -3;
    }
    *(ulong *)(this + 0x80) = uVar6;
    this[0x88] = (Heap)0x1;
  }
  if (FLAG_initial_old_space_size == 0) {
    if (uVar9 >> 1 <= uVar6) {
      uVar6 = uVar9 >> 1;
    }
    uVar6 = uVar6 & 0xfffffffffffc0000;
    *(ulong *)(this + 0x80) = uVar6;
    if (this[0x88] == (Heap)0x0) goto LAB_00f966a8;
  }
  else {
    uVar6 = FLAG_initial_old_space_size << 0x14;
    if (uVar9 >> 1 <= (ulong)(FLAG_initial_old_space_size << 0x14)) {
      uVar6 = uVar9 >> 1;
    }
    uVar6 = uVar6 & 0xfffffffffffc0000;
    this[0x88] = (Heap)0x1;
    *(ulong *)(this + 0x80) = uVar6;
  }
  *(ulong *)(this + 0x50) = uVar6;
  *(ulong *)(this + 0x60) = uVar6 << 1;
LAB_00f966a8:
  if (FLAG_semi_space_growth_factor < 2) {
    FLAG_semi_space_growth_factor = 2;
  }
  *(ulong *)(this + 0x5d0) = uVar6;
  *(ulong *)(this + 0x70) = uVar9;
  *(ulong *)(this + 0x5d8) = uVar6 << 1;
  uVar10 = *(undefined8 *)param_1;
  this[0xad0] = (Heap)0x1;
  *(undefined8 *)(this + 0x38) = uVar10;
  return;
}

