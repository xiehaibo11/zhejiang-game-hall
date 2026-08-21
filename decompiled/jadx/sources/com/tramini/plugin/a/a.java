package com.tramini.plugin.a;

import android.text.TextUtils;
import com.tramini.plugin.a.a.a;

/* JADX INFO: loaded from: classes4.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile a f7813a;

    private a() {
    }

    public static a a() {
        if (f7813a == null) {
            synchronized (a.class) {
                if (f7813a == null) {
                    f7813a = new a();
                }
            }
        }
        return f7813a;
    }

    public static String b() {
        com.tramini.plugin.b.a aVarB = com.tramini.plugin.b.b.b(com.tramini.plugin.a.a.c.a().b());
        return aVarB != null ? a(aVarB.n(), a.C0510a.b) : a.C0510a.b;
    }

    public static String c() {
        com.tramini.plugin.b.a aVarB = com.tramini.plugin.b.b.b(com.tramini.plugin.a.a.c.a().b());
        return aVarB != null ? a(aVarB.o(), a.C0510a.c) : a.C0510a.c;
    }

    private static String a(String str, String str2) {
        return TextUtils.isEmpty(str) ? str2 : str;
    }
}
