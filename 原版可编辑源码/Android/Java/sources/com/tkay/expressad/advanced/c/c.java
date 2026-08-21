package com.tkay.expressad.advanced.c;

import android.net.http.SslError;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import android.webkit.SslErrorHandler;
import android.webkit.WebView;
import com.tkay.expressad.advanced.js.NativeAdvancedJSBridgeImpl;
import com.tkay.expressad.advanced.js.NativeAdvancedJsUtils;
import com.tkay.expressad.advanced.view.TYNativeAdvancedView;
import com.tkay.expressad.advanced.view.TYNativeAdvancedWebview;
import com.tkay.expressad.videocommon.b.g;
import java.io.File;
import java.util.ArrayList;

public final class c {
    private static String a = "ResManager";
    private static int b = 1;

    public interface a {
        void a();

        void b();
    }

    private static com.tkay.expressad.foundation.d.c a(com.tkay.expressad.foundation.d.c cVar) {
        if (!TextUtils.isEmpty(cVar.c()) || (!TextUtils.isEmpty(cVar.d()) && cVar.d().contains("<MBTPLMARK>"))) {
            cVar.a(true);
            cVar.b(false);
        } else {
            cVar.a(false);
            cVar.b(true);
        }
        return cVar;
    }

    /* JADX WARN: Removed duplicated region for block: B:29:0x0091  */
    /* JADX WARN: Removed duplicated region for block: B:45:0x00de A[PHI: r0
      0x00de: PHI (r0v13 boolean) = (r0v12 boolean), (r0v12 boolean), (r0v12 boolean), (r0v15 boolean) binds: [B:31:0x009a, B:33:0x00a4, B:35:0x00aa, B:44:0x00d2] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static boolean a(TYNativeAdvancedView tYNativeAdvancedView, com.tkay.expressad.foundation.d.c cVar, String str, String str2, int i, a aVar) {
        boolean z;
        boolean zA;
        boolean z2;
        boolean z3 = false;
        if (cVar != null) {
            tYNativeAdvancedView.clearResState();
            if (TextUtils.isEmpty(cVar.S())) {
                zA = true;
            } else {
                zA = com.tkay.expressad.videocommon.b.c.a().a(com.tkay.expressad.foundation.g.a.aX, str2, cVar.A());
                if (zA) {
                }
                z2 = zA;
                if (!TextUtils.isEmpty(cVar.I()) && !tYNativeAdvancedView.isEndCardReady() && !TextUtils.isEmpty(g.a().c(cVar.I()))) {
                    tYNativeAdvancedView.setEndCardReady(true);
                }
                if (!TextUtils.isEmpty(cVar.c()) || tYNativeAdvancedView.isH5Ready()) {
                    z = false;
                } else {
                    String strC = g.a().c(cVar.c());
                    if (TextUtils.isEmpty(strC)) {
                        z = false;
                        z2 = false;
                    } else if (com.tkay.expressad.advanced.a.c.b(cVar.Z())) {
                        tYNativeAdvancedView.setH5Ready(true);
                        z = false;
                        z2 = true;
                    } else {
                        a(tYNativeAdvancedView, strC, cVar, str, str2, i, aVar);
                        z = true;
                    }
                }
                if (TextUtils.isEmpty(cVar.c()) || TextUtils.isEmpty(cVar.d()) || tYNativeAdvancedView.isH5Ready()) {
                    z3 = z2;
                } else {
                    String strA = a(cVar.d());
                    if (!TextUtils.isEmpty(strA)) {
                        if (com.tkay.expressad.advanced.a.c.b(cVar.Z())) {
                            tYNativeAdvancedView.setH5Ready(true);
                            if (cVar.H()) {
                                tYNativeAdvancedView.setVideoReady(true);
                            }
                            z3 = true;
                        } else {
                            a(tYNativeAdvancedView, strA, cVar, str, str2, i, aVar);
                            z = true;
                            z3 = z2;
                        }
                    }
                }
            }
            tYNativeAdvancedView.setVideoReady(true);
            z2 = zA;
            if (!TextUtils.isEmpty(cVar.I())) {
                tYNativeAdvancedView.setEndCardReady(true);
            }
            if (TextUtils.isEmpty(cVar.c())) {
                z = false;
                if (TextUtils.isEmpty(cVar.c())) {
                    z3 = z2;
                }
            }
        } else {
            z = false;
        }
        if (z3 && !z) {
            aVar.a();
        }
        return z3;
    }

    private static void a(TYNativeAdvancedView tYNativeAdvancedView, String str, com.tkay.expressad.foundation.d.c cVar, String str2, String str3, int i) {
        a(tYNativeAdvancedView, str, cVar, str2, str3, i, null);
    }

    private static void a(final TYNativeAdvancedView tYNativeAdvancedView, final String str, final com.tkay.expressad.foundation.d.c cVar, String str2, String str3, int i, final a aVar) {
        if (tYNativeAdvancedView == null || tYNativeAdvancedView.getAdvancedNativeWebview() == null) {
            return;
        }
        NativeAdvancedJSBridgeImpl nativeAdvancedJSBridgeImpl = new NativeAdvancedJSBridgeImpl(tYNativeAdvancedView.getContext(), str2, str3);
        ArrayList arrayList = new ArrayList();
        arrayList.add(cVar);
        nativeAdvancedJSBridgeImpl.setCampaignList(arrayList);
        nativeAdvancedJSBridgeImpl.setAllowSkip(i);
        tYNativeAdvancedView.setAdvancedNativeJSBridgeImpl(nativeAdvancedJSBridgeImpl);
        final TYNativeAdvancedWebview advancedNativeWebview = tYNativeAdvancedView.getAdvancedNativeWebview();
        System.currentTimeMillis();
        advancedNativeWebview.setWebViewListener(new com.tkay.expressad.atsignalcommon.a.b() {
            @Override
            public final void readyState(WebView webView, int i2) {
                super.readyState(webView, i2);
                if (i2 == 1) {
                    com.tkay.expressad.advanced.a.c.a(cVar.Z());
                    tYNativeAdvancedView.setH5Ready(true);
                } else {
                    tYNativeAdvancedView.setH5Ready(false);
                }
                a aVar2 = aVar;
                if (aVar2 != null) {
                    aVar2.a();
                }
            }

            @Override
            public final void onReceivedError(WebView webView, int i2, String str4, String str5) {
                super.onReceivedError(webView, i2, str4, str5);
                tYNativeAdvancedView.setH5Ready(false);
                a aVar2 = aVar;
                if (aVar2 != null) {
                    aVar2.b();
                }
            }

            @Override
            public final void onReceivedSslError(WebView webView, SslErrorHandler sslErrorHandler, SslError sslError) {
                super.onReceivedSslError(webView, sslErrorHandler, sslError);
                tYNativeAdvancedView.setH5Ready(false);
                a aVar2 = aVar;
                if (aVar2 != null) {
                    aVar2.b();
                }
            }

            @Override
            public final void onPageFinished(WebView webView, String str4) {
                super.onPageFinished(webView, str4);
                if (!cVar.s()) {
                    com.tkay.expressad.advanced.a.c.a(cVar.Z());
                    tYNativeAdvancedView.setH5Ready(true);
                }
                NativeAdvancedJsUtils.fireOnJSBridgeConnected(webView);
            }
        });
        if (!advancedNativeWebview.isDestroyed()) {
            new Handler(Looper.getMainLooper()).post(new Runnable() {
                @Override
                public final void run() {
                    advancedNativeWebview.loadUrl(str);
                }
            });
        } else {
            tYNativeAdvancedView.setH5Ready(false);
        }
    }

    private static String a(String str) {
        try {
            File file = new File(str);
            if (!file.exists()) {
                return "";
            }
            return "file:///" + file.getAbsolutePath();
        } catch (Throwable th) {
            try {
                throw th;
            } catch (Exception e) {
                e.getMessage();
                return "";
            }
        }
    }

    public static boolean a(TYNativeAdvancedView tYNativeAdvancedView, com.tkay.expressad.foundation.d.c cVar) {
        if (tYNativeAdvancedView == null) {
            return false;
        }
        boolean zIsVideoReady = TextUtils.isEmpty(cVar.S()) ? true : tYNativeAdvancedView.isVideoReady();
        if (zIsVideoReady && !TextUtils.isEmpty(cVar.c())) {
            zIsVideoReady = com.tkay.expressad.advanced.a.c.b(cVar.Z());
            StringBuilder sb = new StringBuilder("======isReady getAdZip:");
            sb.append(zIsVideoReady);
            sb.append("---requestId:");
            sb.append(cVar.Z());
        }
        if (zIsVideoReady && TextUtils.isEmpty(cVar.c()) && !TextUtils.isEmpty(cVar.d())) {
            zIsVideoReady = com.tkay.expressad.advanced.a.c.b(cVar.Z());
        }
        boolean z = (TextUtils.isEmpty(cVar.c()) && TextUtils.isEmpty(cVar.d())) ? false : zIsVideoReady;
        return (!z || TextUtils.isEmpty(cVar.I())) ? z : tYNativeAdvancedView.isEndCardReady();
    }
}
