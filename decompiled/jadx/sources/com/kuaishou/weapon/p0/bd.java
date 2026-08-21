package com.kuaishou.weapon.p0;

import android.content.Context;
import android.text.TextUtils;
import com.kuaishou.weapon.p0.jni.Engine;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class bd extends dg {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private JSONObject f2705a;

    public bd(Context context, int i) {
        if (Engine.loadSuccess) {
            try {
                String strPqr = Engine.getInstance(context).pqr(Integer.valueOf(cj.c).intValue(), 5, i, "");
                if (TextUtils.isEmpty(strPqr)) {
                    return;
                }
                this.f2705a = new JSONObject(strPqr);
            } catch (Throwable unused) {
            }
        }
    }

    public String a(String str) {
        JSONObject jSONObject = this.f2705a;
        if (jSONObject == null) {
            return null;
        }
        try {
            return jSONObject.getString(str);
        } catch (Exception unused) {
            return null;
        }
    }

    public JSONObject a() {
        return this.f2705a;
    }
}
