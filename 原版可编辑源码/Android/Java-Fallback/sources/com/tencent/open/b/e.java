package com.tencent.open.b;

public class e {
    protected static com.tencent.open.b.e a;

    protected e() {
            r0 = this;
            r0.<init>()
            return
    }

    public static synchronized com.tencent.open.b.e a() {
            java.lang.Class<com.tencent.open.b.e> r0 = com.tencent.open.b.e.class
            monitor-enter(r0)
            com.tencent.open.b.e r1 = com.tencent.open.b.e.a     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.tencent.open.b.e r1 = new com.tencent.open.b.e     // Catch: java.lang.Throwable -> L12
            r1.<init>()     // Catch: java.lang.Throwable -> L12
            com.tencent.open.b.e.a = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.tencent.open.b.e r1 = com.tencent.open.b.e.a     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r1
        L12:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public void a(int r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.Long r6, int r7, int r8, java.lang.String r9) {
            r0 = this;
            return
    }

    public void a(java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.String r10, java.lang.String r11, java.lang.String r12) {
            r6 = this;
            r0 = r7
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r8
            r5 = r12
            android.os.Bundle r7 = com.tencent.open.utils.m.a(r0, r1, r2, r3, r4, r5)
            com.tencent.open.b.h r9 = com.tencent.open.b.h.a()
            r10 = 1
            r9.a(r7, r8, r10)
            return
    }

    public void a(java.lang.String r13, java.lang.String r14, java.lang.String r15, java.lang.String r16, java.lang.String r17, java.lang.String r18, java.lang.String r19, java.lang.String r20) {
            r12 = this;
            java.lang.String r6 = ""
            java.lang.String r9 = ""
            java.lang.String r10 = ""
            java.lang.String r11 = ""
            r0 = r13
            r1 = r16
            r2 = r17
            r3 = r15
            r4 = r14
            r5 = r18
            r7 = r19
            r8 = r20
            android.os.Bundle r0 = com.tencent.open.utils.m.a(r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11)
            com.tencent.open.b.h r1 = com.tencent.open.b.h.a()
            r2 = 0
            r3 = r14
            r1.a(r0, r14, r2)
            return
    }

    public void a(java.lang.String r13, java.lang.String r14, java.lang.String r15, java.lang.String r16, java.lang.String r17, java.lang.String r18, java.lang.String r19, java.lang.String r20, java.lang.String r21, java.lang.String r22) {
            r12 = this;
            java.lang.String r7 = ""
            java.lang.String r8 = ""
            r0 = r13
            r1 = r16
            r2 = r17
            r3 = r15
            r4 = r14
            r5 = r18
            r6 = r19
            r9 = r20
            r10 = r21
            r11 = r22
            android.os.Bundle r0 = com.tencent.open.utils.m.a(r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11)
            com.tencent.open.b.h r1 = com.tencent.open.b.h.a()
            r2 = 0
            r3 = r14
            r1.a(r0, r14, r2)
            return
    }
}
