package com.mbridge.msdk.foundation.tools;

import android.content.Context;
import com.mbridge.msdk.MBridgeConstans;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: compiled from: DomainDeviceInfo.java */
/* JADX INFO: loaded from: classes2.dex */
public final class d {
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
    public String r;
    public String s;
    public String t;
    public String u;
    public int v;
    public JSONObject w;
    public String c = "android";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public String f3523a = v.y();
    public String b = v.C();
    public String f = v.E();

    public d(Context context) {
        this.d = v.b(context);
        this.e = v.g(context);
        int iD = v.D(context);
        this.g = String.valueOf(iD);
        this.h = v.a(context, iD);
        this.i = v.C(context);
        this.j = com.mbridge.msdk.foundation.controller.a.f().l();
        this.k = com.mbridge.msdk.foundation.controller.a.f().k();
        this.l = String.valueOf(ae.h(context));
        this.m = String.valueOf(ae.g(context));
        this.q = String.valueOf(ae.d(context));
        this.s = com.mbridge.msdk.foundation.controller.a.f().o().toString();
        this.u = v.z();
        this.v = ae.e();
        if (context.getResources().getConfiguration().orientation == 2) {
            this.n = "landscape";
        } else {
            this.n = "portrait";
        }
        this.r = v.a(context);
        this.o = com.mbridge.msdk.foundation.same.a.t;
        this.p = com.mbridge.msdk.foundation.same.a.u;
        this.t = v.J();
        this.w = a(context, true);
    }

    private JSONObject a(Context context, boolean z) {
        com.mbridge.msdk.c.a aVarB;
        JSONObject jSONObject = new JSONObject();
        try {
            if (com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA)) {
                jSONObject.put("cid", v.a() + "");
                jSONObject.put("dmt", v.L() + "");
                jSONObject.put("dmf", v.K());
                jSONObject.put(com.tkay.expressad.d.a.b.dx, v.s());
            }
            aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
        } catch (JSONException e) {
            z.d("DomainDeviceInfo", e.getMessage());
        }
        if (aVarB != null && context != null) {
            if (aVarB.Z() == 1) {
                if (v.b(context) != null && com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a("authority_imei_mac")) {
                    jSONObject.put("imei", v.b(context));
                }
                if (v.i(context) != null && com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a("authority_imei_mac")) {
                    jSONObject.put("mac", v.i(context));
                }
                if (v.c(context) != null && z && com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a("authority_imei_mac")) {
                    jSONObject.put("imsi", v.c(context));
                }
            }
            if (aVarB.G() == 1 && v.a(context) != null && com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_DEVICE_ID)) {
                jSONObject.put("oaid", v.a(context));
            }
            if (aVarB.aa() == 1 && v.g(context) != null && com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a("authority_android_id")) {
                jSONObject.put("android_id", v.g(context));
            }
            return jSONObject;
        }
        return jSONObject;
    }

    public final JSONObject a() {
        JSONObject jSONObject = new JSONObject();
        try {
            if (com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA)) {
                jSONObject.put("device", this.f3523a);
                jSONObject.put("system_version", this.b);
                jSONObject.put("network_type", this.g);
                jSONObject.put("network_type_str", this.h);
                jSONObject.put("device_ua", this.i);
                jSONObject.put("has_wx", v.r(com.mbridge.msdk.foundation.controller.a.f().j()));
                jSONObject.put("integrated_wx", v.v());
                jSONObject.put("opensdk_ver", v.w() + "");
                jSONObject.put("wx_api_ver", v.g(com.mbridge.msdk.foundation.controller.a.f().m()) + "");
                jSONObject.put("emu", v.u());
                jSONObject.put("brand", this.u);
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
                jSONObject.put("oaid", this.r);
            }
            jSONObject.put("appkey", this.j);
            jSONObject.put(com.tkay.expressad.videocommon.e.b.u, this.k);
            jSONObject.put("screen_width", this.l);
            jSONObject.put("screen_height", this.m);
            jSONObject.put("orientation", this.n);
            jSONObject.put("scale", this.q);
            jSONObject.put("b", this.o);
            jSONObject.put("c", this.p);
            jSONObject.put("web_env", this.s);
            jSONObject.put("f", this.t);
            jSONObject.put("misk_spt", this.v);
            if (v.P() != 0) {
                jSONObject.put("tun", v.P() + "");
            }
            jSONObject.put("dvi", t.a(this.w.toString()));
            jSONObject.put(com.mbridge.msdk.foundation.same.net.g.d.h, com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().f() + "");
            if (!com.mbridge.msdk.foundation.controller.authoritycontroller.a.h()) {
                jSONObject.put("dev_source", "2");
            }
        } catch (JSONException e) {
            e.printStackTrace();
        }
        return jSONObject;
    }
}
