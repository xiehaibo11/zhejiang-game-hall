package com.tkay.expressad.atsignalcommon.windvane;

import android.graphics.Bitmap;
import android.webkit.WebResourceResponse;
import android.webkit.WebView;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;

/* JADX INFO: loaded from: classes3.dex */
public final class p extends com.tkay.expressad.atsignalcommon.base.b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f6448a = "WindVaneWebViewClient";
    public static final int c = 0;
    public static final int d = 1;
    public static final String e = "mmusdk_cache";
    public static final String f = "1";
    public static boolean g = true;
    protected String b;
    private int h;
    private e i;

    private void b(e eVar) {
        this.i = eVar;
    }

    public p() {
        this.b = null;
        this.h = 0;
    }

    private p(int i) {
        this.b = null;
        this.h = 0;
        this.h = i;
    }

    @Override // android.webkit.WebViewClient
    public final void onPageStarted(WebView webView, String str, Bitmap bitmap) {
        super.onPageStarted(webView, str, bitmap);
        this.b = str;
        e eVar = this.i;
        if (eVar != null) {
            eVar.onPageStarted(webView, str, bitmap);
        }
    }

    private static String a(InputStream inputStream) {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(inputStream));
        StringBuilder sb = new StringBuilder();
        while (true) {
            try {
                String line = bufferedReader.readLine();
                if (line == null) {
                    break;
                }
                sb.append(line + "\n");
            } catch (IOException e2) {
                e2.printStackTrace();
            }
        }
        return sb.toString();
    }

    @Override // android.webkit.WebViewClient
    public final WebResourceResponse shouldInterceptRequest(WebView webView, String str) {
        WebResourceResponse webResourceResponseA = a(str);
        return webResourceResponseA != null ? webResourceResponseA : super.shouldInterceptRequest(webView, str);
    }

    /* JADX WARN: Removed duplicated region for block: B:17:0x0044  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static android.webkit.WebResourceResponse a(java.lang.String r5) {
        /*
            r0 = 0
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L5d
            if (r1 != 0) goto L5d
            boolean r1 = com.tkay.expressad.atsignalcommon.windvane.n.d(r5)     // Catch: java.lang.Throwable -> L5d
            if (r1 == 0) goto L5d
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Throwable -> L5d
            android.content.Context r1 = r1.d()     // Catch: java.lang.Throwable -> L5d
            com.tkay.expressad.foundation.g.d.b r1 = com.tkay.expressad.foundation.g.d.b.a(r1)     // Catch: java.lang.Throwable -> L5d
            boolean r2 = com.tkay.expressad.foundation.h.t.a(r5)     // Catch: java.lang.Throwable -> L5d
            if (r2 != 0) goto L44
            java.lang.String r2 = com.tkay.expressad.foundation.h.s.a(r5)     // Catch: java.lang.Throwable -> L5d
            java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> L5d
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L5d
            android.graphics.Bitmap r4 = r1.a(r5)     // Catch: java.lang.Throwable -> L5d
            if (r4 == 0) goto L33
            android.graphics.Bitmap r1 = r1.a(r5)     // Catch: java.lang.Throwable -> L5d
            goto L45
        L33:
            boolean r3 = r3.exists()     // Catch: java.lang.Throwable -> L5d
            if (r3 == 0) goto L44
            android.graphics.Bitmap r2 = com.tkay.expressad.foundation.g.d.a.a(r2)     // Catch: java.lang.Throwable -> L5d
            if (r2 == 0) goto L44
            r1.a(r5, r2)     // Catch: java.lang.Throwable -> L5d
            r1 = r2
            goto L45
        L44:
            r1 = r0
        L45:
            if (r1 == 0) goto L5d
            boolean r2 = r1.isRecycled()     // Catch: java.lang.Throwable -> L5d
            if (r2 != 0) goto L5d
            android.webkit.WebResourceResponse r2 = new android.webkit.WebResourceResponse     // Catch: java.lang.Throwable -> L5d
            java.lang.String r5 = com.tkay.expressad.atsignalcommon.windvane.n.e(r5)     // Catch: java.lang.Throwable -> L5d
            java.lang.String r3 = "utf-8"
            java.io.InputStream r1 = com.tkay.expressad.foundation.g.d.a.a(r1)     // Catch: java.lang.Throwable -> L5d
            r2.<init>(r5, r3, r1)     // Catch: java.lang.Throwable -> L5d
            return r2
        L5d:
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.atsignalcommon.windvane.p.a(java.lang.String):android.webkit.WebResourceResponse");
    }
}
