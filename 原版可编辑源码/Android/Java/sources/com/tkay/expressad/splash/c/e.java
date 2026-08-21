package com.tkay.expressad.splash.c;

import android.net.http.SslError;
import android.text.TextUtils;
import android.webkit.SslErrorHandler;
import android.webkit.WebView;
import com.tkay.expressad.splash.js.SplashJSBridgeImpl;
import com.tkay.expressad.splash.js.SplashJsUtils;
import com.tkay.expressad.splash.view.TYSplashView;
import com.tkay.expressad.splash.view.TYSplashWebview;
import java.util.ArrayList;

public final class e {
    private static final String a = "WebViewRenderManager";
    private boolean b;
    private boolean c;

    public interface b {
        void a();

        void a(int i);

        void a(String str);
    }

    e(byte b2) {
        this();
    }

    static boolean a(e eVar) {
        eVar.c = true;
        return true;
    }

    private e() {
        this.b = false;
        this.c = false;
    }

    static class a {
        private static final e a = new e(0);

        a() {
        }
    }

    private static e b() {
        return a.a;
    }

    public final void a() {
        this.b = false;
        this.c = false;
    }

    public final void a(final TYSplashView tYSplashView, c cVar, final b bVar) {
        String strZ;
        if (tYSplashView != null) {
            String strC = cVar.c();
            String strB = cVar.b();
            final com.tkay.expressad.foundation.d.c cVarD = cVar.d();
            String strA = cVar.a();
            boolean zE = cVar.e();
            int iF = cVar.f();
            TYSplashWebview splashWebview = tYSplashView.getSplashWebview();
            if (splashWebview == null) {
                return;
            }
            SplashJSBridgeImpl splashJSBridgeImpl = new SplashJSBridgeImpl(tYSplashView.getContext(), strB, strC);
            ArrayList arrayList = new ArrayList();
            arrayList.add(cVarD);
            splashJSBridgeImpl.setCampaignList(arrayList);
            splashJSBridgeImpl.setAllowSkip(zE ? 1 : 0);
            splashJSBridgeImpl.setCountdownS(iF);
            tYSplashView.setSplashJSBridgeImpl(splashJSBridgeImpl);
            if (TextUtils.isEmpty(cVarD.Z())) {
                strZ = cVarD.aa();
            } else {
                strZ = cVarD.Z();
            }
            String requestId = splashWebview.getRequestId();
            StringBuilder sb = new StringBuilder("CampaignEx RequestId = ");
            sb.append(strZ);
            sb.append(" WebView RequestId = ");
            sb.append(requestId);
            if (!TextUtils.isEmpty(requestId) && requestId.equals(strZ) && (this.b || this.c)) {
                tYSplashView.setH5Ready(true);
                if (bVar != null) {
                    bVar.a(1);
                    return;
                }
                return;
            }
            a();
            splashWebview.setRequestId(strZ);
            System.currentTimeMillis();
            splashWebview.setWebViewListener(new com.tkay.expressad.atsignalcommon.a.b() {
                @Override
                public final void readyState(WebView webView, int i) {
                    super.readyState(webView, i);
                    b bVar2 = bVar;
                    if (bVar2 != null) {
                        bVar2.a(i);
                    }
                    if (i == 1) {
                        e.this.b = true;
                        tYSplashView.setH5Ready(true);
                    } else {
                        e.this.b = false;
                        tYSplashView.setH5Ready(false);
                    }
                }

                @Override
                public final void onReceivedError(WebView webView, int i, String str, String str2) {
                    super.onReceivedError(webView, i, str, str2);
                    b bVar2 = bVar;
                    if (bVar2 != null) {
                        bVar2.a(str);
                    }
                    e.this.a();
                    tYSplashView.setH5Ready(false);
                }

                @Override
                public final void onReceivedSslError(WebView webView, SslErrorHandler sslErrorHandler, SslError sslError) {
                    super.onReceivedSslError(webView, sslErrorHandler, sslError);
                    b bVar2 = bVar;
                    if (bVar2 != null) {
                        bVar2.a(sslError.toString());
                    }
                    e.this.a();
                    tYSplashView.setH5Ready(false);
                }

                @Override
                public final void onPageFinished(WebView webView, String str) {
                    super.onPageFinished(webView, str);
                    b bVar2 = bVar;
                    if (bVar2 != null) {
                        bVar2.a();
                    }
                    e.a(e.this);
                    if (!cVarD.s()) {
                        tYSplashView.setH5Ready(true);
                    }
                    SplashJsUtils.fireOnJSBridgeConnected(webView);
                }
            });
            if (!splashWebview.isDestroyed()) {
                splashWebview.loadUrl(strA);
            } else {
                tYSplashView.setH5Ready(false);
            }
        }
    }

    public static class c {
        private String a;
        private String b;
        private com.tkay.expressad.foundation.d.c c;
        private String d;
        private boolean e;
        private int f;
        private boolean g;

        private boolean g() {
            return this.g;
        }

        public final void a(boolean z) {
            this.g = z;
        }

        public final String a() {
            return this.d;
        }

        public final void a(String str) {
            this.d = str;
        }

        public final String b() {
            return this.a;
        }

        public final void b(String str) {
            this.a = str;
        }

        public final String c() {
            return this.b;
        }

        public final void c(String str) {
            this.b = str;
        }

        public final com.tkay.expressad.foundation.d.c d() {
            return this.c;
        }

        public final void a(com.tkay.expressad.foundation.d.c cVar) {
            this.c = cVar;
        }

        public final boolean e() {
            return this.e;
        }

        public final void b(boolean z) {
            this.e = z;
        }

        public final int f() {
            return this.f;
        }

        public final void a(int i) {
            this.f = i;
        }
    }
}
