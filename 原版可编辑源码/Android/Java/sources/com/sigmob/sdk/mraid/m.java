package com.sigmob.sdk.mraid;

import android.app.Activity;
import android.content.Context;
import android.content.res.Configuration;
import android.os.Bundle;
import android.text.TextUtils;
import android.view.MotionEvent;
import android.view.View;
import android.webkit.ValueCallback;
import android.widget.FrameLayout;
import android.widget.RelativeLayout;
import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.common.utils.Dips;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.common.x;
import com.sigmob.sdk.base.common.z;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.ClickCommon;
import com.sigmob.sdk.base.models.IntentActions;
import com.sigmob.sdk.base.models.PlacementType;
import com.sigmob.sdk.base.views.q;
import com.sigmob.sdk.mraid.a;
import com.sigmob.sdk.mraid.d;
import com.sigmob.sdk.mraid.s;
import com.sigmob.windad.WindAdError;
import java.net.URI;
import java.util.Map;
import org.json.JSONObject;

public class m extends com.sigmob.sdk.videoAd.c implements x {
    protected com.sigmob.sdk.base.common.r f;
    private int g;
    private com.sigmob.sdk.videoAd.a h;
    private int i;
    private boolean j;
    private BaseAdUnit k;
    private d l;
    private q m;
    private com.sigmob.sdk.base.views.x n;
    private int o;
    private boolean p;
    private boolean q;
    private com.sigmob.sdk.base.views.q r;
    private boolean s;

    static class 8 {
        static final int[] a;

