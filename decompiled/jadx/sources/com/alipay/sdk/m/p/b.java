package com.alipay.sdk.m.p;

import android.text.TextUtils;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f1230a;
    public final String b;

    public b(String str, String str2) {
        this.f1230a = str;
        this.b = str2;
    }

    public String a() {
        return this.b;
    }

    public String b() {
        return this.f1230a;
    }

    public JSONObject c() {
        if (TextUtils.isEmpty(this.b)) {
            return null;
        }
        try {
            return new JSONObject(this.b);
        } catch (Exception e) {
            com.alipay.sdk.m.u.e.a(e);
            return null;
        }
    }

    public String toString() {
        return String.format("<Letter envelop=%s body=%s>", this.f1230a, this.b);
    }
}
