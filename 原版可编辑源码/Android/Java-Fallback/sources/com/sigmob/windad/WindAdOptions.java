package com.sigmob.windad;

public class WindAdOptions {
    private java.lang.String a;
    private java.lang.String b;
    private java.util.HashMap<java.lang.String, java.lang.String> c;
    private com.sigmob.windad.WindCustomController d;

    public WindAdOptions(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    public java.lang.String getAppId() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public java.lang.String getAppKey() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public com.sigmob.windad.WindCustomController getCustomController() {
            r1 = this;
            com.sigmob.windad.WindCustomController r0 = r1.d
            return r0
    }

    public java.util.HashMap<java.lang.String, java.lang.String> getExtData() {
            r1 = this;
            java.util.HashMap<java.lang.String, java.lang.String> r0 = r1.c
            return r0
    }

    public com.sigmob.windad.WindAdOptions setCustomController(com.sigmob.windad.WindCustomController r1) {
            r0 = this;
            r0.d = r1
            return r0
    }

    public com.sigmob.windad.WindAdOptions setExtData(java.util.HashMap<java.lang.String, java.lang.String> r1) {
            r0 = this;
            r0.c = r1
            return r0
    }
}
