
void _INIT_64(void)

{
  spine::RTTI::RTTI((RTTI *)spine::PointAttachment::rtti,"PointAttachment",
                    (RTTI *)spine::Attachment::rtti);
  __cxa_atexit(spine::SpineObject::~SpineObject,spine::PointAttachment::rtti,&PTR_LOOP_01d1b000);
  return;
}

