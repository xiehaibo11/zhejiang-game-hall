
/* WARNING: Type propagation algorithm not settling */

long FUN_014ae180(Factory *param_1,ulong *param_2,undefined8 param_3,ulong *param_4,
                 undefined4 param_5)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  __shared_weak_count *p_Var4;
  BackingStore *pBVar5;
  bool bVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  double dVar12;
  BackingStore *local_70;
  __shared_weak_count *local_68;
  long local_60;
  long local_58;
  __shared_weak_count *local_50;
  BackingStore *local_48;
  
  uVar9 = *param_2;
  uVar11 = uVar9 & 0xffffffff00000000;
  bVar6 = *(int *)((uVar11 | *(uint *)((uVar11 | *(uint *)((uVar11 | *(uint *)(uVar9 + 0xf)) - 1)) +
                                      0x13)) + 0x23) != (int)uVar9;
  plVar7 = (long *)v8::internal::JSObject::New(param_2,param_3,0);
  if (plVar7 == (long *)0x0) {
    return *(long *)(param_1 + 0x180);
  }
  local_48 = (BackingStore *)*plVar7;
  local_58 = 0;
  local_50 = (__shared_weak_count *)0x0;
  v8::internal::JSArrayBuffer::Setup((JSArrayBuffer *)&local_48,bVar6,&local_58);
  p_Var4 = local_50;
  if (local_50 == (__shared_weak_count *)0x0) {
LAB_014ae224:
    uVar9 = *param_4;
  }
  else {
    p_Var1 = local_50 + 8;
    do {
      lVar10 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 != 0) goto LAB_014ae224;
    (**(code **)(*(long *)local_50 + 0x10))(local_50);
    std::__ndk1::__shared_weak_count::__release_weak(p_Var4);
    uVar9 = *param_4;
  }
  if ((uVar9 & 1) == 0) {
    if ((int)uVar9 < 0) {
LAB_014ae288:
      puVar8 = (undefined8 *)v8::internal::Factory::NewRangeError(param_1,0xbb,0,0,0);
      lVar10 = v8::internal::Isolate::Throw((Isolate *)param_1,*puVar8,0);
      return lVar10;
    }
    uVar9 = uVar9 >> 1 & 0x7fffffff;
  }
  else {
    dVar12 = *(double *)(uVar9 + 3);
    if (((dVar12 < 0.0) || (1.8446744073709552e+19 <= dVar12)) ||
       (uVar9 = (ulong)dVar12, uVar9 >> 0x35 != 0)) goto LAB_014ae288;
  }
  v8::internal::BackingStore::Allocate((BackingStore *)&local_48,param_1,uVar9,bVar6,param_5);
  pBVar5 = local_48;
  if (local_48 == (BackingStore *)0x0) {
    puVar8 = (undefined8 *)v8::internal::Factory::NewRangeError(param_1,0xbc,0,0,0);
    lVar10 = v8::internal::Isolate::Throw((Isolate *)param_1,*puVar8,0);
  }
  else {
    local_60 = *plVar7;
    local_70 = local_48;
    local_68 = operator_new(0x20);
    *(undefined8 *)(local_68 + 0x10) = 0;
    *(BackingStore **)(local_68 + 0x18) = pBVar5;
    *(undefined ***)local_68 = &PTR____shared_weak_count_01c98518;
    *(undefined8 *)(local_68 + 8) = 0;
    local_48 = (BackingStore *)0x0;
    v8::internal::JSArrayBuffer::Attach((JSArrayBuffer *)&local_60,&local_70);
    p_Var4 = local_68;
    if (local_68 != (__shared_weak_count *)0x0) {
      p_Var1 = local_68 + 8;
      do {
        lVar10 = *(long *)p_Var1;
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar6) {
          *(long *)p_Var1 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*(long *)local_68 + 0x10))(local_68);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var4);
      }
    }
    lVar10 = *plVar7;
  }
  pBVar5 = local_48;
  local_48 = (BackingStore *)0x0;
  if (pBVar5 != (BackingStore *)0x0) {
    v8::internal::BackingStore::~BackingStore(pBVar5);
    operator_delete(pBVar5);
  }
  return lVar10;
}

