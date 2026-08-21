package com.xiaomi.push;

public class co {
    private static java.lang.String a;
    private static java.text.SimpleDateFormat a;

    static {
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.lang.String r1 = "yyyy/MM/dd"
            r0.<init>(r1)
            com.xiaomi.push.co.a = r0
            long r1 = java.lang.System.currentTimeMillis()
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.String r0 = r0.format(r1)
            com.xiaomi.push.co.a = r0
            return
    }

    public static com.xiaomi.push.hn a(android.content.Context r3, java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L8
            r3 = 0
            return r3
        L8:
            com.xiaomi.push.hn r0 = new com.xiaomi.push.hn
            r0.<init>()
            java.lang.String r1 = "category_push_stat"
            r0.d(r1)
            java.lang.String r1 = "push_sdk_stat_channel"
            r0.a(r1)
            r1 = 1
            r0.a(r1)
            r0.b(r4)
            r4 = 1
            r0.a(r4)
            long r1 = java.lang.System.currentTimeMillis()
            r0.b(r1)
            com.xiaomi.push.bx r3 = com.xiaomi.push.bx.a(r3)
            java.lang.String r3 = r3.a()
            r0.g(r3)
            java.lang.String r3 = "com.xiaomi.xmsf"
            r0.e(r3)
            java.lang.String r3 = ""
            r0.f(r3)
            java.lang.String r3 = "push_stat"
            r0.c(r3)
            return r0
    }
}
