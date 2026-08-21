
/* v8::internal::WeakObjects::WeakObjects() */

void __thiscall v8::internal::WeakObjects::WeakObjects(WeakObjects *this)

{
  void *pvVar1;
  long lVar2;
  WeakObjects *pWVar3;
  
  base::Mutex::Mutex((Mutex *)(this + 0x280));
  lVar2 = 0;
  *(undefined8 *)(this + 0x2a8) = 0;
  *(undefined4 *)(this + 0x2b0) = 8;
  pWVar3 = this + 8;
  do {
    pvVar1 = operator_new(0x210);
    memset((void *)((long)pvVar1 + 8),0,0x208);
    *(void **)(pWVar3 + -8) = pvVar1;
    pvVar1 = operator_new(0x210);
    memset((void *)((long)pvVar1 + 8),0,0x208);
    *(void **)pWVar3 = pvVar1;
    lVar2 = lVar2 + 1;
    pWVar3 = pWVar3 + 0x50;
  } while (lVar2 < *(int *)(this + 0x2b0));
  base::Mutex::Mutex((Mutex *)(this + 0x538));
  lVar2 = 0;
  *(undefined8 *)(this + 0x560) = 0;
  *(undefined4 *)(this + 0x568) = 8;
  pWVar3 = this + 0x2c0;
  do {
    pvVar1 = operator_new(0x210);
    memset((void *)((long)pvVar1 + 8),0,0x208);
    *(void **)(pWVar3 + -8) = pvVar1;
    pvVar1 = operator_new(0x210);
    memset((void *)((long)pvVar1 + 8),0,0x208);
    *(void **)pWVar3 = pvVar1;
    lVar2 = lVar2 + 1;
    pWVar3 = pWVar3 + 0x50;
  } while (lVar2 < *(int *)(this + 0x568));
  base::Mutex::Mutex((Mutex *)(this + 0x7f0));
  lVar2 = 0;
  *(undefined8 *)(this + 0x818) = 0;
  *(undefined4 *)(this + 0x820) = 8;
  pWVar3 = this + 0x578;
  do {
    pvVar1 = operator_new(0x410);
    memset((void *)((long)pvVar1 + 8),0,0x408);
    *(void **)(pWVar3 + -8) = pvVar1;
    pvVar1 = operator_new(0x410);
    memset((void *)((long)pvVar1 + 8),0,0x408);
    *(void **)pWVar3 = pvVar1;
    lVar2 = lVar2 + 1;
    pWVar3 = pWVar3 + 0x50;
  } while (lVar2 < *(int *)(this + 0x820));
  base::Mutex::Mutex((Mutex *)(this + 0xaa8));
  lVar2 = 0;
  *(undefined8 *)(this + 0xad0) = 0;
  *(undefined4 *)(this + 0xad8) = 8;
  pWVar3 = this + 0x830;
  do {
    pvVar1 = operator_new(0x410);
    memset((void *)((long)pvVar1 + 8),0,0x408);
    *(void **)(pWVar3 + -8) = pvVar1;
    pvVar1 = operator_new(0x410);
    memset((void *)((long)pvVar1 + 8),0,0x408);
    *(void **)pWVar3 = pvVar1;
    lVar2 = lVar2 + 1;
    pWVar3 = pWVar3 + 0x50;
  } while (lVar2 < *(int *)(this + 0xad8));
  base::Mutex::Mutex((Mutex *)(this + 0xd60));
  lVar2 = 0;
  *(undefined8 *)(this + 0xd88) = 0;
  *(undefined4 *)(this + 0xd90) = 8;
  pWVar3 = this + 0xae8;
  do {
    pvVar1 = operator_new(0x410);
    memset((void *)((long)pvVar1 + 8),0,0x408);
    *(void **)(pWVar3 + -8) = pvVar1;
    pvVar1 = operator_new(0x410);
    memset((void *)((long)pvVar1 + 8),0,0x408);
    *(void **)pWVar3 = pvVar1;
    lVar2 = lVar2 + 1;
    pWVar3 = pWVar3 + 0x50;
  } while (lVar2 < *(int *)(this + 0xd90));
  base::Mutex::Mutex((Mutex *)(this + 0x1018));
  lVar2 = 0;
  *(undefined8 *)(this + 0x1040) = 0;
  *(undefined4 *)(this + 0x1048) = 8;
  pWVar3 = this + 0xda0;
  do {
    pvVar1 = operator_new(0x410);
    memset((void *)((long)pvVar1 + 8),0,0x408);
    *(void **)(pWVar3 + -8) = pvVar1;
    pvVar1 = operator_new(0x410);
    memset((void *)((long)pvVar1 + 8),0,0x408);
    *(void **)pWVar3 = pvVar1;
    lVar2 = lVar2 + 1;
    pWVar3 = pWVar3 + 0x50;
  } while (lVar2 < *(int *)(this + 0x1048));
  base::Mutex::Mutex((Mutex *)(this + 0x12d0));
  lVar2 = 0;
  *(undefined8 *)(this + 0x12f8) = 0;
  *(undefined4 *)(this + 0x1300) = 8;
  pWVar3 = this + 0x1058;
  do {
    pvVar1 = operator_new(0x410);
    memset((void *)((long)pvVar1 + 8),0,0x408);
    *(void **)(pWVar3 + -8) = pvVar1;
    pvVar1 = operator_new(0x410);
    memset((void *)((long)pvVar1 + 8),0,0x408);
    *(void **)pWVar3 = pvVar1;
    lVar2 = lVar2 + 1;
    pWVar3 = pWVar3 + 0x50;
  } while (lVar2 < *(int *)(this + 0x1300));
  base::Mutex::Mutex((Mutex *)(this + 0x1588));
  lVar2 = 0;
  *(undefined8 *)(this + 0x15b0) = 0;
  *(undefined4 *)(this + 0x15b8) = 8;
  pWVar3 = this + 0x1310;
  do {
    pvVar1 = operator_new(0x210);
    memset((void *)((long)pvVar1 + 8),0,0x208);
    *(void **)(pWVar3 + -8) = pvVar1;
    pvVar1 = operator_new(0x210);
    memset((void *)((long)pvVar1 + 8),0,0x208);
    *(void **)pWVar3 = pvVar1;
    lVar2 = lVar2 + 1;
    pWVar3 = pWVar3 + 0x50;
  } while (lVar2 < *(int *)(this + 0x15b8));
  base::Mutex::Mutex((Mutex *)(this + 0x1840));
  lVar2 = 0;
  *(undefined8 *)(this + 0x1868) = 0;
  *(undefined4 *)(this + 0x1870) = 8;
  pWVar3 = this + 0x15c8;
  do {
    pvVar1 = operator_new(0x210);
    memset((void *)((long)pvVar1 + 8),0,0x208);
    *(void **)(pWVar3 + -8) = pvVar1;
    pvVar1 = operator_new(0x210);
    memset((void *)((long)pvVar1 + 8),0,0x208);
    *(void **)pWVar3 = pvVar1;
    lVar2 = lVar2 + 1;
    pWVar3 = pWVar3 + 0x50;
  } while (lVar2 < *(int *)(this + 0x1870));
  base::Mutex::Mutex((Mutex *)(this + 0x1af8));
  lVar2 = 0;
  *(undefined8 *)(this + 0x1b20) = 0;
  *(undefined4 *)(this + 0x1b28) = 8;
  pWVar3 = this + 0x1880;
  do {
    pvVar1 = operator_new(0x210);
    memset((void *)((long)pvVar1 + 8),0,0x208);
    *(void **)(pWVar3 + -8) = pvVar1;
    pvVar1 = operator_new(0x210);
    memset((void *)((long)pvVar1 + 8),0,0x208);
    *(void **)pWVar3 = pvVar1;
    lVar2 = lVar2 + 1;
    pWVar3 = pWVar3 + 0x50;
  } while (lVar2 < *(int *)(this + 0x1b28));
  base::Mutex::Mutex((Mutex *)(this + 0x1db0));
  lVar2 = 0;
  *(undefined8 *)(this + 0x1dd8) = 0;
  *(undefined4 *)(this + 0x1de0) = 8;
  pWVar3 = this + 0x1b38;
  do {
    pvVar1 = operator_new(0x210);
    memset((void *)((long)pvVar1 + 8),0,0x208);
    *(void **)(pWVar3 + -8) = pvVar1;
    pvVar1 = operator_new(0x210);
    memset((void *)((long)pvVar1 + 8),0,0x208);
    *(void **)pWVar3 = pvVar1;
    lVar2 = lVar2 + 1;
    pWVar3 = pWVar3 + 0x50;
  } while (lVar2 < *(int *)(this + 0x1de0));
  return;
}

