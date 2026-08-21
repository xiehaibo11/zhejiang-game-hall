package com.tramini.plugin.a;

import android.text.TextUtils;
import com.tramini.plugin.a.a.a;

public class a {
    private static volatile a a;

    private a() {
    }

    public static a a() {
        if (a == null) {
            synchronized (a.class) {
                if (a == null) {
                    a = new a();
                }
            }
        }
        return a;
    }

    public static String b() {
        com.tramini.plugin.b.a aVarB = com.tramini.plugin.b.b.b(com.tramini.plugin.a.a.c.a().b());
        return aVarB != null ? a(aVarB.n(), a.a.b) : a.a.b;
    }

    public static String c() {
        com.tramini.plugin.b.a aVarB = com.tramini.plugin.b.b.b(com.tramini.plugin.a.a.c.a().b());
        return aVarB != null ? a(aVarB.o(), a.a.c) : a.a.c;
    }

    private static String a(String str, String str2) {
        return TextUtils.isEmpty(str) ? str2 : str;
    }
}
