
/* v8::PrimitiveArray::Set(v8::Isolate*, int, v8::Local<v8::Primitive>) */

void __thiscall
v8::PrimitiveArray::Set(PrimitiveArray *this,long param_1,int param_2,ulong *param_4)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  if ((-1 < param_2) && (uVar4 = *(ulong *)this, param_2 < *(int *)(uVar4 + 3) >> 1)) {
LAB_00ea98dc:
    uVar5 = *param_4;
    lVar2 = uVar4 + (long)(param_2 << 2);
    *(int *)(lVar2 + 7) = (int)uVar5;
    if ((uVar5 & 1) != 0) {
      uVar3 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
      lVar2 = lVar2 + 7;
      if (((uint)uVar3 >> 0x12 & 1) != 0) {
        internal::Heap_MarkingBarrierSlow(uVar4,lVar2,uVar5);
        uVar3 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        internal::Heap_GenerationalBarrierSlow(uVar4,lVar2,uVar5);
      }
    }
    *(undefined4 *)(param_1 + 0x2c60) = uVar1;
    return;
  }
  lVar2 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  if (lVar2 != 0) {
    if (*(code **)(lVar2 + 0xb738) != (code *)0x0) {
      (**(code **)(lVar2 + 0xb738))
                ("v8::PrimitiveArray::Set",
                 "index must be greater than or equal to 0 and less than the array length");
      *(undefined1 *)(lVar2 + 0xb6b9) = 1;
      uVar4 = *(ulong *)this;
      goto LAB_00ea98dc;
    }
  }
  base::OS::PrintError
            ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::PrimitiveArray::Set",
             "index must be greater than or equal to 0 and less than the array length");
                    /* WARNING: Subroutine does not return */
  base::OS::Abort();
}

