package com.kwad.sdk.ranger;

public class RangerHelper {
    private static volatile boolean aGN;
    private static java.util.List<java.lang.String> aGO;
    private static com.kwad.sdk.ranger.d aGP;
    private static java.util.List<okhttp3.OkHttpClient> aGQ;




    static {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.kwad.sdk.ranger.RangerHelper.aGQ = r0
            return
    }

    public RangerHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    private static boolean Ht() {
            java.lang.String r0 = ""
            r1 = 0
            java.lang.String r2 = okhttp3.internal.Version.userAgent()     // Catch: java.lang.Throwable -> L4a
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L4a
            java.lang.String r4 = "Ranger_Helper"
            if (r3 == 0) goto L15
            java.lang.String r0 = "TextUtils.isEmpty(userAgent)"
            com.kwad.sdk.core.e.c.d(r4, r0)     // Catch: java.lang.Throwable -> L4a
            return r1
        L15:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4a
            java.lang.String r5 = "userAgent:"
            r3.<init>(r5)     // Catch: java.lang.Throwable -> L4a
            r3.append(r2)     // Catch: java.lang.Throwable -> L4a
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L4a
            com.kwad.sdk.core.e.c.d(r4, r3)     // Catch: java.lang.Throwable -> L4a
            java.lang.String r3 = "okhttp/"
            java.lang.String r2 = r2.replace(r3, r0)     // Catch: java.lang.Throwable -> L4a
            java.lang.String r3 = "3."
            boolean r3 = r2.startsWith(r3)     // Catch: java.lang.Throwable -> L4a
            if (r3 != 0) goto L35
            return r1
        L35:
            java.lang.String r3 = "\\."
            java.lang.String r0 = r2.replaceAll(r3, r0)     // Catch: java.lang.Throwable -> L4a
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Throwable -> L4a
            r2 = 390(0x186, float:5.47E-43)
            if (r0 < r2) goto L4a
            r2 = 3131(0xc3b, float:4.387E-42)
            if (r0 <= r2) goto L48
            goto L4a
        L48:
            r0 = 1
            return r0
        L4a:
            return r1
    }

    private static void a(okhttp3.internal.connection.StreamAllocation r3) {
            com.kwad.sdk.ranger.RangerHelper$2 r0 = new com.kwad.sdk.ranger.RangerHelper$2
            r0.<init>(r3)
            java.util.concurrent.TimeUnit r3 = java.util.concurrent.TimeUnit.SECONDS
            r1 = 0
            com.kwad.sdk.utils.g.schedule(r0, r1, r3)
            return
    }

    static void b(okhttp3.internal.connection.StreamAllocation r0) {
            a(r0)
            return
    }

    static void c(com.kwad.sdk.ranger.d r0) {
            com.kwad.sdk.ranger.RangerHelper.aGP = r0
            java.util.List<java.lang.String> r0 = r0.aGG
            com.kwad.sdk.ranger.RangerHelper.aGO = r0
            return
    }

