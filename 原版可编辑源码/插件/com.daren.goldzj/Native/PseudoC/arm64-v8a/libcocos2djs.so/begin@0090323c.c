
/* se::NativePtrToObjectMap::begin() */

undefined8 se::NativePtrToObjectMap::begin(void)

{
  return *(undefined8 *)(__nativePtrToObjectMap + 0x10);
}

