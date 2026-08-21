
/* v8::ObjectTemplate::SetInternalFieldCount(int) */

void __thiscall v8::ObjectTemplate::SetInternalFieldCount(ObjectTemplate *this,int param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if ((long)param_1 + 0x40000000U >> 0x1f == 0) {
    lVar2 = (ulong)*(uint *)(this + 4) << 0x20;
    uVar1 = *(undefined4 *)(lVar2 + 0x2c60);
    *(undefined4 *)(lVar2 + 0x2c60) = 5;
    if (0 < param_1) {
      FUN_00ea6c84(lVar2,this);
    }
    *(uint *)(*(long *)this + 0x1b) = *(uint *)(*(long *)this + 0x1b) & 0x80000002 | param_1 << 2;
    *(undefined4 *)(lVar2 + 0x2c60) = uVar1;
    return;
  }
  lVar2 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  if (lVar2 != 0) {
    if (*(code **)(lVar2 + 0xb738) != (code *)0x0) {
      (**(code **)(lVar2 + 0xb738))
                ("v8::ObjectTemplate::SetInternalFieldCount()","Invalid embedder field count");
      *(undefined1 *)(lVar2 + 0xb6b9) = 1;
      return;
    }
  }
  base::OS::PrintError
            ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::ObjectTemplate::SetInternalFieldCount()",
             "Invalid embedder field count");
                    /* WARNING: Subroutine does not return */
  base::OS::Abort();
}

