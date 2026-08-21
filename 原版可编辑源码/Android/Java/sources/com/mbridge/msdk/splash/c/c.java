package com.mbridge.msdk.splash.c;

import android.content.Context;
import android.net.Uri;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.text.TextUtils;
import android.view.View;
import com.iab.omid.library.mmadbridge.ScriptInjector;
import com.loc.at;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.db.l;
import com.mbridge.msdk.foundation.download.download.H5DownLoadManager;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.CampaignUnit;
import com.mbridge.msdk.foundation.tools.SameMD5;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.ai;
import com.mbridge.msdk.foundation.tools.ak;
import com.mbridge.msdk.foundation.tools.i;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.splash.a.c;
import com.mbridge.msdk.splash.c.a;
import com.mbridge.msdk.splash.c.e;
import com.mbridge.msdk.splash.view.MBSplashView;
import com.tkay.core.c.d;
import com.tkay.expressad.foundation.g.a.f;
import java.io.File;
import java.io.FileOutputStream;
import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;

public final class c {
    private static String a = "SplashLoadManager";
    private String b;
    private String c;
    private long d;
    private long e;
    private com.mbridge.msdk.splash.b.b f;
    private MBSplashView h;
    private com.mbridge.msdk.c.d i;
    private boolean j;
    private int k;
    private int l;
    private int m;
    private String n;
    private int o;
    private boolean p;
    private volatile boolean q;
    private com.mbridge.msdk.videocommon.listener.a r;
    private H5DownLoadManager.ZipDownloadListener s;
    private String t;
    private int u;
    private int w;
    private String v = "";
    private Handler x = new Handler(Looper.getMainLooper()) {
        @Override
        public final void handleMessage(Message message) throws Throwable {
            super.handleMessage(message);
            int i = message.what;
            if (i == 1) {
                Object obj = message.obj;
                int i2 = message.arg1;
                if (obj instanceof CampaignEx) {
                    CampaignEx campaignEx = (CampaignEx) obj;
                    c.this.a(H5DownLoadManager.getInstance().getH5ResAddress(campaignEx.getAdZip()), campaignEx, i2);
                    return;
                }
                return;
            }
            if (i == 2) {
                Object obj2 = message.obj;
                if (obj2 instanceof String) {
                    c.this.a(obj2.toString(), c.this.n, c.this.o);
                    return;
                }
                return;
            }
            if (i != 3) {
                return;
            }
            Object obj3 = message.obj;
            if (obj3 instanceof CampaignEx) {
                c cVar = c.this;
                cVar.b((CampaignEx) obj3, cVar.o);
            }
        }
    };
    private Runnable y = new Runnable() {
        @Override
        public final void run() throws Throwable {
            c cVar = c.this;
            cVar.a("load timeout", cVar.n, c.this.o);
        }
    };
    private Context g = com.mbridge.msdk.foundation.controller.a.f().j();

    public c(String str, String str2, long j) {
        this.c = str;
        this.b = str2;
        this.e = j;
    }

    public final void a(com.mbridge.msdk.c.d dVar) {
        this.i = dVar;
    }

    public final void a(MBSplashView mBSplashView) {
        this.h = mBSplashView;
    }

    public final void a(boolean z) {
        this.j = z;
    }

    public final void a(int i) {
        this.k = i;
    }

    public final void a(int i, int i2) {
        this.m = i;
        this.l = i2;
    }

    public final void b(int i) {
        this.w = i;
    }

    public final String a() {
        return this.v;
    }

