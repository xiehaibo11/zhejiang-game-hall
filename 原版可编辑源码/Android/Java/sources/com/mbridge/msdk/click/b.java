package com.mbridge.msdk.click;

import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.os.Process;
import android.text.TextUtils;
import android.widget.Toast;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.click.CommonJumpLoader;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.SameMD5;
import com.mbridge.msdk.foundation.tools.ad;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.ag;
import com.mbridge.msdk.foundation.tools.ai;
import com.mbridge.msdk.foundation.tools.aj;
import com.mbridge.msdk.foundation.tools.o;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.x;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.out.BaseTrackingListener;
import com.mbridge.msdk.out.Campaign;
import com.mbridge.msdk.out.Frame;
import com.mbridge.msdk.out.LoadingActivity;
import com.mbridge.msdk.out.NativeListener;
import com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode;
import com.mbridge.msdk.scheme.applet.AppletModelManager;
import com.mbridge.msdk.scheme.applet.AppletSchemeCallBack;
import com.mbridge.msdk.scheme.applet.AppletsModel;
import com.qihoo360.i.IPluginManager;
import com.ss.android.download.api.constant.BaseConstants;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import java.io.File;
import java.net.URLEncoder;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Locale;
import java.util.Map;
import java.util.Set;

public final class b {
    public static boolean a;
    public static Set<String> b = new HashSet();
    public static Set<String> c = new HashSet();
    public static Map<String, Long> d = new HashMap();
    public static Map<String, Long> e = new HashMap();
    static Handler f = new Handler(Looper.getMainLooper()) {
        @Override
        public final void handleMessage(Message message) {
            super.handleMessage(message);
            int i = message.what;
            if (i != 0) {
                if (i != 1) {
                    return;
                }
                b.d();
            } else {
                Object obj = message.obj;
                if (obj == null || !(obj instanceof Context)) {
                    return;
                }
                b.a((Context) obj);
            }
        }
    };
    private String g;
    private long h;
    private long i;
    private boolean j;
    private boolean k;
    private boolean l;
    private com.mbridge.msdk.c.a o;
    private com.mbridge.msdk.foundation.db.i p;
    private Context q;
    private CommonJumpLoader r;
    private HashMap<String, CommonJumpLoader> s;
    private com.mbridge.msdk.foundation.same.report.d u;
    private h v;
    private boolean m = false;
    private boolean n = true;
    private NativeListener.NativeTrackingListener t = null;
    private Handler w = new Handler() {
        @Override
        public final void handleMessage(Message message) {
            super.handleMessage(message);
            int i = message.what;
            if (i == 0) {
                if (b.this.t != null) {
                    b.this.t.onDownloadStart(null);
                }
            } else {
                if (i != 1) {
                    if (i == 2 && b.this.t != null) {
                        b.this.t.onDownloadFinish((Campaign) message.obj);
                        return;
                    }
                    return;
                }
                if (b.this.t != null) {
                    b.this.t.onDownloadProgress(message.arg1);
                }
            }
        }
    };

    public b(Context context, String str) {
        this.p = null;
        this.q = null;
        com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(str);
        this.o = aVarB;
        if (aVarB == null) {
            this.o = com.mbridge.msdk.c.b.a().b();
        }
        this.k = this.o.ad();
        Context applicationContext = context.getApplicationContext();
        this.q = applicationContext;
        this.g = str;
        if (this.p == null) {
            this.p = com.mbridge.msdk.foundation.db.i.a(applicationContext);
        }
        this.u = new com.mbridge.msdk.foundation.same.report.d(this.q);
        this.s = new HashMap<>();
    }

    public final void a(String str) {
        this.g = str;
    }

    public final void a(NativeListener.NativeTrackingListener nativeTrackingListener) {
        this.t = nativeTrackingListener;
    }

    public final void a(h hVar) {
        this.v = hVar;
    }

    public final void a(boolean z) {
        this.n = z;
    }

    public final void a() {
        Set<Map.Entry<String, CommonJumpLoader>> setEntrySet;
        CommonJumpLoader value;
        try {
            if (this.s != null && (setEntrySet = this.s.entrySet()) != null && setEntrySet.size() > 0) {
                for (Map.Entry<String, CommonJumpLoader> entry : setEntrySet) {
                    if (entry != null && (value = entry.getValue()) != null) {
                        value.a();
                    }
                }
            }
            this.t = null;
        } catch (Exception unused) {
        }
    }

    public final void a(CampaignEx campaignEx, NativeListener.NativeAdListener nativeAdListener) {
        if (nativeAdListener != null && campaignEx != null) {
            nativeAdListener.onAdClick(campaignEx);
        }
        z.b("MBridge SDK M", "clickStart");
        c(campaignEx);
    }

