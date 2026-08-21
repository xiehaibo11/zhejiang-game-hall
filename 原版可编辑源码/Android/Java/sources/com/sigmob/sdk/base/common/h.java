package com.sigmob.sdk.base.common;

import android.content.Context;
import android.text.TextUtils;
import android.util.Log;
import android.widget.Toast;
import com.czhj.sdk.common.network.JsonRequest;
import com.czhj.sdk.common.network.Networking;
import com.czhj.sdk.common.network.SigmobRequestQueue;
import com.czhj.sdk.common.utils.FileUtil;
import com.czhj.sdk.common.utils.Preconditions;
import com.czhj.sdk.common.utils.TouchLocation;
import com.czhj.sdk.logger.SigmobLog;
import com.czhj.volley.VolleyError;
import com.mbridge.msdk.MBridgeConstans;
import com.sigmob.sdk.base.common.ag;
import com.sigmob.sdk.base.common.z;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.SigMacroCommon;
import com.sigmob.sdk.base.mta.PointCategory;
import com.sigmob.sdk.base.mta.PointEntitySigmob;
import com.sigmob.sdk.base.mta.PointEntitySigmobError;
import com.sigmob.sdk.base.views.q;
import java.io.File;
import java.io.Serializable;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import org.json.JSONObject;

public class h implements Serializable {
    private static final long serialVersionUID = 2;
    protected Map<String, String> a;
    protected String b;
    protected String c;
    protected String d;
    protected String e;
    protected String f;
    protected String g;
    protected String h;
    public boolean j;
    private boolean l;
    private boolean m;
    private String n;
    private boolean o;
    private x p;
    private com.sigmob.sdk.base.views.q q;
    private Context r;
    private WeakReference<Context> s;
    private q.b t;
    private BaseAdUnit u;
    private boolean v;
    private int w;
    protected int i = 1;
    private final List<com.sigmob.sdk.videoAd.f> k = new ArrayList();

    static class 6 {
        static final int[] a;
        static final int[] b;

