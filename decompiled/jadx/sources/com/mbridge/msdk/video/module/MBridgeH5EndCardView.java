package com.mbridge.msdk.video.module;

import android.app.Activity;
import android.content.Context;
import android.content.res.Configuration;
import android.graphics.drawable.ColorDrawable;
import android.net.Uri;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.Base64;
import android.util.DisplayMetrics;
import android.view.View;
import android.view.ViewGroup;
import android.webkit.WebView;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import com.huawei.hms.framework.common.ContainerUtils;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.click.h;
import com.mbridge.msdk.foundation.download.download.H5DownLoadManager;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.p;
import com.mbridge.msdk.foundation.tools.ad;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.ai;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView;
import com.mbridge.msdk.out.Campaign;
import com.mbridge.msdk.video.js.g;
import com.mbridge.msdk.widget.FeedBackButton;
import com.tkay.expressad.atsignalcommon.mraid.CallMraidJS;
import com.tkay.expressad.foundation.d.r;
import java.io.File;
import java.util.HashMap;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class MBridgeH5EndCardView extends MBridgeBaseView implements h, com.mbridge.msdk.mbjscommon.mraid.b, g {
    private boolean A;
    private int B;
    private int C;
    private boolean D;
    private boolean E;
    private int F;
    private long G;
    private boolean H;
    private boolean I;
    private boolean J;
    private boolean K;
    private boolean L;
    private boolean M;
    private boolean N;
    private boolean O;
    private String P;
    private com.mbridge.msdk.video.js.factory.b Q;
    private boolean R;
    private boolean S;
    protected View n;
    protected RelativeLayout o;
    protected ImageView p;
    protected WindVaneWebView q;
    protected Handler r;
    protected String s;
    protected boolean t;
    protected boolean u;
    protected String v;
    Handler w;
    boolean x;
    private FeedBackButton y;
    private boolean z;

    @Override // com.mbridge.msdk.mbjscommon.mraid.b
    public void expand(String str, boolean z) {
    }

    public void install(CampaignEx campaignEx) {
    }

    public void readyStatus(int i) {
    }

    public MBridgeH5EndCardView(Context context) {
        super(context);
        this.z = false;
        this.r = new Handler();
        this.t = false;
        this.u = false;
        this.A = false;
        this.B = 1;
        this.C = 1;
        this.D = false;
        this.E = false;
        this.F = 1;
        this.G = 0L;
        this.H = false;
        this.I = false;
        this.J = false;
        this.K = false;
        this.L = false;
        this.M = false;
        this.N = false;
        this.O = false;
        this.P = "";
        this.w = new Handler(Looper.getMainLooper()) { // from class: com.mbridge.msdk.video.module.MBridgeH5EndCardView.1
            @Override // android.os.Handler
            public final void handleMessage(Message message) {
                super.handleMessage(message);
                if (message.what != 100) {
                    return;
                }
                if (MBridgeH5EndCardView.this.H) {
                    MBridgeH5EndCardView.this.e.a(122, "");
                }
                MBridgeH5EndCardView.this.e.a(103, "");
            }
        };
        this.R = false;
        this.S = false;
        this.x = false;
    }

    public MBridgeH5EndCardView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.z = false;
        this.r = new Handler();
        this.t = false;
        this.u = false;
        this.A = false;
        this.B = 1;
        this.C = 1;
        this.D = false;
        this.E = false;
        this.F = 1;
        this.G = 0L;
        this.H = false;
        this.I = false;
        this.J = false;
        this.K = false;
        this.L = false;
        this.M = false;
        this.N = false;
        this.O = false;
        this.P = "";
        this.w = new Handler(Looper.getMainLooper()) { // from class: com.mbridge.msdk.video.module.MBridgeH5EndCardView.1
            @Override // android.os.Handler
            public final void handleMessage(Message message) {
                super.handleMessage(message);
                if (message.what != 100) {
                    return;
                }
                if (MBridgeH5EndCardView.this.H) {
                    MBridgeH5EndCardView.this.e.a(122, "");
                }
                MBridgeH5EndCardView.this.e.a(103, "");
            }
        };
        this.R = false;
        this.S = false;
        this.x = false;
    }

    @Override // com.mbridge.msdk.video.module.MBridgeBaseView
    public void onSelfConfigurationChanged(Configuration configuration) {
        super.onSelfConfigurationChanged(configuration);
        orientation(configuration);
    }

    @Override // com.mbridge.msdk.video.module.MBridgeBaseView
    public void init(Context context) {
        int iFindLayout = findLayout("mbridge_reward_endcard_h5");
        if (iFindLayout >= 0) {
            View viewInflate = this.c.inflate(iFindLayout, (ViewGroup) null);
            this.n = viewInflate;
            try {
                this.p = (ImageView) viewInflate.findViewById(findID("mbridge_windwv_close"));
                this.o = (RelativeLayout) viewInflate.findViewById(findID("mbridge_windwv_content_rl"));
                this.q = new WindVaneWebView(getContext());
                this.q.setLayoutParams(new RelativeLayout.LayoutParams(-1, -1));
                this.o.addView(this.q);
                this.f = isNotNULL(this.p, this.q);
            } catch (Exception unused) {
                this.f = false;
            }
            addView(this.n, b());
            c();
            e();
        }
    }

    @Override // com.mbridge.msdk.video.module.MBridgeBaseView
    protected final void c() {
        super.c();
        if (this.f) {
            this.p.setOnClickListener(new View.OnClickListener() { // from class: com.mbridge.msdk.video.module.MBridgeH5EndCardView.2
                @Override // android.view.View.OnClickListener
                public final void onClick(View view) {
                    MBridgeH5EndCardView.this.onCloseViewClick();
                }
            });
        }
    }

    public void onCloseViewClick() {
        try {
            if (this.q != null) {
                com.mbridge.msdk.mbjscommon.windvane.h.a().a((WebView) this.q, "onSystemDestory", "");
                new Thread(new a(this)).start();
            } else {
                this.e.a(103, "");
                this.e.a(119, "webview is null when closing webview");
            }
        } catch (Exception e2) {
            this.e.a(103, "");
            this.e.a(119, "close webview exception" + e2.getMessage());
            z.a(MBridgeBaseView.TAG, e2.getMessage());
        }
    }

    private class a implements Runnable {
        private MBridgeH5EndCardView b;

        public a(MBridgeH5EndCardView mBridgeH5EndCardView) {
            this.b = mBridgeH5EndCardView;
        }

        @Override // java.lang.Runnable
        public final void run() {
            try {
                Thread.sleep(300L);
            } catch (InterruptedException e) {
                z.d("CloseRunnable", e.getMessage());
            }
            MBridgeH5EndCardView mBridgeH5EndCardView = this.b;
            if (mBridgeH5EndCardView == null || mBridgeH5EndCardView.w == null) {
                return;
            }
            this.b.w.sendEmptyMessage(100);
        }
    }

    public void setError(boolean z) {
        this.u = z;
    }

    /* JADX WARN: Removed duplicated region for block: B:46:0x0112  */
    /* JADX WARN: Removed duplicated region for block: B:48:0x0115 A[Catch: all -> 0x0136, TryCatch #0 {all -> 0x0136, blocks: (B:15:0x0073, B:17:0x0095, B:19:0x009b, B:22:0x00a3, B:24:0x00a9, B:26:0x00b6, B:28:0x00be, B:30:0x00c1, B:32:0x00c5, B:34:0x00cd, B:36:0x00d5, B:38:0x00db, B:40:0x00e2, B:48:0x0115, B:49:0x012d, B:41:0x0102, B:43:0x0107, B:45:0x010d), top: B:61:0x0073 }] */
    /* JADX WARN: Removed duplicated region for block: B:49:0x012d A[Catch: all -> 0x0136, TRY_LEAVE, TryCatch #0 {all -> 0x0136, blocks: (B:15:0x0073, B:17:0x0095, B:19:0x009b, B:22:0x00a3, B:24:0x00a9, B:26:0x00b6, B:28:0x00be, B:30:0x00c1, B:32:0x00c5, B:34:0x00cd, B:36:0x00d5, B:38:0x00db, B:40:0x00e2, B:48:0x0115, B:49:0x012d, B:41:0x0102, B:43:0x0107, B:45:0x010d), top: B:61:0x0073 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void preLoadData(com.mbridge.msdk.video.js.factory.b r10) {
        /*
            Method dump skipped, instruction units count: 406
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.video.module.MBridgeH5EndCardView.preLoadData(com.mbridge.msdk.video.js.factory.b):void");
    }

    public void reportRenderResult(String str, int i) {
        if (this.b == null || this.u) {
            return;
        }
        p pVar = new p();
        pVar.k(this.b.getRequestId());
        pVar.l(this.b.getRequestIdNotice());
        pVar.n(this.b.getId());
        pVar.d(i);
        pVar.q(String.valueOf(System.currentTimeMillis() - this.G));
        pVar.p(str);
        String str2 = "2";
        if (this.b.getAdType() == 287) {
            pVar.h("3");
        } else if (this.b.getAdType() == 94) {
            pVar.h("1");
        } else if (this.b.getAdType() == 42) {
            pVar.h("2");
        }
        if (this.b.isMraid()) {
            pVar.a(p.f3396a);
        } else {
            pVar.f(this.b.getendcard_url());
            if (ai.b(this.b.getendcard_url()) && this.b.getendcard_url().contains(".zip")) {
                str2 = "1";
            }
            pVar.g(str2);
            pVar.a(p.b);
        }
        com.mbridge.msdk.foundation.same.report.c.b(pVar, this.v);
    }

    public void startCounterEndCardShowTimer() {
        try {
            String str = this.b.getendcard_url();
            int iA = 15;
            if (ai.b(str) && str.contains("wfl=1")) {
                String[] strArrSplit = str.split("&");
                if (strArrSplit != null && strArrSplit.length > 0) {
                    for (String str2 : strArrSplit) {
                        if (ai.b(str2) && str2.contains("timeout") && str2.split(ContainerUtils.KEY_VALUE_DELIMITER) != null && str2.split(ContainerUtils.KEY_VALUE_DELIMITER).length > 0) {
                            iA = ae.a((Object) str2.split(ContainerUtils.KEY_VALUE_DELIMITER)[1]);
                            z.b(MBridgeBaseView.TAG, "从url获取的wfl timeout :" + iA);
                        }
                    }
                }
                executeEndCardShow(iA);
            }
        } catch (Throwable th) {
            z.a(MBridgeBaseView.TAG, th.getMessage());
        }
    }

    @Override // com.mbridge.msdk.video.module.MBridgeBaseView
    public void defaultShow() {
        super.defaultShow();
    }

    @Override // com.mbridge.msdk.video.js.g
    public void notifyCloseBtn(int i) {
        if (i == 0) {
            this.J = true;
        } else {
            if (i != 1) {
                return;
            }
            this.K = true;
        }
    }

    @Override // com.mbridge.msdk.video.js.g
    public void toggleCloseBtn(int i) {
        int visibility = this.p.getVisibility();
        if (i == 1) {
            this.I = true;
            visibility = 0;
        } else if (i == 2) {
            this.I = false;
            visibility = 8;
            if (this.x) {
                if (!this.S && !this.J) {
                    this.S = true;
                    int i2 = this.C;
                    if (i2 == 0) {
                        this.M = true;
                    } else {
                        this.M = false;
                        if (i2 > -1) {
                            this.r.postDelayed(new e(this), this.C * 1000);
                        }
                    }
                }
            } else if (!this.R && !this.J) {
                this.R = true;
                int i3 = this.B;
                if (i3 == 0) {
                    this.L = true;
                } else {
                    this.L = false;
                    if (i3 > -1) {
                        this.r.postDelayed(new d(this), this.B * 1000);
                    }
                }
            }
        }
        setCloseVisible(visibility);
    }

    private class d implements Runnable {
        private MBridgeH5EndCardView b;

        public d(MBridgeH5EndCardView mBridgeH5EndCardView) {
            this.b = mBridgeH5EndCardView;
        }

        @Override // java.lang.Runnable
        public final void run() {
            MBridgeH5EndCardView mBridgeH5EndCardView = this.b;
            if (mBridgeH5EndCardView != null) {
                mBridgeH5EndCardView.L = true;
            }
        }
    }

    private class e implements Runnable {
        private MBridgeH5EndCardView b;

        public e(MBridgeH5EndCardView mBridgeH5EndCardView) {
            this.b = mBridgeH5EndCardView;
        }

        @Override // java.lang.Runnable
        public final void run() {
            MBridgeH5EndCardView mBridgeH5EndCardView = this.b;
            if (mBridgeH5EndCardView != null) {
                mBridgeH5EndCardView.M = true;
            }
        }
    }

    public void handlerPlayableException(String str) {
        z.d("========", "===========handlerPlayableException");
        if (this.u) {
            return;
        }
        this.u = true;
        this.t = false;
        if (this.b != null) {
            p pVar = new p();
            pVar.k(this.b.getRequestId());
            pVar.l(this.b.getRequestIdNotice());
            pVar.n(this.b.getId());
            pVar.p(str);
            com.mbridge.msdk.foundation.same.report.c.d(pVar, this.f4304a.getApplicationContext(), this.v);
        }
    }

    public void webviewshow() {
        WindVaneWebView windVaneWebView = this.q;
        if (windVaneWebView != null) {
            windVaneWebView.post(new Runnable() { // from class: com.mbridge.msdk.video.module.MBridgeH5EndCardView.4
                @Override // java.lang.Runnable
                public final void run() {
                    String string;
                    try {
                        z.a(MBridgeBaseView.TAG, "webviewshow");
                        try {
                            int[] iArr = new int[2];
                            MBridgeH5EndCardView.this.q.getLocationOnScreen(iArr);
                            z.d(MBridgeBaseView.TAG, "coordinate:" + iArr[0] + "--" + iArr[1]);
                            JSONObject jSONObject = new JSONObject();
                            Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
                            if (contextJ != null) {
                                jSONObject.put("startX", ae.a(contextJ, iArr[0]));
                                jSONObject.put("startY", ae.a(contextJ, iArr[1]));
                                jSONObject.put(com.mbridge.msdk.foundation.same.a.s, ae.d(contextJ));
                            }
                            string = jSONObject.toString();
                        } catch (Throwable th) {
                            z.c(MBridgeBaseView.TAG, th.getMessage(), th);
                            string = "";
                        }
                        com.mbridge.msdk.mbjscommon.windvane.h.a().a((WebView) MBridgeH5EndCardView.this.q, "webviewshow", Base64.encodeToString(string.toString().getBytes(), 2));
                        MBridgeH5EndCardView.this.e.a(109, "");
                        MBridgeH5EndCardView.d(MBridgeH5EndCardView.this);
                        MBridgeH5EndCardView.this.startCounterEndCardShowTimer();
                        com.mbridge.msdk.mbjscommon.windvane.h.a().a((WebView) MBridgeH5EndCardView.this.q, "oncutoutfetched", Base64.encodeToString(MBridgeH5EndCardView.this.P.getBytes(), 0));
                        MBridgeH5EndCardView.f(MBridgeH5EndCardView.this);
                    } catch (Exception e2) {
                        e2.printStackTrace();
                    }
                }
            });
        }
    }

    public void orientation(Configuration configuration) {
        try {
            JSONObject jSONObject = new JSONObject();
            if (configuration.orientation == 2) {
                jSONObject.put("orientation", "landscape");
            } else {
                jSONObject.put("orientation", "portrait");
            }
            com.mbridge.msdk.mbjscommon.windvane.h.a().a((WebView) this.q, "orientation", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }

    public boolean canBackPress() {
        ImageView imageView = this.p;
        return imageView != null && imageView.getVisibility() == 0;
    }

    public boolean isLoadSuccess() {
        return this.t;
    }

    public void setUnitId(String str) {
        this.v = str;
    }

    public void setCloseDelayShowTime(int i) {
        this.B = i;
    }

    public void setPlayCloseBtnTm(int i) {
        this.C = i;
    }

    public void setHtmlSource(String str) {
        this.s = str;
    }

    public void setCloseVisible(int i) {
        if (this.f) {
            this.p.setVisibility(i);
        }
    }

    public void setCloseVisibleForMraid(int i) {
        if (this.f) {
            this.N = true;
            if (i == 4) {
                this.p.setImageDrawable(new ColorDrawable(16711680));
            } else {
                this.p.setImageResource(findDrawable("mbridge_reward_close"));
            }
            this.p.setVisibility(0);
        }
    }

    protected RelativeLayout.LayoutParams b() {
        return new RelativeLayout.LayoutParams(-1, -1);
    }

    protected void e() {
        if (this.f) {
            setMatchParent();
        }
    }

    protected String a() {
        if (this.b != null) {
            this.H = true;
            if (this.b.isMraid()) {
                this.A = false;
                String mraid = this.b.getMraid();
                if (!TextUtils.isEmpty(mraid)) {
                    File file = new File(mraid);
                    try {
                        if (file.exists() && file.isFile() && file.canRead()) {
                            z.b(MBridgeBaseView.TAG, "Mraid file " + mraid);
                            mraid = "file:////" + mraid;
                        } else {
                            z.b(MBridgeBaseView.TAG, "Mraid file not found. Will use endcard url.");
                            mraid = this.b.getEndScreenUrl();
                        }
                        return mraid;
                    } catch (Throwable th) {
                        if (!MBridgeConstans.DEBUG) {
                            return mraid;
                        }
                        th.printStackTrace();
                        return mraid;
                    }
                }
                String endScreenUrl = this.b.getEndScreenUrl();
                z.d(MBridgeBaseView.TAG, "getURL playable=false endscreenurl兜底:" + endScreenUrl);
                return endScreenUrl;
            }
            String str = this.b.getendcard_url();
            if (!ai.a(str)) {
                this.A = true;
                String h5ResAddress = H5DownLoadManager.getInstance().getH5ResAddress(str);
                if (TextUtils.isEmpty(h5ResAddress)) {
                    try {
                        String path = Uri.parse(str).getPath();
                        if (!TextUtils.isEmpty(path) && path.toLowerCase().endsWith(".zip")) {
                            String endScreenUrl2 = this.b.getEndScreenUrl();
                            if (TextUtils.isEmpty(endScreenUrl2)) {
                                return null;
                            }
                            this.A = false;
                            excuteTask();
                            return endScreenUrl2;
                        }
                    } catch (Throwable th2) {
                        z.d(MBridgeBaseView.TAG, th2.getMessage());
                    }
                    z.b(MBridgeBaseView.TAG, "getURL playable=true endcard本地资源地址为空拿服务端地址:" + str);
                    return str + "&native_adtype=" + this.b.getAdType();
                }
                z.b(MBridgeBaseView.TAG, "getURL playable=true 资源不为空endcard地址:" + h5ResAddress);
                return h5ResAddress + "&native_adtype=" + this.b.getAdType();
            }
            this.A = false;
            String endScreenUrl3 = this.b.getEndScreenUrl();
            z.d(MBridgeBaseView.TAG, "getURL playable=false endscreenurl兜底:" + endScreenUrl3);
            return endScreenUrl3;
        }
        this.H = false;
        z.d(MBridgeBaseView.TAG, "getURL playable=false url为空");
        return null;
    }

    private class f implements Runnable {
        private MBridgeH5EndCardView b;

        public f(MBridgeH5EndCardView mBridgeH5EndCardView) {
            this.b = mBridgeH5EndCardView;
        }

        @Override // java.lang.Runnable
        public final void run() {
            MBridgeH5EndCardView mBridgeH5EndCardView = this.b;
            if (mBridgeH5EndCardView != null) {
                if (!mBridgeH5EndCardView.N) {
                    MBridgeH5EndCardView.this.setCloseVisible(0);
                }
                this.b.I = true;
            }
        }
    }

    public void excuteTask() {
        if (this.A || this.B <= -1) {
            return;
        }
        this.r.postDelayed(new f(this), this.B * 1000);
    }

    private class b implements Runnable {
        private MBridgeH5EndCardView b;

        public b(MBridgeH5EndCardView mBridgeH5EndCardView) {
            this.b = mBridgeH5EndCardView;
        }

        @Override // java.lang.Runnable
        public final void run() {
            MBridgeH5EndCardView mBridgeH5EndCardView = this.b;
            if (mBridgeH5EndCardView == null || mBridgeH5EndCardView.E) {
                return;
            }
            this.b.E = true;
            this.b.t = false;
            MBridgeH5EndCardView.this.reportRenderResult("timeout", 5);
            this.b.e.a(127, "");
            z.a(MBridgeBaseView.TAG, "notify TYPE_NOTIFY_SHOW_NATIVE_ENDCARD");
        }
    }

    public void executeEndCardShow(int i) {
        this.r.postDelayed(new b(this), i * 1000);
    }

    public void excuteEndCardShowTask(int i) {
        this.r.postDelayed(new c(this, i), i * 1000);
    }

    private static class c implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private MBridgeH5EndCardView f4324a;
        private int b;

        public c(MBridgeH5EndCardView mBridgeH5EndCardView, int i) {
            this.f4324a = mBridgeH5EndCardView;
            this.b = i;
        }

        @Override // java.lang.Runnable
        public final void run() {
            MBridgeH5EndCardView mBridgeH5EndCardView = this.f4324a;
            if (mBridgeH5EndCardView == null || mBridgeH5EndCardView.b == null) {
                return;
            }
            try {
                if (!this.f4324a.D) {
                    this.f4324a.D = true;
                    p pVar = new p(r.k, 12, (this.b * 1000) + "", this.f4324a.b.getendcard_url(), this.f4324a.b.getId(), this.f4324a.v, "ready timeout", (ai.b(this.f4324a.b.getendcard_url()) && this.f4324a.b.getendcard_url().contains(".zip")) ? "1" : "2");
                    try {
                        if (this.f4324a.b.getAdType() == 287) {
                            pVar.h("3");
                        } else if (this.f4324a.b.getAdType() == 94) {
                            pVar.h("1");
                        } else if (this.f4324a.b.getAdType() == 42) {
                            pVar.h("2");
                        }
                    } catch (Exception e) {
                        e.printStackTrace();
                    }
                    pVar.k(this.f4324a.b.getRequestId());
                    pVar.l(this.f4324a.b.getRequestIdNotice());
                    pVar.b(this.f4324a.b.getAdSpaceT());
                    com.mbridge.msdk.foundation.same.report.c.a(pVar, this.f4324a.v);
                    this.f4324a.isLoadSuccess();
                    return;
                }
                z.b(MBridgeBaseView.TAG, "insertEndCardReadyState hasInsertLoadEndCardReport true return");
            } catch (Throwable th) {
                z.c(MBridgeBaseView.TAG, th.getMessage(), th);
            }
        }
    }

    public boolean isPlayable() {
        return this.A;
    }

    public void onBackPress() {
        if (this.I || ((this.J && this.K) || (!(this.J || !this.L || this.x) || (!this.J && this.M && this.x)))) {
            onCloseViewClick();
        }
    }

    public void setLoadPlayable(boolean z) {
        this.x = z;
    }

    public void release() {
        Handler handler = this.r;
        if (handler != null) {
            handler.removeCallbacksAndMessages(null);
            this.r = null;
        }
        Handler handler2 = this.w;
        if (handler2 != null) {
            handler2.removeCallbacksAndMessages(null);
            this.w = null;
        }
        this.o.removeAllViews();
        this.q.release();
        this.q = null;
    }

    public void volumeChange(double d2) {
        com.mbridge.msdk.mbjscommon.mraid.a.a().a(this.q, d2);
    }

    @Override // android.view.View
    public void onWindowFocusChanged(boolean z) {
        super.onWindowFocusChanged(z);
        if (this.b == null || !this.b.isMraid()) {
            return;
        }
        if (z) {
            com.mbridge.msdk.mbjscommon.mraid.a.a().b(this.q, "true");
        } else {
            com.mbridge.msdk.mbjscommon.mraid.a.a().b(this.q, "false");
        }
    }

    @Override // android.view.View
    protected void onVisibilityChanged(View view, int i) {
        super.onVisibilityChanged(view, i);
        if (i != 0 || this.O) {
            return;
        }
        this.O = true;
        setFocusableInTouchMode(true);
        requestFocus();
        requestFocusFromTouch();
    }

    @Override // com.mbridge.msdk.mbjscommon.mraid.b
    public void open(final String str) {
        z.d("EndCard_MRAID", "open : " + str);
        try {
            if (this.b != null && this.b.needShowIDialog() && com.mbridge.msdk.click.c.a(this.b)) {
                com.mbridge.msdk.widget.dialog.a aVar = new com.mbridge.msdk.widget.dialog.a() { // from class: com.mbridge.msdk.video.module.MBridgeH5EndCardView.7
                    @Override // com.mbridge.msdk.widget.dialog.a
                    public final void b() {
                    }

                    @Override // com.mbridge.msdk.widget.dialog.a
                    public final void a() {
                        MBridgeH5EndCardView.this.a(str);
                    }

                    @Override // com.mbridge.msdk.widget.dialog.a
                    public final void c() {
                        a();
                    }
                };
                if (getContext() == null || this.b == null || new com.mbridge.msdk.click.b(getContext(), this.v).b(this.b)) {
                    return;
                }
                com.mbridge.msdk.videocommon.d.b.a().a(com.mbridge.msdk.foundation.controller.a.f().k(), this.v, false);
                com.mbridge.msdk.mbjscommon.confirmation.e.a().a(com.mbridge.msdk.videocommon.d.c.f4394a, this.b, getContext(), this.v, aVar);
                return;
            }
            a(str);
        } catch (Exception e2) {
            z.d(MBridgeBaseView.TAG, e2.getMessage());
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(String str) {
        try {
            String clickURL = this.b.getClickURL();
            if (!TextUtils.isEmpty(str)) {
                this.b.setClickURL(str);
                b(str);
            }
            com.mbridge.msdk.click.b bVar = new com.mbridge.msdk.click.b(getContext(), this.v);
            bVar.a(this);
            bVar.c(this.b);
            this.b.setClickURL(clickURL);
            this.e.a(126, "");
        } catch (Exception e2) {
            z.d(MBridgeBaseView.TAG, e2.getMessage());
        }
    }

    private void b(String str) {
        CampaignEx mraidCampaign = getMraidCampaign();
        if (mraidCampaign != null) {
            new com.mbridge.msdk.foundation.same.report.d(getContext()).b(mraidCampaign.getRequestId(), mraidCampaign.getRequestIdNotice(), mraidCampaign.getId(), this.v, str, this.b.isBidCampaign());
        }
    }

    @Override // com.mbridge.msdk.mbjscommon.mraid.b
    public void close() {
        z.d("EndCard_MRAID", "close");
        try {
            onCloseViewClick();
        } catch (Exception e2) {
            z.d(MBridgeBaseView.TAG, e2.getMessage());
        }
    }

    @Override // com.mbridge.msdk.mbjscommon.mraid.b
    public void unload() {
        z.d("EndCard_MRAID", "unload");
        close();
    }

    @Override // com.mbridge.msdk.mbjscommon.mraid.b
    public CampaignEx getMraidCampaign() {
        return this.b;
    }

    @Override // com.mbridge.msdk.mbjscommon.mraid.b
    public void useCustomClose(boolean z) {
        z.d("EndCard_MRAID", "useCustomClose : " + z);
        try {
            setCloseVisibleForMraid(z ? 4 : 0);
        } catch (Exception e2) {
            z.d(MBridgeBaseView.TAG, e2.getMessage());
        }
    }

    public void setNotchValue(String str, int i, int i2, int i3, int i4) {
        if (this.b == null || this.b.getAdSpaceT() == 2) {
            return;
        }
        this.P = str;
        z.d(MBridgeBaseView.TAG, "NOTCH H5ENDCARD " + String.format("%1s-%2s-%3s-%4s", Integer.valueOf(i), Integer.valueOf(i2), Integer.valueOf(i3), Integer.valueOf(i4)));
        RelativeLayout.LayoutParams layoutParams = (RelativeLayout.LayoutParams) this.p.getLayoutParams();
        int iB = ae.b(getContext(), 20.0f);
        int i5 = i3 + iB;
        layoutParams.setMargins(i + iB, i5, i2 + iB, i4 + iB);
        z.d(MBridgeBaseView.TAG, "NOTCH H5ENDCARD " + i5);
        this.p.setLayoutParams(layoutParams);
    }

    @Override // com.mbridge.msdk.out.BaseTrackingListener
    public void onStartRedirection(Campaign campaign, String str) {
        ad.a(campaign, this);
    }

    @Override // com.mbridge.msdk.out.BaseTrackingListener
    public void onFinishRedirection(Campaign campaign, String str) {
        if (campaign == null) {
            return;
        }
        CampaignEx campaignEx = (CampaignEx) campaign;
        if (campaignEx.getLinkType() == 8 && campaignEx.getAabEntity().getHlp() == 1) {
            ad.a((ViewGroup) this);
        }
    }

    @Override // com.mbridge.msdk.out.BaseTrackingListener
    public void onRedirectionFailed(Campaign campaign, String str) {
        if (campaign == null) {
            return;
        }
        CampaignEx campaignEx = (CampaignEx) campaign;
        if (campaignEx.getLinkType() == 8 && campaignEx.getAabEntity().getHlp() == 1) {
            ad.a((ViewGroup) this);
        }
    }

    /* JADX WARN: Can't wrap try/catch for region: R(9:(1:15)(2:17|(1:19)(16:20|21|22|64|23|60|24|(1:26)(2:27|(1:29)(2:30|(1:32)))|59|36|(1:45)(3:40|(1:42)(1:43)|44)|46|47|62|48|67))|64|23|60|24|(0)(0)|59|36|(7:38|45|46|47|62|48|67)(0)) */
    /* JADX WARN: Code restructure failed: missing block: B:34:0x00ba, code lost:
    
        r0 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:35:0x00bb, code lost:
    
        r0.printStackTrace();
     */
    /* JADX WARN: Removed duplicated region for block: B:26:0x0098 A[Catch: NullPointerException -> 0x00ba, all -> 0x017f, TryCatch #1 {NullPointerException -> 0x00ba, blocks: (B:24:0x008e, B:26:0x0098, B:27:0x009e, B:29:0x00a8, B:30:0x00ac, B:32:0x00b6), top: B:60:0x008e, outer: #3 }] */
    /* JADX WARN: Removed duplicated region for block: B:27:0x009e A[Catch: NullPointerException -> 0x00ba, all -> 0x017f, TryCatch #1 {NullPointerException -> 0x00ba, blocks: (B:24:0x008e, B:26:0x0098, B:27:0x009e, B:29:0x00a8, B:30:0x00ac, B:32:0x00b6), top: B:60:0x008e, outer: #3 }] */
    /* JADX WARN: Removed duplicated region for block: B:45:0x0124  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    static /* synthetic */ void a(com.mbridge.msdk.video.module.MBridgeH5EndCardView r20, long r21, boolean r23) {
        /*
            Method dump skipped, instruction units count: 397
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.video.module.MBridgeH5EndCardView.a(com.mbridge.msdk.video.module.MBridgeH5EndCardView, long, boolean):void");
    }

    static /* synthetic */ void d(MBridgeH5EndCardView mBridgeH5EndCardView) {
        if (mBridgeH5EndCardView.b == null || !mBridgeH5EndCardView.b.isMraid()) {
            return;
        }
        int i = mBridgeH5EndCardView.getResources().getConfiguration().orientation;
        String str = "undefined";
        if (i != 0) {
            if (i == 1) {
                str = "portrait";
            } else if (i == 2) {
                str = "landscape";
            }
        }
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("orientation", str);
            jSONObject.put("locked", "true");
        } catch (Exception e2) {
            e2.printStackTrace();
        }
        HashMap map = new HashMap();
        map.put(CallMraidJS.f6428a, "Interstitial");
        map.put(CallMraidJS.b, "default");
        map.put(CallMraidJS.c, "true");
        map.put(CallMraidJS.d, jSONObject);
        if (mBridgeH5EndCardView.getContext() instanceof Activity) {
            float fX = v.x(mBridgeH5EndCardView.getContext());
            float fY = v.y(mBridgeH5EndCardView.getContext());
            DisplayMetrics displayMetrics = new DisplayMetrics();
            ((Activity) mBridgeH5EndCardView.getContext()).getWindowManager().getDefaultDisplay().getMetrics(displayMetrics);
            float f2 = displayMetrics.widthPixels;
            float f3 = displayMetrics.heightPixels;
            com.mbridge.msdk.mbjscommon.mraid.a.a().b(mBridgeH5EndCardView.q, fX, fY);
            com.mbridge.msdk.mbjscommon.mraid.a.a().c(mBridgeH5EndCardView.q, f2, f3);
        }
        com.mbridge.msdk.mbjscommon.mraid.a.a().a(mBridgeH5EndCardView.q, r7.getLeft(), mBridgeH5EndCardView.q.getTop(), mBridgeH5EndCardView.q.getWidth(), mBridgeH5EndCardView.q.getHeight());
        com.mbridge.msdk.mbjscommon.mraid.a.a().b(mBridgeH5EndCardView.q, r13.getLeft(), mBridgeH5EndCardView.q.getTop(), mBridgeH5EndCardView.q.getWidth(), mBridgeH5EndCardView.q.getHeight());
        com.mbridge.msdk.mbjscommon.mraid.a.a().a(mBridgeH5EndCardView.q, map);
        com.mbridge.msdk.mbjscommon.mraid.a.a().a(mBridgeH5EndCardView.q, com.mbridge.msdk.mbjscommon.mraid.d.f3724a);
        com.mbridge.msdk.mbjscommon.mraid.a.a().a(mBridgeH5EndCardView.q);
    }

    static /* synthetic */ void f(MBridgeH5EndCardView mBridgeH5EndCardView) {
        try {
            if (com.mbridge.msdk.foundation.b.b.a().b()) {
                com.mbridge.msdk.foundation.b.b.a().c(mBridgeH5EndCardView.v + "_1");
                FeedBackButton feedBackButtonB = com.mbridge.msdk.foundation.b.b.a().b(mBridgeH5EndCardView.v + "_2");
                mBridgeH5EndCardView.y = feedBackButtonB;
                if (feedBackButtonB != null) {
                    ViewGroup viewGroup = (ViewGroup) feedBackButtonB.getParent();
                    if (viewGroup != null) {
                        viewGroup.removeView(mBridgeH5EndCardView.y);
                    }
                    mBridgeH5EndCardView.o.addView(mBridgeH5EndCardView.y);
                    mBridgeH5EndCardView.o.postDelayed(new Runnable() { // from class: com.mbridge.msdk.video.module.MBridgeH5EndCardView.5
                        @Override // java.lang.Runnable
                        public final void run() {
                            MBridgeH5EndCardView.this.y.setVisibility(0);
                        }
                    }, 200L);
                }
                mBridgeH5EndCardView.b.setCampaignUnitId(mBridgeH5EndCardView.v);
                com.mbridge.msdk.foundation.b.b.a().a(mBridgeH5EndCardView.v + "_2", mBridgeH5EndCardView.b);
                com.mbridge.msdk.foundation.b.b.a().a(mBridgeH5EndCardView.v + "_2", new com.mbridge.msdk.foundation.b.a() { // from class: com.mbridge.msdk.video.module.MBridgeH5EndCardView.6
                    @Override // com.mbridge.msdk.foundation.b.a
                    public final void a() {
                        String string;
                        try {
                            JSONObject jSONObject = new JSONObject();
                            if (com.mbridge.msdk.foundation.controller.a.f().j() != null) {
                                jSONObject.put("status", 1);
                            }
                            string = jSONObject.toString();
                        } catch (Throwable th) {
                            z.c(MBridgeBaseView.TAG, th.getMessage(), th);
                            string = "";
                        }
                        com.mbridge.msdk.mbjscommon.windvane.h.a().a((WebView) MBridgeH5EndCardView.this.q, "onFeedbackAlertStatusNotify", Base64.encodeToString(string.getBytes(), 2));
                    }

                    @Override // com.mbridge.msdk.foundation.b.a
                    public final void b() {
                        String string;
                        try {
                            JSONObject jSONObject = new JSONObject();
                            if (com.mbridge.msdk.foundation.controller.a.f().j() != null) {
                                jSONObject.put("status", 2);
                            }
                            string = jSONObject.toString();
                        } catch (Throwable th) {
                            z.c(MBridgeBaseView.TAG, th.getMessage(), th);
                            string = "";
                        }
                        com.mbridge.msdk.mbjscommon.windvane.h.a().a((WebView) MBridgeH5EndCardView.this.q, "onFeedbackAlertStatusNotify", Base64.encodeToString(string.getBytes(), 2));
                    }

                    @Override // com.mbridge.msdk.foundation.b.a
                    public final void a(String str) {
                        String string;
                        try {
                            JSONObject jSONObject = new JSONObject();
                            if (com.mbridge.msdk.foundation.controller.a.f().j() != null) {
                                jSONObject.put("status", 2);
                            }
                            string = jSONObject.toString();
                        } catch (Throwable th) {
                            z.c(MBridgeBaseView.TAG, th.getMessage(), th);
                            string = "";
                        }
                        com.mbridge.msdk.mbjscommon.windvane.h.a().a((WebView) MBridgeH5EndCardView.this.q, "onFeedbackAlertStatusNotify", Base64.encodeToString(string.getBytes(), 2));
                    }
                });
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }
}
