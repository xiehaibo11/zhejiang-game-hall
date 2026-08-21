package com.iab.omid.library.mmadbridge.internal;

public class g {
    private static com.iab.omid.library.mmadbridge.internal.g a;

    class a implements java.lang.Runnable {
        final android.webkit.WebView a;
        final java.lang.String b;

        a(com.iab.omid.library.mmadbridge.internal.g r1, android.webkit.WebView r2, java.lang.String r3) {
                r0 = this;
                r0.a = r2
                r0.b = r3
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r2 = this;
                android.webkit.WebView r0 = r2.a
                java.lang.String r1 = r2.b
                r0.loadUrl(r1)
                return
        }
    }

    static {
            com.iab.omid.library.mmadbridge.internal.g r0 = new com.iab.omid.library.mmadbridge.internal.g
            r0.<init>()
            com.iab.omid.library.mmadbridge.internal.g.a = r0
            return
    }

    private g() {
            r0 = this;
            r0.<init>()
            return
    }

    public static final com.iab.omid.library.mmadbridge.internal.g a() {
            com.iab.omid.library.mmadbridge.internal.g r0 = com.iab.omid.library.mmadbridge.internal.g.a
            return r0
    }

    public void a(android.webkit.WebView r3) {
            r2 = this;
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "finishSession"
            r2.a(r3, r1, r0)
            return
    }

    public void a(android.webkit.WebView r3, float r4) {
            r2 = this;
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.Float r4 = java.lang.Float.valueOf(r4)
            r1 = 0
            r0[r1] = r4
            java.lang.String r4 = "setDeviceVolume"
            r2.a(r3, r4, r0)
            return
    }

    public void a(android.webkit.WebView r3, com.iab.omid.library.mmadbridge.adsession.ErrorType r4, java.lang.String r5) {
            r2 = this;
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r4 = r4.toString()
            r1 = 0
            r0[r1] = r4
            r4 = 1
            r0[r4] = r5
            java.lang.String r4 = "error"
            r2.a(r3, r4, r0)
            return
    }

    public void a(android.webkit.WebView r3, java.lang.String r4) {
            r2 = this;
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r4
            java.lang.String r4 = "setNativeViewHierarchy"
            r2.a(r3, r4, r0)
            return
    }

    public void a(android.webkit.WebView r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            if (r4 == 0) goto L19
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L19
            java.lang.String r0 = "(function() {this.omidVerificationProperties = this.omidVerificationProperties || {};Object.defineProperty(this.omidVerificationProperties, 'injectionId', {get: function() {var currentScript = document && document.currentScript;return currentScript && currentScript.getAttribute('data-injection-id');}, configurable: true});var script = document.createElement('script');script.setAttribute(\"type\",\"text/javascript\");script.setAttribute(\"src\",\"%SCRIPT_SRC%\");script.setAttribute(\"data-injection-id\",\"%INJECTION_ID%\");document.body.appendChild(script);})();"
            java.lang.String r1 = "%SCRIPT_SRC%"
            java.lang.String r4 = r0.replace(r1, r4)
            java.lang.String r0 = "%INJECTION_ID%"
            java.lang.String r4 = r4.replace(r0, r5)
            r2.c(r3, r4)
        L19:
            return
    }

    public void a(android.webkit.WebView r5, java.lang.String r6, org.json.JSONObject r7) {
            r4 = this;
            java.lang.String r0 = "publishMediaEvent"
            r1 = 0
            r2 = 1
            if (r7 == 0) goto L11
            r3 = 2
            java.lang.Object[] r3 = new java.lang.Object[r3]
            r3[r1] = r6
            r3[r2] = r7
            r4.a(r5, r0, r3)
            goto L18
        L11:
            java.lang.Object[] r7 = new java.lang.Object[r2]
            r7[r1] = r6
            r4.a(r5, r0, r7)
        L18:
            return
    }

    public void a(android.webkit.WebView r3, java.lang.String r4, org.json.JSONObject r5, org.json.JSONObject r6, org.json.JSONObject r7) {
            r2 = this;
            r0 = 4
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r4
            r4 = 1
            r0[r4] = r5
            r4 = 2
            r0[r4] = r6
            r4 = 3
            r0[r4] = r7
            java.lang.String r4 = "startSession"
            r2.a(r3, r4, r0)
            return
    }

