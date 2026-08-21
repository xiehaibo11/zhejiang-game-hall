package com.tkay.expressad.advanced.c;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.text.TextUtils;
import android.util.Base64;
import android.view.View;
import android.view.ViewGroup;
import android.webkit.WebView;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import com.tkay.core.common.b.m;
import com.tkay.expressad.advanced.d.d;
import com.tkay.expressad.advanced.js.NativeAdvancedJSBridgeImpl;
import com.tkay.expressad.advanced.js.NativeAdvancedJsUtils;
import com.tkay.expressad.advanced.view.TYNativeAdvancedView;
import com.tkay.expressad.advanced.view.TYNativeAdvancedWebview;
import com.tkay.expressad.atsignalcommon.windvane.j;
import com.tkay.expressad.foundation.g.a.f;
import com.tkay.expressad.foundation.h.i;
import com.tkay.expressad.foundation.h.t;
import com.tkay.expressad.foundation.h.y;
import com.tkay.expressad.widget.FeedBackButton;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.json.JSONObject;

public final class b {
    private com.tkay.expressad.foundation.d.c c;
    private TYNativeAdvancedView d;
    private d e;
    private com.tkay.expressad.a.a f;
    private com.tkay.expressad.advanced.d.c g;
    private boolean h;
    private ImageView j;
    private String k;
    private String l;
    private boolean m;
    private String b = "NativeAdvancedShowManager";
    private int i = -1;
    private View.OnClickListener n = new View.OnClickListener() {
        @Override
        public final void onClick(View view) {
            if (b.this.h) {
                b.b(b.this);
            }
        }
    };
    public Handler a = new Handler(Looper.getMainLooper()) {
        @Override
        public final void handleMessage(Message message) {
            super.handleMessage(message);
            if (message.what == 2 && b.this.c != null && b.this.c.ay() && b.this.d != null) {
                b.this.d.getAdvancedNativeWebview();
            }
        }
    };
    private com.tkay.expressad.advanced.d.a o = new com.tkay.expressad.advanced.d.a() {
        @Override
        public final void b() {
        }

        @Override
        public final void d() {
        }

        @Override
        public final void a(int i) {
            b.this.i = i;
            if (b.this.d != null) {
                b.this.d.changeCloseBtnState(i);
            }
        }

        @Override
        public final void a() {
            if (b.this.d != null) {
                b.this.d.setVisibility(8);
            }
            b.b(b.this);
        }

        @Override
        public final void a(com.tkay.expressad.foundation.d.c cVar) {
            b.this.a(cVar);
        }

        @Override
        public final void c() {
            String unused = b.this.b;
        }

        @Override
        public final void e() {
            b.b(b.this);
        }

        @Override
        public final void a(boolean z) {
            if (b.this.e != null) {
                b.this.m = z;
                if (z) {
                    d unused = b.this.e;
                } else {
                    d unused2 = b.this.e;
                }
            }
        }

        @Override
        public final void a(String str) {
            try {
                if (b.this.e != null) {
                    if (TextUtils.isEmpty(str)) {
                        b.this.e.a(b.this.c);
                        d unused = b.this.e;
                    } else {
                        com.tkay.expressad.foundation.d.c cVarB = com.tkay.expressad.foundation.d.c.b(com.tkay.expressad.foundation.d.c.a(b.this.c));
                        cVarB.p(str);
                        b.this.a(cVarB);
                    }
                }
            } catch (Exception e) {
                String unused2 = b.this.b;
                e.getMessage();
            }
        }
    };

    private static void h() {
    }

    private static void j() {
    }

    public b(Context context, String str, String str2) {
        this.k = str2;
        this.l = str;
        if (this.j == null) {
            ImageView imageView = new ImageView(context);
            this.j = imageView;
            imageView.setPadding(t.b(context, 2.0f), t.b(context, 2.0f), t.b(context, 2.0f), t.b(context, 2.0f));
            Context contextF = m.a().f();
            this.j.setScaleType(ImageView.ScaleType.FIT_XY);
            RelativeLayout.LayoutParams layoutParams = (RelativeLayout.LayoutParams) this.j.getLayoutParams();
            this.j.setLayoutParams(layoutParams == null ? new RelativeLayout.LayoutParams(t.b(contextF, 29.0f), t.b(contextF, 16.0f)) : layoutParams);
            this.j.setImageResource(contextF.getResources().getIdentifier("tkay_native_advanced_close_icon", i.c, com.tkay.expressad.foundation.b.b.b().a()));
        }
    }