    public final void a(String str, int i) throws Throwable {
        this.q = false;
        this.n = str;
        this.o = i;
        CampaignEx campaignExA = b.a(this.h, this.c, this.b, str, this.j, this.k, false, false);
        long timestamp = campaignExA != null ? campaignExA.getTimestamp() : 0L;
        if (this.i.n() == 1 && i != 1 && campaignExA != null) {
            a(campaignExA, i);
            return;
        }
        this.p = true;
        if (i == 1) {
            List<Integer> listS = this.i.s();
            if (listS != null && listS.size() > 0) {
                this.d = listS.get(0).intValue() * 1000;
            } else {
                this.d = 30000L;
            }
        } else {
            long j = this.e;
            if (j <= 0) {
                this.d = this.i.o();
            } else {
                this.d = j;
            }
        }
        if (this.i == null || timestamp <= 0 || !TextUtils.isEmpty(str)) {
            a(this.d);
            a(this.g, str, i);
            return;
        }
        if (System.currentTimeMillis() - timestamp > this.i.x() * 1000) {
            a(this.d);
            a(this.g, str, i);
        } else {
            a(campaignExA, i);
        }
    }

    private void a(long j) {
        this.x.postDelayed(this.y, j);
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
            z.b(a, "load 开始准备请求参数");
            com.mbridge.msdk.foundation.same.net.g.d dVarA = a(i, this.t);
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
            com.mbridge.msdk.splash.f.b bVar = new com.mbridge.msdk.splash.f.b(context);
            com.mbridge.msdk.splash.f.a aVar = new com.mbridge.msdk.splash.f.a(i) {
                @Override
                public final void a(CampaignUnit campaignUnit, int i2) throws Throwable {
                    try {
                        z.b(c.a, "onLoadCompaginSuccess 数据刚请求回来");
                        c.a(c.this, campaignUnit, i2, c.this.b, str);
                        c.this.v = campaignUnit.getRequestId();
                    } catch (Exception e) {
                        e.printStackTrace();
                        z.b(c.a, "onLoadCompaginSuccess 数据刚请求失败： " + e.getMessage());
                        c.this.a("Exception after load success", str, i2);
                        c.this.u = 0;
                    }
                }

                @Override
                public final void a(int i2, String str2) throws Throwable {
                    z.d(c.a, str2);
                    z.b(c.a, "onLoadCompaginFailed load failed errorCode:" + i2 + " msg:" + str2);
                    c.this.a(str2, str, i);
                    c.this.u = 0;
                }
            };
            aVar.a(str);
            aVar.setUnitId(this.b);
            aVar.setPlacementId(this.c);
            aVar.setAdType(com.tkay.expressad.foundation.g.a.aV);
            bVar.choiceV3OrV5BySetting(1, dVarA, aVar, str);
        } catch (Exception e) {
            e.printStackTrace();
            a("Load exception", str, i);
            this.u = 0;
        }
    }

    private com.mbridge.msdk.foundation.same.net.g.d a(int i, String str) throws Throwable {
        String strK = com.mbridge.msdk.foundation.controller.a.f().k();
        String md5 = SameMD5.getMD5(com.mbridge.msdk.foundation.controller.a.f().k() + com.mbridge.msdk.foundation.controller.a.f().l());
        com.mbridge.msdk.foundation.same.net.g.d dVar = new com.mbridge.msdk.foundation.same.net.g.d();
        String strA = com.mbridge.msdk.foundation.same.a.d.a(this.b, f.f);
        String strA2 = com.mbridge.msdk.splash.a.a.a.a(this.g, this.b);
        String strB = ae.b(this.g, this.b);
        String strA3 = com.mbridge.msdk.splash.a.a.a.a();
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
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "ad_type", com.tkay.expressad.foundation.g.a.aV + "");
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "offset", this.u + "");
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "unit_size", this.m + "x" + this.l);
        return dVar;
    }

    public final void a(com.mbridge.msdk.splash.b.b bVar) {
        this.f = bVar;
    }

    public final void b() {
        if (this.f != null) {
            this.f = null;
        }
        if (this.r != null) {
            this.r = null;
        }
        if (this.s != null) {
            this.s = null;
        }
    }

    private void a(CampaignEx campaignEx, int i) throws Throwable {
        MBSplashView mBSplashView = this.h;
        if (mBSplashView != null) {
            mBSplashView.setDynamicView(false);
        }
        if (campaignEx.isDynamicView()) {
            d(campaignEx, i);
        }
        if (b.a(this.h, campaignEx)) {
            b(campaignEx, i);
        } else {
            c(campaignEx, i);
        }
    }

    private void b(CampaignEx campaignEx, int i) {
        if (!b.a(this.h, campaignEx) || this.q) {
            return;
        }
        d();
        if (this.p) {
            b.a(campaignEx, this.b);
        }
        this.q = true;
        com.mbridge.msdk.splash.b.b bVar = this.f;
        if (bVar != null) {
            bVar.a(campaignEx, i);
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
        CampaignEx campaignExA = b.a(this.h, this.c, this.b, str2, this.j, this.k, true, false);
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
        z.d(a, "real failed ");
        this.q = true;
        com.mbridge.msdk.splash.b.b bVar = this.f;
        if (bVar != null) {
            bVar.a(str, i);
        }
    }

    private void d() {
        this.x.removeCallbacks(this.y);
    }

    private void c(CampaignEx campaignEx, int i) throws Throwable {
        this.h.clearResState();
        if (!TextUtils.isEmpty(campaignEx.getAdZip())) {
            f(campaignEx, i);
        }
        if (campaignEx.isDynamicView()) {
            return;
        }
        if (!TextUtils.isEmpty(campaignEx.getAdHtml())) {
            e(campaignEx, i);
        }
        if (!TextUtils.isEmpty(campaignEx.getVideoUrlEncode())) {
            g(campaignEx, i);
        }
        if (TextUtils.isEmpty(campaignEx.getImageUrl())) {
            return;
        }
        d(campaignEx, i);
    }

    private void d(final CampaignEx campaignEx, final int i) {
        b.a(this.h, campaignEx, new com.mbridge.msdk.splash.view.nativeview.a() {
            @Override
            public final void a() {
                if (campaignEx.isDynamicView() && c.this.h != null) {
                    c.this.h.setImageReady(true);
                    c.b(c.this, campaignEx, i);
                }
                c.this.b(campaignEx, i);
            }

            @Override
            public final void b() throws Throwable {
                if (!campaignEx.isDynamicView() || c.this.h == null) {
                    return;
                }
                c.this.h.setImageReady(false);
                c cVar = c.this;
                cVar.a("Image resource load faile", cVar.n, i);
            }
        });
    }

    /* JADX WARN: Removed duplicated region for block: B:25:0x009c A[Catch: Exception -> 0x00fb, PHI: r2 r6
      0x009c: PHI (r2v3 java.io.FileOutputStream) = (r2v4 java.io.FileOutputStream), (r2v6 java.io.FileOutputStream) binds: [B:36:0x00b8, B:24:0x009a] A[DONT_GENERATE, DONT_INLINE]
      0x009c: PHI (r6v1 java.io.File) = (r6v3 java.io.File), (r6v7 java.io.File) binds: [B:36:0x00b8, B:24:0x009a] A[DONT_GENERATE, DONT_INLINE], TRY_ENTER, TRY_LEAVE, TryCatch #2 {Exception -> 0x00fb, blocks: (B:47:0x00f7, B:48:0x00fa, B:38:0x00bb, B:40:0x00c1, B:42:0x00c7, B:44:0x00cd, B:45:0x00ed, B:25:0x009c), top: B:54:0x0005 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void e(CampaignEx campaignEx, int i) throws Throwable {
        File file;
        FileOutputStream fileOutputStream = null;
        try {
            try {
                try {
                    File file2 = new File(campaignEx.getAdHtml());
                    try {
                        if (file2.exists()) {
                            file = file2;
                        } else {
                            String strB = com.mbridge.msdk.foundation.same.b.e.b(com.mbridge.msdk.foundation.same.b.c.g);
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
                                        com.mbridge.msdk.foundation.same.report.c.a(campaignEx, e.getMessage(), this.b, "6");
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
                        com.mbridge.msdk.foundation.same.report.c.a(campaignEx, "", this.b, "6");
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
            a("file:////" + file.getAbsolutePath(), campaignEx, i);
            return;
        }
        a("html file write failed", this.n, i);
    }

    private void f(final CampaignEx campaignEx, final int i) {
        if (campaignEx.isDynamicView()) {
            i.a(campaignEx.getAdZip());
        } else {
            this.s = new H5DownLoadManager.ZipDownloadListener() {
                @Override
                public final void onSuccess(String str) {
                    Message messageObtain = Message.obtain();
                    messageObtain.what = 1;
                    messageObtain.obj = campaignEx;
                    messageObtain.arg1 = i;
                    c.this.x.sendMessage(messageObtain);
                }

                @Override
                public final void onFailed(String str, String str2) throws Throwable {
                    c cVar = c.this;
                    cVar.a(str, cVar.n, i);
                    Message messageObtain = Message.obtain();
                    messageObtain.what = 2;
                    messageObtain.obj = str;
                    c.this.x.sendMessage(messageObtain);
                }
            };
            H5DownLoadManager.getInstance().downloadH5Res(campaignEx.getAdZip(), this.s);
        }
    }

    private void a(String str, final CampaignEx campaignEx, final int i) {
        e.c cVar = new e.c();
        cVar.c(this.b);
        cVar.b(this.c);
        cVar.a(campaignEx);
        cVar.a(str);
        cVar.a(this.j);
        cVar.a(this.k);
        e.a.a.a(this.h, cVar, new e.b() {
            @Override
            public final void a() {
                if (campaignEx.isHasMBTplMark()) {
                    return;
                }
                c.c(c.this, campaignEx, i);
            }

            @Override
            public final void a(String str2) throws Throwable {
                c.a(c.this, str2, i);
            }

            @Override
            public final void a(int i2) throws Throwable {
                if (i2 == 1) {
                    c.c(c.this, campaignEx, i);
                } else {
                    c.a(c.this, "readyState 2", i);
                }
            }
        });
    }

    private void g(final CampaignEx campaignEx, int i) {
        this.r = new com.mbridge.msdk.videocommon.listener.a() {
            @Override
            public final void a(String str) {
                c.this.h.setVideoReady(true);
                z.a(c.a, "========VIDEO SUC");
                Message messageObtain = Message.obtain();
                messageObtain.obj = campaignEx;
                messageObtain.what = 3;
                c.this.x.sendMessage(messageObtain);
            }

            @Override
            public final void a(String str, String str2) {
                c.this.h.setVideoReady(false);
                z.a(c.a, "========VIDEO FAI");
                Message messageObtain = Message.obtain();
                messageObtain.obj = str;
                messageObtain.what = 2;
                c.this.x.sendMessage(messageObtain);
            }
        };
        CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList = new CopyOnWriteArrayList<>();
        copyOnWriteArrayList.add(campaignEx);
        com.mbridge.msdk.videocommon.download.b.getInstance().createUnitCache(this.g, this.b, copyOnWriteArrayList, com.tkay.expressad.foundation.g.a.aV, this.r);
        if (!com.mbridge.msdk.videocommon.download.b.getInstance().a(com.tkay.expressad.foundation.g.a.aV, this.b, campaignEx.isBidCampaign())) {
            com.mbridge.msdk.videocommon.download.b.getInstance().load(this.b);
        } else {
            this.h.setVideoReady(true);
            b(campaignEx, i);
        }
    }

    static void a(c cVar, CampaignUnit campaignUnit, int i, String str, String str2) throws Throwable {
        ArrayList arrayList;
        if (campaignUnit == null || campaignUnit.getAds() == null) {
            arrayList = null;
        } else {
            arrayList = new ArrayList();
            final CampaignEx campaignEx = campaignUnit.getAds().get(0);
            campaignEx.setCampaignUnitId(cVar.b);
            new Thread(new Runnable() {
                @Override
                public final void run() {
                    l.a(com.mbridge.msdk.foundation.db.i.a(c.this.g)).b();
                    ae.a(c.this.g, campaignEx);
                }
            }).start();
            cVar.t = campaignUnit.getSessionId();
            if (campaignEx.getOfferType() != 99 && (!TextUtils.isEmpty(campaignEx.getAdZip()) || !TextUtils.isEmpty(campaignEx.getAdHtml()))) {
                if (ae.b(campaignEx)) {
                    campaignEx.setRtinsType(ae.c(cVar.g, campaignEx.getPackageName()) ? 1 : 2);
                }
                if (campaignEx.getWtick() == 1 || !ae.c(cVar.g, campaignEx.getPackageName()) || ae.b(campaignEx)) {
                    arrayList.add(campaignEx);
                } else {
                    ae.a(cVar.b, campaignEx, com.mbridge.msdk.foundation.same.a.E);
                }
            }
        }
        if (arrayList == null || arrayList.size() <= 0) {
            z.b(a, "onload load失败 返回的compaign没有可以用的");
            cVar.a("invalid  campaign", str2, i);
            return;
        }
        try {
            int i2 = cVar.u + 1;
            cVar.u = i2;
            if (cVar.i == null || i2 > cVar.i.v()) {
                z.b(a, "onload 重置offset为0");
                cVar.u = 0;
            }
            z.b(a, "onload 算出 下次的offset是:" + cVar.u);
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
        cVar.a(campaignEx2, i);
    }

    static void b(c cVar, final CampaignEx campaignEx, final int i) {
        if (campaignEx.isDynamicView()) {
            c.a aVar = new c.a();
            aVar.b(cVar.b).a(cVar.c).a(cVar.j).a(campaignEx).a(cVar.k).h(cVar.w);
            try {
                if (!TextUtils.isEmpty(campaignEx.getAdZip())) {
                    Uri uri = Uri.parse(campaignEx.getAdZip());
                    String queryParameter = uri.getQueryParameter("hdbtn");
                    String queryParameter2 = uri.getQueryParameter(com.tkay.expressad.video.dynview.a.a.L);
                    String queryParameter3 = uri.getQueryParameter("hdinfo");
                    String queryParameter4 = uri.getQueryParameter("shake_show");
                    String queryParameter5 = uri.getQueryParameter("shake_strength");
                    String queryParameter6 = uri.getQueryParameter("shake_time");
                    String queryParameter7 = uri.getQueryParameter("n_logo");
                    if (!TextUtils.isEmpty(queryParameter)) {
                        aVar.b(Integer.parseInt(queryParameter));
                    }
                    if (!TextUtils.isEmpty(queryParameter2)) {
                        aVar.c(Integer.parseInt(queryParameter2));
                    }
                    if (!TextUtils.isEmpty(queryParameter3)) {
                        aVar.d(Integer.parseInt(queryParameter3));
                    }
                    if (!TextUtils.isEmpty(queryParameter4)) {
                        aVar.e(Integer.parseInt(queryParameter4));
                    }
                    if (!TextUtils.isEmpty(queryParameter5)) {
                        aVar.f(Integer.parseInt(queryParameter5));
                    }
                    if (!TextUtils.isEmpty(queryParameter6)) {
                        aVar.g(Integer.parseInt(queryParameter6));
                    }
                    if (!TextUtils.isEmpty(queryParameter7)) {
                        aVar.i(Integer.parseInt(queryParameter7) == 0 ? 0 : 1);
                    }
                }
            } catch (Throwable th) {
                z.d(a, th.getMessage());
            }
            a.a.a.a(cVar.h, new com.mbridge.msdk.splash.a.c(aVar), new com.mbridge.msdk.splash.b.a() {
                @Override
                public final void a(View view) {
                    if (c.this.h != null) {
                        c.this.h.setDynamicView(true);
                        c.this.h.setSplashNativeView(view);
                        c.this.b(campaignEx, i);
                    }
                }

                @Override
                public final void a(String str) throws Throwable {
                    c cVar2 = c.this;
                    cVar2.a(str, cVar2.n, i);
                }
            });
        }
    }

    static void c(c cVar, CampaignEx campaignEx, int i) {
        if (cVar.h.isH5Ready()) {
            return;
        }
        cVar.h.setH5Ready(true);
        cVar.b(campaignEx, i);
    }

    static void a(c cVar, String str, int i) throws Throwable {
        cVar.a(str, cVar.n, i);
    }
}
