package com.mbridge.msdk.foundation.webview;

import android.content.Context;
import android.content.Intent;
import android.graphics.Bitmap;
import android.net.Uri;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import android.webkit.WebView;
import com.mbridge.msdk.click.CommonJumpLoader;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.ad;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.foundation.webview.BrowserView;
import com.mbridge.msdk.out.BaseTrackingListener;
import com.ss.android.download.api.constant.BaseConstants;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;

public class a implements BrowserView.a {
    private static String a = a.class.getSimpleName();
    private Context b;
    private BaseTrackingListener c;
    private CampaignEx d;
    private BrowserView f;
    private com.mbridge.msdk.click.b h;
    private long i;
    private int j;
    private CommonJumpLoader.JumpLoaderResult l;
    private String m;
    private boolean n;
    private boolean e = true;
    private boolean k = false;
    private final Runnable o = new Runnable() {
        @Override
        public final void run() {
            z.d(a.a, "webview js！超时上限：" + a.this.j + "ms");
            if (a.this.h != null && a.this.l != null) {
                a.this.l.setSuccess(false);
                a.this.l.setUrl(a.this.m);
                a.this.l.setType(2);
                a.this.l.setExceptionMsg("linktype 8 time out");
                a.this.h.a(a.this.l, a.this.d, 1, false);
            }
            a aVar = a.this;
            if (aVar.d(null, aVar.m) && !a.this.k) {
                a.this.k = true;
                a aVar2 = a.this;
                aVar2.a(aVar2.b, a.this.m, a.this.d);
            }
            if (a.this.c != null) {
                a.this.c.onFinishRedirection(a.this.d, a.this.m);
            }
        }
    };
    private Handler g = new Handler(Looper.getMainLooper());

    @Override
    public final void a() {
    }

    public a(Context context, CampaignEx campaignEx, com.mbridge.msdk.click.b bVar, BrowserView browserView, BaseTrackingListener baseTrackingListener) {
        this.j = 10000;
        this.l = null;
        this.b = context;
        this.d = campaignEx;
        this.f = browserView;
        this.c = baseTrackingListener;
        com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
        aVarB = aVarB == null ? com.mbridge.msdk.c.b.a().b() : aVarB;
        this.h = bVar;
        this.l = new CommonJumpLoader.JumpLoaderResult();
        this.j = (int) aVarB.ac();
    }

    @Override
    public final void a(WebView webView, String str) {
        if (this.i == 0) {
            this.i = System.currentTimeMillis();
            if (!this.n) {
                this.n = true;
                c();
            }
        }
        this.m = str;
        this.e = true;
    }

    @Override
    public final void a(WebView webView, String str, Bitmap bitmap) {
        if (this.i == 0) {
            this.i = System.currentTimeMillis();
            if (!this.n) {
                this.n = true;
                c();
            }
            this.k = false;
        }
        this.m = str;
        this.e = true;
    }

    @Override
    public final boolean b(WebView webView, final String str) {
        z.d(a, "shouldOverrideUrlLoading1  " + str);
        this.e = false;
        if (ad.a.a(str) && ad.a.a(this.b, str, null)) {
            this.k = true;
        }
        boolean zE = e(webView, str);
        if (zE) {
            this.i = 0L;
            this.e = false;
            d();
            com.mbridge.msdk.foundation.same.f.b.b().execute(new Runnable() {
                @Override
                public final void run() {
                    if (a.this.h != null && a.this.l != null) {
                        a.this.l.setSuccess(true);
                        a.this.l.setUrl(str);
                        a.this.l.setType(2);
                        a.this.h.a(a.this.l, a.this.d, 1, true);
                    }
                    if (a.this.c != null) {
                        a.this.c.onFinishRedirection(a.this.d, str);
                    }
                }
            });
        }
        return zE;
    }

    @Override
    public final void c(WebView webView, final String str) {
        z.d(a, "onPageFinished1  " + str);
        if (this.e) {
            this.i = 0L;
            this.e = false;
            com.mbridge.msdk.foundation.same.f.b.b().execute(new Runnable() {
                @Override
                public final void run() {
                    if (a.this.c != null) {
                        a.this.c.onFinishRedirection(a.this.d, str);
                    }
                    if (a.this.h == null || a.this.l == null) {
                        return;
                    }
                    a.this.l.setSuccess(true);
                    a.this.l.setUrl(str);
                    a.this.l.setType(2);
                    a.this.h.a(a.this.l, a.this.d, 1, true);
                }
            });
            if (TextUtils.isEmpty(str)) {
                return;
            }
            d();
            Uri uri = Uri.parse(str);
            if (!(uri.getScheme().equals("http") || uri.getScheme().equals("https")) || this.k) {
                return;
            }
            this.k = true;
            a(this.b, str, this.d);
        }
    }