    public final void a(com.tkay.expressad.advanced.d.c cVar) {
        this.g = cVar;
    }

    private void f() {
        Context contextF = m.a().f();
        this.j.setScaleType(ImageView.ScaleType.FIT_XY);
        RelativeLayout.LayoutParams layoutParams = (RelativeLayout.LayoutParams) this.j.getLayoutParams();
        if (layoutParams == null) {
            layoutParams = new RelativeLayout.LayoutParams(t.b(contextF, 29.0f), t.b(contextF, 16.0f));
        }
        this.j.setLayoutParams(layoutParams);
        this.j.setImageResource(contextF.getResources().getIdentifier("tkay_native_advanced_close_icon", i.c, com.tkay.expressad.foundation.b.b.b().a()));
    }

    public final void a(d dVar) {
        this.e = dVar;
    }

    public final String a() {
        com.tkay.expressad.foundation.d.c cVar = this.c;
        return (cVar == null || cVar.Z() == null) ? "" : this.c.Z();
    }

    public final com.tkay.expressad.advanced.d.a b() {
        return this.o;
    }

    public final void a(final com.tkay.expressad.foundation.d.c cVar, final TYNativeAdvancedView tYNativeAdvancedView, boolean z) {
        FeedBackButton feedBackButtonB;
        if (tYNativeAdvancedView == null) {
            return;
        }
        com.tkay.expressad.foundation.f.b.a().a(this.k, new com.tkay.expressad.foundation.f.a() {
            @Override
            public final void a() {
                String string;
                b.this.e();
                try {
                    JSONObject jSONObject = new JSONObject();
                    if (m.a().f() != null) {
                        jSONObject.put("status", 1);
                    }
                    string = jSONObject.toString();
                } catch (Throwable th) {
                    String unused = b.this.b;
                    th.getMessage();
                    string = "";
                }
                String strEncodeToString = Base64.encodeToString(string.getBytes(), 2);
                j.a();
                j.a((WebView) tYNativeAdvancedView.getAdvancedNativeWebview(), "onFeedbackAlertStatusNotify", strEncodeToString);
            }

            @Override
            public final void b() {
                String string;
                b.this.d();
                try {
                    JSONObject jSONObject = new JSONObject();
                    if (m.a().f() != null) {
                        jSONObject.put("status", 2);
                    }
                    string = jSONObject.toString();
                } catch (Throwable th) {
                    String unused = b.this.b;
                    th.getMessage();
                    string = "";
                }
                String strEncodeToString = Base64.encodeToString(string.getBytes(), 2);
                j.a();
                j.a((WebView) tYNativeAdvancedView.getAdvancedNativeWebview(), "onFeedbackAlertStatusNotify", strEncodeToString);
            }

            @Override
            public final void c() {
                String string;
                b.this.d();
                try {
                    JSONObject jSONObject = new JSONObject();
                    if (m.a().f() != null) {
                        jSONObject.put("status", 2);
                    }
                    string = jSONObject.toString();
                } catch (Throwable th) {
                    String unused = b.this.b;
                    th.getMessage();
                    string = "";
                }
                String strEncodeToString = Base64.encodeToString(string.getBytes(), 2);
                j.a();
                j.a((WebView) tYNativeAdvancedView.getAdvancedNativeWebview(), "onFeedbackAlertStatusNotify", strEncodeToString);
            }
        });
        if (cVar.H() && com.tkay.expressad.foundation.f.b.a().b() && (feedBackButtonB = com.tkay.expressad.foundation.f.b.a().b(this.k)) != null) {
            RelativeLayout.LayoutParams layoutParams = null;
            try {
                layoutParams = (RelativeLayout.LayoutParams) feedBackButtonB.getLayoutParams();
            } catch (Exception e) {
                e.printStackTrace();
            }
            if (layoutParams == null) {
                layoutParams = new RelativeLayout.LayoutParams(com.tkay.expressad.foundation.f.b.a, com.tkay.expressad.foundation.f.b.b);
            }
            layoutParams.addRule(12);
            ViewGroup viewGroup = (ViewGroup) feedBackButtonB.getParent();
            if (viewGroup != null) {
                viewGroup.removeView(feedBackButtonB);
            }
            tYNativeAdvancedView.addView(feedBackButtonB, layoutParams);
        }
        this.h = this.h;
        this.c = cVar;
        this.d = tYNativeAdvancedView;
        NativeAdvancedJSBridgeImpl advancedNativeJSBridgeImpl = tYNativeAdvancedView.getAdvancedNativeJSBridgeImpl();
        if (advancedNativeJSBridgeImpl == null) {
            advancedNativeJSBridgeImpl = new NativeAdvancedJSBridgeImpl(tYNativeAdvancedView.getContext(), this.l, this.k);
            List<com.tkay.expressad.foundation.d.c> arrayList = new ArrayList<>();
            arrayList.add(cVar);
            advancedNativeJSBridgeImpl.setCampaignList(arrayList);
        }
        advancedNativeJSBridgeImpl.setAllowSkip(this.h ? 1 : 0);
        advancedNativeJSBridgeImpl.setNativeAdvancedBridgeListener(this.o);
        tYNativeAdvancedView.setAdvancedNativeJSBridgeImpl(advancedNativeJSBridgeImpl);
        if (cVar.s() || !this.h) {
            this.j.setVisibility(8);
        }
        ImageView imageView = this.j;
        if (imageView != null) {
            imageView.setOnClickListener(this.n);
        }
        tYNativeAdvancedView.setCloseView(this.j);
        boolean z2 = false;
        if (tYNativeAdvancedView.getVisibility() != 0) {
            tYNativeAdvancedView.setVisibility(0);
        }
        boolean zA = y.a(tYNativeAdvancedView.getAdvancedNativeWebview());
        com.tkay.expressad.advanced.d.c cVar2 = this.g;
        if (cVar2 == null || zA || cVar2.c() == null || this.g.c().getAlpha() < 0.5f || this.g.c().getVisibility() != 0 || this.m) {
            if (z) {
                tYNativeAdvancedView.postDelayed(new Runnable() {
                    @Override
                    public final void run() {
                        b.this.a(cVar, tYNativeAdvancedView, false);
                    }
                }, 200L);
                return;
            }
            return;
        }
        tYNativeAdvancedView.show();
        com.tkay.expressad.foundation.b.b.b().b(tYNativeAdvancedView.getContext());
        cVar.l(this.k);
        com.tkay.expressad.foundation.f.b.a().a(this.k, cVar);
        com.tkay.expressad.foundation.d.c cVar3 = this.c;
        if (cVar3 != null && cVar3.ay() && tYNativeAdvancedView != null) {
            tYNativeAdvancedView.getAdvancedNativeWebview();
            try {
                com.tkay.expressad.advanced.a.c.c(cVar.Z());
            } catch (Throwable th) {
                th.getMessage();
                com.tkay.expressad.foundation.d.c cVar4 = this.c;
                if (cVar4 != null) {
                    cVar4.Z();
                    this.c.aa();
                    this.c.aZ();
                }
            }
        }
        if (!this.c.V()) {
            this.c.c(true);
            com.tkay.expressad.foundation.d.c cVar5 = this.c;
            if (!cVar5.s()) {
                Context contextF = m.a().f();
                String str = this.k;
                com.tkay.expressad.foundation.b.b.b().b(contextF);
                if (!TextUtils.isEmpty(cVar5.ag())) {
                    com.tkay.expressad.a.a.a(contextF, cVar5, str, cVar5.ag(), false, true, com.tkay.expressad.a.a.a.i);
                }
                if (!TextUtils.isEmpty(str) && cVar5.L() != null && cVar5.L().o() != null) {
                    com.tkay.expressad.a.a.a(contextF, cVar5, str, cVar5.L().o(), false);
                }
                cVar5.c(true);
                f.a(this.k, cVar5, f.g);
                z2 = true;
            }
            if (z2) {
                b(cVar5, m.a().f(), this.k);
                a(cVar5, m.a().f(), this.k);
            }
            d dVar = this.e;
            if (dVar != null) {
                dVar.a();
            }
        }
        int i = this.i;
        if (i != -1) {
            tYNativeAdvancedView.changeCloseBtnState(i);
        }
        com.tkay.expressad.advanced.a.c.c(cVar.Z());
        this.a.sendEmptyMessageDelayed(2, 1000L);
    }

