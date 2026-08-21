package com.tkay.core.common.k;

import android.text.TextUtils;
import com.tkay.core.common.f.g;

public final class e {
    private static void a(com.tkay.core.common.f.d dVar, int i, int i2, String str, String str2, int i3, Boolean bool, String str3, boolean z, boolean z2, boolean z3, boolean z4) {
        String str4;
        g gVar = new g(dVar.Y(), null);
        gVar.a = "1004684";
        gVar.b = dVar.X();
        gVar.d = dVar.W();
        gVar.k = String.valueOf(i);
        gVar.m = String.valueOf(i3);
        gVar.n = String.valueOf(dVar.Y());
        gVar.o = z ? "1" : "2";
        gVar.p = String.valueOf(i2);
        if (!TextUtils.isEmpty(str)) {
            gVar.q = str;
        }
        if (!TextUtils.isEmpty(str2)) {
            gVar.r = str2;
        }
        if (bool == null) {
            str4 = "0";
        } else {
            str4 = bool.booleanValue() ? "1" : "2";
        }
        gVar.s = str4;
        gVar.t = str3;
        gVar.u = z2 ? "1" : "2";
        gVar.v = z3 ? "1" : "2";
        gVar.w = String.valueOf(i);
        gVar.x = z4 ? "1" : "2";
        c.b(gVar);
    }
}
