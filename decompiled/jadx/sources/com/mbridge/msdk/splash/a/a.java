package com.mbridge.msdk.splash.a;

import android.content.Context;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.v;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: compiled from: DeviceInfo.java */
/* JADX INFO: loaded from: classes2.dex */
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
    public String q;
    public String c = "android";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public String f3969a = v.y();
    public String b = v.C();
    public String f = v.E();

    public a(Context context) {
        this.d = v.b(context);
        this.e = v.g(context);
        int iD = v.D(context);
        this.h = String.valueOf(iD);
        this.i = v.a(context, iD);
        this.j = v.C(context);
        this.k = com.mbridge.msdk.foundation.controller.a.f().l();
        this.l = com.mbridge.msdk.foundation.controller.a.f().k();
        this.m = String.valueOf(ae.h(context));
        this.n = String.valueOf(ae.g(context));
        this.p = String.valueOf(ae.d(context));
        if (context.getResources().getConfiguration().orientation == 2) {
            this.o = "landscape";
        } else {
            this.o = "portrait";
        }
        this.g = v.a(context);
        this.q = v.J();
    }

    public final JSONObject a() {
        JSONObject jSONObject = new JSONObject();
        try {
            if (com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA)) {
                jSONObject.put("device", this.f3969a);
                jSONObject.put("system_version", this.b);
                jSONObject.put("network_type", this.h);
                jSONObject.put("network_type_str", this.i);
                jSONObject.put("device_ua", this.j);
                jSONObject.put("has_wx", v.r(com.mbridge.msdk.foundation.controller.a.f().j()));
                jSONObject.put("integrated_wx", v.v());
                jSONObject.put("opensdk_ver", v.w() + "");
                jSONObject.put("wx_api_ver", v.g(com.mbridge.msdk.foundation.controller.a.f().m()) + "");
                jSONObject.put("emu", v.u());
            }
            jSONObject.put("plantform", this.c);
            if (com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a("authority_imei_mac")) {
                jSONObject.put("device_imei", this.d);
            }
            if (com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a("authority_android_id")) {
                jSONObject.put("android_id", this.e);
            }
            if (com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_DEVICE_ID)) {
                jSONObject.put("google_ad_id", this.f);
                jSONObject.put("oaid", this.g);
            }
            jSONObject.put("appkey", this.k);
            jSONObject.put(com.tkay.expressad.videocommon.e.b.u, this.l);
            jSONObject.put("screen_width", this.m);
            jSONObject.put("screen_height", this.n);
            jSONObject.put("orientation", this.o);
            jSONObject.put("scale", this.p);
            if (v.P() != 0) {
                jSONObject.put("tun", v.P());
            }
            jSONObject.put("f", this.q);
        } catch (JSONException e) {
            e.printStackTrace();
        }
        return jSONObject;
    }
}
