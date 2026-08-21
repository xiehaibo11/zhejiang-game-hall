package com.huawei.secure.android.common.ssl.util;

public class c {
    private static android.content.Context a;

    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.content.Context a() {
            android.content.Context r0 = com.huawei.secure.android.common.ssl.util.c.a
            return r0
    }

    public static void a(android.content.Context r1) {
            if (r1 == 0) goto Lc
            android.content.Context r0 = com.huawei.secure.android.common.ssl.util.c.a
            if (r0 != 0) goto Lc
            android.content.Context r1 = r1.getApplicationContext()
            com.huawei.secure.android.common.ssl.util.c.a = r1
        Lc:
            return
    }
}
