package com.tkay.core.common.f;

import org.json.JSONObject;

public final class e extends p {
    public int a;
    public ai b;
    public long c;

    @Override
    public final JSONObject a() {
        JSONObject jSONObjectA = this.b.A(this.a);
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
