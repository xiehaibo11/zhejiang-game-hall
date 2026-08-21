package com.tkay.expressad.videocommon.b;

import android.text.TextUtils;

/* JADX INFO: loaded from: classes3.dex */
public class l {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile l f7474a;
    private final com.tkay.core.common.res.a.c b = com.tkay.core.common.res.a.c.a();

    private l() {
    }

    public static l a() {
        if (f7474a == null) {
            synchronized (l.class) {
                if (f7474a == null) {
                    f7474a = new l();
                }
            }
        }
        return f7474a;
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
