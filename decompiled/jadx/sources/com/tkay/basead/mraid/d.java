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

/* JADX INFO: loaded from: classes3.dex */
public class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static String f5712a = d.class.getSimpleName();

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
            Log.e(f5712a, "loadMraidResource: html exists: " + fileB.toURI().toString());
            return fileB.toURI().toString();
        }
        Log.e(f5712a, "loadMraidResource: html no exists: ");
        return com.tkay.core.common.res.d.a(m.a().f()).a(hVar.h(), iVar, hVar);
    }

    public static void a(final String str, final String str2, final MraidWebView mraidWebView, final a aVar) {
        if (mraidWebView == null) {
            return;
        }
        m.a().a(new Runnable() { // from class: com.tkay.basead.mraid.d.1
            @Override // java.lang.Runnable
            public final void run() {
                String str3 = d.f5712a;
                StringBuilder sb = new StringBuilder();
                sb.append(str2);
                sb.append(", start load mraid webview");
                com.tkay.basead.mraid.a aVar2 = new com.tkay.basead.mraid.a();
                e eVar = new e(str2);
                eVar.a(new com.tkay.expressad.atsignalcommon.a.b() { // from class: com.tkay.basead.mraid.d.1.1

                    /* JADX INFO: renamed from: a, reason: collision with root package name */
                    boolean f5714a = false;

                    @Override // com.tkay.expressad.atsignalcommon.a.b, com.tkay.expressad.atsignalcommon.windvane.e
                    public final void onPageFinished(WebView webView, String str4) {
                        if (this.f5714a) {
                            return;
                        }
                        this.f5714a = true;
                        if (com.tkay.core.common.res.d.f6304a.equals(str4)) {
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

                    @Override // com.tkay.expressad.atsignalcommon.a.b, com.tkay.expressad.atsignalcommon.windvane.e
                    public final void onReceivedError(WebView webView, int i, String str4, String str5) {
                        if (this.f5714a) {
                            return;
                        }
                        this.f5714a = true;
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

                    @Override // com.tkay.expressad.atsignalcommon.a.b, com.tkay.expressad.atsignalcommon.windvane.e
                    public final void onReceivedSslError(WebView webView, SslErrorHandler sslErrorHandler, SslError sslError) {
                        if (this.f5714a) {
                            return;
                        }
                        this.f5714a = true;
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
