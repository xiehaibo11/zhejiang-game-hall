package com.alipay.apmobilesecuritysdk.d;

public final class e {
    public static java.util.Map<java.lang.String, java.lang.String> a;
    public static final java.lang.String[] b = null;

    static {
            java.lang.String r0 = "AD1"
            java.lang.String r1 = "AD2"
            java.lang.String r2 = "AD3"
            java.lang.String r3 = "AD8"
            java.lang.String r4 = "AD9"
            java.lang.String r5 = "AD10"
            java.lang.String r6 = "AD11"
            java.lang.String r7 = "AD12"
            java.lang.String r8 = "AD14"
            java.lang.String r9 = "AD15"
            java.lang.String r10 = "AD16"
            java.lang.String r11 = "AD18"
            java.lang.String r12 = "AD20"
            java.lang.String r13 = "AD21"
            java.lang.String r14 = "AD23"
            java.lang.String r15 = "AD24"
            java.lang.String r16 = "AD26"
            java.lang.String r17 = "AD27"
            java.lang.String r18 = "AD28"
            java.lang.String r19 = "AD29"
            java.lang.String r20 = "AD30"
            java.lang.String r21 = "AD31"
            java.lang.String r22 = "AD34"
            java.lang.String r23 = "AA1"
            java.lang.String r24 = "AA2"
            java.lang.String r25 = "AA3"
            java.lang.String r26 = "AA4"
            java.lang.String r27 = "AC4"
            java.lang.String r28 = "AC10"
            java.lang.String r29 = "AE1"
            java.lang.String r30 = "AE2"
            java.lang.String r31 = "AE3"
            java.lang.String r32 = "AE4"
            java.lang.String r33 = "AE5"
            java.lang.String r34 = "AE6"
            java.lang.String r35 = "AE7"
            java.lang.String r36 = "AE8"
            java.lang.String r37 = "AE9"
            java.lang.String r38 = "AE10"
            java.lang.String r39 = "AE11"
            java.lang.String r40 = "AE12"
            java.lang.String r41 = "AE13"
            java.lang.String r42 = "AE14"
            java.lang.String r43 = "AE15"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31, r32, r33, r34, r35, r36, r37, r38, r39, r40, r41, r42, r43}
            com.alipay.apmobilesecuritysdk.d.e.b = r0
            return
    }

    public static java.lang.String a(java.util.Map<java.lang.String, java.lang.String> r7) {
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.util.ArrayList r1 = new java.util.ArrayList
            java.util.Set r2 = r7.keySet()
            r1.<init>(r2)
            java.util.Collections.sort(r1)
            r2 = 0
        L12:
            int r3 = r1.size()
            if (r2 >= r3) goto L4b
            java.lang.Object r3 = r1.get(r2)
            java.lang.String r3 = (java.lang.String) r3
            java.lang.Object r4 = r7.get(r3)
            java.lang.String r4 = (java.lang.String) r4
            java.lang.String r5 = ""
            if (r4 != 0) goto L29
            r4 = r5
        L29:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            if (r2 != 0) goto L31
            goto L33
        L31:
            java.lang.String r5 = "&"
        L33:
            r6.append(r5)
            r6.append(r3)
            java.lang.String r3 = "="
            r6.append(r3)
            r6.append(r4)
            java.lang.String r3 = r6.toString()
            r0.append(r3)
            int r2 = r2 + 1
            goto L12
        L4b:
            java.lang.String r7 = r0.toString()
            return r7
    }

    public static synchronized java.util.Map<java.lang.String, java.lang.String> a(android.content.Context r2, java.util.Map<java.lang.String, java.lang.String> r3) {
            java.lang.Class<com.alipay.apmobilesecuritysdk.d.e> r0 = com.alipay.apmobilesecuritysdk.d.e.class
            monitor-enter(r0)
            java.util.Map<java.lang.String, java.lang.String> r1 = com.alipay.apmobilesecuritysdk.d.e.a     // Catch: java.lang.Throwable -> L17
            if (r1 != 0) goto La
            c(r2, r3)     // Catch: java.lang.Throwable -> L17
        La:
            java.util.Map<java.lang.String, java.lang.String> r2 = com.alipay.apmobilesecuritysdk.d.e.a     // Catch: java.lang.Throwable -> L17
            java.util.Map r3 = com.alipay.apmobilesecuritysdk.d.d.a()     // Catch: java.lang.Throwable -> L17
            r2.putAll(r3)     // Catch: java.lang.Throwable -> L17
            java.util.Map<java.lang.String, java.lang.String> r2 = com.alipay.apmobilesecuritysdk.d.e.a     // Catch: java.lang.Throwable -> L17
            monitor-exit(r0)
            return r2
        L17:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    public static synchronized void a() {
            java.lang.Class<com.alipay.apmobilesecuritysdk.d.e> r0 = com.alipay.apmobilesecuritysdk.d.e.class
            monitor-enter(r0)
            r1 = 0
            com.alipay.apmobilesecuritysdk.d.e.a = r1     // Catch: java.lang.Throwable -> L8
            monitor-exit(r0)
            return
        L8:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static synchronized java.lang.String b(android.content.Context r5, java.util.Map<java.lang.String, java.lang.String> r6) {
            java.lang.Class<com.alipay.apmobilesecuritysdk.d.e> r0 = com.alipay.apmobilesecuritysdk.d.e.class
            monitor-enter(r0)
            a(r5, r6)     // Catch: java.lang.Throwable -> L31
            java.util.TreeMap r5 = new java.util.TreeMap     // Catch: java.lang.Throwable -> L31
            r5.<init>()     // Catch: java.lang.Throwable -> L31
            java.lang.String[] r6 = com.alipay.apmobilesecuritysdk.d.e.b     // Catch: java.lang.Throwable -> L31
            int r1 = r6.length     // Catch: java.lang.Throwable -> L31
            r2 = 0
        Lf:
            if (r2 >= r1) goto L27
            r3 = r6[r2]     // Catch: java.lang.Throwable -> L31
            java.util.Map<java.lang.String, java.lang.String> r4 = com.alipay.apmobilesecuritysdk.d.e.a     // Catch: java.lang.Throwable -> L31
            boolean r4 = r4.containsKey(r3)     // Catch: java.lang.Throwable -> L31
            if (r4 == 0) goto L24
            java.util.Map<java.lang.String, java.lang.String> r4 = com.alipay.apmobilesecuritysdk.d.e.a     // Catch: java.lang.Throwable -> L31
            java.lang.Object r4 = r4.get(r3)     // Catch: java.lang.Throwable -> L31
            r5.put(r3, r4)     // Catch: java.lang.Throwable -> L31
        L24:
            int r2 = r2 + 1
            goto Lf
        L27:
            java.lang.String r5 = a(r5)     // Catch: java.lang.Throwable -> L31
            java.lang.String r5 = com.alipay.sdk.m.y.b.a(r5)     // Catch: java.lang.Throwable -> L31
            monitor-exit(r0)
            return r5
        L31:
            r5 = move-exception
            monitor-exit(r0)
            goto L35
        L34:
            throw r5
        L35:
            goto L34
    }

    public static synchronized void c(android.content.Context r3, java.util.Map<java.lang.String, java.lang.String> r4) {
            java.lang.Class<com.alipay.apmobilesecuritysdk.d.e> r0 = com.alipay.apmobilesecuritysdk.d.e.class
            monitor-enter(r0)
            java.util.TreeMap r1 = new java.util.TreeMap     // Catch: java.lang.Throwable -> L2e
            r1.<init>()     // Catch: java.lang.Throwable -> L2e
            com.alipay.apmobilesecuritysdk.d.e.a = r1     // Catch: java.lang.Throwable -> L2e
            java.util.Map r2 = com.alipay.apmobilesecuritysdk.d.b.a(r3, r4)     // Catch: java.lang.Throwable -> L2e
            r1.putAll(r2)     // Catch: java.lang.Throwable -> L2e
            java.util.Map<java.lang.String, java.lang.String> r1 = com.alipay.apmobilesecuritysdk.d.e.a     // Catch: java.lang.Throwable -> L2e
            java.util.Map r2 = com.alipay.apmobilesecuritysdk.d.d.a(r3)     // Catch: java.lang.Throwable -> L2e
            r1.putAll(r2)     // Catch: java.lang.Throwable -> L2e
            java.util.Map<java.lang.String, java.lang.String> r1 = com.alipay.apmobilesecuritysdk.d.e.a     // Catch: java.lang.Throwable -> L2e
            java.util.Map r2 = com.alipay.apmobilesecuritysdk.d.c.a(r3)     // Catch: java.lang.Throwable -> L2e
            r1.putAll(r2)     // Catch: java.lang.Throwable -> L2e
            java.util.Map<java.lang.String, java.lang.String> r1 = com.alipay.apmobilesecuritysdk.d.e.a     // Catch: java.lang.Throwable -> L2e
            java.util.Map r3 = com.alipay.apmobilesecuritysdk.d.a.a(r3, r4)     // Catch: java.lang.Throwable -> L2e
            r1.putAll(r3)     // Catch: java.lang.Throwable -> L2e
            monitor-exit(r0)
            return
        L2e:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }
}
