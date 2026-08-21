package com.kuaishou.weapon.p0;

import android.content.Context;
import android.text.TextUtils;
import com.kuaishou.weapon.p0.jni.Engine;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class cb {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private JSONObject f2726a;

    public cb(Context context) {
        if (Engine.loadSuccess) {
            Engine.getInstance(context);
            String strBcd = Engine.bcd();
            if (TextUtils.isEmpty(strBcd) || strBcd.length() <= 2) {
                return;
            }
            try {
                this.f2726a = new JSONObject(strBcd);
            } catch (Exception unused) {
            }
        }
    }

    public String a(String str) {
        JSONObject jSONObject = this.f2726a;
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
