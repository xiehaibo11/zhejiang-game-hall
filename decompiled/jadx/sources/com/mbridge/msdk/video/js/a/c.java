package com.mbridge.msdk.video.js.a;

import android.app.Activity;
import android.content.Context;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.out.Campaign;
import com.mbridge.msdk.out.NativeListener;
import com.mbridge.msdk.video.js.c;
import com.sigmob.sdk.base.mta.PointCategory;

/* JADX INFO: compiled from: DefaultJSCommon.java */
/* JADX INFO: loaded from: classes3.dex */
public class c implements com.mbridge.msdk.video.js.c {
    protected String j;
    protected com.mbridge.msdk.videocommon.d.c k;
    protected com.mbridge.msdk.click.b l;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected boolean f4192a = false;
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

    @Override // com.mbridge.msdk.video.js.c
    public void g() {
    }

    @Override // com.mbridge.msdk.video.js.c
    public final void a(int i) {
        this.n = i;
    }

    @Override // com.mbridge.msdk.video.js.c
    public final void c(int i) {
        this.c = i;
    }

    @Override // com.mbridge.msdk.video.js.c
    public final void b(int i) {
        this.d = i;
    }

    @Override // com.mbridge.msdk.video.js.c
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

    @Override // com.mbridge.msdk.video.js.c
    public final void e(int i) {
        this.f = i;
    }

    @Override // com.mbridge.msdk.video.js.c
    public final int a() {
        return this.f;
    }

    @Override // com.mbridge.msdk.video.js.c
    public final void f(int i) {
        this.g = i;
    }

    @Override // com.mbridge.msdk.video.js.c
    public final int b() {
        return this.g;
    }

    public final boolean n() {
        return this.b;
    }

    @Override // com.mbridge.msdk.video.js.c
    public final void a(boolean z) {
        z.a("DefaultJSCommon", "setIsShowingTransparent:" + z);
        this.b = z;
    }

    @Override // com.mbridge.msdk.video.js.c
    public final boolean c() {
        return this.f4192a;
    }

    @Override // com.mbridge.msdk.video.js.c
    public final void b(boolean z) {
        this.f4192a = z;
    }

    @Override // com.mbridge.msdk.video.js.c
    public final void a(String str) {
        z.a("DefaultJSCommon", "setUnitId:" + str);
        this.j = str;
    }

    @Override // com.mbridge.msdk.video.js.c
    public final void a(c.a aVar) {
        z.a("DefaultJSCommon", "setTrackingListener:" + aVar);
        this.m = aVar;
    }

    @Override // com.mbridge.msdk.video.js.c
    public final void a(com.mbridge.msdk.videocommon.d.c cVar) {
        z.a("DefaultJSCommon", "setSetting:" + cVar);
        this.k = cVar;
    }

    @Override // com.mbridge.msdk.video.js.c
    public final void f() {
        z.a("DefaultJSCommon", "release");
        com.mbridge.msdk.click.b bVar = this.l;
        if (bVar != null) {
            bVar.a(false);
            this.l.a((NativeListener.NativeTrackingListener) null);
            this.l.a();
        }
    }

    @Override // com.mbridge.msdk.video.js.c
    public void a(int i, String str) {
        z.a("DefaultJSCommon", "statistics,type:" + i + ",json:" + str);
    }

    @Override // com.mbridge.msdk.video.js.c
    public final void g(int i) {
        this.i = i;
    }

    @Override // com.mbridge.msdk.video.js.c
    public final int h() {
        return this.i;
    }

    @Override // com.mbridge.msdk.video.js.c
    public String h(int i) {
        z.a("DefaultJSCommon", "getSDKInfo");
        return "{}";
    }

    @Override // com.mbridge.msdk.video.js.c
    public final void i(int i) {
        z.a("DefaultJSCommon", "setAlertDialogRole " + i);
        this.h = i;
    }

    @Override // com.mbridge.msdk.video.js.c
    public final int i() {
        z.a("DefaultJSCommon", "getAlertDialogRole " + this.h);
        return this.h;
    }

