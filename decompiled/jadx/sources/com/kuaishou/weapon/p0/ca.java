package com.kuaishou.weapon.p0;

import android.content.Context;
import android.text.TextUtils;
import com.kuaishou.weapon.p0.jni.Engine;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class ca {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private JSONObject f2725a;

    public ca(Context context) {
        if (Engine.loadSuccess) {
            String strGhi = Engine.getInstance(context).ghi();
            if (TextUtils.isEmpty(strGhi)) {
                return;
            }
            try {
                this.f2725a = new JSONObject(strGhi);
            } catch (Exception unused) {
            }
        }
    }

    public String a(String str) {
        JSONObject jSONObject = this.f2725a;
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