    void a(android.webkit.WebView r3, java.lang.String r4, java.lang.Object... r5) {
            r2 = this;
            if (r3 == 0) goto L22
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r1 = 128(0x80, float:1.8E-43)
            r0.<init>(r1)
            java.lang.String r1 = "javascript: if(window.omidBridge!==undefined){omidBridge."
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = "("
            r0.append(r4)
            r2.a(r0, r5)
            java.lang.String r4 = ")}"
            r0.append(r4)
            r2.a(r3, r0)
            goto L36
        L22:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r5 = "The WebView is null for "
            r3.append(r5)
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            com.iab.omid.library.mmadbridge.utils.d.a(r3)
        L36:
            return
    }

    void a(android.webkit.WebView r4, java.lang.StringBuilder r5) {
            r3 = this;
            java.lang.String r5 = r5.toString()
            android.os.Handler r0 = r4.getHandler()
            if (r0 == 0) goto L1e
            android.os.Looper r1 = android.os.Looper.myLooper()
            android.os.Looper r2 = r0.getLooper()
            if (r1 != r2) goto L15
            goto L1e
        L15:
            com.iab.omid.library.mmadbridge.internal.g$a r1 = new com.iab.omid.library.mmadbridge.internal.g$a
            r1.<init>(r3, r4, r5)
            r0.post(r1)
            goto L21
        L1e:
            r4.loadUrl(r5)
        L21:
            return
    }

    public void a(android.webkit.WebView r3, org.json.JSONObject r4) {
            r2 = this;
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r4
            java.lang.String r4 = "init"
            r2.a(r3, r4, r0)
            return
    }

    void a(java.lang.StringBuilder r6, java.lang.Object[] r7) {
            r5 = this;
            if (r7 == 0) goto L45
            int r0 = r7.length
            if (r0 <= 0) goto L45
            int r0 = r7.length
            r1 = 0
        L7:
            if (r1 >= r0) goto L3c
            r2 = r7[r1]
            r3 = 34
            if (r2 != 0) goto L16
            r6.append(r3)
        L12:
            r6.append(r3)
            goto L34
        L16:
            boolean r4 = r2 instanceof java.lang.String
            if (r4 == 0) goto L31
            java.lang.String r2 = r2.toString()
            java.lang.String r4 = "{"
            boolean r4 = r2.startsWith(r4)
            if (r4 == 0) goto L2a
            r6.append(r2)
            goto L34
        L2a:
            r6.append(r3)
            r6.append(r2)
            goto L12
        L31:
            r6.append(r2)
        L34:
            java.lang.String r2 = ","
            r6.append(r2)
            int r1 = r1 + 1
            goto L7
        L3c:
            int r7 = r6.length()
            int r7 = r7 + (-1)
            r6.setLength(r7)
        L45:
            return
    }

    public void b(android.webkit.WebView r3) {
            r2 = this;
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "publishImpressionEvent"
            r2.a(r3, r1, r0)
            return
    }

    public void b(android.webkit.WebView r3, java.lang.String r4) {
            r2 = this;
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r4
            java.lang.String r4 = "setState"
            r2.a(r3, r4, r0)
            return
    }

    public void b(android.webkit.WebView r3, org.json.JSONObject r4) {
            r2 = this;
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r4
            java.lang.String r4 = "publishLoadedEvent"
            r2.a(r3, r4, r0)
            return
    }

    public void c(android.webkit.WebView r3) {
            r2 = this;
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "publishLoadedEvent"
            r2.a(r3, r1, r0)
            return
    }

    public void c(android.webkit.WebView r3, org.json.JSONObject r4) {
            r2 = this;
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r4
            java.lang.String r4 = "setLastActivity"
            r2.a(r3, r4, r0)
            return
    }

    public boolean c(android.webkit.WebView r3, java.lang.String r4) {
            r2 = this;
            if (r3 == 0) goto L1e
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L1e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "javascript: "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r3.loadUrl(r4)
            r3 = 1
            return r3
        L1e:
            r3 = 0
            return r3
    }
}
