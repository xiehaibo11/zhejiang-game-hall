
/* spine::VertexAttachment::getNextID() */

int spine::VertexAttachment::getNextID(void)

{
  uint uVar1;
  
  uVar1 = DAT_01d3dc10 & 0xffff;
  DAT_01d3dc10 = DAT_01d3dc10 + 1;
  return uVar1 << 0xb;
}

