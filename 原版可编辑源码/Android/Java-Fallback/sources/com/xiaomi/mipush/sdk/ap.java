package com.xiaomi.mipush.sdk;

class ap extends android.os.Handler {
    final com.xiaomi.mipush.sdk.ao a;

    ap(com.xiaomi.mipush.sdk.ao r1, android.os.Looper r2) {
            r0 = this;
            r0.a = r1
            r0.<init>(r2)
            return
    }

    @Override
    public void dispatchMessage(android.os.Message r8) {
            r7 = this;
            int r0 = r8.what
            r1 = 19
            if (r0 == r1) goto L8
            goto L169
        L8:
            java.lang.Object r0 = r8.obj
            java.lang.String r0 = (java.lang.String) r0
            int r8 = r8.arg1
            java.lang.Class<com.xiaomi.mipush.sdk.af> r1 = com.xiaomi.mipush.sdk.af.class
            monitor-enter(r1)
            com.xiaomi.mipush.sdk.ao r2 = r7.a     // Catch: java.lang.Throwable -> L16a
            android.content.Context r2 = com.xiaomi.mipush.sdk.ao.a(r2)     // Catch: java.lang.Throwable -> L16a
            com.xiaomi.mipush.sdk.af r2 = com.xiaomi.mipush.sdk.af.a(r2)     // Catch: java.lang.Throwable -> L16a
            boolean r2 = r2.a(r0)     // Catch: java.lang.Throwable -> L16a
            if (r2 == 0) goto L168
            com.xiaomi.mipush.sdk.ao r2 = r7.a     // Catch: java.lang.Throwable -> L16a
            android.content.Context r2 = com.xiaomi.mipush.sdk.ao.a(r2)     // Catch: java.lang.Throwable -> L16a
            com.xiaomi.mipush.sdk.af r2 = com.xiaomi.mipush.sdk.af.a(r2)     // Catch: java.lang.Throwable -> L16a
            int r2 = r2.a(r0)     // Catch: java.lang.Throwable -> L16a
            r3 = 10
            if (r2 >= r3) goto L15b
            com.xiaomi.mipush.sdk.au r2 = com.xiaomi.mipush.sdk.au.a     // Catch: java.lang.Throwable -> L16a
            int r2 = r2.ordinal()     // Catch: java.lang.Throwable -> L16a
            r3 = 0
            r4 = 1
            if (r2 != r8) goto L5e
            java.lang.String r2 = "syncing"
            com.xiaomi.mipush.sdk.ao r5 = r7.a     // Catch: java.lang.Throwable -> L16a
            android.content.Context r5 = com.xiaomi.mipush.sdk.ao.a(r5)     // Catch: java.lang.Throwable -> L16a
            com.xiaomi.mipush.sdk.af r5 = com.xiaomi.mipush.sdk.af.a(r5)     // Catch: java.lang.Throwable -> L16a
            com.xiaomi.mipush.sdk.au r6 = com.xiaomi.mipush.sdk.au.a     // Catch: java.lang.Throwable -> L16a
            java.lang.String r5 = r5.a(r6)     // Catch: java.lang.Throwable -> L16a
            boolean r2 = r2.equals(r5)     // Catch: java.lang.Throwable -> L16a
            if (r2 == 0) goto L5e
            com.xiaomi.mipush.sdk.ao r8 = r7.a     // Catch: java.lang.Throwable -> L16a
            com.xiaomi.mipush.sdk.au r2 = com.xiaomi.mipush.sdk.au.a     // Catch: java.lang.Throwable -> L16a
        L59:
            com.xiaomi.mipush.sdk.ao.a(r8, r0, r2, r4, r3)     // Catch: java.lang.Throwable -> L16a
            goto L14d
        L5e:
            com.xiaomi.mipush.sdk.au r2 = com.xiaomi.mipush.sdk.au.b     // Catch: java.lang.Throwable -> L16a
            int r2 = r2.ordinal()     // Catch: java.lang.Throwable -> L16a
            if (r2 != r8) goto L83
            java.lang.String r2 = "syncing"
            com.xiaomi.mipush.sdk.ao r5 = r7.a     // Catch: java.lang.Throwable -> L16a
            android.content.Context r5 = com.xiaomi.mipush.sdk.ao.a(r5)     // Catch: java.lang.Throwable -> L16a
            com.xiaomi.mipush.sdk.af r5 = com.xiaomi.mipush.sdk.af.a(r5)     // Catch: java.lang.Throwable -> L16a
            com.xiaomi.mipush.sdk.au r6 = com.xiaomi.mipush.sdk.au.b     // Catch: java.lang.Throwable -> L16a
            java.lang.String r5 = r5.a(r6)     // Catch: java.lang.Throwable -> L16a
            boolean r2 = r2.equals(r5)     // Catch: java.lang.Throwable -> L16a
            if (r2 == 0) goto L83
            com.xiaomi.mipush.sdk.ao r8 = r7.a     // Catch: java.lang.Throwable -> L16a
            com.xiaomi.mipush.sdk.au r2 = com.xiaomi.mipush.sdk.au.b     // Catch: java.lang.Throwable -> L16a
            goto L59
        L83:
            com.xiaomi.mipush.sdk.au r2 = com.xiaomi.mipush.sdk.au.c     // Catch: java.lang.Throwable -> L16a
            int r2 = r2.ordinal()     // Catch: java.lang.Throwable -> L16a
            r3 = 0
            if (r2 != r8) goto Lb9
            java.lang.String r2 = "syncing"
            com.xiaomi.mipush.sdk.ao r4 = r7.a     // Catch: java.lang.Throwable -> L16a
            android.content.Context r4 = com.xiaomi.mipush.sdk.ao.a(r4)     // Catch: java.lang.Throwable -> L16a
            com.xiaomi.mipush.sdk.af r4 = com.xiaomi.mipush.sdk.af.a(r4)     // Catch: java.lang.Throwable -> L16a
            com.xiaomi.mipush.sdk.au r5 = com.xiaomi.mipush.sdk.au.c     // Catch: java.lang.Throwable -> L16a
            java.lang.String r4 = r4.a(r5)     // Catch: java.lang.Throwable -> L16a
            boolean r2 = r2.equals(r4)     // Catch: java.lang.Throwable -> L16a
            if (r2 == 0) goto Lb9
            com.xiaomi.mipush.sdk.ao r8 = r7.a     // Catch: java.lang.Throwable -> L16a
            com.xiaomi.mipush.sdk.au r2 = com.xiaomi.mipush.sdk.au.c     // Catch: java.lang.Throwable -> L16a
            com.xiaomi.mipush.sdk.ao r4 = r7.a     // Catch: java.lang.Throwable -> L16a
            android.content.Context r4 = com.xiaomi.mipush.sdk.ao.a(r4)     // Catch: java.lang.Throwable -> L16a
            com.xiaomi.mipush.sdk.e r5 = com.xiaomi.mipush.sdk.e.a     // Catch: java.lang.Throwable -> L16a
            java.util.HashMap r4 = com.xiaomi.mipush.sdk.i.a(r4, r5)     // Catch: java.lang.Throwable -> L16a
        Lb4:
            com.xiaomi.mipush.sdk.ao.a(r8, r0, r2, r3, r4)     // Catch: java.lang.Throwable -> L16a
            goto L14d
        Lb9:
            com.xiaomi.mipush.sdk.au r2 = com.xiaomi.mipush.sdk.au.d     // Catch: java.lang.Throwable -> L16a
            int r2 = r2.ordinal()     // Catch: java.lang.Throwable -> L16a
            if (r2 != r8) goto Lea
            java.lang.String r2 = "syncing"
            com.xiaomi.mipush.sdk.ao r4 = r7.a     // Catch: java.lang.Throwable -> L16a
            android.content.Context r4 = com.xiaomi.mipush.sdk.ao.a(r4)     // Catch: java.lang.Throwable -> L16a
            com.xiaomi.mipush.sdk.af r4 = com.xiaomi.mipush.sdk.af.a(r4)     // Catch: java.lang.Throwable -> L16a
            com.xiaomi.mipush.sdk.au r5 = com.xiaomi.mipush.sdk.au.d     // Catch: java.lang.Throwable -> L16a
            java.lang.String r4 = r4.a(r5)     // Catch: java.lang.Throwable -> L16a
            boolean r2 = r2.equals(r4)     // Catch: java.lang.Throwable -> L16a
            if (r2 == 0) goto Lea
            com.xiaomi.mipush.sdk.ao r8 = r7.a     // Catch: java.lang.Throwable -> L16a
            com.xiaomi.mipush.sdk.au r2 = com.xiaomi.mipush.sdk.au.d     // Catch: java.lang.Throwable -> L16a
            com.xiaomi.mipush.sdk.ao r4 = r7.a     // Catch: java.lang.Throwable -> L16a
            android.content.Context r4 = com.xiaomi.mipush.sdk.ao.a(r4)     // Catch: java.lang.Throwable -> L16a
            com.xiaomi.mipush.sdk.e r5 = com.xiaomi.mipush.sdk.e.b     // Catch: java.lang.Throwable -> L16a
            java.util.HashMap r4 = com.xiaomi.mipush.sdk.i.a(r4, r5)     // Catch: java.lang.Throwable -> L16a
            goto Lb4
        Lea:
            com.xiaomi.mipush.sdk.au r2 = com.xiaomi.mipush.sdk.au.e     // Catch: java.lang.Throwable -> L16a
            int r2 = r2.ordinal()     // Catch: java.lang.Throwable -> L16a
            if (r2 != r8) goto L11b
            java.lang.String r2 = "syncing"
            com.xiaomi.mipush.sdk.ao r4 = r7.a     // Catch: java.lang.Throwable -> L16a
            android.content.Context r4 = com.xiaomi.mipush.sdk.ao.a(r4)     // Catch: java.lang.Throwable -> L16a
            com.xiaomi.mipush.sdk.af r4 = com.xiaomi.mipush.sdk.af.a(r4)     // Catch: java.lang.Throwable -> L16a
            com.xiaomi.mipush.sdk.au r5 = com.xiaomi.mipush.sdk.au.e     // Catch: java.lang.Throwable -> L16a
            java.lang.String r4 = r4.a(r5)     // Catch: java.lang.Throwable -> L16a
            boolean r2 = r2.equals(r4)     // Catch: java.lang.Throwable -> L16a
            if (r2 == 0) goto L11b
            com.xiaomi.mipush.sdk.ao r8 = r7.a     // Catch: java.lang.Throwable -> L16a
            com.xiaomi.mipush.sdk.au r2 = com.xiaomi.mipush.sdk.au.e     // Catch: java.lang.Throwable -> L16a
            com.xiaomi.mipush.sdk.ao r4 = r7.a     // Catch: java.lang.Throwable -> L16a
            android.content.Context r4 = com.xiaomi.mipush.sdk.ao.a(r4)     // Catch: java.lang.Throwable -> L16a
            com.xiaomi.mipush.sdk.e r5 = com.xiaomi.mipush.sdk.e.c     // Catch: java.lang.Throwable -> L16a
            java.util.HashMap r4 = com.xiaomi.mipush.sdk.i.a(r4, r5)     // Catch: java.lang.Throwable -> L16a
            goto Lb4
        L11b:
            com.xiaomi.mipush.sdk.au r2 = com.xiaomi.mipush.sdk.au.f     // Catch: java.lang.Throwable -> L16a
            int r2 = r2.ordinal()     // Catch: java.lang.Throwable -> L16a
            if (r2 != r8) goto L14d
            java.lang.String r8 = "syncing"
            com.xiaomi.mipush.sdk.ao r2 = r7.a     // Catch: java.lang.Throwable -> L16a
            android.content.Context r2 = com.xiaomi.mipush.sdk.ao.a(r2)     // Catch: java.lang.Throwable -> L16a
            com.xiaomi.mipush.sdk.af r2 = com.xiaomi.mipush.sdk.af.a(r2)     // Catch: java.lang.Throwable -> L16a
            com.xiaomi.mipush.sdk.au r4 = com.xiaomi.mipush.sdk.au.f     // Catch: java.lang.Throwable -> L16a
            java.lang.String r2 = r2.a(r4)     // Catch: java.lang.Throwable -> L16a
            boolean r8 = r8.equals(r2)     // Catch: java.lang.Throwable -> L16a
            if (r8 == 0) goto L14d
            com.xiaomi.mipush.sdk.ao r8 = r7.a     // Catch: java.lang.Throwable -> L16a
            com.xiaomi.mipush.sdk.au r2 = com.xiaomi.mipush.sdk.au.f     // Catch: java.lang.Throwable -> L16a
            com.xiaomi.mipush.sdk.ao r4 = r7.a     // Catch: java.lang.Throwable -> L16a
            android.content.Context r4 = com.xiaomi.mipush.sdk.ao.a(r4)     // Catch: java.lang.Throwable -> L16a
            com.xiaomi.mipush.sdk.e r5 = com.xiaomi.mipush.sdk.e.d     // Catch: java.lang.Throwable -> L16a
            java.util.HashMap r4 = com.xiaomi.mipush.sdk.i.a(r4, r5)     // Catch: java.lang.Throwable -> L16a
            goto Lb4
        L14d:
            com.xiaomi.mipush.sdk.ao r8 = r7.a     // Catch: java.lang.Throwable -> L16a
            android.content.Context r8 = com.xiaomi.mipush.sdk.ao.a(r8)     // Catch: java.lang.Throwable -> L16a
            com.xiaomi.mipush.sdk.af r8 = com.xiaomi.mipush.sdk.af.a(r8)     // Catch: java.lang.Throwable -> L16a
            r8.b(r0)     // Catch: java.lang.Throwable -> L16a
            goto L168
        L15b:
            com.xiaomi.mipush.sdk.ao r8 = r7.a     // Catch: java.lang.Throwable -> L16a
            android.content.Context r8 = com.xiaomi.mipush.sdk.ao.a(r8)     // Catch: java.lang.Throwable -> L16a
            com.xiaomi.mipush.sdk.af r8 = com.xiaomi.mipush.sdk.af.a(r8)     // Catch: java.lang.Throwable -> L16a
            r8.c(r0)     // Catch: java.lang.Throwable -> L16a
        L168:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L16a
        L169:
            return
        L16a:
            r8 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L16a
            throw r8
    }
}
