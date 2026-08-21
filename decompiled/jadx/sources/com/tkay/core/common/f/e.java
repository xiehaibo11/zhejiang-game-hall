package com.tkay.core.common.f;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public final class e extends p {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public int f6153a;
    public ai b;
    public long c;

    @Override // com.tkay.core.common.f.p
    public final JSONObject a() {
        JSONObject jSONObjectA = this.b.A(this.f6153a);
        if (jSONObjectA != null) {
            try {
                jSONObjectA.put("sdk_time", this.c);
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
        return jSONObjectA;
    }
}