    @Override // com.mbridge.msdk.video.js.c
    public void a(Activity activity) {
        z.a("DefaultJSCommon", "setActivity ");
    }

    @Override // com.mbridge.msdk.video.js.c
    public void a(Context context) {
        z.a("DefaultJSCommon", "setViewContext ");
    }

    @Override // com.mbridge.msdk.video.js.c
    public void a(com.mbridge.msdk.video.bt.module.a.b bVar) {
        z.a("DefaultJSCommon", "setInstallDialogCallback ");
    }

    @Override // com.mbridge.msdk.video.js.c
    public String d() {
        z.a("DefaultJSCommon", PointCategory.INIT);
        return "{}";
    }

    @Override // com.mbridge.msdk.video.js.d
    public void click(int i, String str) {
        z.a("DefaultJSCommon", "click:type" + i + ",pt:" + str);
    }

    @Override // com.mbridge.msdk.video.js.d
    public void handlerH5Exception(int i, String str) {
        z.a("DefaultJSCommon", "handlerH5Exception,code=" + i + ",msg:" + str);
    }

    @Override // com.mbridge.msdk.video.js.c
    public void e() {
        z.a("DefaultJSCommon", PointCategory.FINISH);
    }

    @Override // com.mbridge.msdk.video.js.c
    public void b(String str) {
        z.a("DefaultJSCommon", "setNotchArea");
    }

    @Override // com.mbridge.msdk.video.js.c
    public String j() {
        z.a("DefaultJSCommon", "getNotchArea");
        return null;
    }

    /* JADX INFO: compiled from: DefaultJSCommon.java */
    public static class b implements c.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private com.mbridge.msdk.video.js.c f4193a;
        private c.a b;

        public b(com.mbridge.msdk.video.js.c cVar, c.a aVar) {
            this.f4193a = cVar;
            this.b = aVar;
        }

        @Override // com.mbridge.msdk.out.NativeListener.NativeTrackingListener
        public final boolean onInterceptDefaultLoadingDialog() {
            c.a aVar = this.b;
            return aVar != null && aVar.onInterceptDefaultLoadingDialog();
        }

        @Override // com.mbridge.msdk.out.NativeListener.NativeTrackingListener
        public final void onShowLoading(Campaign campaign) {
            c.a aVar = this.b;
            if (aVar != null) {
                aVar.onShowLoading(campaign);
            }
        }

        @Override // com.mbridge.msdk.out.NativeListener.NativeTrackingListener
        public final void onDismissLoading(Campaign campaign) {
            c.a aVar = this.b;
            if (aVar != null) {
                aVar.onDismissLoading(campaign);
            }
        }

        @Override // com.mbridge.msdk.out.BaseTrackingListener
        public final void onStartRedirection(Campaign campaign, String str) {
            c.a aVar = this.b;
            if (aVar != null) {
                aVar.onStartRedirection(campaign, str);
            }
        }

        @Override // com.mbridge.msdk.out.BaseTrackingListener
        public final void onFinishRedirection(Campaign campaign, String str) {
            c.a aVar = this.b;
            if (aVar != null) {
                aVar.onFinishRedirection(campaign, str);
            }
            com.mbridge.msdk.video.js.c cVar = this.f4193a;
            if (cVar != null) {
                cVar.e();
            }
        }

        @Override // com.mbridge.msdk.out.BaseTrackingListener
        public final void onRedirectionFailed(Campaign campaign, String str) {
            c.a aVar = this.b;
            if (aVar != null) {
                aVar.onRedirectionFailed(campaign, str);
            }
            com.mbridge.msdk.video.js.c cVar = this.f4193a;
            if (cVar != null) {
                cVar.e();
            }
        }

        @Override // com.mbridge.msdk.out.NativeListener.NativeTrackingListener
        public final void onDownloadStart(Campaign campaign) {
            c.a aVar = this.b;
            if (aVar != null) {
                aVar.onDownloadStart(campaign);
            }
        }

        @Override // com.mbridge.msdk.out.NativeListener.NativeTrackingListener
        public final void onDownloadFinish(Campaign campaign) {
            c.a aVar = this.b;
            if (aVar != null) {
                aVar.onDownloadFinish(campaign);
            }
        }

