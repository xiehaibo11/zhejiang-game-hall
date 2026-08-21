package com.tkay.expressad.advanced.a;

import android.content.Context;
import android.text.TextUtils;
import com.tkay.core.api.IExHandler;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.al;
import com.tkay.core.common.l.d;
import com.tkay.expressad.foundation.h.k;
import com.tkay.expressad.foundation.h.t;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public final class a {
    public String d;
    public String e;
    public String g;
    public String h;
    public String i;
    public String j;
    public String k;
    public String l;
    public String m;
    public String n;
    public String o;
    public String p;
    public String c = "android";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public String f6357a = k.b();
    public String b = k.c();
    public String f = d.f();

    public a(Context context) {
        String strFillCDataParam;
        this.e = d.d(context);
        int iA = k.a();
        this.h = String.valueOf(iA);
        this.i = k.a(context, iA);
        this.j = d.i();
        this.k = com.tkay.expressad.foundation.b.b.b().f();
        this.l = com.tkay.expressad.foundation.b.b.b().e();
        this.m = String.valueOf(t.f(context));
        this.n = String.valueOf(t.e(context));
        this.p = String.valueOf(t.c(context));
        if (context.getResources().getConfiguration().orientation == 2) {
            this.o = "landscape";
        } else {
            this.o = "portrait";
        }
        IExHandler iExHandlerB = m.a().b();
        if (iExHandlerB != null) {
            strFillCDataParam = iExHandlerB.fillCDataParam("at_device1|||at_device2|||at_device3");
            strFillCDataParam.replace("at_device1", "").replace("at_device2", "").replace("at_device3", "");
        } else {
            strFillCDataParam = "";
        }
        if (TextUtils.isEmpty(strFillCDataParam)) {
            this.d = "";
            this.g = "";
        } else {
            String[] strArrSplit = strFillCDataParam.split("\\|\\|\\|");
            try {
                this.d = strArrSplit[0];
            } catch (Throwable unused) {
            }
            try {
                this.g = strArrSplit[2];
            } catch (Throwable unused2) {
            }
        }
    }

    public final JSONObject a() {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("device", this.f6357a);
            jSONObject.put("system_version", this.b);
            jSONObject.put("network_type", this.h);
            jSONObject.put("network_type_str", this.i);
            jSONObject.put("device_ua", this.j);
            al alVarK = m.a().K();
            if (alVarK != null) {
                jSONObject.put("has_wx", alVarK.a());
                jSONObject.put("integrated_wx", alVarK.b());
                StringBuilder sb = new StringBuilder();
                sb.append(alVarK.c());
                jSONObject.put("opensdk_ver", sb.toString());
                StringBuilder sb2 = new StringBuilder();
                sb2.append(alVarK.d());
                jSONObject.put("wx_api_ver", sb2.toString());
            }
            jSONObject.put("plantform", this.c);
            jSONObject.put(com.tkay.core.common.l.c.b("ZGV2aWNlX2ltZWk="), this.d);
            jSONObject.put("android_id", this.e);
            jSONObject.put("google_ad_id", this.f);
            jSONObject.put("oaid", this.g);
            jSONObject.put("appkey", this.k);
            jSONObject.put(com.tkay.expressad.videocommon.e.b.u, this.l);
            jSONObject.put("screen_width", this.m);
            jSONObject.put("screen_height", this.n);
            jSONObject.put("orientation", this.o);
            jSONObject.put("scale", this.p);
        } catch (JSONException e) {
            e.printStackTrace();
        }
        return jSONObject;
    }
}
