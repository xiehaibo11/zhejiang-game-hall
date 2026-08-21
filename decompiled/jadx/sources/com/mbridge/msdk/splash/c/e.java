package com.mbridge.msdk.splash.c;

import android.net.http.SslError;
import android.text.TextUtils;
import android.webkit.SslErrorHandler;
import android.webkit.WebView;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.splash.view.MBSplashView;
import com.mbridge.msdk.splash.view.MBSplashWebview;
import java.util.ArrayList;

/* JADX INFO: compiled from: WebViewRenderManager.java */
/* JADX INFO: loaded from: classes2.dex */
public final class e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private boolean f4002a;
    private boolean b;

    /* JADX INFO: compiled from: WebViewRenderManager.java */
    public interface b {
        void a();

        void a(int i);

        void a(String str);
    }

    private e() {
        this.f4002a = false;
        this.b = false;
    }

    /* JADX INFO: compiled from: WebViewRenderManager.java */
    static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static final e f4004a = new e();
    }

    public final void a() {
        this.f4002a = false;
        this.b = false;
    }

    public final void a(final MBSplashView mBSplashView, c cVar, final b bVar) {
        String requestId;
        if (mBSplashView == null || cVar == null) {
            return;
        }
        final String strC = cVar.c();
        String strB = cVar.b();
        final CampaignEx campaignExD = cVar.d();
        String strA = cVar.a();
        boolean zE = cVar.e();
        int iF = cVar.f();
        MBSplashWebview splashWebview = mBSplashView.getSplashWebview();
        if (splashWebview == null) {
            return;
        }
        com.mbridge.msdk.splash.js.b bVar2 = new com.mbridge.msdk.splash.js.b(mBSplashView.getContext(), strB, strC);
        ArrayList arrayList = new ArrayList();
        arrayList.add(campaignExD);
        bVar2.a(arrayList);
        bVar2.a(zE ? 1 : 0);
        bVar2.b(iF);
        mBSplashView.setSplashJSBridgeImpl(bVar2);
        if (TextUtils.isEmpty(campaignExD.getRequestId())) {
            requestId = campaignExD.getRequestIdNotice();
        } else {
            requestId = campaignExD.getRequestId();
        }
        String requestId2 = splashWebview.getRequestId();
        z.d("WebViewRenderManager", "CampaignEx RequestId = " + requestId + " WebView RequestId = " + requestId2);
        if (!TextUtils.isEmpty(requestId2) && requestId2.equals(requestId) && (this.f4002a || this.b)) {
            mBSplashView.setH5Ready(true);
            if (bVar != null) {
                bVar.a(1);
                return;
            }
            return;
        }
        a();
        splashWebview.setRequestId(requestId);
        com.mbridge.msdk.splash.a.b bVarA = com.mbridge.msdk.splash.a.b.a().c(campaignExD.getId()).d(campaignExD.getRequestId()).g(campaignExD.getRequestIdNotice()).b(strC).a(campaignExD.isBidCampaign());
        if (bVarA != null) {
            bVarA.a(com.tkay.expressad.mbbanner.a.b.c.f6982a);
            if (com.mbridge.msdk.foundation.same.report.b.a().c()) {
                com.mbridge.msdk.foundation.same.report.b.a().a(bVarA.b());
            } else {
                com.mbridge.msdk.foundation.same.report.c.a(bVarA.b(), com.mbridge.msdk.foundation.controller.a.f().j(), strC);
            }
        }
        final long jCurrentTimeMillis = System.currentTimeMillis();
        splashWebview.setWebViewListener(new com.mbridge.msdk.mbjscommon.c.b() { // from class: com.mbridge.msdk.splash.c.e.1
            @Override // com.mbridge.msdk.mbjscommon.c.b, com.mbridge.msdk.mbjscommon.windvane.d
            public final void a(WebView webView, int i) {
                super.a(webView, i);
                b bVar3 = bVar;
                if (bVar3 != null) {
                    bVar3.a(i);
                }
                if (i == 1) {
                    e.this.f4002a = true;
                    mBSplashView.setH5Ready(true);
                    z.a("WindVaneWebView", "======渲染成功：ready");
                    com.mbridge.msdk.splash.e.a.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignExD, strC, "", jCurrentTimeMillis, 1);
                    com.mbridge.msdk.splash.e.a.a(campaignExD, strC);
                    return;
                }
                e.this.f4002a = false;
                mBSplashView.setH5Ready(false);
                z.a("WindVaneWebView", "======渲染失败");
                com.mbridge.msdk.splash.e.a.b(campaignExD, "readyState 2", strC);
                com.mbridge.msdk.splash.e.a.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignExD, strC, "readyState 2", jCurrentTimeMillis, 3);
            }

            @Override // com.mbridge.msdk.mbjscommon.c.b, com.mbridge.msdk.mbjscommon.windvane.d
            public final void a(WebView webView, int i, String str, String str2) {
                super.a(webView, i, str, str2);
                b bVar3 = bVar;
                if (bVar3 != null) {
                    bVar3.a(str);
                }
                e.this.a();
                mBSplashView.setH5Ready(false);
                z.a("WindVaneWebView", "======渲染失败");
                com.mbridge.msdk.splash.e.a.b(campaignExD, "error code:" + i + str, strC);
                com.mbridge.msdk.splash.e.a.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignExD, strC, "error code:" + i + str, jCurrentTimeMillis, 3);
            }

            @Override // com.mbridge.msdk.mbjscommon.c.b, com.mbridge.msdk.mbjscommon.windvane.d
            public final void a(WebView webView, SslErrorHandler sslErrorHandler, SslError sslError) {
                super.a(webView, sslErrorHandler, sslError);
                b bVar3 = bVar;
                if (bVar3 != null) {
                    bVar3.a(sslError.toString());
                }
                e.this.a();
                mBSplashView.setH5Ready(false);
                z.a("WindVaneWebView", "======渲染失败");
                com.mbridge.msdk.splash.e.a.b(campaignExD, "error url:" + sslError.getUrl(), strC);
                com.mbridge.msdk.splash.e.a.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignExD, strC, "error url:" + sslError.getUrl(), jCurrentTimeMillis, 3);
            }

            @Override // com.mbridge.msdk.mbjscommon.c.b, com.mbridge.msdk.mbjscommon.windvane.d
            public final void a(WebView webView, String str) {
                super.a(webView, str);
                b bVar3 = bVar;
                if (bVar3 != null) {
                    bVar3.a();
                }
                e.this.b = true;
                if (!campaignExD.isHasMBTplMark()) {
                    mBSplashView.setH5Ready(true);
                    z.a("WindVaneWebView", "======渲染成功：finish");
                    com.mbridge.msdk.splash.e.a.a(campaignExD, strC);
                    com.mbridge.msdk.splash.e.a.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignExD, strC, "", jCurrentTimeMillis, 1);
                }
                com.mbridge.msdk.splash.js.c.a(webView);
            }
        });
        if (!splashWebview.isDestoryed()) {
            z.a("WebViewRenderManager", "======开始渲染：" + strA);
            splashWebview.loadUrl(strA);
            return;
        }
        mBSplashView.setH5Ready(false);
        com.mbridge.msdk.splash.e.a.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignExD, strC, "webview had destory", jCurrentTimeMillis, 3);
    }

    /* JADX INFO: compiled from: WebViewRenderManager.java */
    public static class c {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private String f4005a;
        private String b;
        private CampaignEx c;
        private String d;
        private boolean e;
        private int f;

        public final String a() {
            return this.d;
        }

        public final void a(String str) {
            this.d = str;
        }

        public final String b() {
            return this.f4005a;
        }

        public final void b(String str) {
            this.f4005a = str;
        }

        public final String c() {
            return this.b;
        }

        public final void c(String str) {
            this.b = str;
        }

        public final CampaignEx d() {
            return this.c;
        }

        public final void a(CampaignEx campaignEx) {
            this.c = campaignEx;
        }

        public final boolean e() {
            return this.e;
        }

        public final void a(boolean z) {
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
