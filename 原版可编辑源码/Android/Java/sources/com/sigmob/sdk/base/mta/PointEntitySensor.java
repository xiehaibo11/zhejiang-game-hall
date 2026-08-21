package com.sigmob.sdk.base.mta;

public final class PointEntitySensor extends PointEnitySigmobBase {
    private String a;
    private String b;
    private String c;

    public String getMotion_after() {
        return this.b;
    }

    public String getMotion_before() {
        return this.a;
    }

    public String getMotion_interval() {
        return this.c;
    }

    public void setMotion_after(String str) {
        this.b = str;
    }

    public void setMotion_before(String str) {
        this.a = str;
    }

    public void setMotion_interval(String str) {
        this.c = str;
    }
}
