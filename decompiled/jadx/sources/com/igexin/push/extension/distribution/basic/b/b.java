package com.igexin.push.extension.distribution.basic.b;

import android.text.TextUtils;
import com.igexin.push.core.bean.BaseAction;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class b extends BaseAction {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private long f2621a;

    public static b a(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        b bVar = new b();
        JSONObject jSONObject = new JSONObject(str);
        if (jSONObject.has("actionid")) {
            bVar.setActionId(jSONObject.getString("actionid"));
        }
        if (jSONObject.has("type")) {
            bVar.setType(jSONObject.getString("type"));
        }
        if (jSONObject.has("do")) {
            bVar.setDoActionId(jSONObject.getString("do"));
        }
        if (jSONObject.has("delay")) {
            double d = jSONObject.getDouble("delay");
            if (d > 0.0d) {
                bVar.a((long) (d * 1000.0d));
                return bVar;
            }
        }
        bVar.a(200L);
        return bVar;
    }

    public long a() {
        return this.f2621a;
    }

    public void a(long j) {
        this.f2621a = j;
    }
}
