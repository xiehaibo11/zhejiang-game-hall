package com.czhj.sdk.common.mta;

public abstract class PointEntityGDPR extends PointEntitySuper {
    private String a;
    private String b;
    private String c;
    private String d;
    private String e;
    private String f;
    private String g;

    public String getAge() {
        return this.c;
    }

    public String getAge_restricted() {
        return this.b;
    }

    public String getGdpr_dialog_region() {
        return this.d;
    }

    public String getGdpr_region() {
        return this.e;
    }

    public String getIs_minor() {
        return this.g;
    }

    public String getIs_unpersonalized() {
        return this.f;
    }

    public String getUser_consent() {
        return this.a;
    }

    public void setAge(String str) {
        this.c = str;
    }

    public void setAge_restricted(String str) {
        this.b = str;
    }

    public void setGdpr_dialog_region(String str) {
        this.d = str;
    }

    public void setGdpr_region(String str) {
        this.e = str;
    }

    public void setIs_minor(String str) {
        this.g = str;
    }

    public void setIs_unpersonalized(String str) {
        this.f = str;
    }

    public void setUser_consent(String str) {
        this.a = str;
    }
}
