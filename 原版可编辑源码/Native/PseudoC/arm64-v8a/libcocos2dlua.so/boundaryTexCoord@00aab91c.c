
/* fairygui::FUISprite::boundaryTexCoord(char) */

float __thiscall fairygui::FUISprite::boundaryTexCoord(FUISprite *this,char param_1)

{
  if ('\x03' < param_1) {
    return 0.0;
  }
  if (this[0x53c] != (FUISprite)0x0) {
    return (float)(0x4bU >> (ulong)((uint)(byte)param_1 * 2 & 0x1f | 1) & 1);
  }
  return (float)(0x4bU >> (ulong)((uint)(byte)param_1 * -2 + 7 & 0x1f) & 1);
}

