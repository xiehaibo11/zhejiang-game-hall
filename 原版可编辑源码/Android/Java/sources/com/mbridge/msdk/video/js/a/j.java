package com.mbridge.msdk.video.js.a;

import android.app.Activity;
import android.content.Context;
import android.net.Uri;
import android.text.TextUtils;
import com.huawei.hms.framework.common.ContainerUtils;
import com.mbridge.msdk.foundation.db.t;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.p;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.ag;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.scheme.applet.AppletModelManager;
import com.mbridge.msdk.scheme.applet.AppletsModel;
import com.mbridge.msdk.video.js.a.c;
import com.qihoo360.replugin.RePlugin;
import com.tkay.core.api.TYAdConst;
import com.tkay.expressad.foundation.d.r;
import java.util.Iterator;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public class j extends c {
    private static final String o = j.class.getSimpleName();
    private Activity p;
    private String q;
    private String r;
    private Context s;
    private com.mbridge.msdk.video.bt.module.a.b t;
    private CampaignEx u;
    private List<CampaignEx> v;
    private int w;
    private String x = "";
    private String y = "";
    private boolean z = false;
    private boolean A = false;
    private boolean B = true;

    public final void a(CampaignEx campaignEx) {
        this.u = campaignEx;
    }

    public final void a(List<CampaignEx> list) {
        this.v = list;
    }

    public final void c(boolean z) {
        this.B = z;
    }

    public final void d(boolean z) {
        this.z = z;
    }

    public j(Activity activity, CampaignEx campaignEx) {
        this.p = activity;
        this.u = campaignEx;
    }

    public j(Activity activity, CampaignEx campaignEx, List<CampaignEx> list) {
        this.p = activity;
        this.u = campaignEx;
        this.v = list;
    }

    public final void o() {
        this.q = "";
    }

    public final void c(String str) {
        this.x = str;
    }

    public final void d(String str) {
        this.y = str;
    }

    public final int p() {
        return this.w;
    }

    public final void j(int i) {
        this.w = i;
    }

    public final void e(boolean z) {
        this.A = z;
    }

    @Override
    public final String d() {
        this.m.a();
        this.a = true;
        if (TextUtils.isEmpty(this.q)) {
            this.q = q();
        } else {
            this.q = ae.b(this.q, "tun", v.P() + "");
        }
        return this.q;
    }

    private String q() {
        JSONObject jSONObject = new JSONObject();
        com.mbridge.msdk.foundation.tools.d dVar = new com.mbridge.msdk.foundation.tools.d(com.mbridge.msdk.foundation.controller.a.f().j());
        try {
            jSONObject.put("unit_id", this.j);
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("instanceId", this.x);
            jSONObject2.put("rootViewInstanceId", this.y);
            jSONObject2.put("isRootTemplateWebView", this.z);
            jSONObject.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.SDK_INFO, "MAL_16.3.67,3.0.1");
            jSONObject2.put("playVideoMute", this.n);
            jSONObject.put("sdkSetting", jSONObject2);
            jSONObject.put("device", dVar.a());
            JSONArray jSONArray = new JSONArray();
            if (this.v != null && this.v.size() > 0) {
                for (CampaignEx campaignEx : this.v) {
                    jSONArray.put(CampaignEx.campaignToJsonObject(campaignEx, campaignEx.isReady(), c(campaignEx)));
                }
            } else {
                jSONArray.put(CampaignEx.campaignToJsonObject(this.u));
            }
            jSONObject.put("campaignList", jSONArray);
            jSONObject.put("unitSetting", z());
            String strC = com.mbridge.msdk.c.b.a().c(com.mbridge.msdk.foundation.controller.a.f().k());
            if (!TextUtils.isEmpty(strC)) {
                JSONObject jSONObject3 = new JSONObject(strC);
                a(jSONObject3);
                String strE = com.mbridge.msdk.c.b.a().e(this.j);
                if (!TextUtils.isEmpty(strE)) {
                    jSONObject3.put("ivreward", new JSONObject(strE));
                }
                jSONObject.put("appSetting", jSONObject3);
            }
            jSONObject.put("rewardSetting", A());
            if (!TextUtils.isEmpty(this.j)) {
                jSONObject.put("unit_id", this.j);
            }
            jSONObject.put("rw_plus", this.A ? "1" : "0");
        } catch (Throwable th) {
            th.printStackTrace();
        }
        return jSONObject.toString();
    }

    private void a(JSONObject jSONObject) {
        try {
            Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
            String string = ag.b(contextJ, "MBridge_ConfirmTitle" + this.j, "").toString();
            String string2 = ag.b(contextJ, "MBridge_ConfirmContent" + this.j, "").toString();
            String string3 = ag.b(contextJ, "MBridge_CancelText" + this.j, "").toString();
            String string4 = ag.b(contextJ, "MBridge_ConfirmText" + this.j, "").toString();
            if (!TextUtils.isEmpty(string)) {
                jSONObject.put(com.tkay.expressad.d.a.b.ct, string);
            }
            if (!TextUtils.isEmpty(string2)) {
                jSONObject.put(com.tkay.expressad.d.a.b.cu, string2);
            }
            if (!TextUtils.isEmpty(string3)) {
                jSONObject.put(com.tkay.expressad.d.a.b.cv, string3);
            }
            if (!TextUtils.isEmpty(string4)) {
                jSONObject.put(com.tkay.expressad.d.a.b.cx, string4);
            }
            if (TextUtils.isEmpty(string4)) {
                return;
            }
            jSONObject.put(com.tkay.expressad.d.a.b.cw, string4);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private CampaignEx a(String str, CampaignEx campaignEx) {
        String strValueOf;
        if (TextUtils.isEmpty(str)) {
            return campaignEx;
        }
        if (TextUtils.isEmpty(str) && campaignEx == null) {
            return null;
        }
        if (!str.contains("notice")) {
            try {
                JSONObject jSONObjectCampaignToJsonObject = CampaignEx.campaignToJsonObject(campaignEx);
                CampaignEx campaignWithBackData = CampaignEx.parseCampaignWithBackData(jSONObjectCampaignToJsonObject);
                if (campaignWithBackData == null) {
                    campaignWithBackData = campaignEx;
                }
                if (!TextUtils.isEmpty(str)) {
                    a(jSONObjectCampaignToJsonObject, campaignWithBackData);
                    JSONObject jSONObjectOptJSONObject = new JSONObject(str).optJSONObject(com.mbridge.msdk.foundation.same.a.p);
                    String strValueOf2 = "-999";
                    if (jSONObjectOptJSONObject != null) {
                        strValueOf2 = String.valueOf(ae.b(this.p, Integer.valueOf(jSONObjectOptJSONObject.getString(com.mbridge.msdk.foundation.same.a.n)).intValue()));
                        strValueOf = String.valueOf(ae.b(this.p, Integer.valueOf(jSONObjectOptJSONObject.getString(com.mbridge.msdk.foundation.same.a.o)).intValue()));
                    } else {
                        strValueOf = "-999";
                    }
                    campaignWithBackData.setClickURL(com.mbridge.msdk.click.c.a(campaignWithBackData.getClickURL(), strValueOf2, strValueOf));
                    String noticeUrl = campaignWithBackData.getNoticeUrl();
                    if (jSONObjectOptJSONObject != null) {
                        Iterator<String> itKeys = jSONObjectOptJSONObject.keys();
                        StringBuilder sb = new StringBuilder();
                        while (itKeys.hasNext()) {
                            sb.append("&");
                            String next = itKeys.next();
                            String strOptString = jSONObjectOptJSONObject.optString(next);
                            if (com.mbridge.msdk.foundation.same.a.n.equals(next) || com.mbridge.msdk.foundation.same.a.o.equals(next)) {
                                strOptString = String.valueOf(ae.b(this.p, Integer.valueOf(strOptString).intValue()));
                            }
                            sb.append(next);
                            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
                            sb.append(strOptString);
                        }
                        campaignWithBackData.setNoticeUrl(noticeUrl + ((Object) sb));
                    }
                }
                return campaignWithBackData;
            } catch (JSONException e) {
                e.printStackTrace();
                return campaignEx;
            } catch (Throwable th) {
                th.printStackTrace();
                return campaignEx;
            }
        }
        try {
            JSONObject jSONObjectCampaignToJsonObject2 = CampaignEx.campaignToJsonObject(campaignEx);
            JSONObject jSONObject = new JSONObject(str);
            if (jSONObject.opt("akdlui") == null) {
                jSONObject.put("akdlui", "");
            }
            try {
                if (!jSONObject.has("deep_link")) {
                    jSONObjectCampaignToJsonObject2.put("deep_link", "");
                }
            } catch (Exception unused) {
            }
            Iterator<String> itKeys2 = jSONObject.keys();
            while (itKeys2.hasNext()) {
                String next2 = itKeys2.next();
                jSONObjectCampaignToJsonObject2.put(next2, jSONObject.getString(next2));
            }
            CampaignEx campaignWithBackData2 = CampaignEx.parseCampaignWithBackData(jSONObjectCampaignToJsonObject2);
            a(jSONObjectCampaignToJsonObject2, campaignWithBackData2);
            return campaignWithBackData2;
        } catch (JSONException e2) {
            e2.printStackTrace();
            return campaignEx;
        }
    }

    private void a(JSONObject jSONObject, CampaignEx campaignEx) {
        try {
            String strOptString = jSONObject.optString("unitId");
            if (TextUtils.isEmpty(strOptString)) {
                return;
            }
            campaignEx.setCampaignUnitId(strOptString);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override
    public void click(int i, String str) {
        AppletsModel appletsModel;
        int iP;
        List<CampaignEx> list;
        super.click(i, str);
        CampaignEx campaignEx = this.u;
        if (campaignEx != null && campaignEx.getDynamicTempCode() == 5 && this.u != null && (list = this.v) != null && list.size() != 0) {
            try {
                JSONObject jSONObject = new JSONObject(str);
                if (jSONObject.has("camp_position")) {
                    this.u = this.v.get(jSONObject.getInt("camp_position"));
                }
            } catch (JSONException e) {
                e.printStackTrace();
            }
        }
        try {
            if (i != 1) {
                if (i != 3) {
                    return;
                }
                if (this.u != null && this.u.getCbd() > -2) {
                    iP = this.u.getCbd();
                } else {
                    iP = this.k != null ? this.k.p() : 1;
                }
                if (iP == -1) {
                    a(new c.b(this, this.m));
                }
                click(1, str);
                return;
            }
            if (this.u == null && this.v != null && this.v.size() > 0) {
                this.u = this.v.get(0);
            }
            if (this.u == null) {
                return;
            }
            final CampaignEx campaignExA = a(str, this.u);
            if (campaignExA != null && (appletsModel = AppletModelManager.getInstance().get(campaignExA)) != null) {
                appletsModel.setUserClick(true);
                AppletModelManager.getInstance().replace(appletsModel, campaignExA);
            }
            if (campaignExA != null && campaignExA.needShowIDialog() && this.B && com.mbridge.msdk.click.c.a(campaignExA)) {
                campaignExA.getAppName();
                try {
                    com.mbridge.msdk.widget.dialog.a aVar = new com.mbridge.msdk.widget.dialog.a() {
                        @Override
                        public final void a() {
                            if (j.this.t != null) {
                                j.this.t.b();
                            }
                            j.this.b(campaignExA);
                        }

                        @Override
                        public final void b() {
                            if (j.this.t != null) {
                                j.this.t.b();
                            }
                        }

                        @Override
                        public final void c() {
                            j.this.b(campaignExA);
                        }
                    };
                    Context contextD = this.p;
                    if (contextD == null || contextD == contextD.getApplicationContext()) {
                        contextD = this.s;
                        if (contextD == null || contextD == contextD.getApplicationContext()) {
                            contextD = com.mbridge.msdk.video.bt.a.c.a().d(this.j + "_" + campaignExA.getRequestId());
                            if (contextD == null || contextD == contextD.getApplicationContext()) {
                                contextD = com.mbridge.msdk.foundation.controller.a.f().j();
                            }
                        }
                    }
                    Context context = contextD;
                    if (context != null && campaignExA != null) {
                        if (!r().b(campaignExA)) {
                            com.mbridge.msdk.videocommon.d.b.a().a(com.mbridge.msdk.foundation.controller.a.f().k(), this.j, false);
                            com.mbridge.msdk.mbjscommon.confirmation.e.a().a(com.mbridge.msdk.videocommon.d.c.a, campaignExA, context, this.j, aVar);
                            if (this.t != null) {
                                this.t.a();
                                return;
                            }
                            return;
                        }
                        com.mbridge.msdk.video.module.b.b.d(com.mbridge.msdk.foundation.controller.a.f().j(), campaignExA);
                        this.m.a(false);
                        return;
                    }
                } catch (Throwable th) {
                    z.a(o, th.getMessage());
                }
                b(campaignExA);
                return;
            }
            b(campaignExA);
        } catch (Throwable th2) {
            z.c(o, th2.getMessage(), th2);
        }
    }

    private void b(CampaignEx campaignEx) {
        String queryParameter;
        try {
            queryParameter = Uri.parse(campaignEx.getNoticeUrl()).getQueryParameter(com.mbridge.msdk.foundation.same.a.q);
        } catch (Throwable th) {
            z.c(o, "INSTALL", th);
        }
        int i = !TextUtils.isEmpty(queryParameter) ? Integer.parseInt(queryParameter) : 0;
        this.m.a(i == 2);
        r().a(this.m);
        r().c(campaignEx);
        com.mbridge.msdk.video.module.b.b.d(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx);
    }

    @Override
    public void handlerH5Exception(int i, String str) {
        super.handlerH5Exception(i, str);
        try {
            this.m.a(i, str);
        } catch (Throwable th) {
            z.c(o, th.getMessage(), th);
        }
    }

    @Override
    public final void a(int i, String str) {
        super.a(i, str);
        if (i != 2) {
            return;
        }
        try {
            JSONObject jSONObject = new JSONObject(str);
            final String strOptString = jSONObject.optString("event", "event");
            final String strOptString2 = jSONObject.optString("template", RePlugin.PROCESS_UI);
            final String strOptString3 = jSONObject.optString("layout", RePlugin.PROCESS_UI);
            final String strOptString4 = jSONObject.optString("unit_id", this.j);
            final int iD = v.D(this.p.getApplication());
            Runnable runnable = new Runnable() {
                @Override
                public final void run() {
                    t.a(com.mbridge.msdk.foundation.db.i.a(j.this.p.getApplication())).a(new p(r.j, strOptString, strOptString2, strOptString3, strOptString4, j.this.u.getId(), iD, v.a(j.this.p.getApplication(), iD)));
                }
            };
            if (com.mbridge.msdk.foundation.controller.b.a().d()) {
                com.mbridge.msdk.foundation.same.f.b.a().execute(runnable);
            } else {
                runnable.run();
            }
        } catch (Throwable th) {
            z.c(o, th.getMessage(), th);
        }
    }

    @Override
    public final void g() {
        super.g();
        if (this.m != null) {
            this.m.b();
        }
    }

    @Override
    public final void e() {
        super.e();
        try {
            if (this.p != null) {
                this.p.finish();
            }
        } catch (Throwable th) {
            z.c(o, th.getMessage(), th);
        }
    }

    private com.mbridge.msdk.click.b r() {
        if (this.l == null) {
            this.l = new com.mbridge.msdk.click.b(com.mbridge.msdk.foundation.controller.a.f().j(), this.j);
        }
        return this.l;
    }

    @Override
    public final String h(int i) {
        switch (i) {
            case 1:
                return t().toString();
            case 2:
                return u().toString();
            case 3:
                return v().toString();
            case 4:
                return w().toString();
            case 5:
                return x().toString();
            case 6:
                return y().toString();
            default:
                return s().toString();
        }
    }

    private JSONObject s() {
        JSONObject jSONObject = new JSONObject();
        com.mbridge.msdk.foundation.tools.d dVar = new com.mbridge.msdk.foundation.tools.d(com.mbridge.msdk.foundation.controller.a.f().j());
        try {
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("playVideoMute", this.n);
            jSONObject.put("sdkSetting", jSONObject2);
            jSONObject.put("device", dVar.a());
            JSONArray jSONArray = new JSONArray();
            jSONArray.put(CampaignEx.campaignToJsonObject(this.u));
            jSONObject.put("campaignList", jSONArray);
            jSONObject.put("unitSetting", z());
            String strC = com.mbridge.msdk.c.b.a().c(com.mbridge.msdk.foundation.controller.a.f().k());
            if (!TextUtils.isEmpty(strC)) {
                JSONObject jSONObject3 = new JSONObject(strC);
                a(jSONObject3);
                String strE = com.mbridge.msdk.c.b.a().e(this.j);
                if (!TextUtils.isEmpty(strE)) {
                    jSONObject3.put("ivreward", strE);
                }
                jSONObject.put("appSetting", jSONObject3.toString());
            }
            jSONObject.put("rewardSetting", A());
        } catch (Throwable th) {
            th.printStackTrace();
        }
        return jSONObject;
    }

    private JSONObject t() {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.SDK_INFO, "MAL_16.3.67,3.0.1");
        } catch (JSONException e) {
            e.printStackTrace();
        }
        return jSONObject;
    }

    private JSONObject u() {
        JSONObject jSONObject = new JSONObject();
        try {
            if (!TextUtils.isEmpty(this.j)) {
                jSONObject.put("unit_id", this.j);
            }
        } catch (JSONException e) {
            e.printStackTrace();
        }
        return jSONObject;
    }

    private JSONObject v() {
        JSONObject jSONObject = new JSONObject();
        try {
            String strC = com.mbridge.msdk.c.b.a().c(com.mbridge.msdk.foundation.controller.a.f().k());
            if (!TextUtils.isEmpty(strC)) {
                jSONObject.put("appSetting", new JSONObject(strC));
            }
        } catch (JSONException e) {
            e.printStackTrace();
        } catch (Throwable unused) {
        }
        return jSONObject;
    }

    private JSONObject w() {
        JSONObject jSONObject = new JSONObject();
        try {
            if (this.k != null) {
                jSONObject.put("unitSetting", this.k.G());
            }
        } catch (JSONException e) {
            e.printStackTrace();
        }
        return jSONObject;
    }

    private JSONObject x() {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("device", new com.mbridge.msdk.foundation.tools.d(com.mbridge.msdk.foundation.controller.a.f().j()).a());
        } catch (JSONException e) {
            e.printStackTrace();
        }
        return jSONObject;
    }

    private JSONObject y() {
        JSONObject jSONObject = new JSONObject();
        try {
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("playVideoMute", this.n);
            jSONObject2.put("instanceId", this.x);
            jSONObject.put("sdkSetting", jSONObject2);
        } catch (JSONException e) {
            e.printStackTrace();
        }
        return jSONObject;
    }

    private JSONObject z() {
        return this.k != null ? this.k.G() : new JSONObject();
    }

    private JSONObject A() {
        JSONObject jSONObject = new JSONObject();
        com.mbridge.msdk.videocommon.d.a aVarB = com.mbridge.msdk.videocommon.d.b.a().b();
        return aVarB != null ? aVarB.k() : jSONObject;
    }

    @Override
    public final void a(Activity activity) {
        this.p = activity;
    }

    private boolean c(CampaignEx campaignEx) {
        com.mbridge.msdk.c.a aVarB;
        try {
            String strK = com.mbridge.msdk.foundation.controller.a.f().k();
            long jW = (TextUtils.isEmpty(strK) || (aVarB = com.mbridge.msdk.c.b.a().b(strK)) == null) ? 0L : aVarB.W() * 1000;
            com.mbridge.msdk.videocommon.d.a aVarB2 = com.mbridge.msdk.videocommon.d.b.a().b();
            long jE = aVarB2 != null ? aVarB2.e() : 0L;
            if (campaignEx != null) {
                return campaignEx.isSpareOffer(jE, jW);
            }
            return false;
        } catch (Exception unused) {
            return false;
        }
    }

    @Override
    public final void a(Context context) {
        this.s = context;
    }

    @Override
    public final void a(com.mbridge.msdk.video.bt.module.a.b bVar) {
        this.t = bVar;
    }

    @Override
    public final void b(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        this.r = str;
    }

    @Override
    public final String j() {
        z.a(o, "getNotchArea");
        return this.r;
    }
}
