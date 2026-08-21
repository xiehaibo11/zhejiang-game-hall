package com.tkay.expressad.videocommon.b;

import android.text.TextUtils;

public class l {
    private static volatile l a;
    private final com.tkay.core.common.res.a.c b = com.tkay.core.common.res.a.c.a();

    private l() {
    }

    public static l a() {
        if (a == null) {
            synchronized (l.class) {
                if (a == null) {
                    a = new l();
                }
            }
        }
        return a;
    }

    public static String a(String str) {
        return TextUtils.isEmpty(str) ? "" : com.tkay.core.common.res.d.a(com.tkay.core.common.b.m.a().f()).b(4, com.tkay.core.common.l.f.a(str));
    }

    public static com.tkay.core.common.a.i b(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        return com.tkay.core.common.a.j.a().a(str);
    }
}
