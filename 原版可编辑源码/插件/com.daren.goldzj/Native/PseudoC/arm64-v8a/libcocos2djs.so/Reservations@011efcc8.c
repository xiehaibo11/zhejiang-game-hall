
/* v8::internal::SnapshotData::Reservations() const */

void v8::internal::SnapshotData::Reservations(void)

{
  uint uVar1;
  long in_x0;
  void *__s;
  undefined8 *in_x8;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  size_t __n;
  long lVar6;
  ulong uVar7;
  
  lVar6 = *(long *)(in_x0 + 8);
  uVar1 = *(uint *)(lVar6 + 4);
  uVar7 = (ulong)uVar1;
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  if (uVar1 == 0) {
    __n = 0;
    __s = (void *)0x0;
    goto LAB_011efd6c;
  }
  __n = uVar7 * 4;
  __s = operator_new(__n);
  *in_x8 = __s;
  in_x8[1] = __s;
  in_x8[2] = (void *)((long)__s + __n);
  memset(__s,0,__n);
  if (uVar1 == 1) {
    lVar3 = 1;
    pvVar2 = __s;
LAB_011efd5c:
    do {
      lVar3 = lVar3 + -1;
      pvVar2 = (void *)((long)pvVar2 + 4);
    } while (lVar3 != 0);
  }
  else {
    uVar4 = uVar7 & 0xfffffffe;
    pvVar2 = (void *)((long)__s + uVar4 * 4);
    lVar3 = uVar7 - uVar4;
    uVar5 = uVar4;
    do {
      uVar5 = uVar5 - 2;
    } while (uVar5 != 0);
    if (uVar4 != uVar7) goto LAB_011efd5c;
  }
  in_x8[1] = pvVar2;
LAB_011efd6c:
  memcpy(__s,(void *)(lVar6 + 0xc),__n);
  return;
}

