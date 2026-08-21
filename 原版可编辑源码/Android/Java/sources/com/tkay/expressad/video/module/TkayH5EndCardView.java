package com.tkay.expressad.video.module;

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
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.tkay.core.common.b.m;
import com.tkay.expressad.atsignalcommon.mraid.CallMraidJS;
import com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge;
import com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver;
import com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView;
import com.tkay.expressad.atsignalcommon.windvane.j;
import com.tkay.expressad.foundation.h.k;
import com.tkay.expressad.foundation.h.t;
import com.tkay.expressad.foundation.h.w;
import com.tkay.expressad.foundation.webview.BrowserView;
import com.tkay.expressad.video.signal.h;
import com.tkay.expressad.videocommon.b.g;
import com.tkay.expressad.widget.FeedBackButton;
import java.io.File;
import java.util.HashMap;
import org.json.JSONObject;

public class TkayH5EndCardView extends TkayBaseView implements IMraidJSBridge, com.tkay.expressad.video.signal.f, h {
    private static final String A = "tkay_reward_endcard_h5";
    private static final String B = "portrait";
    private static final String C = "landscape";
    private static final int D = 1;
    private static final int E = 2;
    private static final int F = 20;
    private static final int G = 15;
    private static final int Q = 100;
    protected static final String n = "orientation";
    protected static final String o = "webviewshow";
    private FeedBackButton H;
    private boolean I;
    private boolean J;
    private int K;
    private int L;
    private boolean M;
    private boolean N;
    private int O;
    private long P;
    private boolean R;
    private boolean S;
    private boolean T;
    private boolean U;
    private boolean V;
    private boolean W;
    private boolean aa;
    private boolean ab;
    private String ac;
    private com.tkay.expressad.video.signal.factory.b ad;
    private boolean ae;
    private boolean af;
    protected View p;
    protected RelativeLayout q;
    protected ImageView r;
    protected WindVaneWebView s;
    protected Handler t;
    protected String u;
    protected boolean v;
    protected boolean w;
    protected String x;
    Handler y;
    boolean z;

    private static void k() {
    }

    @Override
    public void expand(String str, boolean z) {
    }

    @Override
    public void install(com.tkay.expressad.foundation.d.c cVar) {
    }

    @Override
    public void readyStatus(int i) {
    }

    public void reportRenderResult(String str, int i) {
    }

    static boolean d(TkayH5EndCardView tkayH5EndCardView) {
        tkayH5EndCardView.N = true;
        return true;
    }

    static boolean e(TkayH5EndCardView tkayH5EndCardView) {
        tkayH5EndCardView.V = true;
        return true;
    }

    static boolean f(TkayH5EndCardView tkayH5EndCardView) {
        tkayH5EndCardView.W = true;
        return true;
    }

    static boolean l(TkayH5EndCardView tkayH5EndCardView) {
        tkayH5EndCardView.S = true;
        return true;
    }

    static boolean n(TkayH5EndCardView tkayH5EndCardView) {
        tkayH5EndCardView.M = true;
        return true;
    }

    public TkayH5EndCardView(Context context) {
        super(context);
        this.I = false;
        this.t = new Handler();
        this.v = false;
        this.w = false;
        this.J = false;
        this.K = 1;
        this.L = 1;
        this.M = false;
        this.N = false;
        this.O = 1;
        this.P = 0L;
        this.R = false;
        this.S = false;
        this.T = false;
        this.U = false;
        this.V = false;
        this.W = false;
        this.aa = false;
        this.ab = false;
        this.ac = "";
        this.y = new Handler(Looper.getMainLooper()) {
            @Override
            public final void handleMessage(Message message) {
                super.handleMessage(message);
                if (message.what != 100) {
                    return;
                }
                if (TkayH5EndCardView.this.R) {
                    TkayH5EndCardView.this.e.a(122, "");
                }
                TkayH5EndCardView.this.e.a(103, "");
            }
        };
        this.ae = false;
        this.af = false;
        this.z = false;
    }

