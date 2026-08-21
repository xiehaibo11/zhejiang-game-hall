package com.kwad.components.core.webview.b.d;

public final class a {
    private final java.util.List<java.lang.Integer> XA;
    private java.util.List<java.lang.Integer> Xz;



    static class a {
        private static final com.kwad.components.core.webview.b.d.a XE = null;

        static {
                com.kwad.components.core.webview.b.d.a r0 = new com.kwad.components.core.webview.b.d.a
                r1 = 0
                r0.<init>(r1)
                com.kwad.components.core.webview.b.d.a.a.XE = r0
                return
        }

        static com.kwad.components.core.webview.b.d.a se() {
                com.kwad.components.core.webview.b.d.a r0 = com.kwad.components.core.webview.b.d.a.a.XE
                return r0
        }
    }

    private a() {
            r3 = this;
            r3.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r3.Xz = r0
            r0 = 6
            java.lang.Integer[] r0 = new java.lang.Integer[r0]
            r1 = 123(0x7b, float:1.72E-43)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2 = 0
            r0[r2] = r1
            r1 = 184(0xb8, float:2.58E-43)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2 = 1
            r0[r2] = r1
            r1 = 185(0xb9, float:2.59E-43)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2 = 2
            r0[r2] = r1
            r1 = 190(0xbe, float:2.66E-43)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2 = 3
            r0[r2] = r1
            r1 = 199(0xc7, float:2.79E-43)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2 = 4
            r0[r2] = r1
            r1 = 200(0xc8, float:2.8E-43)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2 = 5
            r0[r2] = r1
            java.util.List r0 = java.util.Arrays.asList(r0)
            r3.XA = r0
            return
    }

    a(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    static void a(com.kwad.components.core.webview.b.d.a r0, int r1) {
            r0.aQ(r1)
            return
    }

    static void a(com.kwad.components.core.webview.b.d.a r0, java.lang.String r1) {
            r0.aP(r1)
            return
    }

    private void aP(java.lang.String r3) {
            r2 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> Lc
            r0.<init>(r3)     // Catch: java.lang.Exception -> Lc
            java.lang.String r3 = "elementType"
            int r3 = r0.optInt(r3)     // Catch: java.lang.Exception -> Lc
            goto Lf
        Lc:
            r3 = 2147483647(0x7fffffff, float:NaN)
        Lf:
            java.util.List<java.lang.Integer> r0 = r2.XA
            java.lang.Integer r1 = java.lang.Integer.valueOf(r3)
            boolean r0 = r0.contains(r1)
            if (r0 != 0) goto L1c
            return
        L1c:
            java.util.List<java.lang.Integer> r0 = r2.Xz
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r0.add(r3)
            return
    }

    private void aQ(int r3) {
            r2 = this;
            java.util.List<java.lang.Integer> r0 = r2.XA
            java.lang.Integer r1 = java.lang.Integer.valueOf(r3)
            boolean r0 = r0.contains(r1)
            if (r0 != 0) goto Ld
            return
        Ld:
            java.util.List<java.lang.Integer> r0 = r2.Xz
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r0.add(r3)
            return
    }

    public static com.kwad.components.core.webview.b.d.a sb() {
            com.kwad.components.core.webview.b.d.a r0 = com.kwad.components.core.webview.b.d.a.a.se()
            return r0
    }

    public final void aQ(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L7
            return
        L7:
            com.kwad.components.core.webview.b.d.a$2 r0 = new com.kwad.components.core.webview.b.d.a$2
            r0.<init>(r1, r2)
            com.kwad.sdk.utils.bj.runOnUiThread(r0)
            return
    }

    public final void aR(int r2) {
            r1 = this;
            com.kwad.components.core.webview.b.d.a$1 r0 = new com.kwad.components.core.webview.b.d.a$1
            r0.<init>(r1, r2)
            com.kwad.sdk.utils.bj.runOnUiThread(r0)
            return
    }

    public final java.util.List<java.lang.Integer> sc() {
            r1 = this;
            java.util.List<java.lang.Integer> r0 = r1.Xz
            return r0
    }

    public final void sd() {
            r1 = this;
            java.util.List<java.lang.Integer> r0 = r1.Xz
            r0.clear()
            return
    }
}
