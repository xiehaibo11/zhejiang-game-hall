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
import java.io.File;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes3.dex */
public final class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static String f6382a = "ResManager";
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
        To view partially-correct add '--show-bad-code' argument
    */
    public static boolean a(com.tkay.expressad.advanced.view.TYNativeAdvancedView r12, com.tkay.expressad.foundation.d.c r13, java.lang.String r14, java.lang.String r15, int r16, com.tkay.expressad.advanced.c.c.a r17) {
        /*
            Method dump skipped, instruction units count: 233
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.advanced.c.c.a(com.tkay.expressad.advanced.view.TYNativeAdvancedView, com.tkay.expressad.foundation.d.c, java.lang.String, java.lang.String, int, com.tkay.expressad.advanced.c.c$a):boolean");
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
        advancedNativeWebview.setWebViewListener(new com.tkay.expressad.atsignalcommon.a.b() { // from class: com.tkay.expressad.advanced.c.c.1
            @Override // com.tkay.expressad.atsignalcommon.a.b, com.tkay.expressad.atsignalcommon.windvane.e
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

            @Override // com.tkay.expressad.atsignalcommon.a.b, com.tkay.expressad.atsignalcommon.windvane.e
            public final void onReceivedError(WebView webView, int i2, String str4, String str5) {
                super.onReceivedError(webView, i2, str4, str5);
                tYNativeAdvancedView.setH5Ready(false);
                a aVar2 = aVar;
                if (aVar2 != null) {
                    aVar2.b();
                }
            }

            @Override // com.tkay.expressad.atsignalcommon.a.b, com.tkay.expressad.atsignalcommon.windvane.e
            public final void onReceivedSslError(WebView webView, SslErrorHandler sslErrorHandler, SslError sslError) {
                super.onReceivedSslError(webView, sslErrorHandler, sslError);
                tYNativeAdvancedView.setH5Ready(false);
                a aVar2 = aVar;
                if (aVar2 != null) {
                    aVar2.b();
                }
            }

            @Override // com.tkay.expressad.atsignalcommon.a.b, com.tkay.expressad.atsignalcommon.windvane.e
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
            new Handler(Looper.getMainLooper()).post(new Runnable() { // from class: com.tkay.expressad.advanced.c.c.2
                @Override // java.lang.Runnable
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
