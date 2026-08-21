package com.kwad.sdk.ranger;

public class e {
    public static final java.lang.String TAG = null;


    static {
            java.lang.Class<com.kwad.sdk.ranger.e> r0 = com.kwad.sdk.ranger.e.class
            java.lang.String r0 = r0.getSimpleName()
            com.kwad.sdk.ranger.e.TAG = r0
            return
    }

    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.ranger.d r1) {
            com.kwad.sdk.ranger.a.a(r1)     // Catch: java.lang.Throwable -> L4
            return
        L4:
            r1 = move-exception
            java.lang.String r0 = com.kwad.sdk.ranger.e.TAG
            java.lang.String r1 = android.util.Log.getStackTraceString(r1)
            com.kwad.sdk.core.e.c.e(r0, r1)
            return
    }

    public static void d(com.kwad.sdk.ranger.d r4) {
            java.util.Random r0 = new java.util.Random
            r0.<init>()
            float r0 = r0.nextFloat()
            double r0 = (double) r0
            double r2 = r4.aGJ
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 < 0) goto L2b
            java.lang.String r0 = com.kwad.sdk.ranger.e.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "config.sampleRate："
            r1.<init>(r2)
            double r2 = r4.aGJ
            r1.append(r2)
            java.lang.String r4 = " return"
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            com.kwad.sdk.core.e.c.d(r0, r4)
            return
        L2b:
            boolean r0 = r4.Hq()
            if (r0 == 0) goto L34
            e(r4)
        L34:
            boolean r0 = r4.Hr()
            if (r0 == 0) goto L3d
            a(r4)
        L3d:
            boolean r0 = r4.Hs()
            if (r0 == 0) goto L46
            f(r4)
        L46:
            return
    }

    public static void dG(java.lang.String r3) {
            com.kwad.sdk.ranger.e$1 r0 = new com.kwad.sdk.ranger.e$1
            r0.<init>(r3)
            java.util.concurrent.TimeUnit r3 = java.util.concurrent.TimeUnit.SECONDS
            r1 = 0
            com.kwad.sdk.utils.g.schedule(r0, r1, r3)
            return
    }

    private static void e(com.kwad.sdk.ranger.d r1) {
            java.util.List<java.lang.String> r0 = r1.aGG
            if (r0 == 0) goto L1c
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto Lb
            goto L1c
        Lb:
            com.kwad.sdk.ranger.RangerHelper.c(r1)     // Catch: java.lang.Throwable -> L12
            com.kwad.sdk.ranger.RangerHelper.replaceInternal()     // Catch: java.lang.Throwable -> L12
            return
        L12:
            r1 = move-exception
            java.lang.String r0 = com.kwad.sdk.ranger.e.TAG
            java.lang.String r1 = android.util.Log.getStackTraceString(r1)
            com.kwad.sdk.core.e.c.e(r0, r1)
        L1c:
            return
    }

    private static void f(com.kwad.sdk.ranger.d r1) {
            com.kwad.sdk.ranger.b r0 = com.kwad.sdk.ranger.b.Hn()
            r0.b(r1)
            return
    }

    public static com.kwad.sdk.ranger.d fm(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L16
            r0.<init>(r2)     // Catch: java.lang.Exception -> L16
            com.kwad.sdk.ranger.d r2 = new com.kwad.sdk.ranger.d     // Catch: java.lang.Exception -> L16
            r2.<init>()     // Catch: java.lang.Exception -> L16
            r2.parseJson(r0)     // Catch: java.lang.Exception -> L16
            return r2
        L16:
            r2 = move-exception
            java.lang.String r0 = com.kwad.sdk.ranger.e.TAG
            com.kwad.sdk.core.e.c.w(r0, r2)
            return r1
    }
}
