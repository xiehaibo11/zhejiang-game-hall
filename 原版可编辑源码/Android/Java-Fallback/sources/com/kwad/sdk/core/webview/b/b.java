package com.kwad.sdk.core.webview.b;

public final class b {
    private static final java.util.Map<java.lang.String, com.kwad.sdk.core.webview.b.a.b> ayF = null;
    private static final java.util.Map<java.lang.String, java.lang.String> ayG = null;

    static {
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.kwad.sdk.core.webview.b.b.ayF = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.kwad.sdk.core.webview.b.b.ayG = r0
            return
    }

    private static java.lang.String Z(java.lang.String r1, java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            android.net.Uri r1 = android.net.Uri.parse(r2)
            java.lang.String r1 = r1.getPath()
            r0.append(r1)
            java.lang.String r1 = r0.toString()
            return r1
    }

    public static android.webkit.WebResourceResponse a(android.content.Context r2, java.lang.String r3, com.kwad.sdk.h.a.b r4, com.kwad.sdk.core.webview.b.c.b.a r5, boolean r6) {
            r0 = 0
            com.kwad.sdk.core.webview.b.a.b r2 = a(r2, r4, r3, r5)     // Catch: java.lang.Exception -> L6
            goto L1f
        L6:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r2)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r1 = "获取配置文件失败 崩溃"
            r4.<init>(r1)
            java.lang.String r2 = android.util.Log.getStackTraceString(r2)
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            r5.msg = r2
            r2 = r0
        L1f:
            if (r2 != 0) goto L33
            java.lang.String r2 = r5.msg
            b(r6, r2)
            java.lang.String r2 = r5.msg
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L32
            java.lang.String r2 = "获取配置文件失败"
            r5.msg = r2
        L32:
            return r0
        L33:
            java.lang.String r4 = r2.ayN
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            java.lang.String r1 = "getResource ["
            if (r4 == 0) goto L56
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>(r1)
            r2.append(r3)
            java.lang.String r3 = "] getFilePath from url fail"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            b(r6, r2)
            java.lang.String r2 = "getFilePath from url fail"
        L53:
            r5.msg = r2
            return r0
        L56:
            java.lang.String r4 = r2.ayJ
            boolean r4 = com.kwad.sdk.core.webview.b.c.c.ej(r4)
            if (r4 != 0) goto L88
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "mimetype为: "
            r3.<init>(r4)
            java.lang.String r1 = r2.ayJ
            r3.append(r1)
            java.lang.String r1 = "不在拦截范围的文件"
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            b(r6, r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>(r4)
            java.lang.String r2 = r2.ayJ
            r3.append(r2)
            r3.append(r1)
        L83:
            java.lang.String r2 = r3.toString()
            goto L53
        L88:
            java.lang.String r4 = r2.ayN
            java.io.BufferedInputStream r4 = com.kwad.sdk.utils.q.fp(r4)
            if (r4 != 0) goto Lb1
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>(r1)
            r4.append(r3)
            java.lang.String r3 = "] inputStream is null"
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            b(r6, r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "inputStream is null,本地加载路径："
            r3.<init>(r4)
            java.lang.String r2 = r2.ayN
            r3.append(r2)
            goto L83
        Lb1:
            android.webkit.WebResourceResponse r2 = a(r4, r2)
            return r2
    }

    private static android.webkit.WebResourceResponse a(java.io.InputStream r10, com.kwad.sdk.core.webview.b.a.b r11) {
            java.lang.String r0 = r11.ayJ
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 21
            if (r1 < r2) goto L4b
            java.util.HashMap r8 = new java.util.HashMap
            r8.<init>()
            com.kwad.sdk.core.webview.b.a.a r1 = r11.ayM
            java.lang.String r1 = r1.ayH
            java.lang.String r2 = "Access-Control-Allow-Origin"
            r8.put(r2, r1)
            java.lang.String r1 = "Access-Control-Allow-Credentials"
            java.lang.String r2 = "true"
            r8.put(r1, r2)
            com.kwad.sdk.core.webview.b.a.a r1 = r11.ayM
            java.lang.String r1 = r1.ayI
            java.lang.String r2 = "Timing-Allow-Origin"
            r8.put(r2, r1)
            java.lang.String r1 = "content-type"
            r8.put(r1, r0)
            com.kwad.sdk.core.webview.b.a.a r0 = r11.ayM
            java.lang.String r0 = r0.ayK
            java.lang.String r1 = "Date"
            r8.put(r1, r0)
            java.lang.String r0 = "union-cache "
            java.lang.String r1 = "1"
            r8.put(r0, r1)
            android.webkit.WebResourceResponse r0 = new android.webkit.WebResourceResponse
            java.lang.String r4 = r11.ayJ
            int r6 = r11.status
            java.lang.String r5 = ""
            java.lang.String r7 = "OK"
            r3 = r0
            r9 = r10
            r3.<init>(r4, r5, r6, r7, r8, r9)
            goto L53
        L4b:
            android.webkit.WebResourceResponse r11 = new android.webkit.WebResourceResponse
            java.lang.String r1 = "UTF-8"
            r11.<init>(r0, r1, r10)
            r0 = r11
        L53:
            return r0
    }

    private static com.kwad.sdk.core.webview.b.a.b a(android.content.Context r8, com.kwad.sdk.h.a.b r9, java.lang.String r10, com.kwad.sdk.core.webview.b.c.b.a r11) {
            r0 = 0
            java.lang.String r1 = r9.aCb     // Catch: java.lang.Throwable -> Lfc
            java.lang.String r1 = ec(r1)     // Catch: java.lang.Throwable -> Lfc
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> Lfc
            if (r2 != 0) goto L16
            java.lang.String r2 = Z(r1, r10)     // Catch: java.lang.Throwable -> Lfc
            com.kwad.sdk.core.webview.b.a.b r2 = eb(r2)     // Catch: java.lang.Throwable -> Lfc
            goto L17
        L16:
            r2 = r0
        L17:
            if (r2 == 0) goto L20
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            return r2
        L20:
            java.lang.String r2 = r9.aCc     // Catch: java.lang.Throwable -> Lfc
            java.lang.String r2 = com.kwad.sdk.core.webview.b.c.a.E(r8, r2)     // Catch: java.lang.Throwable -> Lfc
            if (r2 != 0) goto L33
            java.lang.String r8 = "获取配置文件失败 offlinepackage 为空"
            r11.msg = r8     // Catch: java.lang.Throwable -> Lfc
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            return r0
        L33:
            java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> Lfc
            r3.<init>(r2)     // Catch: java.lang.Throwable -> Lfc
            boolean r4 = r3.exists()     // Catch: java.lang.Throwable -> Lfc
            if (r4 != 0) goto L55
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lfc
            java.lang.String r9 = "获取配置文件失败 下载文件路径不存在 "
            r8.<init>(r9)     // Catch: java.lang.Throwable -> Lfc
            r8.append(r2)     // Catch: java.lang.Throwable -> Lfc
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> Lfc
            r11.msg = r8     // Catch: java.lang.Throwable -> Lfc
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            return r0
        L55:
            java.io.FileInputStream r2 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> Lfc
            r2.<init>(r3)     // Catch: java.lang.Throwable -> Lfc
            java.io.InputStreamReader r3 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> Lf8
            r3.<init>(r2)     // Catch: java.lang.Throwable -> Lf8
            java.lang.String r4 = com.kwad.sdk.crash.utils.h.b(r3)     // Catch: java.lang.Throwable -> Lf6
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> Lf6
            if (r5 == 0) goto L74
            java.lang.String r8 = "获取配置文件失败 mainfest文件不存在"
            r11.msg = r8     // Catch: java.lang.Throwable -> Lf6
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
            com.kwad.sdk.crash.utils.b.closeQuietly(r3)
            return r0
        L74:
            org.json.JSONObject r11 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lf6
            r11.<init>(r4)     // Catch: java.lang.Throwable -> Lf6
            java.util.Iterator r0 = r11.keys()     // Catch: java.lang.Throwable -> Lf6
        L7d:
            boolean r4 = r0.hasNext()     // Catch: java.lang.Throwable -> Lf6
            if (r4 == 0) goto Le2
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> Lf6
            org.json.JSONObject r4 = r11.getJSONObject(r1)     // Catch: java.lang.Throwable -> Lf6
            com.kwad.sdk.core.webview.b.a.b r5 = new com.kwad.sdk.core.webview.b.a.b     // Catch: java.lang.Throwable -> Lf6
            r5.<init>()     // Catch: java.lang.Throwable -> Lf6
            r5.parseJson(r4)     // Catch: java.lang.Throwable -> Lf6
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r6 = "https://"
            r4.<init>(r6)     // Catch: java.lang.Throwable -> Lf6
            r4.append(r1)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> Lf6
            android.net.Uri r4 = android.net.Uri.parse(r4)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r4 = r4.getHost()     // Catch: java.lang.Throwable -> Lf6
            r5.ayO = r4     // Catch: java.lang.Throwable -> Lf6
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf6
            r6.<init>()     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r7 = r9.aCc     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r7 = com.kwad.sdk.core.webview.b.c.a.D(r8, r7)     // Catch: java.lang.Throwable -> Lf6
            r6.append(r7)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r7 = "/"
            r6.append(r7)     // Catch: java.lang.Throwable -> Lf6
            r6.append(r1)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> Lf6
            r5.ayN = r6     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r6 = r5.ayJ     // Catch: java.lang.Throwable -> Lf6
            boolean r6 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> Lf6
            if (r6 == 0) goto Ldd
            java.net.FileNameMap r6 = java.net.URLConnection.getFileNameMap()     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r7 = r5.ayN     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r6 = r6.getContentTypeFor(r7)     // Catch: java.lang.Throwable -> Lf6
            r5.ayJ = r6     // Catch: java.lang.Throwable -> Lf6
        Ldd:
            a(r1, r5)     // Catch: java.lang.Throwable -> Lf6
            r1 = r4
            goto L7d
        Le2:
            java.lang.String r8 = r9.aCb     // Catch: java.lang.Throwable -> Lf6
            aa(r8, r1)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r8 = Z(r1, r10)     // Catch: java.lang.Throwable -> Lf6
            com.kwad.sdk.core.webview.b.a.b r8 = eb(r8)     // Catch: java.lang.Throwable -> Lf6
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
            com.kwad.sdk.crash.utils.b.closeQuietly(r3)
            return r8
        Lf6:
            r8 = move-exception
            goto Lfa
        Lf8:
            r8 = move-exception
            r3 = r0
        Lfa:
            r0 = r2
            goto Lfe
        Lfc:
            r8 = move-exception
            r3 = r0
        Lfe:
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            com.kwad.sdk.crash.utils.b.closeQuietly(r3)
            throw r8
    }

    private static void a(java.lang.String r1, com.kwad.sdk.core.webview.b.a.b r2) {
            java.util.Map<java.lang.String, com.kwad.sdk.core.webview.b.a.b> r0 = com.kwad.sdk.core.webview.b.b.ayF
            int r1 = r1.hashCode()
            java.lang.String r1 = java.lang.String.valueOf(r1)
            r0.put(r1, r2)
            return
    }

    private static void aa(java.lang.String r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L11
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L11
            java.util.Map<java.lang.String, java.lang.String> r0 = com.kwad.sdk.core.webview.b.b.ayG
            r0.put(r1, r2)
        L11:
            return
    }

    private static void b(boolean r0, java.lang.String r1) {
            if (r0 == 0) goto L3
            return
        L3:
            java.lang.String r0 = "HybridResourceManager"
            com.kwad.sdk.core.e.c.d(r0, r1)
            return
    }

    private static com.kwad.sdk.core.webview.b.a.b eb(java.lang.String r1) {
            java.util.Map<java.lang.String, com.kwad.sdk.core.webview.b.a.b> r0 = com.kwad.sdk.core.webview.b.b.ayF
            int r1 = r1.hashCode()
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.Object r1 = r0.get(r1)
            com.kwad.sdk.core.webview.b.a.b r1 = (com.kwad.sdk.core.webview.b.a.b) r1
            return r1
    }

    private static java.lang.String ec(java.lang.String r1) {
            java.util.Map<java.lang.String, java.lang.String> r0 = com.kwad.sdk.core.webview.b.b.ayG
            java.lang.Object r1 = r0.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            return r1
    }
}
