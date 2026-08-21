package com.czhj.sdk.common.mta;

public abstract class PointEntityCrash extends PointEntitySuper {
    private String a;

    public String getCrashMessage() {
        return this.a;
    }

    public void setCrashMessage(String str) {
        this.a = str;
    }
}
