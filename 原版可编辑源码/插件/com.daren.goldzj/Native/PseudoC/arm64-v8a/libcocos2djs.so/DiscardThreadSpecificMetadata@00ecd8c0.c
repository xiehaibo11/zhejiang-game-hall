
/* v8::Isolate::DiscardThreadSpecificMetadata() */

void v8::Isolate::DiscardThreadSpecificMetadata(void)

{
  Isolate *in_x0;
  
  internal::Isolate::DiscardPerThreadDataForThisThread(in_x0);
  return;
}

