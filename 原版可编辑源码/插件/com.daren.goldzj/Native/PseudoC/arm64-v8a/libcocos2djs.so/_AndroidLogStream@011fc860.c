
/* v8::internal::AndroidLogStream::~AndroidLogStream() */

void __thiscall v8::internal::AndroidLogStream::~AndroidLogStream(AndroidLogStream *this)

{
  AndroidLogStream AVar1;
  AndroidLogStream *pAVar2;
  byte bVar3;
  
  *(undefined ***)this = &PTR__AndroidLogStream_01cbc008;
  AVar1 = this[0x40];
  bVar3 = (byte)AVar1 & 1;
  if (((byte)AVar1 & 1) == 0) {
    if ((byte)AVar1 >> 1 == 0) goto LAB_011fc8cc;
  }
  else if (*(long *)(this + 0x48) == 0) goto LAB_011fc8cc;
  if (((byte)AVar1 & 1) == 0) {
    pAVar2 = this + 0x41;
  }
  else {
    pAVar2 = *(AndroidLogStream **)(this + 0x50);
  }
  __android_log_write(4,&DAT_019c38f7,pAVar2);
  bVar3 = (byte)this[0x40] & 1;
LAB_011fc8cc:
  if (bVar3 != 0) {
    operator_delete(*(void **)(this + 0x50));
  }
  *(undefined ***)this = &PTR__basic_streambuf_01c671a8;
  std::__ndk1::locale::~locale((locale *)(this + 8));
  operator_delete(this);
  return;
}

