package com.xiaomi.push;

class dk implements java.lang.Runnable {
    final com.xiaomi.push.dj a;
    final java.lang.String a;
    final java.lang.Throwable a;

    dk(com.xiaomi.push.dj r1, java.lang.String r2, java.lang.Throwable r3) {
            r0 = this;
            r0.a = r1
            r0.a = r2
            r0.a = r3
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r10 = this;
            java.util.List r0 = com.xiaomi.push.dj.a()
            android.util.Pair r1 = new android.util.Pair
            r2 = 3
            java.lang.Object[] r3 = new java.lang.Object[r2]
            java.text.SimpleDateFormat r4 = com.xiaomi.push.dj.a()
            java.util.Date r5 = new java.util.Date
            r5.<init>()
            java.lang.String r4 = r4.format(r5)
            r5 = 0
            r3[r5] = r4
            com.xiaomi.push.dj r4 = r10.a
            java.lang.String r4 = com.xiaomi.push.dj.a(r4)
            r6 = 1
            r3[r6] = r4
            java.lang.String r4 = r10.a
            r7 = 2
            r3[r7] = r4
            java.lang.String r4 = "%1$s %2$s %3$s "
            java.lang.String r3 = java.lang.String.format(r4, r3)
            java.lang.Throwable r8 = r10.a
            r1.<init>(r3, r8)
            r0.add(r1)
            java.util.List r0 = com.xiaomi.push.dj.a()
            int r0 = r0.size()
            r1 = 20000(0x4e20, float:2.8026E-41)
            if (r0 <= r1) goto La5
            java.util.List r0 = com.xiaomi.push.dj.a()
            int r0 = r0.size()
            int r0 = r0 - r1
            int r0 = r0 + 50
            r1 = r5
        L4d:
            if (r1 >= r0) goto L63
            java.util.List r3 = com.xiaomi.push.dj.a()     // Catch: java.lang.IndexOutOfBoundsException -> L60
            int r3 = r3.size()     // Catch: java.lang.IndexOutOfBoundsException -> L60
            if (r3 <= 0) goto L60
            java.util.List r3 = com.xiaomi.push.dj.a()     // Catch: java.lang.IndexOutOfBoundsException -> L60
            r3.remove(r5)     // Catch: java.lang.IndexOutOfBoundsException -> L60
        L60:
            int r1 = r1 + 1
            goto L4d
        L63:
            java.util.List r1 = com.xiaomi.push.dj.a()
            android.util.Pair r3 = new android.util.Pair
            java.lang.Object[] r2 = new java.lang.Object[r2]
            java.text.SimpleDateFormat r8 = com.xiaomi.push.dj.a()
            java.util.Date r9 = new java.util.Date
            r9.<init>()
            java.lang.String r8 = r8.format(r9)
            r2[r5] = r8
            com.xiaomi.push.dj r5 = r10.a
            java.lang.String r5 = com.xiaomi.push.dj.a(r5)
            r2[r6] = r5
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "flush "
            r5.append(r6)
            r5.append(r0)
            java.lang.String r0 = " lines logs."
            r5.append(r0)
            java.lang.String r0 = r5.toString()
            r2[r7] = r0
            java.lang.String r0 = java.lang.String.format(r4, r2)
            r2 = 0
            r3.<init>(r0, r2)
            r1.add(r3)
        La5:
            boolean r0 = com.xiaomi.push.ad.d()     // Catch: java.lang.Exception -> Lbd
            if (r0 != 0) goto Lb7
            com.xiaomi.push.dj r0 = r10.a     // Catch: java.lang.Exception -> Lbd
            java.lang.String r0 = com.xiaomi.push.dj.a(r0)     // Catch: java.lang.Exception -> Lbd
            java.lang.String r1 = "SDCard is unavailable."
            android.util.Log.w(r0, r1)     // Catch: java.lang.Exception -> Lbd
            return
        Lb7:
            com.xiaomi.push.dj r0 = r10.a     // Catch: java.lang.Exception -> Lbd
            com.xiaomi.push.dj.a(r0)     // Catch: java.lang.Exception -> Lbd
            goto Lc9
        Lbd:
            r0 = move-exception
            com.xiaomi.push.dj r1 = r10.a
            java.lang.String r1 = com.xiaomi.push.dj.a(r1)
            java.lang.String r2 = ""
            android.util.Log.e(r1, r2, r0)
        Lc9:
            return
    }
}
