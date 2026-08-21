
/* v8::EscapableHandleScope::Escape(unsigned long*) */

undefined8 __thiscall v8::EscapableHandleScope::Escape(EscapableHandleScope *this,ulong *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)this;
  if (((**(ulong **)(this + 0x18) & 1) != 0) &&
     ((int)**(ulong **)(this + 0x18) == *(int *)(lVar3 + 0xa8))) {
LAB_00ea41b8:
    if (param_1 == (ulong *)0x0) {
      uVar2 = 0;
      **(undefined8 **)(this + 0x18) = *(undefined8 *)(lVar3 + 0xa0);
    }
    else {
      **(ulong **)(this + 0x18) = *param_1;
      uVar2 = *(undefined8 *)(this + 0x18);
    }
    return uVar2;
  }
  lVar1 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  if (lVar1 != 0) {
    if (*(code **)(lVar1 + 0xb738) != (code *)0x0) {
      (**(code **)(lVar1 + 0xb738))("EscapableHandleScope::Escape","Escape value set twice");
      *(undefined1 *)(lVar1 + 0xb6b9) = 1;
      goto LAB_00ea41b8;
    }
  }
  base::OS::PrintError
            ("\n#\n# Fatal error in %s\n# %s\n#\n\n","EscapableHandleScope::Escape",
             "Escape value set twice");
                    /* WARNING: Subroutine does not return */
  base::OS::Abort();
}

