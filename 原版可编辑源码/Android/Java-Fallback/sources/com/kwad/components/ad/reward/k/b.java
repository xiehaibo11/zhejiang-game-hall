package com.kwad.components.ad.reward.k;

public abstract class b extends java.util.Observable implements com.kwad.components.ad.reward.k.c, com.kwad.sdk.core.b {
    private boolean xS;
    protected java.lang.String xT;
    protected java.lang.String xU;

    public b() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.xS = r0
            return
    }

    private boolean jC() {
            r1 = this;
            boolean r0 = r1.xS
            return r0
    }

    private void jD() {
            r1 = this;
            r1.setChanged()
            boolean r0 = r1.xS
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            r1.notifyObservers(r0)
            return
    }

    public boolean isCompleted() {
            r1 = this;
            boolean r0 = r1.jC()
            return r0
    }

    @Override
    public final java.lang.String jA() {
            r1 = this;
            java.lang.String r0 = r1.xT
            return r0
    }

    @Override
    public final java.lang.String jB() {
            r1 = this;
            java.lang.String r0 = r1.xU
            return r0
    }

    public final void jy() {
            r1 = this;
            boolean r0 = r1.xS
            if (r0 != 0) goto La
            r0 = 1
            r1.xS = r0
            r1.jD()
        La:
            return
    }

    public final void jz() {
            r1 = this;
            boolean r0 = r1.xS
            if (r0 == 0) goto La
            r0 = 0
            r1.xS = r0
            r1.jD()
        La:
            return
    }

    public void parseJson(org.json.JSONObject r2) {
            r1 = this;
            java.lang.String r0 = "selfCompleted"
            boolean r2 = r2.optBoolean(r0)     // Catch: java.lang.Throwable -> L8
            r1.xS = r2     // Catch: java.lang.Throwable -> L8
        L8:
            return
    }

    public org.json.JSONObject toJson() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            boolean r1 = r3.xS
            java.lang.String r2 = "selfCompleted"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            return r0
    }
}
