package com.kwad.sdk.ip.direct;

public final class c implements java.lang.Comparable<com.kwad.sdk.ip.direct.c> {
    private float aCI;
    private int aCM;
    private int aCN;
    private java.lang.StringBuffer aCO;
    private java.lang.String ip;
    private boolean success;
    private int weight;

    public c(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            r0 = -1082130432(0xffffffffbf800000, float:-1.0)
            r1.aCI = r0
            r1.ip = r2
            r2 = 20
            r1.aCN = r2
            r2 = 3
            r1.aCM = r2
            java.lang.StringBuffer r2 = new java.lang.StringBuffer
            r2.<init>()
            r1.aCO = r2
            return
    }

    private int a(com.kwad.sdk.ip.direct.c r2) {
            r1 = this;
            float r0 = r1.aCI
            float r2 = r2.aCI
            float r0 = r0 - r2
            int r2 = (int) r0
            return r2
    }

    public final int Ga() {
            r1 = this;
            int r0 = r1.aCM
            return r0
    }

    public final float Gb() {
            r1 = this;
            float r0 = r1.aCI
            return r0
    }

    public final void bs(boolean r1) {
            r0 = this;
            r0.success = r1
            return
    }

    public final void cF(int r1) {
            r0 = this;
            r0.weight = r1
            return
    }

    @Override
    public final int compareTo(com.kwad.sdk.ip.direct.c r1) {
            r0 = this;
            com.kwad.sdk.ip.direct.c r1 = (com.kwad.sdk.ip.direct.c) r1
            int r1 = r0.a(r1)
            return r1
    }

    public final java.lang.String getIp() {
            r1 = this;
            java.lang.String r0 = r1.ip
            return r0
    }

    public final int getWeight() {
            r1 = this;
            int r0 = r1.weight
            return r0
    }

    public final void i(float r1) {
            r0 = this;
            r0.aCI = r1
            return
    }

    public final boolean isSuccess() {
            r1 = this;
            boolean r0 = r1.success
            return r0
    }

    public final java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "PingNetEntity{ip='"
            r0.<init>(r1)
            java.lang.String r1 = r2.ip
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r1 = ", pingCount="
            r0.append(r1)
            int r1 = r2.aCM
            r0.append(r1)
            java.lang.String r1 = ", pingWaitTime="
            r0.append(r1)
            int r1 = r2.aCN
            r0.append(r1)
            java.lang.String r1 = ", pingTime='"
            r0.append(r1)
            float r1 = r2.aCI
            r0.append(r1)
            java.lang.String r1 = " ms'"
            r0.append(r1)
            java.lang.String r1 = ", success="
            r0.append(r1)
            boolean r1 = r2.success
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
