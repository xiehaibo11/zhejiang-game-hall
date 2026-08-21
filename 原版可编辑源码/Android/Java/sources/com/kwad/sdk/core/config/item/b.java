package com.kwad.sdk.core.config.item;

import android.content.SharedPreferences;
import android.text.TextUtils;
import org.json.JSONObject;

public abstract class b<T> {
    private T amB;
    private T amC;
    private String mKey;

    public b(String str, T t) {
        this(str, t, t);
    }

    private b(String str, T t, T t2) {
        this.mKey = str;
        this.amC = t;
        this.amB = t2;
        com.kwad.sdk.core.config.b.a(this);
    }

    public static String cw(String str) {
        return !TextUtils.isEmpty(str) ? com.kwad.sdk.core.a.c.cR(str) : str;
    }

    public static String cx(String str) {
        return (TextUtils.isEmpty(str) || !com.kwad.sdk.core.a.c.cT(str)) ? str : com.kwad.sdk.core.a.c.cS(str);
    }

    public abstract void a(SharedPreferences sharedPreferences);

    public abstract void b(SharedPreferences.Editor editor);

    public abstract void g(JSONObject jSONObject);

    public final String getKey() {
        return this.mKey;
    }

    public T getValue() {
        return this.amC;
    }

    public final void setValue(T t) {
        this.amC = t;
    }

    public final T zZ() {
        return this.amB;
    }
}
