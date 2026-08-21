package com.reyun.tracking.b;

class j implements java.lang.Runnable {
    final android.content.Context a;
    final com.reyun.tracking.b.l b;
    final java.lang.String c;
    final com.reyun.tracking.b.h d;

    j(com.reyun.tracking.b.h r1, android.content.Context r2, com.reyun.tracking.b.l r3, java.lang.String r4) {
            r0 = this;
            r0.d = r1
            r0.a = r2
            r0.b = r3
            r0.c = r4
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r7 = this;
            java.lang.String r0 = "unknown"
            java.lang.String r1 = "TrackingIO"
            r2 = 0
            com.reyun.tracking.b.k r3 = new com.reyun.tracking.b.k     // Catch: java.lang.Throwable -> Lfa
            r3.<init>(r7)     // Catch: java.lang.Throwable -> Lfa
            java.lang.String r4 = "ASUS"
            java.lang.String r5 = r7.c     // Catch: java.lang.Throwable -> Lfa
            boolean r4 = r4.equals(r5)     // Catch: java.lang.Throwable -> Lfa
            if (r4 == 0) goto L20
            com.reyun.tracking.b.a.a r4 = new com.reyun.tracking.b.a.a     // Catch: java.lang.Throwable -> Lfa
            android.content.Context r5 = r7.a     // Catch: java.lang.Throwable -> Lfa
            r4.<init>(r5)     // Catch: java.lang.Throwable -> Lfa
            r4.a(r3)     // Catch: java.lang.Throwable -> Lfa
            goto L115
        L20:
            java.lang.String r4 = "OPPO"
            java.lang.String r5 = r7.c     // Catch: java.lang.Throwable -> Lfa
            boolean r4 = r4.equals(r5)     // Catch: java.lang.Throwable -> Lfa
            if (r4 == 0) goto L36
            com.reyun.tracking.b.a.i r4 = new com.reyun.tracking.b.a.i     // Catch: java.lang.Throwable -> Lfa
            android.content.Context r5 = r7.a     // Catch: java.lang.Throwable -> Lfa
            r4.<init>(r5)     // Catch: java.lang.Throwable -> Lfa
            r4.a(r3)     // Catch: java.lang.Throwable -> Lfa
            goto L115
        L36:
            java.lang.String r4 = "ONEPLUS"
            java.lang.String r5 = r7.c     // Catch: java.lang.Throwable -> Lfa
            boolean r4 = r4.equals(r5)     // Catch: java.lang.Throwable -> Lfa
            if (r4 == 0) goto L4c
            com.reyun.tracking.b.a.g r4 = new com.reyun.tracking.b.a.g     // Catch: java.lang.Throwable -> Lfa
            android.content.Context r5 = r7.a     // Catch: java.lang.Throwable -> Lfa
            r4.<init>(r5)     // Catch: java.lang.Throwable -> Lfa
            r4.a(r3)     // Catch: java.lang.Throwable -> Lfa
            goto L115
        L4c:
            java.lang.String r4 = "ZTE"
            java.lang.String r5 = r7.c     // Catch: java.lang.Throwable -> Lfa
            boolean r4 = r4.equals(r5)     // Catch: java.lang.Throwable -> Lfa
            if (r4 != 0) goto Lef
            java.lang.String r4 = "FERRMEOS"
            java.lang.String r5 = r7.c     // Catch: java.lang.Throwable -> Lfa
            boolean r4 = r4.equals(r5)     // Catch: java.lang.Throwable -> Lfa
            if (r4 != 0) goto Lef
            java.lang.String r4 = "SSUI"
            java.lang.String r5 = r7.c     // Catch: java.lang.Throwable -> Lfa
            boolean r4 = r4.equals(r5)     // Catch: java.lang.Throwable -> Lfa
            if (r4 == 0) goto L6c
            goto Lef
        L6c:
            java.lang.String r4 = "HUAWEI"
            java.lang.String r5 = r7.c     // Catch: java.lang.Throwable -> Lfa
            boolean r4 = r4.equals(r5)     // Catch: java.lang.Throwable -> Lfa
            if (r4 != 0) goto Le4
            java.lang.String r4 = "HONOR"
            java.lang.String r5 = r7.c     // Catch: java.lang.Throwable -> Lfa
            boolean r4 = r4.equals(r5)     // Catch: java.lang.Throwable -> Lfa
            if (r4 == 0) goto L81
            goto Le4
        L81:
            java.lang.String r4 = "SAMSUNG"
            java.lang.String r5 = r7.c     // Catch: java.lang.Throwable -> Lfa
            boolean r4 = r4.equals(r5)     // Catch: java.lang.Throwable -> Lfa
            if (r4 == 0) goto L97
            com.reyun.tracking.b.a.k r4 = new com.reyun.tracking.b.a.k     // Catch: java.lang.Throwable -> Lfa
            android.content.Context r5 = r7.a     // Catch: java.lang.Throwable -> Lfa
            r4.<init>(r5)     // Catch: java.lang.Throwable -> Lfa
            r4.a(r3)     // Catch: java.lang.Throwable -> Lfa
            goto L115
        L97:
            java.lang.String r4 = "LENOVO"
            java.lang.String r5 = r7.c     // Catch: java.lang.Throwable -> Lfa
            boolean r4 = r4.equals(r5)     // Catch: java.lang.Throwable -> Lfa
            if (r4 != 0) goto Ld9
            java.lang.String r4 = "MOTOLORA"
            java.lang.String r5 = r7.c     // Catch: java.lang.Throwable -> Lfa
            boolean r4 = r4.equals(r5)     // Catch: java.lang.Throwable -> Lfa
            if (r4 == 0) goto Lac
            goto Ld9
        Lac:
            java.lang.String r4 = "MEIZU"
            java.lang.String r5 = r7.c     // Catch: java.lang.Throwable -> Lfa
            boolean r4 = r4.equals(r5)     // Catch: java.lang.Throwable -> Lfa
            if (r4 == 0) goto Lc1
            com.reyun.tracking.b.a.e r4 = new com.reyun.tracking.b.a.e     // Catch: java.lang.Throwable -> Lfa
            android.content.Context r5 = r7.a     // Catch: java.lang.Throwable -> Lfa
            r4.<init>(r5)     // Catch: java.lang.Throwable -> Lfa
            r4.a(r3)     // Catch: java.lang.Throwable -> Lfa
            goto L115
        Lc1:
            java.lang.String r3 = "oaid error:async unknown manufacturer"
            com.reyun.tracking.a.a.d(r1, r3)     // Catch: java.lang.Throwable -> Lfa
            com.reyun.tracking.b.h r3 = r7.d     // Catch: java.lang.Throwable -> Lfa
            com.reyun.tracking.b.l r4 = r7.b     // Catch: java.lang.Throwable -> Lfa
            com.reyun.tracking.b.h.a(r3, r4, r0, r2)     // Catch: java.lang.Throwable -> Lfa
            com.reyun.tracking.b.h r3 = r7.d     // Catch: java.lang.Throwable -> Lfa
            android.content.Context r4 = r7.a     // Catch: java.lang.Throwable -> Lfa
            java.lang.String r5 = "100009"
            java.lang.String r6 = "async unknown manufacturer"
            com.reyun.tracking.b.h.a(r3, r4, r5, r6)     // Catch: java.lang.Throwable -> Lfa
            goto L115
        Ld9:
            com.reyun.tracking.b.a.c r4 = new com.reyun.tracking.b.a.c     // Catch: java.lang.Throwable -> Lfa
            android.content.Context r5 = r7.a     // Catch: java.lang.Throwable -> Lfa
            r4.<init>(r5)     // Catch: java.lang.Throwable -> Lfa
            r4.a(r3)     // Catch: java.lang.Throwable -> Lfa
            goto L115
        Le4:
            com.reyun.tracking.b.a r4 = new com.reyun.tracking.b.a     // Catch: java.lang.Throwable -> Lfa
            android.content.Context r5 = r7.a     // Catch: java.lang.Throwable -> Lfa
            r4.<init>(r5)     // Catch: java.lang.Throwable -> Lfa
            r4.a(r3)     // Catch: java.lang.Throwable -> Lfa
            goto L115
        Lef:
            com.reyun.tracking.b.a.n r4 = new com.reyun.tracking.b.a.n     // Catch: java.lang.Throwable -> Lfa
            android.content.Context r5 = r7.a     // Catch: java.lang.Throwable -> Lfa
            r4.<init>(r5)     // Catch: java.lang.Throwable -> Lfa
            r4.a(r3)     // Catch: java.lang.Throwable -> Lfa
            goto L115
        Lfa:
            r3 = move-exception
            r3.printStackTrace()
            java.lang.String r3 = "oaid :async unknown"
            com.reyun.tracking.a.a.d(r1, r3)
            com.reyun.tracking.b.h r1 = r7.d
            com.reyun.tracking.b.l r3 = r7.b
            com.reyun.tracking.b.h.a(r1, r3, r0, r2)
            com.reyun.tracking.b.h r0 = r7.d
            android.content.Context r1 = r7.a
            java.lang.String r2 = "100005"
            java.lang.String r3 = "async unknown"
            com.reyun.tracking.b.h.a(r0, r1, r2, r3)
        L115:
            return
    }
}
