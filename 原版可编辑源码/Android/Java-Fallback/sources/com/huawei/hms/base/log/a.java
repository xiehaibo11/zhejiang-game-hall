package com.huawei.hms.base.log;

public class a {
    public static final com.huawei.hms.base.log.b c = null;
    public int a;
    public java.lang.String b;

    static {
            com.huawei.hms.base.log.d r0 = new com.huawei.hms.base.log.d
            r0.<init>()
            com.huawei.hms.base.log.a.c = r0
            return
    }

    public a() {
            r1 = this;
            r1.<init>()
            r0 = 4
            r1.a = r0
            return
    }

    public final com.huawei.hms.base.log.c a(int r4, java.lang.String r5, java.lang.String r6, java.lang.Throwable r7) {
            r3 = this;
            com.huawei.hms.base.log.c r0 = new com.huawei.hms.base.log.c
            java.lang.String r1 = r3.b
            r2 = 8
            r0.<init>(r2, r1, r4, r5)
            r0.a(r6)
            r0.a(r7)
            return r0
    }

    public void a(int r4, java.lang.String r5, java.lang.String r6) {
            r3 = this;
            boolean r0 = r3.a(r4)
            if (r0 == 0) goto L27
            r0 = 0
            com.huawei.hms.base.log.c r0 = r3.a(r4, r5, r6, r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r0.c()
            r1.append(r2)
            java.lang.String r0 = r0.a()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.huawei.hms.base.log.b r1 = com.huawei.hms.base.log.a.c
            r1.a(r0, r4, r5, r6)
        L27:
            return
    }

    public void a(android.content.Context r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.a = r2
            r0.b = r3
            com.huawei.hms.base.log.b r2 = com.huawei.hms.base.log.a.c
            java.lang.String r3 = "HMSCore"
            r2.a(r1, r3)
            return
    }

    public void a(java.lang.String r5, java.lang.String r6) {
            r4 = this;
            r0 = 4
            r1 = 0
            com.huawei.hms.base.log.c r1 = r4.a(r0, r5, r6, r1)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = r1.c()
            r2.append(r3)
            r3 = 10
            r2.append(r3)
            java.lang.String r1 = r1.a()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.huawei.hms.base.log.b r2 = com.huawei.hms.base.log.a.c
            r2.a(r1, r0, r5, r6)
            return
    }

    public boolean a(int r2) {
            r1 = this;
            int r0 = r1.a
            if (r2 < r0) goto L6
            r2 = 1
            goto L7
        L6:
            r2 = 0
        L7:
            return r2
    }

    public void b(int r4, java.lang.String r5, java.lang.String r6, java.lang.Throwable r7) {
            r3 = this;
            boolean r0 = r3.a(r4)
            if (r0 == 0) goto L3e
            com.huawei.hms.base.log.c r0 = r3.a(r4, r5, r6, r7)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r0.c()
            r1.append(r2)
            java.lang.String r0 = r0.a()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.huawei.hms.base.log.b r1 = com.huawei.hms.base.log.a.c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r6)
            r6 = 10
            r2.append(r6)
            java.lang.String r6 = android.util.Log.getStackTraceString(r7)
            r2.append(r6)
            java.lang.String r6 = r2.toString()
            r1.a(r0, r4, r5, r6)
        L3e:
            return
    }
}