        @Override // com.mbridge.msdk.out.NativeListener.NativeTrackingListener
        public final void onDownloadProgress(int i) {
            c.a aVar = this.b;
            if (aVar != null) {
                aVar.onDownloadProgress(i);
            }
        }

        @Override // com.mbridge.msdk.video.js.c.a
        public final void a() {
            c.a aVar = this.b;
            if (aVar != null) {
                aVar.a();
            }
        }

        @Override // com.mbridge.msdk.video.js.c.a
        public final void a(boolean z) {
            c.a aVar = this.b;
            if (aVar != null) {
                aVar.a(z);
            }
        }

        @Override // com.mbridge.msdk.video.js.c.a
        public final void a(int i, String str) {
            c.a aVar = this.b;
            if (aVar != null) {
                aVar.a(i, str);
            }
        }

        @Override // com.mbridge.msdk.video.js.c.a
        public final void b() {
            c.a aVar = this.b;
            if (aVar != null) {
                aVar.b();
            }
        }
    }

    /* JADX INFO: compiled from: DefaultJSCommon.java */
    public static class a implements c.a {
        @Override // com.mbridge.msdk.out.NativeListener.NativeTrackingListener
        public boolean onInterceptDefaultLoadingDialog() {
            z.a("DefaultJSCommon", "onInterceptDefaultLoadingDialog");
            return false;
        }

        @Override // com.mbridge.msdk.out.NativeListener.NativeTrackingListener
        public void onShowLoading(Campaign campaign) {
            z.a("DefaultJSCommon", "onShowLoading,campaign:" + campaign);
        }

        @Override // com.mbridge.msdk.out.NativeListener.NativeTrackingListener
        public void onDismissLoading(Campaign campaign) {
            z.a("DefaultJSCommon", "onDismissLoading,campaign:" + campaign);
        }

        @Override // com.mbridge.msdk.out.BaseTrackingListener
        public void onStartRedirection(Campaign campaign, String str) {
            z.a("DefaultJSCommon", "onStartRedirection,campaign:" + campaign + ",url:" + str);
        }

        @Override // com.mbridge.msdk.out.BaseTrackingListener
        public void onFinishRedirection(Campaign campaign, String str) {
            z.a("DefaultJSCommon", "onFinishRedirection,campaign:" + campaign + ",url:" + str);
        }

        @Override // com.mbridge.msdk.out.BaseTrackingListener
        public void onRedirectionFailed(Campaign campaign, String str) {
            z.a("DefaultJSCommon", "onFinishRedirection,campaign:" + campaign + ",url:" + str);
        }

        @Override // com.mbridge.msdk.out.NativeListener.NativeTrackingListener
        public void onDownloadStart(Campaign campaign) {
            z.a("DefaultJSCommon", "onDownloadStart,campaign:" + campaign);
        }

        @Override // com.mbridge.msdk.out.NativeListener.NativeTrackingListener
        public void onDownloadFinish(Campaign campaign) {
            z.a("DefaultJSCommon", "onDownloadFinish,campaign:" + campaign);
        }

        @Override // com.mbridge.msdk.out.NativeListener.NativeTrackingListener
        public void onDownloadProgress(int i) {
            z.a("DefaultJSCommon", "onDownloadProgress,progress:" + i);
        }

        @Override // com.mbridge.msdk.video.js.c.a
        public void a() {
            z.a("DefaultJSCommon", "onInitSuccess");
        }

        @Override // com.mbridge.msdk.video.js.c.a
        public void a(boolean z) {
            z.a("DefaultJSCommon", "onStartInstall");
        }

        @Override // com.mbridge.msdk.video.js.c.a
        public void a(int i, String str) {
            z.a("DefaultJSCommon", "onH5Error,code:" + i + "，msg:" + str);
        }

        @Override // com.mbridge.msdk.video.js.c.a
        public void b() {
            z.a("DefaultJSCommon", "videoLocationReady");
        }
    }
}
