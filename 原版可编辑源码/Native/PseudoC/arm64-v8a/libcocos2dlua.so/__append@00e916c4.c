
/* std::__ndk1::vector<std::__ndk1::shared_ptr<std::__ndk1::atomic<bool> >,
   std::__ndk1::allocator<std::__ndk1::shared_ptr<std::__ndk1::atomic<bool> > > >::__append(unsigned
   long) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::shared_ptr<std::__ndk1::atomic<bool>>,std::__ndk1::allocator<std::__ndk1::shared_ptr<std::__ndk1::atomic<bool>>>>
::__append(vector<std::__ndk1::shared_ptr<std::__ndk1::atomic<bool>>,std::__ndk1::allocator<std::__ndk1::shared_ptr<std::__ndk1::atomic<bool>>>>
           *this,ulong param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  __shared_weak_count *this_00;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  
  puVar5 = *(undefined8 **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar5 >> 4)) {
    puVar6 = puVar5;
    if (param_1 != 0) {
      puVar6 = puVar5 + param_1 * 2;
      lVar12 = param_1 << 4;
      do {
        *puVar5 = 0;
        puVar5[1] = 0;
        lVar12 = lVar12 + -0x10;
        puVar5 = puVar5 + 2;
      } while (lVar12 != 0);
    }
    *(undefined8 **)(this + 8) = puVar6;
    return;
  }
  lVar12 = (long)puVar5 - *(long *)this >> 4;
  uVar14 = lVar12 + param_1;
  if (uVar14 >> 0x3c != 0) {
LAB_00e9172c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar7 = *(long *)(this + 0x10) - *(long *)this;
  if ((ulong)(lVar7 >> 4) < 0x7ffffffffffffff) {
    uVar8 = lVar7 >> 3;
    if (uVar14 <= uVar8) {
      uVar14 = uVar8;
    }
    if (uVar14 == 0) {
      pvVar4 = (void *)0x0;
      goto LAB_00e9176c;
    }
    if (uVar14 >> 0x3c != 0) goto LAB_00e9172c;
  }
  else {
    uVar14 = 0xfffffffffffffff;
  }
  pvVar4 = operator_new(uVar14 << 4);
LAB_00e9176c:
  puVar5 = (undefined8 *)((long)pvVar4 + lVar12 * 0x10);
  lVar12 = param_1 * 0x10;
  puVar6 = puVar5 + param_1 * 2;
  puVar11 = puVar5;
  do {
    *puVar11 = 0;
    puVar11[1] = 0;
    lVar12 = lVar12 + -0x10;
    puVar11 = puVar11 + 2;
  } while (lVar12 != 0);
  puVar11 = *(undefined8 **)this;
  puVar9 = puVar5;
  puVar10 = *(undefined8 **)(this + 8);
  puVar13 = puVar11;
  if (*(undefined8 **)(this + 8) != puVar11) {
    do {
      puVar13 = puVar10 + -2;
      uVar15 = *puVar13;
      puVar5 = puVar9 + -2;
      puVar9[-1] = puVar10[-1];
      *puVar5 = uVar15;
      *puVar13 = 0;
      puVar10[-1] = 0;
      puVar9 = puVar5;
      puVar10 = puVar13;
    } while (puVar11 != puVar13);
    puVar11 = *(undefined8 **)this;
    puVar13 = *(undefined8 **)(this + 8);
  }
  *(undefined8 **)this = puVar5;
  *(undefined8 **)(this + 8) = puVar6;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar14 * 0x10);
  while (puVar13 != puVar11) {
    this_00 = (__shared_weak_count *)puVar13[-1];
    puVar13 = puVar13 + -2;
    if (this_00 != (__shared_weak_count *)0x0) {
      p_Var1 = this_00 + 8;
      do {
        lVar12 = *(long *)p_Var1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar3) {
          *(long *)p_Var1 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*(long *)this_00 + 0x10))(this_00);
        __shared_weak_count::__release_weak(this_00);
      }
    }
  }
  if (puVar11 == (undefined8 *)0x0) {
    return;
  }
  operator_delete(puVar11);
  return;
}

