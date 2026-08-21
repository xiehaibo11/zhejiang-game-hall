package com.tkay.basead.mraid;

import android.net.http.SslError;
import android.text.TextUtils;
import android.util.Log;
import android.webkit.SslErrorHandler;
import android.webkit.WebView;
import com.tkay.basead.c.f;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;
import java.io.File;

public class d {
    public static String a = d.class.getSimpleName();

    public interface a {
        void a();

        void a(com.tkay.basead.c.e eVar);
    }

    public static String a(i iVar, h hVar) {
        if (!TextUtils.isEmpty(hVar.i())) {
            return hVar.i();
        }
        if (TextUtils.isEmpty(hVar.h())) {
            return "";
        }
        File fileB = com.tkay.core.common.res.d.a(m.a().f()).b(iVar, hVar);
        if (fileB != null) {
            Log.e(a, "loadMraidResource: html exists: " + fileB.toURI().toString());
            return fileB.toURI().toString();
        }
        Log.e(a, "loadMraidResource: html no exists: ");
        return com.tkay.core.common.res.d.a(m.a().f()).a(hVar.h(), iVar, hVar);
    }

    public static void a(final String str, final String str2, final MraidWebView mraidWebView, final a aVar) {
        if (mraidWebView == null) {
            return;
        }
        m.a().a(new Runnable() {
            @Override
            public final void run() {
                String str3 = d.a;
                StringBuilder sb = new StringBuilder();
                sb.append(str2);
                sb.append(", start load mraid webview");
                com.tkay.basead.mraid.a aVar2 = new com.tkay.basead.mraid.a();
                e eVar = new e(str2);
                eVar.a(new com.tkay.expressad.atsignalcommon.a.b() {
                    boolean a = false;

                    @Override
                    public final void onPageFinished(WebView webView, String str4) {
                        if (this.a) {
                            return;
                        }
                        this.a = true;
                        if (com.tkay.core.common.res.d.a.equals(str4)) {
                            StringBuilder sb2 = new StringBuilder();
                            sb2.append(str2);
                            sb2.append(", about:blank");
                            if (aVar != null) {
                                aVar.a(f.a(f.n, f.I));
                                return;
                            }
                            return;
                        }
                        com.tkay.expressad.mbbanner.a.a.a.a(webView);
                        if (mraidWebView != null) {
                            com.tkay.basead.a.b.c.a(str, mraidWebView);
                        }
                        StringBuilder sb3 = new StringBuilder();
                        sb3.append(str2);
                        sb3.append(", load success");
                        if (aVar != null) {
                            aVar.a();
                        }
                    }

                    @Override
                    public final void onReceivedError(WebView webView, int i, String str4, String str5) {
                        if (this.a) {
                            return;
                        }
                        this.a = true;
                        super.onReceivedError(webView, i, str4, str5);
                        com.tkay.basead.c.e eVarA = f.a("10000", i + "_" + str4);
                        StringBuilder sb2 = new StringBuilder();
                        sb2.append(str2);
                        sb2.append(", load failed: ");
                        sb2.append(eVarA.c());
                        if (aVar != null) {
                            aVar.a(eVarA);
                        }
                    }

                    @Override
                    public final void onReceivedSslError(WebView webView, SslErrorHandler sslErrorHandler, SslError sslError) {
                        if (this.a) {
                            return;
                        }
                        this.a = true;
                        super.onReceivedSslError(webView, sslErrorHandler, sslError);
                        com.tkay.basead.c.e eVarA = f.a("10000", sslError != null ? sslError.toString() : "onReceivedSslError");
                        StringBuilder sb2 = new StringBuilder();
                        sb2.append(str2);
                        sb2.append(", load failed: ");
                        sb2.append(eVarA.c());
                        if (aVar != null) {
                            aVar.a(eVarA);
                        }
                    }
                });
                mraidWebView.setWebViewClient(eVar);
                mraidWebView.setObject(aVar2);
                mraidWebView.loadUrl(str2);
            }
        });
    }
}
