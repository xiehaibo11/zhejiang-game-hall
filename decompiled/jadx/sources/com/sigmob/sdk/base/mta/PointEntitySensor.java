package com.sigmob.sdk.base.mta;

/* JADX INFO: loaded from: classes3.dex */
public final class PointEntitySensor extends PointEnitySigmobBase {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f4907a;
    private String b;
    private String c;

    public String getMotion_after() {
        return this.b;
    }

    public String getMotion_before() {
        return this.f4907a;
    }

    public String getMotion_interval() {
        return this.c;
    }

    public void setMotion_after(String str) {
        this.b = str;
    }

    public void setMotion_before(String str) {
        this.f4907a = str;
    }

    public void setMotion_interval(String str) {
        this.c = str;
    }
}
