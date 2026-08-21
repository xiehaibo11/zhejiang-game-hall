package com.tkay.expressad.splash.c;

import android.app.Activity;
import android.content.Context;
import android.graphics.Rect;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.text.TextUtils;
import android.util.Base64;
import android.view.View;
import android.view.ViewGroup;
import android.webkit.WebView;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.tkay.core.common.b.m;
import com.tkay.core.common.l.a.f;
import com.tkay.core.common.l.u;
import com.tkay.expressad.atsignalcommon.windvane.j;
import com.tkay.expressad.foundation.h.i;
import com.tkay.expressad.foundation.h.t;
import com.tkay.expressad.splash.js.SplashJSBridgeImpl;
import com.tkay.expressad.splash.js.SplashJsUtils;
import com.tkay.expressad.splash.view.TYSplashView;
import com.tkay.expressad.splash.view.TYSplashWebview;
import com.tkay.expressad.widget.FeedBackButton;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public final class d {
    private com.tkay.expressad.foundation.d.c d;
    private TYSplashView e;
    private com.tkay.expressad.splash.d.d f;
    private com.tkay.expressad.a.a g;
    private boolean h;
    private TextView i;
    private View j;
    private String k;
    private String l;
    private String n;
    private String o;
    private String p;
    private String q;
    private boolean r;
    private boolean s;
    private Context u;
    private String c = "SplashShowManager";
    private int m = 5;
    private boolean t = false;
    private View.OnClickListener v = new View.OnClickListener() { // from class: com.tkay.expressad.splash.c.d.1
        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
            if (d.this.h) {
                d.b(d.this);
                d.a(d.this, -1);
            }
        }
    };
    private f.b w = new f.b();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public Handler f7106a = new Handler(Looper.getMainLooper()) { // from class: com.tkay.expressad.splash.c.d.2
        @Override // android.os.Handler
        public final void handleMessage(Message message) {
            super.handleMessage(message);
            int i = message.what;
            if (i != 1) {
                if (i == 2 && d.this.d != null && d.this.d.ay() && d.this.e != null) {
                    d.this.e.getSplashWebview();
                    return;
                }
                return;
            }
            if (d.this.t) {
                return;
            }
            if (u.a(d.this.e, d.this.w)) {
                if (d.this.m > 0) {
                    d.g(d.this);
                    d dVar = d.this;
                    d.a(dVar, dVar.m);
                    d.this.f7106a.removeMessages(1);
                    sendEmptyMessageDelayed(1, 1000L);
                    return;
                }
                d.b(d.this);
                return;
            }
            d.this.f7106a.removeMessages(1);
            sendEmptyMessageDelayed(1, 1000L);
        }
    };
    private com.tkay.expressad.splash.d.a x = new com.tkay.expressad.splash.d.a() { // from class: com.tkay.expressad.splash.c.d.3
        @Override // com.tkay.expressad.splash.d.a
        public final void b() {
        }

        @Override // com.tkay.expressad.splash.d.a
        public final void a(int i) {
            if (d.this.e != null) {
                d.this.e.changeCloseBtnState(i);
            }
        }

        @Override // com.tkay.expressad.splash.d.a
        public final void a() {
            d.b(d.this);
        }

        @Override // com.tkay.expressad.splash.d.a
        public final void a(com.tkay.expressad.foundation.d.c cVar) {
            d.this.a(cVar);
        }

        @Override // com.tkay.expressad.splash.d.a
        public final void b(int i) {
            String unused = d.this.c;
            d.this.m = i;
            d.this.f7106a.removeMessages(1);
            d.this.f7106a.sendEmptyMessageDelayed(1, 1000L);
        }

        @Override // com.tkay.expressad.splash.d.a
        public final void a(int i, int i2) {
            if (i == 1) {
                d.this.f7106a.removeMessages(1);
            }
            if (i == 2) {
                d.this.m = i2;
                d.this.f7106a.removeMessages(1);
                d.this.f7106a.sendEmptyMessageDelayed(1, 1000L);
            }
        }

        @Override // com.tkay.expressad.splash.d.a
        public final void a(String str) {
            d.a(d.this, str);
        }

        @Override // com.tkay.expressad.splash.d.a
        public final void c() {
            d.b(d.this);
        }

        @Override // com.tkay.expressad.splash.d.a
        public final void a(boolean z) {
            if (z) {
                d.this.f7106a.removeMessages(1);
            }
        }

        @Override // com.tkay.expressad.splash.d.a
        public final void b(String str) {
            try {
                if (d.this.f != null) {
                    if (TextUtils.isEmpty(str)) {
                        d.this.f.a(d.this.d);
                        return;
                    }
                    com.tkay.expressad.foundation.d.c cVarB = com.tkay.expressad.foundation.d.c.b(com.tkay.expressad.foundation.d.c.a(d.this.d));
                    cVarB.p(str);
                    d.this.a(cVarB);
                }
            } catch (Exception e) {
                String unused = d.this.c;
                e.getMessage();
            }
        }
    };
    Rect b = new Rect();

    static /* synthetic */ int g(d dVar) {
        int i = dVar.m;
        dVar.m = i - 1;
        return i;
    }

    public d(Context context, String str, String str2) {
        this.n = "";
        this.o = "";
        this.p = "";
        this.q = "";
        this.k = str2;
        this.l = str;
        this.u = context;
        int iA = i.a(context.getApplicationContext(), "tkay_splash_count_time_can_skip", i.g);
        int iA2 = i.a(this.u.getApplicationContext(), "tkay_splash_count_time_can_skip_not", i.g);
        int iA3 = i.a(this.u.getApplicationContext(), "tkay_splash_count_time_can_skip_s", i.g);
        this.o = this.u.getResources().getString(iA);
        this.q = this.u.getResources().getString(iA2);
        this.p = this.u.getResources().getString(iA3);
        if (this.i == null) {
            TextView textView = new TextView(context);
            this.i = textView;
            textView.setGravity(1);
            this.i.setTextIsSelectable(false);
            this.i.setPadding(t.b(context, 5.0f), t.b(context, 5.0f), t.b(context, 5.0f), t.b(context, 5.0f));
            RelativeLayout.LayoutParams layoutParams = (RelativeLayout.LayoutParams) this.i.getLayoutParams();
            this.i.setLayoutParams(layoutParams == null ? new RelativeLayout.LayoutParams(t.b(context, 100.0f), t.b(context, 50.0f)) : layoutParams);
            Context contextF = m.a().f();
            if (contextF != null) {
                String strA = com.tkay.expressad.foundation.b.b.b().a();
                int identifier = contextF.getResources().getIdentifier("tkay_splash_count_time_can_skip", i.g, strA);
                int identifier2 = contextF.getResources().getIdentifier("tkay_splash_count_time_can_skip_not", i.g, strA);
                int identifier3 = contextF.getResources().getIdentifier("tkay_splash_count_time_can_skip_s", i.g, strA);
                this.o = contextF.getResources().getString(identifier);
                String string = contextF.getResources().getString(identifier2);
                this.q = string;
                this.n = string;
                this.p = contextF.getResources().getString(identifier3);
                this.i.setBackgroundResource(contextF.getResources().getIdentifier("tkay_splash_close_bg", i.c, com.tkay.expressad.foundation.b.b.b().a()));
                this.i.setTextColor(contextF.getResources().getColor(contextF.getResources().getIdentifier("tkay_splash_count_time_skip_text_color", "color", strA)));
            }
        }
    }

    private void f() {
        Context contextF = m.a().f();
        if (contextF != null) {
            String strA = com.tkay.expressad.foundation.b.b.b().a();
            int identifier = contextF.getResources().getIdentifier("tkay_splash_count_time_can_skip", i.g, strA);
            int identifier2 = contextF.getResources().getIdentifier("tkay_splash_count_time_can_skip_not", i.g, strA);
            int identifier3 = contextF.getResources().getIdentifier("tkay_splash_count_time_can_skip_s", i.g, strA);
            this.o = contextF.getResources().getString(identifier);
            String string = contextF.getResources().getString(identifier2);
            this.q = string;
            this.n = string;
            this.p = contextF.getResources().getString(identifier3);
            this.i.setBackgroundResource(contextF.getResources().getIdentifier("tkay_splash_close_bg", i.c, com.tkay.expressad.foundation.b.b.b().a()));
            this.i.setTextColor(contextF.getResources().getColor(contextF.getResources().getIdentifier("tkay_splash_count_time_skip_text_color", "color", strA)));
        }
    }

    public final void a(com.tkay.expressad.splash.d.d dVar) {
        this.f = dVar;
    }

    public final void a(int i) {
        this.m = i;
    }

    public final void a(ViewGroup viewGroup) {
        if (viewGroup != null) {
            viewGroup.setOnClickListener(this.v);
        }
        this.j = viewGroup;
    }

    public final com.tkay.expressad.splash.d.a a() {
        return this.x;
    }

    public final void a(com.tkay.expressad.foundation.d.c cVar, TYSplashView tYSplashView) {
        a(this.h);
        this.d = cVar;
        this.e = tYSplashView;
        SplashJSBridgeImpl splashJSBridgeImpl = tYSplashView.getSplashJSBridgeImpl();
        if (splashJSBridgeImpl == null) {
            splashJSBridgeImpl = new SplashJSBridgeImpl(tYSplashView.getContext(), this.l, this.k);
            ArrayList arrayList = new ArrayList();
            arrayList.add(cVar);
            splashJSBridgeImpl.setCampaignList(arrayList);
        }
        splashJSBridgeImpl.setCountdownS(this.m);
        splashJSBridgeImpl.setAllowSkip(this.h ? 1 : 0);
        splashJSBridgeImpl.setSplashBridgeListener(this.x);
        tYSplashView.setSplashJSBridgeImpl(splashJSBridgeImpl);
        boolean zS = cVar.s();
        View view = this.j;
        if (view == null) {
            if (zS) {
                this.i.setVisibility(8);
            }
            i();
            b(this.i);
            tYSplashView.setCloseView(this.i);
        } else {
            if (zS) {
                view.setVisibility(8);
            }
            b(this.j);
            tYSplashView.setCloseView(this.j);
        }
        tYSplashView.show();
        com.tkay.expressad.foundation.d.c cVar2 = this.d;
        if (cVar2 != null && cVar2.ay() && tYSplashView != null) {
            tYSplashView.getSplashWebview();
        }
        tYSplashView.addOnAttachStateChangeListener(new View.OnAttachStateChangeListener() { // from class: com.tkay.expressad.splash.c.d.4
            @Override // android.view.View.OnAttachStateChangeListener
            public final void onViewDetachedFromWindow(View view2) {
            }

            @Override // android.view.View.OnAttachStateChangeListener
            public final void onViewAttachedToWindow(View view2) {
                m.a().a(new Runnable() { // from class: com.tkay.expressad.splash.c.d.4.1
                    @Override // java.lang.Runnable
                    public final void run() {
                        if (d.a(d.this, d.this.e)) {
                            d.this.g();
                        }
                    }
                }, 30L);
            }
        });
        m.a().a(new Runnable() { // from class: com.tkay.expressad.splash.c.d.5
            @Override // java.lang.Runnable
            public final void run() {
                d dVar = d.this;
                if (d.a(dVar, dVar.e)) {
                    d.this.g();
                }
            }
        }, 30L);
        b.a(this.d.be());
        this.f7106a.removeMessages(1);
        this.f7106a.sendEmptyMessageDelayed(1, 1000L);
        this.f7106a.sendEmptyMessageDelayed(2, 1000L);
        if (!com.tkay.expressad.foundation.f.b.a().b() || this.e.isDynamicView()) {
            return;
        }
        com.tkay.expressad.foundation.f.b.a().a(this.k, new AnonymousClass6());
        FeedBackButton feedBackButtonB = com.tkay.expressad.foundation.f.b.a().b(this.k);
        if (feedBackButtonB != null) {
            RelativeLayout.LayoutParams layoutParams = null;
            try {
                layoutParams = (RelativeLayout.LayoutParams) feedBackButtonB.getLayoutParams();
            } catch (Exception e) {
                e.printStackTrace();
            }
            if (layoutParams == null) {
                layoutParams = new RelativeLayout.LayoutParams(com.tkay.expressad.foundation.f.b.f6861a, com.tkay.expressad.foundation.f.b.b);
            }
            layoutParams.topMargin = t.b(m.a().f(), 10.0f);
            layoutParams.leftMargin = t.b(m.a().f(), 10.0f);
            ViewGroup viewGroup = (ViewGroup) feedBackButtonB.getParent();
            if (viewGroup != null) {
                viewGroup.removeView(feedBackButtonB);
            }
            this.e.addView(feedBackButtonB, layoutParams);
        }
        this.d.l(this.k);
        com.tkay.expressad.foundation.f.b.a().a(this.k, this.d);
    }

    private boolean a(View view) {
        return view != null && view.getVisibility() == 0 && view.getParent() != null && view.getWindowVisibility() == 0 && view.getGlobalVisibleRect(this.b) && ((long) this.b.height()) * ((long) this.b.width()) > 0;
    }

    public final String b() {
        com.tkay.expressad.foundation.d.c cVar = this.d;
        return (cVar == null || cVar.Z() == null) ? "" : this.d.Z();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public synchronized void g() {
        if (this.d != null && !this.s) {
            boolean z = true;
            this.s = true;
            if (this.f != null && this.e != null) {
                if (this.u != null && (this.u instanceof Activity) && ((Activity) this.u).isFinishing()) {
                    this.f.a("Activity is finishing");
                    return;
                }
                this.f.a();
            }
            if (!this.d.V()) {
                if (!this.e.isDynamicView()) {
                    com.tkay.expressad.foundation.d.c cVar = this.d;
                    if (cVar.s()) {
                        z = false;
                    } else {
                        c(cVar, m.a().f(), this.k);
                        cVar.c(true);
                        com.tkay.expressad.foundation.g.a.f.a(this.k, cVar, com.tkay.expressad.foundation.g.a.f.f);
                    }
                    if (z) {
                        b(cVar, m.a().f(), this.k);
                        a(cVar, m.a().f(), this.k);
                    }
                    return;
                }
                com.tkay.expressad.foundation.d.c cVar2 = this.d;
                b(cVar2, m.a().f(), this.k);
                c(cVar2, m.a().f(), this.k);
                a(cVar2, m.a().f(), this.k);
                cVar2.c(true);
                com.tkay.expressad.foundation.g.a.f.a(this.k, cVar2, com.tkay.expressad.foundation.g.a.f.f);
            }
        }
    }

    private void h() {
        if (com.tkay.expressad.foundation.f.b.a().b() && !this.e.isDynamicView()) {
            com.tkay.expressad.foundation.f.b.a().a(this.k, new AnonymousClass6());
            FeedBackButton feedBackButtonB = com.tkay.expressad.foundation.f.b.a().b(this.k);
            if (feedBackButtonB != null) {
                RelativeLayout.LayoutParams layoutParams = null;
                try {
                    layoutParams = (RelativeLayout.LayoutParams) feedBackButtonB.getLayoutParams();
                } catch (Exception e) {
                    e.printStackTrace();
                }
                if (layoutParams == null) {
                    layoutParams = new RelativeLayout.LayoutParams(com.tkay.expressad.foundation.f.b.f6861a, com.tkay.expressad.foundation.f.b.b);
                }
                layoutParams.topMargin = t.b(m.a().f(), 10.0f);
                layoutParams.leftMargin = t.b(m.a().f(), 10.0f);
                ViewGroup viewGroup = (ViewGroup) feedBackButtonB.getParent();
                if (viewGroup != null) {
                    viewGroup.removeView(feedBackButtonB);
                }
                this.e.addView(feedBackButtonB, layoutParams);
            }
            this.d.l(this.k);
            com.tkay.expressad.foundation.f.b.a().a(this.k, this.d);
        }
    }

    /* JADX INFO: renamed from: com.tkay.expressad.splash.c.d$6, reason: invalid class name */
    final class AnonymousClass6 implements com.tkay.expressad.foundation.f.a {
        AnonymousClass6() {
        }

        @Override // com.tkay.expressad.foundation.f.a
        public final void a() {
            String string;
            d.this.e();
            try {
                JSONObject jSONObject = new JSONObject();
                if (m.a().f() != null) {
                    jSONObject.put("status", 1);
                }
                string = jSONObject.toString();
            } catch (Throwable th) {
                String unused = d.this.c;
                th.getMessage();
                string = "";
            }
            String strEncodeToString = Base64.encodeToString(string.getBytes(), 2);
            j.a();
            j.a((WebView) d.this.e.getSplashWebview(), "onFeedbackAlertStatusNotify", strEncodeToString);
        }

        @Override // com.tkay.expressad.foundation.f.a
        public final void b() {
            String string;
            d.this.d();
            try {
                JSONObject jSONObject = new JSONObject();
                if (m.a().f() != null) {
                    jSONObject.put("status", 2);
                }
                string = jSONObject.toString();
            } catch (Throwable th) {
                String unused = d.this.c;
                th.getMessage();
                string = "";
            }
            String strEncodeToString = Base64.encodeToString(string.getBytes(), 2);
            j.a();
            j.a((WebView) d.this.e.getSplashWebview(), "onFeedbackAlertStatusNotify", strEncodeToString);
        }

        @Override // com.tkay.expressad.foundation.f.a
        public final void c() {
            String string;
            d.this.d();
            try {
                JSONObject jSONObject = new JSONObject();
                if (m.a().f() != null) {
                    jSONObject.put("status", 2);
                }
                string = jSONObject.toString();
            } catch (Throwable th) {
                String unused = d.this.c;
                th.getMessage();
                string = "";
            }
            String strEncodeToString = Base64.encodeToString(string.getBytes(), 2);
            j.a();
            j.a((WebView) d.this.e.getSplashWebview(), "onFeedbackAlertStatusNotify", strEncodeToString);
        }
    }

    private void b(com.tkay.expressad.foundation.d.c cVar) {
        boolean z = true;
        if (cVar.s()) {
            z = false;
        } else {
            c(cVar, m.a().f(), this.k);
            cVar.c(true);
            com.tkay.expressad.foundation.g.a.f.a(this.k, cVar, com.tkay.expressad.foundation.g.a.f.f);
        }
        if (z) {
            b(cVar, m.a().f(), this.k);
            a(cVar, m.a().f(), this.k);
        }
    }

    private void c(com.tkay.expressad.foundation.d.c cVar) {
        b(cVar, m.a().f(), this.k);
        c(cVar, m.a().f(), this.k);
        a(cVar, m.a().f(), this.k);
        cVar.c(true);
        com.tkay.expressad.foundation.g.a.f.a(this.k, cVar, com.tkay.expressad.foundation.g.a.f.f);
    }

    private void a(String str) {
        com.tkay.expressad.splash.d.d dVar = this.f;
        if (dVar != null) {
            dVar.a("web show failed:".concat(String.valueOf(str)));
        }
    }

    public final void a(boolean z) {
        this.h = z;
        if (z) {
            this.n = this.o;
        } else {
            this.n = this.q;
        }
    }

    public final void a(com.tkay.expressad.foundation.d.c cVar) {
        if (cVar != null) {
            try {
                cVar.aA();
            } catch (Throwable th) {
                th.getMessage();
            }
        }
        com.tkay.expressad.splash.d.d dVar = this.f;
        if (dVar != null) {
            dVar.a(cVar);
        }
    }

    private void d(com.tkay.expressad.foundation.d.c cVar) {
        com.tkay.expressad.splash.d.d dVar = this.f;
        if (dVar != null) {
            dVar.a(cVar);
        }
    }

    private void b(int i) {
        TYSplashView tYSplashView = this.e;
        if (tYSplashView != null) {
            tYSplashView.updateCountdown(i);
            if (this.e.getSplashJSBridgeImpl() != null) {
                this.e.getSplashJSBridgeImpl().updateCountDown(i);
            }
        }
        if (i < 0) {
            this.m = i;
        } else if (this.j == null) {
            i();
        }
    }

    private void i() {
        String str;
        if (this.h) {
            str = this.o + this.m + this.p;
        } else {
            str = this.m + this.q;
        }
        this.i.setText(str);
    }

    private void b(View view) {
        if (view != null) {
            view.setOnClickListener(this.v);
        }
    }

    private void j() {
        try {
            this.t = true;
            if (this.f != null) {
                this.f.b();
                this.f = null;
            }
            this.s = false;
            if (this.e != null) {
                this.e.getSplashWebview();
            }
            if (this.f7106a != null) {
                this.f7106a.removeCallbacksAndMessages(null);
            }
        } catch (Throwable unused) {
        }
    }

    private static void a(com.tkay.expressad.foundation.d.c cVar, Context context, String str) {
        if (cVar != null) {
            try {
                List<String> listE = cVar.e();
                if (listE == null || listE.size() <= 0) {
                    return;
                }
                Iterator<String> it = listE.iterator();
                while (it.hasNext()) {
                    com.tkay.expressad.a.a.a(context, cVar, str, it.next(), true);
                }
            } catch (Throwable th) {
                th.getMessage();
            }
        }
    }

    private static void b(com.tkay.expressad.foundation.d.c cVar, Context context, String str) {
        if (cVar != null) {
            try {
                if (TextUtils.isEmpty(cVar.ai())) {
                    return;
                }
                com.tkay.expressad.a.a.a(context, cVar, str, cVar.ai(), false, true, com.tkay.expressad.a.a.a.j);
            } catch (Throwable th) {
                th.getMessage();
            }
        }
    }

    private static void c(com.tkay.expressad.foundation.d.c cVar, Context context, String str) {
        com.tkay.expressad.foundation.b.b.b().b(context);
        if (!TextUtils.isEmpty(cVar.ag())) {
            com.tkay.expressad.a.a.a(context, cVar, str, cVar.ag(), false, true, com.tkay.expressad.a.a.a.i);
        }
        if (TextUtils.isEmpty(str) || cVar.L() == null || cVar.L().o() == null) {
            return;
        }
        com.tkay.expressad.a.a.a(context, cVar, str, cVar.L().o(), false);
    }

    public final void c() {
        if (this.f != null) {
            this.f = null;
        }
        if (this.x != null) {
            this.x = null;
        }
        if (this.v != null) {
            this.v = null;
        }
        TYSplashView tYSplashView = this.e;
        if (tYSplashView != null) {
            tYSplashView.destroy();
        }
        com.tkay.expressad.foundation.f.b.a().c(this.k);
    }

    public final void d() {
        Handler handler;
        if (this.r || com.tkay.expressad.foundation.f.b.c) {
            return;
        }
        if (this.m > 0 && (handler = this.f7106a) != null) {
            handler.removeMessages(1);
            this.f7106a.sendEmptyMessageDelayed(1, 1000L);
        }
        TYSplashView tYSplashView = this.e;
        if (tYSplashView != null) {
            tYSplashView.onResume();
            TYSplashWebview splashWebview = this.e.getSplashWebview();
            if (splashWebview == null || splashWebview.isDestroyed()) {
                return;
            }
            SplashJsUtils.sendEventToH5(splashWebview, SplashJsUtils.b, "");
        }
    }

    public final void e() {
        Handler handler;
        if (this.m > 0 && (handler = this.f7106a) != null) {
            handler.removeMessages(1);
        }
        TYSplashView tYSplashView = this.e;
        if (tYSplashView != null) {
            tYSplashView.onPause();
            TYSplashWebview splashWebview = this.e.getSplashWebview();
            if (splashWebview == null || splashWebview.isDestroyed()) {
                return;
            }
            SplashJsUtils.sendEventToH5(splashWebview, SplashJsUtils.f7131a, "");
        }
    }

    private void k() {
        TYSplashWebview splashWebview;
        Handler handler;
        this.r = false;
        if (this.m > 0 && (handler = this.f7106a) != null) {
            handler.removeMessages(1);
            this.f7106a.sendEmptyMessageDelayed(1, 1000L);
        }
        TYSplashView tYSplashView = this.e;
        if (tYSplashView == null || (splashWebview = tYSplashView.getSplashWebview()) == null || splashWebview.isDestroyed()) {
            return;
        }
        SplashJsUtils.sendEventToH5(splashWebview, "onInstallAlertHide", "");
    }

    private void l() {
        TYSplashWebview splashWebview;
        Handler handler;
        this.r = true;
        if (this.m > 0 && (handler = this.f7106a) != null) {
            handler.removeMessages(1);
        }
        TYSplashView tYSplashView = this.e;
        if (tYSplashView == null || (splashWebview = tYSplashView.getSplashWebview()) == null || splashWebview.isDestroyed()) {
            return;
        }
        SplashJsUtils.sendEventToH5(splashWebview, "onInstallAlertShow", "");
    }

    static /* synthetic */ void b(d dVar) {
        try {
            dVar.t = true;
            if (dVar.f != null) {
                dVar.f.b();
                dVar.f = null;
            }
            dVar.s = false;
            if (dVar.e != null) {
                dVar.e.getSplashWebview();
            }
            if (dVar.f7106a != null) {
                dVar.f7106a.removeCallbacksAndMessages(null);
            }
        } catch (Throwable unused) {
        }
    }

    static /* synthetic */ void a(d dVar, int i) {
        TYSplashView tYSplashView = dVar.e;
        if (tYSplashView != null) {
            tYSplashView.updateCountdown(i);
            if (dVar.e.getSplashJSBridgeImpl() != null) {
                dVar.e.getSplashJSBridgeImpl().updateCountDown(i);
            }
        }
        if (i < 0) {
            dVar.m = i;
        } else if (dVar.j == null) {
            dVar.i();
        }
    }

    static /* synthetic */ void a(d dVar, String str) {
        com.tkay.expressad.splash.d.d dVar2 = dVar.f;
        if (dVar2 != null) {
            dVar2.a("web show failed:".concat(String.valueOf(str)));
        }
    }

    static /* synthetic */ boolean a(d dVar, View view) {
        return view != null && view.getVisibility() == 0 && view.getParent() != null && view.getWindowVisibility() == 0 && view.getGlobalVisibleRect(dVar.b) && ((long) dVar.b.height()) * ((long) dVar.b.width()) > 0;
    }
}
