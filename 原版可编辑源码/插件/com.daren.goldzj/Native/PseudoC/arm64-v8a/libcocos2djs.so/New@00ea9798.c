
/* v8::PrimitiveArray::New(v8::Isolate*, int) */

void v8::PrimitiveArray::New(Isolate *param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  if (-1 < param_2) {
LAB_00ea9800:
    internal::Factory::NewFixedArray((Factory *)param_1,param_2,0);
    *(undefined4 *)(param_1 + 0x2c60) = uVar1;
    return;
  }
  lVar2 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  if (lVar2 != 0) {
    if (*(code **)(lVar2 + 0xb738) != (code *)0x0) {
      (**(code **)(lVar2 + 0xb738))
                ("v8::PrimitiveArray::New","length must be equal or greater than zero");
      *(undefined1 *)(lVar2 + 0xb6b9) = 1;
      goto LAB_00ea9800;
    }
  }
  base::OS::PrintError
            ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::PrimitiveArray::New",
             "length must be equal or greater than zero");
                    /* WARNING: Subroutine does not return */
  base::OS::Abort();
}

