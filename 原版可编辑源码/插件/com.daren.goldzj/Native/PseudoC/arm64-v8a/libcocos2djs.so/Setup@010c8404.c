
/* v8::internal::JSArrayBuffer::Setup(v8::internal::SharedFlag,
   std::__ndk1::shared_ptr<v8::internal::BackingStore>) */

void __thiscall v8::internal::JSArrayBuffer::Setup(JSArrayBuffer *this,char param_2,long *param_3)

{
  __shared_weak_count *p_Var1;
  undefined4 *puVar2;
  uint uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  __shared_weak_count *this_00;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long local_40;
  __shared_weak_count *local_38;
  
  *(undefined4 *)(*(long *)this + 0x1b) = 0;
  uVar3 = *(uint *)(*(long *)this + 0x1b);
  *(uint *)(*(long *)this + 0x1b) =
       uVar3 & 0xffffffe0 | uVar3 & 0xf | (uint)(param_2 == '\x01') << 4;
  uVar3 = *(uint *)(*(long *)this + 0x1b);
  *(uint *)(*(long *)this + 0x1b) = uVar3 & 0xfffffffc | uVar3 & 1 | (uint)(param_2 != '\x01') << 1;
  uVar10 = *(ulong *)this;
  uVar8 = uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 - 1);
  sVar4 = *(short *)(uVar8 + 7);
  if (sVar4 == 0x421) {
    lVar9 = 0xc;
  }
  else {
    iVar7 = JSObject::GetHeaderSize(sVar4,*(char *)(uVar8 + 9) < '\0');
    lVar9 = (long)iVar7;
  }
  puVar2 = (undefined4 *)((uVar10 - 1) + lVar9);
  *puVar2 = 0;
  puVar2[1] = 0;
  uVar10 = *(ulong *)this;
  uVar8 = uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 - 1);
  sVar4 = *(short *)(uVar8 + 7);
  if (sVar4 == 0x421) {
    lVar9 = 0x14;
  }
  else {
    iVar7 = JSObject::GetHeaderSize(sVar4,*(char *)(uVar8 + 9) < '\0');
    lVar9 = (long)(iVar7 + 8);
  }
  puVar2 = (undefined4 *)((uVar10 - 1) + lVar9);
  *puVar2 = 0;
  puVar2[1] = 0;
  lVar9 = *param_3;
  if (lVar9 == 0) {
    *(undefined8 *)(*(long *)this + 0x13) = 0;
    *(undefined8 *)(*(long *)this + 0xb) = 0;
  }
  else {
    local_38 = (__shared_weak_count *)param_3[1];
    *param_3 = 0;
    param_3[1] = 0;
    local_40 = lVar9;
    Attach(this,&local_40);
    this_00 = local_38;
    if (local_38 != (__shared_weak_count *)0x0) {
      p_Var1 = local_38 + 8;
      do {
        lVar9 = *(long *)p_Var1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar6) {
          *(long *)p_Var1 = lVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*(long *)local_38 + 0x10))(local_38);
        std::__ndk1::__shared_weak_count::__release_weak(this_00);
      }
    }
  }
  if (param_2 == '\x01') {
    Isolate::CountUsage((ulong)*(uint *)(this + 4) << 0x20,0x52);
  }
  return;
}

