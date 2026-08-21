package com.kwad.components.core.webview.jshandler;

public class o implements com.kwad.sdk.core.webview.c.a {
    protected final com.kwad.sdk.core.webview.b TL;
    private int TM;
    private boolean TN;
    private final boolean TO;
    private java.util.List<com.kwad.components.core.e.d.c> TP;
    private com.kwad.sdk.core.webview.d.a.a cH;
    private android.content.DialogInterface.OnDismissListener xR;



    public o(com.kwad.sdk.core.webview.b r8, com.kwad.components.core.e.d.c r9, com.kwad.sdk.core.webview.d.a.a r10) {
            r7 = this;
            r4 = 0
            r5 = 0
            r6 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    public o(com.kwad.sdk.core.webview.b r8, com.kwad.components.core.e.d.c r9, com.kwad.sdk.core.webview.d.a.a r10, int r11) {
            r7 = this;
            r4 = 0
            r5 = 1
            r6 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    public o(com.kwad.sdk.core.webview.b r8, com.kwad.components.core.e.d.c r9, com.kwad.sdk.core.webview.d.a.a r10, int r11, boolean r12) {
            r7 = this;
            r3 = 0
            r4 = 0
            r5 = 2
            r0 = r7
            r1 = r8
            r2 = r9
            r6 = r12
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    public o(com.kwad.sdk.core.webview.b r8, com.kwad.components.core.e.d.c r9, com.kwad.sdk.core.webview.d.a.a r10, android.content.DialogInterface.OnDismissListener r11) {
            r7 = this;
            r4 = 0
            r5 = 0
            r6 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r0.<init>(r1, r2, r3, r4, r5, r6)
            r7.xR = r11
            return
    }

    public o(com.kwad.sdk.core.webview.b r2, com.kwad.components.core.e.d.c r3, com.kwad.sdk.core.webview.d.a.a r4, boolean r5, int r6, boolean r7) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.TN = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.TP = r0
            r1.TN = r5
            r1.TL = r2
            r1.TM = r6
            if (r3 == 0) goto L1e
            r2 = 1
            r3.ar(r2)
            java.util.List<com.kwad.components.core.e.d.c> r2 = r1.TP
            r2.add(r3)
        L1e:
            r1.cH = r4
            r1.TO = r7
            return
    }

    public o(com.kwad.sdk.core.webview.b r8, java.util.List<com.kwad.components.core.e.d.c> r9, com.kwad.sdk.core.webview.d.a.a r10) {
            r7 = this;
            r2 = 0
            r4 = 0
            r5 = 0
            r6 = 0
            r0 = r7
            r1 = r8
            r3 = r10
            r0.<init>(r1, r2, r3, r4, r5, r6)
            if (r9 == 0) goto L11
            java.util.List<com.kwad.components.core.e.d.c> r8 = r7.TP
            r8.addAll(r9)
        L11:
            return
    }

    private static boolean Y(com.kwad.sdk.core.response.model.AdTemplate r1) {
            int r1 = com.kwad.sdk.core.response.b.d.cb(r1)
            r0 = 13
            if (r1 != r0) goto La
            r1 = 1
            return r1
        La:
            r1 = 0
            return r1
    }

    static android.content.DialogInterface.OnDismissListener a(com.kwad.components.core.webview.jshandler.o r0) {
            android.content.DialogInterface$OnDismissListener r0 = r0.xR
            return r0
    }

    static boolean a(com.kwad.components.core.webview.jshandler.o r0, com.kwad.sdk.core.webview.d.b.a r1) {
            boolean r0 = b(r1)
            return r0
    }

    static com.kwad.sdk.core.webview.d.a.a b(com.kwad.components.core.webview.jshandler.o r0) {
            com.kwad.sdk.core.webview.d.a.a r0 = r0.cH
            return r0
    }

    private static boolean b(com.kwad.sdk.core.webview.d.b.a r1) {
            int r1 = r1.UZ
            r0 = 1
            if (r1 != r0) goto L6
            return r0
        L6:
            r1 = 0
            return r1
    }

    static int c(com.kwad.components.core.webview.jshandler.o r0) {
            int r0 = r0.TM
            return r0
    }

    static boolean d(com.kwad.components.core.webview.jshandler.o r0) {
            boolean r0 = r0.TO
            return r0
    }

    static boolean e(com.kwad.components.core.webview.jshandler.o r0) {
            boolean r0 = r0.TN
            return r0
    }

    protected final com.kwad.components.core.e.d.c C(long r6) {
            r5 = this;
            java.util.List<com.kwad.components.core.e.d.c> r0 = r5.TP
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            r2 = 0
            int r2 = (r6 > r2 ? 1 : (r6 == r2 ? 0 : -1))
            if (r2 >= 0) goto L1d
            int r0 = r0.size()
            r2 = 1
            if (r0 != r2) goto L1d
            java.util.List<com.kwad.components.core.e.d.c> r6 = r5.TP
            r7 = 0
            java.lang.Object r6 = r6.get(r7)
            com.kwad.components.core.e.d.c r6 = (com.kwad.components.core.e.d.c) r6
            return r6
        L1d:
            java.util.List<com.kwad.components.core.e.d.c> r0 = r5.TP
            java.util.Iterator r0 = r0.iterator()
        L23:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L3c
            java.lang.Object r2 = r0.next()
            com.kwad.components.core.e.d.c r2 = (com.kwad.components.core.e.d.c) r2
            com.kwad.sdk.core.response.model.AdTemplate r3 = r2.nE()
            long r3 = com.kwad.sdk.core.response.b.d.cq(r3)
            int r3 = (r3 > r6 ? 1 : (r3 == r6 ? 0 : -1))
            if (r3 != 0) goto L23
            return r2
        L3c:
            return r1
    }

    protected void J(int r1) {
            r0 = this;
            return
    }

    protected com.kwad.sdk.core.report.z.b a(com.kwad.sdk.core.webview.d.b.a r6, com.kwad.sdk.core.response.model.AdTemplate r7) {
            r5 = this;
            com.kwad.sdk.core.report.j r0 = new com.kwad.sdk.core.report.j
            r0.<init>()
            com.kwad.sdk.core.webview.d.b.c r1 = r6.Va
            if (r1 == 0) goto L1a
            com.kwad.sdk.core.webview.d.b.c r1 = r6.Va
            java.lang.String r1 = r1.UP
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L1a
            com.kwad.sdk.core.webview.d.b.c r1 = r6.Va
            java.lang.String r1 = r1.UP
            r0.dt(r1)
        L1a:
            com.kwad.sdk.core.webview.d.b.c r1 = r6.Va
            if (r1 == 0) goto L2b
            com.kwad.sdk.core.webview.d.b.c r1 = r6.Va
            int r1 = r1.aze
            if (r1 == 0) goto L2b
            com.kwad.sdk.core.webview.d.b.c r1 = r6.Va
            int r1 = r1.aze
            r0.cp(r1)
        L2b:
            boolean r1 = Y(r7)
            if (r1 == 0) goto L75
            com.kwad.sdk.core.webview.d.b.c r1 = r6.Va
            if (r1 == 0) goto L75
            com.kwad.sdk.core.webview.d.b.c r1 = r6.Va
            com.kwad.sdk.core.webview.d.b.b r1 = r1.azf
            if (r1 == 0) goto L75
            com.kwad.sdk.utils.ac$a r1 = new com.kwad.sdk.utils.ac$a
            r1.<init>()
            com.kwad.sdk.core.webview.d.b.c r2 = r6.Va
            com.kwad.sdk.core.webview.d.b.b r2 = r2.azf
            double r2 = r2.x
            float r2 = (float) r2
            com.kwad.sdk.core.webview.d.b.c r3 = r6.Va
            com.kwad.sdk.core.webview.d.b.b r3 = r3.azf
            double r3 = r3.y
            float r3 = (float) r3
            r1.g(r2, r3)
            com.kwad.sdk.core.webview.d.b.c r2 = r6.Va
            com.kwad.sdk.core.webview.d.b.b r2 = r2.azf
            double r2 = r2.x
            float r2 = (float) r2
            com.kwad.sdk.core.webview.d.b.c r3 = r6.Va
            com.kwad.sdk.core.webview.d.b.b r3 = r3.azf
            double r3 = r3.y
            float r3 = (float) r3
            r1.f(r2, r3)
            com.kwad.sdk.core.webview.d.b.c r2 = r6.Va
            com.kwad.sdk.core.webview.d.b.b r2 = r2.azf
            int r2 = r2.width
            com.kwad.sdk.core.webview.d.b.c r6 = r6.Va
            com.kwad.sdk.core.webview.d.b.b r6 = r6.azf
            int r6 = r6.height
            r1.x(r2, r6)
            r0.c(r1)
            goto L82
        L75:
            com.kwad.sdk.core.webview.b r6 = r5.TL
            com.kwad.sdk.widget.e r6 = r6.aye
            if (r6 == 0) goto L82
            com.kwad.sdk.utils.ac$a r6 = r6.getTouchCoords()
            r0.c(r6)
        L82:
            r6 = 0
            r0.a(r7, r6, r6, r6)
            com.kwad.sdk.core.report.z$b r6 = r0.Ca()
            return r6
    }

    @Override
    public final void a(java.lang.String r3, com.kwad.sdk.core.webview.c.c r4) {
            r2 = this;
            com.kwad.sdk.core.webview.b r0 = r2.TL
            boolean r0 = r0.DY()
            if (r0 == 0) goto Lf
            r3 = -1
            java.lang.String r0 = "native adTemplate is null"
            r4.onError(r3, r0)
            return
        Lf:
            com.kwad.sdk.core.webview.d.b.a r0 = new com.kwad.sdk.core.webview.d.b.a
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1d
            r1.<init>(r3)     // Catch: org.json.JSONException -> L1d
            r0.parseJson(r1)     // Catch: org.json.JSONException -> L1d
            goto L21
        L1d:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r3)
        L21:
            com.kwad.sdk.core.webview.b r3 = r2.TL
            boolean r3 = r3.ayg
            if (r3 == 0) goto L30
            com.kwad.components.core.webview.jshandler.o$1 r3 = new com.kwad.components.core.webview.jshandler.o$1
            r3.<init>(r2, r0)
        L2c:
            com.kwad.sdk.utils.bj.runOnUiThread(r3)
            goto L3a
        L30:
            com.kwad.sdk.core.webview.d.a.a r3 = r2.cH
            if (r3 == 0) goto L3a
            com.kwad.components.core.webview.jshandler.o$2 r3 = new com.kwad.components.core.webview.jshandler.o$2
            r3.<init>(r2, r0)
            goto L2c
        L3a:
            r3 = 0
            r4.a(r3)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "clickAction"
            return r0
    }

    protected void jn() {
            r0 = this;
            return
    }

    @Override
    public final void onDestroy() {
            r1 = this;
            r0 = 0
            r1.cH = r0
            return
    }
}
