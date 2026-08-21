package com.tkay.expressad.foundation.b;

import android.app.Activity;
import android.content.Context;
import android.text.TextUtils;
import java.lang.ref.WeakReference;
import org.json.JSONException;
import org.json.JSONObject;

public class b {
    public static final String a = b.class.getSimpleName();
    private static volatile b b;
    private Context c;
    private String d;
    private String e;
    private JSONObject g;
    private boolean i;
    private WeakReference<Context> j;
    private WeakReference<Activity> k;
    private int f = 0;
    private boolean h = false;

    public final String a() {
        try {
            if (this.c != null) {
                return this.c.getPackageName();
            }
            return null;
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    private b() {
    }

    public static b b() {
        if (b == null) {
            synchronized (b.class) {
                if (b == null) {
                    b = new b();
                }
            }
        }
        return b;
    }

    public final void c() {
        if (this.h) {
            return;
        }
        try {
            JSONObject jSONObject = new JSONObject();
            this.g = jSONObject;
            jSONObject.put("webgl", 0);
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    public final Context d() {
        return this.c;
    }

    public final void a(Context context) {
        this.c = context;
    }

    public final String e() {
        return !TextUtils.isEmpty(this.d) ? this.d : "";
    }

    public final void a(String str) {
        this.d = str;
    }

    public final String f() {
        return !TextUtils.isEmpty(this.e) ? this.e : "";
    }

    public final void b(String str) {
        this.e = str;
    }

    public final Context g() {
        WeakReference<Context> weakReference = this.j;
        if (weakReference == null) {
            return null;
        }
        return weakReference.get();
    }

    public final void b(Context context) {
        this.j = new WeakReference<>(context);
    }

    public final int h() {
        return this.f;
    }

    private void a(int i) {
        this.f = i;
    }

    public final JSONObject i() {
        return this.g;
    }

    private void a(JSONObject jSONObject) {
        this.g = jSONObject;
    }
}
