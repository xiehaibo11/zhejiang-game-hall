
/* fairygui::EventTag::EventTag(fairygui::EventTag&&) */

void __thiscall fairygui::EventTag::EventTag(EventTag *this,EventTag *param_1)

{
                    /* try { // try from 00aaf45c to 00baf4b3 has its CatchHandler @ 00aaf3c0 */
  if (this != param_1) {
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
  }
  return;
}

