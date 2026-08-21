
void _INIT_65(void)

{
  spine::RTTI::RTTI((RTTI *)spine::RegionAttachment::rtti,"RegionAttachment",
                    (RTTI *)spine::Attachment::rtti);
  __cxa_atexit(spine::SpineObject::~SpineObject,spine::RegionAttachment::rtti,&PTR_LOOP_01d1b000);
  return;
}

