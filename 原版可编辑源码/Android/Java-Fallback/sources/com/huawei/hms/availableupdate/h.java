package com.huawei.hms.availableupdate;

public class h {
    public int a;
    public java.lang.String b;
    public java.lang.String c;
    public int d;
    public java.lang.String e;

    public h(java.lang.String r3, int r4, java.lang.String r5, int r6, java.lang.String r7) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.a = r0
            java.lang.String r1 = ""
            r2.b = r1
            r2.c = r1
            r2.d = r0
            r2.e = r1
            r2.b = r3
            r2.a = r4
            r2.c = r5
            r2.d = r6
            r2.e = r7
            return
    }

    public boolean a() {
            r1 = this;
            int r0 = r1.a
            if (r0 <= 0) goto L14
            int r0 = r1.d
            if (r0 <= 0) goto L14
            java.lang.String r0 = r1.c
            if (r0 == 0) goto L14
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L14
            r0 = 1
            goto L15
        L14:
            r0 = 0
        L15:
            return r0
    }
}
