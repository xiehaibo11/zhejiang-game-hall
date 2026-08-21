package com.mbridge.msdk.advanced.b;

import android.net.http.SslError;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import android.webkit.SslErrorHandler;
import android.webkit.WebView;
import com.mbridge.msdk.advanced.view.MBNativeAdvancedView;
import com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview;
import com.mbridge.msdk.foundation.db.f;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.z;
import java.io.File;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: compiled from: ResManager.java */
/* JADX INFO: loaded from: classes2.dex */
public final class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static f f3080a = f.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
    private static String b = "ResManager";
    private static int c = 1;

    public static CampaignEx a(MBNativeAdvancedView mBNativeAdvancedView, String str, String str2, String str3, int i, boolean z, boolean z2) {
        com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
        if (aVarB == null) {
            aVarB = com.mbridge.msdk.c.b.a().b();
        }
        long jAg = aVarB.ag() * 1000;
        long jW = aVarB.W() * 1000;
        if (f3080a == null) {
            f3080a = f.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
        }
        f3080a.b(jW, str2);
        if (f3080a == null) {
            f3080a = f.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
        }
        List<CampaignEx> listB = f3080a.b(str2, 0, 0, c);
        if (listB == null || listB.size() <= 0) {
            return null;
        }
        CampaignEx campaignEx = listB.get(0);
        if (TextUtils.isEmpty(campaignEx.getAdZip()) && TextUtils.isEmpty(campaignEx.getAdHtml())) {
            return null;
        }
        long jCurrentTimeMillis = System.currentTimeMillis();
        long j = jCurrentTimeMillis - jAg;
        if (!z) {
            if ((campaignEx.getPlct() > 0 && (campaignEx.getPlct() * 1000) + campaignEx.getTimestamp() >= jCurrentTimeMillis) || (campaignEx.getPlct() <= 0 && campaignEx.getTimestamp() >= j)) {
                if (!a(mBNativeAdvancedView, campaignEx, str, str2, i, z2)) {
                    return null;
                }
                z.d(b, "cache campain is picked:" + campaignEx.getAppName());
                return a(campaignEx);
            }
            z.a(b, "========已经超了缓存时间");
            if (campaignEx.isSpareOffer(jAg, jW) || mBNativeAdvancedView == null) {
                return null;
            }
            mBNativeAdvancedView.setVisibility(8);
            return null;
        }
        if ((campaignEx.getPlct() > 0 && (campaignEx.getPlct() * 1000) + campaignEx.getTimestamp() >= jCurrentTimeMillis) || (campaignEx.getPlct() <= 0 && campaignEx.getTimestamp() >= j)) {
            if (!a(mBNativeAdvancedView, campaignEx, str, str2, i, z2)) {
                return null;
            }
            z.d(b, "cache campain is picked:" + campaignEx.getAppName());
            return a(campaignEx);
        }
        if (a(mBNativeAdvancedView, campaignEx, str, str2, i, z2) && campaignEx.isSpareOffer(jAg, jW)) {
            return a(campaignEx);
        }
        if (campaignEx.isSpareOffer(jAg, jW) || mBNativeAdvancedView == null) {
            return null;
        }
        mBNativeAdvancedView.setVisibility(8);
        return null;
    }

    private static CampaignEx a(CampaignEx campaignEx) {
        if (!TextUtils.isEmpty(campaignEx.getAdZip()) || (!TextUtils.isEmpty(campaignEx.getAdHtml()) && campaignEx.getAdHtml().contains("<MBTPLMARK>"))) {
            campaignEx.setHasMBTplMark(true);
            campaignEx.setIsMraid(false);
        } else {
            campaignEx.setHasMBTplMark(false);
            campaignEx.setIsMraid(true);
        }
        return campaignEx;
    }

    /* JADX WARN: Removed duplicated region for block: B:24:0x0071  */
    /* JADX WARN: Removed duplicated region for block: B:29:0x009c  */
    /* JADX WARN: Removed duplicated region for block: B:38:0x00c5  */
    /* JADX WARN: Removed duplicated region for block: B:50:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static boolean a(com.mbridge.msdk.advanced.view.MBNativeAdvancedView r12, com.mbridge.msdk.foundation.entity.CampaignEx r13, java.lang.String r14, java.lang.String r15, int r16, boolean r17) {
        /*
            Method dump skipped, instruction units count: 253
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.advanced.b.c.a(com.mbridge.msdk.advanced.view.MBNativeAdvancedView, com.mbridge.msdk.foundation.entity.CampaignEx, java.lang.String, java.lang.String, int, boolean):boolean");
    }

    private static void a(final MBNativeAdvancedView mBNativeAdvancedView, final String str, final CampaignEx campaignEx, final String str2, final String str3, int i) {
        if (mBNativeAdvancedView == null || mBNativeAdvancedView.getAdvancedNativeWebview() == null) {
            return;
        }
        com.mbridge.msdk.advanced.d.a.a(com.mbridge.msdk.advanced.common.c.a().c(campaignEx.getId()).d(campaignEx.getRequestId()).g(campaignEx.getRequestIdNotice()).b(str3).a(campaignEx.isBidCampaign()), str3);
        com.mbridge.msdk.advanced.js.a aVar = new com.mbridge.msdk.advanced.js.a(mBNativeAdvancedView.getContext(), str2, str3);
        ArrayList arrayList = new ArrayList();
        arrayList.add(campaignEx);
        aVar.a(arrayList);
        aVar.a(i);
        mBNativeAdvancedView.setAdvancedNativeJSBridgeImpl(aVar);
        final MBNativeAdvancedWebview advancedNativeWebview = mBNativeAdvancedView.getAdvancedNativeWebview();
        final long jCurrentTimeMillis = System.currentTimeMillis();
        advancedNativeWebview.setWebViewListener(new com.mbridge.msdk.mbjscommon.c.b() { // from class: com.mbridge.msdk.advanced.b.c.1
            @Override // com.mbridge.msdk.mbjscommon.c.b, com.mbridge.msdk.mbjscommon.windvane.d
            public final void a(WebView webView, int i2) {
                super.a(webView, i2);
                if (i2 == 1) {
                    com.mbridge.msdk.advanced.common.b.a(str2 + str3 + campaignEx.getRequestId(), true);
                    mBNativeAdvancedView.setH5Ready(true);
                    z.a("WindVaneWebView", "======渲染成功：ready");
                    com.mbridge.msdk.advanced.d.a.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx, str3, "", jCurrentTimeMillis, 1);
                    return;
                }
                mBNativeAdvancedView.setH5Ready(false);
                z.a("WindVaneWebView", "======渲染失败");
                com.mbridge.msdk.advanced.d.a.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx, str3, "readyState 2", jCurrentTimeMillis, 3);
            }

            @Override // com.mbridge.msdk.mbjscommon.c.b, com.mbridge.msdk.mbjscommon.windvane.d
            public final void a(WebView webView, int i2, String str4, String str5) {
                super.a(webView, i2, str4, str5);
                mBNativeAdvancedView.setH5Ready(false);
                z.a("WindVaneWebView", "======渲染失败");
                com.mbridge.msdk.advanced.d.a.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx, str3, "error code:" + i2 + str4, jCurrentTimeMillis, 3);
            }

            @Override // com.mbridge.msdk.mbjscommon.c.b, com.mbridge.msdk.mbjscommon.windvane.d
            public final void a(WebView webView, SslErrorHandler sslErrorHandler, SslError sslError) {
                super.a(webView, sslErrorHandler, sslError);
                mBNativeAdvancedView.setH5Ready(false);
                z.a("WindVaneWebView", "======渲染失败");
                com.mbridge.msdk.advanced.d.a.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx, str3, "error url:" + sslError.getUrl(), jCurrentTimeMillis, 3);
            }

            @Override // com.mbridge.msdk.mbjscommon.c.b, com.mbridge.msdk.mbjscommon.windvane.d
            public final void a(WebView webView, String str4) {
                super.a(webView, str4);
                if (!campaignEx.isHasMBTplMark()) {
                    com.mbridge.msdk.advanced.common.b.a(str2 + str3 + campaignEx.getRequestId(), true);
                    mBNativeAdvancedView.setH5Ready(true);
                    z.a("WindVaneWebView", "======渲染成功：finish");
                    com.mbridge.msdk.advanced.d.a.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx, str3, "", jCurrentTimeMillis, 1);
                }
                com.mbridge.msdk.advanced.js.b.a(webView);
            }
        });
        if (!advancedNativeWebview.isDestoryed()) {
            z.a(b, "======开始渲染：" + str);
            new Handler(Looper.getMainLooper()).post(new Runnable() { // from class: com.mbridge.msdk.advanced.b.c.2
                @Override // java.lang.Runnable
                public final void run() {
                    advancedNativeWebview.loadUrl(str);
                }
            });
            return;
        }
        mBNativeAdvancedView.setH5Ready(false);
        com.mbridge.msdk.advanced.d.a.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx, str3, "webview had destory", jCurrentTimeMillis, 3);
    }

    private static String b(String str) {
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

    public static boolean a(MBNativeAdvancedView mBNativeAdvancedView, CampaignEx campaignEx, String str, String str2) {
        boolean z = false;
        if (mBNativeAdvancedView == null) {
            z.d(b, "mbAdvancedNativeView  is null");
            return false;
        }
        boolean zA = true;
        if (!TextUtils.isEmpty(campaignEx.getVideoUrlEncode())) {
            zA = mBNativeAdvancedView.isVideoReady();
            z.d(b, "======isReady isVideoReady:" + zA);
        }
        if (zA && !TextUtils.isEmpty(campaignEx.getAdZip())) {
            zA = com.mbridge.msdk.advanced.common.b.a(str + str2 + campaignEx.getRequestId());
            z.d(b, "======isReady getAdZip:" + zA);
        }
        if (zA && TextUtils.isEmpty(campaignEx.getAdZip()) && !TextUtils.isEmpty(campaignEx.getAdHtml())) {
            zA = com.mbridge.msdk.advanced.common.b.a(str + str2 + campaignEx.getRequestId());
            z.d(b, "======isReady getAdHtml:" + zA);
        }
        if (TextUtils.isEmpty(campaignEx.getAdZip()) && TextUtils.isEmpty(campaignEx.getAdHtml())) {
            z.d(b, "======isReady getAdHtml  getAdZip all are empty");
        } else {
            z = zA;
        }
        if (!z || TextUtils.isEmpty(campaignEx.getendcard_url())) {
            return z;
        }
        boolean zIsEndCardReady = mBNativeAdvancedView.isEndCardReady();
        z.d(b, "======isReady isEndCardReady:" + zIsEndCardReady);
        return zIsEndCardReady;
    }

    public static void a(CampaignEx campaignEx, String str) {
        ArrayList arrayList = new ArrayList();
        arrayList.add(campaignEx);
        if (f3080a == null) {
            f3080a = f.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
        }
        f3080a.b(arrayList, str);
    }

    public static void a(String str) {
        if (f3080a == null) {
            f3080a = f.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
        }
        f3080a.a(str, 0, c);
    }
}
