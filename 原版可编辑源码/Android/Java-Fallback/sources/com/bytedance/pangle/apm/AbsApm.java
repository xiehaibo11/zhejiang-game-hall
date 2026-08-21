package com.bytedance.pangle.apm;

public abstract class AbsApm {
    public AbsApm() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract java.lang.String getDid();

    public abstract void init();

    public abstract void monitorEvent(java.lang.String r1, org.json.JSONObject r2, org.json.JSONObject r3, org.json.JSONObject r4);

    public abstract void reportError(java.lang.String r1, java.lang.Throwable r2);
}
