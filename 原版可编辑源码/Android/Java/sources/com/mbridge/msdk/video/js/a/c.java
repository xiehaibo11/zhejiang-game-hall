package com.mbridge.msdk.video.js.a;

import android.app.Activity;
import android.content.Context;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.out.Campaign;
import com.mbridge.msdk.out.NativeListener;
import com.mbridge.msdk.video.js.c;
import com.sigmob.sdk.base.mta.PointCategory;

public class c implements com.mbridge.msdk.video.js.c {
    protected String j;
    protected com.mbridge.msdk.videocommon.d.c k;
    protected com.mbridge.msdk.click.b l;
    protected boolean a = false;
    protected boolean b = false;
    protected int c = 0;
    protected int d = 0;
    protected int e = 0;
    protected int f = 0;
    protected int g = 0;
    protected int h = 1;
    protected int i = -1;
    public c.a m = new a();
    protected int n = 2;

    @Override
    public void g() {
    }

    @Override
    public final void a(int i) {
        this.n = i;
    }

    @Override
    public final void c(int i) {
        this.c = i;
    }

    @Override
    public final void b(int i) {
        this.d = i;
    }

    @Override
    public final void d(int i) {
        this.e = i;
    }

    public final int k() {
        if (this.c == 0 && this.b) {
            this.c = 1;
        }
        return this.c;
    }

    public final int l() {
        if (this.d == 0 && this.b) {
            this.d = 1;
        }
        return this.d;
    }

    public final int m() {
        if (this.e == 0 && this.b) {
            this.e = 1;
        }
        return this.e;
    }

    @Override
    public final void e(int i) {
        this.f = i;
    }

    @Override
    public final int a() {
        return this.f;
    }

    @Override
    public final void f(int i) {
        this.g = i;
    }

    @Override
    public final int b() {
        return this.g;
    }

    public final boolean n() {
        return this.b;
    }

    @Override
    public final void a(boolean z) {
        z.a("DefaultJSCommon", "setIsShowingTransparent:" + z);
        this.b = z;
    }

    @Override
    public final boolean c() {
        return this.a;
    }

    @Override
    public final void b(boolean z) {
        this.a = z;
    }

    @Override
    public final void a(String str) {
        z.a("DefaultJSCommon", "setUnitId:" + str);
        this.j = str;
    }

    @Override
    public final void a(c.a aVar) {
        z.a("DefaultJSCommon", "setTrackingListener:" + aVar);
        this.m = aVar;
    }

    @Override
    public final void a(com.mbridge.msdk.videocommon.d.c cVar) {
        z.a("DefaultJSCommon", "setSetting:" + cVar);
        this.k = cVar;
    }

    @Override
    public final void f() {
        z.a("DefaultJSCommon", "release");
        com.mbridge.msdk.click.b bVar = this.l;
        if (bVar != null) {
            bVar.a(false);
            this.l.a((NativeListener.NativeTrackingListener) null);
            this.l.a();
        }
    }

    @Override
    public void a(int i, String str) {
        z.a("DefaultJSCommon", "statistics,type:" + i + ",json:" + str);
    }

    @Override
    public final void g(int i) {
        this.i = i;
    }

    @Override
    public final int h() {
        return this.i;
    }

    @Override
    public String h(int i) {
        z.a("DefaultJSCommon", "getSDKInfo");
        return "{}";
    }

    @Override
    public final void i(int i) {
        z.a("DefaultJSCommon", "setAlertDialogRole " + i);
        this.h = i;
    }

    @Override
    public final int i() {
        z.a("DefaultJSCommon", "getAlertDialogRole " + this.h);
        return this.h;
    }

    @Override
    public void a(Activity activity) {
        z.a("DefaultJSCommon", "setActivity ");
    }

    @Override
    public void a(Context context) {
        z.a("DefaultJSCommon", "setViewContext ");
    }

    @Override
    public void a(com.mbridge.msdk.video.bt.module.a.b bVar) {
        z.a("DefaultJSCommon", "setInstallDialogCallback ");
    }

    @Override
    public String d() {
        z.a("DefaultJSCommon", PointCategory.INIT);
        return "{}";
    }

    @Override
    public void click(int i, String str) {
        z.a("DefaultJSCommon", "click:type" + i + ",pt:" + str);
    }

    @Override
    public void handlerH5Exception(int i, String str) {
        z.a("DefaultJSCommon", "handlerH5Exception,code=" + i + ",msg:" + str);
    }

    @Override
    public void e() {
        z.a("DefaultJSCommon", PointCategory.FINISH);
    }

    @Override
    public void b(String str) {
        z.a("DefaultJSCommon", "setNotchArea");
    }

    @Override
    public String j() {
        z.a("DefaultJSCommon", "getNotchArea");
        return null;
    }

