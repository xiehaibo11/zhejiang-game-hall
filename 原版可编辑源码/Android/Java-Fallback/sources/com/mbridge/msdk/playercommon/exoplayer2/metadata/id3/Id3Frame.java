package com.mbridge.msdk.playercommon.exoplayer2.metadata.id3;

public abstract class Id3Frame implements com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata.Entry {
    public final java.lang.String id;

    public Id3Frame(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            java.lang.Object r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r1)
            java.lang.String r1 = (java.lang.String) r1
            r0.id = r1
            return
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.id
            return r0
    }
}
