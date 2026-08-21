
/* cocostudio::timeline::BoneNode::updateDisplayedOpacity(unsigned char) */

void cocostudio::timeline::BoneNode::updateDisplayedOpacity(uchar param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = (ulong)param_1;
  if (*(char *)(uVar1 + 0x221) != '\0') {
    puVar3 = *(undefined8 **)(uVar1 + 0x398);
    for (puVar2 = *(undefined8 **)(uVar1 + 0x390); puVar2 != puVar3; puVar2 = puVar2 + 1) {
      (**(code **)(*(long *)*puVar2 + 0x498))((long *)*puVar2,*(undefined1 *)(uVar1 + 0x218));
    }
  }
  return;
}

