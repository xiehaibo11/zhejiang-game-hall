package com.mbridge.msdk.playercommon.exoplayer2.metadata.scte35;

public abstract class SpliceCommand implements com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata.Entry {
    public SpliceCommand() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "SCTE-35 splice command: type="
            r0.append(r1)
            java.lang.Class r1 = r2.getClass()
            java.lang.String r1 = r1.getSimpleName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
