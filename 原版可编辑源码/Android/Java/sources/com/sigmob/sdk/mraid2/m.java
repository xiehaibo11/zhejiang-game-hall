package com.sigmob.sdk.mraid2;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.res.Configuration;
import android.net.Uri;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.Log;
import android.view.MotionEvent;
import android.view.View;
import android.widget.FrameLayout;
import android.widget.RelativeLayout;
import com.czhj.sdk.common.utils.AppPackageUtil;
import com.czhj.sdk.common.utils.Dips;
import com.czhj.sdk.common.utils.FileUtil;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.common.AdActivity;
import com.sigmob.sdk.base.common.ab;
import com.sigmob.sdk.base.common.af;
import com.sigmob.sdk.base.common.ah;
import com.sigmob.sdk.base.common.n;
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
import com.ss.android.downloadlib.constants.EventConstants;
import java.io.File;
import java.lang.reflect.Field;
import java.lang.reflect.Method;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import org.json.JSONObject;

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
        this.j.setOnTouchListener(new View.OnTouchListener() {
            @Override
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

    private void a(e eVar, BaseAdUnit baseAdUnit, String str, final String str2, final JSONObject jSONObject, String str3, boolean z) {
        String str4;
        ClickCommon clickCommon;
        String str5;
        String str6;
        BaseAdUnit baseAdUnit2;
        String message = "";
        if (af.f.a(Uri.parse(str2))) {
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
                        com.sigmob.sdk.base.network.f.a(baseAdUnit, com.sigmob.sdk.base.common.a.I);
                        clickCommon = baseAdUnit.getClickCommon();
                        str5 = "1";
                    } else {
                        str4 = PointCategory.OPEN_DEEPLINK_FAILED;
                        com.sigmob.sdk.base.network.f.a(baseAdUnit, com.sigmob.sdk.base.common.a.J);
                        clickCommon = baseAdUnit.getClickCommon();
                        str5 = "0";
                    }
                    clickCommon.isDeeplink = str5;
                    z.a(str4, (String) null, baseAdUnit, new z.a() {
                        @Override
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

    private void a(e eVar, final BaseAdUnit baseAdUnit, String str, final JSONObject jSONObject, String str2) {
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
                z.a(com.sigmob.sdk.base.a.b.name().toLowerCase(), "click", baseAdUnit, new z.a() {
                    @Override
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
                a(baseAdUnit, com.sigmob.sdk.base.common.a.c);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private void l() {
        x xVar = this.j;
        if (xVar != null) {
            xVar.setVisibility(4);
        }
    }

    private void m() {
        if (this.j == null) {
            a(this.b, 0);
        }
        this.j.setVisibility(0);
    }

    public View a() {
        c cVar = new c(this.b, this.f, this.e);
        this.i = cVar;
        cVar.a(new c.a() {
            @Override
            public void a() {
                SigmobLog.d("MraidActivity failed to load. Finishing the activity");
                if (m.this.a != null) {
                    m.this.a(IntentActions.ACTION_INTERSTITIAL_FAIL);
                }
                m.this.d.a();
            }

            @Override
            public void a(View view) {
                m.this.a(IntentActions.ACTION_INTERSTITIAL_SHOW);
                SigmobLog.d("onLoaded() called");
            }

            /* JADX WARN: Removed duplicated region for block: B:77:0x01ae A[EXC_TOP_SPLITTER, SYNTHETIC] */
            /* JADX WARN: Removed duplicated region for block: B:81:0x011f A[EXC_TOP_SPLITTER, SYNTHETIC] */
            @Override
            /*
                Code decompiled incorrectly, please refer to instructions dump.
            */
            public void a(final e eVar, final BaseAdUnit baseAdUnit, JSONObject jSONObject) {
                JSONObject jSONObject2;
                String str;
                BaseAdUnit baseAdUnit2;
                e eVar2;
                m mVar;
                String message;
                String str2;
                String str3;
                JSONObject jSONObjectOptJSONObject;
                String message2;
                String str4;
                ClickCommon clickCommon;
                String str5;
                final String strOptString = jSONObject.optString("url");
                final String strOptString2 = jSONObject.optString("event");
                JSONObject jSONObjectOptJSONObject2 = jSONObject.optJSONObject("data");
                if (jSONObjectOptJSONObject2 != null) {
                    final JSONObject jSONObjectOptJSONObject3 = jSONObjectOptJSONObject2.optJSONObject("log_data");
                    final String strOptString3 = jSONObjectOptJSONObject2.optString("default_url");
                    final boolean zOptBoolean = jSONObjectOptJSONObject2.optBoolean("in_app");
                    boolean zOptBoolean2 = jSONObjectOptJSONObject2.optBoolean("parse_302");
                    int iOptInt = jSONObjectOptJSONObject2.optInt("interaction_type");
                    String str6 = "";
                    if (iOptInt == 1) {
                        if (zOptBoolean2) {
                            ah.a(strOptString, new ah.a() {
                                @Override
                                public void a(String str7) {
                                    m.this.a(eVar, baseAdUnit, strOptString2, str7, jSONObjectOptJSONObject3, strOptString3, zOptBoolean);
                                }

                                @Override
                                public void a(String str7, Throwable th) {
                                    m.this.a(eVar, baseAdUnit, strOptString2, strOptString, jSONObjectOptJSONObject3, strOptString3, zOptBoolean);
                                }
                            });
                            return;
                        } else {
                            m.this.a(eVar, baseAdUnit, strOptString2, strOptString, jSONObjectOptJSONObject3, strOptString3, zOptBoolean);
                            return;
                        }
                    }
                    if (iOptInt != 2) {
                        if (iOptInt == 3) {
                            JSONObject jSONObjectOptJSONObject4 = jSONObjectOptJSONObject2.optJSONObject("market");
                            if (jSONObjectOptJSONObject4 == null) {
                                return;
                            }
                            final String strOptString4 = jSONObjectOptJSONObject4.optString(EventConstants.ExtraJson.MARKET_URL);
                            final String strOptString5 = jSONObjectOptJSONObject4.optString("app_package_name");
                            final String strOptString6 = jSONObjectOptJSONObject4.optString("appstore_package_name");
                            if (!TextUtils.isEmpty(strOptString4)) {
                                try {
                                    Intent intent = new Intent("android.intent.action.VIEW", Uri.parse(strOptString4));
                                    if (!TextUtils.isEmpty(strOptString6) && AppPackageUtil.getPackageManager(m.this.i()).getPackageInfo(strOptString6, 0) != null) {
                                        intent.setPackage(strOptString6);
                                    }
                                    s.b(m.this.i(), intent);
                                    str2 = "";
                                } catch (Throwable th) {
                                    message = th.getMessage();
                                    str2 = message;
                                }
                                if (baseAdUnit != null) {
                                    try {
                                        if (TextUtils.isEmpty(str2)) {
                                            str3 = "open_market";
                                            if (!TextUtils.isEmpty(strOptString5)) {
                                                FileUtil.writeToCache(baseAdUnit, new File(com.sigmob.sdk.base.utils.b.f(), strOptString5 + com.tkay.china.common.a.a.f).getAbsolutePath());
                                            }
                                        } else {
                                            str3 = PointCategory.OPEN_MARKET_FAILED;
                                        }
                                        z.a(str3, (String) null, baseAdUnit, new z.a() {
                                            @Override
                                            public void a(Object obj) {
                                                if (obj instanceof PointEntitySigmob) {
                                                    PointEntitySigmob pointEntitySigmob = (PointEntitySigmob) obj;
                                                    pointEntitySigmob.setFinal_url(strOptString4);
                                                    HashMap map = new HashMap();
                                                    if (baseAdUnit.getAndroidMarket() != null) {
                                                        map.put("app_package_name", strOptString5);
                                                        map.put("store_package_name", strOptString6);
                                                    }
                                                    JSONObject jSONObject3 = jSONObjectOptJSONObject3;
                                                    if (jSONObject3 != null) {
                                                        Iterator<String> itKeys = jSONObject3.keys();
                                                        while (itKeys.hasNext()) {
                                                            String next = itKeys.next();
                                                            map.put(next, jSONObjectOptJSONObject3.optString(next));
                                                        }
                                                    }
                                                    pointEntitySigmob.setOptions(map);
                                                }
                                            }
                                        });
                                    } catch (Exception e) {
                                        e.printStackTrace();
                                    }
                                }
                                mVar = m.this;
                                eVar2 = eVar;
                                baseAdUnit2 = baseAdUnit;
                                str = strOptString2;
                                jSONObject2 = jSONObjectOptJSONObject3;
                                str6 = str2;
                                mVar.a(eVar2, baseAdUnit2, str, jSONObject2, str6);
                            }
                            message = "market_url is null";
                            str2 = message;
                            if (baseAdUnit != null) {
                            }
                            mVar = m.this;
                            eVar2 = eVar;
                            baseAdUnit2 = baseAdUnit;
                            str = strOptString2;
                            jSONObject2 = jSONObjectOptJSONObject3;
                            str6 = str2;
                            mVar.a(eVar2, baseAdUnit2, str, jSONObject2, str6);
                        }
                        if (iOptInt != 7 || (jSONObjectOptJSONObject = jSONObjectOptJSONObject2.optJSONObject("program")) == null) {
                            return;
                        }
                        String strOptString7 = jSONObjectOptJSONObject.optString("wx_app_id");
                        String strOptString8 = jSONObjectOptJSONObject.optString("wx_app_username");
                        String strOptString9 = jSONObjectOptJSONObject.optString("wx_app_path");
                        if (TextUtils.isEmpty(strOptString7) || TextUtils.isEmpty(strOptString8) || TextUtils.isEmpty(strOptString9)) {
                            message2 = "wx_app_id or wx_app_username or wx_app_path is null";
                        } else {
                            try {
                                Class<?> cls = Class.forName("com.tencent.mm.opensdk.openapi.WXAPIFactory");
                                Method method = cls.getMethod("createWXAPI", Context.class, String.class);
                                method.setAccessible(true);
                                Object objInvoke = method.invoke(cls, m.this.i(), strOptString7);
                                Class<?> cls2 = Class.forName("com.tencent.mm.opensdk.modelbiz.WXLaunchMiniProgram$Req");
                                Object objNewInstance = cls2.newInstance();
                                Field declaredField = cls2.getDeclaredField("userName");
                                declaredField.setAccessible(true);
                                declaredField.set(objNewInstance, strOptString8);
                                Field declaredField2 = cls2.getDeclaredField("path");
                                declaredField2.setAccessible(true);
                                declaredField2.set(objNewInstance, strOptString9);
                                Field declaredField3 = cls2.getDeclaredField("miniprogramType");
                                declaredField3.setAccessible(true);
                                declaredField3.set(objNewInstance, 0);
                                Method method2 = objInvoke.getClass().getMethod("sendReq", objNewInstance.getClass().getSuperclass());
                                method2.setAccessible(true);
                                boolean zBooleanValue = ((Boolean) method2.invoke(objInvoke, objNewInstance)).booleanValue();
                                Log.d("lance", "openB:isSendReq " + zBooleanValue);
                                if (!zBooleanValue) {
                                    str6 = "sendReq mini_program return false";
                                }
                            } catch (Throwable th2) {
                                message2 = th2.getMessage();
                                str6 = message2;
                            }
                            if (baseAdUnit != null) {
                                try {
                                    if (TextUtils.isEmpty(str6)) {
                                        str4 = PointCategory.OPEN_DEEPLINK;
                                        com.sigmob.sdk.base.network.f.a(baseAdUnit, com.sigmob.sdk.base.common.a.I);
                                        clickCommon = baseAdUnit.getClickCommon();
                                        str5 = "1";
                                    } else {
                                        str4 = PointCategory.OPEN_DEEPLINK_FAILED;
                                        com.sigmob.sdk.base.network.f.a(baseAdUnit, com.sigmob.sdk.base.common.a.J);
                                        clickCommon = baseAdUnit.getClickCommon();
                                        str5 = "0";
                                    }
                                    clickCommon.isDeeplink = str5;
                                    z.a(str4, (String) null, baseAdUnit, new z.a() {
                                        @Override
                                        public void a(Object obj) {
                                            if (obj instanceof PointEntitySigmob) {
                                                PointEntitySigmob pointEntitySigmob = (PointEntitySigmob) obj;
                                                pointEntitySigmob.setFinal_url(strOptString);
                                                if (jSONObjectOptJSONObject3 != null) {
                                                    HashMap map = new HashMap();
                                                    Iterator<String> itKeys = jSONObjectOptJSONObject3.keys();
                                                    while (itKeys.hasNext()) {
                                                        String next = itKeys.next();
                                                        map.put(next, jSONObjectOptJSONObject3.optString(next));
                                                    }
                                                    pointEntitySigmob.setOptions(map);
                                                }
                                            }
                                        }
                                    });
                                } catch (Exception e2) {
                                    e2.printStackTrace();
                                }
                            }
                        }
                        str6 = message2;
                        if (baseAdUnit != null) {
                        }
                    } else if (baseAdUnit == null) {
                        BaseAdUnit baseAdUnit3 = eVar.getAdUnitList().get(0);
                        baseAdUnit3.setRecord(false);
                        n.a(strOptString, baseAdUnit3);
                    } else {
                        baseAdUnit.setRecord(true);
                        n.a(strOptString, baseAdUnit);
                    }
                    mVar = m.this;
                    eVar2 = eVar;
                    baseAdUnit2 = baseAdUnit;
                    str = strOptString2;
                    jSONObject2 = jSONObjectOptJSONObject3;
                    mVar.a(eVar2, baseAdUnit2, str, jSONObject2, str6);
                }
            }

            @Override
            public void a(WindAdError windAdError) {
                SigmobLog.d("Finishing the activity due to a problem: " + windAdError);
                if (m.this.a != null) {
                    m.this.a(IntentActions.ACTION_INTERSTITIAL_FAIL);
                }
                m.this.d.a();
            }

            @Override
            public void a(boolean z) {
                if (z) {
                    m.this.l();
                } else {
                    m.this.m();
                }
            }

            @Override
            public void b() {
                m.this.a(IntentActions.ACTION_REWARDED_VIDEO_CLOSE);
                m.this.k = true;
                m.this.d.a();
            }

            @Override
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

    @Override
    public void a(Configuration configuration) {
    }

    @Override
    public void a(Bundle bundle) {
    }

    @Override
    public void b() {
        super.b();
        j().addView(a(), new FrameLayout.LayoutParams(-1, -1));
        c cVar = this.i;
        if (cVar != null) {
            cVar.a(this.f.get(0));
        }
        a(IntentActions.ACTION_INTERSTITIAL_VOPEN);
    }

    @Override
    public void c() {
        if (this.k) {
            a(IntentActions.ACTION_INTERSTITIAL_DISMISS);
        } else {
            this.i.a();
        }
    }

    @Override
    public void d() {
        this.i.b();
    }

    @Override
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

    @Override
    public void f() {
    }

    @Override
    public boolean g() {
        return false;
    }
}
