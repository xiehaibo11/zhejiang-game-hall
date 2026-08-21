package com.cmic.gen.sdk.c.b;

import org.json.JSONObject;

/* JADX INFO: compiled from: RequestParameter.java */
/* JADX INFO: loaded from: classes.dex */
public abstract class g {
    public abstract String a();

    protected abstract String a_(String str);

    public abstract JSONObject b();

    public String v(String str) {
        return com.cmic.gen.sdk.e.d.a(a_(str)).toLowerCase();
    }
}