    @Override
    public final void a(WebView webView, int i, final String str, final String str2) {
        z.c(a, str);
        d();
        com.mbridge.msdk.foundation.same.f.b.b().execute(new Runnable() {
            @Override
            public final void run() {
                if (a.this.c != null) {
                    a.this.c.onFinishRedirection(a.this.d, str2);
                }
                if (a.this.h == null || a.this.l == null) {
                    return;
                }
                a.this.l.setSuccess(false);
                a.this.l.setUrl(str2);
                a.this.l.setType(2);
                a.this.l.setExceptionMsg(str);
                a.this.h.a(a.this.l, a.this.d, 1, true);
            }
        });
        if (!d(webView, str2) || this.k) {
            return;
        }
        this.k = true;
        a(this.b, str2, this.d);
    }

    private void a(Context context, String str, CampaignEx campaignEx) {
        if (context == null) {
            return;
        }
        try {
            Class.forName("com.mbridge.msdk.activity.MBCommonActivity");
            Intent intent = new Intent(context, Class.forName("com.mbridge.msdk.activity.MBCommonActivity"));
            if (TextUtils.isEmpty(str)) {
                return;
            }
            b.a.put(str, this.f);
            if (ad.a.b(str)) {
                str = "https://play.google.com/store/apps/details?id=" + str.replace(BaseConstants.MARKET_PREFIX, "");
            }
            intent.putExtra("url", str);
            z.b("url", "webview url = " + str);
            intent.setFlags(805306368);
            intent.putExtra("mvcommon", campaignEx);
            context.startActivity(intent);
        } catch (Exception unused) {
            ad.a(context, str, this.c);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:34:0x0084  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private boolean d(WebView webView, String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return true;
            }
            Uri uri = Uri.parse(str);
            if (uri.getScheme().equals("http") || uri.getScheme().equals("https")) {
                return true;
            }
            if (uri.getScheme().equals("intent")) {
                Intent uri2 = Intent.parseUri(str, 1);
                try {
                    String str2 = uri2.getPackage();
                    if (!TextUtils.isEmpty(str2)) {
                        if (this.b.getPackageManager().getLaunchIntentForPackage(str2) != null) {
                            return false;
                        }
                    }
                } catch (Throwable th) {
                    z.d(a, th.getMessage());
                }
                try {
                    String stringExtra = uri2.getStringExtra("browser_fallback_url");
                    if (!TextUtils.isEmpty(stringExtra)) {
                        Uri uri3 = Uri.parse(str);
                        if (!uri3.getScheme().equals("http")) {
                            boolean z = uri3.getScheme().equals("https");
                            if (z) {
                                return true;
                            }
                            str = stringExtra;
                        }
                    }
                } catch (Throwable th2) {
                    z.d(a, th2.getMessage());
                }
            }
            if (!com.mbridge.msdk.click.c.e(this.b, str)) {
                return true;
            }
            z.d(a, "openDeepLink");
            return false;
        } catch (Throwable th3) {
            z.d(a, th3.getMessage());
            return true;
        }
    }

    private boolean e(WebView webView, String str) {
        String str2;
        try {
        } catch (Throwable th) {
            z.d(a, th.getMessage());
            return false;
        }
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        Uri uri = Uri.parse(str);
        if (uri.getScheme().equals("http") || uri.getScheme().equals("https")) {
            return false;
        }
        if (uri.getScheme().equals("intent")) {
            Intent uri2 = Intent.parseUri(str, 1);
            try {
                str2 = uri2.getPackage();
            } catch (Throwable th2) {
                z.d(a, th2.getMessage());
            }
            if (!TextUtils.isEmpty(str2) && this.b.getPackageManager().getLaunchIntentForPackage(str2) != null) {
                uri2.setFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
                this.b.startActivity(uri2);
                this.k = true;
                return true;
            }
            try {
                String stringExtra = uri2.getStringExtra("browser_fallback_url");
                if (!TextUtils.isEmpty(stringExtra)) {
                    Uri uri3 = Uri.parse(str);
                    if (uri3.getScheme().equals("http") || uri3.getScheme().equals("https")) {
                        webView.loadUrl(stringExtra);
                        return false;
                    }
                    str = stringExtra;
                }
            } catch (Throwable th3) {
                z.d(a, th3.getMessage());
            }
            z.d(a, th.getMessage());
            return false;
        }
        if (!com.mbridge.msdk.click.c.e(this.b, str)) {
            return false;
        }
        z.d(a, "openDeepLink");
        this.k = true;
        return true;
    }

    private void c() {
        this.g.postDelayed(this.o, this.j);
    }

    private void d() {
        this.g.removeCallbacks(this.o);
    }
}
