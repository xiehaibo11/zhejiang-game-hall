
/* spine::Triangulator::positiveArea(float, float, float, float, float, float) */

bool spine::Triangulator::positiveArea
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  return 0.0 <= (param_4 - param_2) * param_5 +
                (param_6 - param_4) * param_1 + (param_2 - param_6) * param_3;
}