    /* JADX WARN: Removed duplicated region for block: B:6:0x0009 A[Catch: Exception -> 0x007b, TryCatch #0 {Exception -> 0x007b, blocks: (B:4:0x0003, B:8:0x0010, B:10:0x0018, B:13:0x0022, B:15:0x002c, B:17:0x0038, B:19:0x0044, B:21:0x0062, B:6:0x0009), top: B:29:0x0003 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private boolean d(CampaignEx campaignEx) {
        Long l;
        if (campaignEx != null) {
            try {
                if (2 != campaignEx.getLinkType()) {
                    if (3 != campaignEx.getLinkType()) {
                        return true;
                    }
                }
            } catch (Exception e2) {
                if (!MBridgeConstans.DEBUG) {
                    return true;
                }
                e2.printStackTrace();
                return true;
            }
        }
        String id = campaignEx.getId();
        if (d == null) {
            return true;
        }
        if (d.containsKey(id) && (l = d.get(id)) != null) {
            long jCurrentTimeMillis = System.currentTimeMillis();
            if (l.longValue() > jCurrentTimeMillis || b.contains(campaignEx.getId())) {
                z.b("MBridge SDK M", "点击时间未超过coit " + jCurrentTimeMillis + "|" + l);
                return false;
            }
        }
        z.b("MBridge SDK M", "未发现有点击或点击超时保存点击时间 interval = " + campaignEx.getClickTimeOutInterval());
        return true;
    }

    /* JADX WARN: Removed duplicated region for block: B:6:0x0009 A[Catch: Exception -> 0x0094, TryCatch #0 {Exception -> 0x0094, blocks: (B:4:0x0003, B:8:0x0010, B:10:0x0018, B:13:0x0022, B:15:0x002c, B:17:0x0038, B:19:0x0044, B:21:0x0062, B:6:0x0009), top: B:29:0x0003 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private boolean e(CampaignEx campaignEx) {
        Long l;
        if (campaignEx != null) {
            try {
                if (2 != campaignEx.getLinkType()) {
                    if (3 != campaignEx.getLinkType()) {
                        return true;
                    }
                }
            } catch (Exception e2) {
                if (!MBridgeConstans.DEBUG) {
                    return true;
                }
                e2.printStackTrace();
                return true;
            }
        }
        String id = campaignEx.getId();
        if (d == null) {
            return true;
        }
        if (d.containsKey(id) && (l = d.get(id)) != null) {
            long jCurrentTimeMillis = System.currentTimeMillis();
            if (l.longValue() > jCurrentTimeMillis || b.contains(campaignEx.getId())) {
                z.b("MBridge SDK M", "点击时间未超过coit " + jCurrentTimeMillis + "|" + l);
                return false;
            }
        }
        z.b("MBridge SDK M", "未发现有点击或点击超时保存点击时间 interval = " + campaignEx.getClickTimeOutInterval());
        d.put(campaignEx.getId(), Long.valueOf(System.currentTimeMillis() + ((long) (campaignEx.getClickTimeOutInterval() * 1000))));
        return true;
    }

    public final void a(CampaignEx campaignEx) {
        try {
            if (e(campaignEx)) {
                com.mbridge.msdk.foundation.db.c cVarA = com.mbridge.msdk.foundation.db.c.a(this.p);
                cVarA.a();
                CommonJumpLoader.JumpLoaderResult jumpLoaderResultB = cVarA.b(campaignEx.getId(), this.g);
                if (jumpLoaderResultB != null) {
                    if (jumpLoaderResultB.getNoticeurl() != null) {
                        jumpLoaderResultB.setNoticeurl(null);
                    }
                    campaignEx.setJumpResult(jumpLoaderResultB);
                    cVarA.a(campaignEx, this.g, false, -1, campaignEx.getTtc_type());
                }
                if (c.d(this.q, campaignEx.getPackageName())) {
                    z.a("MBridge SDK M", campaignEx.getPackageName() + " is intalled.");
                    return;
                }
                a(campaignEx, false, false, false, campaignEx.getTtc_type(), false, (Boolean) false);
            }
        } catch (Throwable th) {
            z.c("MBridge SDK M", th.getMessage(), th);
        }
    }

    private void a(CampaignEx campaignEx, String str, int i) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        if (i != -1) {
            str = str + "&apk_ptype=" + i;
        }
        if (!str.contains("opdptype")) {
            str = str + "&opdptype=0";
        }
        a(this.q, campaignEx, this.g, str, true, false, com.mbridge.msdk.click.a.a.i);
    }

    /* JADX WARN: Removed duplicated region for block: B:13:0x002e A[Catch: Exception -> 0x0053, TryCatch #1 {Exception -> 0x0053, blocks: (B:11:0x0028, B:15:0x0035, B:17:0x003d, B:13:0x002e), top: B:35:0x0028 }] */
    /* JADX WARN: Removed duplicated region for block: B:15:0x0035 A[Catch: Exception -> 0x0053, TryCatch #1 {Exception -> 0x0053, blocks: (B:11:0x0028, B:15:0x0035, B:17:0x003d, B:13:0x002e), top: B:35:0x0028 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean b(CampaignEx campaignEx) {
        if (!d(campaignEx)) {
            return true;
        }
        if (!ae.a(campaignEx)) {
            return false;
        }
        String noticeUrl = campaignEx.getNoticeUrl();
        o.a().a(campaignEx);
        if (c.e(this.q, campaignEx.getDeepLinkURL())) {
            if (campaignEx != null) {
                try {
                    if (2 != campaignEx.getLinkType()) {
                        if (3 == campaignEx.getLinkType()) {
                            String id = campaignEx.getId();
                            if (d != null) {
                                d.put(id, Long.valueOf(System.currentTimeMillis() + ((long) (campaignEx.getClickTimeOutInterval() * 1000))));
                            }
                        }
                    }
                } catch (Exception e2) {
                    if (MBridgeConstans.DEBUG) {
                        e2.printStackTrace();
                    }
                }
            }
            if (this.q != null) {
                Intent intent = new Intent();
                intent.setAction("mb_dp_close_broadcast_receiver");
                try {
                    this.q.sendBroadcast(intent);
                } catch (Exception unused) {
                }
            }
            a(campaignEx, noticeUrl + "&opdptype=1", -1);
            c.b(campaignEx);
            return true;
        }
        o.a().b(campaignEx);
        return false;
    }

    public final void c(CampaignEx campaignEx) {
        boolean z;
        try {
            this.j = false;
            if (e(campaignEx)) {
                String noticeUrl = campaignEx.getNoticeUrl();
                com.mbridge.msdk.foundation.db.c cVarA = com.mbridge.msdk.foundation.db.c.a(this.p);
                cVarA.a();
                CommonJumpLoader.JumpLoaderResult jumpLoaderResultB = cVarA.b(campaignEx.getId(), this.g);
                if (jumpLoaderResultB != null) {
                    if (jumpLoaderResultB.getNoticeurl() != null) {
                        jumpLoaderResultB.setNoticeurl(null);
                    }
                    campaignEx.setJumpResult(jumpLoaderResultB);
                    cVarA.a(campaignEx, this.g, false, -1, campaignEx.getTtc_type());
                }
                if (ae.a(campaignEx)) {
                    o.a().a(campaignEx);
                    if (c.e(this.q, campaignEx.getDeepLinkURL())) {
                        if (this.t != null) {
                            this.t.onStartRedirection(campaignEx, campaignEx.getClickURL());
                        }
                        if (this.q != null) {
                            Intent intent = new Intent();
                            intent.setAction("mb_dp_close_broadcast_receiver");
                            try {
                                this.q.sendBroadcast(intent);
                            } catch (Exception unused) {
                            }
                        }
                        a(campaignEx, noticeUrl + "&opdptype=1", -1);
                        c.b(campaignEx);
                        if (this.t != null) {
                            this.t.onFinishRedirection(campaignEx, campaignEx.getClickURL());
                            return;
                        }
                        return;
                    }
                    noticeUrl = noticeUrl + "&opdptype=0";
                    o.a().b(campaignEx);
                }
                if (campaignEx.getLinkType() == 12) {
                    if (this.t != null) {
                        this.t.onStartRedirection(campaignEx, campaignEx.getClickURL());
                    }
                    a(campaignEx, noticeUrl, -1);
                    a(this.q, campaignEx);
                    if (this.t != null) {
                        this.t.onFinishRedirection(campaignEx, campaignEx.getClickURL());
                        return;
                    }
                    return;
                }
                AppletsModel appletsModel = AppletModelManager.getInstance().get(campaignEx);
                if (appletsModel != null && appletsModel.isSupportWxScheme()) {
                    if (appletsModel.isRequestSuccess()) {
                        if (c.e(this.q, appletsModel.getDeepLink())) {
                            if (this.t != null) {
                                this.t.onStartRedirection(campaignEx, campaignEx.getClickURL());
                            }
                            if (this.q != null) {
                                Intent intent2 = new Intent();
                                intent2.setAction("mb_dp_close_broadcast_receiver");
                                try {
                                    this.q.sendBroadcast(intent2);
                                } catch (Exception unused2) {
                                }
                            }
                            a(campaignEx, noticeUrl + "&opdptype=1", -1);
                            c.b(campaignEx);
                            if (this.t != null) {
                                this.t.onFinishRedirection(campaignEx, campaignEx.getClickURL());
                                return;
                            }
                            return;
                        }
                        noticeUrl = noticeUrl + "&opdptype=0";
                    } else if (appletsModel.isRequesting()) {
                        if (this.t != null) {
                            this.t.onStartRedirection(campaignEx, campaignEx.getClickURL());
                        }
                        appletsModel.setAppletSchemeCallBack(a(this.t, campaignEx, appletsModel, this));
                        return;
                    } else if (appletsModel.can(1)) {
                        if (appletsModel.isRequestTimesMaxPerDay()) {
                            if (campaignEx != null && appletsModel != null && !TextUtils.isEmpty(appletsModel.getReBuildClickUrl())) {
                                campaignEx.setClickURL(appletsModel.getReBuildClickUrl());
                            }
                        } else {
                            if (this.t != null) {
                                this.t.onStartRedirection(campaignEx, campaignEx.getClickURL());
                            }
                            appletsModel.requestWxAppletsScheme(1, a(this.t, campaignEx, appletsModel, this));
                            return;
                        }
                    }
                }
                if (!campaignEx.getUserActivation() && c.d(this.q, campaignEx.getPackageName())) {
                    c.f(this.q, campaignEx.getPackageName());
                    z.a("MBridge SDK M", campaignEx.getPackageName() + " is intalled.");
                    a(campaignEx, noticeUrl, com.mbridge.msdk.foundation.same.a.K);
                    if (this.t != null) {
                        this.t.onStartRedirection(campaignEx, campaignEx.getClickURL());
                    }
                    a(campaignEx, false, false, false, campaignEx.getTtc_type(), true, (Boolean) true);
                    if (this.t != null) {
                        this.t.onFinishRedirection(campaignEx, campaignEx.getClickURL());
                        ad.a(this.t);
                        return;
                    }
                    return;
                }
                int linkType = campaignEx.getLinkType();
                int iC = c();
                if (linkType != 3) {
                    a(campaignEx, noticeUrl, -1);
                }
                z.b("MBridge SDK M", "======302跳转前linkType:" + linkType + " openType:" + iC + "======landingType：" + campaignEx.getLandingType());
                boolean z2 = linkType == 8 || linkType == 9 || linkType == 4;
                if (campaignEx.getClickURL().startsWith("market://") || campaignEx.getClickURL().startsWith("https://play.google.com/")) {
                    if (this.t != null) {
                        this.t.onStartRedirection(campaignEx, campaignEx.getClickURL());
                        z = true;
                    } else {
                        z = false;
                    }
                    if (ad.a.a(this.q, campaignEx.getClickURL(), this.t)) {
                        a(jumpLoaderResultB, campaignEx, false, false);
                        z.b("MBridge SDK M", "不用做302跳转 最终地址已经是gp了：" + campaignEx.getClickURL());
                        if (this.t != null) {
                            this.t.onFinishRedirection(campaignEx, campaignEx.getClickURL());
                            return;
                        }
                        return;
                    }
                    if (!z2) {
                        a(iC, campaignEx.getClickURL(), campaignEx, this.t);
                        a(jumpLoaderResultB, campaignEx, false, false);
                        z.b("MBridge SDK M", "最终地址是gp, 但是打开失败了：" + campaignEx.getClickURL());
                        if (this.t != null) {
                            this.t.onFinishRedirection(campaignEx, campaignEx.getClickURL());
                            return;
                        }
                        return;
                    }
                } else {
                    z = false;
                }
                if (!z2) {
                    if (linkType == 2) {
                        z.b("MBridge SDK M", "linktype为2 开始做302跳转" + campaignEx.getClickURL());
                        a(campaignEx, false, true, false, campaignEx.getTtc_type(), false, (Boolean) true);
                        return;
                    }
                    if (linkType == 3) {
                        z.b("MBridge SDK M", "linktype为3 开始做302跳转" + campaignEx.getClickURL());
                        a(campaignEx, false, true, false, campaignEx.getTtc_type(), false, (Boolean) true);
                        return;
                    }
                    String clickURL = campaignEx.getClickURL();
                    if (this.t != null) {
                        this.t.onStartRedirection(campaignEx, clickURL);
                    }
                    if (TextUtils.isEmpty(clickURL)) {
                        z.b("MBridge SDK M", "linketype=" + linkType + " clickurl 为空");
                        if (this.t != null) {
                            this.t.onRedirectionFailed(campaignEx, clickURL);
                        }
                        a(jumpLoaderResultB, campaignEx, true, false);
                        return;
                    }
                    if (this.t != null) {
                        this.t.onFinishRedirection(campaignEx, clickURL);
                    }
                    z.b("MBridge SDK M", "linketyp不是23489的值 用浏览器 打开");
                    ad.a(this.q, clickURL, (BaseTrackingListener) this.t);
                    a(jumpLoaderResultB, campaignEx, false, false);
                    return;
                }
                String clickURL2 = campaignEx.getClickURL();
                if (this.t != null && !z) {
                    this.t.onStartRedirection(campaignEx, clickURL2);
                }
                if (TextUtils.isEmpty(clickURL2)) {
                    z.b("MBridge SDK M", "linketype=" + linkType + " clickurl 为空");
                    if (this.t != null) {
                        this.t.onRedirectionFailed(campaignEx, clickURL2);
                    }
                    a(jumpLoaderResultB, campaignEx, true, false);
                    return;
                }
                if (linkType == 8) {
                    z.b("MBridge SDK M", "linketype=8 用webview 打开");
                    if (campaignEx.getAabEntity() != null && campaignEx.getAabEntity().getHlp() == 1) {
                        BaseTrackingListener baseTrackingListener = this.t;
                        if (baseTrackingListener == null) {
                            baseTrackingListener = this.v;
                            if (this.v != null) {
                                this.v.onStartRedirection(campaignEx, clickURL2);
                            }
                        }
                        ad.a(this.q, clickURL2, campaignEx, this, baseTrackingListener);
                    } else {
                        ad.a(this.q, clickURL2, campaignEx, this.t);
                        if (this.t != null) {
                            this.t.onFinishRedirection(campaignEx, clickURL2);
                        }
                    }
                    a(jumpLoaderResultB, campaignEx, false, false);
                    return;
                }
                if (linkType == 9) {
                    z.b("MBridge SDK M", "linketype=9 用浏览器 打开");
                    ad.a(this.q, clickURL2, (BaseTrackingListener) this.t);
                    a(jumpLoaderResultB, campaignEx, false, false);
                    if (this.t != null) {
                        this.t.onFinishRedirection(campaignEx, clickURL2);
                        return;
                    }
                    return;
                }
                if (linkType == 4) {
                    if (iC == 2) {
                        z.b("MBridge SDK M", "linketype=4 opent=2 用webview 打开");
                        ad.a(this.q, clickURL2, campaignEx, this.t);
                    } else {
                        z.b("MBridge SDK M", "linketype=4 opent=不为2 用Browser 打开");
                        ad.a(this.q, clickURL2, (BaseTrackingListener) this.t);
                    }
                }
                if (this.t != null) {
                    this.t.onFinishRedirection(campaignEx, clickURL2);
                }
                a(jumpLoaderResultB, campaignEx, false, false);
            }
        } catch (Throwable th) {
            z.c("MBridge SDK M", th.getMessage(), th);
        }
    }

    private AppletSchemeCallBack a(NativeListener.NativeTrackingListener nativeTrackingListener, CampaignEx campaignEx, AppletsModel appletsModel, b bVar) {
        return new f(nativeTrackingListener, campaignEx, appletsModel, bVar);
    }

    private void a(Context context, CampaignEx campaignEx) {
        if (context == null) {
            com.mbridge.msdk.foundation.same.report.e.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx, 2, com.tkay.expressad.foundation.g.b.b.a, this.g);
            return;
        }
        boolean z = v.v() == 1;
        boolean z2 = v.r(context) == 1;
        if (!z || !z2) {
            com.mbridge.msdk.foundation.same.report.e.a(context, campaignEx, 2, "integrated:" + z + "-hasWx:" + z2, this.g);
            f(campaignEx);
            return;
        }
        String ghId = campaignEx.getGhId();
        String ghPath = campaignEx.getGhPath();
        String bindId = campaignEx.getBindId();
        String strM = com.mbridge.msdk.foundation.controller.a.f().m();
        if (!TextUtils.isEmpty(ghId)) {
            try {
                if (!TextUtils.isEmpty(strM)) {
                    bindId = strM;
                }
                Object objF = v.f(bindId);
                Class<?> cls = Class.forName("com.tencent.mm.opensdk.modelbiz.WXLaunchMiniProgram$Req");
                Object objNewInstance = cls.newInstance();
                cls.getField("userName").set(objNewInstance, ghId);
                cls.getField("path").set(objNewInstance, ghPath);
                cls.getField("miniprogramType").set(objNewInstance, cls.getField("MINIPTOGRAM_TYPE_RELEASE").get(null));
                Class.forName("com.tencent.mm.opensdk.openapi.IWXAPI").getMethod("sendReq", Class.forName("com.tencent.mm.opensdk.modelbase.BaseReq")).invoke(objF, objNewInstance);
                com.mbridge.msdk.foundation.same.report.e.a(context, campaignEx, 1, "", this.g);
                return;
            } catch (Throwable th) {
                com.mbridge.msdk.foundation.same.report.e.a(context, campaignEx, 2, th.getMessage(), this.g);
                f(campaignEx);
                return;
            }
        }
        f(campaignEx);
        com.mbridge.msdk.foundation.same.report.e.a(context, campaignEx, 2, "ghid is empty", this.g);
    }

    private void f(CampaignEx campaignEx) {
        if (c() == 2) {
            ad.a(this.q, campaignEx.getClickURL(), campaignEx, this.t);
        } else {
            ad.a(this.q, campaignEx.getClickURL(), (BaseTrackingListener) this.t);
        }
    }

    public static void a(Context context, CampaignEx campaignEx, String str, String str2, boolean z, boolean z2) {
        if (context == null) {
            return;
        }
        new CommonJumpLoader(context.getApplicationContext(), true).a("2", str, campaignEx, null, str2, z, z2, com.mbridge.msdk.click.a.a.f);
    }

    public static void a(Context context, CampaignEx campaignEx, String str, String str2, boolean z, boolean z2, int i) {
        if (context == null) {
            return;
        }
        new CommonJumpLoader(context.getApplicationContext(), true).a("2", str, campaignEx, null, str2, z, z2, i);
    }

    public static void a(Context context, CampaignEx campaignEx, String str, String[] strArr, boolean z, boolean z2) {
        if (context == null || campaignEx == null || TextUtils.isEmpty(str) || strArr == null) {
            return;
        }
        CommonJumpLoader commonJumpLoader = new CommonJumpLoader(context.getApplicationContext(), true);
        for (String str2 : strArr) {
            commonJumpLoader.a("2", str, campaignEx, null, str2, z, z2, com.mbridge.msdk.click.a.a.f);
        }
    }

    private void a(final CampaignEx campaignEx, final boolean z, boolean z2, boolean z3, final int i, final boolean z4, final Boolean bool) {
        final boolean z5;
        try {
            this.h = System.currentTimeMillis();
            if (z) {
                z.b("MBridge SDK M", "Start 302 Redirection... ");
                if (z3 || !this.s.containsKey(campaignEx.getClickURL()) || z2) {
                    CommonJumpLoader commonJumpLoader = new CommonJumpLoader(this.q, z2 ? false : true);
                    this.s.put(campaignEx.getClickURL(), commonJumpLoader);
                    commonJumpLoader.a("2", this.g, campaignEx, new e() {
                        @Override
                        public final void a(Object obj) {
                            try {
                                com.mbridge.msdk.foundation.db.c.a(b.this.p).a(campaignEx, b.this.g, z, 0, i);
                                if (b.c != null) {
                                    b.c.add(campaignEx.getId());
                                }
                            } catch (Exception e2) {
                                e2.printStackTrace();
                            }
                        }

                        @Override
                        public final void b(Object obj) {
                            if (obj != null) {
                                try {
                                    if (obj instanceof CommonJumpLoader.JumpLoaderResult) {
                                        CommonJumpLoader.JumpLoaderResult jumpLoaderResult = (CommonJumpLoader.JumpLoaderResult) obj;
                                        z.b("MBridge SDK M", "Redirection done...  code: " + jumpLoaderResult.getCode());
                                        if (campaignEx != null && jumpLoaderResult != null) {
                                            campaignEx.setJumpResult(jumpLoaderResult);
                                            b.a(b.this, campaignEx, z, jumpLoaderResult, i, true);
                                        }
                                    }
                                } catch (Exception e2) {
                                    e2.printStackTrace();
                                    return;
                                }
                            }
                            if (campaignEx != null) {
                                b.this.s.remove(campaignEx.getClickURL());
                            }
                            if (b.c == null || campaignEx == null) {
                                return;
                            }
                            b.c.remove(campaignEx.getId());
                        }

                        @Override
                        public final void a(Object obj, String str) {
                            try {
                                if (z) {
                                    com.mbridge.msdk.foundation.db.c.a(b.this.p).a(campaignEx, b.this.g, z, 0, i);
                                }
                                if (obj != null && (obj instanceof CommonJumpLoader.JumpLoaderResult)) {
                                    b.this.a((CommonJumpLoader.JumpLoaderResult) obj, campaignEx, true, true);
                                }
                                b.this.s.remove(campaignEx.getClickURL());
                                if (b.c != null) {
                                    b.c.remove(campaignEx.getId());
                                }
                            } catch (Exception e2) {
                                e2.printStackTrace();
                            }
                        }
                    });
                    return;
                }
                return;
            }
            if (this.t == null || z4) {
                z5 = true;
            } else {
                this.t.onStartRedirection(campaignEx, campaignEx.getClickURL());
                z5 = !this.t.onInterceptDefaultLoadingDialog();
            }
            if (this.s.containsKey(campaignEx.getClickURL())) {
                this.s.get(campaignEx.getClickURL()).a();
                this.s.remove(campaignEx.getClickURL());
            }
            final boolean z6 = true;
            this.l = false;
            if (campaignEx.getJumpResult() != null) {
                if (!z4) {
                    a(campaignEx, campaignEx.getJumpResult(), true, this.m, false, bool);
                }
                this.l = true;
                this.m = false;
                z6 = false;
            }
            if (!com.mbridge.msdk.foundation.db.c.a(this.p).a(campaignEx.getId(), this.g) || campaignEx.getJumpResult() == null) {
                com.mbridge.msdk.foundation.db.c cVarA = com.mbridge.msdk.foundation.db.c.a(this.p);
                cVarA.a();
                CommonJumpLoader.JumpLoaderResult jumpLoaderResultB = cVarA.b(campaignEx.getId(), this.g);
                if (jumpLoaderResultB != null && !z4) {
                    campaignEx.setJumpResult(jumpLoaderResultB);
                    if (z6) {
                        if (!z4) {
                            a(campaignEx, jumpLoaderResultB, z6, this.m, false, bool);
                        }
                        this.l = true;
                        this.m = false;
                        z6 = false;
                    }
                } else {
                    if (campaignEx.getClick_mode().equals("6") && !campaignEx.getPackageName().isEmpty() && campaignEx.getLinkType() == 2 && !z4) {
                        ad.a.a(this.q, BaseConstants.MARKET_PREFIX + campaignEx.getPackageName(), this.t);
                        if (this.t != null && z6) {
                            this.t.onDismissLoading(campaignEx);
                            this.t.onFinishRedirection(campaignEx, null);
                        }
                        this.l = true;
                        z6 = false;
                    }
                    if (z4) {
                        this.l = true;
                        this.m = false;
                        z6 = false;
                    }
                }
                z.b("MBridge SDK M", "Start 302 Redirection... ");
                new Handler(Looper.getMainLooper()).post(new Runnable() {
                    @Override
                    public final void run() {
                        if (z5 && !b.a && !b.this.l && MBridgeConstans.NATIVE_SHOW_LOADINGPAGER && !z4) {
                            b.a(b.this, campaignEx);
                        }
                        if (z5 || b.this.t == null || b.a || b.this.l || !MBridgeConstans.NATIVE_SHOW_LOADINGPAGER) {
                            return;
                        }
                        b.this.t.onShowLoading(campaignEx);
                    }
                });
                if (this.r != null) {
                    this.r.a();
                }
                if (b != null && b.contains(campaignEx.getId())) {
                    if (this.t != null) {
                        this.t.onDismissLoading(campaignEx);
                        this.t.onFinishRedirection(campaignEx, campaignEx.getClickURL());
                    }
                    z.b("MBridge SDK M", "点击正在tracking");
                    return;
                }
                b.add(campaignEx.getId());
                CommonJumpLoader commonJumpLoader2 = new CommonJumpLoader(this.q, false);
                this.r = commonJumpLoader2;
                final boolean z7 = z5;
                commonJumpLoader2.a("1", this.g, campaignEx, new e() {
                    @Override
                    public final void a(Object obj) {
                    }

                    @Override
                    public final void b(Object obj) {
                        if (b.b != null) {
                            b.b.remove(campaignEx.getId());
                        }
                        if (obj == null || !(obj instanceof CommonJumpLoader.JumpLoaderResult)) {
                            return;
                        }
                        CommonJumpLoader.JumpLoaderResult jumpLoaderResult = (CommonJumpLoader.JumpLoaderResult) obj;
                        z.b("MBridge SDK M", "Redirection done...   code: " + jumpLoaderResult.getCode());
                        b.this.j = true;
                        campaignEx.setJumpResult(jumpLoaderResult);
                        b bVar = b.this;
                        bVar.a(campaignEx, jumpLoaderResult, z6, bVar.m, false, bool);
                        if (jumpLoaderResult.isjumpDone()) {
                            com.mbridge.msdk.foundation.db.c.a(b.this.p).a(campaignEx, b.this.g, false, -1, i);
                        }
                        b.a(b.this, z7, campaignEx);
                    }

                    @Override
                    public final void a(Object obj, String str) {
                        if (b.b != null) {
                            b.b.remove(campaignEx.getId());
                        }
                        if (obj != null && (obj instanceof CommonJumpLoader.JumpLoaderResult)) {
                            b.this.j = true;
                            b.this.a((CommonJumpLoader.JumpLoaderResult) obj, campaignEx, true, false);
                        }
                        if (b.this.t != null) {
                            b.this.t.onRedirectionFailed(campaignEx, str);
                        }
                        b.a(b.this, z7, campaignEx);
                    }
                });
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }

    public final void a(CommonJumpLoader.JumpLoaderResult jumpLoaderResult, CampaignEx campaignEx, int i, boolean z) {
        if (campaignEx == null || jumpLoaderResult == null) {
            return;
        }
        try {
            this.i = System.currentTimeMillis() - this.h;
            com.mbridge.msdk.foundation.entity.e eVar = new com.mbridge.msdk.foundation.entity.e();
            int iD = v.D(this.q);
            eVar.a(iD);
            eVar.a(v.a(this.q, iD));
            eVar.j(campaignEx.getRequestId());
            eVar.k(campaignEx.getRequestIdNotice());
            eVar.d(i);
            eVar.i(this.i + "");
            eVar.h(campaignEx.getId());
            eVar.f(jumpLoaderResult.getType());
            if (!TextUtils.isEmpty(jumpLoaderResult.getUrl())) {
                eVar.g(URLEncoder.encode(jumpLoaderResult.getUrl(), "utf-8"));
            }
            eVar.c((this.h / 1000) + "");
            eVar.b(Integer.parseInt(campaignEx.getLandingType()));
            eVar.c(campaignEx.getLinkType());
            eVar.b(this.g);
            if (jumpLoaderResult != null) {
                eVar.f(jumpLoaderResult.getType());
                if (!TextUtils.isEmpty(jumpLoaderResult.getUrl())) {
                    eVar.g(URLEncoder.encode(jumpLoaderResult.getUrl(), "utf-8"));
                }
                if (this.k) {
                    eVar.e(jumpLoaderResult.getStatusCode());
                    if (!TextUtils.isEmpty(jumpLoaderResult.getHeader())) {
                        eVar.e(URLEncoder.encode(jumpLoaderResult.getHeader(), "utf-8"));
                    }
                    if (!TextUtils.isEmpty(jumpLoaderResult.getContent())) {
                        eVar.f(URLEncoder.encode(jumpLoaderResult.getContent(), "UTF-8"));
                    }
                    if (!TextUtils.isEmpty(jumpLoaderResult.getExceptionMsg())) {
                        eVar.d(URLEncoder.encode(jumpLoaderResult.getExceptionMsg(), "utf-8"));
                    }
                }
                if (z) {
                    this.u.a(com.tkay.expressad.foundation.g.a.aB, eVar, this.g);
                    return;
                }
                ArrayList arrayList = new ArrayList();
                arrayList.add(eVar);
                String strA = com.mbridge.msdk.foundation.entity.e.a(arrayList);
                if (ai.b(strA)) {
                    if (com.mbridge.msdk.foundation.same.report.b.a().c()) {
                        com.mbridge.msdk.foundation.same.report.b.a().a(strA);
                    } else {
                        new com.mbridge.msdk.foundation.same.report.d(this.q, 0).a(com.tkay.expressad.foundation.g.a.aC, strA, (String) null, (Frame) null);
                    }
                }
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public final void a(Campaign campaign, String str) {
        try {
            if (!TextUtils.isEmpty(str) && campaign != null) {
                CampaignEx campaignEx = null;
                if (campaign != null && (campaign instanceof CampaignEx)) {
                    campaignEx = (CampaignEx) campaign;
                }
                if (!str.startsWith("market://") && !str.startsWith("https://play.google.com/")) {
                    MBridgeConstans.ALLOW_APK_DOWNLOAD = com.mbridge.msdk.c.a.aq();
                    if (!str.toLowerCase().endsWith(com.tkay.china.common.a.a.g) || MBridgeConstans.ALLOW_APK_DOWNLOAD) {
                        return;
                    }
                    if (campaignEx != null && !TextUtils.isEmpty(campaignEx.getPackageName())) {
                        if (ad.a.a(this.q, BaseConstants.MARKET_PREFIX + campaignEx.getPackageName(), this.t)) {
                            if (MBridgeConstans.ALLOW_APK_DOWNLOAD) {
                                a(campaignEx, str, true);
                                return;
                            }
                            return;
                        } else {
                            try {
                                this.w.post(new Runnable() {
                                    @Override
                                    public final void run() {
                                        Toast.makeText(b.this.q, "Opps!Access Unavailable", 0).show();
                                    }
                                });
                                return;
                            } catch (Exception unused) {
                                z.d("MBridge SDK M", "Opps!Access Unavailable.");
                                return;
                            }
                        }
                    }
                    if (MBridgeConstans.ALLOW_APK_DOWNLOAD) {
                        a(campaignEx, str, true);
                        return;
                    }
                    return;
                }
                if (!ad.a.a(this.q, str, this.t) && campaignEx != null) {
                    if (!TextUtils.isEmpty(campaignEx.getPackageName())) {
                        ad.a.a(this.q, BaseConstants.MARKET_PREFIX + campaignEx.getPackageName(), this.t);
                    } else if (c() == 2) {
                        ad.a(this.q, campaignEx.getClickURL(), campaignEx, this.t);
                    } else {
                        ad.a(this.q, campaignEx.getClickURL(), (BaseTrackingListener) this.t);
                    }
                }
                z.b("MBridge SDK M", "Jump to Google Play: " + str);
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }

    private void a(CommonJumpLoader.JumpLoaderResult jumpLoaderResult, CampaignEx campaignEx, boolean z, boolean z2) {
        if (this.j) {
            a(jumpLoaderResult, campaignEx, 1, z);
        } else if (z2) {
            a(jumpLoaderResult, campaignEx, 2, z);
        }
    }

    private void a(int i, String str, CampaignEx campaignEx, NativeListener.NativeTrackingListener nativeTrackingListener) {
        try {
            if (!TextUtils.isEmpty(str)) {
                if (i == 2) {
                    ad.a(this.q, str, campaignEx, nativeTrackingListener);
                } else {
                    ad.a(this.q, str, (BaseTrackingListener) nativeTrackingListener);
                }
            }
        } catch (Throwable th) {
            z.c("MBridge SDK M", th.getMessage(), th);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:21:0x006c A[Catch: all -> 0x0068, TryCatch #0 {all -> 0x0068, blocks: (B:4:0x0004, B:6:0x0012, B:10:0x0022, B:11:0x002e, B:13:0x0034, B:16:0x0054, B:17:0x005e, B:21:0x006c, B:24:0x0075, B:25:0x007f, B:28:0x0088), top: B:32:0x0004 }] */
    /* JADX WARN: Removed duplicated region for block: B:25:0x007f A[Catch: all -> 0x0068, TryCatch #0 {all -> 0x0068, blocks: (B:4:0x0004, B:6:0x0012, B:10:0x0022, B:11:0x002e, B:13:0x0034, B:16:0x0054, B:17:0x005e, B:21:0x006c, B:24:0x0075, B:25:0x007f, B:28:0x0088), top: B:32:0x0004 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private boolean a(CampaignEx campaignEx, CommonJumpLoader.JumpLoaderResult jumpLoaderResult, boolean z, boolean z2, int i) {
        boolean z3 = false;
        if (z) {
            try {
                int iIntValue = Integer.valueOf(campaignEx.getLandingType()).intValue();
                if (iIntValue == 1) {
                    ad.a(this.q, jumpLoaderResult.getUrl(), (BaseTrackingListener) this.t);
                } else if (iIntValue == 2) {
                    ad.a(this.q, jumpLoaderResult.getUrl(), campaignEx, this.t);
                } else {
                    if (campaignEx.getPackageName() != null) {
                        if (!ad.a.a(this.q, BaseConstants.MARKET_PREFIX + campaignEx.getPackageName(), this.t)) {
                            a(i, jumpLoaderResult.getUrl(), campaignEx, this.t);
                        }
                    } else {
                        a(i, jumpLoaderResult.getUrl(), campaignEx, this.t);
                    }
                    if (z3) {
                        a(jumpLoaderResult, campaignEx, true, z2);
                        if (this.t != null && z) {
                            this.t.onFinishRedirection(campaignEx, jumpLoaderResult.getUrl());
                        }
                    } else {
                        a(jumpLoaderResult, campaignEx, true, z2);
                        if (this.t != null && z) {
                            this.t.onRedirectionFailed(campaignEx, jumpLoaderResult.getUrl());
                        }
                    }
                }
                z3 = true;
                if (z3) {
                }
            } catch (Throwable th) {
                z.c("MBridge SDK M", th.getMessage(), th);
            }
        } else if (z3) {
        }
        return z3;
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x0031 A[Catch: all -> 0x001a, TryCatch #0 {all -> 0x001a, blocks: (B:4:0x0004, B:8:0x001e, B:11:0x0027, B:12:0x0031, B:15:0x003a), top: B:19:0x0004 }] */
    /* JADX WARN: Removed duplicated region for block: B:8:0x001e A[Catch: all -> 0x001a, TryCatch #0 {all -> 0x001a, blocks: (B:4:0x0004, B:8:0x001e, B:11:0x0027, B:12:0x0031, B:15:0x003a), top: B:19:0x0004 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private boolean a(CampaignEx campaignEx, CommonJumpLoader.JumpLoaderResult jumpLoaderResult, boolean z, boolean z2) {
        boolean z3 = false;
        if (z) {
            try {
                a(campaignEx, campaignEx.getNoticeUrl(), com.mbridge.msdk.foundation.same.a.I);
                ad.a(this.q, campaignEx.getClickURL(), (BaseTrackingListener) this.t);
                z3 = true;
                if (!z3) {
                    a(jumpLoaderResult, campaignEx, true, z2);
                    if (this.t != null && z) {
                        this.t.onFinishRedirection(campaignEx, jumpLoaderResult.getUrl());
                    }
                } else {
                    a(jumpLoaderResult, campaignEx, true, z2);
                    if (this.t != null && z) {
                        this.t.onRedirectionFailed(campaignEx, jumpLoaderResult.getUrl());
                    }
                }
            } catch (Throwable th) {
                z.c("MBridge SDK M", th.getMessage(), th);
            }
        } else if (!z3) {
        }
        return z3;
    }

    /* JADX WARN: Removed duplicated region for block: B:48:0x0105 A[Catch: Exception -> 0x020a, TryCatch #0 {Exception -> 0x020a, blocks: (B:3:0x0006, B:6:0x000b, B:10:0x0018, B:12:0x0026, B:14:0x0030, B:16:0x003c, B:19:0x004a, B:21:0x0050, B:24:0x0060, B:26:0x0064, B:29:0x0078, B:33:0x0086, B:35:0x00a8, B:37:0x00b2, B:40:0x00c2, B:42:0x00d0, B:50:0x0126, B:53:0x012c, B:77:0x01d0, B:79:0x01de, B:81:0x01e6, B:85:0x01ee, B:80:0x01e3, B:44:0x00dc, B:46:0x00e6, B:49:0x010e, B:48:0x0105, B:56:0x013b, B:58:0x013f, B:59:0x0163, B:60:0x016e, B:63:0x0174, B:65:0x0180, B:67:0x019e, B:69:0x01a2, B:71:0x01a8, B:73:0x01b6, B:76:0x01c7, B:87:0x01fa, B:90:0x0203), top: B:95:0x0006 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void a(CampaignEx campaignEx, CommonJumpLoader.JumpLoaderResult jumpLoaderResult, boolean z, boolean z2, boolean z3, Boolean bool) {
        try {
            if (this.n) {
                MBridgeConstans.ALLOW_APK_DOWNLOAD = com.mbridge.msdk.c.a.aq();
                if (campaignEx != null && jumpLoaderResult != null) {
                    int iC = c();
                    int code = jumpLoaderResult.getCode();
                    if (!bool.booleanValue()) {
                        if (TextUtils.isEmpty(jumpLoaderResult.getUrl())) {
                            return;
                        }
                        a(campaignEx, jumpLoaderResult.getUrl(), bool.booleanValue());
                        return;
                    }
                    if (TextUtils.isEmpty(jumpLoaderResult.getUrl()) && z) {
                        int linkType = campaignEx.getLinkType();
                        if (linkType == 2) {
                            a(campaignEx, jumpLoaderResult, z, z3, c());
                            return;
                        }
                        if (linkType == 3) {
                            a(campaignEx, jumpLoaderResult, z, z3);
                            return;
                        }
                        ad.a(this.q, campaignEx.getClickURL(), (BaseTrackingListener) this.t);
                        a(jumpLoaderResult, campaignEx, true, z3);
                        if (this.t == null || !z) {
                            return;
                        }
                        this.t.onFinishRedirection(campaignEx, jumpLoaderResult.getUrl());
                        return;
                    }
                    if (code == 1) {
                        z.b("MBridge SDK M", "Jump to Google Play: " + jumpLoaderResult.getUrl());
                        if (TextUtils.isEmpty(campaignEx.getPackageName()) || TextUtils.isEmpty(jumpLoaderResult.getUrl()) || !jumpLoaderResult.getUrl().contains(campaignEx.getPackageName()) || !z) {
                            if (z) {
                                if (!TextUtils.isEmpty(campaignEx.getPackageName())) {
                                    if (!ad.a.a(this.q, BaseConstants.MARKET_PREFIX + campaignEx.getPackageName(), this.t)) {
                                        a(iC, jumpLoaderResult.getUrl(), campaignEx, this.t);
                                    }
                                    z.d("MBridge SDK M", "code market This pkg is " + campaignEx.getPackageName());
                                }
                            }
                        } else if (!ad.a.a(this.q, jumpLoaderResult.getUrl(), this.t)) {
                            a(iC, jumpLoaderResult.getUrl(), campaignEx, this.t);
                        }
                        if (this.t != null && z) {
                            this.t.onFinishRedirection(campaignEx, jumpLoaderResult.getUrl());
                        }
                    } else if (code == 3) {
                        if (z) {
                            if (MBridgeConstans.ALLOW_APK_DOWNLOAD) {
                                z.b("MBridge SDK M", "Jump to download: " + jumpLoaderResult.getUrl());
                                a(campaignEx, jumpLoaderResult.getUrl(), bool.booleanValue());
                            } else {
                                ad.a(this.q, jumpLoaderResult.getUrl(), (BaseTrackingListener) this.t);
                            }
                        }
                        if (this.t != null && z) {
                            this.t.onFinishRedirection(campaignEx, jumpLoaderResult.getUrl());
                        }
                    } else if (z) {
                        z.b("MBridge SDK M", "Jump to Web: " + jumpLoaderResult.getUrl());
                        if (3 == campaignEx.getLinkType()) {
                            a(campaignEx, jumpLoaderResult, z, z3);
                            return;
                        } else {
                            if (2 == campaignEx.getLinkType()) {
                                a(campaignEx, jumpLoaderResult, z, z3, c());
                                return;
                            }
                            ad.a(this.q, jumpLoaderResult.getUrl(), (BaseTrackingListener) this.t);
                            if (this.t != null && z) {
                                this.t.onFinishRedirection(campaignEx, jumpLoaderResult.getUrl());
                            }
                        }
                    }
                    if (a(campaignEx.getLinkType(), jumpLoaderResult.getUrl())) {
                        a(jumpLoaderResult, campaignEx, false, z3);
                    } else {
                        a(jumpLoaderResult, campaignEx, true, z3);
                    }
                    if (this.t == null || z || !z2) {
                        return;
                    }
                    this.t.onFinishRedirection(campaignEx, jumpLoaderResult.getUrl());
                    return;
                }
                if (z) {
                    a(jumpLoaderResult, campaignEx, true, z3);
                    if (this.t == null || !z) {
                        return;
                    }
                    this.t.onRedirectionFailed(null, null);
                }
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }

    private int c() {
        try {
            if (this.o != null) {
                return this.o.U();
            }
            return 1;
        } catch (Exception e2) {
            e2.printStackTrace();
            return 1;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x0013  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private boolean a(int i, String str) {
        boolean z = true;
        boolean z2 = false;
        try {
            if (i == 2) {
                if (!ad.a.a(str)) {
                    z = false;
                }
                z2 = z;
            } else {
                if (TextUtils.isEmpty(str)) {
                }
                z2 = z;
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        }
        return z2;
    }

    private void a(CampaignEx campaignEx, String str, boolean z) {
        String akdlui = campaignEx.getAkdlui();
        if (TextUtils.isEmpty(akdlui)) {
            akdlui = SameMD5.getMD5(str);
        }
        try {
            String string = ag.b(com.mbridge.msdk.foundation.controller.a.f().j(), akdlui, "").toString();
            if (!TextUtils.isEmpty(string)) {
                File file = new File(string);
                if (file.exists()) {
                    if (z) {
                        a(campaignEx, campaignEx.getNoticeUrl(), com.mbridge.msdk.foundation.same.a.J);
                        c.a(this.q, Uri.fromFile(file), str, akdlui);
                        return;
                    }
                    return;
                }
            } else {
                int iIntValue = ((Integer) ag.b(com.mbridge.msdk.foundation.controller.a.f().j(), akdlui + IPluginManager.KEY_PROCESS, 0)).intValue();
                int iMyPid = Process.myPid();
                if (iIntValue != 0 && iIntValue == iMyPid) {
                    long jLongValue = ((Long) ag.b(com.mbridge.msdk.foundation.controller.a.f().j(), akdlui + "isDowning", 0L)).longValue();
                    long jCurrentTimeMillis = System.currentTimeMillis() - jLongValue;
                    if (jLongValue != 0 && jCurrentTimeMillis < 600000) {
                        if (z) {
                            int iIntValue2 = ((Integer) ag.b(com.mbridge.msdk.foundation.controller.a.f().j(), akdlui + "downloadType", -1)).intValue();
                            if (iIntValue2 == 1) {
                                b(campaignEx, this.q, "downloading");
                                a(campaignEx, campaignEx.getNoticeUrl(), com.mbridge.msdk.foundation.same.a.F);
                                return;
                            } else if (iIntValue2 == 2) {
                                a(campaignEx, this.q, "downloading");
                                a(campaignEx, campaignEx.getNoticeUrl(), com.mbridge.msdk.foundation.same.a.F);
                                return;
                            } else {
                                ad.a(this.q, campaignEx.getClickURL(), (BaseTrackingListener) this.t);
                                a(campaignEx, campaignEx.getNoticeUrl(), com.mbridge.msdk.foundation.same.a.I);
                                return;
                            }
                        }
                        return;
                    }
                }
            }
            if (aj.a == -1) {
                try {
                    Class.forName("com.mbridge.msdk.mbdownload.b");
                    Class.forName("com.mbridge.msdk.mbdownload.f");
                    aj.a = 1;
                    aj.b = "ok";
                } catch (ClassNotFoundException e2) {
                    aj.a = 0;
                    aj.b = e2.getMessage();
                }
            }
            if (aj.a == 1 && z) {
                b(campaignEx, str, z);
            } else {
                c(campaignEx, str, z);
            }
        } catch (Throwable th) {
            aj.a = -1;
            aj.b = th.getMessage();
            z.b("downloadapk", "can't find download jar, use simple method");
            c(campaignEx, str, z);
        }
    }

    public static void a(CampaignEx campaignEx, Context context, String str) {
        try {
            if (str.equals("start") || str.equals("downloading")) {
                if (Looper.myLooper() == Looper.getMainLooper()) {
                    d();
                } else {
                    Message messageObtainMessage = f.obtainMessage(1);
                    messageObtainMessage.obj = context;
                    f.sendMessage(messageObtainMessage);
                }
            }
            c(campaignEx, context, str);
        } catch (Throwable th) {
            z.c("MBridge SDK M", th.getMessage(), th);
        }
    }

    private static void c(CampaignEx campaignEx, Context context, String str) {
        if (campaignEx != null) {
            try {
                if (campaignEx.getNativeVideoTracking() == null) {
                    return;
                }
                int i = 0;
                if (!str.equals("start") && !str.equals("shortcuts_start")) {
                    if (str.equals(TtmlNode.END)) {
                        if (campaignEx.getNativeVideoTracking().b() != null) {
                            while (i < campaignEx.getNativeVideoTracking().b().length) {
                                a(context, campaignEx, campaignEx.getCampaignUnitId(), campaignEx.getNativeVideoTracking().b()[i], false, false);
                                i++;
                            }
                            return;
                        }
                        return;
                    }
                    if (str.equals("install")) {
                        if (campaignEx.getNativeVideoTracking().c() != null) {
                            while (i < campaignEx.getNativeVideoTracking().c().length) {
                                a(context, campaignEx, campaignEx.getCampaignUnitId(), campaignEx.getNativeVideoTracking().c()[i], false, false);
                                i++;
                            }
                        }
                        com.mbridge.msdk.foundation.db.g.b(com.mbridge.msdk.foundation.db.i.a(context)).i(campaignEx.getPackageName());
                        return;
                    }
                    return;
                }
                if (campaignEx.getNativeVideoTracking().a() != null) {
                    while (i < campaignEx.getNativeVideoTracking().a().length) {
                        a(context, campaignEx, campaignEx.getCampaignUnitId(), campaignEx.getNativeVideoTracking().a()[i], false, false);
                        i++;
                    }
                }
            } catch (Throwable th) {
                z.c("MBridge SDK M", th.getMessage(), th);
            }
        }
    }

    public static void b(CampaignEx campaignEx, Context context, String str) {
        try {
            if (str.equals("start") || str.equals("downloading")) {
                if (Looper.myLooper() == Looper.getMainLooper()) {
                    a(context);
                } else {
                    Message messageObtainMessage = f.obtainMessage(0);
                    messageObtainMessage.obj = context;
                    f.sendMessage(messageObtainMessage);
                }
            }
            c(campaignEx, context, str);
        } catch (Throwable th) {
            z.c("MBridge SDK M", th.getMessage(), th);
        }
    }

    public static void a(Context context) {
        com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
        if (aVarB == null) {
            aVarB = com.mbridge.msdk.c.b.a().b();
        }
        if (aVarB != null) {
            if (com.mbridge.msdk.foundation.controller.a.f().j() == null && context != null) {
                Toast.makeText(context, aVarB.Q(), 0).show();
            } else {
                Toast.makeText(com.mbridge.msdk.foundation.controller.a.f().j(), aVarB.Q(), 0).show();
            }
        }
    }

    private static void d() {
        try {
            String language = Locale.getDefault().getLanguage();
            if (!TextUtils.isEmpty(language) && language.equals(com.tkay.expressad.video.dynview.a.a.Q)) {
                Toast.makeText(com.mbridge.msdk.foundation.controller.a.f().j(), "正在下载中,请稍候...", 0).show();
            } else {
                Toast.makeText(com.mbridge.msdk.foundation.controller.a.f().j(), "Downloading....", 0).show();
            }
        } catch (Exception unused) {
        }
    }

    private void b(final CampaignEx campaignEx, final String str, final boolean z) {
        String md5;
        if (campaignEx != null && !TextUtils.isEmpty(campaignEx.getAkdlui())) {
            md5 = campaignEx.getAkdlui();
        } else {
            md5 = SameMD5.getMD5(str);
        }
        final String str2 = md5;
        try {
            ad.a(str, 1, campaignEx);
            Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
            boolean zA = aj.a(contextJ);
            boolean zC = aj.c(contextJ);
            try {
                if (!aj.b(contextJ)) {
                    a(campaignEx, campaignEx.getNoticeUrl(), com.mbridge.msdk.foundation.same.a.I);
                    c.a(contextJ, str, str2);
                    return;
                }
                if (!zC) {
                    c(campaignEx, str, z);
                    return;
                }
                if (!zA) {
                    c(campaignEx, str, z);
                    return;
                }
                ag.a(com.mbridge.msdk.foundation.controller.a.f().j(), str2 + "isDowning", Long.valueOf(System.currentTimeMillis()));
                ag.a(com.mbridge.msdk.foundation.controller.a.f().j(), str2 + IPluginManager.KEY_PROCESS, Integer.valueOf(Process.myPid()));
                Class<?> cls = Class.forName("com.mbridge.msdk.mbdownload.manager.ADownloadManager");
                return;
            } catch (Throwable th) {
                th = th;
            }
        } catch (Throwable th2) {
            th = th2;
        }
        ag.a(com.mbridge.msdk.foundation.controller.a.f().j(), str2 + "isDowning", 0L);
        ag.a(com.mbridge.msdk.foundation.controller.a.f().j(), str2 + IPluginManager.KEY_PROCESS, 0);
        if (MBridgeConstans.DEBUG) {
            th.printStackTrace();
        }
        c(campaignEx, str, z);
    }

    /* JADX WARN: Removed duplicated region for block: B:6:0x0011  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void c(final CampaignEx campaignEx, final String str, final boolean z) {
        String akdlui;
        if (campaignEx != null) {
            try {
                akdlui = !TextUtils.isEmpty(campaignEx.getAkdlui()) ? campaignEx.getAkdlui() : str;
            } catch (Throwable th) {
                if (MBridgeConstans.DEBUG) {
                    th.printStackTrace();
                    return;
                }
                return;
            }
        }
        if (TextUtils.isEmpty(akdlui)) {
            akdlui = SameMD5.getMD5(str);
        }
        ad.a(str, 2, campaignEx);
        Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
        if (!aj.b(contextJ)) {
            a(campaignEx, campaignEx.getNoticeUrl(), com.mbridge.msdk.foundation.same.a.I);
            c.a(contextJ, str, akdlui);
            return;
        }
        ag.a(com.mbridge.msdk.foundation.controller.a.f().j(), akdlui + "isDowning", Long.valueOf(System.currentTimeMillis()));
        ag.a(com.mbridge.msdk.foundation.controller.a.f().j(), akdlui + IPluginManager.KEY_PROCESS, Integer.valueOf(Process.myPid()));
        new Thread(new Runnable() {
            @Override
            public final void run() {
                b.a(b.this, campaignEx, str, z);
            }
        }).start();
    }

    static void a(b bVar, CampaignEx campaignEx, boolean z, CommonJumpLoader.JumpLoaderResult jumpLoaderResult, int i, boolean z2) {
        if (campaignEx == null) {
            return;
        }
        String url = "";
        if (jumpLoaderResult != null) {
            try {
                url = jumpLoaderResult.getUrl();
            } catch (Exception e2) {
                e2.printStackTrace();
                return;
            }
        }
        com.mbridge.msdk.foundation.db.c cVarA = com.mbridge.msdk.foundation.db.c.a(bVar.p);
        if (bVar.a(campaignEx.getLinkType(), url)) {
            bVar.a(jumpLoaderResult, campaignEx, false, z2);
            if (campaignEx.getJumpResult() != null && !TextUtils.isEmpty(campaignEx.getNoticeUrl())) {
                campaignEx.getJumpResult().setNoticeurl(campaignEx.getNoticeUrl());
            }
            cVarA.a(campaignEx, bVar.g, z, 1, i);
            return;
        }
        bVar.a(jumpLoaderResult, campaignEx, true, z2);
        cVarA.a(campaignEx, bVar.g, z, 0, i);
    }

    static void a(b bVar, CampaignEx campaignEx) {
        try {
            Intent intent = new Intent(bVar.q, (Class<?>) LoadingActivity.class);
            intent.setFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            intent.putExtra("icon_url", campaignEx.getIconUrl());
            bVar.q.startActivity(intent);
        } catch (Exception e2) {
            z.c("MBridge SDK M", "Exception", e2);
        }
    }

    static void a(b bVar, final boolean z, final Campaign campaign) {
        new Handler(Looper.getMainLooper()).post(new Runnable() {
            @Override
            public final void run() {
                if (z && !b.a && MBridgeConstans.NATIVE_SHOW_LOADINGPAGER) {
                    b.g(b.this);
                }
                if (b.this.t == null || b.a || !MBridgeConstans.NATIVE_SHOW_LOADINGPAGER) {
                    return;
                }
                b.this.t.onDismissLoading(campaign);
            }
        });
    }

    static void g(b bVar) {
        try {
            Intent intent = new Intent();
            intent.setAction("ExitApp");
            bVar.q.sendBroadcast(intent);
        } catch (Exception e2) {
            z.c("MBridge SDK M", "Exception", e2);
        }
    }

    static void a(b bVar, final CampaignEx campaignEx, final String str, final boolean z) {
        String md5;
        if (campaignEx != null && !TextUtils.isEmpty(campaignEx.getAkdlui())) {
            md5 = campaignEx.getAkdlui();
        } else {
            md5 = SameMD5.getMD5(str);
        }
        try {
            final String str2 = md5;
            com.mbridge.msdk.optimize.a.a(x.a("/apk", bVar.q, new boolean[1]), c.a(str), str, new com.mbridge.msdk.optimize.b() {
                @Override
                public final void a() {
                    b.this.w.sendMessage(b.this.w.obtainMessage(0));
                    b bVar2 = b.this;
                    CampaignEx campaignEx2 = campaignEx;
                    bVar2.a(campaignEx2, campaignEx2.getNoticeUrl(), com.mbridge.msdk.foundation.same.a.H);
                    if (z) {
                        b.a(campaignEx, b.this.q, "start");
                    } else {
                        b.a(campaignEx, b.this.q, "shortcuts_start");
                    }
                }

                @Override
                public final void a(int i) {
                    Message messageObtainMessage = b.this.w.obtainMessage(1);
                    messageObtainMessage.arg1 = i;
                    b.this.w.sendMessage(messageObtainMessage);
                }

                @Override
                public final void a(File file) {
                    ag.a(com.mbridge.msdk.foundation.controller.a.f().j(), str2 + "isDowning", 0L);
                    ag.a(com.mbridge.msdk.foundation.controller.a.f().j(), str2 + IPluginManager.KEY_PROCESS, 0);
                    b.a(campaignEx, b.this.q, TtmlNode.END);
                    com.mbridge.msdk.foundation.db.g.b(com.mbridge.msdk.foundation.db.i.a(com.mbridge.msdk.foundation.controller.a.f().j())).a(campaignEx);
                    if (file.exists() && z) {
                        c.a(b.this.q, Uri.fromFile(file), str, str2);
                        ag.a(com.mbridge.msdk.foundation.controller.a.f().j(), str2, file.getAbsolutePath());
                    } else {
                        if (z) {
                            return;
                        }
                        ag.a(com.mbridge.msdk.foundation.controller.a.f().j(), str2, file.getAbsolutePath());
                    }
                }

                @Override
                public final void b() {
                    c.a(b.this.q, str, str2);
                }
            });
        } catch (Throwable unused) {
            c.a(com.mbridge.msdk.foundation.controller.a.f().j(), str, md5);
        }
    }
}
