package com.mbridge.msdk.advanced.b;

import android.content.Context;
import android.graphics.Bitmap;
import android.net.http.SslError;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.text.TextUtils;
import android.webkit.SslErrorHandler;
import android.webkit.WebView;
import com.iab.omid.library.mmadbridge.ScriptInjector;
import com.loc.at;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.advanced.view.MBNativeAdvancedView;
import com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview;
import com.mbridge.msdk.c.d;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.db.l;
import com.mbridge.msdk.foundation.download.download.H5DownLoadManager;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.CampaignUnit;
import com.mbridge.msdk.foundation.same.b.e;
import com.mbridge.msdk.foundation.tools.SameMD5;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.ai;
import com.mbridge.msdk.foundation.tools.ak;
import com.mbridge.msdk.foundation.tools.z;
import com.tkay.core.c.d;
import com.tkay.expressad.foundation.g.a.f;
import java.io.File;
import java.io.FileOutputStream;
import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;

public final class a {
    private static String a = "NativeAdvancedLoadManager";
    private String b;
    private String c;
    private long d;
    private com.mbridge.msdk.advanced.a.a e;
    private MBNativeAdvancedView g;
    private d h;
    private CampaignEx i;
    private int j;
    private int k;
    private int l;
    private int m;
    private String n;
    private int o;
    private boolean p;
    private volatile boolean q;
    private com.mbridge.msdk.videocommon.listener.a r;
    private H5DownLoadManager.ZipDownloadListener s;
    private H5DownLoadManager.ZipDownloadListener t;
    private String u;
    private int v;
    private String w = "";
    private Handler x = new Handler(Looper.getMainLooper()) {
        @Override
        public final void handleMessage(Message message) throws Throwable {
            Object obj;
            super.handleMessage(message);
            int i = message.what;
            if (i == 1) {
                Object obj2 = message.obj;
                int i2 = message.arg1;
                if (obj2 == null || !(obj2 instanceof CampaignEx)) {
                    return;
                }
                CampaignEx campaignEx = (CampaignEx) obj2;
                a.a(a.this, H5DownLoadManager.getInstance().getH5ResAddress(campaignEx.getAdZip()), campaignEx, i2);
                return;
            }
            if (i == 2) {
                Object obj3 = message.obj;
                if (obj3 == null || !(obj3 instanceof String)) {
                    return;
                }
                a.this.a(obj3.toString(), a.this.n, a.this.o);
                return;
            }
            if (i == 3) {
                Object obj4 = message.obj;
                if (obj4 == null || !(obj4 instanceof CampaignEx)) {
                    return;
                }
                a aVar = a.this;
                aVar.b((CampaignEx) obj4, aVar.o);
                return;
            }
            if (i == 4) {
                Object obj5 = message.obj;
                if (obj5 == null || !(obj5 instanceof CampaignEx)) {
                    return;
                }
                if (a.this.g != null) {
                    a.this.g.setEndCardReady(true);
                }
                a aVar2 = a.this;
                aVar2.b((CampaignEx) obj5, aVar2.o);
                return;
            }
            if (i == 5 && (obj = message.obj) != null && (obj instanceof CampaignEx)) {
                if (a.this.g != null) {
                    a.this.g.setVideoReady(true);
                }
                a aVar3 = a.this;
                aVar3.b((CampaignEx) obj, aVar3.o);
            }
        }
    };
    private Runnable y = new Runnable() {
        @Override
        public final void run() throws Throwable {
            a aVar = a.this;
            aVar.a("load timeout", aVar.n, a.this.o);
        }
    };
    private Context f = com.mbridge.msdk.foundation.controller.a.f().j();

    public a(String str, String str2, long j) {
        this.c = str;
        this.b = str2;
    }

    public final void a(d dVar) {
        this.h = dVar;
    }

    public final void a(MBNativeAdvancedView mBNativeAdvancedView) {
        this.g = mBNativeAdvancedView;
    }

