package com.xiaomi.push;

public class ji {
    private static int a = Integer.MAX_VALUE;

    public static void a(jf jfVar, byte b) {
        a(jfVar, b, a);
    }

    public static void a(jf jfVar, byte b, int i) throws iz {
        if (i <= 0) {
            throw new iz("Maximum skip depth exceeded");
        }
        int i2 = 0;
        switch (b) {
            case 2:
                jfVar.a();
                return;
            case 3:
                jfVar.a();
                return;
            case 4:
                jfVar.a();
                return;
            case 5:
            case 7:
            case 9:
            default:
                return;
            case 6:
                jfVar.a();
                return;
            case 8:
                jfVar.a();
                return;
            case 10:
                jfVar.a();
                return;
            case 11:
                jfVar.a();
                return;
            case 12:
                jfVar.a();
                while (true) {
                    jc jcVarA = jfVar.a();
                    if (jcVarA.a == 0) {
                        jfVar.f();
                        return;
                    } else {
                        a(jfVar, jcVarA.a, i - 1);
                        jfVar.g();
                    }
                }
                break;
            case 13:
                je jeVarA = jfVar.a();
                while (i2 < jeVarA.a) {
                    int i3 = i - 1;
                    a(jfVar, jeVarA.a, i3);
                    a(jfVar, jeVarA.b, i3);
                    i2++;
                }
                jfVar.h();
                return;
            case 14:
                jj jjVarA = jfVar.a();
                while (i2 < jjVarA.a) {
                    a(jfVar, jjVarA.a, i - 1);
                    i2++;
                }
                jfVar.j();
                return;
            case 15:
                jd jdVarA = jfVar.a();
                while (i2 < jdVarA.a) {
                    a(jfVar, jdVarA.a, i - 1);
                    i2++;
                }
                jfVar.i();
                return;
        }
    }
}
