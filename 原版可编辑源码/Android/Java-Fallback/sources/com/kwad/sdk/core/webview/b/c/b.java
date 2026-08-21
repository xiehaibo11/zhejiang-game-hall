package com.kwad.sdk.core.webview.b.c;

public final class b {
    public static final java.util.Map<java.lang.String, org.json.JSONObject> ayQ = null;
    public static boolean ayR;

    public static class a {
        public java.lang.String msg;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.kwad.sdk.core.webview.b.c.b.ayQ = r0
            r0 = 1
            com.kwad.sdk.core.webview.b.c.b.ayR = r0
            return
    }

    public static void a(com.kwad.sdk.h.a.b r4, int r5) {
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r4.FC()
            long r0 = r0 - r2
            com.kwad.sdk.commercial.model.HybridLoadMsg r2 = new com.kwad.sdk.commercial.model.HybridLoadMsg
            r2.<init>()
            java.lang.String r3 = r4.aCb
            com.kwad.sdk.commercial.model.HybridLoadMsg r2 = r2.setSceneId(r3)
            java.lang.String r3 = r4.version
            com.kwad.sdk.commercial.model.HybridLoadMsg r2 = r2.setH5Version(r3)
            int r3 = r4.loadType
            com.kwad.sdk.commercial.model.HybridLoadMsg r2 = r2.setLoadType(r3)
            com.kwad.sdk.commercial.model.HybridLoadMsg r5 = r2.setState(r5)
            java.lang.String r4 = r4.packageUrl
            com.kwad.sdk.commercial.model.HybridLoadMsg r4 = r5.setPackageUrl(r4)
            java.lang.String r5 = java.lang.String.valueOf(r0)
            com.kwad.sdk.commercial.model.HybridLoadMsg r4 = r4.setInterval(r5)
            java.lang.String r5 = "ad_client_apm_log"
            com.kwad.sdk.core.report.KSLoggerReporter.a(r5, r4)
            return
    }

    public static void a(com.kwad.sdk.h.a.b r4, int r5, int r6, java.lang.String r7) {
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r4.FC()
            long r0 = r0 - r2
            com.kwad.sdk.commercial.model.HybridLoadMsg r5 = new com.kwad.sdk.commercial.model.HybridLoadMsg
            r5.<init>()
            java.lang.String r2 = r4.aCb
            com.kwad.sdk.commercial.model.HybridLoadMsg r5 = r5.setSceneId(r2)
            java.lang.String r2 = r4.version
            com.kwad.sdk.commercial.model.HybridLoadMsg r5 = r5.setH5Version(r2)
            int r2 = r4.loadType
            com.kwad.sdk.commercial.model.HybridLoadMsg r5 = r5.setLoadType(r2)
            r2 = 0
            com.kwad.sdk.commercial.model.HybridLoadMsg r5 = r5.setState(r2)
            java.lang.String r4 = r4.packageUrl
            com.kwad.sdk.commercial.model.HybridLoadMsg r4 = r5.setPackageUrl(r4)
            com.kwad.sdk.commercial.model.HybridLoadMsg r4 = r4.setFailState(r6)
            java.lang.String r5 = java.lang.String.valueOf(r0)
            com.kwad.sdk.commercial.model.HybridLoadMsg r4 = r4.setInterval(r5)
            com.kwad.sdk.commercial.model.HybridLoadMsg r4 = r4.setFailReason(r7)
            java.lang.String r5 = "ad_client_error_log"
            com.kwad.sdk.core.report.KSLoggerReporter.a(r5, r4)
            return
    }