    public final void a(int i) {
        this.j = i;
    }

    public final void a(int i, int i2) {
        this.m = i;
        this.l = i2;
    }

    public final void a(String str, int i) {
        CampaignEx campaignExA;
        List<Integer> listS;
        this.q = false;
        this.n = str;
        this.o = i;
        this.i = null;
        if (this.g == null) {
            a("MBAdvancedNativeView is null", str, i);
            return;
        }
        if (TextUtils.isEmpty(str)) {
            campaignExA = c.a(this.g, this.c, this.b, str, this.j, false, false);
        } else {
            campaignExA = c.a(this.g, this.c, this.b, str, this.j, false, true);
        }
        long timestamp = campaignExA != null ? campaignExA.getTimestamp() : 0L;
        d dVar = this.h;
        if (dVar != null && dVar.n() == 1 && this.g != null && campaignExA != null) {
            a(campaignExA, i);
            return;
        }
        this.p = false;
        d dVar2 = this.h;
        if (dVar2 != null && (listS = dVar2.s()) != null && listS.size() > 0) {
            this.d = listS.get(0).intValue() * 1000;
        } else {
            this.d = 30000L;
        }
        z.a(a, "开始从V3请求新的 offer，超时 ：" + this.d);
        if (this.h == null || timestamp <= 0 || !TextUtils.isEmpty(str)) {
            a(this.d);
            a(this.f, str, i);
        } else if (System.currentTimeMillis() - timestamp > this.h.x() * 1000) {
            a(this.d);
            a(this.f, str, i);
        } else {
            a(campaignExA, i);
        }
    }

    private void a(long j) {
        this.x.postDelayed(this.y, j);
    }

    public final String a() {
        return this.w;
    }

    private void a(Context context, final String str, final int i) throws Throwable {
        try {
            if (context == null) {
                a("Context is null", str, i);
                return;
            }
            if (ai.a(this.b)) {
                a("UnitId is null", str, i);
                return;
            }
            try {
                c.a(this.b);
            } catch (Throwable th) {
                z.d(a, th.getMessage());
            }
            z.b(a, "load 开始准备请求参数");
            com.mbridge.msdk.foundation.same.net.g.d dVarA = a(i, this.u);
            if (dVarA == null) {
                z.b(a, "load 请求参数为空 load失败");
                a("Load param is null", str, i);
                return;
            }
            if (dVarA != null && !TextUtils.isEmpty(str)) {
                dVarA.a("token", str);
            }
            String strG = ae.g(this.b);
            if (!TextUtils.isEmpty(strG)) {
                dVarA.a(at.j, strG);
            }
            com.mbridge.msdk.advanced.e.a aVar = new com.mbridge.msdk.advanced.e.a(context);
            com.mbridge.msdk.advanced.e.c cVar = new com.mbridge.msdk.advanced.e.c(i) {
                @Override
                public final void a(CampaignUnit campaignUnit, final int i2) throws Throwable {
                    try {
                        z.b(a.a, "onLoadCompaginSuccess 数据刚请求回来");
                        a.a(a.this, campaignUnit, i2, a.this.b, str);
                        a.this.w = campaignUnit.getRequestId();
                    } catch (Exception e) {
                        e.printStackTrace();
                        z.b(a.a, "onLoadCompaginSuccess 数据刚请求失败");
                        if (a.this.x != null) {
                            a.this.x.post(new Runnable() {
                                @Override
                                public final void run() throws Throwable {
                                    a.this.a("Exception after load success", str, i2);
                                }
                            });
                        }
                        a.this.v = 0;
                    }
                }

                @Override
                public final void a(int i2, final String str2) {
                    z.d(a.a, str2);
                    z.b(a.a, "onLoadCompaginFailed load failed errorCode:" + i2 + " msg:" + str2);
                    if (a.this.x != null) {
                        a.this.x.post(new Runnable() {
                            @Override
                            public final void run() throws Throwable {
                                a.this.a(str2, str, i);
                            }
                        });
                    }
                    a.this.v = 0;
                }
            };
            cVar.a(str);
            cVar.setUnitId(this.b);
            cVar.setPlacementId(this.c);
            cVar.setAdType(com.tkay.expressad.foundation.g.a.aX);
            aVar.choiceV3OrV5BySetting(1, dVarA, cVar, str);
        } catch (Exception e) {
            e.printStackTrace();
            a("Load exception", str, i);
            this.v = 0;
        }
    }

