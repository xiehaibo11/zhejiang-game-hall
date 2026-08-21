package com.tkay.expressad.atsignalcommon.windvane;

import android.graphics.Bitmap;
import android.text.TextUtils;
import android.webkit.WebResourceResponse;
import android.webkit.WebView;
import com.tkay.expressad.foundation.h.s;
import com.tkay.expressad.foundation.h.t;
import java.io.BufferedReader;
import java.io.File;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;

public final class p extends com.tkay.expressad.atsignalcommon.base.b {
    public static final String a = "WindVaneWebViewClient";
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

    @Override
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

    @Override
    public final WebResourceResponse shouldInterceptRequest(WebView webView, String str) {
        WebResourceResponse webResourceResponseA = a(str);
        return webResourceResponseA != null ? webResourceResponseA : super.shouldInterceptRequest(webView, str);
    }

    /* JADX WARN: Removed duplicated region for block: B:17:0x0044  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static WebResourceResponse a(String str) {
        Bitmap bitmapA;
        Bitmap bitmapA2;
        try {
            if (!TextUtils.isEmpty(str) && n.d(str)) {
                com.tkay.expressad.foundation.g.d.b bVarA = com.tkay.expressad.foundation.g.d.b.a(com.tkay.expressad.foundation.b.b.b().d());
                if (!t.a(str)) {
                    String strA = s.a(str);
                    File file = new File(strA);
                    if (bVarA.a(str) != null) {
                        bitmapA = bVarA.a(str);
                    } else if (!file.exists() || (bitmapA2 = com.tkay.expressad.foundation.g.d.a.a(strA)) == null) {
                        bitmapA = null;
                    } else {
                        bVarA.a(str, bitmapA2);
                        bitmapA = bitmapA2;
                    }
                    if (bitmapA != null && !bitmapA.isRecycled()) {
                        return new WebResourceResponse(n.e(str), "utf-8", com.tkay.expressad.foundation.g.d.a.a(bitmapA));
                    }
                }
            }
        } catch (Throwable unused) {
        }
        return null;
    }
}
