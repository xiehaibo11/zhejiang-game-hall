package com.kuaishou.weapon.p0;

import android.content.Context;
import android.text.TextUtils;
import com.kuaishou.weapon.p0.jni.Engine;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class ax {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private JSONObject f2698a;

    public ax(Context context, int i) {
        if (Engine.loadSuccess) {
            try {
                String strPqr = Engine.getInstance(context).pqr(Integer.valueOf(cj.c).intValue(), 2, i, "");
                if (TextUtils.isEmpty(strPqr)) {
                    return;
                }
                this.f2698a = new JSONObject(strPqr);
            } catch (Throwable unused) {
            }
        }
    }

    public String a(String str) {
        JSONObject jSONObject = this.f2698a;
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
        return this.f2698a;
    }
}
