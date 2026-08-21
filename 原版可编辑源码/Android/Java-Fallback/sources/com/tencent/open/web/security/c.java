package com.tencent.open.web.security;

public class c extends com.tencent.open.b.a {
    private java.lang.String d;

    public c(android.webkit.WebView r1, long r2, java.lang.String r4, java.lang.String r5) {
            r0 = this;
            r0.<init>(r1, r2, r4)
            r0.d = r5
            return
    }

    private void b(java.lang.String r4) {
            r3 = this;
            java.lang.ref.WeakReference<android.webkit.WebView> r0 = r3.a
            java.lang.Object r0 = r0.get()
            android.webkit.WebView r0 = (android.webkit.WebView) r0
            if (r0 == 0) goto L4f
            java.lang.StringBuffer r1 = new java.lang.StringBuffer
            java.lang.String r2 = "javascript:"
            r1.<init>(r2)
            java.lang.String r2 = "if(!!"
            r1.append(r2)
            java.lang.String r2 = r3.d
            r1.append(r2)
            java.lang.String r2 = "){"
            r1.append(r2)
            java.lang.String r2 = r3.d
            r1.append(r2)
            java.lang.String r2 = "("
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = ")}"
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "-->callback, callback: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "openSDK_LOG.SecureJsListener"
            com.tencent.open.log.SLog.v(r2, r1)
            r0.loadUrl(r4)
        L4f:
            return
    }

    @Override
    public void a() {
            r2 = this;
            java.lang.String r0 = "openSDK_LOG.SecureJsListener"
            java.lang.String r1 = "-->onNoMatchMethod..."
            com.tencent.open.log.SLog.d(r0, r1)
            return
    }

    @Override
    public void a(java.lang.Object r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "-->onComplete, result: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "openSDK_LOG.SecureJsListener"
            com.tencent.open.log.SLog.v(r0, r3)
            return
    }

    @Override
    public void a(java.lang.String r5) {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "-->onCustomCallback, js: "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "openSDK_LOG.SecureJsListener"
            com.tencent.open.log.SLog.v(r1, r0)
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            boolean r1 = com.tencent.open.c.d.a
            if (r1 != 0) goto L21
            r1 = -4
            goto L22
        L21:
            r1 = 0
        L22:
            java.lang.String r2 = "result"
            r0.put(r2, r1)     // Catch: org.json.JSONException -> L34
            java.lang.String r1 = "sn"
            long r2 = r4.b     // Catch: org.json.JSONException -> L34
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L34
            java.lang.String r1 = "data"
            r0.put(r1, r5)     // Catch: org.json.JSONException -> L34
            goto L38
        L34:
            r5 = move-exception
            r5.printStackTrace()
        L38:
            java.lang.String r5 = r0.toString()
            r4.b(r5)
            return
    }
}
