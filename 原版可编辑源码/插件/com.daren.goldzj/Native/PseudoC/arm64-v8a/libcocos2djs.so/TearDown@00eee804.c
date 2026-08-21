
/* v8::internal::CallDescriptors::TearDown() */

void v8::internal::CallDescriptors::TearDown(void)

{
  long lVar1;
  long lVar2;
  
  lVar2 = -0x2c60;
  do {
    if (*(void **)(&FLAG_use_ic + lVar2) != (void *)0x0) {
      operator_delete__(*(void **)(&FLAG_use_ic + lVar2));
    }
    *(undefined8 *)(&FLAG_use_ic + lVar2) = 0;
    if (*(void **)(&FLAG_track_field_types + lVar2) != (void *)0x0) {
      operator_delete__(*(void **)(&FLAG_track_field_types + lVar2));
    }
    lVar1 = lVar2 + 0x28;
    *(undefined8 *)(&FLAG_track_field_types + lVar2) = 0;
    lVar2 = lVar1;
  } while (lVar1 != 0);
  return;
}

