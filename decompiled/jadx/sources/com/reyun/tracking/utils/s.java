package com.reyun.tracking.utils;

import android.content.Context;
import com.loopj.android.http.RequestParams;
import com.reyun.tracking.sdk.Tracking;
import java.util.Map;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class s implements n {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f4756a;
    private String b;
    private long c;
    private Map d;
    private boolean e = true;

    public s(String str, Context context, long j, Map map) {
        this.c = -1L;
        this.f4756a = context;
        this.b = str;
        this.c = j;
        this.d = map;
    }

    private void a() {
        if (Tracking.getDataShareRunnable() != null) {
            com.reyun.tracking.sdk.a.a().a(Tracking.getDataShareRunnable());
            Tracking.removeDataShareRunnable();
        }
    }

    private void b() {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("appid", Tracking.getAppId());
            jSONObject.put("device_id", Tracking.getDeviceId());
            jSONObject.put("create_timestamp", "" + System.currentTimeMillis());
        } catch (JSONException e) {
            e.printStackTrace();
        }
        o oVar = (o) l.a("https://link.trackingio.com/dpquery", RequestParams.APPLICATION_JSON, jSONObject.toString(), new u(this));
        oVar.a((Boolean) false);
        oVar.a((Integer) 1000);
        oVar.b(1000);
        if (Tracking.getOnDataUploadListener() != null) {
            Tracking.getOnDataUploadListener().a("dpquery", jSONObject.toString());
        }
        com.reyun.tracking.sdk.a.a().a(oVar, 2000L);
    }

    private void c() {
        if (Tracking.getAttributionQueryListener() == null) {
            return;
        }
        com.reyun.tracking.sdk.a.a().a(new v(this), 1000L);
    }

    @Override // com.reyun.tracking.utils.n
    public void a(int i, Object obj) {
        if (com.reyun.tracking.a.a.b(this.b)) {
            return;
        }
        com.reyun.tracking.a.a.d("Tracking", "========Request SUCCESS======== event[" + this.b + "]" + obj);
        if ("install".equals(this.b)) {
            Tracking.setIsInstallSent(true);
            f.b(this.f4756a, Tracking.XML_INSTALL, Tracking.KEY_INSTALL_SEND_SUCCESS_TIME, System.currentTimeMillis());
            com.reyun.tracking.sdk.a.a().a(new t(this), 2000L);
            c();
            b();
        } else {
            "batch".equals(this.b);
        }
        a();
        if (this.c >= 0) {
            i.a(this.f4756a, Tracking.TAG).a(String.valueOf(this.c));
        }
        if (Tracking.getOnDataUploadListener() == null || !this.e) {
            return;
        }
        Tracking.getOnDataUploadListener().b(this.b, obj.toString());
    }

    @Override // com.reyun.tracking.utils.n
    public void a(Throwable th, String str) {
        if (str == null || str.equals("")) {
            return;
        }
        i.a(this.f4756a, Tracking.TAG).b(String.valueOf(this.c), 0);
        if (com.reyun.tracking.a.a.b(this.b)) {
            return;
        }
        com.reyun.tracking.a.a.a("Tracking", "********Request FAILED******** event[" + this.b + "]");
    }

    public void a(boolean z) {
        this.e = z;
    }
}
