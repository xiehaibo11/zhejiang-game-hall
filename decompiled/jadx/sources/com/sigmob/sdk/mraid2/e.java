package com.sigmob.sdk.mraid2;

import android.content.Context;
import android.graphics.Bitmap;
import android.net.Uri;
import android.text.TextUtils;
import android.util.Base64;
import android.util.Log;
import android.view.View;
import android.webkit.RenderProcessGoneDetail;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import android.widget.FrameLayout;
import android.widget.LinearLayout;
import com.czhj.sdk.common.network.Networking;
import com.czhj.sdk.common.utils.Dips;
import com.czhj.sdk.common.utils.Md5Util;
import com.czhj.sdk.common.utils.ReflectionUtil;
import com.czhj.sdk.common.utils.ViewUtil;
import com.czhj.sdk.logger.SigmobLog;
import com.czhj.volley.toolbox.DownloadItem;
import com.czhj.volley.toolbox.FileDownloadRequest;
import com.loc.at;
import com.sigmob.sdk.base.common.ab;
import com.sigmob.sdk.base.common.p;
import com.sigmob.sdk.base.common.s;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.rtb.Ad;
import com.sigmob.sdk.base.models.rtb.Template;
import com.sigmob.sdk.base.mta.PointCategory;
import com.sigmob.sdk.mraid.n;
import com.sigmob.sdk.mraid2.b;
import com.sigmob.windad.WindAdError;
import com.xiaomi.mipush.sdk.Constants;
import java.io.File;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.UUID;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class e extends com.sigmob.sdk.mraid2.a {
    private static String o = "Mraid2Bridge";
    private final e b;
    private com.sigmob.sdk.mraid2.b c;
    private e d;
    private String e;
    private c f;
    private b g;
    private a h;
    private boolean i;
    private FrameLayout j;
    private LinearLayout k;
    private boolean l;
    private JSONObject m;
    private BaseAdUnit n;
    private final WebViewClient p;
    private com.sigmob.sdk.base.common.e q;
    private HashMap<String, e> r;
    private HashMap<String, k> s;
    private final b.InterfaceC0340b t;

    public interface a {
        void a(e eVar);

        void a(WindAdError windAdError);
    }

    public interface b {
        LinearLayout a(e eVar, int i);

        e a(e eVar, JSONObject jSONObject);

        void a(e eVar);

        void a(e eVar, BaseAdUnit baseAdUnit, JSONObject jSONObject);

        void b(e eVar);

        void b(e eVar, JSONObject jSONObject);
    }

    public interface c {
        void a(e eVar, JSONObject jSONObject);

        void a(JSONObject jSONObject);

        void b(JSONObject jSONObject);
    }

    private static class d {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private View f5069a;

        public d(View view) {
            this.f5069a = view;
        }

        public int a() {
            return this.f5069a.getLayoutParams().height;
        }

        public void a(int i) {
            this.f5069a.getLayoutParams().height = i;
            this.f5069a.requestLayout();
        }

        public int b() {
            return this.f5069a.getLayoutParams().width;
        }

        public void b(int i) {
            this.f5069a.getLayoutParams().width = i;
            this.f5069a.requestLayout();
        }
    }

    public e(Context context, List<BaseAdUnit> list, FrameLayout frameLayout) {
        this(context, list, frameLayout, null, null);
        BaseAdUnit baseAdUnit = list.get(0);
        Template template = baseAdUnit.scene != null ? baseAdUnit.scene : (baseAdUnit.getMaterial() == null || baseAdUnit.getMaterial().main_template == null) ? (baseAdUnit.getMaterial() == null || baseAdUnit.getMaterial().sub_template == null) ? null : baseAdUnit.getMaterial().sub_template : baseAdUnit.getMaterial().main_template;
        if (template != null) {
            int iIntValue = template.type.intValue();
            if (iIntValue == 1) {
                c(template.context.utf8());
            } else if (iIntValue == 2) {
                b(template.context.utf8());
            } else {
                if (iIntValue != 3) {
                    return;
                }
                d(template.context.utf8());
            }
        }
    }

    public e(Context context, List<BaseAdUnit> list, FrameLayout frameLayout, e eVar, JSONObject jSONObject) {
        String strOptString;
        super(context);
        this.l = false;
        this.n = null;
        this.p = new f() { // from class: com.sigmob.sdk.mraid2.e.1
            @Override // android.webkit.WebViewClient
            public void onPageFinished(WebView webView, String str) {
                super.onPageFinished(webView, str);
                Log.d(e.o, e.this.m + "-----------onPageFinished---------" + str);
                if (e.this.c != null) {
                    if (e.this.m != null) {
                        e.this.c.a(e.this.m);
                    }
                    e.this.c.c();
                }
                if (e.this.b != null && e.this.b.getMraidBridge() != null && !TextUtils.isEmpty(e.this.e)) {
                    e.this.b.getMraidBridge().c(e.this.e);
                }
                if (e.this.i) {
                    return;
                }
                e.this.i = true;
                if (e.this.h != null) {
                    e.this.h.a(e.this.d);
                }
            }

            @Override // com.sigmob.sdk.base.e, android.webkit.WebViewClient
            public void onPageStarted(WebView webView, String str, Bitmap bitmap) {
                super.onPageStarted(webView, str, bitmap);
            }

            @Override // com.sigmob.sdk.base.e, android.webkit.WebViewClient
            public void onReceivedError(WebView webView, int i, String str, String str2) {
                Log.d(e.o, "-----------onReceivedError---------" + str2);
                super.onReceivedError(webView, i, str, str2);
                if (e.this.b == null || e.this.b.getMraidBridge() == null || TextUtils.isEmpty(e.this.e)) {
                    return;
                }
                e.this.b.getMraidBridge().a(e.this.e, i, str);
            }

            @Override // android.webkit.WebViewClient
            public boolean onRenderProcessGone(WebView webView, RenderProcessGoneDetail renderProcessGoneDetail) {
                Log.d(e.o, "-----------onRenderProcessGone---------" + renderProcessGoneDetail);
                WindAdError windAdError = (renderProcessGoneDetail == null || !renderProcessGoneDetail.didCrash()) ? WindAdError.RENDER_PROCESS_GONE_UNSPECIFIED : WindAdError.RENDER_PROCESS_GONE_WITH_CRASH;
                SigmobLog.e("handleRenderProcessGone " + windAdError);
                if (e.this.h != null) {
                    e.this.h.a(windAdError);
                }
                e.this.destroy();
                return true;
            }

            @Override // android.webkit.WebViewClient
            public boolean shouldOverrideUrlLoading(WebView webView, String str) {
                int i;
                int i2;
                if (str == null) {
                    return false;
                }
                try {
                    if (str.startsWith("http") || str.startsWith("https")) {
                        webView.loadUrl(str);
                    } else if (e.this.n != null) {
                        List<String> list2 = e.this.n.getAdSetting() != null ? e.this.n.getAdSetting().scheme_white_list : null;
                        if (list2 != null && list2.size() > 0) {
                            while (i2 < list2.size()) {
                                String str2 = list2.get(i2);
                                i2 = (str.startsWith(str2) || str2.equals("*")) ? 0 : i2 + 1;
                                s.a(e.this.getContext(), Uri.parse(str));
                                return true;
                            }
                        }
                    } else {
                        for (int i3 = 0; i3 < e.this.getAdUnitList().size(); i3++) {
                            BaseAdUnit baseAdUnit = e.this.getAdUnitList().get(i3);
                            List<String> list3 = baseAdUnit.getAdSetting() != null ? baseAdUnit.getAdSetting().scheme_white_list : null;
                            if (list3 != null && list3.size() > 0) {
                                for (0; i < list3.size(); i + 1) {
                                    String str3 = list3.get(i);
                                    i = (str.startsWith(str3) || str3.equals("*")) ? 0 : i + 1;
                                    s.a(e.this.getContext(), Uri.parse(str));
                                    return true;
                                }
                            }
                        }
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                }
                return true;
            }
        };
        this.r = new LinkedHashMap();
        this.s = new LinkedHashMap();
        this.t = new b.InterfaceC0340b() { // from class: com.sigmob.sdk.mraid2.e.3
            @Override // com.sigmob.sdk.mraid2.b.InterfaceC0340b
            public void a() {
                if (e.this.g != null) {
                    e.this.g.a(e.this.d);
                }
            }

            @Override // com.sigmob.sdk.mraid2.b.InterfaceC0340b
            public void a(BaseAdUnit baseAdUnit, JSONObject jSONObject2) {
                if (e.this.g != null) {
                    e.this.g.a(e.this.d, baseAdUnit, jSONObject2);
                }
            }

            @Override // com.sigmob.sdk.mraid2.b.InterfaceC0340b
            public void a(String str) {
                if (!TextUtils.isEmpty(str)) {
                    for (int i = 0; i < e.this.getAdUnitList().size(); i++) {
                        e eVar2 = e.this;
                        eVar2.n = eVar2.getAdUnitList().get(i);
                        if (str.equals(e.this.n.getVid())) {
                            break;
                        }
                    }
                }
                if (e.this.n != null) {
                    com.sigmob.sdk.base.common.f.e().d(e.this.n.getCamp_id());
                    com.sigmob.sdk.base.common.f.e().c(e.this.n.getCrid());
                }
            }

            @Override // com.sigmob.sdk.mraid2.b.InterfaceC0340b
            public void a(String str, JSONObject jSONObject2) {
                n nVar;
                SigmobLog.d(" onVpaidEvent :" + str + Constants.COLON_SEPARATOR + jSONObject2);
                String strOptString2 = jSONObject2.optString("uniqueId");
                if (TextUtils.isEmpty(strOptString2)) {
                }
                com.sigmob.sdk.mraid.i iVar = com.sigmob.sdk.mraid2.a.f5042a.get(strOptString2);
                nVar = iVar instanceof n ? (n) iVar : null;
                switch (str) {
                    case "init":
                        n nVar2 = new n(strOptString2);
                        nVar2.a(new n.a() { // from class: com.sigmob.sdk.mraid2.e.3.1
                            @Override // com.sigmob.sdk.mraid.n.a
                            public void a(String str2, int i) {
                                if (e.this.c != null) {
                                    e.this.c.a(str2, i);
                                }
                            }

                            @Override // com.sigmob.sdk.mraid.n.a
                            public void a(String str2, int i, String str3) {
                                if (e.this.c != null) {
                                    e.this.c.a(str2, "code:" + i + ", msg:" + str3);
                                }
                            }

                            @Override // com.sigmob.sdk.mraid.n.a
                            public void a(String str2, long j) {
                                if (e.this.c != null) {
                                    e.this.c.c(str2, (int) j);
                                }
                            }

                            @Override // com.sigmob.sdk.mraid.n.a
                            public void a(String str2, long j, int i, int i2) {
                                if (e.this.c != null) {
                                    e.this.c.a(str2, (int) j, i, i2);
                                }
                            }

                            @Override // com.sigmob.sdk.mraid.n.a
                            public void a(String str2, long j, long j2) {
                                if (e.this.c != null) {
                                    e.this.c.a(str2, (int) j, (int) j2);
                                }
                            }

                            @Override // com.sigmob.sdk.mraid.n.a
                            public void b(String str2, int i) {
                                if (e.this.c != null) {
                                    e.this.c.b(str2, i);
                                }
                            }
                        });
                        nVar2.a(e.this.getContext(), jSONObject2);
                        com.sigmob.sdk.mraid2.a.f5042a.put(strOptString2, nVar2);
                        break;
                    case "assetURL":
                        if (nVar != null) {
                            nVar.a(jSONObject2);
                            break;
                        }
                        break;
                    case "play":
                        if (nVar != null) {
                            nVar.b(jSONObject2);
                            break;
                        }
                        break;
                    case "replay":
                        if (nVar != null) {
                            nVar.c(jSONObject2);
                            break;
                        }
                        break;
                    case "pause":
                        if (nVar != null) {
                            nVar.d(jSONObject2);
                            break;
                        }
                        break;
                    case "stop":
                        if (nVar != null) {
                            nVar.e(jSONObject2);
                            nVar.c();
                            com.sigmob.sdk.mraid2.a.f5042a.remove(nVar);
                            break;
                        }
                        break;
                    case "muted":
                        if (nVar != null) {
                            nVar.f(jSONObject2);
                            break;
                        }
                        break;
                    case "seek":
                        if (nVar != null) {
                            nVar.g(jSONObject2);
                            break;
                        }
                        break;
                    case "frame":
                        if (nVar != null) {
                            nVar.h(jSONObject2);
                            break;
                        }
                        break;
                }
            }

            /* JADX WARN: Removed duplicated region for block: B:16:0x0169  */
            @Override // com.sigmob.sdk.mraid2.b.InterfaceC0340b
            /*
                Code decompiled incorrectly, please refer to instructions dump.
                To view partially-correct add '--show-bad-code' argument
            */
            public void a(org.json.JSONObject r29) {
                /*
                    Method dump skipped, instruction units count: 483
                    To view this dump add '--comments-level debug' option
                */
                throw new UnsupportedOperationException("Method not decompiled: com.sigmob.sdk.mraid2.e.AnonymousClass3.a(org.json.JSONObject):void");
            }

            @Override // com.sigmob.sdk.mraid2.b.InterfaceC0340b
            public void b() {
                for (com.sigmob.sdk.mraid.i iVar : com.sigmob.sdk.mraid2.a.f5042a.values()) {
                    if (!TextUtils.isEmpty(iVar.a()) && iVar.a().equals(e.this.e)) {
                        ViewUtil.removeFromParent(iVar.b());
                        iVar.c();
                    }
                }
                ViewUtil.removeFromParent(e.this.d);
                if (e.this.s != null && e.this.s.size() > 0) {
                    Iterator it = e.this.s.values().iterator();
                    while (it.hasNext()) {
                        ((k) it.next()).c();
                    }
                    e.this.s.clear();
                }
                if (e.this.d != null) {
                    e.this.d = null;
                }
            }

            /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
            @Override // com.sigmob.sdk.mraid2.b.InterfaceC0340b
            public void b(String str, JSONObject jSONObject2) {
                SigmobLog.d(" onTimerEvent :" + str + Constants.COLON_SEPARATOR + jSONObject2);
                String strOptString2 = jSONObject2.optString("uniqueId");
                if (TextUtils.isEmpty(strOptString2)) {
                    return;
                }
                k kVar = (k) e.this.s.get(strOptString2);
                byte b2 = -1;
                switch (str.hashCode()) {
                    case -1831849669:
                        if (str.equals("invalidate")) {
                            b2 = 3;
                        }
                        break;
                    case 3143222:
                        if (str.equals("fire")) {
                            b2 = 1;
                        }
                        break;
                    case 3237136:
                        if (str.equals(PointCategory.INIT)) {
                            b2 = 0;
                        }
                        break;
                    case 106440182:
                        if (str.equals("pause")) {
                            b2 = 2;
                        }
                        break;
                }
                if (b2 == 0) {
                    e.this.s.put(strOptString2, new k(e.this.c, jSONObject2));
                    return;
                }
                if (b2 == 1) {
                    if (kVar != null) {
                        kVar.b();
                    }
                } else if (b2 == 2) {
                    if (kVar != null) {
                        kVar.a();
                    }
                } else {
                    if (b2 != 3) {
                        return;
                    }
                    if (kVar != null) {
                        kVar.c();
                    }
                    e.this.s.remove(strOptString2);
                }
            }

            @Override // com.sigmob.sdk.mraid2.b.InterfaceC0340b
            public void b(JSONObject jSONObject2) {
                String strOptString2 = jSONObject2.optString("uniqueId");
                if (TextUtils.isEmpty(strOptString2)) {
                    return;
                }
                com.sigmob.sdk.mraid.i iVar = com.sigmob.sdk.mraid2.a.f5042a.get(strOptString2);
                if (iVar != null) {
                    iVar.a(e.this.e);
                    View viewB = iVar.b();
                    if (viewB != null) {
                        ViewUtil.removeFromParent(viewB);
                        if (!e.this.l || e.this.k == null) {
                            e.this.j.addView(viewB);
                        } else {
                            viewB.setX(0.0f);
                            viewB.setY(0.0f);
                            e.this.k.addView(viewB);
                        }
                    }
                }
                e eVar2 = (e) e.this.r.get(strOptString2);
                if (eVar2 != null) {
                    ViewUtil.removeFromParent(eVar2);
                    e.this.j.addView(eVar2);
                }
            }

            @Override // com.sigmob.sdk.mraid2.b.InterfaceC0340b
            public void c() {
                if (e.this.g != null) {
                    e.this.g.b(e.this.d);
                }
            }

            @Override // com.sigmob.sdk.mraid2.b.InterfaceC0340b
            public void c(String str, JSONObject jSONObject2) {
                e eVar2;
                SigmobLog.d(" onWebViewEvent :" + str + Constants.COLON_SEPARATOR + jSONObject2);
                String strOptString2 = jSONObject2.optString("uniqueId");
                if (TextUtils.isEmpty(strOptString2)) {
                }
                eVar2 = (e) e.this.r.get(strOptString2);
                switch (str) {
                    case "init":
                        if (e.this.g != null) {
                            e.this.r.put(strOptString2, e.this.g.a(e.this.d, jSONObject2));
                            break;
                        }
                        break;
                    case "loadURL":
                        String strOptString3 = jSONObject2.optString("url");
                        if (eVar2 != null) {
                            eVar2.c(strOptString3);
                            break;
                        }
                        break;
                    case "frame":
                        if (eVar2 != null) {
                            JSONObject jSONObjectOptJSONObject = jSONObject2.optJSONObject("frame");
                            int iOptInt = jSONObjectOptJSONObject.optInt("x", 0);
                            int iOptInt2 = jSONObjectOptJSONObject.optInt("y", 0);
                            int iOptInt3 = jSONObjectOptJSONObject.optInt("w", -1);
                            int iOptInt4 = jSONObjectOptJSONObject.optInt(at.g, -1);
                            if (iOptInt3 > 0) {
                                iOptInt3 = Dips.dipsToIntPixels(iOptInt3, com.sigmob.sdk.b.b());
                            }
                            if (iOptInt4 > 0) {
                                iOptInt4 = Dips.dipsToIntPixels(iOptInt4, com.sigmob.sdk.b.b());
                            }
                            eVar2.setLayoutParams(new FrameLayout.LayoutParams(iOptInt3, iOptInt4));
                            eVar2.setX(Dips.dipsToIntPixels(iOptInt, com.sigmob.sdk.b.b()));
                            eVar2.setY(Dips.dipsToIntPixels(iOptInt2, com.sigmob.sdk.b.b()));
                            eVar2.requestLayout();
                            break;
                        }
                        break;
                    case "loadHTMLString":
                        String strOptString4 = jSONObject2.optString("html");
                        if (eVar2 != null && !TextUtils.isEmpty(strOptString4)) {
                            eVar2.b(strOptString4);
                            break;
                        }
                        break;
                    case "loadId":
                        String strOptString5 = jSONObject2.optString("id");
                        if (eVar2 != null && !TextUtils.isEmpty(strOptString5)) {
                            eVar2.e(strOptString5);
                            break;
                        }
                        break;
                    case "loadURLByPackage":
                        String strOptString6 = jSONObject2.optString("URL");
                        if (eVar2 != null && !TextUtils.isEmpty(strOptString6)) {
                            eVar2.d(strOptString6);
                            break;
                        }
                        break;
                    case "reload":
                        if (eVar2 != null) {
                            eVar2.reload();
                            break;
                        }
                        break;
                    case "stopLoading":
                        if (eVar2 != null) {
                            eVar2.stopLoading();
                            break;
                        }
                        break;
                }
            }

            @Override // com.sigmob.sdk.mraid2.b.InterfaceC0340b
            public void c(JSONObject jSONObject2) {
                String strOptString2 = jSONObject2.optString("uniqueId");
                if (TextUtils.isEmpty(strOptString2)) {
                    return;
                }
                com.sigmob.sdk.mraid.i iVar = com.sigmob.sdk.mraid2.a.f5042a.get(strOptString2);
                if (iVar != null) {
                    iVar.a(e.this.e);
                    View viewB = iVar.b();
                    if (viewB != null) {
                        ViewUtil.removeFromParent(viewB);
                        if (!e.this.l || e.this.k == null) {
                            e.this.j.addView(viewB);
                            e.this.j.bringChildToFront(e.this.d);
                        } else {
                            viewB.setX(0.0f);
                            viewB.setY(0.0f);
                            e.this.k.addView(viewB);
                        }
                    }
                }
                e eVar2 = (e) e.this.r.get(strOptString2);
                if (eVar2 != null) {
                    ViewUtil.removeFromParent(eVar2);
                    e.this.j.addView(eVar2);
                    e.this.j.bringChildToFront(e.this.d);
                }
            }

            @Override // com.sigmob.sdk.mraid2.b.InterfaceC0340b
            public void d(JSONObject jSONObject2) {
                e.this.l = true;
                int iOptInt = jSONObject2.optInt("flag");
                if (e.this.g == null || e.this.k != null) {
                    return;
                }
                e eVar2 = e.this;
                eVar2.k = eVar2.g.a(e.this.d, iOptInt);
                ArrayList arrayList = new ArrayList();
                for (int i = 0; i < e.this.j.getChildCount(); i++) {
                    View childAt = e.this.j.getChildAt(i);
                    if (childAt instanceof com.sigmob.sdk.mraid.l) {
                        arrayList.add((com.sigmob.sdk.mraid.l) childAt);
                    }
                }
                Log.d(e.o, "-------------onUseScrollView----------" + arrayList.size());
                for (int i2 = 0; i2 < arrayList.size(); i2++) {
                    com.sigmob.sdk.mraid.l lVar = (com.sigmob.sdk.mraid.l) arrayList.get(i2);
                    lVar.setX(0.0f);
                    lVar.setY(0.0f);
                    ViewUtil.removeFromParent(lVar);
                    e.this.k.addView(lVar);
                }
            }

            @Override // com.sigmob.sdk.mraid2.b.InterfaceC0340b
            public void e(JSONObject jSONObject2) {
                if (e.this.g != null) {
                    e.this.g.b(e.this.d, jSONObject2);
                }
            }
        };
        this.d = this;
        this.j = frameLayout;
        this.b = eVar;
        this.i = false;
        if (jSONObject != null) {
            try {
                this.m = new JSONObject(jSONObject.optString("args"));
            } catch (JSONException e) {
                e.printStackTrace();
            }
            strOptString = jSONObject.optString("uniqueId");
        } else {
            strOptString = UUID.randomUUID().toString();
        }
        this.e = strOptString;
        a(true);
        setBackgroundColor(0);
        try {
            ReflectionUtil.MethodBuilder methodBuilder = new ReflectionUtil.MethodBuilder(getSettings(), new String(Base64.decode(com.sigmob.sdk.base.h.C, 2)));
            methodBuilder.addParam(Boolean.TYPE, true);
            methodBuilder.execute();
        } catch (Exception e2) {
            e2.printStackTrace();
        }
        try {
            ReflectionUtil.MethodBuilder methodBuilder2 = new ReflectionUtil.MethodBuilder(getSettings(), new String(Base64.decode(com.sigmob.sdk.base.h.D, 2)));
            methodBuilder2.addParam(Boolean.TYPE, true);
            methodBuilder2.execute();
        } catch (Exception e3) {
            e3.printStackTrace();
        }
        setWebViewClient(this.p);
        com.sigmob.sdk.mraid2.b bVar = new com.sigmob.sdk.mraid2.b(list);
        this.c = bVar;
        bVar.a(this.t);
        this.c.a(this);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void d(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        addJavascriptInterface(new b.a(this.c), "sigandroid");
        String strMd5 = Md5Util.md5(str);
        File fileC = com.sigmob.sdk.base.utils.b.c(com.sigmob.sdk.base.utils.b.c);
        final File file = new File(fileC.getAbsolutePath() + File.separator + strMd5, "endcard.html");
        Log.d(o, file.exists() + "---------loadURLByPackage----------" + file.getAbsolutePath());
        if (file.exists()) {
            loadUrl("file://" + file.getAbsolutePath());
            return;
        }
        File file2 = new File(fileC, strMd5 + ".tgz");
        DownloadItem downloadItem = new DownloadItem();
        downloadItem.url = str;
        downloadItem.filePath = file2.getAbsolutePath();
        downloadItem.type = DownloadItem.FileType.FILE;
        p.a().add(downloadItem, new FileDownloadRequest.FileDownloadListener() { // from class: com.sigmob.sdk.mraid2.e.2
            @Override // com.czhj.volley.toolbox.FileDownloadRequest.FileDownloadListener
            public void downloadProgress(DownloadItem downloadItem2, long j, long j2) {
            }

            @Override // com.czhj.volley.toolbox.FileDownloadRequest.FileDownloadListener
            public void onCancel(DownloadItem downloadItem2) {
                Log.d(e.o, "-----------onCancel----------" + downloadItem2.url);
            }

            @Override // com.czhj.volley.toolbox.FileDownloadRequest.FileDownloadListener
            public void onErrorResponse(DownloadItem downloadItem2) {
                Log.d(e.o, "-----------onErrorResponse----------" + downloadItem2.url);
            }

            @Override // com.czhj.volley.toolbox.FileDownloadRequest.FileDownloadListener
            public void onSuccess(DownloadItem downloadItem2) {
                Log.d(e.o, downloadItem2.url + "-----------onSuccess----------" + downloadItem2.filePath);
                try {
                    com.sigmob.sdk.base.utils.a.a(new File(downloadItem2.filePath), new File(downloadItem2.filePath.replace(".tgz", "/")));
                    if (file.exists()) {
                        e.this.d.loadUrl("file://" + file.getAbsolutePath());
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void e(String str) {
        String strUtf8;
        Template template;
        Log.d(o, "---------loadContentId----------" + str);
        for (int i = 0; i < getAdUnitList().size(); i++) {
            BaseAdUnit baseAdUnit = getAdUnitList().get(i);
            if (baseAdUnit == null || baseAdUnit.scene == null || !str.equals(baseAdUnit.scene.templateId)) {
                Ad ad = baseAdUnit.getAd();
                if (ad != null && ad.materials != null && ad.materials.get(0) != null) {
                    if (ad.materials.get(0).main_template != null && str.equals(ad.materials.get(0).main_template.templateId)) {
                        template = ad.materials.get(0).main_template;
                    } else if (ad.materials.get(0).sub_template != null && str.equals(ad.materials.get(0).sub_template.templateId)) {
                        template = ad.materials.get(0).sub_template;
                    }
                }
            } else {
                template = baseAdUnit.scene;
            }
            strUtf8 = template.context.utf8();
        }
        strUtf8 = null;
        if (TextUtils.isEmpty(strUtf8)) {
            return;
        }
        b(strUtf8);
    }

    @Override // com.sigmob.sdk.mraid2.a
    public /* bridge */ /* synthetic */ void a(BaseAdUnit baseAdUnit) {
        super.a(baseAdUnit);
    }

    @Override // com.sigmob.sdk.mraid2.a
    public /* bridge */ /* synthetic */ void a(boolean z) {
        super.a(z);
    }

    public void b(String str) {
        Log.d(o, "---------loadContentHtml----------" + str);
        addJavascriptInterface(new b.a(this.c), "sigandroid");
        File fileA = com.sigmob.sdk.base.utils.b.a(str, Md5Util.md5(str) + ".html");
        if (fileA == null || TextUtils.isEmpty(fileA.getAbsolutePath())) {
            loadDataWithBaseURL(Networking.getBaseUrlScheme() + "://localhost/", str, "text/html", "UTF-8", null);
            return;
        }
        loadUrl("file://" + fileA.getAbsolutePath());
    }

    @Override // com.sigmob.sdk.mraid2.a
    public /* bridge */ /* synthetic */ void b(boolean z) {
        super.b(z);
    }

    public void c(String str) {
        Log.d(o, "---------loadContentUrl----------" + str);
        addJavascriptInterface(new b.a(this.c), "sigandroid");
        loadUrl(str);
    }

    @Override // com.sigmob.sdk.mraid2.a, android.webkit.WebView
    public void destroy() {
        super.destroy();
        if (getAdUnitList() == null || getAdUnitList().size() <= 0) {
            return;
        }
        for (int i = 0; i < getAdUnitList().size(); i++) {
            ab sessionManager = getAdUnitList().get(i).getSessionManager();
            if (sessionManager != null) {
                sessionManager.a();
            }
        }
    }

    public com.sigmob.sdk.base.common.e getAdSize() {
        return this.q;
    }

    @Override // com.sigmob.sdk.mraid2.a
    List<BaseAdUnit> getAdUnitList() {
        return this.c.b();
    }

    public com.sigmob.sdk.mraid2.b getMraidBridge() {
        return this.c;
    }

    public c getScrollTouchListener() {
        return this.f;
    }

    @Override // com.sigmob.sdk.mraid2.a, android.webkit.WebView
    public /* bridge */ /* synthetic */ void loadUrl(String str) {
        super.loadUrl(str);
    }

    @Override // android.webkit.WebView, android.view.View
    protected void onVisibilityChanged(View view, int i) {
        super.onVisibilityChanged(view, i);
        this.c.a(i == 0);
    }

    public void setAdSize(com.sigmob.sdk.base.common.e eVar) {
        this.q = eVar;
    }

    public void setLoadListener(a aVar) {
        this.h = aVar;
    }

    public void setNextWebViewListener(b bVar) {
        this.g = bVar;
    }

    public void setScrollTouchListener(c cVar) {
        this.f = cVar;
    }

    @Override // com.sigmob.sdk.mraid2.a, android.webkit.WebView
    public /* bridge */ /* synthetic */ void setWebViewClient(WebViewClient webViewClient) {
        super.setWebViewClient(webViewClient);
    }
}
