
/* v8::internal::Isolate::ClearEmbeddedBlob() */

void __thiscall v8::internal::Isolate::ClearEmbeddedBlob(Isolate *this)

{
  long lVar1;
  
  if (DAT_01d3ece0 == '\x01') {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","enable_embedded_blob_refcounting_");
  }
  lVar1 = *(long *)(this + 0xc680);
  if (lVar1 == DAT_01d3ed30) {
    if (lVar1 == DAT_01d3ece8) {
      *(undefined8 *)(this + 0xc680) = 0;
      *(undefined4 *)(this + 0xc688) = 0;
      DAT_01d3ed30 = 0;
      DAT_01d3ed3c = 0;
      DAT_01d3ece8 = 0;
      DAT_01d3ecf0 = 0;
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","embedded_blob_ == StickyEmbeddedBlob()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","embedded_blob_ == CurrentEmbeddedBlob()");
}

