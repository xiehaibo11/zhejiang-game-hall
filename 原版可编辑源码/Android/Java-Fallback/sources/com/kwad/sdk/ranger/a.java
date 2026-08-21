package com.kwad.sdk.ranger;

public final class a {
    public static final java.lang.String TAG = null;


    static {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Ranger_"
            r0.<init>(r1)
            java.lang.Class<com.kwad.sdk.ranger.b> r1 = com.kwad.sdk.ranger.b.class
            java.lang.String r1 = r1.getSimpleName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.kwad.sdk.ranger.a.TAG = r0
            return
    }

    static void a(android.app.Activity r6, java.util.List<com.kwad.sdk.ranger.d.a> r7) {
            java.lang.String r0 = "ksadsdk_perf_ranger"
            java.util.Iterator r7 = r7.iterator()     // Catch: java.lang.Throwable -> L74
        L6:
            boolean r1 = r7.hasNext()     // Catch: java.lang.Throwable -> L74
            if (r1 == 0) goto L73
            java.lang.Object r1 = r7.next()     // Catch: java.lang.Throwable -> L74
            com.kwad.sdk.ranger.d$a r1 = (com.kwad.sdk.ranger.d.a) r1     // Catch: java.lang.Throwable -> L74
            if (r1 == 0) goto L6
            java.lang.String r2 = ""
            java.lang.Class r3 = r6.getClass()     // Catch: java.lang.Throwable -> L74
            java.lang.String r3 = r3.getName()     // Catch: java.lang.Throwable -> L74
            java.lang.String r4 = r1.aGL     // Catch: java.lang.Throwable -> L74
            boolean r3 = android.text.TextUtils.equals(r3, r4)     // Catch: java.lang.Throwable -> L74
            if (r3 == 0) goto L29
            java.lang.String r2 = r1.aGL     // Catch: java.lang.Throwable -> L74
            goto L47
        L29:
            java.lang.String r3 = r1.aGM     // Catch: java.lang.Throwable -> L74
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L74
            if (r3 != 0) goto L47
            java.lang.Class r3 = r6.getClass()     // Catch: java.lang.Throwable -> L74
            java.lang.String r3 = r3.getName()     // Catch: java.lang.Throwable -> L74
            java.lang.String r4 = r1.aGL     // Catch: java.lang.Throwable -> L74
            boolean r3 = r3.startsWith(r4)     // Catch: java.lang.Throwable -> L74
            if (r3 == 0) goto L47
            java.lang.String r1 = r1.aGM     // Catch: java.lang.Throwable -> L74
            java.lang.String r2 = e(r6, r1)     // Catch: java.lang.Throwable -> L74
        L47:
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L74
            if (r1 != 0) goto L6
            r1 = 0
            int r1 = com.kwad.sdk.utils.y.c(r0, r2, r1)     // Catch: java.lang.Throwable -> L74
            int r1 = r1 + 1
            com.kwad.sdk.utils.y.b(r0, r2, r1)     // Catch: java.lang.Throwable -> L74
            java.lang.String r3 = com.kwad.sdk.ranger.a.TAG     // Catch: java.lang.Throwable -> L74
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L74
            java.lang.String r5 = "act:"
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L74
            r4.append(r2)     // Catch: java.lang.Throwable -> L74
            java.lang.String r2 = " num:"
            r4.append(r2)     // Catch: java.lang.Throwable -> L74
            r4.append(r1)     // Catch: java.lang.Throwable -> L74
            java.lang.String r1 = r4.toString()     // Catch: java.lang.Throwable -> L74
            com.kwad.sdk.core.e.c.d(r3, r1)     // Catch: java.lang.Throwable -> L74
            goto L6
        L73:
            return
        L74:
            r6 = move-exception
            java.lang.String r7 = com.kwad.sdk.ranger.a.TAG
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "record:"
            r0.<init>(r1)
            java.lang.String r6 = android.util.Log.getStackTraceString(r6)
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            com.kwad.sdk.core.e.c.e(r7, r6)
            return
    }

    static void a(com.kwad.sdk.ranger.d r1) {
            java.util.List<com.kwad.sdk.ranger.d$a> r1 = r1.aGH
            if (r1 == 0) goto L16
            boolean r0 = r1.isEmpty()
            if (r0 == 0) goto Lb
            goto L16
        Lb:
            com.kwad.sdk.core.c.b.AU()
            com.kwad.sdk.ranger.a$1 r0 = new com.kwad.sdk.ranger.a$1
            r0.<init>(r1)
            com.kwad.sdk.core.c.b.a(r0)
        L16:
            return
    }

    private static java.lang.String e(java.lang.Object r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L15
            java.lang.Object r1 = com.kwad.sdk.utils.s.f(r1, r2)
            if (r1 == 0) goto L15
            java.lang.Class r1 = r1.getClass()
            java.lang.String r1 = r1.getName()
            return r1
        L15:
            java.lang.String r1 = ""
            return r1
    }
}
