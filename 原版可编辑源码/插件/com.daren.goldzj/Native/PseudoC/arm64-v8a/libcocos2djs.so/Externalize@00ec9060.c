
/* v8::ArrayBuffer::Externalize(std::__ndk1::shared_ptr<v8::BackingStore> const&) */

void v8::ArrayBuffer::Externalize(shared_ptr *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)param_1;
  if ((*(uint *)(lVar1 + 0x1b) & 1) == 0) {
LAB_00ec90c0:
    *(uint *)(lVar1 + 0x1b) = *(uint *)(lVar1 + 0x1b) | 1;
    return;
  }
  lVar1 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  if (lVar1 != 0) {
    if (*(code **)(lVar1 + 0xb738) != (code *)0x0) {
      (**(code **)(lVar1 + 0xb738))("v8_ArrayBuffer_Externalize","ArrayBuffer already externalized")
      ;
      *(undefined1 *)(lVar1 + 0xb6b9) = 1;
      lVar1 = *(long *)param_1;
      goto LAB_00ec90c0;
    }
  }
  base::OS::PrintError
            ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8_ArrayBuffer_Externalize",
             "ArrayBuffer already externalized");
                    /* WARNING: Subroutine does not return */
  base::OS::Abort();
}

