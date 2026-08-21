package com.sigmob.sdk.base.mta;

public class PointEntityActive extends com.sigmob.sdk.base.mta.PointEntitySigmobSuper {
    private java.lang.String a;
    private java.lang.String b;

    public PointEntityActive() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.sigmob.sdk.base.mta.PointEntityActive ActiveTracking(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            com.sigmob.sdk.base.mta.PointEntityActive r0 = new com.sigmob.sdk.base.mta.PointEntityActive
            r0.<init>()
            java.lang.String r1 = "107"
            r0.setAc_type(r1)
            r0.setCategory(r2)
            r0.setActive_id(r3)
            r0.setDuration(r4)
            r0.setTimestamp(r5)
            r0.commit()
            return r0
    }

    public java.lang.String getActive_id() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public java.lang.String getDuration() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public void setActive_id(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void setDuration(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }
}