        static {
            int[] iArr = new int[af.values().length];
            b = iArr;
            try {
                iArr[af.a.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                b[af.b.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                b[af.c.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                b[af.d.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                b[af.e.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
            try {
                b[af.f.ordinal()] = 6;
            } catch (NoSuchFieldError unused6) {
            }
            try {
                b[af.g.ordinal()] = 7;
            } catch (NoSuchFieldError unused7) {
            }
            int[] iArr2 = new int[com.sigmob.sdk.base.a.values().length];
            a = iArr2;
            try {
                iArr2[com.sigmob.sdk.base.a.a.ordinal()] = 1;
            } catch (NoSuchFieldError unused8) {
            }
            try {
                a[com.sigmob.sdk.base.a.c.ordinal()] = 2;
            } catch (NoSuchFieldError unused9) {
            }
        }
    }

    protected h() {
    }

    public static h a(BaseAdUnit baseAdUnit) {
        h hVar = new h();
        hVar.b(baseAdUnit);
        return hVar;
    }

    private void b(com.sigmob.sdk.base.a aVar, String str, String str2, boolean z) {
        ab sessionManager;
        a aVar2;
        int i = 6.a[aVar.ordinal()];
        if (i == 1) {
            sessionManager = this.u.getSessionManager();
            aVar2 = a.u;
        } else if (i != 2) {
            sessionManager = this.u.getSessionManager();
            aVar2 = a.c;
        } else {
            sessionManager = this.u.getSessionManager();
            aVar2 = a.v;
        }
        sessionManager.a(aVar2, 0);
    }

    private boolean l() {
        WeakReference<Context> weakReference = this.s;
        if (weakReference != null && this.u != null) {
            Context context = weakReference.get();
            if (context != null && this.u.isDownloadDialog() && this.u.getadPrivacy() != null && this.q == null) {
                com.sigmob.sdk.base.views.q qVar = new com.sigmob.sdk.base.views.q(context, this.u);
                this.q = qVar;
                qVar.a(new q.b() {
                    @Override
                    public void a() {
                        if (h.this.q != null) {
                            h.this.q.dismiss();
                            h.this.q.c();
                            h.this.q = null;
                            h.this.l = false;
                        }
                        if (h.this.u == null) {
                            return;
                        }
                        ab sessionManager = h.this.u.getSessionManager();
                        if (sessionManager != null) {
                            sessionManager.a(a.g, 0);
                        }
                        if (h.this.t != null) {
                            h.this.t.a();
                        }
                    }

                    @Override
                    public void a(String str, String str2) {
                        if (h.this.u == null) {
                            return;
                        }
                        h.this.i(str);
                        if (h.this.t != null) {
                            h.this.t.a(str, str2);
                        }
                    }

                    @Override
                    public void b() {
                        if (h.this.u == null) {
                            return;
                        }
                        ab sessionManager = h.this.u.getSessionManager();
                        if (sessionManager != null) {
                            sessionManager.a(a.f, 0);
                        }
                        if (h.this.t != null) {
                            h.this.t.b();
                        }
                    }
                });
            }
            com.sigmob.sdk.base.views.q qVar2 = this.q;
            if (qVar2 != null && qVar2.a() && !this.l) {
                this.q.show();
                this.l = true;
                return true;
            }
        }
        return false;
    }

    public List<g> a(long j, long j2) {
        if (j2 <= 0 || j < 0) {
            return Collections.emptyList();
        }
        ArrayList arrayList = new ArrayList();
        com.sigmob.sdk.videoAd.f fVar = new com.sigmob.sdk.videoAd.f(a.n, j / j2);
        int size = this.k.size();
        for (int i = 0; i < size; i++) {
            com.sigmob.sdk.videoAd.f fVar2 = this.k.get(i);
            if (fVar2.compareTo(fVar) > 0) {
                break;
            }
            if (!fVar2.m()) {
                arrayList.add(fVar2);
            }
        }
        return arrayList;
    }

    public void a(int i) {
        this.w = i;
    }

    public void a(Context context, int i, BaseAdUnit baseAdUnit) {
        Preconditions.NoThrow.checkNotNull(context, "context cannot be null");
        z.b("start", null, baseAdUnit);
        com.sigmob.sdk.base.network.f.a(baseAdUnit, a.a);
    }

    public void a(Context context, TouchLocation touchLocation, TouchLocation touchLocation2, com.sigmob.sdk.base.a aVar, BaseAdUnit baseAdUnit) {
        Preconditions.NoThrow.checkNotNull(context, "context cannot be null");
    }

    public void a(Context context, BaseAdUnit baseAdUnit) {
        z.a(PointCategory.LANDING_PAGE_SHOW, (String) null, baseAdUnit);
    }

    public void a(Context context, BaseAdUnit baseAdUnit, q.b bVar) {
        if (context == null || baseAdUnit == null) {
            return;
        }
        this.s = new WeakReference<>(context);
        this.u = baseAdUnit;
        this.t = bVar;
    }

    public void a(Context context, String str, BaseAdUnit baseAdUnit, String str2, int i) {
        Preconditions.NoThrow.checkNotNull(context, "context cannot be null");
        z.a(str2, i, str, baseAdUnit);
    }

    public void a(com.sigmob.sdk.base.a aVar, String str, String str2, boolean z) {
        a(aVar, str, str2, z, false);
    }

    public void a(final com.sigmob.sdk.base.a aVar, String str, String str2, final boolean z, final boolean z2) {
        String str3 = this.b;
        if (!TextUtils.isEmpty(str)) {
            str3 = str;
        }
        this.u.getClickCommon().clickUIType = aVar;
        this.u.getClickCommon().clickCoordinate = str2;
        this.u.getClickCommon().clickUrl = str3;
        new ag.a().a(af.a, af.f, af.d, af.e, af.c, af.b).a(new ag.b() {
            @Override
            public void a(final String str4, af afVar) {
                SigmobLog.d("urlHandlingSucceeded: " + afVar.name() + " url: " + str4);
                if (!h.this.u.getAd().forbiden_parse_landingpage.booleanValue()) {
                    z.a(h.this.u, afVar.name(), str4);
                }
                h.this.u.getClickCommon().isDeeplink = "0";
                int i = 6.b[afVar.ordinal()];
                if (i == 2 || i == 3) {
                    Log.d("lance", "打开小程序成功:" + afVar);
                    if (z) {
                        com.sigmob.sdk.base.network.f.a(h.this.u, a.I);
                        z.a(PointCategory.OPEN_DEEPLINK, (String) null, h.this.u, new z.a() {
                            @Override
                            public void a(Object obj) {
                                if (obj instanceof PointEntitySigmob) {
                                    ((PointEntitySigmob) obj).setFinal_url(str4);
                                }
                            }
                        });
                    }
                    h.this.u.getClickCommon().isDeeplink = "1";
                } else if (i != 4) {
                    if (i == 5) {
                        if (z2) {
                            h.this.h(str4);
                        } else {
                            h.this.i(str4);
                        }
                    }
                } else if (z) {
                    if (h.this.u.getAndroidMarket() != null && !TextUtils.isEmpty(h.this.u.getAndroidMarket().app_package_name)) {
                        try {
                            FileUtil.writeToCache(h.this.u, new File(com.sigmob.sdk.base.utils.b.f(), h.this.u.getAndroidMarket().app_package_name + com.tkay.china.common.a.a.f).getAbsolutePath());
                        } catch (Throwable th) {
                            SigmobLog.e("write ad info with package error " + th.getMessage());
                        }
                    }
                    z.a("open_market", (String) null, h.this.u, new z.a() {
                        @Override
                        public void a(Object obj) {
                            if (obj instanceof PointEntitySigmob) {
                                PointEntitySigmob pointEntitySigmob = (PointEntitySigmob) obj;
                                pointEntitySigmob.setFinal_url(str4);
                                if (h.this.u.getAndroidMarket() != null) {
                                    HashMap map = new HashMap();
                                    map.put("app_package_name", h.this.u.getAndroidMarket().app_package_name);
                                    map.put("store_package_name", h.this.u.getAndroidMarket().appstore_package_name);
                                    pointEntitySigmob.setOptions(map);
                                }
                            }
                        }
                    });
                }
                h.this.u.setCustomDeeplink(null);
                h.this.u.setCustomAndroidMarket(null);
                h.this.u.setCustomLandPageUrl(null);
                if (h.this.p != null) {
                    h.this.p.a(z, aVar);
                }
            }

            @Override
            public void b(final String str4, af afVar) {
                SigmobLog.d("urlHandlingFailed: " + afVar.name() + " url: " + str4);
                h.this.u.getClickCommon().isDeeplink = "0";
                int i = 6.b[afVar.ordinal()];
                if (i == 2 || i == 3) {
                    Log.d("lance", "打开小程序失败:" + afVar);
                    if (z) {
                        com.sigmob.sdk.base.network.f.a(h.this.u, a.J);
                        z.a(PointCategory.OPEN_DEEPLINK_FAILED, (String) null, h.this.u, new z.a() {
                            @Override
                            public void a(Object obj) {
                                if (obj instanceof PointEntitySigmob) {
                                    ((PointEntitySigmob) obj).setFinal_url(str4);
                                }
                            }
                        });
                        return;
                    }
                    return;
                }
                if (i == 4) {
                    if (z) {
                        z.a(PointCategory.OPEN_MARKET_FAILED, str4, h.this.u, new z.a() {
                            @Override
                            public void a(Object obj) {
                                if (obj instanceof PointEntitySigmob) {
                                    PointEntitySigmob pointEntitySigmob = (PointEntitySigmob) obj;
                                    pointEntitySigmob.setFinal_url(str4);
                                    HashMap map = new HashMap();
                                    map.put("app_package_name", h.this.u.getAndroidMarket().app_package_name);
                                    map.put("store_package_name", h.this.u.getAndroidMarket().appstore_package_name);
                                    pointEntitySigmob.setOptions(map);
                                }
                            }
                        });
                    }
                } else {
                    if (i != 7) {
                        return;
                    }
                    if (TextUtils.isEmpty(str4) && !h.this.u.getAd().forbiden_parse_landingpage.booleanValue()) {
                        z.a(h.this.u, afVar.name(), str4);
                    }
                    h.this.u.setCustomDeeplink(null);
                    h.this.u.setCustomAndroidMarket(null);
                    h.this.u.setCustomLandPageUrl(null);
                    if (h.this.p != null) {
                        h.this.p.a(z, aVar);
                    }
                }
            }
        }).a(this.u).a(this.u.isSkipSigmobBrowser()).b(this.u.getAd().forbiden_parse_landingpage.booleanValue()).a().a(com.sigmob.sdk.b.b(), str);
    }

    public void a(com.sigmob.sdk.base.a aVar, String str, boolean z) {
        a(aVar, (String) null, str, z, true);
    }

    public void a(x xVar) {
        this.p = xVar;
    }

    public void a(String str) {
        this.h = str;
    }

    public void a(List<com.sigmob.sdk.videoAd.f> list) {
        Preconditions.NoThrow.checkNotNull(list, "fractionalTrackers cannot be null");
        this.k.addAll(list);
        Collections.sort(this.k);
    }

    public void a(boolean z) {
        this.o = z;
    }

    public boolean a() {
        return this.v;
    }

    public String b() {
        return this.h;
    }

    public void b(Context context, int i, BaseAdUnit baseAdUnit) {
        Preconditions.NoThrow.checkNotNull(context, "context cannot be null");
    }

    public void b(Context context, BaseAdUnit baseAdUnit) {
        z.a(PointCategory.LANDING_PAGE_CLOSE, (String) null, baseAdUnit);
    }

    public void b(BaseAdUnit baseAdUnit) {
        d(baseAdUnit.getSplashFilePath());
    }

    public void b(String str) {
        this.b = str;
    }

    public String c() {
        return this.b;
    }

    public void c(Context context, int i, BaseAdUnit baseAdUnit) {
        Preconditions.NoThrow.checkNotNull(context, "context cannot be null");
    }

    public void c(BaseAdUnit baseAdUnit) {
        com.sigmob.sdk.base.network.f.a(baseAdUnit, a.u);
    }

    public void c(String str) {
        this.c = str;
    }

    public String d() {
        return this.c;
    }

    public void d(BaseAdUnit baseAdUnit) {
        com.sigmob.sdk.base.network.f.a(baseAdUnit, a.v);
    }

    protected void d(String str) {
        this.d = str;
    }

    public String e() {
        return this.d;
    }

    public void e(BaseAdUnit baseAdUnit) {
        com.sigmob.sdk.base.network.f.a(baseAdUnit, a.c);
    }

    public void e(String str) {
        if (str != null) {
            this.e = str;
        }
    }

    public String f() {
        return this.e;
    }

    public void f(String str) {
        if (str != null) {
            this.f = str;
        }
    }

    public String g() {
        return this.f;
    }

    public void g(String str) {
        if (str != null) {
            this.g = str;
        }
    }

    public String h() {
        return this.g;
    }

    public void h(String str) {
        if (l()) {
            return;
        }
        i(str);
    }

    public Map<String, String> i() {
        return this.a;
    }

    public void i(String str) {
        if (n.a(this.n)) {
            try {
                Toast.makeText(com.sigmob.sdk.b.b(), "当前正在努力下载，请稍等", 1).show();
                return;
            } catch (Throwable unused) {
                return;
            }
        }
        String landing_page = this.u.getLanding_page();
        if (!TextUtils.isEmpty(str)) {
            landing_page = str;
        }
        String strMacroProcess = this.u.getMacroCommon().macroProcess(landing_page);
        if (this.u.getBubInteractionType() != 1) {
            this.n = str;
            n.a(str, this.u);
            return;
        }
        JsonRequest jsonRequest = new JsonRequest(strMacroProcess, new JsonRequest.Listener() {
            @Override
            public void onErrorResponse(VolleyError volleyError) {
                z.a(PointCategory.DOWNLOAD_START, "0", h.this.u, new z.a() {
                    @Override
                    public void a(Object obj) {
                        if (obj instanceof PointEntitySigmob) {
                            ((PointEntitySigmob) obj).setFinal_url(h.this.n);
                        }
                    }
                });
                z.a(PointCategory.DOWNLOAD_START, 0, volleyError.getMessage(), h.this.u, new z.a() {
                    @Override
                    public void a(Object obj) {
                        if (obj instanceof PointEntitySigmobError) {
                            ((PointEntitySigmobError) obj).setFinal_url(h.this.n);
                        }
                    }
                });
                SigmobLog.e(volleyError.getMessage());
            }

            @Override
            public void onSuccess(JSONObject jSONObject) {
                try {
                    SigmobLog.d("GDTConvertRequest response " + jSONObject);
                    if (jSONObject.getInt("ret") != 0) {
                        z.a(PointCategory.DOWNLOAD_START, "0", h.this.u, new z.a() {
                            @Override
                            public void a(Object obj) {
                                if (obj instanceof PointEntitySigmob) {
                                    ((PointEntitySigmob) obj).setFinal_url(h.this.n);
                                }
                            }
                        });
                        z.a(PointCategory.DOWNLOAD_START, 0, jSONObject.toString(), h.this.u, new z.a() {
                            @Override
                            public void a(Object obj) {
                                if (obj instanceof PointEntitySigmobError) {
                                    ((PointEntitySigmobError) obj).setFinal_url(h.this.n);
                                }
                            }
                        });
                        return;
                    }
                    String string = jSONObject.getJSONObject("data").getString("dstlink");
                    String string2 = jSONObject.getJSONObject("data").getString(MBridgeConstans.DYNAMIC_VIEW_WX_CLICKID);
                    SigMacroCommon macroCommon = h.this.u.getMacroCommon();
                    if (macroCommon instanceof SigMacroCommon) {
                        macroCommon.addMarcoKey(SigMacroCommon._CLICKID_, string2);
                    }
                    h.this.n = string;
                    n.a(string, h.this.u);
                } catch (Throwable th) {
                    SigmobLog.e(th.getMessage());
                    z.a(PointCategory.DOWNLOAD_START, "0", h.this.u, new z.a() {
                        @Override
                        public void a(Object obj) {
                            if (obj instanceof PointEntitySigmob) {
                                ((PointEntitySigmob) obj).setFinal_url(h.this.n);
                            }
                        }
                    });
                    z.a(PointCategory.DOWNLOAD_START, 0, th.getMessage(), h.this.u, new z.a() {
                        @Override
                        public void a(Object obj) {
                            if (obj instanceof PointEntitySigmobError) {
                                ((PointEntitySigmobError) obj).setFinal_url(h.this.n);
                            }
                        }
                    });
                }
            }
        }, 1);
        SigmobRequestQueue requestQueue = Networking.getRequestQueue();
        if (requestQueue == null) {
            z.a(PointCategory.DOWNLOAD_START, "0", this.u, new z.a() {
                @Override
                public void a(Object obj) {
                    if (obj instanceof PointEntitySigmob) {
                        ((PointEntitySigmob) obj).setFinal_url(h.this.n);
                    }
                }
            });
            z.a(PointCategory.DOWNLOAD_START, 0, "request queue is null", this.u, new z.a() {
                @Override
                public void a(Object obj) {
                    if (obj instanceof PointEntitySigmobError) {
                        ((PointEntitySigmobError) obj).setFinal_url(h.this.n);
                    }
                }
            });
        } else {
            jsonRequest.setTag("GDTRequestConvert");
            requestQueue.add(jsonRequest);
        }
    }

    public boolean j() {
        return this.m;
    }

    public void k() {
        this.t = null;
    }
}