    private void g() {
        if (this.c.V()) {
            return;
        }
        boolean z = true;
        this.c.c(true);
        com.tkay.expressad.foundation.d.c cVar = this.c;
        if (cVar.s()) {
            z = false;
        } else {
            Context contextF = m.a().f();
            String str = this.k;
            com.tkay.expressad.foundation.b.b.b().b(contextF);
            if (!TextUtils.isEmpty(cVar.ag())) {
                com.tkay.expressad.a.a.a(contextF, cVar, str, cVar.ag(), false, true, com.tkay.expressad.a.a.a.i);
            }
            if (!TextUtils.isEmpty(str) && cVar.L() != null && cVar.L().o() != null) {
                com.tkay.expressad.a.a.a(contextF, cVar, str, cVar.L().o(), false);
            }
            cVar.c(true);
            f.a(this.k, cVar, f.g);
        }
        if (z) {
            b(cVar, m.a().f(), this.k);
            a(cVar, m.a().f(), this.k);
        }
        d dVar = this.e;
        if (dVar != null) {
            dVar.a();
        }
    }

    private void b(com.tkay.expressad.foundation.d.c cVar) {
        boolean z = true;
        if (cVar.s()) {
            z = false;
        } else {
            Context contextF = m.a().f();
            String str = this.k;
            com.tkay.expressad.foundation.b.b.b().b(contextF);
            if (!TextUtils.isEmpty(cVar.ag())) {
                com.tkay.expressad.a.a.a(contextF, cVar, str, cVar.ag(), false, true, com.tkay.expressad.a.a.a.i);
            }
            if (!TextUtils.isEmpty(str) && cVar.L() != null && cVar.L().o() != null) {
                com.tkay.expressad.a.a.a(contextF, cVar, str, cVar.L().o(), false);
            }
            cVar.c(true);
            f.a(this.k, cVar, f.g);
        }
        if (z) {
            b(cVar, m.a().f(), this.k);
            a(cVar, m.a().f(), this.k);
        }
    }

