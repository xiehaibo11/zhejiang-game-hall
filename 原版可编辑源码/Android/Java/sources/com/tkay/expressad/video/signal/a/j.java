package com.tkay.expressad.video.signal.a;

import android.app.Activity;
import android.content.Context;
import android.net.Uri;
import android.text.TextUtils;
import com.huawei.hms.framework.common.ContainerUtils;
import com.qihoo360.replugin.RePlugin;
import com.tkay.core.api.TYAdConst;
import com.tkay.expressad.foundation.d.r;
import com.tkay.expressad.foundation.h.t;
import com.tkay.expressad.foundation.h.v;
import com.tkay.expressad.video.signal.a.c;
import com.tkay.expressad.video.signal.c;
import java.util.Iterator;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public class j extends c {
    private static final String t = j.class.getSimpleName();
    private static final String y = "camp_position";
    private List<com.tkay.expressad.foundation.d.c> A;
    private int B;
    private String C = "";
    private String D = "";
    private boolean E = false;
    private boolean F = false;
    private boolean G = true;
    private Activity u;
    private String v;
    private String w;
    private Context x;
    private com.tkay.expressad.foundation.d.c z;

    private static boolean E() {
        return false;
    }

    public final void a(com.tkay.expressad.foundation.d.c cVar) {
        this.z = cVar;
    }

    public final void a(List<com.tkay.expressad.foundation.d.c> list) {
        this.A = list;
    }

    private boolean s() {
        return this.G;
    }

    private void c(boolean z) {
        this.G = z;
    }

    public final void p() {
        this.E = true;
    }

    public j(Activity activity, com.tkay.expressad.foundation.d.c cVar) {
        this.u = activity;
        this.z = cVar;
    }

    public j(Activity activity, com.tkay.expressad.foundation.d.c cVar, List<com.tkay.expressad.foundation.d.c> list) {
        this.u = activity;
        this.z = cVar;
        this.A = list;
    }

    public final void q() {
        this.v = "";
    }

    public final void c(String str) {
        this.C = str;
    }

    public final void d(String str) {
        this.D = str;
    }

    public final int r() {
        return this.B;
    }

    public final void j(int i) {
        this.B = i;
    }

    public final void b(boolean z) {
        this.F = z;
    }

    @Override
    public final String i() {
        this.r.c();
        this.e = true;
        if (TextUtils.isEmpty(this.v)) {
            this.v = t();
        }
        return this.v;
    }

    private String t() {
        JSONObject jSONObject = new JSONObject();
        com.tkay.expressad.foundation.h.c cVar = new com.tkay.expressad.foundation.h.c(com.tkay.core.common.b.m.a().f());
        try {
            jSONObject.put("unit_id", this.n);
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("instanceId", this.C);
            jSONObject2.put("rootViewInstanceId", this.D);
            jSONObject2.put("isRootTemplateWebView", this.E);
            jSONObject.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.SDK_INFO, com.tkay.expressad.out.n.a + ",3.0.1");
            jSONObject2.put("playVideoMute", this.s);
            jSONObject.put("sdkSetting", jSONObject2);
            jSONObject.put("device", cVar.a());
            JSONArray jSONArray = new JSONArray();
            if (this.A != null && this.A.size() > 0) {
                for (com.tkay.expressad.foundation.d.c cVar2 : this.A) {
                    jSONArray.put(com.tkay.expressad.foundation.d.c.a(cVar2, cVar2.at(), c(cVar2)));
                }
            } else {
                jSONArray.put(com.tkay.expressad.foundation.d.c.a(this.z));
            }
            jSONObject.put("campaignList", jSONArray);
            jSONObject.put("unitSetting", C());
            String strE = com.tkay.expressad.foundation.b.b.b().e();
            com.tkay.expressad.d.b.a();
            String strA = com.tkay.expressad.d.b.a(strE);
            if (!TextUtils.isEmpty(strA)) {
                JSONObject jSONObject3 = new JSONObject(strA);
                a(jSONObject3);
                com.tkay.expressad.d.b.a();
                String strB = com.tkay.expressad.d.b.b(this.n);
                if (!TextUtils.isEmpty(strB)) {
                    jSONObject3.put("ivreward", new JSONObject(strB));
                }
                jSONObject.put("appSetting", jSONObject3);
            }
            jSONObject.put("rewardSetting", D());
            if (!TextUtils.isEmpty(this.n)) {
                jSONObject.put("unit_id", this.n);
            }
            jSONObject.put("rw_plus", this.F ? "1" : "0");
        } catch (Throwable th) {
            th.printStackTrace();
        }
        return jSONObject.toString();
    }

    private void a(JSONObject jSONObject) {
        try {
            Context contextD = com.tkay.expressad.foundation.b.b.b().d();
            String string = v.b(contextD, "Tkay_ConfirmTitle" + this.n, "").toString();
            String string2 = v.b(contextD, "Tkay_ConfirmContent" + this.n, "").toString();
            String string3 = v.b(contextD, "Tkay_CancelText" + this.n, "").toString();
            String string4 = v.b(contextD, "Tkay_ConfirmText" + this.n, "").toString();
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

    private com.tkay.expressad.foundation.d.c a(String str, com.tkay.expressad.foundation.d.c cVar) {
        if (TextUtils.isEmpty(str)) {
            return cVar;
        }
        if (TextUtils.isEmpty(str) && cVar == null) {
            return null;
        }
        if (!str.contains("notice")) {
            try {
                JSONObject jSONObjectA = com.tkay.expressad.foundation.d.c.a(cVar);
                com.tkay.expressad.foundation.d.c cVarB = com.tkay.expressad.foundation.d.c.b(jSONObjectA);
                if (cVarB == null) {
                    cVarB = cVar;
                }
                if (!TextUtils.isEmpty(str)) {
                    a(jSONObjectA, cVarB);
                    JSONObject jSONObjectOptJSONObject = new JSONObject(str).optJSONObject(com.tkay.expressad.foundation.g.a.ce);
                    if (jSONObjectOptJSONObject != null) {
                        String.valueOf(t.b(this.u, Integer.valueOf(jSONObjectOptJSONObject.getString(com.tkay.expressad.foundation.g.a.cc)).intValue()));
                        String.valueOf(t.b(this.u, Integer.valueOf(jSONObjectOptJSONObject.getString(com.tkay.expressad.foundation.g.a.cd)).intValue()));
                    }
                    cVarB.p(cVarB.ad());
                    String strAh = cVarB.ah();
                    if (jSONObjectOptJSONObject != null) {
                        Iterator<String> itKeys = jSONObjectOptJSONObject.keys();
                        StringBuilder sb = new StringBuilder();
                        while (itKeys.hasNext()) {
                            sb.append("&");
                            String next = itKeys.next();
                            String strOptString = jSONObjectOptJSONObject.optString(next);
                            if (com.tkay.expressad.foundation.g.a.cc.equals(next) || com.tkay.expressad.foundation.g.a.cd.equals(next)) {
                                strOptString = String.valueOf(t.b(this.u, Integer.valueOf(strOptString).intValue()));
                            }
                            sb.append(next);
                            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
                            sb.append(strOptString);
                        }
                        cVarB.q(strAh + ((Object) sb));
                    }
                }
                return cVarB;
            } catch (JSONException e) {
                e.printStackTrace();
                return cVar;
            } catch (Throwable th) {
                th.printStackTrace();
                return cVar;
            }
        }
        try {
            JSONObject jSONObjectA2 = com.tkay.expressad.foundation.d.c.a(cVar);
            JSONObject jSONObject = new JSONObject(str);
            if (jSONObject.opt("akdlui") == null) {
                jSONObject.put("akdlui", "");
            }
            try {
                if (!jSONObject.has("deep_link")) {
                    jSONObjectA2.put("deep_link", "");
                }
            } catch (Exception unused) {
            }
            Iterator<String> itKeys2 = jSONObject.keys();
            while (itKeys2.hasNext()) {
                String next2 = itKeys2.next();
                jSONObjectA2.put(next2, jSONObject.getString(next2));
            }
            com.tkay.expressad.foundation.d.c cVarB2 = com.tkay.expressad.foundation.d.c.b(jSONObjectA2);
            a(jSONObjectA2, cVarB2);
            return cVarB2;
        } catch (JSONException e2) {
            e2.printStackTrace();
            return cVar;
        }
    }

    private static void a(JSONObject jSONObject, com.tkay.expressad.foundation.d.c cVar) {
        try {
            String strOptString = jSONObject.optString("unitId");
            if (TextUtils.isEmpty(strOptString)) {
                return;
            }
            cVar.l(strOptString);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override
    public void click(int i, String str) {
        String queryParameter;
        int iP;
        List<com.tkay.expressad.foundation.d.c> list;
        super.click(i, str);
        com.tkay.expressad.foundation.d.c cVar = this.z;
        if (cVar != null && cVar.k() == 5 && this.z != null && (list = this.A) != null && list.size() != 0) {
            try {
                JSONObject jSONObject = new JSONObject(str);
                if (jSONObject.has(y)) {
                    this.z = this.A.get(jSONObject.getInt(y));
                }
            } catch (JSONException e) {
                e.printStackTrace();
            }
        }
        boolean z = true;
        try {
            if (i != 1) {
                if (i != 3) {
                    return;
                }
                if (this.z != null && this.z.g() > -2) {
                    iP = this.z.g();
                } else {
                    iP = this.o != null ? this.o.p() : 1;
                }
                if (iP == -1) {
                    a(new c.b(this, this.r));
                }
                click(1, str);
                return;
            }
            if (this.z == null && this.A != null && this.A.size() > 0) {
                this.z = this.A.get(0);
            }
            if (this.z == null) {
                return;
            }
            com.tkay.expressad.foundation.d.c cVarA = a(str, this.z);
            try {
                queryParameter = Uri.parse(cVarA.ah()).getQueryParameter(com.tkay.expressad.foundation.g.a.cf);
            } catch (Throwable unused) {
            }
            int i2 = !TextUtils.isEmpty(queryParameter) ? Integer.parseInt(queryParameter) : 0;
            c.a aVar = this.r;
            if (i2 != 2) {
                z = false;
            }
            aVar.a(cVarA, z);
            u().a(this.r);
            u();
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    private void e(String str) {
        List<com.tkay.expressad.foundation.d.c> list;
        if (this.z == null || (list = this.A) == null || list.size() == 0) {
            return;
        }
        try {
            JSONObject jSONObject = new JSONObject(str);
            if (jSONObject.has(y)) {
                this.z = this.A.get(jSONObject.getInt(y));
            }
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    private void b(com.tkay.expressad.foundation.d.c cVar) {
        String queryParameter;
        try {
            queryParameter = Uri.parse(cVar.ah()).getQueryParameter(com.tkay.expressad.foundation.g.a.cf);
        } catch (Throwable unused) {
        }
        this.r.a(cVar, (!TextUtils.isEmpty(queryParameter) ? Integer.parseInt(queryParameter) : 0) == 2);
        u().a(this.r);
        u();
    }

    @Override
    public void handlerH5Exception(int i, String str) {
        super.handlerH5Exception(i, str);
        try {
            this.r.a(i, str);
        } catch (Throwable th) {
            th.getMessage();
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
            String strOptString = jSONObject.optString("event", "event");
            String strOptString2 = jSONObject.optString("template", RePlugin.PROCESS_UI);
            String strOptString3 = jSONObject.optString("layout", RePlugin.PROCESS_UI);
            String strOptString4 = jSONObject.optString("unit_id", this.n);
            this.u.getApplication();
            int iA = com.tkay.expressad.foundation.h.k.a();
            new r(r.j, strOptString, strOptString2, strOptString3, strOptString4, this.z.aZ(), iA, com.tkay.expressad.foundation.h.k.a(this.u.getApplication(), iA));
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    @Override
    public final void l() {
        super.l();
        if (this.r != null) {
            this.r.d();
        }
    }

    @Override
    public final void j() {
        super.j();
        try {
            if (this.u != null) {
                this.u.finish();
            }
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    private com.tkay.expressad.a.a u() {
        if (this.q == null) {
            this.q = new com.tkay.expressad.a.a(com.tkay.core.common.b.m.a().f(), this.n);
        }
        return this.q;
    }

    @Override
    public final String h(int i) {
        switch (i) {
            case 1:
                return w().toString();
            case 2:
                return x().toString();
            case 3:
                return y().toString();
            case 4:
                return z().toString();
            case 5:
                return A().toString();
            case 6:
                return B().toString();
            default:
                return v().toString();
        }
    }

    private JSONObject v() {
        JSONObject jSONObject = new JSONObject();
        com.tkay.expressad.foundation.h.c cVar = new com.tkay.expressad.foundation.h.c(com.tkay.core.common.b.m.a().f());
        try {
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("playVideoMute", this.s);
            jSONObject.put("sdkSetting", jSONObject2);
            jSONObject.put("device", cVar.a());
            JSONArray jSONArray = new JSONArray();
            jSONArray.put(com.tkay.expressad.foundation.d.c.a(this.z));
            jSONObject.put("campaignList", jSONArray);
            jSONObject.put("unitSetting", C());
            String strE = com.tkay.expressad.foundation.b.b.b().e();
            com.tkay.expressad.d.b.a();
            String strA = com.tkay.expressad.d.b.a(strE);
            if (!TextUtils.isEmpty(strA)) {
                JSONObject jSONObject3 = new JSONObject(strA);
                a(jSONObject3);
                com.tkay.expressad.d.b.a();
                String strB = com.tkay.expressad.d.b.b(this.n);
                if (!TextUtils.isEmpty(strB)) {
                    jSONObject3.put("ivreward", strB);
                }
                jSONObject.put("appSetting", jSONObject3.toString());
            }
            jSONObject.put("rewardSetting", D());
        } catch (Throwable th) {
            th.printStackTrace();
        }
        return jSONObject;
    }

    private static JSONObject w() {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.SDK_INFO, com.tkay.expressad.out.n.a + ",3.0.1");
        } catch (JSONException e) {
            e.printStackTrace();
        }
        return jSONObject;
    }

    private JSONObject x() {
        JSONObject jSONObject = new JSONObject();
        try {
            if (!TextUtils.isEmpty(this.n)) {
                jSONObject.put("unit_id", this.n);
            }
        } catch (JSONException e) {
            e.printStackTrace();
        }
        return jSONObject;
    }

    private static JSONObject y() {
        JSONObject jSONObject = new JSONObject();
        try {
            String strE = com.tkay.expressad.foundation.b.b.b().e();
            com.tkay.expressad.d.b.a();
            String strA = com.tkay.expressad.d.b.a(strE);
            if (!TextUtils.isEmpty(strA)) {
                jSONObject.put("appSetting", new JSONObject(strA));
            }
        } catch (JSONException e) {
            e.printStackTrace();
        } catch (Throwable unused) {
        }
        return jSONObject;
    }

    private JSONObject z() {
        JSONObject jSONObject = new JSONObject();
        try {
            if (this.o != null) {
                jSONObject.put("unitSetting", this.o.R());
            }
        } catch (JSONException e) {
            e.printStackTrace();
        }
        return jSONObject;
    }

    private static JSONObject A() {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("device", new com.tkay.expressad.foundation.h.c(com.tkay.core.common.b.m.a().f()).a());
        } catch (JSONException e) {
            e.printStackTrace();
        }
        return jSONObject;
    }

    private JSONObject B() {
        JSONObject jSONObject = new JSONObject();
        try {
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("playVideoMute", this.s);
            jSONObject2.put("instanceId", this.C);
            jSONObject.put("sdkSetting", jSONObject2);
        } catch (JSONException e) {
            e.printStackTrace();
        }
        return jSONObject;
    }

    private JSONObject C() {
        return this.o != null ? this.o.R() : new JSONObject();
    }

    private static JSONObject D() {
        JSONObject jSONObject = new JSONObject();
        com.tkay.expressad.videocommon.e.a aVarB = com.tkay.expressad.videocommon.e.c.a().b();
        return aVarB != null ? aVarB.k() : jSONObject;
    }

    @Override
    public final void a(Activity activity) {
        this.u = activity;
    }

    /* JADX WARN: Removed duplicated region for block: B:7:0x0021  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static boolean c(com.tkay.expressad.foundation.d.c cVar) {
        long jL;
        try {
            if (!TextUtils.isEmpty(com.tkay.expressad.foundation.b.b.b().e())) {
                com.tkay.expressad.d.b.a();
                com.tkay.expressad.d.a aVarB = com.tkay.expressad.d.b.b();
                jL = aVarB != null ? aVarB.l() * 1000 : 0L;
            }
            com.tkay.expressad.videocommon.e.a aVarB2 = com.tkay.expressad.videocommon.e.c.a().b();
            long jC = aVarB2 != null ? aVarB2.c() : 0L;
            if (cVar != null) {
                return cVar.a(jC, jL);
            }
            return false;
        } catch (Exception unused) {
            return false;
        }
    }

    @Override
    public final void a(Context context) {
        this.x = context;
    }

    @Override
    public final void b(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        this.w = str;
    }

    @Override
    public final String o() {
        return this.w;
    }
}