    public static class b implements c.a {
        private com.mbridge.msdk.video.js.c a;
        private c.a b;

        public b(com.mbridge.msdk.video.js.c cVar, c.a aVar) {
            this.a = cVar;
            this.b = aVar;
        }

        @Override
        public final boolean onInterceptDefaultLoadingDialog() {
            c.a aVar = this.b;
            return aVar != null && aVar.onInterceptDefaultLoadingDialog();
        }

        @Override
        public final void onShowLoading(Campaign campaign) {
            c.a aVar = this.b;
            if (aVar != null) {
                aVar.onShowLoading(campaign);
            }
        }

        @Override
        public final void onDismissLoading(Campaign campaign) {
            c.a aVar = this.b;
            if (aVar != null) {
                aVar.onDismissLoading(campaign);
            }
        }

        @Override
        public final void onStartRedirection(Campaign campaign, String str) {
            c.a aVar = this.b;
            if (aVar != null) {
                aVar.onStartRedirection(campaign, str);
            }
        }

        @Override
        public final void onFinishRedirection(Campaign campaign, String str) {
            c.a aVar = this.b;
            if (aVar != null) {
                aVar.onFinishRedirection(campaign, str);
            }
            com.mbridge.msdk.video.js.c cVar = this.a;
            if (cVar != null) {
                cVar.e();
            }
        }

        @Override
        public final void onRedirectionFailed(Campaign campaign, String str) {
            c.a aVar = this.b;
            if (aVar != null) {
                aVar.onRedirectionFailed(campaign, str);
            }
            com.mbridge.msdk.video.js.c cVar = this.a;
            if (cVar != null) {
                cVar.e();
            }
        }

        @Override
        public final void onDownloadStart(Campaign campaign) {
            c.a aVar = this.b;
            if (aVar != null) {
                aVar.onDownloadStart(campaign);
            }
        }

        @Override
        public final void onDownloadFinish(Campaign campaign) {
            c.a aVar = this.b;
            if (aVar != null) {
                aVar.onDownloadFinish(campaign);
            }
        }

        @Override
        public final void onDownloadProgress(int i) {
            c.a aVar = this.b;
            if (aVar != null) {
                aVar.onDownloadProgress(i);
            }
        }

        @Override
        public final void a() {
            c.a aVar = this.b;
            if (aVar != null) {
                aVar.a();
            }
        }

        @Override
        public final void a(boolean z) {
            c.a aVar = this.b;
            if (aVar != null) {
                aVar.a(z);
            }
        }

        @Override
        public final void a(int i, String str) {
            c.a aVar = this.b;
            if (aVar != null) {
                aVar.a(i, str);
            }
        }

        @Override
        public final void b() {
            c.a aVar = this.b;
            if (aVar != null) {
                aVar.b();
            }
        }
    }

    public static class a implements c.a {
        @Override
        public boolean onInterceptDefaultLoadingDialog() {
            z.a("DefaultJSCommon", "onInterceptDefaultLoadingDialog");
            return false;
        }

        @Override
        public void onShowLoading(Campaign campaign) {
            z.a("DefaultJSCommon", "onShowLoading,campaign:" + campaign);
        }

        @Override
        public void onDismissLoading(Campaign campaign) {
            z.a("DefaultJSCommon", "onDismissLoading,campaign:" + campaign);
        }

        @Override
        public void onStartRedirection(Campaign campaign, String str) {
            z.a("DefaultJSCommon", "onStartRedirection,campaign:" + campaign + ",url:" + str);
        }

        @Override
        public void onFinishRedirection(Campaign campaign, String str) {
            z.a("DefaultJSCommon", "onFinishRedirection,campaign:" + campaign + ",url:" + str);
        }

        @Override
        public void onRedirectionFailed(Campaign campaign, String str) {
            z.a("DefaultJSCommon", "onFinishRedirection,campaign:" + campaign + ",url:" + str);
        }

        @Override
        public void onDownloadStart(Campaign campaign) {
            z.a("DefaultJSCommon", "onDownloadStart,campaign:" + campaign);
        }

        @Override
        public void onDownloadFinish(Campaign campaign) {
            z.a("DefaultJSCommon", "onDownloadFinish,campaign:" + campaign);
        }

        @Override
        public void onDownloadProgress(int i) {
            z.a("DefaultJSCommon", "onDownloadProgress,progress:" + i);
        }

        @Override
        public void a() {
            z.a("DefaultJSCommon", "onInitSuccess");
        }

        @Override
        public void a(boolean z) {
            z.a("DefaultJSCommon", "onStartInstall");
        }

        @Override
        public void a(int i, String str) {
            z.a("DefaultJSCommon", "onH5Error,code:" + i + "，msg:" + str);
        }

        @Override
        public void b() {
            z.a("DefaultJSCommon", "videoLocationReady");
        }
    }
}
