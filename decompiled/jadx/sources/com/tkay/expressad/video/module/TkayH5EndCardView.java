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
import com.tkay.core.common.b.m;
import com.tkay.expressad.atsignalcommon.mraid.CallMraidJS;
import com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge;
import com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver;
import com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView;
import com.tkay.expressad.atsignalcommon.windvane.j;
import com.tkay.expressad.foundation.h.k;
import com.tkay.expressad.foundation.h.t;
import com.tkay.expressad.foundation.h.w;
import com.tkay.expressad.video.signal.h;
import com.tkay.expressad.videocommon.b.g;
import com.tkay.expressad.widget.FeedBackButton;
import java.io.File;
import java.util.HashMap;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
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

    @Override // com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge
    public void expand(String str, boolean z) {
    }

    @Override // com.tkay.expressad.video.signal.h
    public void install(com.tkay.expressad.foundation.d.c cVar) {
    }

    @Override // com.tkay.expressad.video.signal.h
    public void readyStatus(int i) {
    }

    public void reportRenderResult(String str, int i) {
    }

    static /* synthetic */ boolean d(TkayH5EndCardView tkayH5EndCardView) {
        tkayH5EndCardView.N = true;
        return true;
    }

    static /* synthetic */ boolean e(TkayH5EndCardView tkayH5EndCardView) {
        tkayH5EndCardView.V = true;
        return true;
    }

    static /* synthetic */ boolean f(TkayH5EndCardView tkayH5EndCardView) {
        tkayH5EndCardView.W = true;
        return true;
    }

    static /* synthetic */ boolean l(TkayH5EndCardView tkayH5EndCardView) {
        tkayH5EndCardView.S = true;
        return true;
    }

    static /* synthetic */ boolean n(TkayH5EndCardView tkayH5EndCardView) {
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
        this.y = new Handler(Looper.getMainLooper()) { // from class: com.tkay.expressad.video.module.TkayH5EndCardView.1
            @Override // android.os.Handler
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
        this.y = new Handler(Looper.getMainLooper()) { // from class: com.tkay.expressad.video.module.TkayH5EndCardView.1
            @Override // android.os.Handler
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

    @Override // com.tkay.expressad.video.module.TkayBaseView
    public void onSelfConfigurationChanged(Configuration configuration) {
        super.onSelfConfigurationChanged(configuration);
        orientation(configuration);
    }

    @Override // com.tkay.expressad.video.module.TkayBaseView
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

    @Override // com.tkay.expressad.video.module.TkayBaseView
    protected final void c() {
        super.c();
        if (this.f) {
            this.r.setOnClickListener(new View.OnClickListener() { // from class: com.tkay.expressad.video.module.TkayH5EndCardView.2
                @Override // android.view.View.OnClickListener
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

        @Override // java.lang.Runnable
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
        To view partially-correct add '--show-bad-code' argument
    */
    public void preLoadData(com.tkay.expressad.video.signal.factory.b r10) {
        /*
            Method dump skipped, instruction units count: 320
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.video.module.TkayH5EndCardView.preLoadData(com.tkay.expressad.video.signal.factory.b):void");
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
        To view partially-correct add '--show-bad-code' argument
    */
    private void f() {
        /*
            r7 = this;
            java.lang.String r0 = "wfr=1"
            java.lang.String r1 = "="
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L95
            r7.P = r2     // Catch: java.lang.Throwable -> L95
            com.tkay.expressad.foundation.d.c r2 = r7.b     // Catch: java.lang.Throwable -> L95
            java.lang.String r2 = r2.I()     // Catch: java.lang.Throwable -> L95
            com.tkay.expressad.videocommon.e.c r3 = com.tkay.expressad.videocommon.e.c.a()     // Catch: java.lang.Throwable -> L95
            com.tkay.expressad.foundation.b.b r4 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Throwable -> L95
            java.lang.String r4 = r4.e()     // Catch: java.lang.Throwable -> L95
            java.lang.String r5 = r7.x     // Catch: java.lang.Throwable -> L95
            com.tkay.expressad.videocommon.e.d r3 = r3.a(r4, r5)     // Catch: java.lang.Throwable -> L95
            boolean r4 = r7.J     // Catch: java.lang.Throwable -> L95
            if (r4 == 0) goto L94
            boolean r4 = com.tkay.expressad.foundation.h.w.b(r2)     // Catch: java.lang.Throwable -> L95
            if (r4 == 0) goto L94
            boolean r4 = r2.contains(r0)     // Catch: java.lang.Throwable -> L95
            if (r4 != 0) goto L3a
            if (r3 == 0) goto L94
            int r4 = r3.o()     // Catch: java.lang.Throwable -> L95
            if (r4 <= 0) goto L94
        L3a:
            boolean r0 = r2.contains(r0)     // Catch: java.lang.Throwable -> L95
            r4 = 20
            if (r0 == 0) goto L7d
            java.lang.String r0 = "&"
            java.lang.String[] r0 = r2.split(r0)     // Catch: java.lang.Throwable -> L95
            if (r0 == 0) goto L8a
            int r2 = r0.length     // Catch: java.lang.Throwable -> L95
            if (r2 <= 0) goto L8a
            int r2 = r0.length     // Catch: java.lang.Throwable -> L95
            r3 = 0
        L4f:
            if (r3 >= r2) goto L8a
            r5 = r0[r3]     // Catch: java.lang.Throwable -> L95
            boolean r6 = com.tkay.expressad.foundation.h.w.b(r5)     // Catch: java.lang.Throwable -> L95
            if (r6 == 0) goto L7a
            java.lang.String r6 = "to"
            boolean r6 = r5.contains(r6)     // Catch: java.lang.Throwable -> L95
            if (r6 == 0) goto L7a
            java.lang.String[] r6 = r5.split(r1)     // Catch: java.lang.Throwable -> L95
            if (r6 == 0) goto L7a
            java.lang.String[] r6 = r5.split(r1)     // Catch: java.lang.Throwable -> L95
            int r6 = r6.length     // Catch: java.lang.Throwable -> L95
            if (r6 <= 0) goto L7a
            java.lang.String[] r0 = r5.split(r1)     // Catch: java.lang.Throwable -> L95
            r1 = 1
            r0 = r0[r1]     // Catch: java.lang.Throwable -> L95
            int r0 = com.tkay.expressad.foundation.h.t.a(r0)     // Catch: java.lang.Throwable -> L95
            goto L8b
        L7a:
            int r3 = r3 + 1
            goto L4f
        L7d:
            if (r3 == 0) goto L8a
            int r0 = r3.o()     // Catch: java.lang.Throwable -> L95
            if (r0 <= 0) goto L8a
            int r0 = r3.o()     // Catch: java.lang.Throwable -> L95
            goto L8b
        L8a:
            r0 = r4
        L8b:
            if (r0 < 0) goto L91
            r7.excuteEndCardShowTask(r0)     // Catch: java.lang.Throwable -> L95
            return
        L91:
            r7.excuteEndCardShowTask(r4)     // Catch: java.lang.Throwable -> L95
        L94:
            return
        L95:
            r0 = move-exception
            r0.getMessage()
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.video.module.TkayH5EndCardView.f():void");
    }

    @Override // com.tkay.expressad.video.module.TkayBaseView
    public void defaultShow() {
        super.defaultShow();
    }

    @Override // com.tkay.expressad.video.signal.h
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

    @Override // com.tkay.expressad.video.signal.h
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

        @Override // java.lang.Runnable
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

        @Override // java.lang.Runnable
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

    @Override // com.tkay.expressad.video.signal.h
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
            windVaneWebView.post(new Runnable() { // from class: com.tkay.expressad.video.module.TkayH5EndCardView.4
                @Override // java.lang.Runnable
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
                    this.q.postDelayed(new AnonymousClass5(), 200L);
                }
                this.b.l(this.x);
                com.tkay.expressad.foundation.f.b.a().a(this.x + "_2", this.b);
                com.tkay.expressad.foundation.f.b.a().a(this.x + "_2", new AnonymousClass6());
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }

    /* JADX INFO: renamed from: com.tkay.expressad.video.module.TkayH5EndCardView$5, reason: invalid class name */
    final class AnonymousClass5 implements Runnable {
        AnonymousClass5() {
        }

        @Override // java.lang.Runnable
        public final void run() {
            TkayH5EndCardView.this.H.setVisibility(0);
        }
    }

    /* JADX INFO: renamed from: com.tkay.expressad.video.module.TkayH5EndCardView$6, reason: invalid class name */
    final class AnonymousClass6 implements com.tkay.expressad.foundation.f.a {
        AnonymousClass6() {
        }

        @Override // com.tkay.expressad.foundation.f.a
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

        @Override // com.tkay.expressad.foundation.f.a
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

        @Override // com.tkay.expressad.foundation.f.a
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

    @Override // com.tkay.expressad.video.signal.h
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
                        if (!com.tkay.expressad.b.f6449a) {
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

        @Override // java.lang.Runnable
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

        @Override // java.lang.Runnable
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

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private TkayH5EndCardView f7298a;
        private int b;

        public c(TkayH5EndCardView tkayH5EndCardView, int i) {
            this.f7298a = tkayH5EndCardView;
            this.b = i;
        }

        @Override // java.lang.Runnable
        public final void run() {
            TkayH5EndCardView tkayH5EndCardView = this.f7298a;
            if (tkayH5EndCardView == null || tkayH5EndCardView.b == null) {
                return;
            }
            try {
                if (this.f7298a.M) {
                    return;
                }
                TkayH5EndCardView.n(this.f7298a);
                if (w.b(this.f7298a.b.I())) {
                    this.f7298a.b.I().contains(".zip");
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
        map.put(CallMraidJS.f6428a, "Interstitial");
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
        CallMraidJS.getInstance().fireAudioVolumeChange(this.s, MraidVolumeChangeReceiver.f6432a);
        CallMraidJS.getInstance().fireReadyEvent(this.s);
    }

    public void volumeChange(double d2) {
        CallMraidJS.getInstance().fireAudioVolumeChange(this.s, d2);
    }

    @Override // android.view.View
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

    @Override // android.view.View
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

    @Override // com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge
    public void close() {
        try {
            onCloseViewClick();
        } catch (Exception e2) {
            e2.getMessage();
        }
    }

    @Override // com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge
    public void unload() {
        close();
    }

    @Override // com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge
    public com.tkay.expressad.foundation.d.c getMraidCampaign() {
        return this.b;
    }

    @Override // com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge
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

    @Override // com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge
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

    static /* synthetic */ void a(TkayH5EndCardView tkayH5EndCardView, long j) {
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

    static /* synthetic */ void g(TkayH5EndCardView tkayH5EndCardView) {
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
        map.put(CallMraidJS.f6428a, "Interstitial");
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
        CallMraidJS.getInstance().fireAudioVolumeChange(tkayH5EndCardView.s, MraidVolumeChangeReceiver.f6432a);
        CallMraidJS.getInstance().fireReadyEvent(tkayH5EndCardView.s);
    }

    static /* synthetic */ void i(TkayH5EndCardView tkayH5EndCardView) {
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
                    tkayH5EndCardView.q.postDelayed(tkayH5EndCardView.new AnonymousClass5(), 200L);
                }
                tkayH5EndCardView.b.l(tkayH5EndCardView.x);
                com.tkay.expressad.foundation.f.b.a().a(tkayH5EndCardView.x + "_2", tkayH5EndCardView.b);
                com.tkay.expressad.foundation.f.b.a().a(tkayH5EndCardView.x + "_2", tkayH5EndCardView.new AnonymousClass6());
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }
}
