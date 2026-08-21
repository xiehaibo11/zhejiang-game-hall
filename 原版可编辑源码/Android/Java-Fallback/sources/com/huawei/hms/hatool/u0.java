package com.huawei.hms.hatool;

public class u0 {
    public static com.huawei.hms.hatool.u0 c;
    public boolean a;
    public android.content.Context b;

    static {
            com.huawei.hms.hatool.u0 r0 = new com.huawei.hms.hatool.u0
            r0.<init>()
            com.huawei.hms.hatool.u0.c = r0
            return
    }

    public u0() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            android.content.Context r0 = com.huawei.hms.hatool.b.f()
            r1.b = r0
            return
    }

    public static com.huawei.hms.hatool.u0 b() {
            com.huawei.hms.hatool.u0 r0 = com.huawei.hms.hatool.u0.c
            return r0
    }

    public boolean a() {
            r4 = this;
            boolean r0 = r4.a
            if (r0 != 0) goto L25
            android.content.Context r0 = r4.b
            r1 = 0
            if (r0 != 0) goto La
            return r1
        La:
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 24
            if (r2 < r3) goto L22
            java.lang.String r2 = "user"
            java.lang.Object r0 = r0.getSystemService(r2)
            android.os.UserManager r0 = (android.os.UserManager) r0
            if (r0 == 0) goto L1f
            boolean r0 = r0.isUserUnlocked()
            goto L23
        L1f:
            r4.a = r1
            goto L25
        L22:
            r0 = 1
        L23:
            r4.a = r0
        L25:
            boolean r0 = r4.a
            return r0
    }
}
