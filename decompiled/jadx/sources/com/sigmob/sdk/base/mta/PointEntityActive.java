package com.sigmob.sdk.base.mta;

/* JADX INFO: loaded from: classes3.dex */
public class PointEntityActive extends PointEntitySigmobSuper {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f4903a;
    private String b;

    public static PointEntityActive ActiveTracking(String str, String str2, String str3, String str4) {
        PointEntityActive pointEntityActive = new PointEntityActive();
        pointEntityActive.setAc_type(PointType.WIND_ACTIVE);
        pointEntityActive.setCategory(str);
        pointEntityActive.setActive_id(str2);
        pointEntityActive.setDuration(str3);
        pointEntityActive.setTimestamp(str4);
        pointEntityActive.commit();
        return pointEntityActive;
    }

    public String getActive_id() {
        return this.f4903a;
    }

    public String getDuration() {
        return this.b;
    }

    public void setActive_id(String str) {
        this.f4903a = str;
    }

    public void setDuration(String str) {
        this.b = str;
    }
}
