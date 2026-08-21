
/* v8::internal::Isolate::SetEmbeddedBlob(unsigned char const*, unsigned int) */

void __thiscall v8::internal::Isolate::SetEmbeddedBlob(Isolate *this,uchar *param_1,uint param_2)

{
  if (param_1 != (uchar *)0x0) {
    *(uchar **)(this + 0xc680) = param_1;
    *(uint *)(this + 0xc688) = param_2;
    DAT_01d3ed30 = param_1;
    DAT_01d3ed3c = param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(blob) != nullptr");
}