    private com.mbridge.msdk.foundation.same.net.g.d a(int i, String str) throws Throwable {
        String strK = com.mbridge.msdk.foundation.controller.a.f().k();
        String md5 = SameMD5.getMD5(com.mbridge.msdk.foundation.controller.a.f().k() + com.mbridge.msdk.foundation.controller.a.f().l());
        com.mbridge.msdk.foundation.same.net.g.d dVar = new com.mbridge.msdk.foundation.same.net.g.d();
        String strA = com.mbridge.msdk.foundation.same.a.d.a(this.b, f.g);
        String strA2 = com.mbridge.msdk.advanced.common.a.a.a(this.f, this.b);
        String strB = ae.b(this.f, this.b);
        String strA3 = com.mbridge.msdk.advanced.common.a.a.a();
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "app_id", strK);
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "unit_id", this.b);
        if (!TextUtils.isEmpty(this.c)) {
            com.mbridge.msdk.foundation.same.net.f.b.a(dVar, MBridgeConstans.PLACEMENT_ID, this.c);
        }
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "sign", md5);
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "req_type", i + "");
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "ad_num", "1");
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "tnum", "1");
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "only_impression", "1");
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "ping_mode", "1");
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "ttc_ids", strA2);
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, com.mbridge.msdk.foundation.same.net.g.d.b, strA);
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, com.mbridge.msdk.foundation.same.net.g.d.c, strB);
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, d.a.O, strA3);
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, com.mbridge.msdk.foundation.same.net.g.d.a, str);
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "ad_type", com.tkay.expressad.foundation.g.a.aX + "");
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "offset", this.v + "");
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "unit_size", this.m + "x" + this.l);
        return dVar;
    }

    public final void a(com.mbridge.msdk.advanced.a.a aVar) {
        this.e = aVar;
    }

    public final void b() {
        if (this.e != null) {
            this.e = null;
        }
        a("LoadManager release", this.n, this.o);
        if (this.r != null) {
            this.r = null;
        }
        if (this.s != null) {
            this.s = null;
        }
    }

    private void a(CampaignEx campaignEx, int i) throws Throwable {
        this.i = campaignEx;
        if (c.a(this.g, campaignEx, this.c, this.b)) {
            b(campaignEx, i);
        } else {
            c(campaignEx, i);
        }
    }

    private void b(CampaignEx campaignEx, int i) {
        if (!c.a(this.g, campaignEx, this.c, this.b) || this.q) {
            return;
        }
        d();
        c.a(campaignEx, this.b);
        this.q = true;
        com.mbridge.msdk.advanced.a.a aVar = this.e;
        if (aVar != null) {
            aVar.a(campaignEx, i);
        }
    }

    private void a(String str, String str2, int i) throws Throwable {
        if (this.p) {
            this.p = false;
            a(str, i, str2);
        } else {
            b(str, i);
        }
    }

    private void a(String str, int i, String str2) throws Throwable {
        CampaignEx campaignExA = c.a(this.g, this.c, this.b, str2, this.j, true, true);
        if (campaignExA != null) {
            z.d(a, "load failed cache ");
            a(campaignExA, i);
        } else {
            b(str, i);
        }
    }

    private void b(String str, int i) {
        if (this.q) {
            return;
        }
        d();
        z.d(a, "real failed: " + str);
        this.q = true;
        com.mbridge.msdk.advanced.a.a aVar = this.e;
        if (aVar != null) {
            aVar.a(str, i);
        }
    }

    private void d() {
        this.x.removeCallbacks(this.y);
    }

    private void c(CampaignEx campaignEx, int i) throws Throwable {
        MBNativeAdvancedView mBNativeAdvancedView = this.g;
        if (mBNativeAdvancedView != null) {
            mBNativeAdvancedView.clearResState();
        }
        if (!TextUtils.isEmpty(campaignEx.getAdZip())) {
            z.a(a, "开始下载zip： " + campaignEx.getAdZip());
            h(campaignEx, i);
        }
        if (!TextUtils.isEmpty(campaignEx.getAdHtml())) {
            z.a(a, "开始下载HTML： " + campaignEx.getAdHtml());
            g(campaignEx, i);
        }
        if (!TextUtils.isEmpty(campaignEx.getVideoUrlEncode())) {
            z.a(a, "开始下载Video： " + campaignEx.getVideoUrlEncode());
            i(campaignEx, i);
        }
        if (!TextUtils.isEmpty(campaignEx.getImageUrl())) {
            z.a(a, "开始下载image： " + campaignEx.getImageUrl());
            f(campaignEx, i);
        }
        if (!TextUtils.isEmpty(campaignEx.getendcard_url())) {
            z.a(a, "开始下载EndCard： " + campaignEx.getendcard_url());
            e(campaignEx, i);
        }
        if (TextUtils.isEmpty(campaignEx.getGifUrl())) {
            return;
        }
        z.a(a, "开始下载gitUrl： " + campaignEx.getGifUrl());
        d(campaignEx, i);
    }

    private void d(final CampaignEx campaignEx, final int i) {
        com.mbridge.msdk.foundation.same.c.b.a(com.mbridge.msdk.foundation.controller.a.f().j()).a(campaignEx.getGifUrl(), new com.mbridge.msdk.foundation.same.c.c() {
            @Override
            public final void onSuccessLoad(Bitmap bitmap, String str) {
                z.a(a.a, "giturl 下载成功： " + str);
                if (a.this.x != null) {
                    a.this.x.post(new Runnable() {
                        @Override
                        public final void run() {
                            a.this.b(campaignEx, i);
                        }
                    });
                }
            }

            @Override
            public final void onFailedLoad(String str, String str2) {
                z.a(a.a, "gifurl 下载失败： " + str2);
                if (a.this.x != null) {
                    a.this.x.post(new Runnable() {
                        @Override
                        public final void run() {
                            a.this.b(campaignEx, i);
                        }
                    });
                }
            }
        });
    }

    private void e(final CampaignEx campaignEx, final int i) {
        this.t = new H5DownLoadManager.ZipDownloadListener() {
            @Override
            public final void onSuccess(String str) {
                z.a(a.a, "endcard 下载成功： " + str);
                if (a.this.x != null) {
                    Message messageObtain = Message.obtain();
                    messageObtain.what = 4;
                    messageObtain.obj = campaignEx;
                    messageObtain.arg1 = i;
                    a.this.x.sendMessage(messageObtain);
                }
            }

            @Override
            public final void onFailed(String str, String str2) {
                z.a(a.a, "endcard 下载失败： " + str2);
                if (a.this.g != null) {
                    a.this.g.setEndCardReady(false);
                }
                Message messageObtain = Message.obtain();
                messageObtain.what = 2;
                messageObtain.obj = str;
                a.this.x.sendMessage(messageObtain);
            }
        };
        H5DownLoadManager.getInstance().downloadH5Res(campaignEx.getendcard_url(), this.t);
    }

    private void f(final CampaignEx campaignEx, final int i) {
        com.mbridge.msdk.foundation.same.c.b.a(com.mbridge.msdk.foundation.controller.a.f().j()).a(campaignEx.getImageUrl(), new com.mbridge.msdk.foundation.same.c.c() {
            @Override
            public final void onSuccessLoad(Bitmap bitmap, String str) {
                z.a(a.a, "image 下载成功： " + str);
                if (a.this.x != null) {
                    a.this.x.post(new Runnable() {
                        @Override
                        public final void run() {
                            a.this.b(campaignEx, i);
                        }
                    });
                }
            }

            @Override
            public final void onFailedLoad(String str, String str2) {
                z.a(a.a, "image 下载失败： " + str2);
                if (a.this.x != null) {
                    a.this.x.post(new Runnable() {
                        @Override
                        public final void run() {
                            a.this.b(campaignEx, i);
                        }
                    });
                }
            }
        });
    }

    /* JADX WARN: Removed duplicated region for block: B:25:0x009c A[Catch: Exception -> 0x00ff, PHI: r2 r6
      0x009c: PHI (r2v3 java.io.FileOutputStream) = (r2v4 java.io.FileOutputStream), (r2v6 java.io.FileOutputStream) binds: [B:36:0x00b8, B:24:0x009a] A[DONT_GENERATE, DONT_INLINE]
      0x009c: PHI (r6v1 java.io.File) = (r6v3 java.io.File), (r6v7 java.io.File) binds: [B:36:0x00b8, B:24:0x009a] A[DONT_GENERATE, DONT_INLINE], TRY_ENTER, TRY_LEAVE, TryCatch #1 {Exception -> 0x00ff, blocks: (B:49:0x00fb, B:50:0x00fe, B:38:0x00bb, B:40:0x00c1, B:42:0x00c7, B:44:0x00cd, B:46:0x00df, B:47:0x00ea, B:25:0x009c), top: B:56:0x0005 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void g(final CampaignEx campaignEx, final int i) throws Throwable {
        final File file;
        FileOutputStream fileOutputStream = null;
        try {
            try {
                try {
                    File file2 = new File(campaignEx.getAdHtml());
                    try {
                        if (file2.exists()) {
                            file = file2;
                        } else {
                            String strB = e.b(com.mbridge.msdk.foundation.same.b.c.g);
                            String md5 = SameMD5.getMD5(ak.a(campaignEx.getAdHtml()));
                            if (TextUtils.isEmpty(md5)) {
                                md5 = String.valueOf(System.currentTimeMillis());
                            }
                            file = new File(strB, md5.concat(".html"));
                            try {
                                if (!file.exists()) {
                                    FileOutputStream fileOutputStream2 = new FileOutputStream(file);
                                    try {
                                        String strInjectScriptContentIntoHtml = ScriptInjector.injectScriptContentIntoHtml(MBridgeConstans.OMID_JS_SERVICE_CONTENT, "<script>" + com.mbridge.msdk.c.b.b.a().b() + "</script>" + campaignEx.getAdHtml());
                                        if (campaignEx.isActiveOm()) {
                                            strInjectScriptContentIntoHtml = com.mbridge.msdk.a.b.a(strInjectScriptContentIntoHtml);
                                        }
                                        fileOutputStream2.write(strInjectScriptContentIntoHtml.getBytes());
                                        fileOutputStream2.flush();
                                        fileOutputStream = fileOutputStream2;
                                    } catch (Exception e) {
                                        e = e;
                                        fileOutputStream = fileOutputStream2;
                                        e.printStackTrace();
                                        campaignEx.setMraid("");
                                        com.mbridge.msdk.foundation.same.report.c.a(campaignEx, e.getMessage(), this.b, "8");
                                        if (fileOutputStream != null) {
                                        }
                                    } catch (Throwable th) {
                                        th = th;
                                        fileOutputStream = fileOutputStream2;
                                        if (fileOutputStream != null) {
                                            fileOutputStream.close();
                                        }
                                        throw th;
                                    }
                                }
                            } catch (Exception e2) {
                                e = e2;
                            }
                        }
                        com.mbridge.msdk.foundation.same.report.c.a(campaignEx, "", this.b, "8");
                    } catch (Exception e3) {
                        e = e3;
                        file = file2;
                    }
                } catch (Exception e4) {
                    a(e4.getMessage(), this.n, i);
                    return;
                }
            } catch (Throwable th2) {
                th = th2;
            }
        } catch (Exception e5) {
            e = e5;
            file = null;
        }
        if (fileOutputStream != null) {
            fileOutputStream.close();
        }
        if (file.exists() && file.isFile() && file.canRead()) {
            campaignEx.setAdHtml(file.getAbsolutePath());
            z.a(a, "开始渲染 HTML： ");
            if (this.x != null) {
                this.x.post(new Runnable() {
                    @Override
                    public final void run() throws Throwable {
                        a.a(a.this, "file:////" + file.getAbsolutePath(), campaignEx, i);
                    }
                });
                return;
            }
            return;
        }
        z.a(a, "渲染 HTML 失败： html file write failed");
        a("html file write failed", this.n, i);
    }

    private void h(final CampaignEx campaignEx, final int i) {
        this.s = new H5DownLoadManager.ZipDownloadListener() {
            @Override
            public final void onSuccess(String str) {
                z.a(a.a, "zip 下载成功： " + str);
                Message messageObtain = Message.obtain();
                messageObtain.what = 1;
                messageObtain.obj = campaignEx;
                messageObtain.arg1 = i;
                a.this.x.sendMessage(messageObtain);
            }

            @Override
            public final void onFailed(String str, String str2) {
                z.a(a.a, "zip 下载失败： " + str2 + " " + str);
                Message messageObtain = Message.obtain();
                messageObtain.what = 2;
                messageObtain.obj = str;
                a.this.x.sendMessage(messageObtain);
            }
        };
        H5DownLoadManager.getInstance().downloadH5Res(campaignEx.getAdZip(), this.s);
    }

    private void a(CampaignEx campaignEx, String str, int i) throws Throwable {
        a(str, this.n, i);
        b(campaignEx, str, 2);
    }

    private void b(CampaignEx campaignEx, String str, int i) {
        com.mbridge.msdk.advanced.d.a.b(com.mbridge.msdk.advanced.common.c.a().c(campaignEx.getId()).b(this.b).d(campaignEx.getRequestId()).g(campaignEx.getRequestIdNotice()).f(str).b(i).a(campaignEx.isBidCampaign()), this.b);
    }

    private void i(final CampaignEx campaignEx, int i) {
        this.r = new com.mbridge.msdk.videocommon.listener.a() {
            @Override
            public final void a(String str) {
                z.a(a.a, "Video 下载成功： " + str);
                Message messageObtain = Message.obtain();
                messageObtain.obj = campaignEx;
                messageObtain.what = 5;
                a.this.x.sendMessage(messageObtain);
            }

            @Override
            public final void a(String str, String str2) {
                z.a(a.a, "Video 下载失败： " + str);
                Message messageObtain = Message.obtain();
                messageObtain.obj = str;
                messageObtain.what = 2;
                a.this.x.sendMessage(messageObtain);
            }
        };
        CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList = new CopyOnWriteArrayList<>();
        copyOnWriteArrayList.add(campaignEx);
        com.mbridge.msdk.videocommon.download.b.getInstance().createUnitCache(this.f, this.b, copyOnWriteArrayList, com.tkay.expressad.foundation.g.a.aX, this.r);
        if (!com.mbridge.msdk.videocommon.download.b.getInstance().a(com.tkay.expressad.foundation.g.a.aX, this.b, campaignEx.isBidCampaign())) {
            z.a(a, " load Video");
            com.mbridge.msdk.videocommon.download.b.getInstance().load(this.b);
        } else {
            z.a(a, " load Video isReady true");
            this.g.setVideoReady(true);
            b(campaignEx, i);
        }
    }

    public final String a(String str) {
        int iF;
        if (this.i == null) {
            return "";
        }
        try {
            com.mbridge.msdk.videocommon.download.a aVarA = com.mbridge.msdk.videocommon.download.b.getInstance().a(this.b, this.i.getId() + this.i.getVideoUrlEncode() + this.i.getBidToken());
            if (aVarA == null || (iF = aVarA.f()) != 5) {
                return str;
            }
            String strD = aVarA.d();
            if (!new File(strD).exists()) {
                return str;
            }
            z.d(a, "本地已下载完 拿本地播放地址：" + strD + " state：" + iF);
            return strD;
        } catch (Exception e) {
            e.printStackTrace();
            return str;
        }
    }

    static void a(a aVar, final String str, final CampaignEx campaignEx, final int i) throws Throwable {
        MBNativeAdvancedView mBNativeAdvancedView = aVar.g;
        if (mBNativeAdvancedView == null || mBNativeAdvancedView.getAdvancedNativeWebview() == null) {
            return;
        }
        com.mbridge.msdk.advanced.d.a.a(com.mbridge.msdk.advanced.common.c.a().c(campaignEx.getId()).d(campaignEx.getRequestId()).g(campaignEx.getRequestIdNotice()).b(aVar.b).a(campaignEx.isBidCampaign()), aVar.b);
        com.mbridge.msdk.advanced.js.a aVar2 = new com.mbridge.msdk.advanced.js.a(aVar.g.getContext(), aVar.c, aVar.b);
        ArrayList arrayList = new ArrayList();
        arrayList.add(campaignEx);
        aVar2.a(arrayList);
        aVar2.a(aVar.j);
        aVar2.b(aVar.k);
        aVar.g.setAdvancedNativeJSBridgeImpl(aVar2);
        final long jCurrentTimeMillis = System.currentTimeMillis();
        final MBNativeAdvancedWebview advancedNativeWebview = aVar.g.getAdvancedNativeWebview();
        if (advancedNativeWebview == null) {
            aVar.a(campaignEx, "webview is null", i);
            return;
        }
        if (advancedNativeWebview != null && advancedNativeWebview.isDestoryed()) {
            aVar.a(campaignEx, "webview is destroyed", i);
            return;
        }
        advancedNativeWebview.setWebViewListener(new com.mbridge.msdk.mbjscommon.c.b() {
            @Override
            public final void a(WebView webView, int i2) throws Throwable {
                super.a(webView, i2);
                z.d("NativeAdvancedLoadManager", "=========readyState: " + i2);
                if (i2 == 1) {
                    a.this.g.setH5Ready(true);
                    com.mbridge.msdk.advanced.common.b.a(a.this.c + a.this.b + campaignEx.getRequestId(), true);
                    a.b(a.this, campaignEx, i);
                    com.mbridge.msdk.advanced.d.a.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx, a.this.b, "", jCurrentTimeMillis, 1);
                    return;
                }
                a.this.a(campaignEx, "readyState 2", i);
                com.mbridge.msdk.advanced.d.a.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx, a.this.b, "readyState 2", jCurrentTimeMillis, 3);
            }

            @Override
            public final void a(WebView webView, int i2, String str2, String str3) throws Throwable {
                super.a(webView, i2, str2, str3);
                z.d("NativeAdvancedLoadManager", "onReceivedError： " + i2 + "  " + str2 + "  " + str3);
                a.this.a(campaignEx, str2, i);
                com.mbridge.msdk.advanced.d.a.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx, a.this.b, "error code:" + i2 + str2, jCurrentTimeMillis, 3);
            }

            @Override
            public final void a(WebView webView, SslErrorHandler sslErrorHandler, SslError sslError) throws Throwable {
                super.a(webView, sslErrorHandler, sslError);
                z.d("NativeAdvancedLoadManager", "onReceivedSslError: " + sslError.getPrimaryError());
                a.this.a(campaignEx, "onReceivedSslError:" + sslError.getUrl(), i);
                com.mbridge.msdk.advanced.d.a.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx, a.this.b, "error url:" + sslError.getUrl(), jCurrentTimeMillis, 3);
            }

            @Override
            public final void a(WebView webView, String str2) {
                super.a(webView, str2);
                z.d("NativeAdvancedLoadManager", "onPageFinished");
                if (!campaignEx.isHasMBTplMark()) {
                    a.this.g.setH5Ready(true);
                    z.d("NativeAdvancedLoadManager", "=======onPageFinished OK");
                    com.mbridge.msdk.advanced.common.b.a(a.this.c + a.this.b + campaignEx.getRequestId(), true);
                    a.b(a.this, campaignEx, i);
                    com.mbridge.msdk.advanced.d.a.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx, a.this.b, "", jCurrentTimeMillis, 1);
                }
                com.mbridge.msdk.advanced.js.b.a(webView);
            }
        });
        if (!advancedNativeWebview.isDestoryed()) {
            z.d(a, "=======开始渲染: " + str);
            Handler handler = aVar.x;
            if (handler != null) {
                handler.post(new Runnable() {
                    @Override
                    public final void run() {
                        advancedNativeWebview.loadUrl(str);
                    }
                });
                return;
            }
            return;
        }
        aVar.a("webview has destory", aVar.n, i);
        com.mbridge.msdk.advanced.d.a.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx, aVar.b, "webview had destory", jCurrentTimeMillis, 3);
    }

    static void a(a aVar, CampaignUnit campaignUnit, int i, String str, String str2) throws Throwable {
        ArrayList arrayList;
        if (campaignUnit == null || campaignUnit.getAds() == null) {
            arrayList = null;
        } else {
            arrayList = new ArrayList();
            final CampaignEx campaignEx = campaignUnit.getAds().get(0);
            campaignEx.setCampaignUnitId(aVar.b);
            new Thread(new Runnable() {
                @Override
                public final void run() {
                    l.a(i.a(a.this.f)).b();
                    ae.a(a.this.f, campaignEx);
                }
            }).start();
            aVar.u = campaignUnit.getSessionId();
            if (campaignEx.getOfferType() != 99 && (!TextUtils.isEmpty(campaignEx.getAdZip()) || !TextUtils.isEmpty(campaignEx.getAdHtml()))) {
                if (ae.b(campaignEx)) {
                    campaignEx.setRtinsType(ae.c(aVar.f, campaignEx.getPackageName()) ? 1 : 2);
                }
                if (campaignEx.getWtick() == 1 || !ae.c(aVar.f, campaignEx.getPackageName()) || ae.b(campaignEx)) {
                    arrayList.add(campaignEx);
                } else {
                    ae.a(aVar.b, campaignEx, com.mbridge.msdk.foundation.same.a.E);
                }
            }
        }
        if (arrayList == null || arrayList.size() <= 0) {
            z.b(a, "onload load失败 返回的compaign没有可以用的");
            aVar.a("invalid  campaign", str2, i);
            return;
        }
        try {
            int i2 = aVar.v + 1;
            aVar.v = i2;
            if (aVar.h == null || i2 > aVar.h.v()) {
                z.b(a, "onload 重置offset为0");
                aVar.v = 0;
            }
            z.b(a, "onload 算出 下次的offset是:" + aVar.v);
        } catch (Exception e) {
            e.printStackTrace();
        }
        z.b(a, "onload load成功 size:" + arrayList.size());
        CampaignEx campaignEx2 = (CampaignEx) arrayList.get(0);
        if (!TextUtils.isEmpty(campaignEx2.getAdZip()) || (!TextUtils.isEmpty(campaignEx2.getAdHtml()) && campaignEx2.getAdHtml().contains("<MBTPLMARK>"))) {
            campaignEx2.setHasMBTplMark(true);
            campaignEx2.setIsMraid(false);
        } else {
            campaignEx2.setHasMBTplMark(false);
            campaignEx2.setIsMraid(true);
        }
        aVar.a(campaignEx2, i);
    }

    static void b(a aVar, CampaignEx campaignEx, int i) {
        if (aVar.g.isH5Ready()) {
            aVar.b(campaignEx, i);
            aVar.b(campaignEx, "", 1);
        }
    }
}
