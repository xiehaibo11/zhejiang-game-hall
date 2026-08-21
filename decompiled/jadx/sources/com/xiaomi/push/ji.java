package com.xiaomi.push;

/* JADX INFO: loaded from: classes4.dex */
public class ji {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static int f8253a = Integer.MAX_VALUE;

    public static void a(jf jfVar, byte b) {
        a(jfVar, b, f8253a);
    }

    public static void a(jf jfVar, byte b, int i) throws iz {
        if (i <= 0) {
            throw new iz("Maximum skip depth exceeded");
        }
        int i2 = 0;
        switch (b) {
            case 2:
                jfVar.mo568a();
                return;
            case 3:
                jfVar.a();
                return;
            case 4:
                jfVar.mo555a();
                return;
            case 5:
            case 7:
            case 9:
            default:
                return;
            case 6:
                jfVar.mo565a();
                return;
            case 8:
                jfVar.mo556a();
                return;
            case 10:
                jfVar.mo557a();
                return;
            case 11:
                jfVar.mo564a();
                return;
            case 12:
                jfVar.mo562a();
                while (true) {
                    jc jcVarMo558a = jfVar.mo558a();
                    if (jcVarMo558a.f8248a == 0) {
                        jfVar.f();
                        return;
                    } else {
                        a(jfVar, jcVarMo558a.f8248a, i - 1);
                        jfVar.g();
                    }
                }
                break;
            case 13:
                je jeVarMo560a = jfVar.mo560a();
                while (i2 < jeVarMo560a.f825a) {
                    int i3 = i - 1;
                    a(jfVar, jeVarMo560a.f8250a, i3);
                    a(jfVar, jeVarMo560a.b, i3);
                    i2++;
                }
                jfVar.h();
                return;
            case 14:
                jj jjVarMo561a = jfVar.mo561a();
                while (i2 < jjVarMo561a.f826a) {
                    a(jfVar, jjVarMo561a.f8254a, i - 1);
                    i2++;
                }
                jfVar.j();
                return;
            case 15:
                jd jdVarMo559a = jfVar.mo559a();
                while (i2 < jdVarMo559a.f824a) {
                    a(jfVar, jdVarMo559a.f8249a, i - 1);
                    i2++;
                }
                jfVar.i();
                return;
        }
    }
}
