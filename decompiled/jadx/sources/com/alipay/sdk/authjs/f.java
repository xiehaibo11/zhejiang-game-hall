package com.alipay.sdk.authjs;

import java.util.TimerTask;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
class f extends TimerTask {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ a f1136a;
    final /* synthetic */ d b;

    f(d dVar, a aVar) {
        this.b = dVar;
        this.f1136a = aVar;
    }

    @Override // java.util.TimerTask, java.lang.Runnable
    public void run() {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("toastCallBack", "true");
        } catch (JSONException unused) {
        }
        a aVar = new a(a.b);
        aVar.a(this.f1136a.b());
        aVar.a(jSONObject);
        this.b.f1134a.a(aVar);
    }
}