    public TkayH5EndCardView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.I = false;
        this.t = new Handler();
        this.v = false;
        this.w = false;
        this.J = false;
        this.K = 1;
        this.L = 1;
        this.M = false;
        this.N = false;
        this.O = 1;
        this.P = 0L;
        this.R = false;
        this.S = false;
        this.T = false;
        this.U = false;
        this.V = false;
        this.W = false;
        this.aa = false;
        this.ab = false;
        this.ac = "";
        this.y = new Handler(Looper.getMainLooper()) {
            @Override
            public final void handleMessage(Message message) {
                super.handleMessage(message);
                if (message.what != 100) {
                    return;
                }
                if (TkayH5EndCardView.this.R) {
                    TkayH5EndCardView.this.e.a(122, "");
                }
                TkayH5EndCardView.this.e.a(103, "");
            }
        };
        this.ae = false;
        this.af = false;
        this.z = false;
    }

    @Override
    public void onSelfConfigurationChanged(Configuration configuration) {
        super.onSelfConfigurationChanged(configuration);
        orientation(configuration);
    }

    @Override
    public void init(Context context) {
        int iFindLayout = findLayout(A);
        if (iFindLayout >= 0) {
            View viewInflate = this.c.inflate(iFindLayout, (ViewGroup) null);
            this.p = viewInflate;
            try {
                this.r = (ImageView) viewInflate.findViewById(findID("tkay_windwv_close"));
                this.q = (RelativeLayout) viewInflate.findViewById(findID("tkay_windwv_content_rl"));
                this.s = new WindVaneWebView(getContext());
                this.s.setLayoutParams(new RelativeLayout.LayoutParams(-1, -1));
                this.q.addView(this.s);
                this.f = isNotNULL(this.r, this.s);
            } catch (Exception unused) {
                this.f = false;
            }
            addView(this.p, b());
            c();
            e();
        }
    }

    @Override
    protected final void c() {
        super.c();
        if (this.f) {
            this.r.setOnClickListener(new View.OnClickListener() {
                @Override
                public final void onClick(View view) {
                    TkayH5EndCardView.this.onCloseViewClick();
                }
            });
        }
    }

    public void onCloseViewClick() {
        try {
            if (this.s != null) {
                j.a();
                j.a((WebView) this.s, "onSystemDestory", "");
                new Thread(new a(this)).start();
            } else {
                this.e.a(103, "");
                this.e.a(119, "webview is null when closing webview");
            }
        } catch (Exception e2) {
            this.e.a(103, "");
            this.e.a(119, "close webview exception" + e2.getMessage());
            e2.getMessage();
        }
    }

    private class a implements Runnable {
        private TkayH5EndCardView b;

        public a(TkayH5EndCardView tkayH5EndCardView) {
            this.b = tkayH5EndCardView;
        }

        @Override
        public final void run() {
            try {
                Thread.sleep(300L);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            TkayH5EndCardView tkayH5EndCardView = this.b;
            if (tkayH5EndCardView == null || tkayH5EndCardView.y == null) {
                return;
            }
            this.b.y.sendEmptyMessage(100);
        }
    }

    public void setError(boolean z) {
        this.w = z;
    }

    /* JADX WARN: Removed duplicated region for block: B:44:0x00f2  */
    /* JADX WARN: Removed duplicated region for block: B:46:0x00f5 A[Catch: all -> 0x00fd, TryCatch #0 {all -> 0x00fd, blocks: (B:13:0x006c, B:15:0x008e, B:17:0x0094, B:20:0x009c, B:22:0x00a2, B:24:0x00aa, B:26:0x00b2, B:28:0x00b5, B:30:0x00b9, B:32:0x00c1, B:34:0x00c9, B:36:0x00cf, B:38:0x00d6, B:46:0x00f5, B:47:0x00f9, B:39:0x00e2, B:41:0x00e7, B:43:0x00ed), top: B:58:0x006c }] */
    /* JADX WARN: Removed duplicated region for block: B:47:0x00f9 A[Catch: all -> 0x00fd, TRY_LEAVE, TryCatch #0 {all -> 0x00fd, blocks: (B:13:0x006c, B:15:0x008e, B:17:0x0094, B:20:0x009c, B:22:0x00a2, B:24:0x00aa, B:26:0x00b2, B:28:0x00b5, B:30:0x00b9, B:32:0x00c1, B:34:0x00c9, B:36:0x00cf, B:38:0x00d6, B:46:0x00f5, B:47:0x00f9, B:39:0x00e2, B:41:0x00e7, B:43:0x00ed), top: B:58:0x006c }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void preLoadData(com.tkay.expressad.video.signal.factory.b bVar) {
        int iO;
        this.ad = bVar;
        String strA = a();
        if (this.f && this.b != null && !TextUtils.isEmpty(strA)) {
            this.P = System.currentTimeMillis();
            BrowserView.DownloadListener downloadListener = new BrowserView.DownloadListener(this.b);
            downloadListener.setTitle(this.b.bb());
            this.s.setDownloadListener(downloadListener);
            this.s.setCampaignId(this.b.aZ());
            setCloseVisible(8);
            this.s.setApiManagerJSFactory(bVar);
            if (this.b.H()) {
                this.s.setMraidObject(this);
            }
            this.s.setWebViewListener(new com.tkay.expressad.atsignalcommon.a.b() {
                @Override
                public final void onPageFinished(WebView webView, String str) {
                    super.onPageFinished(webView, str);
                    if (TkayH5EndCardView.this.w) {
                        return;
                    }
                    new StringBuilder("===========finish  loadSuccess:").append(TkayH5EndCardView.this.v);
                    TkayH5EndCardView.this.v = true;
                    TkayH5EndCardView.this.e.a(100, "");
                    TkayH5EndCardView.this.e.a(120, "");
                }

                @Override
                public final void onReceivedError(WebView webView, int i, String str, String str2) {
                    super.onReceivedError(webView, i, str, str2);
                    if (TkayH5EndCardView.this.w) {
                        return;
                    }
                    TkayH5EndCardView.this.e.a(118, "onReceivedError " + i + str);
                    TkayH5EndCardView.this.reportRenderResult(str, 3);
                    TkayH5EndCardView.this.e.a(127, "");
                    TkayH5EndCardView.this.e.a(129, "");
                    TkayH5EndCardView.this.w = true;
                }

                @Override
                public final void readyState(WebView webView, int i) {
                    super.readyState(webView, i);
                    StringBuilder sb = new StringBuilder("h5EncardView readyStatus:");
                    sb.append(i);
                    sb.append("- isError");
                    sb.append(TkayH5EndCardView.this.w);
                    TkayH5EndCardView.this.O = i;
                    if (TkayH5EndCardView.this.w) {
                        return;
                    }
                    TkayH5EndCardView.a(TkayH5EndCardView.this, System.currentTimeMillis() - TkayH5EndCardView.this.P);
                }

                @Override
                public final void loadingResourceStatus(WebView webView, int i) {
                    super.loadingResourceStatus(webView, i);
                    TkayH5EndCardView.this.O = i;
                    if (TkayH5EndCardView.this.N) {
                        return;
                    }
                    TkayH5EndCardView.d(TkayH5EndCardView.this);
                    if (i == 1) {
                        TkayH5EndCardView.this.reportRenderResult("success", 4);
                    } else {
                        TkayH5EndCardView.this.e.a(127, "");
                        TkayH5EndCardView.this.reportRenderResult("failed", 6);
                    }
                }
            });
            if (TextUtils.isEmpty(this.b.G())) {
                try {
                    this.P = System.currentTimeMillis();
                    String strI = this.b.I();
                    com.tkay.expressad.videocommon.e.d dVarA = com.tkay.expressad.videocommon.e.c.a().a(com.tkay.expressad.foundation.b.b.b().e(), this.x);
                    if (this.J && w.b(strI) && (strI.contains("wfr=1") || (dVarA != null && dVarA.o() > 0))) {
                        if (strI.contains("wfr=1")) {
                            String[] strArrSplit = strI.split("&");
                            if (strArrSplit == null || strArrSplit.length <= 0) {
                                iO = 20;
                                if (iO >= 0) {
                                    excuteEndCardShowTask(iO);
                                } else {
                                    excuteEndCardShowTask(20);
                                }
                            } else {
                                for (String str : strArrSplit) {
                                    if (w.b(str) && str.contains(RemoteMessageConst.TO) && str.split(ContainerUtils.KEY_VALUE_DELIMITER) != null && str.split(ContainerUtils.KEY_VALUE_DELIMITER).length > 0) {
                                        iO = t.a((Object) str.split(ContainerUtils.KEY_VALUE_DELIMITER)[1]);
                                        break;
                                    }
                                }
                                iO = 20;
                                if (iO >= 0) {
                                }
                            }
                        } else {
                            if (dVarA != null && dVarA.o() > 0) {
                                iO = dVarA.o();
                            }
                            if (iO >= 0) {
                            }
                        }
                    }
                } catch (Throwable th) {
                    th.getMessage();
                }
            }
            setHtmlSource(com.tkay.expressad.videocommon.b.h.a().b(strA));
            if (TextUtils.isEmpty(this.u)) {
                this.s.loadUrl(strA);
            } else {
                this.s.loadDataWithBaseURL(strA, this.u, "text/html", "UTF-8", null);
            }
        } else {
            reportRenderResult("PL URL IS NULL", 3);
            this.e.a(127, "");
            this.e.a(129, "");
        }
        this.z = false;
    }

    public void startCounterEndCardShowTimer() {
        try {
            String strI = this.b.I();
            int iA = 15;
            if (w.b(strI) && strI.contains("wfl=1")) {
                String[] strArrSplit = strI.split("&");
                if (strArrSplit != null && strArrSplit.length > 0) {
                    for (String str : strArrSplit) {
                        if (w.b(str) && str.contains("timeout") && str.split(ContainerUtils.KEY_VALUE_DELIMITER) != null && str.split(ContainerUtils.KEY_VALUE_DELIMITER).length > 0) {
                            iA = t.a((Object) str.split(ContainerUtils.KEY_VALUE_DELIMITER)[1]);
                        }
                    }
                }
                executeEndCardShow(iA);
            }
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:34:0x008a  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void f() {
        int iO;
        try {
            this.P = System.currentTimeMillis();
            String strI = this.b.I();
            com.tkay.expressad.videocommon.e.d dVarA = com.tkay.expressad.videocommon.e.c.a().a(com.tkay.expressad.foundation.b.b.b().e(), this.x);
            if (this.J && w.b(strI)) {
                if (strI.contains("wfr=1") || (dVarA != null && dVarA.o() > 0)) {
                    if (strI.contains("wfr=1")) {
                        String[] strArrSplit = strI.split("&");
                        if (strArrSplit == null || strArrSplit.length <= 0) {
                            iO = 20;
                        } else {
                            for (String str : strArrSplit) {
                                if (w.b(str) && str.contains(RemoteMessageConst.TO) && str.split(ContainerUtils.KEY_VALUE_DELIMITER) != null && str.split(ContainerUtils.KEY_VALUE_DELIMITER).length > 0) {
                                    iO = t.a((Object) str.split(ContainerUtils.KEY_VALUE_DELIMITER)[1]);
                                    break;
                                }
                            }
                            iO = 20;
                        }
                    } else if (dVarA != null && dVarA.o() > 0) {
                        iO = dVarA.o();
                    }
                    if (iO >= 0) {
                        excuteEndCardShowTask(iO);
                    } else {
                        excuteEndCardShowTask(20);
                    }
                }
            }
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    @Override
    public void defaultShow() {
        super.defaultShow();
    }

    @Override
    public void notifyCloseBtn(int i) {
        if (i == 0) {
            this.T = true;
        } else {
            if (i != 1) {
                return;
            }
            this.U = true;
        }
    }

    @Override
    public void toggleCloseBtn(int i) {
        int visibility = this.r.getVisibility();
        if (i == 1) {
            this.S = true;
            visibility = 0;
        } else if (i == 2) {
            this.S = false;
            visibility = 8;
            if (this.z) {
                if (!this.af && !this.T) {
                    this.af = true;
                    int i2 = this.L;
                    if (i2 == 0) {
                        this.W = true;
                    } else {
                        this.W = false;
                        if (i2 >= 0) {
                            this.t.postDelayed(new e(this), this.L * 1000);
                        }
                    }
                }
            } else if (!this.ae && !this.T) {
                this.ae = true;
                int i3 = this.K;
                if (i3 == 0) {
                    this.V = true;
                } else {
                    this.V = false;
                    if (i3 >= 0) {
                        this.t.postDelayed(new d(this), this.K * 1000);
                    }
                }
            }
        }
        setCloseVisible(visibility);
    }

    private void g() {
        if (this.ae || this.T) {
            return;
        }
        this.ae = true;
        int i = this.K;
        if (i == 0) {
            this.V = true;
            return;
        }
        this.V = false;
        if (i >= 0) {
            this.t.postDelayed(new d(this), this.K * 1000);
        }
    }

    private class d implements Runnable {
        private TkayH5EndCardView b;

        public d(TkayH5EndCardView tkayH5EndCardView) {
            this.b = tkayH5EndCardView;
        }

        @Override
        public final void run() {
            TkayH5EndCardView tkayH5EndCardView = this.b;
            if (tkayH5EndCardView != null) {
                TkayH5EndCardView.e(tkayH5EndCardView);
            }
        }
    }

    private class e implements Runnable {
        private TkayH5EndCardView b;

        public e(TkayH5EndCardView tkayH5EndCardView) {
            this.b = tkayH5EndCardView;
        }

        @Override
        public final void run() {
            TkayH5EndCardView tkayH5EndCardView = this.b;
            if (tkayH5EndCardView != null) {
                TkayH5EndCardView.f(tkayH5EndCardView);
            }
        }
    }

    private void h() {
        if (this.af || this.T) {
            return;
        }
        this.af = true;
        int i = this.L;
        if (i == 0) {
            this.W = true;
            return;
        }
        this.W = false;
        if (i >= 0) {
            this.t.postDelayed(new e(this), this.L * 1000);
        }
    }

    @Override
    public void handlerPlayableException(String str) {
        if (this.w) {
            return;
        }
        this.w = true;
        this.v = false;
    }

    public void webviewshow() {
        WindVaneWebView windVaneWebView = this.s;
        if (windVaneWebView != null) {
            windVaneWebView.post(new Runnable() {
                @Override
                public final void run() {
                    String string;
                    try {
                        try {
                            int[] iArr = new int[2];
                            TkayH5EndCardView.this.s.getLocationOnScreen(iArr);
                            StringBuilder sb = new StringBuilder("coordinate:");
                            sb.append(iArr[0]);
                            sb.append("--");
                            sb.append(iArr[1]);
                            JSONObject jSONObject = new JSONObject();
                            Context contextF = m.a().f();
                            if (contextF != null) {
                                jSONObject.put("startX", t.a(contextF, iArr[0]));
                                jSONObject.put("startY", t.a(contextF, iArr[1]));
                                jSONObject.put(com.tkay.expressad.foundation.g.a.ch, t.c(contextF));
                            }
                            string = jSONObject.toString();
                        } catch (Throwable th) {
                            th.getMessage();
                            string = "";
                        }
                        String strEncodeToString = Base64.encodeToString(string.toString().getBytes(), 2);
                        j.a();
                        j.a((WebView) TkayH5EndCardView.this.s, TkayH5EndCardView.o, strEncodeToString);
                        TkayH5EndCardView.this.e.a(109, "");
                        TkayH5EndCardView.g(TkayH5EndCardView.this);
                        TkayH5EndCardView.this.startCounterEndCardShowTimer();
                        j.a();
                        j.a((WebView) TkayH5EndCardView.this.s, "oncutoutfetched", Base64.encodeToString(TkayH5EndCardView.this.ac.getBytes(), 0));
                        TkayH5EndCardView.i(TkayH5EndCardView.this);
                    } catch (Exception e2) {
                        e2.printStackTrace();
                    }
                }
            });
        }
    }

    private void i() {
        try {
            if (com.tkay.expressad.foundation.f.b.a().b()) {
                com.tkay.expressad.foundation.f.b.a().c(this.x + "_1");
                FeedBackButton feedBackButtonB = com.tkay.expressad.foundation.f.b.a().b(this.x + "_2");
                this.H = feedBackButtonB;
                if (feedBackButtonB != null) {
                    ViewGroup viewGroup = (ViewGroup) feedBackButtonB.getParent();
                    if (viewGroup != null) {
                        viewGroup.removeView(this.H);
                    }
                    this.q.addView(this.H);
                    this.q.postDelayed(new 5(), 200L);
                }
                this.b.l(this.x);
                com.tkay.expressad.foundation.f.b.a().a(this.x + "_2", this.b);
                com.tkay.expressad.foundation.f.b.a().a(this.x + "_2", new 6());
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }

    final class 5 implements Runnable {
        5() {
        }

        @Override
        public final void run() {
            TkayH5EndCardView.this.H.setVisibility(0);
        }
    }

    final class 6 implements com.tkay.expressad.foundation.f.a {
        6() {
        }

        @Override
        public final void a() {
            String string;
            try {
                JSONObject jSONObject = new JSONObject();
                if (m.a().f() != null) {
                    jSONObject.put("status", 1);
                }
                string = jSONObject.toString();
            } catch (Throwable th) {
                th.getMessage();
                string = "";
            }
            String strEncodeToString = Base64.encodeToString(string.getBytes(), 2);
            j.a();
            j.a((WebView) TkayH5EndCardView.this.s, "onFeedbackAlertStatusNotify", strEncodeToString);
        }

        @Override
        public final void b() {
            String string;
            try {
                JSONObject jSONObject = new JSONObject();
                if (m.a().f() != null) {
                    jSONObject.put("status", 2);
                }
                string = jSONObject.toString();
            } catch (Throwable th) {
                th.getMessage();
                string = "";
            }
            String strEncodeToString = Base64.encodeToString(string.getBytes(), 2);
            j.a();
            j.a((WebView) TkayH5EndCardView.this.s, "onFeedbackAlertStatusNotify", strEncodeToString);
        }

        @Override
        public final void c() {
            String string;
            try {
                JSONObject jSONObject = new JSONObject();
                if (m.a().f() != null) {
                    jSONObject.put("status", 2);
                }
                string = jSONObject.toString();
            } catch (Throwable th) {
                th.getMessage();
                string = "";
            }
            String strEncodeToString = Base64.encodeToString(string.getBytes(), 2);
            j.a();
            j.a((WebView) TkayH5EndCardView.this.s, "onFeedbackAlertStatusNotify", strEncodeToString);
        }
    }

    @Override
    public void orientation(Configuration configuration) {
        try {
            JSONObject jSONObject = new JSONObject();
            if (configuration.orientation == 2) {
                jSONObject.put("orientation", C);
            } else {
                jSONObject.put("orientation", B);
            }
            String strEncodeToString = Base64.encodeToString(jSONObject.toString().getBytes(), 2);
            j.a();
            j.a((WebView) this.s, "orientation", strEncodeToString);
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }

    public boolean canBackPress() {
        ImageView imageView = this.r;
        return imageView != null && imageView.getVisibility() == 0;
    }

    public boolean isLoadSuccess() {
        return this.v;
    }

    public void setUnitId(String str) {
        this.x = str;
    }

    public void setCloseDelayShowTime(int i) {
        this.K = i;
    }

    public void setPlayCloseBtnTm(int i) {
        this.L = i;
    }

    public void setHtmlSource(String str) {
        this.u = str;
    }

    public void setCloseVisible(int i) {
        if (this.f) {
            this.r.setVisibility(i);
        }
    }

    public void setCloseVisibleForMraid(int i) {
        if (this.f) {
            this.aa = true;
            if (i == 4) {
                this.r.setImageDrawable(new ColorDrawable(16711680));
            } else {
                this.r.setImageResource(findDrawable("tkay_reward_close"));
            }
            this.r.setVisibility(0);
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
            this.R = true;
            if (this.b.H()) {
                this.J = false;
                String strG = this.b.G();
                if (!TextUtils.isEmpty(strG)) {
                    File file = new File(strG);
                    try {
                        if (file.exists() && file.isFile() && file.canRead()) {
                            strG = "file:////".concat(String.valueOf(strG));
                        } else {
                            strG = this.b.P();
                        }
                        return strG;
                    } catch (Throwable th) {
                        if (!com.tkay.expressad.b.a) {
                            return strG;
                        }
                        th.printStackTrace();
                        return strG;
                    }
                }
                return this.b.P();
            }
            String strI = this.b.I();
            if (!w.a(strI)) {
                this.J = true;
                String strC = g.a().c(strI);
                if (TextUtils.isEmpty(strC)) {
                    try {
                        String path = Uri.parse(strI).getPath();
                        if (!TextUtils.isEmpty(path) && path.toLowerCase().endsWith(".zip")) {
                            String strP = this.b.P();
                            if (TextUtils.isEmpty(strP)) {
                                return null;
                            }
                            this.J = false;
                            excuteTask();
                            return strP;
                        }
                    } catch (Throwable th2) {
                        th2.getMessage();
                    }
                    return strI + "&native_adtype=" + this.b.w();
                }
                return strC + "&native_adtype=" + this.b.w();
            }
            this.J = false;
            return this.b.P();
        }
        this.R = false;
        return null;
    }

    private boolean a(View view) {
        this.r = (ImageView) view.findViewById(findID("tkay_windwv_close"));
        this.q = (RelativeLayout) view.findViewById(findID("tkay_windwv_content_rl"));
        this.s = new WindVaneWebView(getContext());
        this.s.setLayoutParams(new RelativeLayout.LayoutParams(-1, -1));
        this.q.addView(this.s);
        return isNotNULL(this.r, this.s);
    }

    private class f implements Runnable {
        private TkayH5EndCardView b;

        public f(TkayH5EndCardView tkayH5EndCardView) {
            this.b = tkayH5EndCardView;
        }

        @Override
        public final void run() {
            TkayH5EndCardView tkayH5EndCardView = this.b;
            if (tkayH5EndCardView != null) {
                if (!tkayH5EndCardView.aa) {
                    TkayH5EndCardView.this.setCloseVisible(0);
                }
                TkayH5EndCardView.l(this.b);
            }
        }
    }

    public void excuteTask() {
        if (this.J || this.K < 0) {
            return;
        }
        this.t.postDelayed(new f(this), this.K * 1000);
    }

    private class b implements Runnable {
        private TkayH5EndCardView b;

        public b(TkayH5EndCardView tkayH5EndCardView) {
            this.b = tkayH5EndCardView;
        }

        @Override
        public final void run() {
            TkayH5EndCardView tkayH5EndCardView = this.b;
            if (tkayH5EndCardView == null || tkayH5EndCardView.N) {
                return;
            }
            TkayH5EndCardView.d(this.b);
            this.b.v = false;
            TkayH5EndCardView.this.reportRenderResult("timeout", 5);
            this.b.e.a(127, "");
        }
    }

    public void executeEndCardShow(int i) {
        this.t.postDelayed(new b(this), i * 1000);
    }

    public void excuteEndCardShowTask(int i) {
        this.t.postDelayed(new c(this, i), i * 1000);
    }

    private static class c implements Runnable {
        private TkayH5EndCardView a;
        private int b;

        public c(TkayH5EndCardView tkayH5EndCardView, int i) {
            this.a = tkayH5EndCardView;
            this.b = i;
        }

        @Override
        public final void run() {
            TkayH5EndCardView tkayH5EndCardView = this.a;
            if (tkayH5EndCardView == null || tkayH5EndCardView.b == null) {
                return;
            }
            try {
                if (this.a.M) {
                    return;
                }
                TkayH5EndCardView.n(this.a);
                if (w.b(this.a.b.I())) {
                    this.a.b.I().contains(".zip");
                }
            } catch (Throwable th) {
                th.getMessage();
            }
        }
    }

    private void a(long j, boolean z) {
        try {
            if (this.M) {
                return;
            }
            this.M = true;
            String str = "2";
            if (w.b(this.b.I()) && this.b.I().contains(".zip")) {
                str = "1";
            }
            int i = 10;
            String str2 = "ready yes";
            if (z) {
                i = 12;
                str2 = "ready timeout";
            } else if (this.O == 2) {
                i = 11;
                str2 = "ready no";
            }
            StringBuilder sb = new StringBuilder("insertEndCardReadyState result:");
            sb.append(i);
            sb.append(" endCardLoadTime:");
            sb.append(j);
            sb.append(" endcardurl:");
            sb.append(this.b.I());
            sb.append("  id:");
            sb.append(this.b.aZ());
            sb.append("  unitid:");
            sb.append(this.x);
            sb.append("  reason:");
            sb.append(str2);
            sb.append("  type:");
            sb.append(str);
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    public boolean isPlayable() {
        return this.J;
    }

    public void onBackPress() {
        if (this.S || ((this.T && this.U) || (!(this.T || !this.V || this.z) || (!this.T && this.W && this.z)))) {
            onCloseViewClick();
        }
    }

    public void setLoadPlayable(boolean z) {
        this.z = z;
    }

    public void release() {
        Handler handler = this.t;
        if (handler != null) {
            handler.removeCallbacksAndMessages(null);
            this.t = null;
        }
        Handler handler2 = this.y;
        if (handler2 != null) {
            handler2.removeCallbacksAndMessages(null);
            this.y = null;
        }
        this.q.removeAllViews();
        this.s.release();
        this.s = null;
    }

    private void j() {
        if (this.b == null || !this.b.H()) {
            return;
        }
        int i = getResources().getConfiguration().orientation;
        String str = "undefined";
        if (i != 0) {
            if (i == 1) {
                str = B;
            } else if (i == 2) {
                str = C;
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
        map.put(CallMraidJS.a, "Interstitial");
        map.put(CallMraidJS.b, "default");
        map.put(CallMraidJS.c, "true");
        map.put(CallMraidJS.d, jSONObject);
        if (getContext() instanceof Activity) {
            float fE = k.e(getContext());
            float f2 = k.f(getContext());
            DisplayMetrics displayMetrics = new DisplayMetrics();
            ((Activity) getContext()).getWindowManager().getDefaultDisplay().getMetrics(displayMetrics);
            float f3 = displayMetrics.widthPixels;
            float f4 = displayMetrics.heightPixels;
            CallMraidJS.getInstance().fireSetScreenSize(this.s, fE, f2);
            CallMraidJS.getInstance().fireSetMaxSize(this.s, f3, f4);
        }
        CallMraidJS.getInstance().fireSetDefaultPosition(this.s, r7.getLeft(), this.s.getTop(), this.s.getWidth(), this.s.getHeight());
        CallMraidJS.getInstance().fireSetCurrentPosition(this.s, r13.getLeft(), this.s.getTop(), this.s.getWidth(), this.s.getHeight());
        CallMraidJS.getInstance().fireChangeEventForPropertys(this.s, map);
        CallMraidJS.getInstance().fireAudioVolumeChange(this.s, MraidVolumeChangeReceiver.a);
        CallMraidJS.getInstance().fireReadyEvent(this.s);
    }

    public void volumeChange(double d2) {
        CallMraidJS.getInstance().fireAudioVolumeChange(this.s, d2);
    }

    @Override
    public void onWindowFocusChanged(boolean z) {
        super.onWindowFocusChanged(z);
        if (this.b == null || !this.b.H()) {
            return;
        }
        if (z) {
            CallMraidJS.getInstance().fireSetIsViewable(this.s, "true");
        } else {
            CallMraidJS.getInstance().fireSetIsViewable(this.s, "false");
        }
    }

    @Override
    protected void onVisibilityChanged(View view, int i) {
        super.onVisibilityChanged(view, i);
        if (i != 0 || this.ab) {
            return;
        }
        this.ab = true;
        setFocusableInTouchMode(true);
        requestFocus();
        requestFocusFromTouch();
    }

    private void a(String str) {
        try {
            String strAd = this.b.ad();
            if (!TextUtils.isEmpty(str)) {
                this.b.p(str);
            }
            new com.tkay.expressad.a.a(getContext(), this.x);
            this.b.p(strAd);
            this.e.a(126, "");
        } catch (Exception e2) {
            e2.getMessage();
        }
    }

    @Override
    public void close() {
        try {
            onCloseViewClick();
        } catch (Exception e2) {
            e2.getMessage();
        }
    }

    @Override
    public void unload() {
        close();
    }

    @Override
    public com.tkay.expressad.foundation.d.c getMraidCampaign() {
        return this.b;
    }

    @Override
    public void useCustomClose(boolean z) {
        try {
            setCloseVisibleForMraid(z ? 4 : 0);
        } catch (Exception e2) {
            e2.getMessage();
        }
    }

    public void setNotchValue(String str, int i, int i2, int i3, int i4) {
        if (this.b == null || this.b.f() == 2) {
            return;
        }
        this.ac = str;
        new StringBuilder("NOTCH H5ENDCARD ").append(String.format("%1s-%2s-%3s-%4s", Integer.valueOf(i), Integer.valueOf(i2), Integer.valueOf(i3), Integer.valueOf(i4)));
        RelativeLayout.LayoutParams layoutParams = (RelativeLayout.LayoutParams) this.r.getLayoutParams();
        int iB = t.b(getContext(), 20.0f);
        int i5 = i3 + iB;
        layoutParams.setMargins(i + iB, i5, i2 + iB, i4 + iB);
        new StringBuilder("NOTCH H5ENDCARD ").append(i5);
        this.r.setLayoutParams(layoutParams);
    }

    @Override
    public void open(String str) {
        try {
            String strAd = this.b.ad();
            if (!TextUtils.isEmpty(str)) {
                this.b.p(str);
            }
            new com.tkay.expressad.a.a(getContext(), this.x);
            this.b.p(strAd);
            this.e.a(126, "");
        } catch (Exception e2) {
            try {
                e2.getMessage();
            } catch (Exception e3) {
                e3.getMessage();
            }
        }
    }

    static void a(TkayH5EndCardView tkayH5EndCardView, long j) {
        try {
            if (tkayH5EndCardView.M) {
                return;
            }
            tkayH5EndCardView.M = true;
            String str = "2";
            if (w.b(tkayH5EndCardView.b.I()) && tkayH5EndCardView.b.I().contains(".zip")) {
                str = "1";
            }
            int i = 10;
            String str2 = "ready yes";
            if (tkayH5EndCardView.O == 2) {
                i = 11;
                str2 = "ready no";
            }
            StringBuilder sb = new StringBuilder("insertEndCardReadyState result:");
            sb.append(i);
            sb.append(" endCardLoadTime:");
            sb.append(j);
            sb.append(" endcardurl:");
            sb.append(tkayH5EndCardView.b.I());
            sb.append("  id:");
            sb.append(tkayH5EndCardView.b.aZ());
            sb.append("  unitid:");
            sb.append(tkayH5EndCardView.x);
            sb.append("  reason:");
            sb.append(str2);
            sb.append("  type:");
            sb.append(str);
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    static void g(TkayH5EndCardView tkayH5EndCardView) {
        if (tkayH5EndCardView.b == null || !tkayH5EndCardView.b.H()) {
            return;
        }
        int i = tkayH5EndCardView.getResources().getConfiguration().orientation;
        String str = "undefined";
        if (i != 0) {
            if (i == 1) {
                str = B;
            } else if (i == 2) {
                str = C;
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
        map.put(CallMraidJS.a, "Interstitial");
        map.put(CallMraidJS.b, "default");
        map.put(CallMraidJS.c, "true");
        map.put(CallMraidJS.d, jSONObject);
        if (tkayH5EndCardView.getContext() instanceof Activity) {
            float fE = k.e(tkayH5EndCardView.getContext());
            float f2 = k.f(tkayH5EndCardView.getContext());
            DisplayMetrics displayMetrics = new DisplayMetrics();
            ((Activity) tkayH5EndCardView.getContext()).getWindowManager().getDefaultDisplay().getMetrics(displayMetrics);
            float f3 = displayMetrics.widthPixels;
            float f4 = displayMetrics.heightPixels;
            CallMraidJS.getInstance().fireSetScreenSize(tkayH5EndCardView.s, fE, f2);
            CallMraidJS.getInstance().fireSetMaxSize(tkayH5EndCardView.s, f3, f4);
        }
        CallMraidJS.getInstance().fireSetDefaultPosition(tkayH5EndCardView.s, r7.getLeft(), tkayH5EndCardView.s.getTop(), tkayH5EndCardView.s.getWidth(), tkayH5EndCardView.s.getHeight());
        CallMraidJS.getInstance().fireSetCurrentPosition(tkayH5EndCardView.s, r13.getLeft(), tkayH5EndCardView.s.getTop(), tkayH5EndCardView.s.getWidth(), tkayH5EndCardView.s.getHeight());
        CallMraidJS.getInstance().fireChangeEventForPropertys(tkayH5EndCardView.s, map);
        CallMraidJS.getInstance().fireAudioVolumeChange(tkayH5EndCardView.s, MraidVolumeChangeReceiver.a);
        CallMraidJS.getInstance().fireReadyEvent(tkayH5EndCardView.s);
    }

    static void i(TkayH5EndCardView tkayH5EndCardView) {
        try {
            if (com.tkay.expressad.foundation.f.b.a().b()) {
                com.tkay.expressad.foundation.f.b.a().c(tkayH5EndCardView.x + "_1");
                FeedBackButton feedBackButtonB = com.tkay.expressad.foundation.f.b.a().b(tkayH5EndCardView.x + "_2");
                tkayH5EndCardView.H = feedBackButtonB;
                if (feedBackButtonB != null) {
                    ViewGroup viewGroup = (ViewGroup) feedBackButtonB.getParent();
                    if (viewGroup != null) {
                        viewGroup.removeView(tkayH5EndCardView.H);
                    }
                    tkayH5EndCardView.q.addView(tkayH5EndCardView.H);
                    tkayH5EndCardView.q.postDelayed(tkayH5EndCardView.new 5(), 200L);
                }
                tkayH5EndCardView.b.l(tkayH5EndCardView.x);
                com.tkay.expressad.foundation.f.b.a().a(tkayH5EndCardView.x + "_2", tkayH5EndCardView.b);
                com.tkay.expressad.foundation.f.b.a().a(tkayH5EndCardView.x + "_2", tkayH5EndCardView.new 6());
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }
}
