
/* v8::internal::MemoryChunk::Initialize(v8::internal::Heap*, unsigned long, unsigned long, unsigned
   long, unsigned long, v8::internal::Executability, v8::internal::Space*,
   v8::internal::VirtualMemory) */

BasicMemoryChunk *
v8::internal::MemoryChunk::Initialize
          (long param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,int param_6,
          long param_7,VirtualMemory *param_8)

{
  Mutex *pMVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  BasicMemoryChunk *this;
  undefined8 uVar6;
  
  this = (BasicMemoryChunk *)(param_2 & 0xfffffffffffc0000);
  BasicMemoryChunk::BasicMemoryChunk(this,param_3,param_4,param_5);
  *(long *)(this + 0x18) = param_1;
  *(long *)((ulong)this | 0x58) = param_7;
  VirtualMemory::Reset((VirtualMemory *)((ulong)this | 0x40));
  *(undefined8 *)((ulong)this | 0x30) = 0;
  *(undefined8 *)((ulong)this | 0x38) = 0;
  *(undefined8 *)((ulong)this | 0x70) = 0;
  *(undefined8 *)((ulong)this | 0x78) = 0;
  *(undefined8 *)((ulong)this | 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)((ulong)this | 0x60) = 0;
  *(ulong *)((ulong)this | 0x98) = param_4 - param_2;
  *(undefined8 *)((ulong)this | 0xa8) = 0;
  pMVar1 = operator_new(0x28);
  base::Mutex::Mutex(pMVar1);
  *(Mutex **)(this + 0xb0) = pMVar1;
  *(undefined8 *)(this + 0xb8) = 0;
  pMVar1 = operator_new(0x28);
  base::Mutex::Mutex(pMVar1);
  *(Mutex **)(this + 0xa0) = pMVar1;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(long *)(this + 0xc0) = *(long *)(this + 0x28) - *(long *)(this + 0x20);
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)((ulong)this | 200) = 0;
  *(undefined8 *)((ulong)this | 0xd0) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  if (*(int *)(param_7 + 0x48) == 0) {
    memset(*(void **)(this + 0x10),0xff,0x2000);
    *(ulong *)(this + 8) = *(ulong *)(this + 8) | 0x200000;
  }
  if (param_6 == 1) {
    *(ulong *)(this + 8) = *(ulong *)(this + 8) | 1;
    if (*(char *)(param_1 + 0x168) == '\0') {
      if (FLAG_v8_os_page_size == 0) {
        lVar2 = CommitPageSize();
      }
      else {
        lVar2 = (long)FLAG_v8_os_page_size << 10;
      }
      uVar5 = 2;
      if (FLAG_jitless == '\0') {
        uVar5 = 3;
      }
      uVar3 = VirtualMemory::SetPermissions
                        (param_8,param_4,~param_4 + param_5 + lVar2 & -lVar2,uVar5);
      if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "reservation.SetPermissions(area_start, area_size, DefaultWritableCodePermissions())"
                );
      }
    }
    else {
      *(undefined8 *)(this + 0xb8) = *(undefined8 *)(param_1 + 0x170);
    }
  }
  *(undefined8 *)(this + 0x40) = *(undefined8 *)param_8;
  uVar6 = *(undefined8 *)(param_8 + 8);
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_8 + 0x10);
  *(undefined8 *)(this + 0x48) = uVar6;
  VirtualMemory::Reset(param_8);
  if (*(int *)(param_7 + 0x48) == 3) {
    puVar4 = operator_new(0x30);
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[3] = puVar4 + 4;
    *(undefined8 **)(this + 0x110) = puVar4;
  }
  else {
    *(undefined8 *)(this + 0x110) = 0;
  }
  return this;
}

