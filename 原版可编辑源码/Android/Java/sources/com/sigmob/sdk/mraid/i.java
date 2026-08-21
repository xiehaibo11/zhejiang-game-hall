package com.sigmob.sdk.mraid;

import android.content.Context;
import android.view.View;
import org.json.JSONObject;

public abstract class i {
    String a;
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
        this.a = str;
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
