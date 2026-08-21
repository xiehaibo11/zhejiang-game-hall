package com.sigmob.sdk.mraid;

import android.content.Context;
import android.view.View;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public abstract class i {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    String f5023a;
    String b;

    public interface a {
        void a(Context context, JSONObject jSONObject);

        void a(JSONObject jSONObject);

        void b(JSONObject jSONObject);

        void c(JSONObject jSONObject);

        void d(JSONObject jSONObject);

        void e(JSONObject jSONObject);

        void f(JSONObject jSONObject);

        void g(JSONObject jSONObject);

        void h(JSONObject jSONObject);
    }

    i(String str) {
        this.f5023a = str;
    }

    public String a() {
        return this.b;
    }

    public void a(String str) {
        this.b = str;
    }

    public abstract View b();

    public abstract void c();
}
