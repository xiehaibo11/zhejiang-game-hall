package com.kuaishou.weapon.p0;

import android.content.Context;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class cg {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f2731a;
    private int b;

    public cg(Context context, int i) {
        this.f2731a = context;
        this.b = i;
    }

    public String a(String str) {
        JSONObject jSONObjectA;
        try {
            JSONObject jSONObjectA2 = new cl(str, cj.j).a(this.f2731a);
            if (jSONObjectA2 == null || (jSONObjectA = a()) == null) {
                return null;
            }
            jSONObjectA2.put("module_section", jSONObjectA);
            return jSONObjectA2.toString();
        } catch (Throwable unused) {
            return null;
        }
    }

    public JSONObject a() {
        JSONArray jSONArrayA;
        try {
            System.currentTimeMillis();
            JSONObject jSONObject = new JSONObject();
            if (h.a(this.f2731a, "re_po_rt").b(df.y, 1) == 1 && (jSONArrayA = new x().a(this.f2731a)) != null && jSONArrayA.length() > 0) {
                jSONObject.put("10000", jSONArrayA);
                try {
                    jSONObject.put("11203", bg.b(com.kwad.sdk.f.b.FA().Fy()));
                    jSONObject.put("11301", bg.c(com.kwad.sdk.f.b.FA().Fz()));
                    jSONObject.put("11302", bg.c(com.kwad.sdk.f.b.FA().getSdkVersion()));
                    jSONObject.put("11303", bg.c(com.kwad.sdk.f.b.FA().getAppId()));
                } catch (Throwable unused) {
                }
                return jSONObject;
            }
        } catch (Throwable unused2) {
        }
        return null;
    }
}
