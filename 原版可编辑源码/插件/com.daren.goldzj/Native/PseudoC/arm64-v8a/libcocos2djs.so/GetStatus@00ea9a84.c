
/* v8::Module::GetStatus() const */

undefined4 __thiscall v8::Module::GetStatus(Module *this)

{
  uint uVar1;
  
  uVar1 = *(int *)(*(long *)this + 0xb) >> 1;
  if (uVar1 < 7) {
    return *(undefined4 *)(&DAT_0199c058 + (long)(int)uVar1 * 4);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

