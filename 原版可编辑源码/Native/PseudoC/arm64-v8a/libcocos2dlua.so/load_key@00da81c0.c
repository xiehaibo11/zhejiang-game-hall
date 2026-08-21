
/* hdq::load_key(char const*, unsigned long) */

void hdq::load_key(char *param_1,ulong param_2)

{
  ResKey *this;
  
  this = (ResKey *)ResKey::getInstance();
  ResKey::load(this,(uchar *)param_1,param_2);
  return;
}

