package com.sigmob.sdk.mraid2;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.res.Configuration;
import android.net.Uri;
import android.os.Bundle;
import android.text.TextUtils;
import android.view.MotionEvent;
import android.view.View;
import android.widget.FrameLayout;
import android.widget.RelativeLayout;
import com.czhj.sdk.common.utils.Dips;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.common.AdActivity;
import com.sigmob.sdk.base.common.ab;
import com.sigmob.sdk.base.common.af;
import com.sigmob.sdk.base.common.r;
import com.sigmob.sdk.base.common.s;
import com.sigmob.sdk.base.common.z;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.ClickCommon;
import com.sigmob.sdk.base.models.IntentActions;
import com.sigmob.sdk.base.mta.PointCategory;
import com.sigmob.sdk.base.mta.PointEntitySigmob;
import com.sigmob.sdk.base.views.x;
import com.sigmob.sdk.mraid2.c;
import com.sigmob.sdk.videoAd.BaseAdActivity;
import com.sigmob.windad.WindAdError;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class m extends com.sigmob.sdk.videoAd.c {
    List<BaseAdUnit> f;
    private int g;
    private boolean h;
    private c i;
    private x j;
    private boolean k;

    public m(Activity activity, BaseAdUnit baseAdUnit, Bundle bundle, Bundle bundle2, String str, com.sigmob.sdk.base.common.j jVar) {
        super(activity, str, jVar);
        this.k = false;
        List<BaseAdUnit> listB = com.sigmob.sdk.base.common.f.b(baseAdUnit.getUuid());
        this.f = listB;
        int iIntValue = listB.get(0).getAd().display_orientation.intValue();
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
        if (this.j != null) {
            return;
        }
        int iIntValue = 3;
        if (this.f.get(0) != null && this.f.get(0).slotAdSetting.rv_setting != null) {
            iIntValue = this.f.get(0).slotAdSetting.rv_setting.endcard_close_position.intValue();
        }
        x xVar = new x(context, iIntValue);
        this.j = xVar;
        xVar.setVisibility(i);
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(Dips.dipsToIntPixels(30.0f, context), Dips.dipsToIntPixels(30.0f, context));
        a(iIntValue, layoutParams);
        j().addView(this.j, layoutParams);
        this.j.setOnTouchListener(new View.OnTouchListener() { // from class: com.sigmob.sdk.mraid2.m.4
            @Override // android.view.View.OnTouchListener
            public boolean onTouch(View view, MotionEvent motionEvent) {
                if (motionEvent.getAction() == 1) {
                    m.this.k = true;
                    m.this.h().a();
                }
                return true;
            }
        });
        this.j.a(this.f.get(0));
    }

    private void a(BaseAdUnit baseAdUnit, com.sigmob.sdk.base.common.a aVar) {
        ab sessionManager = baseAdUnit.getSessionManager();
        if (sessionManager == null) {
            sessionManager = new r();
            sessionManager.a(baseAdUnit);
        }
        sessionManager.a(aVar, 0);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(e eVar, BaseAdUnit baseAdUnit, String str, final String str2, final JSONObject jSONObject, String str3, boolean z) {
        String str4;
        ClickCommon clickCommon;
        String str5;
        String str6;
        BaseAdUnit baseAdUnit2;
        String message = "";
        if (af.OPEN_WITH_BROWSER.a(Uri.parse(str2))) {
            try {
                if (z) {
                    if (baseAdUnit != null) {
                        baseAdUnit.setRecord(true);
                        baseAdUnit2 = baseAdUnit;
                    } else {
                        baseAdUnit2 = eVar.getAdUnitList().get(0);
                        baseAdUnit2.setRecord(false);
                    }
                    baseAdUnit2.setUrl(str2);
                    AdActivity.a(i(), (Class<? extends BaseAdActivity>) AdActivity.class, baseAdUnit2);
                } else {
                    s.b(i(), new Intent("android.intent.action.VIEW", Uri.parse(str2)));
                }
            } catch (Exception e) {
                String message2 = e.getMessage();
                if (!TextUtils.isEmpty(str3)) {
                    try {
                        s.b(i(), new Intent("android.intent.action.VIEW", Uri.parse(str3)));
                    } catch (Exception e2) {
                        e2.printStackTrace();
                    }
                }
                str6 = message2;
            }
        } else {
            try {
                s.a(i(), Uri.parse(str2));
            } catch (Exception e3) {
                message = e3.getMessage();
                if (!TextUtils.isEmpty(str3)) {
                    try {
                        s.b(i(), new Intent("android.intent.action.VIEW", Uri.parse(str3)));
                    } catch (Exception e4) {
                        e4.printStackTrace();
                    }
                }
            }
            if (baseAdUnit != null) {
                try {
                    if (TextUtils.isEmpty(message)) {
                        str4 = PointCategory.OPEN_DEEPLINK;
                        com.sigmob.sdk.base.network.f.a(baseAdUnit, com.sigmob.sdk.base.common.a.AD_OPEN_DEEPLINK);
                        clickCommon = baseAdUnit.getClickCommon();
                        str5 = "1";
                    } else {
                        str4 = PointCategory.OPEN_DEEPLINK_FAILED;
                        com.sigmob.sdk.base.network.f.a(baseAdUnit, com.sigmob.sdk.base.common.a.AD_OPEN_DEEPLINK_FAIL);
                        clickCommon = baseAdUnit.getClickCommon();
                        str5 = "0";
                    }
                    clickCommon.isDeeplink = str5;
                    z.a(str4, (String) null, baseAdUnit, new z.a() { // from class: com.sigmob.sdk.mraid2.m.3
                        @Override // com.sigmob.sdk.base.common.z.a
                        public void a(Object obj) {
                            if (obj instanceof PointEntitySigmob) {
                                PointEntitySigmob pointEntitySigmob = (PointEntitySigmob) obj;
                                pointEntitySigmob.setFinal_url(str2);
                                if (jSONObject != null) {
                                    HashMap map = new HashMap();
                                    Iterator<String> itKeys = jSONObject.keys();
                                    while (itKeys.hasNext()) {
                                        String next = itKeys.next();
                                        map.put(next, jSONObject.optString(next));
                                    }
                                    pointEntitySigmob.setOptions(map);
                                }
                            }
                        }
                    });
                } catch (Exception e5) {
                    e5.printStackTrace();
                }
            }
        }
        str6 = message;
        a(eVar, baseAdUnit, str, jSONObject, str6);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(e eVar, final BaseAdUnit baseAdUnit, String str, final JSONObject jSONObject, String str2) {
        try {
            if (!TextUtils.isEmpty(str2)) {
                if (eVar.getMraidBridge() != null) {
                    eVar.getMraidBridge().b(str + "_failed", str2);
                    return;
                }
                return;
            }
            a(IntentActions.ACTION_INTERSTITIAL_CLICK);
            if (eVar.getMraidBridge() != null) {
                eVar.getMraidBridge().b(str + "_success", "");
            }
            if (baseAdUnit != null) {
                final ClickCommon clickCommon = baseAdUnit.getClickCommon();
                z.a(com.sigmob.sdk.base.a.ENDCARD.name().toLowerCase(), "click", baseAdUnit, new z.a() { // from class: com.sigmob.sdk.mraid2.m.2
                    @Override // com.sigmob.sdk.base.common.z.a
                    public void a(Object obj) {
                        if (obj instanceof PointEntitySigmob) {
                            PointEntitySigmob pointEntitySigmob = (PointEntitySigmob) obj;
                            pointEntitySigmob.setScene_id(baseAdUnit.getAd_scene_id());
                            pointEntitySigmob.setScene_desc(baseAdUnit.getAd_scene_desc());
                            pointEntitySigmob.setIs_deeplink(clickCommon.isDeeplink);
                            pointEntitySigmob.setFinal_url(clickCommon.clickUrl);
                            pointEntitySigmob.setCoordinate(clickCommon.clickCoordinate);
                            pointEntitySigmob.setVtime(String.format("%.2f", Float.valueOf(0.0f)));
                            if (jSONObject != null) {
                                HashMap map = new HashMap();
                                Iterator<String> itKeys = jSONObject.keys();
                                while (itKeys.hasNext()) {
                                    String next = itKeys.next();
                                    map.put(next, jSONObject.optString(next));
                                }
                                pointEntitySigmob.setOptions(map);
                            }
                        }
                    }
                });
                a(baseAdUnit, com.sigmob.sdk.base.common.a.AD_CLICK);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void l() {
        x xVar = this.j;
        if (xVar != null) {
            xVar.setVisibility(4);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void m() {
        if (this.j == null) {
            a(this.b, 0);
        }
        this.j.setVisibility(0);
    }

    public View a() {
        c cVar = new c(this.b, this.f, this.e);
        this.i = cVar;
        cVar.a(new c.a() { // from class: com.sigmob.sdk.mraid2.m.1
            @Override // com.sigmob.sdk.mraid2.c.a
            public void a() {
                SigmobLog.d("MraidActivity failed to load. Finishing the activity");
                if (m.this.f4849a != null) {
                    m.this.a(IntentActions.ACTION_INTERSTITIAL_FAIL);
                }
                m.this.d.a();
            }

            @Override // com.sigmob.sdk.mraid2.c.a
            public void a(View view) {
                m.this.a(IntentActions.ACTION_INTERSTITIAL_SHOW);
                SigmobLog.d("onLoaded() called");
            }

            /* JADX WARN: Removed duplicated region for block: B:77:0x01ae A[EXC_TOP_SPLITTER, SYNTHETIC] */
            /* JADX WARN: Removed duplicated region for block: B:81:0x011f A[EXC_TOP_SPLITTER, SYNTHETIC] */
            @Override // com.sigmob.sdk.mraid2.c.a
            /*
                Code decompiled incorrectly, please refer to instructions dump.
                To view partially-correct add '--show-bad-code' argument
            */
            public void a(final com.sigmob.sdk.mraid2.e r18, final com.sigmob.sdk.base.models.BaseAdUnit r19, org.json.JSONObject r20) {
                /*
                    Method dump skipped, instruction units count: 583
                    To view this dump add '--comments-level debug' option
                */
                throw new UnsupportedOperationException("Method not decompiled: com.sigmob.sdk.mraid2.m.AnonymousClass1.a(com.sigmob.sdk.mraid2.e, com.sigmob.sdk.base.models.BaseAdUnit, org.json.JSONObject):void");
            }

            @Override // com.sigmob.sdk.mraid2.c.a
            public void a(WindAdError windAdError) {
                SigmobLog.d("Finishing the activity due to a problem: " + windAdError);
                if (m.this.f4849a != null) {
                    m.this.a(IntentActions.ACTION_INTERSTITIAL_FAIL);
                }
                m.this.d.a();
            }

            @Override // com.sigmob.sdk.mraid2.c.a
            public void a(boolean z) {
                if (z) {
                    m.this.l();
                } else {
                    m.this.m();
                }
            }

            @Override // com.sigmob.sdk.mraid2.c.a
            public void b() {
                m.this.a(IntentActions.ACTION_REWARDED_VIDEO_CLOSE);
                m.this.k = true;
                m.this.d.a();
            }

            @Override // com.sigmob.sdk.mraid2.c.a
            public void c() {
                if (m.this.h) {
                    return;
                }
                m.this.h = true;
                m.this.a(IntentActions.ACTION_REWARDED_VIDEO_COMPLETE);
            }
        });
        return this.i.e();
    }

    @Override // com.sigmob.sdk.base.common.i
    public void a(Configuration configuration) {
    }

    @Override // com.sigmob.sdk.base.common.i
    public void a(Bundle bundle) {
    }

    @Override // com.sigmob.sdk.videoAd.c, com.sigmob.sdk.base.common.i
    public void b() {
        super.b();
        j().addView(a(), new FrameLayout.LayoutParams(-1, -1));
        c cVar = this.i;
        if (cVar != null) {
            cVar.a(this.f.get(0));
        }
        a(IntentActions.ACTION_INTERSTITIAL_VOPEN);
    }

    @Override // com.sigmob.sdk.base.common.i
    public void c() {
        if (this.k) {
            a(IntentActions.ACTION_INTERSTITIAL_DISMISS);
        } else {
            this.i.a();
        }
    }

    @Override // com.sigmob.sdk.base.common.i
    public void d() {
        this.i.b();
    }

    @Override // com.sigmob.sdk.base.common.i
    public void e() {
        c cVar = this.i;
        if (cVar != null) {
            cVar.d();
        }
        if (!this.k) {
            a(IntentActions.ACTION_INTERSTITIAL_DISMISS);
        }
        super.e();
    }

    @Override // com.sigmob.sdk.base.common.i
    public void f() {
    }

    @Override // com.sigmob.sdk.base.common.i
    public boolean g() {
        return false;
    }
}
