
/* tinyxml2::XMLDocument::SetError(tinyxml2::XMLError, char const*, char const*) */

void __thiscall
tinyxml2::XMLDocument::SetError
          (XMLDocument *this,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined4 *)(this + 0x5c) = param_2;
  *(undefined8 *)(this + 0x68) = param_3;
  *(undefined8 *)(this + 0x70) = param_4;
  return;
}