        static {
            int[] iArr = new int[com.sigmob.sdk.base.a.values().length];
            a = iArr;
            try {
                iArr[com.sigmob.sdk.base.a.a.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                a[com.sigmob.sdk.base.a.c.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
        }
    }

    public m(Activity activity, BaseAdUnit baseAdUnit, Bundle bundle, Bundle bundle2, String str, com.sigmob.sdk.base.common.j jVar) {
        super(activity, str, jVar);
        this.q = false;
        this.s = false;
        this.k = baseAdUnit;
        com.sigmob.sdk.videoAd.a aVar = (com.sigmob.sdk.videoAd.a) baseAdUnit.getAdConfig();
        this.h = aVar;
        aVar.a(k(), this.k, (q.b) null);
        this.h.a(this);
        this.i = ClientMetadata.getInstance().getInsetBottom();
        int iIntValue = this.k.getAd().display_orientation.intValue();
        this.g = iIntValue != 1 ? iIntValue != 2 ? bundle.getInt(com.sigmob.sdk.base.h.u, 3) : 6 : 7;
        h().a(this.g);
        k().requestWindowFeature(1);
        k().getWindow().addFlags(16778240);
        b(activity, this.g, bundle);
        j().setBackgroundColor(0);
    }

    private void a(int i, RelativeLayout.LayoutParams layoutParams) {
        int i2;
        int iDipsToIntPixels = Dips.dipsToIntPixels(10.0f, this.b);
        if (i == 1 || i == 2) {
            layoutParams.addRule(10);
            i2 = 9;
        } else {
            if (i != 3 && i != 4) {
                return;
            }
            layoutParams.addRule(10);
            i2 = 11;
        }
        layoutParams.addRule(i2);
        layoutParams.setMargins(iDipsToIntPixels, iDipsToIntPixels * 2, iDipsToIntPixels, iDipsToIntPixels);
    }

    private void a(Context context, int i) {
        if (this.n != null) {
            return;
        }
        com.sigmob.sdk.base.views.x xVar = new com.sigmob.sdk.base.views.x(context, this.h.n());
        this.n = xVar;
        xVar.setVisibility(i);
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(Dips.dipsToIntPixels(30.0f, context), Dips.dipsToIntPixels(30.0f, context));
        a(this.h.n(), layoutParams);
        j().addView(this.n, layoutParams);
        this.n.setOnTouchListener(new View.OnTouchListener() {
            @Override
            public boolean onTouch(View view, MotionEvent motionEvent) {
                if (motionEvent.getAction() == 1) {
                    m.this.q = true;
                    m.this.h.b(m.this.i(), m.this.o, m.this.k);
                    m.this.h().a();
                }
                return true;
            }
        });
        this.n.a(this.k);
        String strH = this.h.h();
        if (strH != null) {
            this.n.a(strH);
        }
    }

    private void l() {
        com.sigmob.sdk.base.views.x xVar = this.n;
        if (xVar != null) {
            xVar.setVisibility(4);
        }
    }

    private void m() {
        if (this.n == null) {
            a(this.b, 0);
        }
        this.n.setVisibility(0);
    }

    public View a() {
        String str = this.a;
        s.a aVarA = str != null ? s.a(str) : null;
        this.l = (aVarA == null || aVarA.d() == null) ? new d(this.b, this.k, PlacementType.INTERSTITIAL) : aVarA.d();
        this.l.a(this.e);
        this.l.a(new d.f() {
            private boolean b;

            @Override
            public void a() {
                SigmobLog.d("adImpression() called");
            }

            @Override
            public void a(Integer num) {
                m.this.o = num == null ? -1 : num.intValue();
                m.this.f.a(m.this.o, m.this.h.l());
            }

            @Override
            public void a(Map<String, String> map) {
                try {
                    map.get("id");
                    String str2 = map.get("url");
                    if (!map.get("playerHandles").equalsIgnoreCase("false")) {
                        if (!TextUtils.isEmpty(str2)) {
                            if (str2.startsWith("http")) {
                                m.this.k.setCustomLandPageUrl(str2);
                            } else {
                                m.this.k.setCustomDeeplink(str2);
                            }
                        }
                        m.this.h.a(com.sigmob.sdk.base.a.b, m.this.l.a(), true);
                    }
                    SigmobLog.d("adClickThru() called" + map.toString());
                } catch (Throwable th) {
                    SigmobLog.e("adClickThru", th);
                }
            }

            @Override
            public void b() {
                if (this.b) {
                    return;
                }
                m.this.a(com.sigmob.sdk.base.common.a.k);
            }

            @Override
            public void b(Map<String, String> map) {
                SigmobLog.d("adError() called " + map);
            }

            @Override
            public void c() {
                SigmobLog.d("adPlaying() called");
            }

            @Override
            public void d() {
                this.b = true;
                if (!m.this.j && m.this.k.getAd_type() != 4) {
                    m.this.j = true;
                    m.this.a(IntentActions.ACTION_REWARDED_VIDEO_COMPLETE);
                    m.this.f.a(com.sigmob.sdk.base.common.a.b, m.this.l.e().intValue());
                }
                m.this.a(com.sigmob.sdk.base.common.a.r);
                SigmobLog.d("adVideoComplete() called");
            }

            @Override
            public void e() {
                m.this.a(com.sigmob.sdk.base.common.a.n);
                SigmobLog.d("adVideoFirstQuartile() called");
            }

            @Override
            public void f() {
                m.this.a(com.sigmob.sdk.base.common.a.p);
                SigmobLog.d("adVideoThirdQuartile() called");
            }

            @Override
            public void g() {
                m.this.a(com.sigmob.sdk.base.common.a.o);
                SigmobLog.d("adVideoMidpoint() called");
            }

            @Override
            public void h() {
                m.this.a(com.sigmob.sdk.base.common.a.N);
                m.this.a(IntentActions.ACTION_REWARDED_VIDEO_PLAY);
                SigmobLog.d("adVideoStart() called");
            }
        });
        this.l.a(new d.a() {
            @Override
            public void a() {
                m.this.a(com.sigmob.sdk.base.common.a.h);
            }

            @Override
            public void a(float f) {
                if (m.this.j) {
                    return;
                }
                m.this.j = true;
                m.this.a(com.sigmob.sdk.base.common.a.b);
                m.this.a(IntentActions.ACTION_REWARDED_VIDEO_COMPLETE);
            }

            @Override
            public void a(int i, int i2, int i3, int i4, a.a aVar, boolean z) {
            }

            @Override
            public void a(View view) {
                m.this.a(com.sigmob.sdk.base.common.a.a);
                m.this.a(IntentActions.ACTION_INTERSTITIAL_SHOW);
                SigmobLog.d("onLoaded() called");
            }

            @Override
            public void a(WindAdError windAdError) {
                SigmobLog.d("Finishing the activity due to a problem: " + windAdError);
                m.this.a(com.sigmob.sdk.base.common.a.K);
                if (m.this.a != null) {
                    m.this.a(IntentActions.ACTION_INTERSTITIAL_FAIL);
                }
                m.this.d.a();
            }

            @Override
            public void a(String str2) {
                boolean z = true;
                if (!TextUtils.isEmpty(str2)) {
                    try {
                        JSONObject jSONObject = new JSONObject(str2);
                        int iOptInt = jSONObject.optInt("type");
                        m.this.l.a(String.valueOf(jSONObject.optInt("x")), String.valueOf(jSONObject.optInt("y")));
                        if (iOptInt == 1) {
                            z = false;
                        }
                    } catch (Exception unused) {
                        m.this.l.a("0", "0");
                    }
                }
                m.this.h.a(com.sigmob.sdk.base.a.a, m.this.l.a(), z);
            }

            @Override
            public void a(URI uri, int i, String str2) {
                int iOptInt;
                int iOptInt2;
                boolean zOptBoolean;
                boolean z;
                com.sigmob.sdk.videoAd.a aVar;
                com.sigmob.sdk.base.a aVar2;
                String string;
                boolean z2 = true;
                if (TextUtils.isEmpty(str2)) {
                    z = z2;
                } else {
                    try {
                        JSONObject jSONObject = new JSONObject(str2);
                        jSONObject.optInt("type");
                        iOptInt = jSONObject.optInt("x");
                        iOptInt2 = jSONObject.optInt("y");
                        zOptBoolean = jSONObject.optBoolean("disable_landing");
                        try {
                            z = jSONObject.optBoolean("feDisable") ? false : true;
                        } catch (Exception unused) {
                        }
                    } catch (Exception unused2) {
                    }
                    try {
                        m.this.l.a(String.valueOf(iOptInt), String.valueOf(iOptInt2));
                        z = z;
                        z = zOptBoolean;
                    } catch (Exception unused3) {
                        z2 = z;
                        z = zOptBoolean;
                        z = z2;
                    }
                }
                if (z || TextUtils.isEmpty(m.this.k.getLanding_page())) {
                    aVar = m.this.h;
                    aVar2 = com.sigmob.sdk.base.a.b;
                    string = uri.toString();
                } else {
                    aVar = m.this.h;
                    aVar2 = com.sigmob.sdk.base.a.b;
                    string = null;
                }
                aVar.a(aVar2, string, m.this.l.a(), true, z);
            }

            @Override
            public void a(boolean z) {
                m mVar;
                com.sigmob.sdk.base.common.a aVar;
                if (z) {
                    mVar = m.this;
                    aVar = com.sigmob.sdk.base.common.a.B;
                } else {
                    mVar = m.this;
                    aVar = com.sigmob.sdk.base.common.a.C;
                }
                mVar.a(aVar);
            }

            @Override
            public void b() {
                m.this.a(com.sigmob.sdk.base.common.a.L);
            }

            @Override
            public void b(float f) {
                if (m.this.p) {
                    return;
                }
                m.this.p = true;
                m.this.a(com.sigmob.sdk.base.common.a.s);
                m.this.a(IntentActions.ACTION_REWARDED_VIDEO_SKIP);
            }

            @Override
            public void c() {
            }

            @Override
            public void d() {
                SigmobLog.d("MraidActivity failed to load. Finishing the activity");
                if (m.this.a != null) {
                    m.this.a(IntentActions.ACTION_INTERSTITIAL_FAIL);
                }
                m.this.d.a();
            }

            @Override
            public void e() {
            }

            @Override
            public void f() {
                if (m.this.r == null) {
                    m.this.r = new com.sigmob.sdk.base.views.q(m.this.k(), m.this.k);
                    m.this.r.a(new q.b() {
                        @Override
                        public void a() {
                            if (m.this.r != null) {
                                m.this.r.dismiss();
                                m.this.r.c();
                                m.this.r = null;
                                m.this.s = false;
                            }
                            if (m.this.f != null) {
                                m.this.f.a(com.sigmob.sdk.base.common.a.g, 0);
                            }
                        }

                        @Override
                        public void a(String str2, String str3) {
                            if (m.this.h != null) {
                                m.this.h.a(com.sigmob.sdk.base.a.b, str2, str3, true);
                            }
                        }

                        @Override
                        public void b() {
                            if (m.this.f != null) {
                                m.this.f.a(com.sigmob.sdk.base.common.a.f, 0);
                            }
                        }
                    });
                }
                if (m.this.r == null || !m.this.r.a() || m.this.s) {
                    return;
                }
                m.this.r.show();
                m.this.s = true;
            }

            @Override
            public void g() {
                m.this.l.a(new ValueCallback<String>() {
                    @Override
                    public void onReceiveValue(String str2) {
                        if (b.a(str2) != null) {
                            Float fValueOf = Float.valueOf(str2);
                            if (fValueOf.floatValue() < 0.999f && !m.this.p) {
                                m.this.p = true;
                                m.this.a(com.sigmob.sdk.base.common.a.s);
                            }
                            if (m.this.j || m.this.k.getAd_type() == 4 || fValueOf.floatValue() <= m.this.k.getFinishedTime()) {
                                return;
                            }
                            m.this.j = true;
                            m.this.f.a(com.sigmob.sdk.base.common.a.b, m.this.l.e().intValue());
                            m.this.a(IntentActions.ACTION_REWARDED_VIDEO_COMPLETE);
                        }
                    }
                });
                m.this.a(IntentActions.ACTION_REWARDED_VIDEO_CLOSE);
                m.this.q = true;
                m.this.d.a();
            }
        });
        this.l.a(new d.e() {
            @Override
            public void a(boolean z) {
                if (z) {
                    m.this.l();
                } else {
                    m.this.m();
                }
            }
        });
        if (aVarA != null) {
            this.f = aVarA.c();
        } else if (!TextUtils.isEmpty(this.k.getHtmlData())) {
            this.l.a(this.k.getHtmlData(), new d.b() {
                @Override
                public void a(o oVar, com.sigmob.sdk.base.common.r rVar) {
                    m mVar = m.this;
                    if (rVar != null) {
                        mVar.f = rVar;
                    } else {
                        mVar.f = new com.sigmob.sdk.base.common.r();
                        m.this.f.a(m.this.k);
                    }
                }
            });
        } else if (!TextUtils.isEmpty(this.k.getHtmlUrl())) {
            this.l.b(this.k.getHtmlUrl(), new d.b() {
                @Override
                public void a(o oVar, com.sigmob.sdk.base.common.r rVar) {
                    m mVar = m.this;
                    if (rVar != null) {
                        mVar.f = rVar;
                    } else {
                        mVar.f = new com.sigmob.sdk.base.common.r();
                        m.this.f.a(m.this.k);
                    }
                }
            });
        }
        return this.l.p();
    }

    @Override
    public void a(Configuration configuration) {
    }

    @Override
    public void a(Bundle bundle) {
    }

    public void a(final com.sigmob.sdk.base.common.a aVar) {
        final Integer numE = this.l.e();
        this.l.a(new ValueCallback<String>() {
            @Override
            public void onReceiveValue(String str) {
                try {
                    if (b.a(str) == null) {
                        if (aVar.equals(com.sigmob.sdk.base.common.a.L)) {
                            m.this.f.a(false, 0);
                        }
                        m.this.f.a(aVar, 0);
                        return;
                    }
                    Float fValueOf = Float.valueOf(str);
                    float fIntValue = -1.0f;
                    if (fValueOf.floatValue() > 1.0E-7d && numE != null && numE.intValue() > 0) {
                        fIntValue = numE.intValue() * fValueOf.floatValue();
                    }
                    if (aVar.equals(com.sigmob.sdk.base.common.a.L)) {
                        m.this.f.a(false, (int) fIntValue);
                    }
                    m.this.f.a(aVar, (int) fIntValue);
                } catch (Throwable th) {
                    th.printStackTrace();
                }
            }
        });
    }

    public void a(q qVar) {
        this.m = qVar;
        d dVar = this.l;
        if (dVar != null) {
            dVar.a(qVar);
        }
    }

    @Override
    public void a(boolean z, com.sigmob.sdk.base.a aVar) {
        com.sigmob.sdk.base.common.a aVar2;
        a(IntentActions.ACTION_INTERSTITIAL_CLICK);
        if (z) {
            int i = 8.a[aVar.ordinal()];
            if (i == 1) {
                ClickCommon clickCommon = this.k.getClickCommon();
                z.a(com.sigmob.sdk.base.a.a, "click", this.k, clickCommon.isDeeplink, clickCommon.clickUrl, clickCommon.clickCoordinate, this.o);
                aVar2 = com.sigmob.sdk.base.common.a.u;
            } else if (i != 2) {
                ClickCommon clickCommon2 = this.k.getClickCommon();
                z.a(com.sigmob.sdk.base.a.b, "click", this.k, clickCommon2.isDeeplink, clickCommon2.clickUrl, clickCommon2.clickCoordinate, this.o);
                aVar2 = com.sigmob.sdk.base.common.a.c;
            } else {
                ClickCommon clickCommon3 = this.k.getClickCommon();
                z.a(com.sigmob.sdk.base.a.c, "click", this.k, clickCommon3.isDeeplink, clickCommon3.clickUrl, clickCommon3.clickCoordinate, this.o);
                aVar2 = com.sigmob.sdk.base.common.a.v;
            }
            a(aVar2);
        }
    }

    @Override
    public void b() {
        super.b();
        com.sigmob.sdk.base.common.r rVar = this.f;
        if (rVar != null) {
            rVar.a(com.sigmob.sdk.base.common.a.h, 0);
        }
        j().addView(a(), new FrameLayout.LayoutParams(-1, -1));
        d dVar = this.l;
        if (dVar != null) {
            dVar.a(k());
        }
        a(IntentActions.ACTION_INTERSTITIAL_VOPEN);
    }

    @Override
    public void c() {
        if (this.q) {
            a(IntentActions.ACTION_INTERSTITIAL_DISMISS);
        } else {
            this.l.b();
        }
    }

    @Override
    public void d() {
        this.l.c();
    }

    @Override
    public void e() {
        com.sigmob.sdk.base.common.r rVar = this.f;
        if (rVar != null) {
            rVar.a(com.sigmob.sdk.base.common.a.x, 0);
            this.f.a();
            this.f = null;
        }
        d dVar = this.l;
        if (dVar != null) {
            dVar.l();
        }
        this.h.k();
        if (!this.q) {
            a(IntentActions.ACTION_INTERSTITIAL_DISMISS);
        }
        super.e();
    }

    @Override
    public void f() {
    }

    @Override
    public boolean g() {
        return false;
    }
}
