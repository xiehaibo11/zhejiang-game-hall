package com.sigmob.sdk.base.mta;

/* JADX INFO: loaded from: classes3.dex */
public class PointEntityClick extends PointEnitySigmobBase {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f4906a;
    private String b;
    private String c;
    private String d;
    private String e;
    private String f;

    public String getClick_duration() {
        return this.b;
    }

    public String getIs_valid_click() {
        return this.c;
    }

    public String getLocation() {
        return this.f4906a;
    }

    public String getPressure() {
        return this.e;
    }

    public String getTouchSize() {
        return this.f;
    }

    public String getTouchType() {
        return this.d;
    }

    public void setClick_duration(String str) {
        this.b = str;
    }

    public void setIs_valid_click(String str) {
        this.c = str;
    }

    public void setLocation(String str) {
        this.f4906a = str;
    }

    public void setPressure(String str) {
        this.e = str;
    }

    public void setTouchSize(String str) {
        this.f = str;
    }

    public void setTouchType(String str) {
        this.d = str;
    }
}
