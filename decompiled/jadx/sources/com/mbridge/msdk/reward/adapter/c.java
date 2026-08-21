package com.mbridge.msdk.reward.adapter;

import android.content.Context;
import android.graphics.Bitmap;
import android.net.http.SslError;
import android.os.Bundle;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.Message;
import android.support.v4.os.EnvironmentCompat;
import android.text.TextUtils;
import android.util.Base64;
import android.webkit.SslErrorHandler;
import android.webkit.WebView;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.db.t;
import com.mbridge.msdk.foundation.download.DownloadError;
import com.mbridge.msdk.foundation.download.download.H5DownLoadManager;
import com.mbridge.msdk.foundation.download.download.HTMLResourceManager;
import com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.p;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.i;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView;
import com.mbridge.msdk.videocommon.a;
import com.tkay.core.api.TYAdConst;
import com.tkay.expressad.foundation.d.r;
import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;
import org.json.JSONObject;

/* JADX INFO: compiled from: RewardCampaignsResourceManager.java */
/* JADX INFO: loaded from: classes2.dex */
public final class c {
    private static ConcurrentHashMap<String, a> b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final h f3901a;
    private boolean c;
    private volatile List<WindVaneWebView> d;

    /* JADX INFO: renamed from: com.mbridge.msdk.reward.adapter.c$c, reason: collision with other inner class name */
    /* JADX INFO: compiled from: RewardCampaignsResourceManager.java */
    public interface InterfaceC0290c {
        void a(String str, String str2, String str3, CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList);

        void a(String str, String str2, String str3, CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList, String str4);
    }

    /* JADX INFO: compiled from: RewardCampaignsResourceManager.java */
    public interface i {
        void a(String str, String str2, String str3, String str4);

        void a(String str, String str2, String str3, String str4, String str5);
    }

    /* JADX INFO: compiled from: RewardCampaignsResourceManager.java */
    public interface j {
        void a(String str, String str2, String str3, String str4, String str5, a.C0309a c0309a);

        void a(String str, String str2, String str3, String str4, String str5, a.C0309a c0309a, String str6);
    }

    private c() {
        this.d = new ArrayList(6);
        HandlerThread handlerThread = new HandlerThread("mb-reward-load-thread");
        b = new ConcurrentHashMap<>();
        handlerThread.start();
        this.f3901a = new h(handlerThread.getLooper());
    }

    public static c a() {
        return m.f3918a;
    }

