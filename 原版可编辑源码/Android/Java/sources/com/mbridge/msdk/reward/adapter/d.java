package com.mbridge.msdk.reward.adapter;

import android.content.Context;
import android.content.Intent;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.text.TextUtils;
import android.webkit.WebView;
import com.loc.at;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.db.k;
import com.mbridge.msdk.foundation.db.l;
import com.mbridge.msdk.foundation.download.download.H5DownLoadManager;
import com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.CampaignUnit;
import com.mbridge.msdk.foundation.tools.SameMD5;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.ai;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView;
import com.mbridge.msdk.reward.adapter.c;
import com.mbridge.msdk.reward.player.MBRewardVideoActivity;
import com.mbridge.msdk.video.bt.module.b.h;
import com.mbridge.msdk.video.js.a.j;
import com.mbridge.msdk.videocommon.a;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.tkay.core.c.d;
import java.io.File;
import java.io.FileOutputStream;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public final class d implements com.mbridge.msdk.reward.adapter.a {
    private boolean A;
    private boolean B;
    private int D;
    private int E;
    private int F;
    private CampaignUnit G;
    private CopyOnWriteArrayList<CampaignEx> H;
    private List<CampaignEx> O;
    private List<CampaignEx> P;
    private Context j;
    private String k;
    private String l;
    private int m;
    private int n;
    private int o;
    private boolean p;
    private String q;
    private String r;
    private h s;
    private volatile com.mbridge.msdk.reward.adapter.b t;
    private com.mbridge.msdk.videocommon.d.c u;
    private e v;
    private boolean w = false;
    private boolean x = false;
    public Object a = new Object();
    private CopyOnWriteArrayList<CampaignEx> y = new CopyOnWriteArrayList<>();
    private int z = 2;
    private String C = "";
    private boolean I = false;
    public String b = "";
    public String c = "";
    private long J = 0;
    private Handler K = new Handler(Looper.getMainLooper()) {
        /* JADX WARN: Multi-variable type inference failed */
        /* JADX WARN: Removed duplicated region for block: B:100:0x02ee  */
        /* JADX WARN: Removed duplicated region for block: B:108:0x0336 A[Catch: Exception -> 0x023c, all -> 0x08c9, TRY_LEAVE, TryCatch #3 {Exception -> 0x023c, blocks: (B:79:0x024a, B:81:0x0254, B:83:0x0262, B:92:0x02b5, B:94:0x02bf, B:96:0x02cd, B:104:0x031e, B:106:0x0328, B:108:0x0336, B:113:0x036e, B:115:0x039a, B:119:0x03cf, B:121:0x03d5, B:123:0x03e3, B:125:0x03f3, B:127:0x0405, B:131:0x0427, B:132:0x0455, B:135:0x0461, B:137:0x046b), top: B:264:0x024a }] */
        /* JADX WARN: Removed duplicated region for block: B:111:0x036a  */
        /* JADX WARN: Removed duplicated region for block: B:99:0x02ec  */
        /* JADX WARN: Type inference fix 'apply assigned field type' failed
        java.lang.UnsupportedOperationException: ArgType.getObject(), call class: class jadx.core.dex.instructions.args.ArgType$UnknownArg
        	at jadx.core.dex.instructions.args.ArgType.getObject(ArgType.java:593)
        	at jadx.core.dex.attributes.nodes.ClassTypeVarsAttr.getTypeVarsMapFor(ClassTypeVarsAttr.java:35)
        	at jadx.core.dex.nodes.utils.TypeUtils.replaceClassGenerics(TypeUtils.java:177)
        	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.insertExplicitUseCast(FixTypesVisitor.java:397)
        	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.tryFieldTypeWithNewCasts(FixTypesVisitor.java:359)
        	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.applyFieldType(FixTypesVisitor.java:309)
        	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.visit(FixTypesVisitor.java:94)
         */
        @Override
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public final void handleMessage(Message message) {
            Object[] objArr;
            try {
                try {
                    int i = message.what;
                    if (i == 8) {
                        if (d.this.t != null) {
                            z.d("RewardMVVideoAdapter", "adapter 202");
                            CampaignEx campaignEx = (CampaignEx) message.obj;
                            if (campaignEx == null || TextUtils.isEmpty(d.this.k)) {
                                return;
                            }
                            com.mbridge.msdk.reward.b.a.a(d.this.j, campaignEx, d.this.k);
                            z.d("RewardMVVideoAdapter", "3dwOnLoadSuccess");
                            if (d.this.b()) {
                                z.b("RewardMVVideoAdapter", "handler endcard源码下载成功 isready为true");
                                return;
                            }
                            return;
                        }
                        return;
                    }
                    String requestIdNotice = "";
                    WindVaneWebView windVaneWebView = null;
                    campaignEx = null;
                    CampaignEx campaignEx2 = null;
                    campaignEx = null;
                    CampaignEx campaignEx3 = null;
                    if (i == 9 || i == 16) {
                        try {
                            Object[] objArr2 = (Object[]) message.obj;
                            CampaignEx campaignEx4 = (CampaignEx) objArr2[0];
                            String str = (String) objArr2[2];
                            com.mbridge.msdk.videocommon.d.c cVar = (com.mbridge.msdk.videocommon.d.c) objArr2[3];
                            String str2 = (String) objArr2[4];
                            if (objArr2.length == 7) {
                                requestIdNotice = (String) objArr2[5];
                                windVaneWebView = (WindVaneWebView) objArr2[6];
                            }
                            String str3 = requestIdNotice;
                            WindVaneWebView windVaneWebView2 = windVaneWebView;
                            if (campaignEx4 != null) {
                                if (d.this.y == null) {
                                    if (d.this.P != null) {
                                        d.a(d.this, windVaneWebView2, str2, campaignEx4, d.this.P, "", str, cVar, str3);
                                        return;
                                    }
                                    return;
                                }
                                d.a(d.this, windVaneWebView2, str2, campaignEx4, d.this.y, "", str, cVar, str3);
                                return;
                            }
                            return;
                        } catch (Exception e2) {
                            z.a("RewardMVVideoAdapter", e2.getLocalizedMessage());
                            if (MBridgeConstans.DEBUG) {
                                e2.printStackTrace();
                                return;
                            }
                            return;
                        }
                    }
                    if (i != 17) {
                        switch (i) {
                            case 1:
                                z.b("RewardMVVideoAdapter", "handler id获取成功 开始load mTtcIds:" + d.this.q + "  mExcludes:" + d.this.r);
                                d.this.b(message.obj != null ? message.obj.toString() : null);
                                break;
                            case 2:
                                z.b("RewardMVVideoAdapter", "handler id获取超时  开始load mTtcIds:" + d.this.q + "  mExcludes:" + d.this.r);
                                d.this.b(message.obj != null ? message.obj.toString() : null);
                                break;
                            case 3:
                                if (d.this.t != null) {
                                    z.b("RewardMVVideoAdapter", "handler 数据load成功");
                                    z.a("RewardMVVideoAdapter", "=====================onCampaignLoadSuccess=====================");
                                    d.this.t.b("campaign is ok");
                                }
                                sendEmptyMessageDelayed(5, com.mbridge.msdk.foundation.same.a.v);
                                break;
                            case 4:
                                if (d.this.t != null) {
                                    z.b("RewardMVVideoAdapter", "handler 数据load失败");
                                    z.a("RewardMVVideoAdapter", "=====================onVideoLoadFail=====================");
                                    d.a(d.this, d.this.k, d.this.O, d.this.B);
                                    if (d.this.O != null && d.this.O.size() > 0) {
                                        campaignEx3 = (CampaignEx) d.this.O.get(0);
                                    }
                                    try {
                                        if (message.obj == null) {
                                            if (d.this.K != null) {
                                                d.this.K.removeMessages(5);
                                            }
                                            removeMessages(6);
                                            z.a("RewardMVVideoAdapter", "=====================onVideoLoadFail=====================00000");
                                            if (!d.this.i) {
                                                d.this.i = true;
                                                if (!d.this.L) {
                                                    if (campaignEx3 != null) {
                                                        com.mbridge.msdk.reward.b.a.a(d.this.j, campaignEx3, "data load failed", d.this.k, d.this.B, campaignEx3.getRequestId(), campaignEx3.getRequestIdNotice());
                                                    } else {
                                                        com.mbridge.msdk.reward.b.a.a(d.this.j, campaignEx3, "data load failed", d.this.k, d.this.B, "", "");
                                                    }
                                                }
                                                d.this.t.a("errorCode: 3506 errorMessage: data load failed");
                                            }
                                        } else {
                                            String str4 = (String) message.obj;
                                            if (TextUtils.isEmpty(str4)) {
                                                if (d.this.K != null) {
                                                    d.this.K.removeMessages(5);
                                                }
                                                removeMessages(6);
                                                z.a("RewardMVVideoAdapter", "=====================onVideoLoadFail=====================11111");
                                                if (!d.this.i) {
                                                    d.this.i = true;
                                                    if (!d.this.L) {
                                                        if (campaignEx3 != null) {
                                                            com.mbridge.msdk.reward.b.a.a(d.this.j, campaignEx3, "data load failed, errorMsg null", d.this.k, d.this.B, campaignEx3.getRequestId(), campaignEx3.getRequestIdNotice());
                                                        } else {
                                                            com.mbridge.msdk.reward.b.a.a(d.this.j, campaignEx3, "data load failed, errorMsg null", d.this.k, d.this.B, "", "");
                                                        }
                                                    }
                                                    d.this.t.a("errorCode: 3507 errorMessage: data load failed, errorMsg null");
                                                }
                                            } else {
                                                if (d.this.K != null) {
                                                    d.this.K.removeMessages(5);
                                                }
                                                removeMessages(6);
                                                z.a("RewardMVVideoAdapter", "=====================onVideoLoadFail=====================3333333 + " + str4 + " isCalledLoadFailed: " + d.this.i);
                                                if (!d.this.i) {
                                                    d.this.i = true;
                                                    if (!d.this.L) {
                                                        if (campaignEx3 != null) {
                                                            com.mbridge.msdk.reward.b.a.a(d.this.j, campaignEx3, str4, d.this.k, d.this.B, campaignEx3.getRequestId(), campaignEx3.getRequestIdNotice());
                                                        } else {
                                                            com.mbridge.msdk.reward.b.a.a(d.this.j, campaignEx3, str4, d.this.k, d.this.B, "", "");
                                                        }
                                                    }
                                                    d.this.t.a("errorCode: 3507 errorMessage: data load failed, errorMsg is " + str4);
                                                }
                                            }
                                        }
                                    } catch (Exception e3) {
                                        if (d.this.K != null) {
                                            d.this.K.removeMessages(5);
                                        }
                                        removeMessages(6);
                                        d.a(d.this, d.this.k, d.this.O, d.this.B);
                                        z.a("RewardMVVideoAdapter", "=====================onVideoLoadFail=====================44444");
                                        if (d.this.i) {
                                            return;
                                        }
                                        d.this.i = true;
                                        if (!d.this.L) {
                                            if (campaignEx3 != null) {
                                                com.mbridge.msdk.reward.b.a.a(d.this.j, campaignEx3, e3.getMessage(), d.this.k, d.this.B, campaignEx3.getRequestId(), campaignEx3.getRequestIdNotice());
                                            } else {
                                                com.mbridge.msdk.reward.b.a.a(d.this.j, campaignEx3, e3.getMessage(), d.this.k, d.this.B, "", "");
                                            }
                                        }
                                        d.this.t.a("errorCode: 3508 errorMessage: data load failed, exception is " + e3.getMessage());
                                        return;
                                    }
                                }
                                break;
                            case 5:
                                if (d.this.t != null) {
                                    z.b("RewardMVVideoAdapter", "资源load超时");
                                    z.d("RewardMVVideoAdapter", "adapter 177");
                                    if (d.this.O != null && d.this.O.size() > 0) {
                                        CampaignEx campaignEx5 = (CampaignEx) d.this.O.get(0);
                                        if (d.this.a((List<CampaignEx>) d.this.H, !TextUtils.isEmpty(campaignEx5.getCMPTEntryUrl()), campaignEx5.getNscpt(), true)) {
                                            d.a(d.this, d.this.k, d.this.O, d.this.P, d.this.B);
                                            sendEmptyMessage(6);
                                            removeMessages(5);
                                            if (!d.this.h) {
                                                d.this.h = true;
                                                if (!TextUtils.isEmpty(d.this.k)) {
                                                    com.mbridge.msdk.reward.b.a.a(d.this.j, d.this.H, d.this.k, System.currentTimeMillis() - d.this.M);
                                                }
                                                d.this.t.a();
                                            }
                                        }
                                    }
                                    d.a(d.this, d.this.k, d.this.O, d.this.B);
                                    if (d.this.K != null) {
                                        d.this.K.removeMessages(5);
                                        d.this.K.removeMessages(6);
                                    }
                                    if (!d.this.i) {
                                        d.this.i = true;
                                        if (d.this.O != null && d.this.O.size() > 0) {
                                            campaignEx2 = (CampaignEx) d.this.O.get(0);
                                        }
                                        if (campaignEx2 != null) {
                                            Context context = d.this.j;
                                            StringBuilder sb = new StringBuilder();
                                            sb.append("resource load timeout is tpl: ");
                                            sb.append(!TextUtils.isEmpty(campaignEx2.getCMPTEntryUrl()));
                                            String string = sb.toString();
                                            String str5 = d.this.k;
                                            boolean z = d.this.B;
                                            String requestId = campaignEx2 == null ? "" : campaignEx2.getRequestId();
                                            if (campaignEx2 != null) {
                                                requestIdNotice = campaignEx2.getRequestIdNotice();
                                            }
                                            com.mbridge.msdk.reward.b.a.a(context, campaignEx2, string, str5, z, requestId, requestIdNotice);
                                        }
                                        d.this.t.a("errorCode: 3401 errorMessage: resource load timeout");
                                        if (d.this.H != null && d.this.H.size() > 0) {
                                            Object[] objArr3 = false;
                                            for (CampaignEx campaignEx6 : d.this.H) {
                                                if (campaignEx6 != null) {
                                                    try {
                                                        if (!TextUtils.isEmpty(campaignEx6.getVideoUrlEncode()) && !ResDownloadCheckManager.getInstance().containsVideoKey(campaignEx6.getVideoUrlEncode())) {
                                                            z.a("RewardMVVideoAdapter", "resource load timeout exception video");
                                                            try {
                                                                Context context2 = d.this.j;
                                                                StringBuilder sb2 = new StringBuilder();
                                                                sb2.append("resource load timeout exception video is tpl: ");
                                                                sb2.append(!TextUtils.isEmpty(campaignEx2.getCMPTEntryUrl()));
                                                                com.mbridge.msdk.reward.b.a.a(campaignEx2, context2, sb2.toString(), d.this.k, d.this.B, campaignEx6.getRequestId(), campaignEx6.getRequestIdNotice(), System.currentTimeMillis() - d.this.M);
                                                            } catch (Exception unused) {
                                                            }
                                                            objArr = true;
                                                        }
                                                        if (campaignEx6 != null && !TextUtils.isEmpty(campaignEx6.getendcard_url()) && !ResDownloadCheckManager.getInstance().containsZipKey(campaignEx6.getendcard_url())) {
                                                            z.a("RewardMVVideoAdapter", "resource load timeout exception endcard");
                                                            try {
                                                                Context context3 = d.this.j;
                                                                StringBuilder sb3 = new StringBuilder();
                                                                sb3.append("resource load timeout exception endcard is tpl: ");
                                                                sb3.append(TextUtils.isEmpty(campaignEx2.getCMPTEntryUrl()));
                                                                com.mbridge.msdk.reward.b.a.a(campaignEx2, context3, sb3.toString(), d.this.k, d.this.B, campaignEx6.getRequestId(), campaignEx6.getRequestIdNotice(), System.currentTimeMillis() - d.this.M);
                                                            } catch (Exception unused2) {
                                                            }
                                                            objArr = true;
                                                        }
                                                        if (campaignEx6 != null && !TextUtils.isEmpty(campaignEx6.getCMPTEntryUrl())) {
                                                            if (ResDownloadCheckManager.getInstance().containsZipKey(campaignEx6.getCMPTEntryUrl())) {
                                                                z.a("RewardMVVideoAdapter", "resource load timeout exception tpl");
                                                                try {
                                                                    com.mbridge.msdk.reward.b.a.a(campaignEx2, d.this.j, "resource load timeout exception tpl", d.this.k, d.this.B, campaignEx6.getRequestId(), campaignEx6.getRequestIdNotice(), System.currentTimeMillis() - d.this.M);
                                                                    break;
                                                                } catch (Exception unused3) {
                                                                }
                                                                objArr = true;
                                                            } else if (objArr3 == false && objArr == false) {
                                                                if (com.mbridge.msdk.videocommon.a.a(d.this.k + "_" + campaignEx6.getRequestId() + "_" + campaignEx6.getCMPTEntryUrl()) == null) {
                                                                    z.a("RewardMVVideoAdapter", "resource load timeout exception tpl preload");
                                                                    try {
                                                                        com.mbridge.msdk.reward.b.a.a(campaignEx2, d.this.j, "resource load timeout exception tpl preload", d.this.k, d.this.B, campaignEx6.getRequestId(), campaignEx6.getRequestIdNotice(), System.currentTimeMillis() - d.this.M);
                                                                        break;
                                                                    } catch (Exception unused4) {
                                                                    }
                                                                    objArr3 = true;
                                                                }
                                                            }
                                                        }
                                                        if (campaignEx6 == null && campaignEx6.getRewardTemplateMode() != null && !TextUtils.isEmpty(campaignEx6.getRewardTemplateMode().e()) && !campaignEx6.getRewardTemplateMode().e().contains("cmpt=1")) {
                                                            if (!ResDownloadCheckManager.getInstance().containsZipKey(campaignEx6.getRewardTemplateMode().e())) {
                                                                z.a("RewardMVVideoAdapter", "resource load timeout exception template");
                                                                Context context4 = d.this.j;
                                                                StringBuilder sb4 = new StringBuilder();
                                                                sb4.append("resource load timeout exception template is tpl: ");
                                                                sb4.append(!TextUtils.isEmpty(campaignEx2.getCMPTEntryUrl()));
                                                                com.mbridge.msdk.reward.b.a.a(campaignEx2, context4, sb4.toString(), d.this.k, d.this.B, campaignEx6.getRequestId(), campaignEx6.getRequestIdNotice(), System.currentTimeMillis() - d.this.M);
                                                            } else if (TextUtils.isEmpty(campaignEx6.getCMPTEntryUrl()) && objArr == false && com.mbridge.msdk.videocommon.a.a(campaignEx6.getAdType(), campaignEx6) == null) {
                                                                z.a("RewardMVVideoAdapter", "resource load timeout exception template preload");
                                                                com.mbridge.msdk.reward.b.a.a(campaignEx2, d.this.j, "resource load timeout exception template preload", d.this.k, d.this.B, campaignEx6.getRequestId(), campaignEx6.getRequestIdNotice(), System.currentTimeMillis() - d.this.M);
                                                            }
                                                        }
                                                    } catch (Exception unused5) {
                                                    }
                                                }
                                                objArr = false;
                                                if (campaignEx6 != null) {
                                                    z.a("RewardMVVideoAdapter", "resource load timeout exception endcard");
                                                    Context context32 = d.this.j;
                                                    StringBuilder sb32 = new StringBuilder();
                                                    sb32.append("resource load timeout exception endcard is tpl: ");
                                                    sb32.append(TextUtils.isEmpty(campaignEx2.getCMPTEntryUrl()));
                                                    com.mbridge.msdk.reward.b.a.a(campaignEx2, context32, sb32.toString(), d.this.k, d.this.B, campaignEx6.getRequestId(), campaignEx6.getRequestIdNotice(), System.currentTimeMillis() - d.this.M);
                                                    objArr = true;
                                                }
                                                if (campaignEx6 != null) {
                                                    if (ResDownloadCheckManager.getInstance().containsZipKey(campaignEx6.getCMPTEntryUrl())) {
                                                    }
                                                }
                                                if (campaignEx6 == null) {
                                                }
                                            }
                                            break;
                                        }
                                    }
                                }
                                break;
                            case 6:
                                z.b("RewardMVVideoAdapter", "handler res数据load成功0");
                                d.a(d.this, d.this.k, d.this.O, d.this.P, d.this.B);
                                if (d.this.t != null) {
                                    z.b("RewardMVVideoAdapter", "handler res数据load成功1");
                                    removeMessages(6);
                                    if (d.this.K != null) {
                                        d.this.K.removeMessages(5);
                                    }
                                    if (d.this.t != null && !d.this.h) {
                                        d.this.h = true;
                                        if (!TextUtils.isEmpty(d.this.k)) {
                                            com.mbridge.msdk.reward.b.a.a(d.this.j, d.this.H, d.this.k, System.currentTimeMillis() - d.this.M);
                                        }
                                        d.this.t.a();
                                        break;
                                    }
                                }
                                break;
                        }
                        return;
                    }
                    z.a("RewardMVVideoAdapter", "收到预加载大模板的消息");
                    try {
                        Object[] objArr4 = (Object[]) message.obj;
                        CampaignEx campaignEx7 = (CampaignEx) objArr4[0];
                        String str6 = (String) objArr4[1];
                        String str7 = (String) objArr4[2];
                        com.mbridge.msdk.videocommon.d.c cVar2 = (com.mbridge.msdk.videocommon.d.c) objArr4[3];
                        String str8 = (String) objArr4[4];
                        if (campaignEx7 == null || TextUtils.isEmpty(str6)) {
                            return;
                        }
                        z.a("RewardMVVideoAdapter", "开始预加载大模板");
                        d.a(d.this, str8, campaignEx7, str6, str7, cVar2);
                    } catch (Exception e4) {
                        z.a("RewardMVVideoAdapter", e4.getLocalizedMessage());
                        if (MBridgeConstans.DEBUG) {
                            e4.printStackTrace();
                        }
                    }
                } catch (Throwable th) {
                    z.a("RewardMVVideoAdapter", th.getMessage());
                }
            } catch (Exception e5) {
                e5.printStackTrace();
            }
        }
    };
    boolean d = false;
    private boolean L = false;
    private long M = 0;
    volatile boolean e = false;
    volatile boolean f = false;
    volatile boolean g = false;
    volatile boolean h = false;
    volatile boolean i = false;
    private String N = "";

    public final void a(boolean z) {
        this.A = z;
    }

    public final void b(boolean z) {
        this.B = z;
    }

    public final void a(String str) {
        this.C = str;
    }

    public final void a(int i) {
        this.z = i;
    }

    public final String a() {
        return this.k;
    }

    public final String c(boolean z) {
        CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayListA;
        CampaignEx campaignEx;
        if (z) {
            if (TextUtils.isEmpty(this.c) && (copyOnWriteArrayListA = com.mbridge.msdk.videocommon.download.b.getInstance().a(this.k)) != null && copyOnWriteArrayListA.size() > 0 && (campaignEx = copyOnWriteArrayListA.get(0)) != null) {
                this.c = campaignEx.getRequestId();
            }
            return this.c;
        }
        return this.b;
    }

    private class b implements Runnable {
        private String b;
        private CampaignEx c;
        private String d;
        private String e;
        private com.mbridge.msdk.videocommon.d.c f;
        private int g;
        private d h;

        public b(String str, CampaignEx campaignEx, String str2, String str3, com.mbridge.msdk.videocommon.d.c cVar, int i, d dVar) {
            this.b = str;
            this.c = campaignEx;
            this.d = str2;
            this.e = str3;
            this.f = cVar;
            this.g = i;
            this.h = dVar;
        }

        @Override
        public final void run() {
            j jVar;
            try {
                z.b("RewardMVVideoAdapter", "retry load tpl url = " + this.d);
                a.a aVar = new a.a();
                WindVaneWebView windVaneWebView = new WindVaneWebView(com.mbridge.msdk.foundation.controller.a.f().j());
                aVar.a(windVaneWebView);
                String strB = com.mbridge.msdk.video.bt.a.c.a().b();
                aVar.a(strB);
                if (d.this.G.getAds() != null && d.this.G.getAds().size() > 0) {
                    jVar = new j(null, this.c, d.this.G.getAds());
                } else {
                    jVar = new j(null, this.c);
                }
                j jVar2 = jVar;
                jVar2.a(this.g);
                jVar2.a(this.e);
                jVar2.c(strB);
                jVar2.a(this.f);
                jVar2.e(d.this.I);
                windVaneWebView.setWebViewListener(new a(this.d, this.b, aVar, this.c, this.h, null, null));
                windVaneWebView.setObject(jVar2);
                windVaneWebView.loadUrl(this.d);
            } catch (Exception e) {
                if (MBridgeConstans.DEBUG) {
                    e.printStackTrace();
                }
            } catch (Throwable th) {
                z.a("RewardMVVideoAdapter", th.getMessage());
            }
        }
    }

    private class c implements Runnable {
        private WindVaneWebView b;
        private String c;
        private CampaignEx d;
        private List<CampaignEx> e;
        private String f;
        private String g;
        private com.mbridge.msdk.videocommon.d.c h;
        private int i;
        private d j;

        public c(WindVaneWebView windVaneWebView, String str, CampaignEx campaignEx, List<CampaignEx> list, String str2, String str3, com.mbridge.msdk.videocommon.d.c cVar, int i, d dVar) {
            this.b = windVaneWebView;
            this.c = str;
            this.d = campaignEx;
            this.e = list;
            this.f = str2;
            this.g = str3;
            this.h = cVar;
            this.i = i;
            this.j = dVar;
        }

        @Override
        public final void run() {
            j jVar;
            try {
                z.b("RewardMVVideoAdapter", "retry load template url = " + this.f);
                a.a aVar = new a.a();
                WindVaneWebView windVaneWebView = new WindVaneWebView(com.mbridge.msdk.foundation.controller.a.f().j());
                aVar.a(windVaneWebView);
                if (this.e != null && this.e.size() > 0) {
                    jVar = new j(null, this.d, this.e);
                } else {
                    jVar = new j(null, this.d);
                }
                j jVar2 = jVar;
                jVar2.a(this.i);
                jVar2.a(this.g);
                jVar2.a(this.h);
                jVar2.e(d.this.I);
                windVaneWebView.setWebViewListener(new f(this.b, this.f, this.c, aVar, this.d, this.j, null, null));
                windVaneWebView.setObject(jVar2);
                windVaneWebView.loadUrl(this.f);
            } catch (Exception e) {
                if (MBridgeConstans.DEBUG) {
                    e.printStackTrace();
                }
            } catch (Throwable th) {
                z.a("RewardMVVideoAdapter", th.getMessage());
            }
        }
    }

    private static class a extends com.mbridge.msdk.mbjscommon.c.a {
        private d a;
        private String b;
        private String c;
        private a.a d;
        private CampaignEx e;
        private boolean f;
        private boolean g;
        private b h;
        private Handler i;

        @Override
        public final void a(WebView webView, String str, String str2, int i, int i2) {
        }

        public a(String str, String str2, a.a aVar, CampaignEx campaignEx, d dVar, b bVar, Handler handler) {
            this.b = str;
            this.c = str2;
            this.d = aVar;
            if (dVar != null) {
                this.a = dVar;
            }
            this.e = campaignEx;
            this.h = bVar;
            this.i = handler;
        }

        @Override
        public final void a(WebView webView, int i) {
            Handler handler;
            if (this.g) {
                return;
            }
            b bVar = this.h;
            if (bVar != null && (handler = this.i) != null) {
                handler.removeCallbacks(bVar);
            }
            z.a("RVWindVaneWebView", "CampaignTPL templete preload readyState state = " + i);
            ResDownloadCheckManager.getInstance().setTemplatePreLoadDone(this.b, true);
            a.a aVar = this.d;
            if (aVar != null) {
                aVar.a(true);
            }
            List<CampaignEx> listA = com.mbridge.msdk.videocommon.a.a.a().a(this.c, 1, this.a.B);
            if (listA != null && listA.size() > 0) {
                Iterator<CampaignEx> it = listA.iterator();
                while (it.hasNext()) {
                    CampaignEx.c rewardTemplateMode = it.next().getRewardTemplateMode();
                    if (rewardTemplateMode != null && !TextUtils.isEmpty(rewardTemplateMode.e()) && !rewardTemplateMode.e().contains("cmpt=1") && TextUtils.equals(rewardTemplateMode.e(), this.b)) {
                        if (TextUtils.isEmpty(this.e.getCMPTEntryUrl()) && this.e.getMof_tplid() == -1) {
                            this.e.getRequestIdNotice();
                        } else {
                            this.e.getMof_tplid();
                            this.e.getRequestIdNotice();
                        }
                        d dVar = this.a;
                        if (dVar != null && dVar.A) {
                            if (this.e.isBidCampaign()) {
                                z.a("RVWindVaneWebView", "Tempalte put templeteCache in bidIVCache ");
                                com.mbridge.msdk.videocommon.a.a(com.tkay.expressad.foundation.g.a.aU, this.e.getRequestIdNotice(), this.d);
                            } else {
                                z.a("RVWindVaneWebView", "Tempalte put templeteCache in iVCache ");
                            }
                        } else if (this.e.isBidCampaign()) {
                            z.a("RVWindVaneWebView", "Tempalte put templeteCache in bidRVCache ");
                            com.mbridge.msdk.videocommon.a.a(94, this.e.getRequestIdNotice(), this.d);
                        } else {
                            z.a("RVWindVaneWebView", "Tempalte put templeteCache in rVCache ");
                        }
                    }
                }
            }
            try {
                z.d("RVWindVaneWebView", "CampaignTPL TempalteWindVaneWebviewClient tempalte load SUCCESS ");
                if (this.a != null) {
                    synchronized (this.a) {
                        z.d("RVWindVaneWebView", "CampaignTPL adapter 341");
                        if (this.a != null && this.a.b()) {
                            z.d("RVWindVaneWebView", "CampaignTPL TempalteWindVaneWebviewClient tempalte load  callback success");
                            if (this.a.K != null) {
                                Message messageObtain = Message.obtain();
                                messageObtain.what = 6;
                                z.a("RVWindVaneWebView", "WHAT_ON_RES_LOAD_SUCCESS TPL");
                                messageObtain.obj = this.e;
                                this.a.K.sendMessage(messageObtain);
                                this.a.K.removeMessages(5);
                                this.a = null;
                            }
                        }
                    }
                } else {
                    z.d("RVWindVaneWebView", "CampaignTPL TempalteWindVaneWebviewClient tempalte load SUCCESS  mRewardMVVideoAdapter is null");
                }
            } catch (Throwable th) {
                z.c("RVWindVaneWebView", th.getMessage(), th);
            }
            this.g = true;
        }

        @Override
        public final void a(WebView webView, String str) {
            super.a(webView, str);
            if (this.f) {
                return;
            }
            com.mbridge.msdk.mbjscommon.windvane.h.a().a(webView);
            this.f = true;
        }

        @Override
        public final void a(WebView webView, int i, String str, String str2) {
            super.a(webView, i, str, str2);
            try {
                z.d("RVWindVaneWebView", "CampaignTPL TempalteWindVaneWebviewClient tempalte load failed");
                if (this.a != null) {
                    synchronized (this.a) {
                        z.d("RVWindVaneWebView", "CampaignTPL TempalteWindVaneWebviewClient tempalte load callback failed");
                        d.a(this.a, str, str2);
                        this.a = null;
                    }
                }
            } catch (Throwable th) {
                z.c("RVWindVaneWebView", th.getMessage(), th);
            }
        }
    }

    private static class f extends com.mbridge.msdk.mbjscommon.c.b {
        private d a;
        private WindVaneWebView b;
        private String c;
        private String d;
        private a.a e;
        private CampaignEx f;
        private boolean g;
        private boolean h;
        private c i;
        private Handler j;

        public f(WindVaneWebView windVaneWebView, String str, String str2, a.a aVar, CampaignEx campaignEx, d dVar, c cVar, Handler handler) {
            this.b = windVaneWebView;
            this.c = str;
            this.d = str2;
            this.e = aVar;
            if (dVar != null) {
                this.a = dVar;
            }
            this.f = campaignEx;
            this.i = cVar;
            this.j = handler;
        }

        @Override
        public final void a(WebView webView, int i) {
            Handler handler;
            if (this.h) {
                return;
            }
            c cVar = this.i;
            if (cVar != null && (handler = this.j) != null) {
                handler.removeCallbacks(cVar);
            }
            String str = this.d + "_" + this.c;
            a.a aVar = this.e;
            if (aVar != null) {
                aVar.a(true);
            }
            JSONObject jSONObject = new JSONObject();
            try {
                jSONObject.put("type", 1);
                jSONObject.put("id", str);
                jSONObject.put("unitid", this.d);
            } catch (JSONException e) {
                e.printStackTrace();
            }
            z.a("WindVaneWebView", "Tempalte templete preload readyState state = " + i);
            ResDownloadCheckManager.getInstance().setTemplatePreLoadDone(this.c, true);
            com.mbridge.msdk.videocommon.a.a.a().a(this.d, 1, this.a.B);
            d dVar = this.a;
            if (dVar != null && dVar.A) {
                if (this.f.isBidCampaign()) {
                    z.a("WindVaneWebView", "Tempalte put templeteCache in bidIVCache ");
                    com.mbridge.msdk.videocommon.a.a(com.tkay.expressad.foundation.g.a.aU, this.f.getRequestIdNotice(), this.e);
                } else {
                    z.a("WindVaneWebView", "Tempalte put templeteCache in iVCache ");
                }
            } else if (this.f.isBidCampaign()) {
                z.a("WindVaneWebView", "Tempalte put templeteCache in bidRVCache ");
                com.mbridge.msdk.videocommon.a.a(94, this.f.getRequestIdNotice(), this.e);
            } else {
                z.a("WindVaneWebView", "Tempalte put templeteCache in rVCache ");
            }
            try {
                z.d("WindVaneWebView", "Tempalte TempalteWindVaneWebviewClient tempalte load SUCCESS ");
                if (this.a != null) {
                    synchronized (this.a) {
                        z.d("WindVaneWebView", "Tempalte adapter 341");
                        if (this.a != null && this.a.b()) {
                            z.d("WindVaneWebView", "Tempalte TempalteWindVaneWebviewClient tempalte load  callback success");
                            if (this.a.K != null) {
                                Message messageObtain = Message.obtain();
                                messageObtain.what = 6;
                                z.a("WindVaneWebView", "WHAT_ON_RES_LOAD_SUCCESS Template");
                                messageObtain.obj = this.f;
                                this.a.K.sendMessage(messageObtain);
                                this.a.K.removeMessages(5);
                                this.a = null;
                            }
                        }
                    }
                } else {
                    z.d("WindVaneWebView", "Tempalte TempalteWindVaneWebviewClient tempalte load SUCCESS  mRewardMVVideoAdapter is null");
                }
            } catch (Throwable th) {
                z.c("WindVaneWebView", th.getMessage(), th);
            }
            this.h = true;
        }

        @Override
        public final void a(WebView webView, String str) {
            super.a(webView, str);
            if (this.g) {
                return;
            }
            com.mbridge.msdk.mbjscommon.windvane.h.a().a(webView);
            this.g = true;
        }

        @Override
        public final void a(WebView webView, int i, String str, String str2) {
            super.a(webView, i, str, str2);
            try {
                z.d("WindVaneWebView", "Tempalte TempalteWindVaneWebviewClient tempalte load failed");
                if (this.a != null) {
                    synchronized (this.a) {
                        z.d("WindVaneWebView", "Tempalte TempalteWindVaneWebviewClient tempalte load callback failed");
                        d.a(this.a, str, str2);
                        this.a = null;
                    }
                }
            } catch (Throwable th) {
                z.c("WindVaneWebView", th.getMessage(), th);
            }
        }
    }

    public d(Context context, String str, String str2) {
        try {
            this.j = context.getApplicationContext();
            this.k = str2;
            this.l = str;
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }

    public final void a(com.mbridge.msdk.videocommon.d.c cVar) {
        try {
            this.u = cVar;
            if (cVar == null || cVar.J() * 1000 == com.mbridge.msdk.foundation.same.a.v) {
                return;
            }
            com.mbridge.msdk.foundation.same.a.v = this.u.J() * 1000;
        } catch (Throwable th) {
            z.c("RewardMVVideoAdapter", th.getMessage(), th);
        }
    }

    public final boolean a(List<CampaignEx> list, boolean z, int i) {
        return a(list, z, i, false);
    }

    public final boolean a(List<CampaignEx> list, boolean z, int i, boolean z2) {
        if (list != null && list.size() > 0) {
            CampaignEx campaignEx = list.get(0);
            if (com.mbridge.msdk.videocommon.download.b.getInstance().a(94, this.k, this.B, list.size(), z, i, list, z2)) {
                if (z) {
                    if (campaignEx.isDynamicView()) {
                        return true;
                    }
                    if (campaignEx.getRsIgnoreCheckRule() != null && campaignEx.getRsIgnoreCheckRule().size() > 0) {
                        if (campaignEx.getRsIgnoreCheckRule().contains(3)) {
                            z.b("RewardMVVideoAdapter", "Is not check big template download status");
                            return true;
                        }
                        if (campaignEx.getCMPTEntryUrl().equals(campaignEx.getendcard_url()) && campaignEx.getRsIgnoreCheckRule().contains(2)) {
                            z.b("RewardMVVideoAdapter", "Is not check big template ENDCARD download status");
                            return true;
                        }
                    }
                    if (ResDownloadCheckManager.getInstance().checkPreLoadState(this.k + "_" + campaignEx.getRequestId() + "_" + campaignEx.getCMPTEntryUrl())) {
                        z.a("RewardVideoController", "大模板业务，开始检查大模板预加载情况，大模板预加载成功");
                        return true;
                    }
                } else {
                    if (campaignEx != null && campaignEx.isDynamicView()) {
                        return true;
                    }
                    if (campaignEx.getRsIgnoreCheckRule() != null && campaignEx.getRsIgnoreCheckRule().size() > 0 && campaignEx.getRsIgnoreCheckRule().contains(1)) {
                        z.b("RewardMVVideoAdapter", "Is not check template download status");
                        return true;
                    }
                    if (campaignEx.getRewardTemplateMode() != null && !TextUtils.isEmpty(campaignEx.getRewardTemplateMode().e())) {
                        if (ResDownloadCheckManager.getInstance().checkPreLoadState(this.k + "_" + campaignEx.getRequestId() + "_" + campaignEx.getRewardTemplateMode().e())) {
                            z.a("RewardVideoController", "非大模板业务，存在播放模板，播放模板预加载成功");
                            return true;
                        }
                    } else {
                        z.a("RewardVideoController", "非大模板 没有 template");
                        return true;
                    }
                }
            }
        } else {
            z.a("RewardVideoController", "数据为空");
        }
        return false;
    }

    public final boolean b() {
        CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayListA = com.mbridge.msdk.videocommon.a.a.a().a(this.k, 1, this.B, this.C);
        if (copyOnWriteArrayListA != null && copyOnWriteArrayListA.size() > 0) {
            CampaignEx campaignEx = copyOnWriteArrayListA.get(0);
            int iB = com.mbridge.msdk.videocommon.a.a.a().b(this.k, 1, this.B, this.C);
            if (TextUtils.isEmpty(campaignEx.getCMPTEntryUrl()) || campaignEx.getNscpt() != 1 || copyOnWriteArrayListA.size() >= iB) {
                return a(copyOnWriteArrayListA, !TextUtils.isEmpty(campaignEx.getCMPTEntryUrl()), campaignEx.getNscpt());
            }
            return false;
        }
        z.a("RewardVideoController", "数据库可用的缓存数据条数：0");
        return false;
    }

    public final boolean c() {
        z.a("test_isReay_db", "isRisSpareOfferReady check");
        List<CampaignEx> listC = com.mbridge.msdk.videocommon.a.a.a().c(this.k, 1, this.B, this.C);
        if (listC != null && listC.size() > 0) {
            CampaignEx campaignEx = listC.get(0);
            int iB = com.mbridge.msdk.videocommon.a.a.a().b(this.k, 1, this.B, this.C);
            if (TextUtils.isEmpty(campaignEx.getCMPTEntryUrl()) || campaignEx.getNscpt() != 1 || listC.size() >= iB) {
                return a(listC, !TextUtils.isEmpty(campaignEx.getCMPTEntryUrl()), campaignEx.getNscpt());
            }
            return false;
        }
        z.a("test_isReay_db", "数据库可用的缓存数据条数：0");
        return false;
    }

    public final void a(h hVar, String str, String str2, int i, String str3) {
        try {
            this.s = hVar;
            z.b("RewardMVVideoAdapter", "show 进来");
            if (this.j != null && !ai.a(this.k)) {
                z.b("RewardMVVideoAdapter", "show isReady true 打开播放器页面");
                Intent intent = new Intent(this.j, (Class<?>) MBRewardVideoActivity.class);
                intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
                intent.putExtra(MBRewardVideoActivity.INTENT_UNITID, this.k);
                intent.putExtra(MBridgeConstans.PLACEMENT_ID, this.l);
                intent.putExtra(MBRewardVideoActivity.INTENT_REWARD, str);
                intent.putExtra(MBRewardVideoActivity.INTENT_MUTE, i);
                intent.putExtra(MBRewardVideoActivity.INTENT_ISIV, this.A);
                intent.putExtra(MBRewardVideoActivity.INTENT_ISBID, this.B);
                intent.putExtra(MBRewardVideoActivity.INTENT_EXTRADATA, str3);
                CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayListA = com.mbridge.msdk.videocommon.download.b.getInstance().a(this.k);
                StringBuilder sb = new StringBuilder();
                sb.append("当前展示的Offer requestId");
                boolean z = false;
                sb.append(copyOnWriteArrayListA.get(0).getRequestId());
                z.d("HBOPTIMIZE", sb.toString());
                if (copyOnWriteArrayListA != null && copyOnWriteArrayListA.size() > 0) {
                    z.a("RewardMVVideoAdapter", "可以 show 的数据： " + copyOnWriteArrayListA.size());
                    CampaignEx campaignEx = copyOnWriteArrayListA.get(0);
                    if (campaignEx != null) {
                        this.c = campaignEx.getRequestId();
                    }
                    if (campaignEx != null && !TextUtils.isEmpty(campaignEx.getCMPTEntryUrl())) {
                        z = true;
                    }
                    e();
                } else {
                    z.a("RewardMVVideoAdapter", "可以 show 的数据： 0");
                    if (this.s != null) {
                        this.s.a("load failed");
                        return;
                    }
                }
                intent.putExtra(MBRewardVideoActivity.INTENT_ISBIG_OFFER, z);
                if (this.A) {
                    intent.putExtra(MBRewardVideoActivity.INTENT_IVREWARD_MODETYPE, this.D);
                    intent.putExtra(MBRewardVideoActivity.INTENT_IVREWARD_VALUETYPE, this.E);
                    intent.putExtra(MBRewardVideoActivity.INTENT_IVREWARD_VALUE, this.F);
                }
                if (!TextUtils.isEmpty(str2)) {
                    intent.putExtra(MBRewardVideoActivity.INTENT_USERID, str2);
                }
                RewardUnitCacheManager.getInstance().add(this.l, this.k, this.u);
                this.j.startActivity(intent);
                return;
            }
            if (this.s != null) {
                this.s.a("context or unitid is null");
            }
            z.b("RewardMVVideoAdapter", "show context munitid null");
        } catch (Exception e2) {
            e2.printStackTrace();
            h hVar2 = this.s;
            if (hVar2 != null) {
                hVar2.a("show failed, exception is " + e2.getMessage());
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:23:0x006f  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void e() {
        String strB;
        List<com.mbridge.msdk.foundation.entity.d> listB = com.mbridge.msdk.foundation.db.b.a(com.mbridge.msdk.foundation.controller.a.f().j()).b(this.k, this.c);
        if (listB != null) {
            int size = listB.size();
            String strB2 = com.mbridge.msdk.foundation.same.a.d.b(this.k);
            if (size == 0) {
                return;
            }
            String strC = "";
            try {
                if (size == 1) {
                    if (listB.get(0) != null) {
                        strC = listB.get(0).c();
                        strB = listB.get(0).b();
                    } else {
                        strB = "";
                    }
                } else if (!TextUtils.isEmpty(strB2)) {
                    for (com.mbridge.msdk.foundation.entity.d dVar : listB) {
                        if (dVar != null && strB2.equals(dVar.a())) {
                            strC = dVar.c();
                            strB = dVar.b();
                            break;
                        }
                    }
                    strB = "";
                }
                if (TextUtils.isEmpty(strC) || !strC.equals(this.c)) {
                    return;
                }
                com.mbridge.msdk.foundation.db.b.a(com.mbridge.msdk.foundation.controller.a.f().j()).a(strB2, this.k);
                com.mbridge.msdk.foundation.same.a.d.a(this.k, this.c, strB);
                com.mbridge.msdk.foundation.same.a.d.a(this.k);
            } catch (Exception e2) {
                z.a("RewardMVVideoAdapter", e2.getMessage());
            }
        }
    }

    private void a(String str, boolean z) {
        new Thread(new d(str)).start();
        if (this.K != null) {
            e eVar = new e(str);
            this.v = eVar;
            this.K.postDelayed(eVar, 90000L);
        } else {
            z.b("RewardMVVideoAdapter", "handler 为空 直接load");
            b(str, z);
        }
    }

    public final void d(boolean z) {
        this.L = z;
    }

    public final void a(int i, int i2, boolean z) {
        a(i, i2, z, "", this.I);
    }

    public final void a(int i, int i2, boolean z, String str, boolean z2) {
        this.n = i;
        this.o = i2;
        this.p = z;
        this.I = z2;
        CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList = this.H;
        if (copyOnWriteArrayList != null) {
            copyOnWriteArrayList.clear();
        }
        List<CampaignEx> list = this.O;
        if (list != null) {
            list.clear();
        }
        boolean zA = false;
        this.e = false;
        this.f = false;
        synchronized (this.a) {
            if (this.g) {
                this.g = false;
            }
        }
        this.i = false;
        this.h = false;
        try {
            zA = com.mbridge.msdk.mbjscommon.webEnvCheck.a.a(this.j);
        } catch (Exception unused) {
        }
        if (!zA) {
            c("WebView is not available");
            return;
        }
        if (this.j == null) {
            c("Context is null");
            return;
        }
        if (ai.a(this.k)) {
            c("UnitId is null");
            return;
        }
        if (this.u == null) {
            c("RewardUnitSetting is null");
            return;
        }
        l();
        m();
        z.b("RewardMVVideoAdapter", "load 开始清除过期数据");
        g();
        a(str, z2);
    }

    private void b(String str, boolean z) {
        try {
            if (this.j == null) {
                c("Context is null");
                return;
            }
            if (ai.a(this.k)) {
                c("UnitId is null");
                return;
            }
            if (this.u == null) {
                c("RewardUnitSetting is null");
                return;
            }
            if (TextUtils.isEmpty(str)) {
                if (System.currentTimeMillis() - this.J < this.u.b() * 1000) {
                    c("EXCEPTION_RETURN_EMPTY");
                    return;
                }
            }
            z.b("RewardMVVideoAdapter", "load 开始准备请求参数");
            com.mbridge.msdk.foundation.same.net.g.d dVarF = f();
            if (dVarF == null) {
                z.b("RewardMVVideoAdapter", "load 请求参数为空 load失败");
                c("Load param is null");
                return;
            }
            if (dVarF != null && !TextUtils.isEmpty(str)) {
                dVarF.a("token", str);
            }
            if (this.A) {
                if (this.D == com.mbridge.msdk.foundation.same.a.x || this.D == com.mbridge.msdk.foundation.same.a.w) {
                    dVarF.a("ivrwd", "1");
                } else {
                    dVarF.a("ivrwd", "0");
                }
            }
            com.mbridge.msdk.videocommon.d.c cVarA = com.mbridge.msdk.videocommon.d.b.a().a(com.mbridge.msdk.foundation.controller.a.f().k(), this.k, this.A);
            if (cVarA != null && !TextUtils.isEmpty(cVarA.a())) {
                dVarF.a(com.tkay.expressad.foundation.g.a.am, cVarA.a());
            }
            com.mbridge.msdk.videocommon.d.a aVarB = com.mbridge.msdk.videocommon.d.b.a().b();
            if (aVarB != null && !TextUtils.isEmpty(aVarB.b())) {
                dVarF.a(com.tkay.expressad.foundation.g.a.an, aVarB.b());
            }
            dVarF.a("rw_plus", z ? "1" : "0");
            String strG = ae.g(this.k);
            if (!TextUtils.isEmpty(strG)) {
                dVarF.a(at.j, strG);
            }
            this.M = System.currentTimeMillis();
            try {
                com.mbridge.msdk.reward.b.a.a(null, this.j, "start load offer from server", this.k, this.B, "", "", System.currentTimeMillis() - this.M);
            } catch (Exception unused) {
            }
            com.mbridge.msdk.reward.c.b bVar = new com.mbridge.msdk.reward.c.b(this.j);
            com.mbridge.msdk.reward.c.a aVar = new com.mbridge.msdk.reward.c.a() {
                @Override
                public final void a(CampaignUnit campaignUnit) {
                    try {
                        z.b("RewardMVVideoAdapter", "onLoadCompaginSuccess 数据刚请求回来");
                        z.b("HBOPTIMIZE", "V3 数据刚请求回来 requestId " + campaignUnit.getRequestId());
                        if (campaignUnit != null && campaignUnit.getAds() != null && campaignUnit.getAds().size() > 0) {
                            try {
                                CampaignEx campaignEx = campaignUnit.getAds().get(0);
                                Context context = d.this.j;
                                StringBuilder sb = new StringBuilder();
                                sb.append("load offer success tpl ");
                                sb.append(!TextUtils.isEmpty(campaignUnit.getAds().get(0).getCMPTEntryUrl()));
                                com.mbridge.msdk.reward.b.a.a(campaignEx, context, sb.toString(), d.this.k, d.this.B, "", "", System.currentTimeMillis() - d.this.M);
                            } catch (Exception unused2) {
                            }
                        }
                        d.a(d.this, campaignUnit);
                        d.this.b = campaignUnit.getRequestId();
                    } catch (Exception e2) {
                        if (MBridgeConstans.DEBUG) {
                            e2.printStackTrace();
                        }
                        z.b("RewardMVVideoAdapter", "onLoadCompaginSuccess 数据刚请求失败");
                        if (d.this.H != null) {
                            d.this.H.clear();
                        }
                        if (d.this.O != null) {
                            d.this.O.clear();
                        }
                        d.this.e = false;
                        d.this.f = false;
                        synchronized (d.this.a) {
                            if (d.this.g) {
                                d.this.g = false;
                            }
                            d.this.i = false;
                            d.this.h = false;
                            try {
                                com.mbridge.msdk.reward.b.a.a(null, d.this.j, "load offer failed: " + e2.getMessage(), d.this.k, d.this.B, "", "", System.currentTimeMillis() - d.this.M);
                            } catch (Exception unused3) {
                            }
                            d.this.c("exception after load success");
                            d.this.i();
                        }
                    }
                }

                @Override
                public final void a(int i, String str2) {
                    z.d("RewardMVVideoAdapter", str2);
                    z.b("HBOPTIMIZE", "V3 数据请求失败 errorCode " + i + "errorMsg " + str2);
                    try {
                        com.mbridge.msdk.reward.b.a.a(null, d.this.j, "load offer failed: " + str2, d.this.k, d.this.B, "", "", System.currentTimeMillis() - d.this.M);
                    } catch (Exception unused2) {
                    }
                    z.b("RewardMVVideoAdapter", "onLoadCompaginFailed load failed errorCode:" + i + " msg:" + str2);
                    if (i == -1) {
                        d.this.J = System.currentTimeMillis();
                    }
                    if (d.this.H != null) {
                        d.this.H.clear();
                    }
                    if (d.this.O != null) {
                        d.this.O.clear();
                    }
                    d.this.e = false;
                    d.this.f = false;
                    synchronized (d.this.a) {
                        if (d.this.g) {
                            d.this.g = false;
                        }
                    }
                    d.this.i = false;
                    d.this.h = false;
                    d.this.c(str2);
                    d.this.i();
                }
            };
            aVar.a(str);
            aVar.setUnitId(this.k);
            aVar.setPlacementId(this.l);
            aVar.setAdType(this.A ? com.tkay.expressad.foundation.g.a.aU : 94);
            int iX = com.mbridge.msdk.foundation.same.a.N;
            int iY = com.mbridge.msdk.foundation.same.a.O;
            int iZ = com.mbridge.msdk.foundation.same.a.M;
            int iA = com.mbridge.msdk.foundation.same.a.S;
            try {
                com.mbridge.msdk.c.a aVarG = com.mbridge.msdk.c.b.a().g(com.mbridge.msdk.foundation.controller.a.f().k());
                if (aVarG != null) {
                    iX = aVarG.x();
                    iY = aVarG.y();
                    iZ = aVarG.z();
                    iA = aVarG.A();
                }
            } catch (Exception unused2) {
            }
            bVar.choiceV3OrV5BySetting(1, dVarF, aVar, str, new com.mbridge.msdk.foundation.same.net.b(iZ, iX, iY, this.o * 1000, iA, 4));
        } catch (Exception e2) {
            e2.printStackTrace();
            c("Load exception");
            i();
        }
    }

    private void c(String str) {
        if (this.K != null) {
            if (TextUtils.isEmpty(str)) {
                this.K.sendEmptyMessage(4);
                return;
            }
            Message messageObtain = Message.obtain();
            messageObtain.what = 4;
            messageObtain.obj = str;
            if (str.contains(com.tkay.expressad.foundation.d.f.i)) {
                this.K.sendMessageAtFrontOfQueue(messageObtain);
            } else {
                this.K.sendMessage(messageObtain);
            }
        }
    }

    private com.mbridge.msdk.foundation.same.net.g.d f() {
        int iU;
        String strK = com.mbridge.msdk.foundation.controller.a.f().k();
        String md5 = SameMD5.getMD5(com.mbridge.msdk.foundation.controller.a.f().k() + com.mbridge.msdk.foundation.controller.a.f().l());
        int i = this.p ? 2 : 3;
        com.mbridge.msdk.videocommon.d.c cVar = this.u;
        int iT = 0;
        if (cVar != null) {
            iT = cVar.t();
            iU = this.u.u();
        } else {
            iU = 0;
        }
        String str = this.r;
        String str2 = this.q;
        String strA = com.mbridge.msdk.foundation.same.a.d.a(this.k, "reward");
        String strK2 = k();
        this.m = h();
        String strJ = j();
        int i2 = this.n;
        int i3 = this.A ? com.tkay.expressad.foundation.g.a.aU : 94;
        com.mbridge.msdk.foundation.same.net.g.d dVar = new com.mbridge.msdk.foundation.same.net.g.d();
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "app_id", strK);
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "unit_id", this.k);
        if (!TextUtils.isEmpty(this.l)) {
            com.mbridge.msdk.foundation.same.net.f.b.a(dVar, MBridgeConstans.PLACEMENT_ID, this.l);
        }
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "sign", md5);
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "req_type", i + "");
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "ad_num", iT + "");
        StringBuilder sb = new StringBuilder();
        if (this.A) {
            iU = 1;
        }
        sb.append(iU);
        sb.append("");
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "tnum", sb.toString());
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "only_impression", "1");
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "ping_mode", "1");
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "ttc_ids", str2);
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, com.mbridge.msdk.foundation.same.net.g.d.b, strA);
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, com.mbridge.msdk.foundation.same.net.g.d.c, str);
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, d.a.O, strK2);
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "ad_source_id", i2 + "");
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, com.mbridge.msdk.foundation.same.net.g.d.a, strJ);
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "ad_type", i3 + "");
        com.mbridge.msdk.foundation.same.net.f.b.a(dVar, "offset", this.m + "");
        return dVar;
    }

    private void g() {
        if (com.mbridge.msdk.videocommon.a.a.a() != null) {
            try {
                com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
                if (aVarB == null) {
                    aVarB = com.mbridge.msdk.c.b.a().b();
                }
                com.mbridge.msdk.videocommon.a.a.a().a(aVarB.W() * 1000, this.k);
            } catch (Exception e2) {
                if (MBridgeConstans.DEBUG) {
                    e2.printStackTrace();
                }
            }
        }
    }

    @Override
    public final void a(com.mbridge.msdk.reward.adapter.b bVar) {
        if (bVar != null) {
            z.b("RewardMVVideoAdapter", "======set listener is not null");
        } else {
            z.b("RewardMVVideoAdapter", "======set listener is  null");
        }
        this.t = bVar;
    }

    final class 3 implements c.c {
        final boolean a;
        final CampaignEx b;
        final int c;

        3(boolean z, CampaignEx campaignEx, int i) {
            this.a = z;
            this.b = campaignEx;
            this.c = i;
        }

        @Override
        public final void a(final String str, final String str2, final String str3, final CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList) {
            z.a("RewardMVVideoAdapter", "Campaign 下载成功： " + copyOnWriteArrayList.size());
            d.this.e = true;
            if (copyOnWriteArrayList != null && copyOnWriteArrayList.size() > 0) {
                try {
                    com.mbridge.msdk.reward.b.a.a(copyOnWriteArrayList.get(0), d.this.j, "resource download success is tpl :" + this.a, d.this.k, d.this.B, str3, this.b.getRequestIdNotice(), System.currentTimeMillis() - d.this.M);
                } catch (Exception unused) {
                }
            }
            if (!this.a) {
                z.a("RewardMVVideoAdapter", "Campaign 下载成功： 非大模板");
                Iterator<CampaignEx> it = copyOnWriteArrayList.iterator();
                while (it.hasNext()) {
                    final CampaignEx next = it.next();
                    if (next != null && next.getRewardTemplateMode() != null && !TextUtils.isEmpty(next.getRewardTemplateMode().e()) && !next.getRewardTemplateMode().e().contains("cmpt=1") && d.this.K != null) {
                        z.a("RewardMVVideoAdapter", "Campaign 下载成功： 非大模板，开始预加载播放模板");
                        d.this.K.post(new Runnable() {
                            @Override
                            public final void run() {
                                c.m.a.a(d.this.I, d.this.K, d.this.A, d.this.B, null, next.getRewardTemplateMode().e(), d.this.z, 3.this.b, d.this.H, H5DownLoadManager.getInstance().getH5ResAddress(next.getRewardTemplateMode().e()), str, str2, str3, next.getRequestIdNotice(), d.this.u, new c.j() {
                                    @Override
                                    public final void a(String str4, String str5, String str6, String str7, String str8, a.a aVar) {
                                        z.a("RewardMVVideoAdapter", "Campaign 下载成功： 非大模板，播放模板预加载成功");
                                        z.a("HBOPTIMIZE", "模板加载成功 requestId " + str7);
                                        try {
                                            com.mbridge.msdk.reward.b.a.a((CampaignEx) copyOnWriteArrayList.get(0), d.this.j, "preload template success is tpl :" + 3.this.a, d.this.k, d.this.B, str3, 3.this.b.getRequestIdNotice(), System.currentTimeMillis() - d.this.M);
                                        } catch (Exception unused2) {
                                        }
                                        if (d.this.a(d.this.H, 3.this.a, 3.this.c)) {
                                            d.a(d.this, d.this.k, copyOnWriteArrayList, d.this.P, d.this.B);
                                            z.a("RewardMVVideoAdapter", "Campaign 下载成功： 非大模板，播放模板预加载成功,isReay true");
                                            if (d.this.K != null) {
                                                d.this.K.removeMessages(5);
                                            }
                                            if (d.this.t == null || d.this.h) {
                                                return;
                                            }
                                            d.this.h = true;
                                            if (!TextUtils.isEmpty(d.this.k)) {
                                                com.mbridge.msdk.reward.b.a.a(d.this.j, d.this.H, d.this.k, System.currentTimeMillis() - d.this.M);
                                            }
                                            z.a("RewardMVVideoAdapter", "Campaign 下载成功： 非大模板，播放模板预加载成功,isReay true onVideoLoadSuccess");
                                            d.this.t.a();
                                            return;
                                        }
                                        z.a("RewardMVVideoAdapter", "Campaign 下载成功： 非大模板，播放模板预加载成功,isReay false");
                                        d.a(d.this, str6, d.this.O, d.this.B);
                                        if (d.this.K != null) {
                                            d.this.K.removeMessages(5);
                                        }
                                        if (d.this.t == null || d.this.i) {
                                            return;
                                        }
                                        d.this.i = true;
                                        if (!TextUtils.isEmpty(d.this.k) && d.this.H != null && d.this.H.size() > 0) {
                                            com.mbridge.msdk.reward.b.a.a(d.this.j, (CampaignEx) d.this.H.get(0), "temp preload success but isReady false", d.this.k, d.this.B, str7, 3.this.b.getRequestIdNotice());
                                        }
                                        d.this.t.a("errorCode: 3502 errorMessage: temp preload success but isReady false");
                                        z.a("RewardMVVideoAdapter", "Campaign 下载成功： 非大模板，播放模板预加载成功,isReay false onVideoLoadFail");
                                    }

                                    @Override
                                    public final void a(String str4, String str5, String str6, String str7, String str8, a.a aVar, String str9) {
                                        z.a("RewardMVVideoAdapter", "Campaign 下载失败： 非大模板，播放模板预加载失败");
                                        z.d("HBOPTIMIZE", "模板加载失败 requestId " + str7);
                                        try {
                                            com.mbridge.msdk.reward.b.a.a((CampaignEx) copyOnWriteArrayList.get(0), d.this.j, "preload template failed is tpl :" + 3.this.a + " " + str9, d.this.k, d.this.B, str3, 3.this.b.getRequestIdNotice(), System.currentTimeMillis() - d.this.M);
                                        } catch (Exception unused2) {
                                        }
                                        if (3.this.b.getRsIgnoreCheckRule() == null || 3.this.b.getRsIgnoreCheckRule().size() <= 0 || !3.this.b.getRsIgnoreCheckRule().contains(1)) {
                                            d.a(d.this, str6, d.this.O, d.this.B);
                                            if (d.this.K != null) {
                                                d.this.K.removeMessages(5);
                                            }
                                            if (d.this.t == null || d.this.i) {
                                                return;
                                            }
                                            d.this.i = true;
                                            if (!TextUtils.isEmpty(d.this.k) && d.this.O != null && d.this.O.size() > 0) {
                                                com.mbridge.msdk.reward.b.a.a(d.this.j, (CampaignEx) d.this.O.get(0), "temp preload failed: " + str9, d.this.k, d.this.B, str7, 3.this.b.getRequestIdNotice());
                                            }
                                            d.this.t.a("errorCode: 3301 errorMessage: temp preload failed: " + str9);
                                            z.a("RewardMVVideoAdapter", "Campaign 下载失败： 非大模板，播放模板预加载失败 onVideoLoadFail");
                                            return;
                                        }
                                        z.b("RewardMVVideoAdapter", "template preload fail but hit ignoreCheckRule");
                                    }
                                });
                            }
                        });
                    } else {
                        z.a("RewardMVVideoAdapter", "Campaign 下载成功： 非大模板，不存在播放模板");
                        d dVar = d.this;
                        if (dVar.a(dVar.H, this.a, this.c)) {
                            z.a("RewardMVVideoAdapter", "Campaign 下载成功： 非大模板，不存在播放模板,isReay true");
                            z.a("HBOPTIMIZE", "模板加载成功 requestId " + copyOnWriteArrayList.get(0).getRequestId());
                            d dVar2 = d.this;
                            d.a(dVar2, dVar2.k, copyOnWriteArrayList, d.this.P, d.this.B);
                            if (d.this.K != null) {
                                d.this.K.removeMessages(5);
                            }
                            if (d.this.t != null && !d.this.h) {
                                d.this.h = true;
                                if (!TextUtils.isEmpty(d.this.k)) {
                                    com.mbridge.msdk.reward.b.a.a(d.this.j, d.this.H, d.this.k, System.currentTimeMillis() - d.this.M);
                                }
                                d.this.t.a();
                                z.a("RewardMVVideoAdapter", "Campaign 下载成功： 非大模板，播放模板预加载成功,isReay true onVideoLoadSuccess");
                            }
                        } else {
                            z.a("RewardMVVideoAdapter", "Campaign 下载成功： 非大模板，不存在播放模板,isReay false");
                            z.d("HBOPTIMIZE", "模板加载失败 requestId " + copyOnWriteArrayList.get(0).getRequestId());
                            d dVar3 = d.this;
                            d.a(dVar3, str2, dVar3.O, d.this.B);
                            if (d.this.K != null) {
                                d.this.K.removeMessages(5);
                            }
                            if (d.this.t != null && !d.this.i) {
                                d.this.i = true;
                                if (!TextUtils.isEmpty(d.this.k)) {
                                    com.mbridge.msdk.reward.b.a.a(d.this.j, next, "have no temp but isReady false", d.this.k, d.this.B, str3, (next == null || TextUtils.isEmpty(next.getRequestIdNotice())) ? "" : next.getRequestIdNotice());
                                }
                                d.this.t.a("errorCode: 3503 errorMessage: have no temp but isReady false");
                                z.a("RewardMVVideoAdapter", "Campaign 下载成功： 非大模板，不存在播放模板,isReay false onVideoLoadFail");
                            }
                        }
                    }
                }
                return;
            }
            z.a("RewardMVVideoAdapter", "Campaign 下载成功： 大模板");
            if (d.this.f && !d.this.g && d.this.K != null) {
                z.a("RewardMVVideoAdapter", "Campaign 下载成功： 大模板，大模板下载成功，开始预加载大模板");
                synchronized (d.this.a) {
                    if (d.this.g) {
                        return;
                    }
                    d.this.g = true;
                    z.a("test_pre_load_tpl", "Campaign 下载成功，大模板下载成功，开始预加载大模板");
                    d.this.K.post(new Runnable() {
                        @Override
                        public final void run() {
                            c.m.a.a(d.this.I, d.this.K, d.this.A, d.this.B, str3, 3.this.b.getRequestIdNotice(), d.this.l, str2, 3.this.b.getCMPTEntryUrl(), d.this.z, 3.this.b, d.this.H, H5DownLoadManager.getInstance().getH5ResAddress(3.this.b.getCMPTEntryUrl()), str2, d.this.u, new c.j() {
                                @Override
                                public final void a(String str4, String str5, String str6, String str7, String str8, a.a aVar) {
                                    try {
                                        z.a("HBOPTIMIZE", "模板加载成功 requestId " + str7);
                                        com.mbridge.msdk.reward.b.a.a((CampaignEx) copyOnWriteArrayList.get(0), d.this.j, "preload template success is tpl :" + 3.this.a, d.this.k, d.this.B, str3, 3.this.b.getRequestIdNotice(), System.currentTimeMillis() - d.this.M);
                                    } catch (Exception unused2) {
                                    }
                                    z.a("RewardMVVideoAdapter", "Campaign 下载成功： 大模板预加载成功");
                                    if (d.this.a(d.this.H, 3.this.a, 3.this.c)) {
                                        z.a("RewardMVVideoAdapter", "Campaign 下载成功： 大模板预加载成功,isReady true");
                                        d.a(d.this, d.this.k, copyOnWriteArrayList, d.this.P, d.this.B);
                                        if (d.this.K != null) {
                                            d.this.K.removeMessages(5);
                                        }
                                        if (d.this.t == null || d.this.h) {
                                            return;
                                        }
                                        d.this.h = true;
                                        if (!TextUtils.isEmpty(d.this.k)) {
                                            com.mbridge.msdk.reward.b.a.a(d.this.j, d.this.H, d.this.k, System.currentTimeMillis() - d.this.M);
                                        }
                                        d.this.t.a();
                                        z.a("RewardMVVideoAdapter", "Campaign 下载成功： 大模板预加载成功,isReady true onVideoLoadSuccess");
                                        return;
                                    }
                                    z.a("RewardMVVideoAdapter", "Campaign 下载成功： 大模板预加载成功,isReady false");
                                    d.a(d.this, str6, d.this.O, d.this.B);
                                    if (d.this.K != null) {
                                        d.this.K.removeMessages(5);
                                    }
                                    if (d.this.t == null || d.this.i) {
                                        return;
                                    }
                                    d.this.i = true;
                                    if (!TextUtils.isEmpty(d.this.k) && d.this.O != null && d.this.O.size() > 0) {
                                        com.mbridge.msdk.reward.b.a.a(d.this.j, (CampaignEx) d.this.O.get(0), "tpl temp preload success but isReady false", d.this.k, d.this.B, str7, 3.this.b.getRequestIdNotice());
                                    }
                                    d.this.t.a("errorCode: 3505 errorMessage: tpl temp preload success but isReady false");
                                    z.a("RewardMVVideoAdapter", "Campaign 下载成功： 大模板预加载成功,isReady false onVideoLoadFail");
                                }

                                @Override
                                public final void a(String str4, String str5, String str6, String str7, String str8, a.a aVar, String str9) {
                                    z.a("RewardMVVideoAdapter", "Campaign 下载成功： 大模板预加载失败");
                                    z.d("HBOPTIMIZE", "模板加载失败 requestId " + str7);
                                    try {
                                        com.mbridge.msdk.reward.b.a.a((CampaignEx) copyOnWriteArrayList.get(0), d.this.j, "preload template failed is tpl :" + 3.this.a + " " + str9, d.this.k, d.this.B, str3, 3.this.b.getRequestIdNotice(), System.currentTimeMillis() - d.this.M);
                                    } catch (Exception unused2) {
                                    }
                                    if (3.this.b.getRsIgnoreCheckRule() == null || 3.this.b.getRsIgnoreCheckRule().size() <= 0 || !3.this.b.getRsIgnoreCheckRule().contains(3)) {
                                        d.a(d.this, str6, d.this.O, d.this.B);
                                        if (d.this.K != null) {
                                            d.this.K.removeMessages(5);
                                        }
                                        if (d.this.t == null || d.this.i) {
                                            return;
                                        }
                                        d.this.i = true;
                                        if (d.this.O != null && d.this.O.size() > 0) {
                                            com.mbridge.msdk.reward.b.a.a(d.this.j, (CampaignEx) d.this.O.get(0), "tpl temp preload failed: " + str9, d.this.k, d.this.B, str7, 3.this.b.getRequestIdNotice());
                                        }
                                        d.this.t.a("errorCode: 3303 errorMessage: tpl temp preload failed: " + str9);
                                        z.a("RewardMVVideoAdapter", "Campaign 下载成功： 大模板预加载失败 onVideoLoadFail");
                                        return;
                                    }
                                    z.b("RewardMVVideoAdapter", "template download fail but hit ignoreCheckRule");
                                }
                            }, false);
                        }
                    });
                    return;
                }
            }
            z.a("RewardMVVideoAdapter", "Campaign 下载成功： 大模板，大模板下载不成功： isCampaignTPLDownloadSuccess： " + d.this.f + "  isCampaignTPLProLoad： " + d.this.g);
        }

        @Override
        public final void a(String str, final String str2, final String str3, final CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList, final String str4) {
            z.a("RewardMVVideoAdapter", "Campaign 下载失败： " + copyOnWriteArrayList.size());
            z.d("HBOPTIMIZE", "模板加载失败 requestId " + str3);
            d.this.e = false;
            if (copyOnWriteArrayList != null && copyOnWriteArrayList.size() > 0) {
                try {
                    CampaignEx campaignEx = copyOnWriteArrayList.get(0);
                    Context context = d.this.j;
                    StringBuilder sb = new StringBuilder();
                    sb.append("resource download failed: ");
                    try {
                        sb.append(str4);
                        sb.append(" is tpl: ");
                        sb.append(this.a);
                        com.mbridge.msdk.reward.b.a.a(campaignEx, context, sb.toString(), d.this.k, d.this.B, str3, this.b.getRequestIdNotice(), System.currentTimeMillis() - d.this.M);
                    } catch (Exception unused) {
                    }
                } catch (Exception unused2) {
                }
            }
            if (d.this.t == null || d.this.K == null) {
                return;
            }
            d.this.K.post(new Runnable() {
                @Override
                public final void run() {
                    CopyOnWriteArrayList copyOnWriteArrayList2;
                    d.a(d.this, str2, d.this.O, d.this.B);
                    if (d.this.K != null) {
                        d.this.K.removeMessages(5);
                    }
                    if (d.this.i || d.this.t == null) {
                        return;
                    }
                    d.this.i = true;
                    if (!TextUtils.isEmpty(d.this.k) && (copyOnWriteArrayList2 = copyOnWriteArrayList) != null && copyOnWriteArrayList2.size() > 0) {
                        com.mbridge.msdk.reward.b.a.a(d.this.j, (CampaignEx) copyOnWriteArrayList.get(0), "" + str4, d.this.k, d.this.B, str3, 3.this.b.getRequestIdNotice());
                    }
                    d.this.t.a("errorCode: 3201 errorMessage: campaign resource download failed");
                    z.a("RewardMVVideoAdapter", "Campaign 下载失败：onVideoLoadFail");
                }
            });
        }
    }

    final class 5 implements c.i {
        final CampaignEx a;
        final boolean b;
        final int c;

        5(CampaignEx campaignEx, boolean z, int i) {
            this.a = campaignEx;
            this.b = z;
            this.c = i;
        }

        @Override
        public final void a(final String str, final String str2, final String str3, String str4) {
            z.a("RewardMVVideoAdapter", "大模板业务，大模板下载成功");
            try {
                com.mbridge.msdk.reward.b.a.a(this.a, d.this.j, "resource download success is tpl :" + this.b, d.this.k, d.this.B, str3, this.a.getRequestIdNotice(), System.currentTimeMillis() - d.this.M);
            } catch (Exception unused) {
            }
            d.this.f = true;
            if (d.this.e && !d.this.g && d.this.K != null) {
                z.a("RewardMVVideoAdapter", "大模板业务，大模板下载成功，Campaign 下载成功，开始预加载大模板");
                z.a("test_pre_load_tpl", "大模板下载成功，Campaign 下载成功，开始预加载大模板");
                synchronized (d.this.a) {
                    if (d.this.g) {
                        return;
                    }
                    d.this.g = true;
                    d.this.K.post(new Runnable() {
                        @Override
                        public final void run() {
                            c.m.a.a(d.this.I, d.this.K, d.this.A, d.this.B, str3, 5.this.a.getRequestIdNotice(), str, str2, 5.this.a.getCMPTEntryUrl(), d.this.z, 5.this.a, d.this.H, H5DownLoadManager.getInstance().getH5ResAddress(5.this.a.getCMPTEntryUrl()), str2, d.this.u, new c.j() {
                                @Override
                                public final void a(String str5, String str6, String str7, String str8, String str9, a.a aVar) {
                                    z.a("HBOPTIMIZE", "模板加载成功 requestId " + str8);
                                    try {
                                        com.mbridge.msdk.reward.b.a.a(5.this.a, d.this.j, "preload template success is tpl :" + 5.this.b, d.this.k, d.this.B, str3, 5.this.a.getRequestIdNotice(), System.currentTimeMillis() - d.this.M);
                                    } catch (Exception unused2) {
                                    }
                                    if (d.this.a(d.this.H, 5.this.b, 5.this.c)) {
                                        z.a("RewardMVVideoAdapter", "大模板业务，大模板预加载成功，isReady true");
                                        d.a(d.this, d.this.k, d.this.O, d.this.P, d.this.B);
                                        if (d.this.K != null) {
                                            d.this.K.removeMessages(5);
                                        }
                                        if (d.this.t == null || d.this.h) {
                                            return;
                                        }
                                        d.this.h = true;
                                        if (!TextUtils.isEmpty(d.this.k)) {
                                            com.mbridge.msdk.reward.b.a.a(d.this.j, d.this.H, d.this.k, System.currentTimeMillis() - d.this.M);
                                        }
                                        d.this.t.a();
                                        z.a("RewardMVVideoAdapter", "大模板业务，大模板预加载成功，isReady true onVideoLoadSuccess");
                                        return;
                                    }
                                    z.a("RewardMVVideoAdapter", "大模板业务，大模板预加载成功，isReady false");
                                    d.a(d.this, str7, d.this.O, d.this.B);
                                    if (d.this.K != null) {
                                        d.this.K.removeMessages(5);
                                    }
                                    if (d.this.t == null || d.this.i) {
                                        return;
                                    }
                                    d.this.i = true;
                                    if (d.this.O != null && d.this.O.size() > 0) {
                                        com.mbridge.msdk.reward.b.a.a(d.this.j, (CampaignEx) d.this.O.get(0), "tpl temp preload success but isReady false", d.this.k, d.this.B, str8, 5.this.a.getRequestIdNotice());
                                    }
                                    d.this.t.a("errorCode: 3505 errorMessage: tpl temp preload success but isReady false");
                                    z.a("RewardMVVideoAdapter", "大模板业务，大模板预加载成功 isReady false  onVideoLoadFail");
                                }

                                @Override
                                public final void a(String str5, String str6, String str7, String str8, String str9, a.a aVar, String str10) {
                                    z.a("RewardMVVideoAdapter", "大模板业务，大模板预加载失败");
                                    z.d("HBOPTIMIZE", "模板加载失败 requestId " + str8);
                                    d.a(d.this, str7, d.this.O, d.this.B);
                                    try {
                                        com.mbridge.msdk.reward.b.a.a(5.this.a, d.this.j, "preload template failed is tpl :" + 5.this.b + " " + str10, d.this.k, d.this.B, str3, 5.this.a.getRequestIdNotice(), System.currentTimeMillis() - d.this.M);
                                    } catch (Exception unused2) {
                                    }
                                    if (d.this.K != null) {
                                        d.this.K.removeMessages(5);
                                    }
                                    if (d.this.t == null || d.this.i) {
                                        return;
                                    }
                                    d.this.i = true;
                                    if (d.this.O != null && d.this.O.size() > 0) {
                                        com.mbridge.msdk.reward.b.a.a(d.this.j, (CampaignEx) d.this.O.get(0), "tpl temp preload failed: " + str10, d.this.k, d.this.B, str8, 5.this.a.getRequestIdNotice());
                                    }
                                    d.this.t.a("errorCode: 3303 errorMessage: tpl temp preload failed: " + str10);
                                    z.a("RewardMVVideoAdapter", "大模板业务，大模板预加载失败 onVideoLoadFail");
                                }
                            }, false);
                        }
                    });
                    return;
                }
            }
            z.a("RewardMVVideoAdapter", "大模板业务，大模板下载成功，Campaign 下载不成功，isCampaignsDownloadSuccess： " + d.this.e + "  isCampaignTPLProLoad： " + d.this.g);
        }

        @Override
        public final void a(String str, String str2, String str3, String str4, String str5) {
            z.a("RewardMVVideoAdapter", "大模板业务，大模板下载失败");
            z.d("HBOPTIMIZE", "模板加载成功 requestId " + str3);
            if (d.this.O.get(0) != null && d.this.O.size() > 0) {
                try {
                    com.mbridge.msdk.reward.b.a.a((CampaignEx) d.this.O.get(0), d.this.j, "resource download failed: " + str5 + " is tpl: " + this.b, d.this.k, d.this.B, str3, ((CampaignEx) d.this.O.get(0)).getRequestIdNotice(), System.currentTimeMillis() - d.this.M);
                } catch (Exception unused) {
                }
            }
            if (this.a.getRsIgnoreCheckRule() != null && this.a.getRsIgnoreCheckRule().size() > 0) {
                if (this.a.getRsIgnoreCheckRule().contains(3)) {
                    z.b("RewardMVVideoAdapter", "tpl download fail but hit ignoreCheckRule");
                    return;
                } else if (this.a.getCMPTEntryUrl().equals(this.a.getendcard_url()) && this.a.getRsIgnoreCheckRule().contains(2)) {
                    z.b("RewardMVVideoAdapter", "endcard download fail but hit ignoreCheckRule at 3203");
                    return;
                }
            }
            d.this.f = false;
            d dVar = d.this;
            d.a(dVar, str2, dVar.O, d.this.B);
            if (d.this.K != null) {
                d.this.K.removeMessages(5);
            }
            if (d.this.t == null || d.this.i) {
                return;
            }
            d.this.i = true;
            if (d.this.O != null && d.this.O.size() > 0) {
                com.mbridge.msdk.reward.b.a.a(d.this.j, (CampaignEx) d.this.O.get(0), "" + str5, d.this.k, d.this.B, str3, this.a.getRequestIdNotice());
            }
            d.this.t.a("errorCode: 3203 errorMessage: tpl temp resource download failed");
            z.a("RewardMVVideoAdapter", "大模板业务，大模板下载失败 onVideoLoadFail");
        }
    }

    public final void e(boolean z) {
        CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList;
        if (z || (copyOnWriteArrayList = this.H) == null || copyOnWriteArrayList.size() <= 0) {
            return;
        }
        com.mbridge.msdk.videocommon.a.a.a().a(this.k, this.H);
    }

    public final void f(boolean z) {
        if (z) {
            List<CampaignEx> list = this.P;
            if (list == null || list.size() <= 0) {
                return;
            }
            for (CampaignEx campaignEx : this.P) {
                if (campaignEx != null) {
                    campaignEx.setLoadTimeoutState(0);
                    if (campaignEx.getRewardTemplateMode() != null && !TextUtils.isEmpty(campaignEx.getRewardTemplateMode().e())) {
                        ResDownloadCheckManager.getInstance().setTemplatePreLoadDone(this.k + "_" + campaignEx.getRequestId() + "_" + campaignEx.getRewardTemplateMode().e(), false);
                    }
                }
            }
            com.mbridge.msdk.videocommon.a.a.a().a(this.k, this.P, "load_timeout", 0);
            return;
        }
        CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList = this.H;
        if (copyOnWriteArrayList == null || copyOnWriteArrayList.size() <= 0) {
            return;
        }
        for (CampaignEx campaignEx2 : this.H) {
            if (campaignEx2 != null) {
                campaignEx2.setLoadTimeoutState(0);
                if (campaignEx2.getRewardTemplateMode() != null && !TextUtils.isEmpty(campaignEx2.getRewardTemplateMode().e())) {
                    ResDownloadCheckManager.getInstance().setTemplatePreLoadDone(this.k + "_" + campaignEx2.getRequestId() + "_" + campaignEx2.getRewardTemplateMode().e(), false);
                }
            }
        }
        com.mbridge.msdk.videocommon.a.a.a().a(this.k, this.H, "load_timeout", 0);
    }

    public final boolean g(boolean z) {
        if (z) {
            List<CampaignEx> list = this.P;
            if (list == null || list.size() <= 0) {
                return false;
            }
            for (CampaignEx campaignEx : this.P) {
                if (campaignEx != null) {
                    campaignEx.setLoadTimeoutState(1);
                    if (campaignEx.getRewardTemplateMode() != null && !TextUtils.isEmpty(campaignEx.getRewardTemplateMode().e())) {
                        ResDownloadCheckManager.getInstance().setTemplatePreLoadDone(this.k + "_" + campaignEx.getRequestId() + "_" + campaignEx.getRewardTemplateMode().e(), true);
                    }
                }
            }
            com.mbridge.msdk.videocommon.a.a.a().a(this.k, this.P, "load_timeout", 1);
            return true;
        }
        CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList = this.H;
        if (copyOnWriteArrayList == null || copyOnWriteArrayList.size() <= 0) {
            return false;
        }
        for (CampaignEx campaignEx2 : this.H) {
            if (campaignEx2 != null) {
                campaignEx2.setLoadTimeoutState(1);
                if (campaignEx2.getRewardTemplateMode() != null && !TextUtils.isEmpty(campaignEx2.getRewardTemplateMode().e())) {
                    ResDownloadCheckManager.getInstance().setTemplatePreLoadDone(this.k + "_" + campaignEx2.getRequestId() + "_" + campaignEx2.getRewardTemplateMode().e(), true);
                }
            }
        }
        com.mbridge.msdk.videocommon.a.a.a().a(this.k, this.H, "load_timeout", 1);
        return true;
    }

    private void a(String str, List<CampaignEx> list, List<CampaignEx> list2) {
        if (com.mbridge.msdk.videocommon.a.a.a() != null && this.G != null) {
            com.mbridge.msdk.videocommon.a.a.a().b(str);
        }
        if (com.mbridge.msdk.videocommon.a.a.a() != null && this.G != null) {
            com.mbridge.msdk.videocommon.a.a.a().b(str, this.G.getVcn());
        }
        if (list != null && list.size() > 0) {
            z.d("HBOPTIMIZE", "最新返回的数据RequestId " + this.G.getRequestId());
            if (this.G != null && list.get(0) != null) {
                com.mbridge.msdk.reward.a.a.a(this.G.getRequestId(), list.get(0).getBidToken());
            }
            for (CampaignEx campaignEx : list) {
                if (campaignEx != null) {
                    com.mbridge.msdk.foundation.same.a.d.a(campaignEx.getCampaignUnitId(), campaignEx.getRequestId(), campaignEx.getId(), campaignEx.getPlct(), campaignEx.getPlctb(), campaignEx.getTimestamp());
                }
            }
        }
        if (list2 == null || list2.size() <= 0) {
            return;
        }
        for (CampaignEx campaignEx2 : list2) {
            if (campaignEx2 != null) {
                com.mbridge.msdk.foundation.same.a.d.d(campaignEx2.getCampaignUnitId(), campaignEx2.getRequestId());
            }
        }
        com.mbridge.msdk.foundation.same.a.d.a(str);
        com.mbridge.msdk.foundation.db.b.a(com.mbridge.msdk.foundation.controller.a.f().j()).a();
    }

    private void a(CampaignEx campaignEx) {
        try {
            com.mbridge.msdk.videocommon.a.a aVarA = com.mbridge.msdk.videocommon.a.a.a();
            z.a("RewardMVVideoAdapter", "删除 Campaign id： " + campaignEx.getId());
            if (aVarA != null) {
                aVarA.a(campaignEx);
            }
        } catch (Throwable th) {
            z.c("RewardMVVideoAdapter", th.getMessage(), th);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:69:0x015a  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private CopyOnWriteArrayList<CampaignEx> a(CampaignUnit campaignUnit) throws Throwable {
        boolean z;
        String str;
        File file;
        FileOutputStream fileOutputStream;
        CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList = new CopyOnWriteArrayList<>();
        try {
            ae.a((List<CampaignEx>) campaignUnit.getAds());
            if (this.u != null) {
                this.u.u();
            }
            if (campaignUnit != null && campaignUnit.getAds() != null && campaignUnit.getAds().size() > 0) {
                ArrayList<CampaignEx> ads = campaignUnit.getAds();
                this.O = ads;
                if (campaignUnit != null && campaignUnit.getAds() != null && campaignUnit.getAds().size() > 0) {
                    ArrayList<CampaignEx> ads2 = campaignUnit.getAds();
                    for (int i = 0; i < ads2.size(); i++) {
                        CampaignEx campaignEx = ads2.get(i);
                        campaignEx.setCampaignUnitId(this.k);
                        ads2.set(i, campaignEx);
                    }
                }
                for (int i2 = 0; i2 < ads.size() && i2 < Integer.MAX_VALUE; i2++) {
                    CampaignEx campaignEx2 = ads.get(i2);
                    if (campaignEx2.isMraid()) {
                        if (!TextUtils.isEmpty(campaignEx2.getMraid().trim())) {
                            FileOutputStream fileOutputStream2 = null;
                            if (campaignEx2.getAdType() == 287) {
                                str = "3";
                            } else if (campaignEx2.getAdType() == 94) {
                                str = "1";
                            } else {
                                str = campaignEx2.getAdType() == 42 ? "2" : "";
                            }
                            try {
                                try {
                                    String strB = com.mbridge.msdk.foundation.same.b.e.b(com.mbridge.msdk.foundation.same.b.c.g);
                                    String md5 = SameMD5.getMD5(campaignEx2.getMraid());
                                    if (TextUtils.isEmpty(md5)) {
                                        md5 = String.valueOf(System.currentTimeMillis());
                                    }
                                    file = new File(strB, md5.concat(".html"));
                                    fileOutputStream = new FileOutputStream(file);
                                } catch (Exception e2) {
                                    e = e2;
                                }
                            } catch (Throwable th) {
                                th = th;
                            }
                            try {
                                fileOutputStream.write(("<script>" + com.mbridge.msdk.c.b.b.a().b() + "</script>" + campaignEx2.getMraid()).getBytes());
                                fileOutputStream.flush();
                                campaignEx2.setMraid(file.getAbsolutePath());
                                com.mbridge.msdk.foundation.same.report.c.a(campaignEx2, "", this.k, str);
                                fileOutputStream.close();
                            } catch (Exception e3) {
                                e = e3;
                                fileOutputStream2 = fileOutputStream;
                                e.printStackTrace();
                                campaignEx2.setMraid("");
                                com.mbridge.msdk.foundation.same.report.c.a(campaignEx2, e.getMessage(), this.k, str);
                                if (fileOutputStream2 != null) {
                                    fileOutputStream2.close();
                                }
                            } catch (Throwable th2) {
                                th = th2;
                                fileOutputStream2 = fileOutputStream;
                                if (fileOutputStream2 != null) {
                                    fileOutputStream2.close();
                                }
                                throw th;
                            }
                            File file2 = new File(campaignEx2.getMraid());
                            if (!file2.exists() || !file2.isFile() || !file2.canRead()) {
                                c("mraid resource write fail");
                            }
                        }
                    } else if (campaignEx2 != null && campaignEx2.getOfferType() != 99) {
                        if (b(campaignEx2)) {
                            if (ai.a(campaignEx2.getendcard_url()) && TextUtils.isEmpty(campaignEx2.getMraid())) {
                            }
                        } else {
                            z = !ai.a(campaignEx2.getVideoUrlEncode());
                        }
                        if (z) {
                            if (ae.b(campaignEx2)) {
                                campaignEx2.setRtinsType(ae.c(this.j, campaignEx2.getPackageName()) ? 1 : 2);
                            }
                            if (campaignEx2.getWtick() == 1 || !ae.c(this.j, campaignEx2.getPackageName())) {
                                copyOnWriteArrayList.add(campaignEx2);
                            } else if (ae.b(campaignEx2)) {
                                copyOnWriteArrayList.add(campaignEx2);
                            } else {
                                ae.a(this.k, campaignEx2, com.mbridge.msdk.foundation.same.a.E);
                                this.N = com.tkay.expressad.reward.a.d.a;
                            }
                        } else {
                            this.N = "No video campaign";
                        }
                    }
                }
                z.b("RewardMVVideoAdapter", "onload 返回有以下带有视频素材的compaign：" + copyOnWriteArrayList.size());
            }
        } catch (Exception e4) {
            e4.printStackTrace();
        }
        return copyOnWriteArrayList;
    }

    private int h() {
        try {
            int iA = ai.b(this.k) ? com.mbridge.msdk.reward.a.a.a(this.k) : 0;
            if (this.u == null) {
                return 0;
            }
            if (iA > this.u.v()) {
                return 0;
            }
            return iA;
        } catch (Exception e2) {
            e2.printStackTrace();
            return 0;
        }
    }

    private void i() {
        try {
            if (ai.b(this.k)) {
                com.mbridge.msdk.reward.a.a.a(this.k, 0);
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }

    private String j() {
        try {
            return ai.b(com.mbridge.msdk.reward.a.a.a) ? com.mbridge.msdk.reward.a.a.a : "";
        } catch (Exception e2) {
            e2.printStackTrace();
            return "";
        }
    }

    private String k() {
        try {
            JSONArray jSONArray = new JSONArray();
            List<Long> listI = com.mbridge.msdk.foundation.controller.a.f().i();
            if (listI != null && listI.size() > 0) {
                Iterator<Long> it = listI.iterator();
                while (it.hasNext()) {
                    jSONArray.put(it.next().longValue());
                }
            }
            return jSONArray.length() > 0 ? ae.a(jSONArray) : "";
        } catch (Exception e2) {
            e2.printStackTrace();
            return "";
        }
    }

    private void l() {
        try {
            if (com.mbridge.msdk.foundation.same.a.d.a == null || com.mbridge.msdk.foundation.same.a.d.a.size() <= 0) {
                return;
            }
            com.mbridge.msdk.foundation.same.a.d.a.clear();
        } catch (Exception e2) {
            if (MBridgeConstans.DEBUG) {
                e2.printStackTrace();
            }
        }
    }

    private void m() {
        try {
            k.a(i.a(this.j)).a(this.k);
        } catch (Exception e2) {
            if (MBridgeConstans.DEBUG) {
                e2.printStackTrace();
            }
        }
    }

    public class d implements Runnable {
        private String b;

        public d(String str) {
            this.b = str;
        }

        @Override
        public final void run() {
            i iVarA;
            try {
                z.b("RewardMVVideoAdapter", "=====getTtcRunnable 开始获取 mTtcIds:" + d.this.q + "  mExcludes:" + d.this.r);
                if (d.this.j != null && (iVarA = i.a(d.this.j)) != null) {
                    com.mbridge.msdk.foundation.db.c cVarA = com.mbridge.msdk.foundation.db.c.a(iVarA);
                    cVarA.a();
                    d.this.q = cVarA.a(d.this.k);
                }
                d.this.r = ae.b(d.this.j, d.this.k);
                z.b("RewardMVVideoAdapter", "=====getTtcRunnable 获取完毕 mTtcIds:" + d.this.q + "  mExcludes:" + d.this.r);
                if (d.this.x) {
                    z.b("RewardMVVideoAdapter", "=====getTtcRunnable 获取ttcid和excludeids超时 mIsGetTtcExcIdsTimeout：" + d.this.x + " mIsGetTtcExcIdsSuccess:" + d.this.w);
                    return;
                }
                z.b("RewardMVVideoAdapter", "=====getTtcRunnable 获取ttcid和excludeids没有超时 mIsGetTtcExcIdsTimeout:" + d.this.x + " mIsGetTtcExcIdsSuccess:" + d.this.w);
                if (d.this.v != null && d.this.K != null) {
                    z.b("RewardMVVideoAdapter", "=====getTtcRunnable 删除 获取ttcid的超时任务");
                    d.this.K.removeCallbacks(d.this.v);
                }
                d.this.w = true;
                z.b("RewardMVVideoAdapter", "=====getTtcRunnable 给handler发送消息 mTtcIds:" + d.this.q + "  mExcludes:" + d.this.r);
                if (d.this.K != null) {
                    Message messageObtainMessage = d.this.K.obtainMessage();
                    messageObtainMessage.obj = this.b;
                    messageObtainMessage.what = 1;
                    d.this.K.sendMessage(messageObtainMessage);
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    public class e implements Runnable {
        private String b;

        public e(String str) {
            this.b = str;
        }

        @Override
        public final void run() {
            try {
                z.b("RewardMVVideoAdapter", "=====超时task 开始执行 mTtcIds:" + d.this.q + "  RewardMVVideoAdapter.this.mExcludes:" + d.this.r);
                if (d.this.w) {
                    z.b("RewardMVVideoAdapter", "超时task 已经成功获取ttcid excludeids mIsGetTtcExcIdsTimeout:" + d.this.x + " mIsGetTtcExcIdsSuccess:" + d.this.w + "超时task不做处理");
                    return;
                }
                z.b("RewardMVVideoAdapter", "获取ttcid excludeids超时 mIsGetTtcExcIdsTimeout:" + d.this.x + " mIsGetTtcExcIdsSuccess:" + d.this.w);
                d.this.x = true;
                if (d.this.K != null) {
                    Message messageObtainMessage = d.this.K.obtainMessage();
                    messageObtainMessage.obj = this.b;
                    messageObtainMessage.what = 2;
                    d.this.K.sendMessage(messageObtainMessage);
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    private boolean b(CampaignEx campaignEx) {
        if (campaignEx == null) {
            return false;
        }
        try {
            return campaignEx.getPlayable_ads_without_video() == 2;
        } catch (Throwable th) {
            if (!MBridgeConstans.DEBUG) {
                return false;
            }
            th.printStackTrace();
            return false;
        }
    }

    public final void a(List<CampaignEx> list) {
        this.P = list;
    }

    public final CopyOnWriteArrayList<CampaignEx> d() {
        return this.H;
    }

    public final void a(int i, int i2, int i3) {
        this.D = i;
        this.E = i2;
        this.F = i3;
    }

    public final void b(String str) {
        if (this.u != null && TextUtils.isEmpty(str)) {
            int iC = this.u.c() * 1000;
            List<CampaignEx> list = this.P;
            if (list != null && list.size() > 0) {
                if (System.currentTimeMillis() - this.P.get(0).getTimestamp() < iC) {
                    c("hit ltorwc");
                    return;
                }
            }
        }
        b(str, this.I);
    }

    static void a(d dVar, String str, List list, List list2, boolean z) {
        com.mbridge.msdk.foundation.db.f.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j())).a(str, (List<CampaignEx>) list, (List<CampaignEx>) list2, z);
        if (list2 != null && list2.size() > 0) {
            z.a("test_isReay_db", "标记缓存数据 ： " + list2.size());
            Iterator it = list2.iterator();
            while (it.hasNext()) {
                CampaignEx campaignEx = (CampaignEx) it.next();
                if (campaignEx.getRewardTemplateMode() != null && !TextUtils.isEmpty(campaignEx.getRewardTemplateMode().e())) {
                    com.mbridge.msdk.videocommon.a.b(str + "_" + campaignEx.getId() + "_" + campaignEx.getRequestId() + "_" + campaignEx.getRewardTemplateMode().e());
                    com.mbridge.msdk.videocommon.a.b(campaignEx.getAdType(), campaignEx);
                }
            }
        }
        if (z) {
            dVar.a(str, (List<CampaignEx>) list, (List<CampaignEx>) list2);
        }
    }

    static void a(d dVar, String str, List list, boolean z) {
        if (TextUtils.isEmpty(str) || list == null || list.size() <= 0) {
            return;
        }
        z.a("RewardMVVideoAdapter", "删除失败的数据 ： " + list.size());
        com.mbridge.msdk.foundation.db.f.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j())).a(str, (List<CampaignEx>) list, z);
    }

    static void a(d dVar, WindVaneWebView windVaneWebView, String str, CampaignEx campaignEx, List list, String str2, String str3, com.mbridge.msdk.videocommon.d.c cVar, String str4) {
        j jVar;
        try {
            a.a aVar = new a.a();
            WindVaneWebView windVaneWebView2 = new WindVaneWebView(com.mbridge.msdk.foundation.controller.a.f().j());
            aVar.a(windVaneWebView2);
            if (list != null && list.size() > 0) {
                jVar = new j(null, campaignEx, list);
            } else {
                jVar = new j(null, campaignEx);
            }
            j jVar2 = jVar;
            jVar2.a(dVar.z);
            jVar2.a(str3);
            jVar2.a(cVar);
            jVar2.e(dVar.I);
            c cVar2 = dVar.new c(windVaneWebView, str3, campaignEx, list, str2, str3, cVar, dVar.z, dVar);
            windVaneWebView2.setWebViewListener(new f(windVaneWebView, str, str3, aVar, campaignEx, dVar, cVar2, dVar.K));
            windVaneWebView2.setObject(jVar2);
            windVaneWebView2.loadUrl(str2);
            dVar.K.postDelayed(cVar2, 5000L);
        } catch (Exception e2) {
            if (MBridgeConstans.DEBUG) {
                e2.printStackTrace();
            }
        } catch (Throwable th) {
            z.a("RewardMVVideoAdapter", th.getMessage());
        }
    }

    static void a(d dVar, String str, CampaignEx campaignEx, String str2, String str3, com.mbridge.msdk.videocommon.d.c cVar) {
        j jVar;
        try {
            a.a aVar = new a.a();
            WindVaneWebView windVaneWebView = new WindVaneWebView(com.mbridge.msdk.foundation.controller.a.f().j());
            aVar.a(windVaneWebView);
            String strB = com.mbridge.msdk.video.bt.a.c.a().b();
            aVar.a(strB);
            if (dVar.G != null && dVar.G.getAds() != null && dVar.G.getAds().size() > 0) {
                jVar = new j(null, campaignEx, dVar.G.getAds());
            } else {
                jVar = new j(null, campaignEx);
            }
            j jVar2 = jVar;
            jVar2.a(dVar.z);
            jVar2.a(str3);
            jVar2.c(strB);
            jVar2.a(cVar);
            jVar2.e(dVar.I);
            b bVar = dVar.new b(str3, campaignEx, str2, str3, cVar, dVar.z, dVar);
            windVaneWebView.setWebViewListener(new a(str, str3, aVar, campaignEx, dVar, bVar, dVar.K));
            windVaneWebView.setObject(jVar2);
            windVaneWebView.loadUrl(str2);
            dVar.K.postDelayed(bVar, 5000L);
        } catch (Exception e2) {
            if (MBridgeConstans.DEBUG) {
                e2.printStackTrace();
            }
        } catch (Throwable th) {
            z.a("RewardMVVideoAdapter", th.getMessage());
        }
    }

    static void a(d dVar, String str, String str2) {
        try {
            z.d("RewardMVVideoAdapter", "====delCampaignFromDownLoadCampaignListByUrld");
            if (dVar.y != null && !TextUtils.isEmpty(str2)) {
                Iterator<CampaignEx> it = dVar.y.iterator();
                while (true) {
                    if (!it.hasNext()) {
                        break;
                    }
                    CampaignEx next = it.next();
                    if (next != null) {
                        String videoUrlEncode = next.getVideoUrlEncode();
                        if (!TextUtils.isEmpty(videoUrlEncode) && str2.equals(videoUrlEncode)) {
                            dVar.y.remove(next);
                            dVar.a(next);
                            break;
                        }
                        String str3 = next.getendcard_url();
                        if (!TextUtils.isEmpty(str3) && str2.equals(str3)) {
                            dVar.y.remove(next);
                            dVar.a(next);
                            break;
                        }
                        CampaignEx.c rewardTemplateMode = next.getRewardTemplateMode();
                        if (rewardTemplateMode != null) {
                            List<CampaignEx.c.a> listF = rewardTemplateMode.f();
                            if (listF != null) {
                                Iterator<CampaignEx.c.a> it2 = listF.iterator();
                                while (true) {
                                    if (!it2.hasNext()) {
                                        break;
                                    }
                                    CampaignEx.c.a next2 = it2.next();
                                    if (next2 != null && next2.b != null && next2.b.contains(str2)) {
                                        dVar.y.remove(next);
                                        dVar.a(next);
                                        break;
                                    }
                                }
                            }
                            String strE = rewardTemplateMode.e();
                            if (!TextUtils.isEmpty(strE) && str2.equals(strE)) {
                                dVar.y.remove(next);
                                dVar.a(next);
                                break;
                            }
                        } else {
                            continue;
                        }
                    }
                }
                if (dVar.t == null || dVar.y == null || dVar.y.size() != 0) {
                    return;
                }
                if (dVar.K != null) {
                    dVar.K.removeMessages(5);
                }
                z.d("RewardMVVideoAdapter", "====del campaign and callback failed");
                dVar.c(str);
                dVar.t.a(str);
                return;
            }
            if (dVar.t != null) {
                if (dVar.K != null) {
                    dVar.K.removeMessages(5);
                }
                z.d("RewardMVVideoAdapter", "====del campaign and callback failed");
                dVar.c(str);
                dVar.t.a(str);
            }
        } catch (Throwable th) {
            z.c("RewardMVVideoAdapter", th.getMessage(), th);
            try {
                if (dVar.t != null) {
                    if (dVar.K != null) {
                        dVar.K.removeMessages(5);
                    }
                    z.d("RewardMVVideoAdapter", "====del campaign and callback failed");
                    dVar.c(str);
                }
            } catch (Throwable th2) {
                z.c("RewardMVVideoAdapter", th2.getMessage(), th2);
            }
        }
    }

    static void a(d dVar, final CampaignUnit campaignUnit) {
        dVar.G = campaignUnit;
        z.a("RewardMVVideoAdapter", "Campaign 请求成功： " + campaignUnit.getAds().size() + " 条");
        dVar.H = dVar.a(campaignUnit);
        try {
            CampaignEx campaignEx = campaignUnit.getAds().get(0);
            Context context = dVar.j;
            StringBuilder sb = new StringBuilder();
            sb.append("start download resource tpl ");
            sb.append(!TextUtils.isEmpty(campaignUnit.getAds().get(0).getCMPTEntryUrl()));
            com.mbridge.msdk.reward.b.a.a(campaignEx, context, sb.toString(), dVar.k, dVar.B, "", "", System.currentTimeMillis() - dVar.M);
        } catch (Exception unused) {
        }
        CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList = dVar.H;
        com.mbridge.msdk.foundation.same.f.b.a().execute(new Runnable() {
            @Override
            public final void run() {
                z.b("RewardMVVideoAdapter", "在子线程处理业务逻辑 开始");
                l.a(i.a(d.this.j)).b();
                CampaignUnit campaignUnit2 = campaignUnit;
                if (campaignUnit2 != null && campaignUnit2.getAds() != null && campaignUnit.getAds().size() > 0) {
                    d.a(d.this, campaignUnit.getAds());
                }
                z.b("RewardMVVideoAdapter", "在子线程处理业务逻辑 完成");
            }
        });
        CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList2 = dVar.H;
        if (copyOnWriteArrayList2 != null && copyOnWriteArrayList2.size() > 0) {
            z.b("RewardMVVideoAdapter", "onload load成功 size:" + dVar.H.size());
            Handler handler = dVar.K;
            if (handler != null) {
                handler.sendEmptyMessage(3);
            }
            if (campaignUnit != null) {
                String sessionId = campaignUnit.getSessionId();
                if (ai.b(sessionId)) {
                    z.b("RewardMVVideoAdapter", "onload sessionId:" + sessionId);
                    com.mbridge.msdk.reward.a.a.a = sessionId;
                }
            }
            CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList3 = dVar.H;
            if (copyOnWriteArrayList3 != null) {
                try {
                    if (copyOnWriteArrayList3.size() > 0) {
                        dVar.m += copyOnWriteArrayList3.size();
                    }
                } catch (Exception e2) {
                    e2.printStackTrace();
                }
            }
            if (dVar.u == null || dVar.m > dVar.u.v()) {
                z.b("RewardMVVideoAdapter", "onload 重置offset为0");
                dVar.m = 0;
            }
            z.b("RewardMVVideoAdapter", "onload 算出 下次的offset是:" + dVar.m);
            if (ai.b(dVar.k)) {
                com.mbridge.msdk.reward.a.a.a(dVar.k, dVar.m);
            }
            CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList4 = dVar.H;
            if (copyOnWriteArrayList4 != null && copyOnWriteArrayList4.size() > 0) {
                z.b("RewardMVVideoAdapter", "#######onload 把广告存在本地 size:" + dVar.H.size());
                String str = dVar.l;
                String str2 = dVar.k;
                CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList5 = dVar.H;
                if (com.mbridge.msdk.videocommon.a.a.a() != null) {
                    com.mbridge.msdk.videocommon.a.a.a().a(str, str2, copyOnWriteArrayList5);
                }
            }
            final CampaignEx campaignEx2 = dVar.H.get(0);
            final boolean z = !TextUtils.isEmpty(campaignEx2.getCMPTEntryUrl());
            final int nscpt = campaignEx2.getNscpt();
            dVar.e = false;
            dVar.f = false;
            synchronized (dVar.a) {
                if (dVar.g) {
                    dVar.g = false;
                }
            }
            dVar.i = false;
            dVar.h = false;
            if (dVar.B && campaignEx2 != null) {
                com.mbridge.msdk.foundation.db.b.a(com.mbridge.msdk.foundation.controller.a.f().j()).a(campaignEx2.getBidToken(), campaignEx2.getCampaignUnitId(), campaignEx2.getEncryptPrice());
            }
            c.m.a.a(dVar.j, z, nscpt, dVar.B, dVar.A ? com.tkay.expressad.foundation.g.a.aU : 94, dVar.l, dVar.k, campaignEx2.getRequestId(), dVar.H, dVar.new 3(z, campaignEx2, nscpt), new c.i() {
                @Override
                public final void a(String str3, String str4, String str5, String str6) {
                    z.a("RewardMVVideoAdapter", "template 下载成功： ");
                }

                @Override
                public final void a(String str3, final String str4, final String str5, String str6, final String str7) {
                    z.a("RewardMVVideoAdapter", "template 下载失败： ");
                    if (!z && d.this.t != null && d.this.K != null) {
                        z.a("RewardMVVideoAdapter", "播放模板下载失败，非大模板");
                        try {
                            com.mbridge.msdk.reward.b.a.a(campaignEx2, d.this.j, "resource download failed: " + str7 + " is tpl: " + z, d.this.k, d.this.B, str5, campaignEx2.getRequestIdNotice(), System.currentTimeMillis() - d.this.M);
                        } catch (Exception unused2) {
                        }
                        if (campaignEx2.getRsIgnoreCheckRule() == null || campaignEx2.getRsIgnoreCheckRule().size() <= 0 || !campaignEx2.getRsIgnoreCheckRule().contains(1)) {
                            d.this.K.post(new Runnable() {
                                @Override
                                public final void run() {
                                    d.a(d.this, str4, d.this.O, d.this.B);
                                    if (d.this.K != null) {
                                        d.this.K.removeMessages(5);
                                    }
                                    if (d.this.i || d.this.t == null) {
                                        return;
                                    }
                                    d.this.i = true;
                                    if (d.this.O != null && d.this.O.size() > 0) {
                                        com.mbridge.msdk.reward.b.a.a(d.this.j, (CampaignEx) d.this.O.get(0), "" + str7, d.this.k, d.this.B, str5, campaignEx2.getRequestIdNotice());
                                    }
                                    d.this.t.a("errorCode: 3202 errorMessage: temp resource download failed");
                                    z.a("RewardMVVideoAdapter", "播放模板下载失败，非大模板 onVideoLoadFail");
                                }
                            });
                            return;
                        } else {
                            z.b("RewardMVVideoAdapter", "template download fail but hit ignoreCheckRule");
                            return;
                        }
                    }
                    if (nscpt == 1) {
                        if (campaignEx2.getRsIgnoreCheckRule() != null && campaignEx2.getRsIgnoreCheckRule().size() > 0) {
                            if (campaignEx2.getRsIgnoreCheckRule().contains(3)) {
                                z.b("RewardMVVideoAdapter", "tpl download fail but hit ignoreCheckRule");
                                return;
                            } else if (campaignEx2.getCMPTEntryUrl().equals(campaignEx2.getendcard_url()) && campaignEx2.getRsIgnoreCheckRule().contains(2)) {
                                z.b("RewardMVVideoAdapter", "endcard download fail but hit ignoreCheckRule at 3203");
                                return;
                            }
                        }
                        if (d.this.t == null || d.this.K == null) {
                            return;
                        }
                        d.this.K.post(new Runnable() {
                            @Override
                            public final void run() {
                                d.a(d.this, str4, d.this.O, d.this.B);
                                if (d.this.K != null) {
                                    d.this.K.removeMessages(5);
                                }
                                if (d.this.i || d.this.t == null) {
                                    return;
                                }
                                d.this.i = true;
                                if (d.this.O != null && d.this.O.size() > 0) {
                                    com.mbridge.msdk.reward.b.a.a(d.this.j, (CampaignEx) d.this.O.get(0), "tpl temp resource download failed", d.this.k, d.this.B, str5, campaignEx2.getRequestIdNotice());
                                }
                                d.this.t.a("errorCode: 3203 errorMessage: tpl temp resource download failed");
                                z.a("RewardMVVideoAdapter", "播放模板下载失败，大模板，nscpt 1 onVideoLoadFail");
                            }
                        });
                    }
                }
            });
            if (z) {
                c.m.a.a(dVar.j, campaignEx2, dVar.l, dVar.k, campaignEx2.getRequestId(), dVar.new 5(campaignEx2, z, nscpt));
                return;
            }
            return;
        }
        z.b("RewardMVVideoAdapter", "onload load失败 返回的compaign 没有带视频素材");
        if (TextUtils.isEmpty(dVar.N)) {
            dVar.N = com.tkay.expressad.reward.a.d.a;
        }
        dVar.c(dVar.N);
    }

    static void a(d dVar, List list) {
        z.b("RewardMVVideoAdapter", "onload 开始 更新本机已安装广告列表");
        if (dVar.j == null || list == null || list.size() == 0) {
            z.b("RewardMVVideoAdapter", "onload 列表为空 不做更新本机已安装广告列表");
            return;
        }
        l lVarA = l.a(i.a(dVar.j));
        boolean z = false;
        for (int i = 0; i < list.size(); i++) {
            CampaignEx campaignEx = (CampaignEx) list.get(i);
            if (campaignEx != null) {
                if (ae.c(dVar.j, campaignEx.getPackageName())) {
                    if (com.mbridge.msdk.foundation.controller.a.e() != null) {
                        com.mbridge.msdk.foundation.controller.a.e().add(new com.mbridge.msdk.foundation.entity.i(campaignEx.getId(), campaignEx.getPackageName()));
                        z = true;
                    }
                } else if (lVarA != null && !lVarA.a(campaignEx.getId())) {
                    com.mbridge.msdk.foundation.entity.h hVar = new com.mbridge.msdk.foundation.entity.h();
                    hVar.a(campaignEx.getId());
                    hVar.a(campaignEx.getFca());
                    hVar.b(campaignEx.getFcb());
                    hVar.d(0);
                    hVar.c(0);
                    hVar.a(System.currentTimeMillis());
                    lVarA.a(hVar);
                }
            }
        }
        if (z) {
            z.b("RewardMVVideoAdapter", "更新安装列表");
            com.mbridge.msdk.foundation.controller.a.f().h();
        }
    }
}