    public final void a(boolean z) {
        this.h = z;
    }

    public final void a(com.tkay.expressad.foundation.d.c cVar) {
        cVar.l(this.k);
        d dVar = this.e;
        if (dVar != null) {
            dVar.a(cVar);
        }
    }

    private void a(View view) {
        if (view != null) {
            view.setOnClickListener(this.n);
        }
    }

    private void i() {
        d dVar = this.e;
        if (dVar != null) {
            dVar.c();
            this.e = null;
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
        if (this.e != null) {
            this.e = null;
        }
        if (this.o != null) {
            this.o = null;
        }
        if (this.n != null) {
            this.n = null;
        }
        TYNativeAdvancedView tYNativeAdvancedView = this.d;
        if (tYNativeAdvancedView != null) {
            tYNativeAdvancedView.destroy();
        }
        if (this.g != null) {
            this.g = null;
        }
        com.tkay.expressad.foundation.f.b.a().c(this.k);
    }

    public final void d() {
        TYNativeAdvancedWebview advancedNativeWebview;
        if (this.d == null || com.tkay.expressad.foundation.f.b.c || (advancedNativeWebview = this.d.getAdvancedNativeWebview()) == null || advancedNativeWebview.isDestroyed()) {
            return;
        }
        NativeAdvancedJsUtils.sendEventToH5(advancedNativeWebview, NativeAdvancedJsUtils.b, "");
    }

    public final void e() {
        TYNativeAdvancedWebview advancedNativeWebview;
        TYNativeAdvancedView tYNativeAdvancedView = this.d;
        if (tYNativeAdvancedView == null || (advancedNativeWebview = tYNativeAdvancedView.getAdvancedNativeWebview()) == null || advancedNativeWebview.isDestroyed()) {
            return;
        }
        j.a();
        j.a((WebView) advancedNativeWebview, NativeAdvancedJsUtils.a, "");
    }

    static void b(b bVar) {
        d dVar = bVar.e;
        if (dVar != null) {
            dVar.c();
            bVar.e = null;
        }
    }
}
