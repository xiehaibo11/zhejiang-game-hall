package com.tkay.core.common;

import android.text.TextUtils;
import com.tkay.core.common.b.f;

public class i {
    private static volatile i a;

    private static String a(String str) {
        return str;
    }

    private i() {
    }

    public static i a() {
        if (a == null) {
            synchronized (i.class) {
                if (a == null) {
                    a = new i();
                }
            }
        }
        return a;
    }

    public static String b() {
        return com.tkay.core.common.e.a.a().a(m() ? f.c.r : f.c.e);
    }

    public static String c() {
        return com.tkay.core.common.e.a.a().a(m() ? f.c.s : f.c.f);
    }

    public static String d() {
        return m() ? f.c.v : f.c.i;
    }

    public static String e() {
        return m() ? f.c.B : f.c.p;
    }

    public static String a(com.tkay.core.c.d dVar, boolean z) {
        if (z) {
            String strW = dVar.w();
            dVar.ao();
            if (!TextUtils.isEmpty(strW)) {
                return strW;
            }
        }
        com.tkay.core.common.f.m mVarR = com.tkay.core.c.b.a(com.tkay.core.common.b.m.a().f()).b(com.tkay.core.common.b.m.a().o()).r();
        String str = m() ? f.c.w : f.c.j;
        return mVarR != null ? a(mVarR.c(), str) : str;
    }

    public static String a(com.tkay.core.c.d dVar) {
        String strS = dVar.s();
        return TextUtils.isEmpty(strS) ? "" : strS;
    }

    public static String b(com.tkay.core.c.d dVar) {
        return dVar.r();
    }

    public static String f() {
        com.tkay.core.common.f.m mVarR = com.tkay.core.c.b.a(com.tkay.core.common.b.m.a().f()).b(com.tkay.core.common.b.m.a().o()).r();
        String str = m() ? f.c.x : f.c.k;
        return mVarR != null ? a(mVarR.b(), str) : str;
    }

    public static String g() {
        com.tkay.core.common.f.m mVarR = com.tkay.core.c.b.a(com.tkay.core.common.b.m.a().f()).b(com.tkay.core.common.b.m.a().o()).r();
        String str = m() ? f.c.y : f.c.l;
        return mVarR != null ? a(mVarR.d(), str) : str;
    }

    public static String h() {
        com.tkay.core.common.f.m mVarR = com.tkay.core.c.b.a(com.tkay.core.common.b.m.a().f()).b(com.tkay.core.common.b.m.a().o()).r();
        String str = m() ? f.c.z : f.c.m;
        return mVarR != null ? a(mVarR.a(), str) : str;
    }

    public static String i() {
        com.tkay.core.c.a aVarB = com.tkay.core.c.b.a(com.tkay.core.common.b.m.a().f()).b(com.tkay.core.common.b.m.a().o());
        String str = m() ? f.c.A : f.c.o;
        return aVarB != null ? a(aVarB.o(), str) : str;
    }

    public static String j() {
        com.tkay.core.c.a aVarB = com.tkay.core.c.b.a(com.tkay.core.common.b.m.a().f()).b(com.tkay.core.common.b.m.a().o());
        String str = m() ? f.c.u : f.c.h;
        return aVarB != null ? a(aVarB.X(), str) : str;
    }

    public static String k() {
        com.tkay.core.c.a aVarB = com.tkay.core.c.b.a(com.tkay.core.common.b.m.a().f()).b(com.tkay.core.common.b.m.a().o());
        String str = m() ? f.c.t : f.c.g;
        return aVarB != null ? a(aVarB.ac(), str) : str;
    }

    public static String l() {
        com.tkay.core.c.a aVarB = com.tkay.core.c.b.a(com.tkay.core.common.b.m.a().f()).b(com.tkay.core.common.b.m.a().o());
        return aVarB != null ? a(aVarB.T(), "https://img.anythinktech.com/gdpr/PrivacyPolicySetting.html") : "https://img.anythinktech.com/gdpr/PrivacyPolicySetting.html";
    }

    private static String a(String str, String str2) {
        return TextUtils.isEmpty(str) ? str2 : str;
    }

    private static boolean m() {
        return com.tkay.core.common.b.m.a().C() && com.tkay.core.common.b.m.a().B();
    }
}