    private static void a(java.lang.String r7, java.lang.String r8, int r9, java.lang.String r10) {
            java.util.Map<java.lang.String, org.json.JSONObject> r0 = com.kwad.sdk.core.webview.b.c.b.ayQ
            java.lang.Object r0 = r0.get(r8)
            org.json.JSONObject r0 = (org.json.JSONObject) r0
            if (r0 != 0) goto Ld
            r1 = -3
            goto L2f
        Ld:
            java.lang.String r1 = "c_loadUrl"
            long r1 = r0.optLong(r1)
            r3 = 0
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 > 0) goto L1c
            r1 = -2
            goto L2f
        L1c:
            long r5 = java.lang.System.currentTimeMillis()
            long r1 = r5 - r1
            r5 = 100000(0x186a0, double:4.94066E-319)
            int r5 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r5 > 0) goto L2d
            int r3 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r3 >= 0) goto L2f
        L2d:
            r1 = -1
        L2f:
            r3 = 2
            if (r9 != r3) goto L35
            java.lang.String r3 = "ad_client_error_log"
            goto L37
        L35:
            java.lang.String r3 = "ad_client_apm_log"
        L37:
            if (r0 == 0) goto L3e
            java.lang.String r0 = r0.toString()
            goto L40
        L3e:
            java.lang.String r0 = ""
        L40:
            com.kwad.sdk.commercial.model.WebViewLoadMsg r4 = new com.kwad.sdk.commercial.model.WebViewLoadMsg
            r4.<init>()
            com.kwad.sdk.commercial.model.WebViewLoadMsg r7 = r4.setUrl(r7)
            com.kwad.sdk.commercial.model.WebViewLoadMsg r7 = r7.setState(r9)
            com.kwad.sdk.commercial.model.WebViewLoadMsg r7 = r7.setCostTime(r0)
            java.lang.String r9 = java.lang.String.valueOf(r1)
            com.kwad.sdk.commercial.model.WebViewLoadMsg r7 = r7.setInterval(r9)
            com.kwad.sdk.commercial.model.WebViewLoadMsg r7 = r7.setFailReason(r10)
            com.kwad.sdk.core.report.KSLoggerReporter.a(r3, r7)
            eh(r8)
            return
    }

    public static void a(java.lang.String r3, java.lang.String r4, int r5, java.lang.String r6, long r7) {
            r0 = 2
            if (r5 != r0) goto L6
            java.lang.String r0 = "ad_client_error_log"
            goto L8
        L6:
            java.lang.String r0 = "ad_client_apm_log"
        L8:
            r1 = 60000(0xea60, double:2.9644E-319)
            int r1 = (r7 > r1 ? 1 : (r7 == r1 ? 0 : -1))
            if (r1 > 0) goto L15
            r1 = 0
            int r1 = (r7 > r1 ? 1 : (r7 == r1 ? 0 : -1))
            if (r1 >= 0) goto L17
        L15:
            r7 = -1
        L17:
            com.kwad.sdk.commercial.model.HybridLoadMsg r1 = new com.kwad.sdk.commercial.model.HybridLoadMsg
            r1.<init>()
            com.kwad.sdk.commercial.model.HybridLoadMsg r4 = r1.setSceneId(r4)
            com.kwad.sdk.commercial.model.HybridLoadMsg r3 = r4.setUrl(r3)
            com.kwad.sdk.commercial.model.HybridLoadMsg r3 = r3.setState(r5)
            java.lang.String r4 = java.lang.String.valueOf(r7)
            com.kwad.sdk.commercial.model.HybridLoadMsg r3 = r3.setInterval(r4)
            com.kwad.sdk.commercial.model.HybridLoadMsg r3 = r3.setFailReason(r6)
            com.kwad.sdk.core.report.KSLoggerReporter.b(r0, r3)
            return
    }

    public static void a(java.lang.String r5, java.lang.String r6, java.lang.String r7, java.lang.String r8) {
            java.lang.String r0 = ""
            org.json.JSONObject r1 = eg(r6)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "c_"
            r2.<init>(r3)
            r2.append(r7)
            java.lang.String r2 = r2.toString()
            long r3 = java.lang.System.currentTimeMillis()
            com.kwad.sdk.utils.t.putValue(r1, r2, r3)
            java.lang.String r2 = "pageStatus"
            boolean r7 = r7.equals(r2)
            if (r7 == 0) goto L85
            boolean r7 = android.text.TextUtils.isEmpty(r8)
            if (r7 != 0) goto L85
            org.json.JSONObject r7 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> L79
            r7.<init>(r8)     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> L79
            java.lang.String r8 = "status"
            int r8 = r7.optInt(r8)     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> L79
            java.lang.String r2 = "errorMsg"
            java.lang.String r2 = r7.optString(r2, r0)     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> L79
            java.lang.String r3 = "webViewCostParams"
            java.lang.String r7 = r7.optString(r3, r0)     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> L79
            boolean r0 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> L79
            if (r0 != 0) goto L63
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> L79
            r0.<init>(r7)     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> L79
            java.util.Iterator r7 = r0.keys()     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> L79
        L4f:
            boolean r3 = r7.hasNext()     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> L79
            if (r3 == 0) goto L63
            java.lang.Object r3 = r7.next()     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> L79
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> L79
            java.lang.Object r4 = r0.opt(r3)     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> L79
            r1.put(r3, r4)     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> L79
            goto L4f
        L63:
            boolean r7 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> L79
            if (r7 != 0) goto L73
            r7 = 1
            if (r8 != r7) goto L70
            ac(r5, r6)     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> L79
            goto L73
        L70:
            ad(r5, r2)     // Catch: java.lang.Throwable -> L77 java.lang.Exception -> L79
        L73:
            eh(r6)
            return
        L77:
            r5 = move-exception
            goto L81
        L79:
            r5 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r5)     // Catch: java.lang.Throwable -> L77
            eh(r6)
            return
        L81:
            eh(r6)
            throw r5
        L85:
            return
    }

    public static void ab(java.lang.String r2, java.lang.String r3) {
            org.json.JSONObject r2 = eg(r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "c_"
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            long r0 = java.lang.System.currentTimeMillis()
            com.kwad.sdk.utils.t.putValue(r2, r3, r0)
            return
    }

    private static void ac(java.lang.String r2, java.lang.String r3) {
            r0 = 1
            java.lang.String r1 = ""
            a(r2, r3, r0, r1)
            return
    }

    public static void ad(java.lang.String r2, java.lang.String r3) {
            java.lang.String r0 = ""
            r1 = 2
            a(r2, r0, r1, r3)
            return
    }

    public static void b(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            java.lang.String r0 = "/"
            boolean r1 = r4.contains(r0)
            if (r1 == 0) goto L12
            int r0 = r4.lastIndexOf(r0)
            int r0 = r0 + 1
            java.lang.String r4 = r4.substring(r0)
        L12:
            org.json.JSONObject r2 = eg(r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "c_responseStart_"
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r3 = "_"
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = r0.toString()
            long r0 = java.lang.System.currentTimeMillis()
            com.kwad.sdk.utils.t.putValue(r2, r3, r0)
            return
    }

    public static void c(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            java.lang.String r0 = "/"
            boolean r1 = r4.contains(r0)
            if (r1 == 0) goto L12
            int r0 = r4.lastIndexOf(r0)
            int r0 = r0 + 1
            java.lang.String r4 = r4.substring(r0)
        L12:
            org.json.JSONObject r2 = eg(r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "c_responseEnd_"
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r3 = "_"
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = r0.toString()
            long r0 = java.lang.System.currentTimeMillis()
            com.kwad.sdk.utils.t.putValue(r2, r3, r0)
            return
    }

    private static org.json.JSONObject eg(java.lang.String r2) {
            java.util.Map<java.lang.String, org.json.JSONObject> r0 = com.kwad.sdk.core.webview.b.c.b.ayQ
            java.lang.Object r0 = r0.get(r2)
            org.json.JSONObject r0 = (org.json.JSONObject) r0
            if (r0 != 0) goto L14
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.util.Map<java.lang.String, org.json.JSONObject> r1 = com.kwad.sdk.core.webview.b.c.b.ayQ
            r1.put(r2, r0)
        L14:
            return r0
    }

    private static void eh(java.lang.String r1) {
            java.util.Map<java.lang.String, org.json.JSONObject> r0 = com.kwad.sdk.core.webview.b.c.b.ayQ
            r0.remove(r1)
            return
    }

    public static void ei(java.lang.String r5) {
            org.json.JSONObject r5 = eg(r5)
            com.kwad.sdk.core.webview.b.a r0 = com.kwad.sdk.core.webview.b.a.Ee()
            long r0 = r0.Ef()
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 > 0) goto L15
            r0 = -1
            goto L1b
        L15:
            long r2 = java.lang.System.currentTimeMillis()
            long r0 = r2 - r0
        L1b:
            long r2 = java.lang.System.currentTimeMillis()
            java.lang.String r4 = "c_loadUrl"
            com.kwad.sdk.utils.t.putValue(r5, r4, r2)
            java.lang.String r2 = "c_init_interval"
            com.kwad.sdk.utils.t.putValue(r5, r2, r0)
            boolean r0 = com.kwad.sdk.core.webview.b.c.b.ayR
            if (r0 == 0) goto L2f
            r0 = 1
            goto L30
        L2f:
            r0 = 2
        L30:
            java.lang.String r1 = "c_init_state"
            com.kwad.sdk.utils.t.putValue(r5, r1, r0)
            r5 = 0
            com.kwad.sdk.core.webview.b.c.b.ayR = r5
            return
    }
}
