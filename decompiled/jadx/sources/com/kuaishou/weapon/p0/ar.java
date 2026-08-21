package com.kuaishou.weapon.p0;

import android.content.Context;
import android.text.TextUtils;
import com.kuaishou.weapon.p0.jni.Engine;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class ar {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private JSONObject f2692a;

    public ar(Context context) {
        if (Engine.loadSuccess) {
            try {
                String strKlm = Engine.getInstance(context).klm(56, context.getPackageName());
                if (TextUtils.isEmpty(strKlm)) {
                    return;
                }
                this.f2692a = new JSONObject(strKlm);
            } catch (Throwable unused) {
            }
        }
    }

    public String a(String str) {
        JSONObject jSONObject = this.f2692a;
        if (jSONObject == null) {
            return null;
        }
        try {
            return jSONObject.getString(str);
        } catch (Exception unused) {
            return null;
        }
    }
}
