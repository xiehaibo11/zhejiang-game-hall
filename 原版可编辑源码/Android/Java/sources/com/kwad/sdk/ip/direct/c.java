package com.kwad.sdk.ip.direct;

public final class c implements Comparable<c> {
    private String ip;
    private boolean success;
    private int weight;
    private float aCI = -1.0f;
    private int aCN = 20;
    private int aCM = 3;
    private StringBuffer aCO = new StringBuffer();

    public c(String str) {
        this.ip = str;
    }

    @Override
    private int compareTo(c cVar) {
        return (int) (this.aCI - cVar.aCI);
    }

    public final int Ga() {
        return this.aCM;
    }

    public final float Gb() {
        return this.aCI;
    }

    public final void bs(boolean z) {
        this.success = z;
    }

    public final void cF(int i) {
        this.weight = i;
    }

    public final String getIp() {
        return this.ip;
    }

    public final int getWeight() {
        return this.weight;
    }

    public final void i(float f) {
        this.aCI = f;
    }

    public final boolean isSuccess() {
        return this.success;
    }

    public final String toString() {
        return "PingNetEntity{ip='" + this.ip + "', pingCount=" + this.aCM + ", pingWaitTime=" + this.aCN + ", pingTime='" + this.aCI + " ms', success=" + this.success + '}';
    }
}