    private static void m(java.lang.Object r4) {
            java.lang.String r0 = "Ranger_Helper"
            if (r4 != 0) goto La
            java.lang.String r4 = "real call null"
            com.kwad.sdk.core.e.c.d(r0, r4)
            return
        La:
            java.lang.String r1 = "client"
            java.lang.Object r1 = com.kwad.sdk.utils.s.f(r4, r1)     // Catch: java.lang.Throwable -> L56
            okhttp3.OkHttpClient r1 = (okhttp3.OkHttpClient) r1     // Catch: java.lang.Throwable -> L56
            java.util.List<okhttp3.OkHttpClient> r2 = com.kwad.sdk.ranger.RangerHelper.aGQ     // Catch: java.lang.Throwable -> L56
            boolean r2 = r2.contains(r1)     // Catch: java.lang.Throwable -> L56
            if (r2 == 0) goto L20
            java.lang.String r4 = "already invoke"
            com.kwad.sdk.core.e.c.d(r0, r4)     // Catch: java.lang.Throwable -> L56
            return
        L20:
            java.util.List<okhttp3.OkHttpClient> r2 = com.kwad.sdk.ranger.RangerHelper.aGQ     // Catch: java.lang.Throwable -> L56
            r2.add(r1)     // Catch: java.lang.Throwable -> L56
            java.lang.String r2 = "eventListener"
            java.lang.Object r4 = com.kwad.sdk.utils.s.f(r4, r2)     // Catch: java.lang.Throwable -> L56
            if (r4 == 0) goto L55
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L56
            java.lang.String r3 = "eventListener.getClass().getName():"
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L56
            java.lang.Class r3 = r4.getClass()     // Catch: java.lang.Throwable -> L56
            java.lang.String r3 = r3.getName()     // Catch: java.lang.Throwable -> L56
            r2.append(r3)     // Catch: java.lang.Throwable -> L56
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L56
            com.kwad.sdk.core.e.c.d(r0, r2)     // Catch: java.lang.Throwable -> L56
            com.kwad.sdk.ranger.c r2 = new com.kwad.sdk.ranger.c     // Catch: java.lang.Throwable -> L56
            com.kwad.sdk.ranger.RangerHelper$3 r3 = new com.kwad.sdk.ranger.RangerHelper$3     // Catch: java.lang.Throwable -> L56
            r3.<init>()     // Catch: java.lang.Throwable -> L56
            r2.<init>(r4, r3)     // Catch: java.lang.Throwable -> L56
            java.lang.String r4 = "eventListenerFactory"
            com.kwad.sdk.utils.s.a(r1, r4, r2)     // Catch: java.lang.Throwable -> L56
        L55:
            return
        L56:
            r4 = move-exception
            java.lang.String r4 = android.util.Log.getStackTraceString(r4)
            com.kwad.sdk.core.e.c.e(r0, r4)
            return
    }

    static void n(java.lang.Object r0) {
            m(r0)
            return
    }

    public static void replaceInternal() {
            boolean r0 = com.kwad.sdk.ranger.RangerHelper.aGN
            if (r0 == 0) goto L5
            return
        L5:
            boolean r0 = Ht()
            r1 = 1
            if (r0 != 0) goto Lf
            com.kwad.sdk.ranger.RangerHelper.aGN = r1
            return
        Lf:
            java.lang.Class<okhttp3.internal.Internal> r0 = okhttp3.internal.Internal.class
            java.lang.String r2 = "instance"
            java.lang.Object r0 = com.kwad.sdk.utils.s.c(r0, r2)
            okhttp3.internal.Internal r0 = (okhttp3.internal.Internal) r0
            if (r0 != 0) goto L1e
            com.kwad.sdk.ranger.RangerHelper.aGN = r1
            return
        L1e:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "internal:"
            r3.<init>(r4)
            java.lang.Class r4 = r0.getClass()
            java.lang.String r4 = r4.getName()
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "Ranger_Helper"
            com.kwad.sdk.core.e.c.d(r4, r3)
            com.kwad.sdk.ranger.RangerHelper$1 r3 = new com.kwad.sdk.ranger.RangerHelper$1     // Catch: java.lang.Throwable -> L44
            r3.<init>(r0)     // Catch: java.lang.Throwable -> L44
            com.kwad.sdk.utils.s.a(r0, r2, r3)     // Catch: java.lang.Throwable -> L44
            com.kwad.sdk.ranger.RangerHelper.aGN = r1     // Catch: java.lang.Throwable -> L44
            return
        L44:
            r0 = move-exception
            com.kwad.sdk.ranger.RangerHelper.aGN = r1
            java.lang.String r0 = android.util.Log.getStackTraceString(r0)
            com.kwad.sdk.core.e.c.e(r4, r0)
            return
    }
}
