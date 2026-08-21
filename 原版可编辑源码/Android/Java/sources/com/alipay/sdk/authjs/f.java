package com.alipay.sdk.authjs;

import java.util.TimerTask;
import org.json.JSONException;
import org.json.JSONObject;

class f extends TimerTask {
    final a a;
    final d b;

    f(d dVar, a aVar) {
        this.b = dVar;
        this.a = aVar;
    }

    @Override
    public void run() {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("toastCallBack", "true");
        } catch (JSONException unused) {
        }
        a aVar = new a(a.b);
        aVar.a(this.a.b());
        aVar.a(jSONObject);
        this.b.a.a(aVar);
    }
}
