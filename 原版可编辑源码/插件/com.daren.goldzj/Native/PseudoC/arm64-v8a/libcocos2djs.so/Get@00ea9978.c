
/* v8::PrimitiveArray::Get(v8::Isolate*, int) */

void __thiscall v8::PrimitiveArray::Get(PrimitiveArray *this,Isolate *param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  if ((-1 < param_2) && (uVar4 = *(ulong *)this, param_2 < *(int *)(uVar4 + 3) >> 1)) {
LAB_00ea99fc:
    uVar4 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + (long)(param_2 << 2) + 7);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(param_1 + 0x95a0);
      if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
        puVar3 = (ulong *)internal::HandleScope::Extend((Isolate *)param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar4;
    }
    else {
      internal::CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
    }
    *(undefined4 *)(param_1 + 0x2c60) = uVar1;
    return;
  }
  lVar2 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  if (lVar2 != 0) {
    if (*(code **)(lVar2 + 0xb738) != (code *)0x0) {
      (**(code **)(lVar2 + 0xb738))
                ("v8::PrimitiveArray::Get",
                 "index must be greater than or equal to 0 and less than the array length");
      *(undefined1 *)(lVar2 + 0xb6b9) = 1;
      uVar4 = *(ulong *)this;
      goto LAB_00ea99fc;
    }
  }
  base::OS::PrintError
            ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::PrimitiveArray::Get",
             "index must be greater than or equal to 0 and less than the array length");
                    /* WARNING: Subroutine does not return */
  base::OS::Abort();
}

