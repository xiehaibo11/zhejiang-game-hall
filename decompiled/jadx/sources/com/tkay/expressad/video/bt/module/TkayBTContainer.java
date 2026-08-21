package com.tkay.expressad.video.bt.module;

import android.content.Context;
import android.content.res.Configuration;
import android.support.v4.app.NotificationCompat;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.Base64;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.webkit.WebView;
import android.widget.FrameLayout;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.mbridge.msdk.interstitial.view.MBInterstitialActivity;
import com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode;
import com.tkay.core.common.b.m;
import com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView;
import com.tkay.expressad.foundation.d.c;
import com.tkay.expressad.foundation.g.a.f;
import com.tkay.expressad.foundation.h.i;
import com.tkay.expressad.foundation.h.t;
import com.tkay.expressad.video.bt.module.b.h;
import com.tkay.expressad.video.dynview.f.d;
import com.tkay.expressad.video.signal.a.c;
import com.tkay.expressad.video.signal.a.j;
import com.tkay.expressad.video.signal.b;
import com.tkay.expressad.video.signal.container.AbstractJSContainer;
import com.tkay.expressad.videocommon.a;
import com.tkay.expressad.widget.FeedBackButton;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Random;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class TkayBTContainer extends AbstractJSContainer implements b {
    private static final String d = TkayBTContainer.class.getSimpleName();
    private Context A;
    private TextView B;
    private boolean C;
    private boolean D;
    private String E;
    private boolean F;
    private List<c> G;
    private List<com.tkay.expressad.videocommon.b.a> H;
    private com.tkay.expressad.video.bt.module.a.a I;
    private h J;
    private h K;
    private com.tkay.expressad.video.bt.module.a.b L;
    private String M;
    private String N;
    private boolean O;
    private int P;
    private boolean Q;
    private int R;
    private String S;
    private d T;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    c f7187a;
    private int e;
    private int f;
    private FrameLayout g;
    private TkayBTLayout h;
    private WindVaneWebView i;
    private LayoutInflater j;

    private static void d() {
    }

    private static boolean e() {
        return true;
    }

    private static int f() {
        return 1;
    }

    @Override // com.tkay.expressad.video.signal.d
    public void click(int i, String str) {
    }

    @Override // com.tkay.expressad.video.signal.d
    public void handlerH5Exception(int i, String str) {
    }

    public TkayBTContainer(Context context) {
        super(context);
        this.e = 0;
        this.f = 1;
        this.C = false;
        this.D = true;
        this.F = false;
        this.P = 1;
        init(context);
    }

    public TkayBTContainer(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.e = 0;
        this.f = 1;
        this.C = false;
        this.D = true;
        this.F = false;
        this.P = 1;
        init(context);
    }

    public void init(Context context) {
        this.A = context;
        this.j = LayoutInflater.from(context);
    }

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
    public void onCreate() {
        String strAr;
        WindVaneWebView windVaneWebViewA;
        c cVar;
        try {
            int iFindLayout = findLayout("tkay_bt_container");
            if (iFindLayout < 0) {
                a("tkay_bt_container layout null");
                return;
            }
            FrameLayout frameLayout = (FrameLayout) this.j.inflate(iFindLayout, this);
            this.g = frameLayout;
            if (frameLayout == null) {
                a("ViewIds null");
                return;
            }
            this.N = "";
            byte b = 0;
            if (this.G == null || this.G.size() <= 0) {
                strAr = "";
            } else {
                c cVar2 = this.G.get(0);
                strAr = cVar2.ar();
                this.N = cVar2.Z();
            }
            a.C0482a c0482aA = com.tkay.expressad.videocommon.a.a(this.m + "_" + this.N + "_" + strAr);
            RelativeLayout.LayoutParams layoutParams = null;
            if (c0482aA != null) {
                this.E = c0482aA.b();
                new StringBuilder("get BT wraper.getTag = ").append(this.E);
                c0482aA.a("");
                windVaneWebViewA = c0482aA.a();
            } else {
                windVaneWebViewA = null;
            }
            this.i = windVaneWebViewA;
            com.tkay.expressad.videocommon.a.b(this.m + "_" + this.N + "_" + strAr);
            if (this.i != null) {
                com.tkay.expressad.video.signal.factory.b bVar = new com.tkay.expressad.video.signal.factory.b(this.l, this, this.i);
                registerJsFactory(bVar);
                this.i.setApiManagerJSFactory(bVar);
                if (this.i.getParent() != null) {
                    a("preload template webview is null or load error");
                    return;
                }
                if (this.i.getObject() instanceof j) {
                    bVar.a((j) this.i.getObject());
                    if (this.i != null) {
                        JSONObject jSONObject = new JSONObject();
                        jSONObject.put(com.tkay.expressad.foundation.g.a.ch, t.c(getContext()));
                        try {
                            try {
                                JSONObject jSONObject2 = new JSONObject();
                                jSONObject2.put("name", this.q.a());
                                jSONObject2.put("amount", this.q.b());
                                jSONObject2.put("id", this.r);
                                jSONObject.put("userId", this.p);
                                jSONObject.put("reward", jSONObject2);
                                jSONObject.put("playVideoMute", this.s);
                                jSONObject.put("extra", this.S);
                            } catch (JSONException e) {
                                e.getMessage();
                            }
                        } catch (Exception e2) {
                            e2.getMessage();
                        }
                        this.K = new com.tkay.expressad.video.bt.module.b.d(c(), "");
                        getJSNotifyProxy().a(jSONObject.toString());
                        getJSCommon().h();
                        getJSCommon().a(new a(this, b));
                    }
                    ((com.tkay.expressad.video.signal.a.c) getJSCommon()).r.c();
                }
                this.i.setBackgroundColor(0);
                LinkedHashMap<String, View> linkedHashMapB = com.tkay.expressad.video.bt.a.c.a().b(this.m, this.N);
                if (linkedHashMapB != null && linkedHashMapB.containsKey(this.E)) {
                    View view = linkedHashMapB.get(this.E);
                    if (view instanceof TkayBTLayout) {
                        TkayBTLayout tkayBTLayout = (TkayBTLayout) view;
                        this.h = tkayBTLayout;
                        tkayBTLayout.addView(this.i, 0, new FrameLayout.LayoutParams(-1, -1));
                        com.tkay.expressad.foundation.f.b.a().a(this.m + "_1", new com.tkay.expressad.foundation.f.a() { // from class: com.tkay.expressad.video.bt.module.TkayBTContainer.1
                            @Override // com.tkay.expressad.foundation.f.a
                            public final void a() {
                                String string;
                                try {
                                    JSONObject jSONObject3 = new JSONObject();
                                    if (m.a().f() != null) {
                                        jSONObject3.put("status", 1);
                                    }
                                    string = jSONObject3.toString();
                                } catch (Throwable th) {
                                    String unused = TkayBTContainer.d;
                                    th.getMessage();
                                    string = "";
                                }
                                String strEncodeToString = Base64.encodeToString(string.getBytes(), 2);
                                com.tkay.expressad.atsignalcommon.windvane.j.a();
                                com.tkay.expressad.atsignalcommon.windvane.j.a((WebView) TkayBTContainer.this.i, "onFeedbackAlertStatusNotify", strEncodeToString);
                            }

                            @Override // com.tkay.expressad.foundation.f.a
                            public final void b() {
                                String string;
                                try {
                                    JSONObject jSONObject3 = new JSONObject();
                                    if (m.a().f() != null) {
                                        jSONObject3.put("status", 2);
                                    }
                                    string = jSONObject3.toString();
                                } catch (Throwable th) {
                                    String unused = TkayBTContainer.d;
                                    th.getMessage();
                                    string = "";
                                }
                                String strEncodeToString = Base64.encodeToString(string.getBytes(), 2);
                                com.tkay.expressad.atsignalcommon.windvane.j.a();
                                com.tkay.expressad.atsignalcommon.windvane.j.a((WebView) TkayBTContainer.this.i, "onFeedbackAlertStatusNotify", strEncodeToString);
                            }

                            @Override // com.tkay.expressad.foundation.f.a
                            public final void c() {
                                String string;
                                try {
                                    JSONObject jSONObject3 = new JSONObject();
                                    if (m.a().f() != null) {
                                        jSONObject3.put("status", 2);
                                    }
                                    string = jSONObject3.toString();
                                } catch (Throwable th) {
                                    String unused = TkayBTContainer.d;
                                    th.getMessage();
                                    string = "";
                                }
                                String strEncodeToString = Base64.encodeToString(string.getBytes(), 2);
                                com.tkay.expressad.atsignalcommon.windvane.j.a();
                                com.tkay.expressad.atsignalcommon.windvane.j.a((WebView) TkayBTContainer.this.i, "onFeedbackAlertStatusNotify", strEncodeToString);
                            }
                        });
                        com.tkay.expressad.foundation.f.b.a().c(this.m + "_2");
                        FeedBackButton feedBackButtonB = com.tkay.expressad.foundation.f.b.a().b(this.m + "_1");
                        if (com.tkay.expressad.foundation.f.b.a().b() && feedBackButtonB != null) {
                            try {
                                layoutParams = (RelativeLayout.LayoutParams) feedBackButtonB.getLayoutParams();
                            } catch (Exception e3) {
                                e3.printStackTrace();
                            }
                            if (layoutParams == null) {
                                layoutParams = new RelativeLayout.LayoutParams(com.tkay.expressad.foundation.f.b.f6861a, com.tkay.expressad.foundation.f.b.b);
                            }
                            layoutParams.topMargin = t.b(m.a().f(), 10.0f);
                            layoutParams.leftMargin = t.b(m.a().f(), 10.0f);
                            feedBackButtonB.setLayoutParams(layoutParams);
                            ViewGroup viewGroup = (ViewGroup) feedBackButtonB.getParent();
                            if (viewGroup != null) {
                                viewGroup.removeView(feedBackButtonB);
                            }
                            this.h.addView(feedBackButtonB);
                        }
                        this.h.setTag(this.E);
                        linkedHashMapB.put(this.E, this.h);
                        Iterator<View> it = linkedHashMapB.values().iterator();
                        while (true) {
                            if (!it.hasNext()) {
                                break;
                            }
                            View next = it.next();
                            if (next instanceof TkayBTRootLayout) {
                                TkayBTRootLayout tkayBTRootLayout = (TkayBTRootLayout) next;
                                this.M = tkayBTRootLayout.getInstanceId();
                                this.g.addView(tkayBTRootLayout, new FrameLayout.LayoutParams(-1, -1));
                                break;
                            }
                        }
                        linkedHashMapB.remove(this.M);
                        linkedHashMapB.put(this.M, this);
                    }
                    com.tkay.expressad.video.bt.a.c.a();
                    com.tkay.expressad.video.bt.a.c.a(this.m, this.s);
                    com.tkay.expressad.video.bt.a.c.a();
                    com.tkay.expressad.video.bt.a.c.a(this.E, this.N);
                    com.tkay.expressad.video.bt.a.c.a();
                    com.tkay.expressad.video.bt.a.c.a(this.M, this.N);
                    com.tkay.expressad.video.bt.a.c.a();
                    com.tkay.expressad.video.bt.a.c.a(this.m + "_" + this.N, this.l);
                    if (this.G == null || this.G.size() <= 0) {
                        return;
                    }
                    a(this.o, this.G.get(0));
                    return;
                }
                a("big template webviewLayout is null");
                return;
            }
            if (this.G != null && this.G.size() > 0 && (cVar = this.G.get(0)) != null && cVar.j()) {
                Context context = this.A;
                if (this.T == null) {
                    a("ChoiceOneCallback is null");
                    return;
                }
                HashMap map = new HashMap();
                map.put(com.tkay.expressad.video.dynview.a.a.D, this.T);
                com.tkay.expressad.video.dynview.b.a();
                com.tkay.expressad.video.dynview.b.a(context, this.G, new AnonymousClass2(), map);
                return;
            }
            a("big template webview is null");
        } catch (Throwable th) {
            a("onCreate exception ".concat(String.valueOf(th)));
        }
    }

    private void a(Context context) {
        if (this.T == null) {
            a("ChoiceOneCallback is null");
            return;
        }
        HashMap map = new HashMap();
        map.put(com.tkay.expressad.video.dynview.a.a.D, this.T);
        com.tkay.expressad.video.dynview.b.a();
        com.tkay.expressad.video.dynview.b.a(context, this.G, new AnonymousClass2(), map);
    }

    /* JADX INFO: renamed from: com.tkay.expressad.video.bt.module.TkayBTContainer$2, reason: invalid class name */
    final class AnonymousClass2 implements com.tkay.expressad.video.dynview.f.h {
        AnonymousClass2() {
        }

        @Override // com.tkay.expressad.video.dynview.f.h
        public final void a(com.tkay.expressad.video.dynview.a aVar) {
            c cVar;
            String str;
            if (TkayBTContainer.this.g != null && aVar.a() != null) {
                TkayBTContainer.this.g.removeAllViews();
                TkayBTContainer.this.g.addView(aVar.a());
                TkayBTContainer tkayBTContainer = TkayBTContainer.this;
                tkayBTContainer.B = (TextView) tkayBTContainer.findViewById(tkayBTContainer.findID("tkay_choice_one_countdown_tv"));
                if (TkayBTContainer.this.I != null) {
                    TkayBTContainer.this.I.a();
                }
                if (TkayBTContainer.this.G == null || TkayBTContainer.this.G.size() <= 0 || (cVar = (c) TkayBTContainer.this.G.get(0)) == null) {
                    return;
                }
                String strAi = cVar.ai();
                com.tkay.expressad.videocommon.e.d dVarA = com.tkay.expressad.videocommon.e.c.a().a(com.tkay.expressad.foundation.b.b.b().e(), TkayBTContainer.this.m);
                int iM = dVarA != null ? dVarA.M() : 1;
                if (cVar.n() == 1) {
                    str = strAi + "&to=1&cbt=" + cVar.az() + "&tmorl=" + iM;
                } else {
                    str = strAi + "&to=0&cbt=" + cVar.az() + "&tmorl=" + iM;
                }
                com.tkay.expressad.a.a.a(m.a().f(), cVar, TkayBTContainer.this.m, str, false, true, com.tkay.expressad.a.a.a.j);
                f.h.put(cVar.ai(), Long.valueOf(System.currentTimeMillis()));
                TkayBTContainer.this.a(cVar);
                return;
            }
            TkayBTContainer.this.a("nativeview is null");
        }

        @Override // com.tkay.expressad.video.dynview.f.h
        public final void a(com.tkay.expressad.video.dynview.c.b bVar) {
            String str;
            if (bVar != null) {
                str = "errorCode:" + bVar.a() + "Msg:" + bVar.b();
            } else {
                str = "";
            }
            TkayBTContainer.this.a("nativeview is null".concat(String.valueOf(str)));
        }
    }

    @Override // com.tkay.expressad.video.signal.container.AbstractJSContainer
    protected final void a(String str) {
        h hVar = this.J;
        if (hVar != null) {
            hVar.a(str);
        }
        super.a(str);
    }

    protected final void a(c cVar) {
        if (cVar != null) {
            try {
                List<String> listE = cVar.e();
                if (listE == null || listE.size() <= 0) {
                    return;
                }
                Iterator<String> it = listE.iterator();
                while (it.hasNext()) {
                    com.tkay.expressad.a.a.a(m.a().f(), cVar, this.m, it.next(), true);
                }
            } catch (Throwable th) {
                th.getMessage();
            }
        }
    }

    @Override // com.tkay.expressad.video.signal.container.AbstractJSContainer, android.view.View
    public void onConfigurationChanged(Configuration configuration) {
        try {
            LinkedHashMap<String, View> linkedHashMapB = com.tkay.expressad.video.bt.a.c.a().b(this.m, this.N);
            if (linkedHashMapB == null || linkedHashMapB.size() <= 0) {
                return;
            }
            for (View view : linkedHashMapB.values()) {
                if (view instanceof TYTempContainer) {
                    ((TYTempContainer) view).onConfigurationChanged(configuration);
                } else if (view instanceof TkayBTWebView) {
                    ((TkayBTWebView) view).onConfigurationChanged(configuration);
                } else if (view instanceof TkayBTLayout) {
                    ((TkayBTLayout) view).onConfigurationChanged(configuration);
                }
            }
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    private com.tkay.expressad.video.bt.module.a.b c() {
        if (this.L == null) {
            this.L = new com.tkay.expressad.video.bt.module.a.b() { // from class: com.tkay.expressad.video.bt.module.TkayBTContainer.3
                @Override // com.tkay.expressad.video.bt.module.a.b
                public final void a() {
                }

                @Override // com.tkay.expressad.video.bt.module.a.b
                public final void a(String str) {
                    if (TkayBTContainer.this.i != null) {
                        JSONObject jSONObject = new JSONObject();
                        try {
                            jSONObject.put("id", str);
                            JSONObject jSONObject2 = new JSONObject();
                            jSONObject2.put(com.tkay.expressad.b.y, TkayBTContainer.this.n);
                            jSONObject2.put("unitId", TkayBTContainer.this.m);
                            jSONObject.put("data", jSONObject2);
                            String unused = TkayBTContainer.d;
                            new StringBuilder(" BT Call H5 onAdShow ").append(jSONObject.toString());
                        } catch (JSONException e) {
                            String unused2 = TkayBTContainer.d;
                            e.getMessage();
                        }
                        com.tkay.expressad.atsignalcommon.windvane.j.a();
                        com.tkay.expressad.atsignalcommon.windvane.j.a((WebView) TkayBTContainer.this.i, "onSubPlayTemplateViewPlayStart", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                    }
                }

                @Override // com.tkay.expressad.video.bt.module.a.b
                public final void a(String str, boolean z, com.tkay.expressad.videocommon.c.c cVar) {
                    if (TkayBTContainer.this.i != null) {
                        JSONObject jSONObject = new JSONObject();
                        try {
                            jSONObject.put("id", str);
                            JSONObject jSONObject2 = new JSONObject();
                            if (cVar != null) {
                                JSONObject jSONObject3 = new JSONObject();
                                jSONObject3.put("name", cVar.a());
                                jSONObject3.put("amount", cVar.b());
                                jSONObject2.put("reward", jSONObject3);
                            }
                            jSONObject2.put("isComplete", z);
                            jSONObject2.put("convert", z ? 1 : 2);
                            jSONObject.put("data", jSONObject2);
                            String unused = TkayBTContainer.d;
                            new StringBuilder(" BT Call H5 onAdClose ").append(jSONObject.toString());
                        } catch (JSONException e) {
                            String unused2 = TkayBTContainer.d;
                            e.getMessage();
                        }
                        com.tkay.expressad.atsignalcommon.windvane.j.a();
                        com.tkay.expressad.atsignalcommon.windvane.j.a((WebView) TkayBTContainer.this.i, "onSubPlayTemplateViewCloseBtnClicked", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                        com.tkay.expressad.atsignalcommon.windvane.j.a();
                        com.tkay.expressad.atsignalcommon.windvane.j.a((WebView) TkayBTContainer.this.i, "onSubPlayTemplateViewDismissed", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                    }
                }

                @Override // com.tkay.expressad.video.bt.module.a.b
                public final void a(boolean z, int i) {
                    TkayBTContainer.this.Q = z;
                    TkayBTContainer.this.R = i;
                }

                @Override // com.tkay.expressad.video.bt.module.a.b
                public final void a(String str, String str2) {
                    if (TkayBTContainer.this.i != null) {
                        JSONObject jSONObject = new JSONObject();
                        try {
                            jSONObject.put("id", str);
                            JSONObject jSONObject2 = new JSONObject();
                            jSONObject2.put(com.tkay.expressad.b.y, TkayBTContainer.this.n);
                            jSONObject2.put("unitId", TkayBTContainer.this.m);
                            jSONObject2.put("error", str2);
                            jSONObject.put("data", jSONObject2);
                            String unused = TkayBTContainer.d;
                            new StringBuilder(" BT Call H5 onShowFail ").append(jSONObject.toString());
                        } catch (JSONException e) {
                            String unused2 = TkayBTContainer.d;
                            e.getMessage();
                        }
                        com.tkay.expressad.atsignalcommon.windvane.j.a();
                        com.tkay.expressad.atsignalcommon.windvane.j.a((WebView) TkayBTContainer.this.i, "onSubPlayTemplateViewPlayFailed", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                    }
                }

                @Override // com.tkay.expressad.video.bt.module.a.b
                public final void a(String str, c cVar) {
                    TkayBTContainer.this.f7187a = cVar;
                    if (TkayBTContainer.this.i != null) {
                        JSONObject jSONObject = new JSONObject();
                        try {
                            jSONObject.put("id", str);
                            JSONObject jSONObject2 = new JSONObject();
                            jSONObject2.put(com.tkay.expressad.b.y, TkayBTContainer.this.n);
                            jSONObject2.put("unitId", TkayBTContainer.this.m);
                            jSONObject.put("data", jSONObject2);
                            String unused = TkayBTContainer.d;
                            new StringBuilder(" BT Call H5 onVideoAdClicked ").append(jSONObject.toString());
                        } catch (JSONException e) {
                            String unused2 = TkayBTContainer.d;
                            e.getMessage();
                        }
                        com.tkay.expressad.atsignalcommon.windvane.j.a();
                        com.tkay.expressad.atsignalcommon.windvane.j.a((WebView) TkayBTContainer.this.i, "onSubPlayTemplateViewClicked", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                    }
                }

                @Override // com.tkay.expressad.video.bt.module.a.b
                public final void b(String str) {
                    if (TkayBTContainer.this.i != null) {
                        JSONObject jSONObject = new JSONObject();
                        try {
                            jSONObject.put("id", str);
                            JSONObject jSONObject2 = new JSONObject();
                            jSONObject2.put("convert", true);
                            jSONObject2.put(com.tkay.expressad.b.y, TkayBTContainer.this.n);
                            jSONObject2.put("unitId", TkayBTContainer.this.m);
                            jSONObject.put("data", jSONObject2);
                            String unused = TkayBTContainer.d;
                            new StringBuilder(" BT Call H5 onVideoComplete ").append(jSONObject.toString());
                        } catch (JSONException e) {
                            String unused2 = TkayBTContainer.d;
                            e.getMessage();
                        }
                        com.tkay.expressad.atsignalcommon.windvane.j.a();
                        com.tkay.expressad.atsignalcommon.windvane.j.a((WebView) TkayBTContainer.this.i, "onSubPlayTemplateViewPlayCompleted", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                    }
                }

                @Override // com.tkay.expressad.video.bt.module.a.b
                public final void c(String str) {
                    if (TkayBTContainer.this.i != null) {
                        JSONObject jSONObject = new JSONObject();
                        try {
                            jSONObject.put("id", str);
                            JSONObject jSONObject2 = new JSONObject();
                            jSONObject2.put(com.tkay.expressad.b.y, TkayBTContainer.this.n);
                            jSONObject2.put("unitId", TkayBTContainer.this.m);
                            jSONObject.put("data", jSONObject2);
                            String unused = TkayBTContainer.d;
                            new StringBuilder(" BT Call H5 onEndcardShow ").append(jSONObject.toString());
                        } catch (JSONException e) {
                            String unused2 = TkayBTContainer.d;
                            e.getMessage();
                        }
                        com.tkay.expressad.atsignalcommon.windvane.j.a();
                        com.tkay.expressad.atsignalcommon.windvane.j.a((WebView) TkayBTContainer.this.i, "onSubPlayTemplateViewEndcardShowSuccess", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                    }
                }
            };
        }
        return this.L;
    }

    private WindVaneWebView b(String str) {
        a.C0482a c0482aA = com.tkay.expressad.videocommon.a.a(str);
        if (c0482aA == null) {
            return null;
        }
        this.E = c0482aA.b();
        new StringBuilder("get BT wraper.getTag = ").append(this.E);
        c0482aA.a("");
        return c0482aA.a();
    }

    @Override // com.tkay.expressad.video.signal.container.AbstractJSContainer
    public void onResume() {
        c cVar;
        super.onResume();
        List<c> list = this.G;
        if (list != null && list.size() > 0 && (cVar = this.G.get(0)) != null && cVar.j()) {
            com.tkay.expressad.video.dynview.b.a aVarA = com.tkay.expressad.video.dynview.b.a.a();
            if (aVarA.f7217a != null) {
                aVarA.f7217a.a();
            }
        }
        if (com.tkay.expressad.foundation.f.b.c) {
            return;
        }
        try {
            LinkedHashMap<String, View> linkedHashMapB = com.tkay.expressad.video.bt.a.c.a().b(this.m, this.N);
            if (linkedHashMapB == null || linkedHashMapB.size() <= 0) {
                return;
            }
            for (View view : linkedHashMapB.values()) {
                if (view instanceof TkayBTVideoView) {
                    ((TkayBTVideoView) view).onResume();
                }
            }
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    @Override // com.tkay.expressad.video.signal.container.AbstractJSContainer
    public void onStop() {
        c cVar;
        super.onStop();
        List<c> list = this.G;
        if (list != null && list.size() > 0 && (cVar = this.G.get(0)) != null && cVar.j()) {
            com.tkay.expressad.video.dynview.b.a aVarA = com.tkay.expressad.video.dynview.b.a.a();
            if (aVarA.f7217a != null) {
                aVarA.f7217a.c();
            }
        }
        try {
            LinkedHashMap<String, View> linkedHashMapB = com.tkay.expressad.video.bt.a.c.a().b(this.m, this.N);
            if (linkedHashMapB == null || linkedHashMapB.size() <= 0) {
                return;
            }
            for (View view : linkedHashMapB.values()) {
                if (view instanceof TkayBTVideoView) {
                    ((TkayBTVideoView) view).onStop();
                }
            }
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    public void onBackPressed() {
        try {
            LinkedHashMap<String, View> linkedHashMapB = com.tkay.expressad.video.bt.a.c.a().b(this.m, this.N);
            if (linkedHashMapB == null || linkedHashMapB.size() <= 0) {
                return;
            }
            for (View view : linkedHashMapB.values()) {
                if (view instanceof TYTempContainer) {
                    ((TYTempContainer) view).onBackPressed();
                } else if (view instanceof TkayBTWebView) {
                    ((TkayBTWebView) view).onBackPressed();
                } else if (view instanceof TkayBTLayout) {
                    ((TkayBTLayout) view).onBackPressed();
                }
            }
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    @Override // com.tkay.expressad.video.signal.container.AbstractJSContainer
    public void onPause() {
        c cVar;
        super.onPause();
        List<c> list = this.G;
        if (list != null && list.size() > 0 && (cVar = this.G.get(0)) != null && cVar.j()) {
            com.tkay.expressad.video.dynview.b.a.a();
        }
        try {
            LinkedHashMap<String, View> linkedHashMapB = com.tkay.expressad.video.bt.a.c.a().b(this.m, this.N);
            if (linkedHashMapB == null || linkedHashMapB.size() <= 0) {
                return;
            }
            for (View view : linkedHashMapB.values()) {
                if (view instanceof TkayBTVideoView) {
                    ((TkayBTVideoView) view).onPause();
                }
            }
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
    }

    public void onAdClose() {
        if (this.l != null) {
            this.l.finish();
        }
    }

    @Override // com.tkay.expressad.video.signal.container.AbstractJSContainer
    public void onDestroy() {
        if (this.F) {
            return;
        }
        this.F = true;
        super.onDestroy();
        com.tkay.expressad.video.bt.a.c.a();
        com.tkay.expressad.video.bt.a.c.d(this.m + "_" + this.N);
        try {
            if (this.i != null) {
                ViewGroup viewGroup = (ViewGroup) this.i.getParent();
                if (viewGroup != null) {
                    viewGroup.removeAllViews();
                }
                this.i.clearWebView();
                this.i.release();
            }
            if (this.L != null) {
                this.L = null;
            }
            if (this.I != null) {
                this.I = null;
            }
            if (this.A != null) {
                this.A = null;
            }
            if (this.G != null && this.G.size() > 0) {
                for (c cVar : this.G) {
                    if (cVar != null && cVar.M() != null) {
                        com.tkay.expressad.videocommon.a.b(this.m + "_" + cVar.Z() + "_" + cVar.M().e());
                    }
                }
            }
            com.tkay.expressad.video.bt.a.c.a();
            com.tkay.expressad.video.bt.a.c.f(this.E);
            com.tkay.expressad.video.bt.a.c.a();
            com.tkay.expressad.video.bt.a.c.g(this.m);
            com.tkay.expressad.video.bt.a.c.a().b(this.m, this.N).remove(this.E);
            com.tkay.expressad.video.bt.a.c.a().b(this.m, this.N).remove(this.M);
            com.tkay.expressad.video.bt.a.c.a().b(this.m, this.N).clear();
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    @Override // com.tkay.expressad.video.signal.b
    public void reactDeveloper(Object obj, String str) {
        if (this.I != null && !TextUtils.isEmpty(str)) {
            try {
                JSONObject jSONObject = new JSONObject(str);
                int iOptInt = jSONObject.optInt("type");
                int iOptInt2 = jSONObject.optInt("hit");
                String strOptString = jSONObject.optString("unitId", getUnitId());
                jSONObject.optString(com.tkay.expressad.b.y, getPlacementId());
                JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject("data");
                c cVar = this.G.get(0);
                boolean z = true;
                if (iOptInt == 1) {
                    boolean zOptBoolean = jSONObjectOptJSONObject.optBoolean("expired");
                    if (cVar != null) {
                        if (zOptBoolean) {
                            cVar.e(1);
                        } else {
                            cVar.e(0);
                        }
                    }
                    this.O = isNativeKilledCallback(cVar);
                }
                switch (iOptInt) {
                    case 1:
                        this.I.a();
                        break;
                    case 2:
                        JSONObject jSONObjectOptJSONObject2 = jSONObjectOptJSONObject.optJSONObject("error");
                        String strOptString2 = jSONObjectOptJSONObject2 != null ? jSONObjectOptJSONObject2.optString("msg") : "";
                        if (TextUtils.isEmpty(strOptString2)) {
                            strOptString2 = jSONObjectOptJSONObject.optString("error");
                        }
                        if (!this.O && iOptInt2 != this.P) {
                            this.I.a(strOptString2);
                        }
                        break;
                    case 3:
                        this.I.b();
                        break;
                    case 4:
                        this.I.c();
                        break;
                    case 5:
                        com.tkay.expressad.video.bt.module.a.a aVar = this.I;
                        if (this.f7187a != null) {
                            cVar = this.f7187a;
                        }
                        aVar.a(cVar);
                        break;
                    case 6:
                        if (jSONObjectOptJSONObject.optInt("convert") != 1) {
                            z = false;
                        }
                        JSONObject jSONObjectOptJSONObject3 = jSONObjectOptJSONObject.optJSONObject("reward");
                        c cVarB = c.b(jSONObjectOptJSONObject.optJSONObject(MBInterstitialActivity.INTENT_CAMAPIGN));
                        com.tkay.expressad.videocommon.c.c cVarA = com.tkay.expressad.videocommon.c.c.a(jSONObjectOptJSONObject3);
                        if (cVarA == null) {
                            cVarA = this.q;
                        }
                        String strOptString3 = jSONObjectOptJSONObject.optString("extra");
                        if (!TextUtils.isEmpty(strOptString3)) {
                            this.S = strOptString3;
                        }
                        if (!this.O && iOptInt2 != this.P) {
                            if (this.t && (this.v == com.tkay.expressad.foundation.g.a.cr || this.v == com.tkay.expressad.foundation.g.a.cs)) {
                                this.I.a(this.Q, this.R);
                            }
                            if (!z) {
                                cVarA.a(0);
                            }
                            this.I.a(z, cVarA);
                            if (!this.t && z) {
                                if (cVarB != null) {
                                    com.tkay.expressad.video.module.b.a.a(cVarB, cVarA, strOptString, this.p, this.S);
                                } else {
                                    com.tkay.expressad.video.module.b.a.a(cVar, cVarA, strOptString, this.p, this.S);
                                }
                            }
                        }
                        break;
                }
                a(obj);
                return;
            } catch (JSONException e) {
                a(obj, e.getMessage());
                e.getMessage();
                return;
            }
        }
        a(obj, "listener is null");
    }

    public void appendSubView(TkayBTContainer tkayBTContainer, TYTempContainer tYTempContainer, JSONObject jSONObject) {
        try {
            FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(-1, -1);
            if (jSONObject != null) {
                Context contextF = m.a().f();
                int iOptInt = jSONObject.optInt(TtmlNode.LEFT, com.tkay.expressad.video.bt.a.c.f7167a);
                int iOptInt2 = jSONObject.optInt("top", com.tkay.expressad.video.bt.a.c.f7167a);
                int iOptInt3 = jSONObject.optInt(TtmlNode.RIGHT, com.tkay.expressad.video.bt.a.c.f7167a);
                int iOptInt4 = jSONObject.optInt("bottom", com.tkay.expressad.video.bt.a.c.f7167a);
                if (iOptInt != -999 && contextF != null) {
                    layoutParams.leftMargin = t.b(contextF, iOptInt);
                }
                if (iOptInt2 != -999 && contextF != null) {
                    layoutParams.topMargin = t.b(contextF, iOptInt2);
                }
                if (iOptInt3 != -999 && contextF != null) {
                    layoutParams.rightMargin = t.b(contextF, iOptInt3);
                }
                if (iOptInt4 != -999 && contextF != null) {
                    layoutParams.bottomMargin = t.b(contextF, iOptInt4);
                }
                int iOptInt5 = jSONObject.optInt("width");
                int iOptInt6 = jSONObject.optInt("height");
                if (iOptInt5 > 0) {
                    layoutParams.width = iOptInt5;
                }
                if (iOptInt6 > 0) {
                    layoutParams.height = iOptInt6;
                }
            }
            tkayBTContainer.addView(tYTempContainer, layoutParams);
            tYTempContainer.setActivity(this.l);
            tYTempContainer.setMute(this.s);
            tYTempContainer.setBidCampaign(this.C);
            tYTempContainer.setIV(this.t);
            tYTempContainer.setBigOffer(this.D);
            tYTempContainer.setIVRewardEnable(this.v, this.w, this.x);
            tYTempContainer.setShowRewardListener(this.K);
            tYTempContainer.setCampaignDownLoadTask(d(tYTempContainer.getCampaign()));
            tYTempContainer.setTkayTempCallback(c());
            tYTempContainer.setH5Cbp(getJSCommon().e());
            tYTempContainer.setWebViewFront(getJSCommon().f());
            tYTempContainer.init(this.A);
            tYTempContainer.onCreate();
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    private com.tkay.expressad.videocommon.b.a d(c cVar) {
        List<com.tkay.expressad.videocommon.b.a> list = this.H;
        if (list == null || cVar == null) {
            return null;
        }
        for (com.tkay.expressad.videocommon.b.a aVar : list) {
            if (aVar.n().aZ().equals(cVar.aZ())) {
                return aVar;
            }
        }
        return null;
    }

    public void broadcast(String str, JSONObject jSONObject) {
        if (this.i != null) {
            try {
                JSONObject jSONObject2 = new JSONObject();
                jSONObject2.put("code", this.e);
                jSONObject2.put("id", this.E);
                jSONObject2.put("eventName", str);
                jSONObject2.put("data", jSONObject);
                com.tkay.expressad.atsignalcommon.windvane.j.a();
                com.tkay.expressad.atsignalcommon.windvane.j.a((WebView) this.i, "broadcast", Base64.encodeToString(jSONObject2.toString().getBytes(), 2));
            } catch (Exception unused) {
                com.tkay.expressad.video.bt.a.c.a();
                com.tkay.expressad.video.bt.a.c.a((WebView) this.i, "broadcast", this.E);
            }
        }
    }

    public int findID(String str) {
        return i.a(getContext(), str, "id");
    }

    public int findLayout(String str) {
        return i.a(getContext(), str, "layout");
    }

    public void setBTContainerCallback(com.tkay.expressad.video.bt.module.a.a aVar) {
        this.I = aVar;
    }

    public void setCampaigns(List<c> list) {
        this.G = list;
    }

    public void setCampaignDownLoadTasks(List<com.tkay.expressad.videocommon.b.a> list) {
        this.H = list;
    }

    public void setJSFactory(com.tkay.expressad.video.signal.factory.b bVar) {
        this.z = bVar;
    }

    public void setShowRewardVideoListener(h hVar) {
        this.J = hVar;
    }

    public void setChoiceOneCallback(d dVar) {
        this.T = dVar;
    }

    public boolean isNativeKilledCallback(c cVar) {
        if (getJSCommon().e() != 1 && cVar != null) {
            if (cVar.n() == 1) {
                if (this.o != null) {
                    if (this.o.M() == 1) {
                        cVar.m(1);
                        return true;
                    }
                    cVar.m(0);
                    return false;
                }
            } else {
                if (cVar.A()) {
                    cVar.m(0);
                    return false;
                }
                int iA = this.o.a();
                cVar.m(iA);
                if (iA == 1) {
                    return true;
                }
            }
        }
        return false;
    }

    private boolean a(boolean z) {
        if (this.o == null) {
            return false;
        }
        int iK = this.o.K();
        if (iK == 1) {
            return z;
        }
        if (iK == 2) {
            return z && g();
        }
        if (iK != 3) {
            return false;
        }
        return g();
    }

    private boolean g() {
        try {
            if (this.o == null) {
                return false;
            }
            double dL = this.o.L();
            if (dL == 1.0d) {
                return false;
            }
            return new Random().nextDouble() > dL;
        } catch (Throwable unused) {
            return false;
        }
    }

    public void setNotchPadding(int i, int i2, int i3, int i4, int i5) {
        try {
            String strA = com.tkay.expressad.foundation.h.h.a(i, i2, i3, i4, i5);
            if (this.i != null && (this.i.getObject() instanceof j) && !TextUtils.isEmpty(strA)) {
                ((j) this.i.getObject()).b(strA);
                com.tkay.expressad.atsignalcommon.windvane.j.a();
                com.tkay.expressad.atsignalcommon.windvane.j.a((WebView) this.i, "oncutoutfetched", Base64.encodeToString(strA.getBytes(), 0));
            }
            if (this.G != null && this.G.size() > 0) {
                try {
                    if (this.G.get(0).j() && this.B != null) {
                        FrameLayout.LayoutParams layoutParams = (FrameLayout.LayoutParams) this.B.getLayoutParams();
                        layoutParams.setMargins(i2, i4, i3, i5);
                        this.B.setLayoutParams(layoutParams);
                    }
                } catch (Exception e) {
                    e.getMessage();
                }
            }
            com.tkay.expressad.video.bt.a.c.a();
            com.tkay.expressad.video.bt.a.c.a(i, i2, i3, i4, i5);
            LinkedHashMap<String, View> linkedHashMapB = com.tkay.expressad.video.bt.a.c.a().b(this.m, this.N);
            if (linkedHashMapB == null || linkedHashMapB.size() <= 0) {
                return;
            }
            for (View view : linkedHashMapB.values()) {
                if (view instanceof TkayBTVideoView) {
                    ((TkayBTVideoView) view).setNotchPadding(i2, i3, i4, i5);
                }
                if (view instanceof TYTempContainer) {
                    ((TYTempContainer) view).setNotchPadding(i, i2, i3, i4, i5);
                }
                if ((view instanceof WindVaneWebView) && !TextUtils.isEmpty(strA)) {
                    com.tkay.expressad.atsignalcommon.windvane.j.a().a(view, "oncutoutfetched", Base64.encodeToString(strA.getBytes(), 0));
                }
            }
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    public void setDeveloperExtraData(String str) {
        this.S = str;
    }

    private class a extends c.a {
        private a() {
        }

        /* synthetic */ a(TkayBTContainer tkayBTContainer, byte b) {
            this();
        }

        @Override // com.tkay.expressad.video.signal.a.c.a, com.tkay.expressad.video.signal.c.a
        public final void c() {
            super.c();
        }

        @Override // com.tkay.expressad.video.signal.a.c.a, com.tkay.expressad.out.j.c
        public final void a(com.tkay.expressad.foundation.d.c cVar, String str) {
            super.a(cVar, str);
        }

        @Override // com.tkay.expressad.video.signal.a.c.a, com.tkay.expressad.out.j.c
        public final void a(com.tkay.expressad.out.d dVar, String str) {
            super.a(dVar, str);
            if (dVar == null || !(dVar instanceof com.tkay.expressad.foundation.d.c)) {
                return;
            }
            try {
                com.tkay.expressad.foundation.d.c cVar = (com.tkay.expressad.foundation.d.c) dVar;
                String strOptString = new JSONObject(TkayBTContainer.this.getJSVideoModule().getCurrentProgress()).optString(NotificationCompat.CATEGORY_PROGRESS, "");
                if (cVar.Q() == 3 && cVar.C() == 2 && strOptString.equals("1.0") && TkayBTContainer.this.l != null) {
                    if (!TkayBTContainer.this.D) {
                        TkayBTContainer.this.l.finish();
                    } else {
                        TkayBTContainer.this.onAdClose();
                    }
                }
            } catch (JSONException e) {
                e.printStackTrace();
            }
        }

        @Override // com.tkay.expressad.video.signal.a.c.a, com.tkay.expressad.out.j.c
        public final void b(com.tkay.expressad.out.d dVar, String str) {
            super.b(dVar, str);
        }

        @Override // com.tkay.expressad.video.signal.a.c.a, com.tkay.expressad.video.signal.c.a
        public final void a(com.tkay.expressad.foundation.d.c cVar, boolean z) {
            super.a(cVar, z);
            TkayBTContainer.this.K.a(cVar);
        }

        @Override // com.tkay.expressad.video.signal.a.c.a, com.tkay.expressad.video.signal.c.a
        public final void a(int i, String str) {
            super.a(i, str);
        }

        @Override // com.tkay.expressad.video.signal.a.c.a, com.tkay.expressad.video.signal.c.a
        public final void d() {
            super.d();
        }
    }
}