    public final synchronized void a(final Context context, boolean z, int i2, boolean z2, final int i3, final String str, final String str2, final String str3, final CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList, InterfaceC0290c interfaceC0290c, final i iVar) {
        String str4 = str2 + "_" + str3;
        b.put(str4, new a(z, z2, i2, copyOnWriteArrayList.size(), str2, str3, i3, copyOnWriteArrayList));
        this.f3901a.a(str, str2, str3, interfaceC0290c);
        this.f3901a.a(context);
        this.f3901a.a(str4, copyOnWriteArrayList);
        this.f3901a.post(new Runnable() { // from class: com.mbridge.msdk.reward.adapter.c.1
            /* JADX WARN: Removed duplicated region for block: B:54:0x0156  */
            /* JADX WARN: Removed duplicated region for block: B:67:0x01bd  */
            /* JADX WARN: Removed duplicated region for block: B:72:0x01d8  */
            /* JADX WARN: Removed duplicated region for block: B:81:0x0211  */
            /* JADX WARN: Removed duplicated region for block: B:89:0x0242  */
            @Override // java.lang.Runnable
            /*
                Code decompiled incorrectly, please refer to instructions dump.
                To view partially-correct add '--show-bad-code' argument
            */
            public final void run() {
                /*
                    Method dump skipped, instruction units count: 835
                    To view this dump add '--comments-level debug' option
                */
                throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.reward.adapter.c.AnonymousClass1.run():void");
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(int i2, CampaignEx campaignEx, String str, String str2) {
        com.mbridge.msdk.foundation.tools.i.a(i2, str, str2, new i.a() { // from class: com.mbridge.msdk.reward.adapter.c.2
            @Override // com.mbridge.msdk.foundation.tools.i.a
            public final void a(String str3, String str4, String str5) {
                z.a("RewardCampaignsResourceManager", "load xml success");
            }

            @Override // com.mbridge.msdk.foundation.tools.i.a
            public final void a(String str3, DownloadError downloadError) {
                z.d("RewardCampaignsResourceManager", "load error");
            }
        });
    }

    public final synchronized void a(final Context context, final CampaignEx campaignEx, final String str, final String str2, final String str3, final i iVar) {
        this.f3901a.a(context);
        if (campaignEx != null) {
            String cMPTEntryUrl = campaignEx.getCMPTEntryUrl();
            if (campaignEx.isDynamicView()) {
                if (ae.i(cMPTEntryUrl)) {
                    a(0, campaignEx, campaignEx.getMof_tplid() + "", cMPTEntryUrl);
                }
                ResDownloadCheckManager.getInstance().setZipDownloadDone(cMPTEntryUrl, true);
                Message messageObtain = Message.obtain();
                messageObtain.what = 105;
                Bundle bundle = new Bundle();
                bundle.putString("unit_id", str2);
                bundle.putString(MBridgeConstans.PLACEMENT_ID, str);
                bundle.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, str3);
                bundle.putString("url", cMPTEntryUrl);
                messageObtain.setData(bundle);
                this.f3901a.sendMessage(messageObtain);
                if (iVar != null) {
                    iVar.a(str, str2, str3, cMPTEntryUrl);
                }
                return;
            }
        }
        if (campaignEx != null && !TextUtils.isEmpty(campaignEx.getCMPTEntryUrl())) {
            try {
                H5DownLoadManager.getInstance().downloadH5Res(campaignEx.getCMPTEntryUrl(), new H5DownLoadManager.ZipDownloadListener() { // from class: com.mbridge.msdk.reward.adapter.c.3
                    @Override // com.mbridge.msdk.foundation.download.download.H5DownLoadManager.H5ResDownloadListerInter
                    public final void onSuccess(String str4) {
                        try {
                            z.a("RewardCampaignsResourceManager", "zip btl template download success");
                            ResDownloadCheckManager.getInstance().setZipDownloadDone(str4, true);
                            Message messageObtain2 = Message.obtain();
                            messageObtain2.what = 105;
                            Bundle bundle2 = new Bundle();
                            bundle2.putString("unit_id", str2);
                            bundle2.putString(MBridgeConstans.PLACEMENT_ID, str);
                            bundle2.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, str3);
                            bundle2.putString("url", str4);
                            messageObtain2.setData(bundle2);
                            c.this.f3901a.sendMessage(messageObtain2);
                            if (iVar != null) {
                                iVar.a(str, str2, str3, str4);
                            }
                            p pVar = new p();
                            pVar.o(r.m);
                            if (context != null) {
                                pVar.c(v.D(context.getApplicationContext()));
                            }
                            pVar.d(1);
                            if (campaignEx != null) {
                                pVar.n(campaignEx.getId());
                                pVar.k(campaignEx.getRequestId());
                                pVar.l(campaignEx.getRequestIdNotice());
                            }
                            pVar.i(str4);
                            pVar.p("");
                            pVar.m(str2);
                            t.a(com.mbridge.msdk.foundation.db.i.a(com.mbridge.msdk.foundation.controller.a.f().j())).a(pVar);
                        } catch (Exception e2) {
                            ResDownloadCheckManager.getInstance().setZipDownloadDone(str4, false);
                            Message messageObtain3 = Message.obtain();
                            messageObtain3.what = 205;
                            Bundle bundle3 = new Bundle();
                            bundle3.putString("unit_id", str2);
                            bundle3.putString(MBridgeConstans.PLACEMENT_ID, str);
                            bundle3.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, str3);
                            bundle3.putString("url", str4);
                            messageObtain3.setData(bundle3);
                            c.this.f3901a.sendMessage(messageObtain3);
                            i iVar2 = iVar;
                            if (iVar2 != null) {
                                iVar2.a(str, str2, str3, str4, e2.getLocalizedMessage());
                            }
                            p pVar2 = new p();
                            pVar2.o(r.m);
                            Context context2 = context;
                            if (context2 != null) {
                                pVar2.c(v.D(context2.getApplicationContext()));
                            }
                            pVar2.d(3);
                            CampaignEx campaignEx2 = campaignEx;
                            if (campaignEx2 != null) {
                                pVar2.n(campaignEx2.getId());
                                pVar2.k(campaignEx.getRequestId());
                                pVar2.l(campaignEx.getRequestIdNotice());
                            }
                            pVar2.i(str4);
                            pVar2.p(e2.getLocalizedMessage());
                            pVar2.m(str2);
                            t.a(com.mbridge.msdk.foundation.db.i.a(com.mbridge.msdk.foundation.controller.a.f().j())).a(pVar2);
                            if (MBridgeConstans.DEBUG) {
                                z.d("RewardCampaignsResourceManager", e2.getLocalizedMessage());
                            }
                        }
                    }

                    @Override // com.mbridge.msdk.foundation.download.download.H5DownLoadManager.H5ResDownloadListerInter
                    public final void onFailed(String str4, String str5) {
                        z.a("RewardCampaignsResourceManager", "zip btl template download failed");
                        try {
                            ResDownloadCheckManager.getInstance().setZipDownloadDone(str5, false);
                            Message messageObtain2 = Message.obtain();
                            messageObtain2.what = 205;
                            Bundle bundle2 = new Bundle();
                            bundle2.putString("unit_id", str2);
                            bundle2.putString(MBridgeConstans.PLACEMENT_ID, str);
                            bundle2.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, str3);
                            bundle2.putString("url", str5);
                            bundle2.putString("message", str4);
                            messageObtain2.setData(bundle2);
                            c.this.f3901a.sendMessage(messageObtain2);
                            if (iVar != null) {
                                iVar.a(str, str2, str3, str5, str4);
                            }
                            p pVar = new p();
                            pVar.o(r.m);
                            if (context != null) {
                                pVar.c(v.D(context.getApplicationContext()));
                            }
                            pVar.d(3);
                            if (campaignEx != null) {
                                pVar.n(campaignEx.getId());
                                pVar.k(campaignEx.getRequestId());
                                pVar.l(campaignEx.getRequestIdNotice());
                            }
                            pVar.i(str5);
                            pVar.p(str4);
                            pVar.m(str2);
                            t.a(com.mbridge.msdk.foundation.db.i.a(com.mbridge.msdk.foundation.controller.a.f().j())).a(pVar);
                        } catch (Exception e2) {
                            ResDownloadCheckManager.getInstance().setZipDownloadDone(str5, false);
                            Message messageObtain3 = Message.obtain();
                            messageObtain3.what = 105;
                            Bundle bundle3 = new Bundle();
                            bundle3.putString("unit_id", str2);
                            bundle3.putString(MBridgeConstans.PLACEMENT_ID, str);
                            bundle3.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, str3);
                            bundle3.putString("url", str5);
                            bundle3.putString("message", e2.getMessage());
                            messageObtain3.setData(bundle3);
                            c.this.f3901a.sendMessage(messageObtain3);
                            i iVar2 = iVar;
                            if (iVar2 != null) {
                                iVar2.a(str, str2, str3, str5, str4);
                            }
                            if (MBridgeConstans.DEBUG) {
                                z.d("RewardCampaignsResourceManager", e2.getLocalizedMessage());
                            }
                        }
                    }
                });
            } catch (Exception e2) {
                if (MBridgeConstans.DEBUG) {
                    z.d("RewardCampaignsResourceManager", e2.getLocalizedMessage());
                }
            }
        }
    }

    /* JADX INFO: compiled from: RewardCampaignsResourceManager.java */
    private static final class e implements com.mbridge.msdk.foundation.same.c.c {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private Handler f3909a;
        private int b;
        private String c;
        private String d;
        private String e;
        private CampaignEx f;

        public e(Handler handler, int i, String str, String str2, String str3, CampaignEx campaignEx) {
            this.f3909a = handler;
            this.b = i;
            this.d = str;
            this.c = str2;
            this.e = str3;
            this.f = campaignEx;
        }

        @Override // com.mbridge.msdk.foundation.same.c.c
        public final void onSuccessLoad(Bitmap bitmap, String str) {
            ResDownloadCheckManager.getInstance().setImageDownloadDone(str, true);
            Message messageObtain = Message.obtain();
            messageObtain.what = this.b == 0 ? 102 : 104;
            Bundle bundle = new Bundle();
            bundle.putString("unit_id", this.c);
            bundle.putString(MBridgeConstans.PLACEMENT_ID, this.d);
            bundle.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, this.e);
            messageObtain.setData(bundle);
            this.f3909a.sendMessage(messageObtain);
        }

        @Override // com.mbridge.msdk.foundation.same.c.c
        public final void onFailedLoad(final String str, String str2) {
            Message messageObtain = Message.obtain();
            messageObtain.what = this.b == 0 ? 202 : 204;
            Bundle bundle = new Bundle();
            bundle.putString("unit_id", this.c);
            bundle.putString(MBridgeConstans.PLACEMENT_ID, this.d);
            bundle.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, this.e);
            messageObtain.setData(bundle);
            this.f3909a.sendMessage(messageObtain);
            Runnable runnable = new Runnable() { // from class: com.mbridge.msdk.reward.adapter.c.e.1
                @Override // java.lang.Runnable
                public final void run() {
                    if (e.this.f != null) {
                        try {
                            t tVarA = t.a(com.mbridge.msdk.foundation.db.i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
                            z.a("RewardCampaignsResourceManager", "campaign is null");
                            p pVar = new p();
                            pVar.o(r.l);
                            pVar.c(v.D(com.mbridge.msdk.foundation.controller.a.f().j()));
                            pVar.n(e.this.f.getId());
                            pVar.d(e.this.f.getImageUrl());
                            pVar.k(e.this.f.getRequestId());
                            pVar.l(e.this.f.getRequestIdNotice());
                            pVar.m(e.this.c);
                            pVar.p(str);
                            tVarA.a(pVar);
                        } catch (Exception e) {
                            if (MBridgeConstans.DEBUG) {
                                z.d("RewardCampaignsResourceManager", e.getLocalizedMessage());
                            }
                        }
                    }
                }
            };
            if (com.mbridge.msdk.foundation.controller.b.a().d()) {
                com.mbridge.msdk.foundation.same.f.b.a().execute(runnable);
            } else {
                runnable.run();
            }
        }
    }

    /* JADX INFO: compiled from: RewardCampaignsResourceManager.java */
    private static final class f implements com.mbridge.msdk.videocommon.listener.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private Handler f3911a;
        private final String b;
        private final String c;
        private final String d;

        public f(Handler handler, String str, String str2, String str3) {
            this.f3911a = handler;
            this.c = str;
            this.b = str2;
            this.d = str3;
        }

        @Override // com.mbridge.msdk.videocommon.listener.a
        public final void a(String str) {
            z.d("RewardCampaignsResourceManager", "Video 下载成功: " + this.d);
            ResDownloadCheckManager.getInstance().setVideoDownloadDone(str, true);
            Message messageObtain = Message.obtain();
            messageObtain.what = 100;
            Bundle bundle = new Bundle();
            bundle.putString("unit_id", this.b);
            bundle.putString(MBridgeConstans.PLACEMENT_ID, this.c);
            bundle.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, this.d);
            bundle.putString("url", str);
            messageObtain.setData(bundle);
            this.f3911a.sendMessage(messageObtain);
        }

        @Override // com.mbridge.msdk.videocommon.listener.a
        public final void a(String str, String str2) {
            z.d("RewardCampaignsResourceManager", "Video 下载失败： " + str + " " + this.d);
            ResDownloadCheckManager.getInstance().setVideoDownloadDone(str2, false);
            Message messageObtain = Message.obtain();
            messageObtain.what = 200;
            Bundle bundle = new Bundle();
            bundle.putString("unit_id", this.b);
            bundle.putString(MBridgeConstans.PLACEMENT_ID, this.c);
            bundle.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, this.d);
            bundle.putString("url", str2);
            bundle.putString("message", str);
            messageObtain.setData(bundle);
            this.f3911a.sendMessage(messageObtain);
        }
    }

    /* JADX INFO: compiled from: RewardCampaignsResourceManager.java */
    private static final class g implements H5DownLoadManager.ZipDownloadListener {
        private Context b;
        private String c;
        private String d;
        private String e;
        private CampaignEx f;
        private int g;
        private Handler h;
        private i i;
        private CopyOnWriteArrayList<CampaignEx> j;

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private boolean f3912a = false;
        private long k = System.currentTimeMillis();

        public g(Context context, String str, String str2, String str3, CampaignEx campaignEx, int i, Handler handler, i iVar, CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList) {
            this.b = context;
            this.d = str;
            this.c = str2;
            this.e = str3;
            this.f = campaignEx;
            this.g = i;
            this.h = handler;
            this.i = iVar;
            this.j = copyOnWriteArrayList;
        }

        public final void a(boolean z) {
            this.f3912a = z;
        }

        @Override // com.mbridge.msdk.foundation.download.download.H5DownLoadManager.H5ResDownloadListerInter
        public final void onSuccess(String str) {
            ResDownloadCheckManager.getInstance().setZipDownloadDone(str, true);
            long jCurrentTimeMillis = System.currentTimeMillis() - this.k;
            int i = this.g;
            if (i == 313) {
                z.a("RewardCampaignsResourceManager", "zip pause download success");
                Message messageObtain = Message.obtain();
                messageObtain.what = 101;
                Bundle bundle = new Bundle();
                bundle.putString("unit_id", this.c);
                bundle.putString(MBridgeConstans.PLACEMENT_ID, this.d);
                bundle.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, this.e);
                bundle.putString("url", str);
                messageObtain.setData(bundle);
                this.h.sendMessage(messageObtain);
                return;
            }
            if (i == 497) {
                z.a("RewardCampaignsResourceManager", "zip endcard download success");
                Message messageObtain2 = Message.obtain();
                messageObtain2.what = 101;
                Bundle bundle2 = new Bundle();
                bundle2.putString("unit_id", this.c);
                bundle2.putString(MBridgeConstans.PLACEMENT_ID, this.d);
                bundle2.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, this.e);
                bundle2.putString("url", str);
                messageObtain2.setData(bundle2);
                this.h.sendMessage(messageObtain2);
                if (this.f3912a) {
                    try {
                        p pVar = new p(r.k, 14, jCurrentTimeMillis + "", str, this.f.getId(), this.c, "", "1");
                        pVar.k(this.f.getRequestId());
                        pVar.l(this.f.getRequestIdNotice());
                        pVar.n(this.f.getId());
                        pVar.b(this.f.getAdSpaceT());
                        if (this.f.getAdType() == 287) {
                            pVar.h("3");
                        } else if (this.f.getAdType() == 94) {
                            pVar.h("1");
                        }
                        com.mbridge.msdk.foundation.same.report.c.a(pVar, this.c);
                        return;
                    } catch (Exception e) {
                        if (MBridgeConstans.DEBUG) {
                            z.d("RewardCampaignsResourceManager", e.getLocalizedMessage());
                            return;
                        }
                        return;
                    }
                }
                return;
            }
            if (i != 859) {
                return;
            }
            z.a("RewardCampaignsResourceManager", "zip template download success");
            Message messageObtain3 = Message.obtain();
            messageObtain3.what = 103;
            Bundle bundle3 = new Bundle();
            bundle3.putString("unit_id", this.c);
            bundle3.putString(MBridgeConstans.PLACEMENT_ID, this.d);
            bundle3.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, this.e);
            messageObtain3.setData(bundle3);
            this.h.sendMessage(messageObtain3);
            i iVar = this.i;
            if (iVar != null) {
                iVar.a(this.d, this.c, this.e, str);
            }
            try {
                p pVar2 = new p();
                pVar2.o(r.m);
                if (this.b != null) {
                    pVar2.c(v.D(this.b.getApplicationContext()));
                }
                pVar2.d(1);
                if (this.f != null) {
                    pVar2.n(this.f.getId());
                    pVar2.k(this.f.getRequestId());
                    pVar2.l(this.f.getRequestIdNotice());
                }
                pVar2.i(str);
                pVar2.p("");
                pVar2.m(this.c);
                t.a(com.mbridge.msdk.foundation.db.i.a(com.mbridge.msdk.foundation.controller.a.f().j())).a(pVar2);
            } catch (Exception e2) {
                if (MBridgeConstans.DEBUG) {
                    z.d("RewardCampaignsResourceManager", e2.getLocalizedMessage());
                }
            }
        }

        @Override // com.mbridge.msdk.foundation.download.download.H5DownLoadManager.H5ResDownloadListerInter
        public final void onFailed(String str, String str2) {
            ResDownloadCheckManager.getInstance().setZipDownloadDone(str2, false);
            long jCurrentTimeMillis = System.currentTimeMillis() - this.k;
            int i = this.g;
            if (i == 313) {
                z.a("RewardCampaignsResourceManager", "zip pause download failed");
                Message messageObtain = Message.obtain();
                messageObtain.what = 101;
                Bundle bundle = new Bundle();
                bundle.putString("unit_id", this.c);
                bundle.putString(MBridgeConstans.PLACEMENT_ID, this.d);
                bundle.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, this.e);
                bundle.putString("url", str2);
                bundle.putString("message", str);
                messageObtain.setData(bundle);
                this.h.sendMessage(messageObtain);
                return;
            }
            if (i != 497) {
                if (i != 859) {
                    return;
                }
                z.a("RewardCampaignsResourceManager", "zip template download failed");
                Message messageObtain2 = Message.obtain();
                messageObtain2.what = 203;
                Bundle bundle2 = new Bundle();
                bundle2.putString("unit_id", this.c);
                bundle2.putString(MBridgeConstans.PLACEMENT_ID, this.d);
                bundle2.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, this.e);
                bundle2.putString("url", str2);
                bundle2.putString("message", str);
                messageObtain2.setData(bundle2);
                this.h.sendMessage(messageObtain2);
                i iVar = this.i;
                if (iVar != null) {
                    iVar.a(this.d, this.c, this.e, str2, str);
                }
                try {
                    p pVar = new p();
                    pVar.o(r.m);
                    if (this.b != null) {
                        pVar.c(v.D(this.b.getApplicationContext()));
                    }
                    pVar.d(3);
                    if (this.f != null) {
                        pVar.n(this.f.getId());
                        pVar.k(this.f.getRequestId());
                        pVar.l(this.f.getRequestIdNotice());
                    }
                    pVar.i(str2);
                    pVar.p(str);
                    pVar.m(this.c);
                    t.a(com.mbridge.msdk.foundation.db.i.a(com.mbridge.msdk.foundation.controller.a.f().j())).a(pVar);
                    return;
                } catch (Exception e) {
                    if (MBridgeConstans.DEBUG) {
                        z.d("RewardCampaignsResourceManager", e.getLocalizedMessage());
                        return;
                    }
                    return;
                }
            }
            z.a("RewardCampaignsResourceManager", "zip endcard download failed:  " + str);
            Message messageObtain3 = Message.obtain();
            messageObtain3.what = 201;
            Bundle bundle3 = new Bundle();
            bundle3.putString("unit_id", this.c);
            bundle3.putString(MBridgeConstans.PLACEMENT_ID, this.d);
            bundle3.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, this.e);
            bundle3.putString("url", str2);
            bundle3.putString("message", str);
            messageObtain3.setData(bundle3);
            this.h.sendMessage(messageObtain3);
            if (this.f3912a) {
                try {
                    p pVar2 = new p(r.k, 3, jCurrentTimeMillis + "", str2, this.f.getId(), this.c, "zip download failed", "1");
                    pVar2.k(this.f.getRequestId());
                    pVar2.l(this.f.getRequestIdNotice());
                    pVar2.n(this.f.getId());
                    pVar2.b(this.f.getAdSpaceT());
                    if (this.f.getAdType() == 287) {
                        pVar2.h("3");
                    } else if (this.f.getAdType() == 94) {
                        pVar2.h("1");
                    }
                    com.mbridge.msdk.foundation.same.report.c.a(pVar2, this.c);
                } catch (Exception e2) {
                    if (MBridgeConstans.DEBUG) {
                        z.d("RewardCampaignsResourceManager", e2.getLocalizedMessage());
                    }
                }
            }
        }
    }

    /* JADX INFO: compiled from: RewardCampaignsResourceManager.java */
    private static final class d implements H5DownLoadManager.IH5SourceDownloadListener {
        private int b;
        private final String c;
        private final String d;
        private final String e;
        private CampaignEx f;
        private i g;
        private Handler h;
        private CopyOnWriteArrayList<CampaignEx> i;

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private boolean f3908a = false;
        private final long j = System.currentTimeMillis();

        public d(int i, String str, String str2, String str3, CampaignEx campaignEx, i iVar, Handler handler, CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList) {
            this.b = i;
            this.c = str;
            this.d = str2;
            this.e = str3;
            this.f = campaignEx;
            this.g = iVar;
            this.h = handler;
            this.i = copyOnWriteArrayList;
        }

        public final void a(boolean z) {
            this.f3908a = z;
        }

        @Override // com.mbridge.msdk.foundation.download.download.H5DownLoadManager.H5ResDownloadListerInter
        public final void onSuccess(String str) {
            ResDownloadCheckManager.getInstance().setZipDownloadDone(str, true);
            int i = this.b;
            if (i == 313) {
                Message messageObtain = Message.obtain();
                messageObtain.what = 101;
                Bundle bundle = new Bundle();
                bundle.putString("unit_id", this.d);
                bundle.putString(MBridgeConstans.PLACEMENT_ID, this.c);
                bundle.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, this.e);
                bundle.putString("url", str);
                messageObtain.setData(bundle);
                this.h.sendMessage(messageObtain);
                return;
            }
            if (i != 497) {
                if (i != 859) {
                    return;
                }
                Message messageObtain2 = Message.obtain();
                messageObtain2.what = 105;
                Bundle bundle2 = new Bundle();
                bundle2.putString("unit_id", this.d);
                bundle2.putString(MBridgeConstans.PLACEMENT_ID, this.c);
                bundle2.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, this.e);
                messageObtain2.setData(bundle2);
                this.h.sendMessage(messageObtain2);
                i iVar = this.g;
                if (iVar != null) {
                    iVar.a(this.c, this.d, this.e, str);
                    return;
                }
                return;
            }
            Message messageObtain3 = Message.obtain();
            messageObtain3.what = 101;
            Bundle bundle3 = new Bundle();
            bundle3.putString("unit_id", this.d);
            bundle3.putString(MBridgeConstans.PLACEMENT_ID, this.c);
            bundle3.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, this.e);
            bundle3.putString("url", str);
            messageObtain3.setData(bundle3);
            this.h.sendMessage(messageObtain3);
            if (this.f3908a) {
                try {
                    p pVar = new p(r.k, 20, (System.currentTimeMillis() - this.j) + "", str, this.f.getId(), this.d, "", "2");
                    pVar.k(this.f.getRequestId());
                    pVar.l(this.f.getRequestIdNotice());
                    pVar.n(this.f.getId());
                    pVar.b(this.f.getAdSpaceT());
                    if (this.f.getAdType() == 287) {
                        pVar.h("3");
                    } else if (this.f.getAdType() == 94) {
                        pVar.h("1");
                    }
                    com.mbridge.msdk.foundation.same.report.c.a(pVar, this.d);
                } catch (Exception e) {
                    if (MBridgeConstans.DEBUG) {
                        z.d("RewardCampaignsResourceManager", e.getLocalizedMessage());
                    }
                }
            }
        }

        @Override // com.mbridge.msdk.foundation.download.download.H5DownLoadManager.H5ResDownloadListerInter
        public final void onFailed(String str, String str2) {
            ResDownloadCheckManager.getInstance().setZipDownloadDone(str, false);
            int i = this.b;
            if (i == 313) {
                Message messageObtain = Message.obtain();
                messageObtain.what = 201;
                Bundle bundle = new Bundle();
                bundle.putString("unit_id", this.d);
                bundle.putString(MBridgeConstans.PLACEMENT_ID, this.c);
                bundle.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, this.e);
                bundle.putString("url", str);
                bundle.putString("message", str2);
                messageObtain.setData(bundle);
                this.h.sendMessage(messageObtain);
                return;
            }
            if (i != 497) {
                if (i != 859) {
                    return;
                }
                Message messageObtain2 = Message.obtain();
                messageObtain2.what = 205;
                Bundle bundle2 = new Bundle();
                bundle2.putString("unit_id", this.d);
                bundle2.putString(MBridgeConstans.PLACEMENT_ID, this.c);
                bundle2.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, this.e);
                bundle2.putString("message", str2);
                messageObtain2.setData(bundle2);
                this.h.sendMessage(messageObtain2);
                i iVar = this.g;
                if (iVar != null) {
                    iVar.a(this.c, this.d, this.e, str, str2);
                    return;
                }
                return;
            }
            Message messageObtain3 = Message.obtain();
            messageObtain3.what = 201;
            Bundle bundle3 = new Bundle();
            bundle3.putString("unit_id", this.d);
            bundle3.putString(MBridgeConstans.PLACEMENT_ID, this.c);
            bundle3.putString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, this.e);
            bundle3.putString("url", str);
            bundle3.putString("message", str2);
            messageObtain3.setData(bundle3);
            this.h.sendMessage(messageObtain3);
            if (this.f3908a) {
                try {
                    p pVar = new p(r.k, 21, (System.currentTimeMillis() - this.j) + "", str, this.f.getId(), this.d, "url download failed", "2");
                    pVar.k(this.f.getRequestId());
                    pVar.l(this.f.getRequestIdNotice());
                    pVar.n(this.f.getId());
                    pVar.b(this.f.getAdSpaceT());
                    if (this.f.getAdType() == 287) {
                        pVar.h("3");
                    } else if (this.f.getAdType() == 94) {
                        pVar.h("1");
                    }
                    com.mbridge.msdk.foundation.same.report.c.a(pVar, this.d);
                } catch (Exception e) {
                    if (MBridgeConstans.DEBUG) {
                        z.d("RewardCampaignsResourceManager", e.getLocalizedMessage());
                    }
                }
            }
        }
    }

    /* JADX INFO: compiled from: RewardCampaignsResourceManager.java */
    private static final class h extends Handler {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private Context f3913a;
        private ConcurrentHashMap<String, InterfaceC0290c> b;
        private ConcurrentHashMap<String, CopyOnWriteArrayList<CampaignEx>> c;

        public h(Looper looper) {
            super(looper);
            this.b = new ConcurrentHashMap<>();
            this.c = new ConcurrentHashMap<>();
        }

        public final void a(String str, String str2, String str3, InterfaceC0290c interfaceC0290c) {
            this.b.put(str2 + "_" + str3, interfaceC0290c);
        }

        public final void a(Context context) {
            this.f3913a = context;
        }

        public final void a(String str, CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList) {
            this.c.put(str, copyOnWriteArrayList);
        }

        @Override // android.os.Handler
        public final void handleMessage(Message message) {
            boolean zA;
            Bundle data = message.getData();
            String string = data.getString(MBridgeConstans.PLACEMENT_ID);
            String string2 = data.getString("unit_id");
            String string3 = data.getString(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID);
            String str = string2 + "_" + string3;
            a aVar = (a) c.b.get(str);
            InterfaceC0290c interfaceC0290c = this.b.get(str);
            CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList = this.c.get(str);
            z.a("RewardCampaignsResourceManager", "收到 Message，开始判断");
            int i = message.what;
            switch (i) {
                case 100:
                case 101:
                case 102:
                case 103:
                case 104:
                case 105:
                    break;
                default:
                    switch (i) {
                        case 200:
                        case 201:
                        case 203:
                        case 205:
                            if (aVar != null && interfaceC0290c != null) {
                                String string4 = data.getString("message");
                                if (string4 == null) {
                                    string4 = "";
                                }
                                String str2 = "resource download failed " + c.b(message.what) + " " + string4;
                                CampaignEx campaignEx = null;
                                if (aVar.h != null && aVar.h.size() > 0) {
                                    campaignEx = aVar.h.get(0);
                                }
                                try {
                                } catch (Exception e) {
                                    e = e;
                                }
                                try {
                                    if (aVar.f3906a && aVar.i != null) {
                                        if (aVar.c == 1) {
                                            if (campaignEx != null && campaignEx.getRsIgnoreCheckRule() != null && campaignEx.getRsIgnoreCheckRule().size() > 0) {
                                                int i2 = message.what;
                                                if (i2 != 200) {
                                                    if (i2 != 201) {
                                                        if (i2 != 203) {
                                                            if (i2 == 205) {
                                                                if (!campaignEx.getRsIgnoreCheckRule().contains(3)) {
                                                                    if (aVar.h != null && aVar.h.size() > 0) {
                                                                        CampaignEx campaignEx2 = aVar.h.get(0);
                                                                        if (campaignEx2.getCMPTEntryUrl().equals(campaignEx2.getendcard_url()) && campaignEx.getRsIgnoreCheckRule().contains(2)) {
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else if (campaignEx.getRsIgnoreCheckRule().contains(1)) {
                                                        }
                                                    } else if (campaignEx.getRsIgnoreCheckRule().contains(2)) {
                                                    }
                                                } else if (campaignEx.getRsIgnoreCheckRule().contains(0)) {
                                                }
                                            }
                                            interfaceC0290c.a(string, string2, string3, aVar.h, str2);
                                            this.b.remove(str);
                                            c.b.remove(str);
                                            this.c.remove(str);
                                        } else {
                                            String string5 = data.getString("url");
                                            int i3 = message.what;
                                            if (i3 == 200) {
                                                if (campaignEx != null && campaignEx.getRsIgnoreCheckRule() != null && campaignEx.getRsIgnoreCheckRule().size() > 0 && campaignEx.getRsIgnoreCheckRule().contains(0)) {
                                                    z.b("RewardCampaignsResourceManager", "Is TPL but  video download fail but hit ignoreCheckRule");
                                                } else {
                                                    for (int i4 = 0; i4 < aVar.i.size(); i4++) {
                                                        if (aVar.i.get(i4).getVideoUrlEncode().equals(string5)) {
                                                            aVar.i.remove(i4);
                                                        }
                                                    }
                                                    c.b.remove(str);
                                                    c.b.put(str, aVar);
                                                }
                                                break;
                                            } else if (i3 == 201) {
                                                if (campaignEx != null && campaignEx.getRsIgnoreCheckRule() != null && campaignEx.getRsIgnoreCheckRule().size() > 0 && campaignEx.getRsIgnoreCheckRule().contains(2)) {
                                                    z.b("RewardCampaignsResourceManager", "Is TPL but download endcard fail but hit ignoreCheckRule");
                                                } else {
                                                    for (int i5 = 0; i5 < aVar.i.size(); i5++) {
                                                        CampaignEx campaignEx3 = aVar.i.get(i5);
                                                        if (campaignEx3.getRewardTemplateMode() != null && campaignEx3.getRewardTemplateMode().d().equals(string5)) {
                                                            aVar.i.remove(i5);
                                                        }
                                                        if (!TextUtils.isEmpty(campaignEx3.getendcard_url()) && campaignEx3.getendcard_url().equals(string5)) {
                                                            aVar.i.remove(i5);
                                                        }
                                                    }
                                                    c.b.remove(str);
                                                    c.b.put(str, aVar);
                                                }
                                                break;
                                            } else if (i3 == 203) {
                                                if (campaignEx != null && campaignEx.getRsIgnoreCheckRule() != null && campaignEx.getRsIgnoreCheckRule().size() > 0 && campaignEx.getRsIgnoreCheckRule().contains(1)) {
                                                    z.b("RewardCampaignsResourceManager", "Is TPL but download template fail but hit ignoreCheckRule");
                                                } else {
                                                    for (int i6 = 0; i6 < aVar.i.size(); i6++) {
                                                        CampaignEx campaignEx4 = aVar.i.get(i6);
                                                        if (campaignEx4.getRewardTemplateMode() != null && campaignEx4.getRewardTemplateMode().e().equals(string5)) {
                                                            aVar.i.remove(i6);
                                                        }
                                                    }
                                                    c.b.remove(str);
                                                    c.b.put(str, aVar);
                                                }
                                                break;
                                            } else if (i3 == 205) {
                                                if (campaignEx != null && campaignEx.getRsIgnoreCheckRule() != null && campaignEx.getRsIgnoreCheckRule().size() > 0 && campaignEx.getRsIgnoreCheckRule().contains(3)) {
                                                    z.b("RewardCampaignsResourceManager", "Is TPL but download BTL Template fail but hit ignoreCheckRule");
                                                } else {
                                                    aVar.i.clear();
                                                    c.b.remove(str);
                                                    c.b.put(str, aVar);
                                                }
                                                break;
                                            }
                                            boolean zA2 = com.mbridge.msdk.videocommon.download.b.getInstance().a(94, aVar.e, aVar.b, aVar.d, aVar.f3906a, aVar.c, copyOnWriteArrayList);
                                            z.a("RewardCampaignsResourceManager", " failed Campaign是否下载成功：(回调) " + zA2);
                                            if (zA2) {
                                                interfaceC0290c.a(string, string2, string3, aVar.h);
                                                this.b.remove(str);
                                                c.b.remove(str);
                                                this.c.remove(str);
                                            } else if (aVar.i.size() == 0) {
                                                interfaceC0290c.a(string, string2, string3, aVar.h, str2);
                                                this.b.remove(str);
                                                c.b.remove(str);
                                                this.c.remove(str);
                                            }
                                        }
                                    } else {
                                        boolean zA3 = com.mbridge.msdk.videocommon.download.b.getInstance().a(94, aVar.e, aVar.b, aVar.d, aVar.f3906a, aVar.c, copyOnWriteArrayList);
                                        z.a("RewardCampaignsResourceManager", " failed Campaign是否下载成功： （回调）" + zA3);
                                        if (zA3) {
                                            interfaceC0290c.a(string, string2, string3, aVar.h);
                                        } else {
                                            if (campaignEx != null && campaignEx.getRsIgnoreCheckRule() != null && campaignEx.getRsIgnoreCheckRule().size() > 0) {
                                                int i7 = message.what;
                                                if (i7 != 200) {
                                                    if (i7 != 201) {
                                                        if (i7 == 203) {
                                                            if (campaignEx.getRsIgnoreCheckRule().contains(1)) {
                                                            }
                                                        } else if (i7 == 205 && campaignEx.getRsIgnoreCheckRule().contains(3)) {
                                                        }
                                                    } else if (campaignEx.getRsIgnoreCheckRule().contains(2)) {
                                                    }
                                                } else if (campaignEx.getRsIgnoreCheckRule().contains(0)) {
                                                }
                                            }
                                            interfaceC0290c.a(string, string2, string3, aVar.h, str2);
                                        }
                                        this.b.remove(str);
                                        c.b.remove(str);
                                        this.c.remove(str);
                                    }
                                } catch (Exception e2) {
                                    e = e2;
                                    interfaceC0290c.a(string, string2, string3, aVar.h, "resource download failed " + e.getMessage());
                                    return;
                                }
                                break;
                            }
                            break;
                    }
                    return;
            }
            if (aVar == null || interfaceC0290c == null) {
                return;
            }
            try {
                zA = com.mbridge.msdk.videocommon.download.b.getInstance().a(94, aVar.e, aVar.b, aVar.d, aVar.f3906a, aVar.c, copyOnWriteArrayList);
            } catch (Exception e3) {
                if (MBridgeConstans.DEBUG) {
                    z.d("RewardCampaignsResourceManager", e3.getLocalizedMessage());
                }
                zA = false;
            }
            z.a("RewardCampaignsResourceManager", " success Campaign是否下载成功：(回调) " + zA);
            if (zA) {
                interfaceC0290c.a(string, string2, string3, aVar.h);
                this.b.remove(str);
                c.b.remove(str);
                this.c.remove(str);
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:68:0x0209 A[Catch: all -> 0x022a, TryCatch #0 {, blocks: (B:4:0x000b, B:5:0x0023, B:8:0x002b, B:11:0x003d, B:12:0x005a, B:16:0x0070, B:19:0x0076, B:21:0x007c, B:24:0x0087, B:26:0x00c0, B:28:0x00d6, B:66:0x0205, B:68:0x0209, B:70:0x0214, B:23:0x0082, B:56:0x0184, B:57:0x01aa, B:58:0x01da, B:39:0x00f5, B:41:0x0105, B:43:0x0117, B:44:0x0121, B:45:0x0151), top: B:79:0x000b }] */
    /* JADX WARN: Removed duplicated region for block: B:70:0x0214 A[Catch: all -> 0x022a, TRY_LEAVE, TryCatch #0 {, blocks: (B:4:0x000b, B:5:0x0023, B:8:0x002b, B:11:0x003d, B:12:0x005a, B:16:0x0070, B:19:0x0076, B:21:0x007c, B:24:0x0087, B:26:0x00c0, B:28:0x00d6, B:66:0x0205, B:68:0x0209, B:70:0x0214, B:23:0x0082, B:56:0x0184, B:57:0x01aa, B:58:0x01da, B:39:0x00f5, B:41:0x0105, B:43:0x0117, B:44:0x0121, B:45:0x0151), top: B:79:0x000b }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final synchronized void a(boolean r24, android.os.Handler r25, boolean r26, boolean r27, com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r28, java.lang.String r29, int r30, com.mbridge.msdk.foundation.entity.CampaignEx r31, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r32, java.lang.String r33, java.lang.String r34, java.lang.String r35, java.lang.String r36, java.lang.String r37, com.mbridge.msdk.videocommon.d.c r38, com.mbridge.msdk.reward.adapter.c.j r39) {
        /*
            Method dump skipped, instruction units count: 557
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.reward.adapter.c.a(boolean, android.os.Handler, boolean, boolean, com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView, java.lang.String, int, com.mbridge.msdk.foundation.entity.CampaignEx, java.util.concurrent.CopyOnWriteArrayList, java.lang.String, java.lang.String, java.lang.String, java.lang.String, java.lang.String, com.mbridge.msdk.videocommon.d.c, com.mbridge.msdk.reward.adapter.c$j):void");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static synchronized String b(int i2) {
        return i2 != 200 ? i2 != 201 ? i2 != 203 ? i2 != 205 ? EnvironmentCompat.MEDIA_UNKNOWN : "tpl" : "temp" : "zip/html" : "video";
    }

    /* JADX INFO: compiled from: RewardCampaignsResourceManager.java */
    private static class k extends com.mbridge.msdk.mbjscommon.c.b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private Handler f3914a;
        private Runnable b;
        private final boolean c;
        private final boolean d;
        private String e;
        private final j f;
        private final WindVaneWebView g;
        private final String h;
        private final String i;
        private final String j;
        private final a.C0309a k;
        private final CampaignEx l;
        private CopyOnWriteArrayList<CampaignEx> m;
        private long n;
        private boolean o;
        private boolean p;
        private final Runnable q;
        private final Runnable r;

        public k(Handler handler, Runnable runnable, boolean z, final boolean z2, final String str, final j jVar, WindVaneWebView windVaneWebView, final String str2, final String str3, final String str4, final a.C0309a c0309a, final CampaignEx campaignEx, CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList, final long j) {
            this.f3914a = handler;
            this.b = runnable;
            this.c = z;
            this.d = z2;
            this.e = str;
            this.f = jVar;
            this.g = windVaneWebView;
            this.h = str2;
            this.i = str4;
            this.j = str3;
            this.k = c0309a;
            this.l = campaignEx;
            this.m = copyOnWriteArrayList;
            this.n = j;
            this.r = new Runnable() { // from class: com.mbridge.msdk.reward.adapter.c.k.1
                @Override // java.lang.Runnable
                public final void run() {
                    WindVaneWebView windVaneWebViewA;
                    a.C0309a c0309a2;
                    z.a("WindVaneWebView", "WebView onPageFinish timeout exception after 5s");
                    if (jVar != null && (c0309a2 = c0309a) != null) {
                        c0309a2.a(true);
                        ResDownloadCheckManager.getInstance().setTemplatePreLoadDone(str4 + "_" + str + "_" + str2, true);
                        try {
                            com.mbridge.msdk.reward.b.a.a(campaignEx, com.mbridge.msdk.foundation.controller.a.f().j(), "WebView onPageFinish timeout exception after 5s", str4, z2, str, campaignEx.getRequestIdNotice(), System.currentTimeMillis() - j);
                        } catch (Exception unused) {
                        }
                        jVar.a(str4 + "_" + str2, str3, str4, str, str2, c0309a);
                    }
                    a.C0309a c0309a3 = c0309a;
                    if (c0309a3 == null || (windVaneWebViewA = c0309a3.a()) == null) {
                        return;
                    }
                    try {
                        windVaneWebViewA.release();
                    } catch (Exception unused2) {
                    }
                }
            };
            this.q = new Runnable() { // from class: com.mbridge.msdk.reward.adapter.c.k.2
                @Override // java.lang.Runnable
                public final void run() {
                    WindVaneWebView windVaneWebViewA;
                    a.C0309a c0309a2;
                    z.a("WindVaneWebView", "WebView readyState timeout exception after 5s");
                    if (jVar != null && (c0309a2 = c0309a) != null) {
                        c0309a2.a(true);
                        ResDownloadCheckManager.getInstance().setTemplatePreLoadDone(str4 + "_" + str + "_" + str2, true);
                        try {
                            com.mbridge.msdk.reward.b.a.a(campaignEx, com.mbridge.msdk.foundation.controller.a.f().j(), "WebView readyState timeout exception after 5s", str4, z2, str, campaignEx.getRequestIdNotice(), System.currentTimeMillis() - j);
                        } catch (Exception unused) {
                        }
                        jVar.a(str4 + "_" + str2, str3, str4, str, str2, c0309a);
                    }
                    a.C0309a c0309a3 = c0309a;
                    if (c0309a3 == null || (windVaneWebViewA = c0309a3.a()) == null) {
                        return;
                    }
                    try {
                        windVaneWebViewA.release();
                    } catch (Exception unused2) {
                    }
                }
            };
            if (handler != null) {
                handler.postDelayed(this.r, 5000L);
            }
        }

        @Override // com.mbridge.msdk.mbjscommon.c.b, com.mbridge.msdk.mbjscommon.windvane.d
        public final void a(WebView webView, int i) {
            Handler handler;
            Runnable runnable;
            Runnable runnable2;
            super.a(webView, i);
            Handler handler2 = this.f3914a;
            if (handler2 != null && (runnable2 = this.q) != null) {
                handler2.removeCallbacks(runnable2);
            }
            Handler handler3 = this.f3914a;
            if (handler3 != null && (runnable = this.r) != null) {
                handler3.removeCallbacks(runnable);
            }
            if (this.p) {
                return;
            }
            try {
                com.mbridge.msdk.reward.b.a.a(this.l, com.mbridge.msdk.foundation.controller.a.f().j(), "preload temp readState: " + i, this.i, this.d, this.e, this.l.getRequestIdNotice(), System.currentTimeMillis() - this.n);
            } catch (Exception unused) {
            }
            String str = this.i + "_" + this.h;
            if (i == 1) {
                z.a("WindVaneWebView", "TempalteWindVaneWebviewClient template 预加载成功 state ：" + i);
                Runnable runnable3 = this.b;
                if (runnable3 != null && (handler = this.f3914a) != null) {
                    handler.removeCallbacks(runnable3);
                }
                ResDownloadCheckManager.getInstance().setTemplatePreLoadDone(this.i + "_" + this.e + "_" + this.h, true);
                a.C0309a c0309a = this.k;
                if (c0309a != null) {
                    c0309a.a(true);
                }
                if (this.c) {
                    if (this.d) {
                        z.a("WindVaneWebView", "put templeteCache in bidIVCache ");
                        com.mbridge.msdk.videocommon.a.a(com.tkay.expressad.foundation.g.a.aU, this.l.getRequestIdNotice(), this.k);
                    } else {
                        z.a("WindVaneWebView", "put templeteCache in iVCache ");
                        com.mbridge.msdk.videocommon.a.b(com.tkay.expressad.foundation.g.a.aU, this.l.getRequestIdNotice(), this.k);
                    }
                } else if (this.d) {
                    z.a("WindVaneWebView", "put templeteCache in bidRVCache ");
                    com.mbridge.msdk.videocommon.a.a(94, this.l.getRequestIdNotice(), this.k);
                } else {
                    z.a("WindVaneWebView", "put templeteCache in rVCache ");
                    com.mbridge.msdk.videocommon.a.b(94, this.l.getRequestIdNotice(), this.k);
                }
                j jVar = this.f;
                if (jVar != null) {
                    jVar.a(str, this.j, this.i, this.e, this.h, this.k);
                }
            } else {
                j jVar2 = this.f;
                if (jVar2 != null) {
                    jVar2.a(str, this.j, this.i, this.e, this.h, this.k, "state " + i);
                }
            }
            this.p = true;
        }

        @Override // com.mbridge.msdk.mbjscommon.c.b, com.mbridge.msdk.mbjscommon.windvane.d
        public final void a(WebView webView, int i, String str, String str2) {
            super.a(webView, i, str, str2);
            z.a("WindVaneWebView", "TempalteWindVaneWebviewClient preLoadTemplate onReceivedError: " + str);
            ResDownloadCheckManager.getInstance().setTemplatePreLoadDone(this.i + "_" + this.e + "_" + this.h, false);
            try {
                com.mbridge.msdk.reward.b.a.a(this.l, com.mbridge.msdk.foundation.controller.a.f().j(), "WebView onReceivedError exception: " + str, this.i, this.d, this.e, this.l.getRequestIdNotice(), System.currentTimeMillis() - this.n);
            } catch (Exception unused) {
            }
            Handler handler = this.f3914a;
            if (handler != null) {
                if (this.q != null) {
                    handler.removeCallbacks(this.r);
                }
                Runnable runnable = this.q;
                if (runnable != null) {
                    this.f3914a.removeCallbacks(runnable);
                }
            }
            try {
                String str3 = this.i + "_" + this.h;
                if (this.k != null) {
                    this.k.a(false);
                }
                if (this.f != null) {
                    this.f.a(str3, this.j, this.i, this.e, str2, this.k, str);
                }
            } catch (Exception e) {
                if (MBridgeConstans.DEBUG) {
                    z.d("WindVaneWebView", e.getLocalizedMessage());
                }
            }
        }

        @Override // com.mbridge.msdk.mbjscommon.c.b, com.mbridge.msdk.mbjscommon.windvane.d
        public final void a(WebView webView, SslErrorHandler sslErrorHandler, SslError sslError) {
            super.a(webView, sslErrorHandler, sslError);
            StringBuilder sb = new StringBuilder();
            sb.append("TempalteWindVaneWebviewClient preLoadTemplate onReceivedSslError: ");
            String string = "";
            sb.append(sslError == null ? "" : Integer.valueOf(sslError.getPrimaryError()));
            z.a("WindVaneWebView", sb.toString());
            ResDownloadCheckManager.getInstance().setTemplatePreLoadDone(this.i + "_" + this.e + "_" + this.h, false);
            try {
                CampaignEx campaignEx = this.l;
                Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
                StringBuilder sb2 = new StringBuilder();
                sb2.append("WebView onReceivedSslError exception: ");
                sb2.append(sslError == null ? "SSLError" : Integer.toString(sslError.getPrimaryError()));
                com.mbridge.msdk.reward.b.a.a(campaignEx, contextJ, sb2.toString(), this.i, this.d, this.e, this.l.getRequestIdNotice(), System.currentTimeMillis() - this.n);
            } catch (Exception unused) {
            }
            Handler handler = this.f3914a;
            if (handler != null) {
                if (this.q != null) {
                    handler.removeCallbacks(this.r);
                }
                Runnable runnable = this.q;
                if (runnable != null) {
                    this.f3914a.removeCallbacks(runnable);
                }
            }
            try {
                String str = this.i + "_" + this.h;
                if (this.k != null) {
                    this.k.a(false);
                }
                if (this.f != null) {
                    j jVar = this.f;
                    String str2 = this.j;
                    String str3 = this.i;
                    String str4 = this.e;
                    String str5 = this.h;
                    a.C0309a c0309a = this.k;
                    if (sslError != null) {
                        string = Integer.toString(sslError.getPrimaryError());
                    }
                    jVar.a(str, str2, str3, str4, str5, c0309a, string);
                }
            } catch (Exception e) {
                if (MBridgeConstans.DEBUG) {
                    z.d("WindVaneWebView", e.getLocalizedMessage());
                }
            }
        }

        @Override // com.mbridge.msdk.mbjscommon.c.b, com.mbridge.msdk.mbjscommon.windvane.d
        public final void a(WebView webView, String str) {
            Runnable runnable;
            Handler handler;
            Runnable runnable2;
            super.a(webView, str);
            z.a("WindVaneWebView", "TempalteWindVaneWebviewClient preLoadTemplate onPageFinished: ");
            Handler handler2 = this.f3914a;
            if (handler2 != null && (runnable2 = this.r) != null) {
                handler2.removeCallbacks(runnable2);
            }
            if (this.o) {
                return;
            }
            try {
                com.mbridge.msdk.reward.b.a.a(this.l, com.mbridge.msdk.foundation.controller.a.f().j(), "preload temp onPageFinish", this.i, this.d, this.e, this.l.getRequestIdNotice(), System.currentTimeMillis() - this.n);
            } catch (Exception unused) {
            }
            if (!str.contains("wfr=1")) {
                String str2 = this.i + "_" + this.h;
                ResDownloadCheckManager.getInstance().setTemplatePreLoadDone(this.i + "_" + this.e + "_" + this.h, true);
                Runnable runnable3 = this.b;
                if (runnable3 != null && (handler = this.f3914a) != null) {
                    handler.removeCallbacks(runnable3);
                }
                a.C0309a c0309a = this.k;
                if (c0309a != null) {
                    c0309a.a(true);
                }
                if (this.c) {
                    if (this.l.isBidCampaign()) {
                        z.a("WindVaneWebView", "TempalteWindVaneWebviewClient Tempalte put templeteCache in bidIVCache ");
                        com.mbridge.msdk.videocommon.a.a(com.tkay.expressad.foundation.g.a.aU, this.l.getRequestIdNotice(), this.k);
                    } else {
                        z.a("WindVaneWebView", "TempalteWindVaneWebviewClient Tempalte put templeteCache in iVCache ");
                        com.mbridge.msdk.videocommon.a.b(com.tkay.expressad.foundation.g.a.aU, this.l.getRequestIdNotice(), this.k);
                    }
                } else if (this.l.isBidCampaign()) {
                    z.a("WindVaneWebView", "TempalteWindVaneWebviewClient Tempalte put templeteCache in bidRVCache ");
                    com.mbridge.msdk.videocommon.a.a(94, this.l.getRequestIdNotice(), this.k);
                } else {
                    z.a("WindVaneWebView", "TempalteWindVaneWebviewClient Tempalte put templeteCache in rVCache ");
                    com.mbridge.msdk.videocommon.a.b(94, this.l.getRequestIdNotice(), this.k);
                }
                j jVar = this.f;
                if (jVar != null) {
                    jVar.a(str2, this.j, this.i, this.e, this.h, this.k);
                }
            } else {
                Handler handler3 = this.f3914a;
                if (handler3 != null && (runnable = this.q) != null) {
                    handler3.postDelayed(runnable, 5000L);
                }
            }
            com.mbridge.msdk.mbjscommon.windvane.h.a().a(webView);
            this.o = true;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:51:0x01ea  */
    /* JADX WARN: Removed duplicated region for block: B:55:0x0206 A[Catch: all -> 0x0211, TRY_LEAVE, TryCatch #1 {, blocks: (B:4:0x000d, B:7:0x0033, B:10:0x0047, B:11:0x0064, B:13:0x00ae, B:15:0x00b4, B:17:0x00be, B:20:0x00c5, B:22:0x00cb, B:23:0x00d5, B:25:0x00db, B:27:0x00ef, B:29:0x00fd, B:30:0x010c, B:31:0x010f, B:33:0x011c, B:35:0x016d, B:37:0x0181, B:39:0x01a1, B:52:0x01eb, B:53:0x0202, B:55:0x0206, B:32:0x0116), top: B:64:0x000d }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final synchronized void a(boolean r27, android.os.Handler r28, boolean r29, boolean r30, java.lang.String r31, java.lang.String r32, java.lang.String r33, java.lang.String r34, java.lang.String r35, int r36, com.mbridge.msdk.foundation.entity.CampaignEx r37, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r38, java.lang.String r39, java.lang.String r40, com.mbridge.msdk.videocommon.d.c r41, com.mbridge.msdk.reward.adapter.c.j r42, boolean r43) {
        /*
            Method dump skipped, instruction units count: 532
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.reward.adapter.c.a(boolean, android.os.Handler, boolean, boolean, java.lang.String, java.lang.String, java.lang.String, java.lang.String, java.lang.String, int, com.mbridge.msdk.foundation.entity.CampaignEx, java.util.concurrent.CopyOnWriteArrayList, java.lang.String, java.lang.String, com.mbridge.msdk.videocommon.d.c, com.mbridge.msdk.reward.adapter.c$j, boolean):void");
    }

    /* JADX INFO: compiled from: RewardCampaignsResourceManager.java */
    private static class b extends com.mbridge.msdk.mbjscommon.c.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final Handler f3907a;
        private final Runnable b;
        private final boolean c;
        private final boolean d;
        private int e;
        private String f;
        private String g;
        private String h;
        private String i;
        private a.C0309a j;
        private CampaignEx k;
        private CopyOnWriteArrayList<CampaignEx> l;
        private com.mbridge.msdk.videocommon.d.c m;
        private final j n;
        private boolean o;
        private boolean p;
        private boolean q;
        private int r = 0;
        private boolean s;
        private long t;

        public b(boolean z, Handler handler, Runnable runnable, boolean z2, boolean z3, int i, String str, String str2, String str3, String str4, a.C0309a c0309a, CampaignEx campaignEx, CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList, com.mbridge.msdk.videocommon.d.c cVar, j jVar, boolean z4, long j) {
            this.f3907a = handler;
            this.b = runnable;
            this.c = z2;
            this.d = z3;
            this.e = i;
            this.f = str;
            this.h = str2;
            this.g = str3;
            this.i = str4;
            this.j = c0309a;
            this.k = campaignEx;
            this.l = copyOnWriteArrayList;
            this.m = cVar;
            this.n = jVar;
            this.o = z4;
            this.s = z;
            this.t = j;
            z.a("RewardCampaignsResourceManager_test", "开始预加载大模板");
        }

        @Override // com.mbridge.msdk.mbjscommon.c.a, com.mbridge.msdk.mbjscommon.windvane.d
        public final void a(WebView webView, int i) {
            Runnable runnable;
            z.a("RewardCampaignsResourceManager_test", "收到大模板 readyState 回调: " + i);
            if (this.q) {
                return;
            }
            try {
                com.mbridge.msdk.reward.b.a.a(this.k, com.mbridge.msdk.foundation.controller.a.f().j(), "preload tpl readyState: " + i, this.g, this.d, this.i, this.k.getRequestIdNotice(), System.currentTimeMillis() - this.t);
            } catch (Exception unused) {
            }
            String str = this.g + "_" + this.f;
            z.a("test_pre_load_tpl", "CampaignTPLWindVaneWebviewClient 开始预加载大模板资源 readyState： " + i + " isCache: " + this.o);
            if (i == 1) {
                z.a("RVWindVaneWebView", "CampaignTPLWindVaneWebviewClient templete preload readyState state = " + i);
                if (this.o) {
                    com.mbridge.msdk.videocommon.a.e(this.g + "_" + this.i);
                } else {
                    com.mbridge.msdk.videocommon.a.d(this.g + "_" + this.i);
                }
                z.a("test_pre_load_tpl", "添加大模板： " + this.g + "_" + this.i + "_" + this.f);
                StringBuilder sb = new StringBuilder();
                sb.append(this.g);
                sb.append("_");
                sb.append(this.i);
                sb.append("_");
                sb.append(this.f);
                com.mbridge.msdk.videocommon.a.a(sb.toString(), this.j, true, this.o);
                Handler handler = this.f3907a;
                if (handler != null && (runnable = this.b) != null) {
                    handler.removeCallbacks(runnable);
                }
                ResDownloadCheckManager.getInstance().setTemplatePreLoadDone(this.g + "_" + this.i + "_" + this.f, true);
                a.C0309a c0309a = this.j;
                if (c0309a != null) {
                    c0309a.a(true);
                }
                if (this.n != null) {
                    z.a("RVWindVaneWebView", "CampaignTPLWindVaneWebviewClient rewardTemplatePreLoadListener.onPreLoadSuccess ");
                    this.n.a(str, this.h, this.g, this.i, this.f, this.j);
                }
            } else {
                ResDownloadCheckManager.getInstance().setTemplatePreLoadDone(this.g + "_" + this.i + "_" + this.f, false);
                a.C0309a c0309a2 = this.j;
                if (c0309a2 != null) {
                    c0309a2.a(false);
                }
                j jVar = this.n;
                if (jVar != null) {
                    jVar.a(str, this.h, this.g, this.i, this.f, this.j, "state 2");
                }
            }
            this.q = true;
        }

        @Override // com.mbridge.msdk.mbjscommon.c.a
        public final void a(WebView webView, String str, String str2, int i, int i2) {
            z.a("RVWindVaneWebView", "loadAds: unitID " + str2 + " type " + i + " adType " + i2);
            boolean z = true;
            if (i == 1) {
                try {
                    com.mbridge.msdk.reward.a.a aVar = new com.mbridge.msdk.reward.a.a();
                    aVar.b(false);
                    if (i2 != 2) {
                        z = false;
                    }
                    aVar.a(z);
                    aVar.b(str, str2);
                    aVar.a(new com.mbridge.msdk.video.bt.module.b.a(null));
                    aVar.d(false);
                } catch (Exception unused) {
                }
            }
        }

        /* JADX WARN: Removed duplicated region for block: B:36:0x011a A[Catch: all -> 0x0153, TRY_LEAVE, TryCatch #0 {all -> 0x0153, blocks: (B:16:0x0089, B:18:0x008f, B:21:0x0097, B:23:0x00a5, B:24:0x00aa, B:27:0x00d3, B:29:0x00d7, B:30:0x00e0, B:32:0x00ee, B:34:0x00fe, B:35:0x0104, B:36:0x011a, B:37:0x011f, B:40:0x0147, B:42:0x014b), top: B:56:0x0089, inners: #2, #3 }] */
        /* JADX WARN: Removed duplicated region for block: B:51:0x0168 A[Catch: all -> 0x0166, TRY_LEAVE, TryCatch #1 {all -> 0x0166, blocks: (B:4:0x000f, B:6:0x0015, B:8:0x0063, B:47:0x0159, B:48:0x0160, B:51:0x0168), top: B:59:0x000f }] */
        @Override // com.mbridge.msdk.mbjscommon.c.a
        /*
            Code decompiled incorrectly, please refer to instructions dump.
            To view partially-correct add '--show-bad-code' argument
        */
        public final void a(java.lang.Object r18, java.lang.String r19) {
            /*
                Method dump skipped, instruction units count: 376
                To view this dump add '--comments-level debug' option
            */
            throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.reward.adapter.c.b.a(java.lang.Object, java.lang.String):void");
        }

        @Override // com.mbridge.msdk.mbjscommon.c.a, com.mbridge.msdk.mbjscommon.windvane.d
        public final void a(WebView webView, String str) {
            Runnable runnable;
            super.a(webView, str);
            z.a("RewardCampaignsResourceManager_test", "onPageFinished");
            if (this.p) {
                return;
            }
            try {
                com.mbridge.msdk.reward.b.a.a(this.k, com.mbridge.msdk.foundation.controller.a.f().j(), "preload tpl onPageFinish", this.g, this.d, this.i, this.k.getRequestIdNotice(), System.currentTimeMillis() - this.t);
            } catch (Exception unused) {
            }
            String str2 = this.g + "_" + this.f;
            if (!str.contains("wfr=1")) {
                z.a("RVWindVaneWebView", "CampaignTPLWindVaneWebviewClient templete preload wfr=1 不包含 ");
                ResDownloadCheckManager.getInstance().setTemplatePreLoadDone(this.g + "_" + this.i + "_" + this.f, true);
                Handler handler = this.f3907a;
                if (handler != null && (runnable = this.b) != null) {
                    handler.removeCallbacks(runnable);
                }
                a.C0309a c0309a = this.j;
                if (c0309a != null) {
                    c0309a.a(true);
                }
                if (this.n != null) {
                    z.a("RewardCampaignsResourceManager", "CampaignTPLWindVaneWebviewClient rewardTemplatePreLoadListener.onPreLoadSuccess ");
                    this.n.a(str2, this.h, this.g, this.i, this.f, this.j);
                }
            }
            com.mbridge.msdk.mbjscommon.windvane.h.a().a(webView);
            this.p = true;
        }

        @Override // com.mbridge.msdk.mbjscommon.c.a, com.mbridge.msdk.mbjscommon.windvane.d
        public final void a(WebView webView, int i, String str, String str2) {
            super.a(webView, i, str, str2);
            z.a("RewardCampaignsResourceManager_test", "onReceivedError： " + i + "  " + str);
            ResDownloadCheckManager.getInstance().setTemplatePreLoadDone(this.g + "_" + this.i + "_" + this.f, false);
            if (this.n != null) {
                String str3 = this.g + "_" + this.f;
                a.C0309a c0309a = this.j;
                if (c0309a != null) {
                    c0309a.a(false);
                }
                this.n.a(str3, this.h, this.g, this.i, this.f, this.j, str);
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX INFO: compiled from: RewardCampaignsResourceManager.java */
    static final class m {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static final c f3918a = new c();
    }

    /* JADX INFO: compiled from: RewardCampaignsResourceManager.java */
    private static class l extends com.mbridge.msdk.mbjscommon.c.b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private String f3917a;
        private final boolean b;
        private final WindVaneWebView c;
        private final String d;
        private final String e;
        private final a.C0309a f;
        private final CampaignEx g;
        private boolean h;
        private String i;
        private boolean j;
        private boolean k;

        public l(String str, boolean z, WindVaneWebView windVaneWebView, String str2, String str3, a.C0309a c0309a, CampaignEx campaignEx, boolean z2, String str4) {
            this.b = z;
            this.c = windVaneWebView;
            this.d = str2;
            this.e = str3;
            this.f = c0309a;
            this.g = campaignEx;
            this.f3917a = str;
            this.h = z2;
            this.i = str4;
            z.a("WindVaneWebView", "TempalteWindVaneWebviewClientForTPL init");
        }

        @Override // com.mbridge.msdk.mbjscommon.c.b, com.mbridge.msdk.mbjscommon.windvane.d
        public final void a(WebView webView, int i) {
            z.a("RewardCampaignsResourceManager_test", "收到大模板 播放模板 readyState 回调: " + i);
            if (this.k) {
                return;
            }
            if (this.c != null) {
                JSONObject jSONObject = new JSONObject();
                try {
                    jSONObject.put("id", this.f3917a);
                    JSONObject jSONObject2 = new JSONObject();
                    jSONObject2.put("result", i);
                    jSONObject2.put("error", "");
                    jSONObject.put("data", jSONObject2);
                    com.mbridge.msdk.mbjscommon.windvane.h.a().a((WebView) this.c, "onSubPlayTemplateViewLoad", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                } catch (Exception e) {
                    if (MBridgeConstans.DEBUG) {
                        z.d("WindVaneWebView", e.getLocalizedMessage());
                    }
                }
            }
            String str = this.e + "_" + this.g.getId() + "_" + this.g.getRequestId() + "_" + this.d;
            if (i == 1) {
                ResDownloadCheckManager.getInstance().setTemplatePreLoadDone(this.e + "_" + this.i + "_" + this.d, true);
                a.C0309a c0309a = this.f;
                if (c0309a != null) {
                    c0309a.a(true);
                }
                if (this.b) {
                    if (this.g.isBidCampaign()) {
                        z.a("WindVaneWebView", "Tempalte put templeteCache in bidIVCache ");
                        com.mbridge.msdk.videocommon.a.a(str, this.f, false, this.h);
                    } else {
                        z.a("WindVaneWebView", "Tempalte put templeteCache in iVCache ");
                        com.mbridge.msdk.videocommon.a.a(str, this.f, false, this.h);
                    }
                } else if (this.g.isBidCampaign()) {
                    z.a("WindVaneWebView", "Tempalte put templeteCache in bidRVCache ");
                    com.mbridge.msdk.videocommon.a.a(str, this.f, false, this.h);
                } else {
                    z.a("WindVaneWebView", "Tempalte put templeteCache in rVCache ");
                    com.mbridge.msdk.videocommon.a.a(str, this.f, false, this.h);
                }
            } else {
                ResDownloadCheckManager.getInstance().setTemplatePreLoadDone(this.e + "_" + this.i + "_" + this.d, false);
                a.C0309a c0309a2 = this.f;
                if (c0309a2 != null) {
                    c0309a2.a(false);
                }
            }
            this.k = true;
        }

        @Override // com.mbridge.msdk.mbjscommon.c.b, com.mbridge.msdk.mbjscommon.windvane.d
        public final void a(WebView webView, int i, String str, String str2) {
            z.a("WindVaneWebView", "TempalteWindVaneWebviewClientForTPL preLoadTemplate onReceivedError: " + str);
            ResDownloadCheckManager.getInstance().setTemplatePreLoadDone(this.e + "_" + this.i + "_" + this.d, false);
            a.C0309a c0309a = this.f;
            if (c0309a != null) {
                c0309a.a(false);
            }
            if (this.c != null) {
                JSONObject jSONObject = new JSONObject();
                try {
                    jSONObject.put("id", this.f3917a);
                    JSONObject jSONObject2 = new JSONObject();
                    jSONObject2.put("result", 2);
                    jSONObject2.put("error", str);
                    jSONObject.put("data", jSONObject2);
                    com.mbridge.msdk.mbjscommon.windvane.h.a().a((WebView) this.c, "onSubPlayTemplateViewLoad", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                } catch (Exception e) {
                    if (MBridgeConstans.DEBUG) {
                        z.d("WindVaneWebView", e.getLocalizedMessage());
                    }
                }
            }
        }

        @Override // com.mbridge.msdk.mbjscommon.c.b, com.mbridge.msdk.mbjscommon.windvane.d
        public final void a(WebView webView, String str) {
            z.a("WindVaneWebView", "TempalteWindVaneWebviewClientForTPL preLoadTemplate onPageFinished: ");
            if (this.j) {
                return;
            }
            if (!str.contains("wfr=1")) {
                if (this.c != null) {
                    JSONObject jSONObject = new JSONObject();
                    try {
                        jSONObject.put("id", this.f3917a);
                        JSONObject jSONObject2 = new JSONObject();
                        jSONObject2.put("result", 1);
                        jSONObject2.put("error", "");
                        jSONObject.put("data", jSONObject2);
                        com.mbridge.msdk.mbjscommon.windvane.h.a().a((WebView) this.c, "componentReact", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                    } catch (Exception e) {
                        if (MBridgeConstans.DEBUG) {
                            z.d("WindVaneWebView", e.getLocalizedMessage());
                        }
                    }
                }
                ResDownloadCheckManager.getInstance().setTemplatePreLoadDone(this.e + "_" + this.i + "_" + this.d, true);
                a.C0309a c0309a = this.f;
                if (c0309a != null) {
                    c0309a.a(true);
                }
                String str2 = this.e + "_" + this.g.getId() + "_" + this.g.getRequestId() + "_" + this.d;
                if (this.b) {
                    if (this.g.isBidCampaign()) {
                        z.a("WindVaneWebView", "Tempalte put templeteCache in bidIVCache ");
                        com.mbridge.msdk.videocommon.a.a(com.tkay.expressad.foundation.g.a.aU, this.g.getRequestIdNotice(), this.f);
                    } else {
                        z.a("WindVaneWebView", "Tempalte put templeteCache in iVCache ");
                        com.mbridge.msdk.videocommon.a.a(str2, this.f, false, this.h);
                    }
                } else if (this.g.isBidCampaign()) {
                    z.a("WindVaneWebView", "Tempalte put templeteCache in bidRVCache ");
                    com.mbridge.msdk.videocommon.a.a(94, this.g.getRequestIdNotice(), this.f);
                } else {
                    z.a("WindVaneWebView", "Tempalte put templeteCache in rVCache ");
                    com.mbridge.msdk.videocommon.a.a(str2, this.f, false, this.h);
                }
            }
            com.mbridge.msdk.mbjscommon.windvane.h.a().a(webView);
            this.j = true;
        }
    }

    /* JADX INFO: compiled from: RewardCampaignsResourceManager.java */
    private static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        boolean f3906a;
        boolean b;
        int c;
        int d;
        String e;
        String f;
        int g;
        CopyOnWriteArrayList<CampaignEx> h;
        CopyOnWriteArrayList<CampaignEx> i;

        public a(boolean z, boolean z2, int i, int i2, String str, String str2, int i3, CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList) {
            this.f3906a = z;
            this.b = z2;
            this.c = i;
            this.d = i2;
            this.e = str;
            this.f = str2;
            this.g = i3;
            this.h = copyOnWriteArrayList;
            this.i = new CopyOnWriteArrayList<>(copyOnWriteArrayList);
        }
    }

    public final synchronized void b() {
    }

    static /* synthetic */ void a(c cVar, Context context, String str, String str2, String str3, CampaignEx campaignEx, String str4, i iVar, CopyOnWriteArrayList copyOnWriteArrayList) {
        if (TextUtils.isEmpty(str4) || campaignEx.isMraid()) {
            return;
        }
        if (str4.contains(".zip") && str4.contains("md5filename")) {
            boolean zIsEmpty = TextUtils.isEmpty(H5DownLoadManager.getInstance().getH5ResAddress(str4));
            try {
                g gVar = new g(context, str, str2, str3, campaignEx, 497, cVar.f3901a, iVar, copyOnWriteArrayList);
                gVar.a(zIsEmpty);
                H5DownLoadManager.getInstance().downloadH5Res(str4, gVar);
                return;
            } catch (Exception e2) {
                if (MBridgeConstans.DEBUG) {
                    z.d("RewardCampaignsResourceManager", e2.getLocalizedMessage());
                    return;
                }
                return;
            }
        }
        boolean zIsEmpty2 = TextUtils.isEmpty(HTMLResourceManager.getInstance().getHtmlContentFromUrl(str4));
        try {
            d dVar = new d(497, str, str2, str3, campaignEx, iVar, cVar.f3901a, copyOnWriteArrayList);
            dVar.a(zIsEmpty2);
            H5DownLoadManager.getInstance().downloadH5Res(str4, dVar);
        } catch (Exception e3) {
            if (MBridgeConstans.DEBUG) {
                z.d("RewardCampaignsResourceManager", e3.getLocalizedMessage());
            }
        }
    }
}
