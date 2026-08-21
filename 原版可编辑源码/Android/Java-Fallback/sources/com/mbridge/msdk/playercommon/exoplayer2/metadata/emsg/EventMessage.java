package com.mbridge.msdk.playercommon.exoplayer2.metadata.emsg;

public final class EventMessage implements com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata.Entry {
    public static final android.os.Parcelable.Creator<com.mbridge.msdk.playercommon.exoplayer2.metadata.emsg.EventMessage> CREATOR = null;
    public final long durationMs;
    private int hashCode;
    public final long id;
    public final byte[] messageData;
    public final long presentationTimeUs;
    public final java.lang.String schemeIdUri;
    public final java.lang.String value;


    static {
            com.mbridge.msdk.playercommon.exoplayer2.metadata.emsg.EventMessage$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.emsg.EventMessage$1
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.metadata.emsg.EventMessage.CREATOR = r0
            return
    }

    EventMessage(android.os.Parcel r3) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = r3.readString()
            r2.schemeIdUri = r0
            java.lang.String r0 = r3.readString()
            r2.value = r0
            long r0 = r3.readLong()
            r2.presentationTimeUs = r0
            long r0 = r3.readLong()
            r2.durationMs = r0
            long r0 = r3.readLong()
            r2.id = r0
            byte[] r3 = r3.createByteArray()
            r2.messageData = r3
            return
    }

    public EventMessage(java.lang.String r1, java.lang.String r2, long r3, long r5, byte[] r7, long r8) {
            r0 = this;
            r0.<init>()
            r0.schemeIdUri = r1
            r0.value = r2
            r0.durationMs = r3
            r0.id = r5
            r0.messageData = r7
            r0.presentationTimeUs = r8
            return
    }

    @Override
    public final int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public final boolean equals(java.lang.Object r7) {
            r6 = this;
            r0 = 1
            if (r6 != r7) goto L4
            return r0
        L4:
            r1 = 0
            if (r7 == 0) goto L4d
            java.lang.Class r2 = r6.getClass()
            java.lang.Class r3 = r7.getClass()
            if (r2 == r3) goto L12
            goto L4d
        L12:
            com.mbridge.msdk.playercommon.exoplayer2.metadata.emsg.EventMessage r7 = (com.mbridge.msdk.playercommon.exoplayer2.metadata.emsg.EventMessage) r7
            long r2 = r6.presentationTimeUs
            long r4 = r7.presentationTimeUs
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 != 0) goto L4b
            long r2 = r6.durationMs
            long r4 = r7.durationMs
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 != 0) goto L4b
            long r2 = r6.id
            long r4 = r7.id
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 != 0) goto L4b
            java.lang.String r2 = r6.schemeIdUri
            java.lang.String r3 = r7.schemeIdUri
            boolean r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.areEqual(r2, r3)
            if (r2 == 0) goto L4b
            java.lang.String r2 = r6.value
            java.lang.String r3 = r7.value
            boolean r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.areEqual(r2, r3)
            if (r2 == 0) goto L4b
            byte[] r2 = r6.messageData
            byte[] r7 = r7.messageData
            boolean r7 = java.util.Arrays.equals(r2, r7)
            if (r7 == 0) goto L4b
            goto L4c
        L4b:
            r0 = r1
        L4c:
            return r0
        L4d:
            return r1
    }

    public final int hashCode() {
            r6 = this;
            int r0 = r6.hashCode
            if (r0 != 0) goto L45
            r0 = 527(0x20f, float:7.38E-43)
            java.lang.String r1 = r6.schemeIdUri
            r2 = 0
            if (r1 == 0) goto L10
            int r1 = r1.hashCode()
            goto L11
        L10:
            r1 = r2
        L11:
            int r0 = r0 + r1
            int r0 = r0 * 31
            java.lang.String r1 = r6.value
            if (r1 == 0) goto L1c
            int r2 = r1.hashCode()
        L1c:
            int r0 = r0 + r2
            int r0 = r0 * 31
            long r1 = r6.presentationTimeUs
            r3 = 32
            long r4 = r1 >>> r3
            long r1 = r1 ^ r4
            int r1 = (int) r1
            int r0 = r0 + r1
            int r0 = r0 * 31
            long r1 = r6.durationMs
            long r4 = r1 >>> r3
            long r1 = r1 ^ r4
            int r1 = (int) r1
            int r0 = r0 + r1
            int r0 = r0 * 31
            long r1 = r6.id
            long r3 = r1 >>> r3
            long r1 = r1 ^ r3
            int r1 = (int) r1
            int r0 = r0 + r1
            int r0 = r0 * 31
            byte[] r1 = r6.messageData
            int r1 = java.util.Arrays.hashCode(r1)
            int r0 = r0 + r1
            r6.hashCode = r0
        L45:
            int r0 = r6.hashCode
            return r0
    }

    public final java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "EMSG: scheme="
            r0.append(r1)
            java.lang.String r1 = r3.schemeIdUri
            r0.append(r1)
            java.lang.String r1 = ", id="
            r0.append(r1)
            long r1 = r3.id
            r0.append(r1)
            java.lang.String r1 = ", value="
            r0.append(r1)
            java.lang.String r1 = r3.value
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public final void writeToParcel(android.os.Parcel r3, int r4) {
            r2 = this;
            java.lang.String r4 = r2.schemeIdUri
            r3.writeString(r4)
            java.lang.String r4 = r2.value
            r3.writeString(r4)
            long r0 = r2.presentationTimeUs
            r3.writeLong(r0)
            long r0 = r2.durationMs
            r3.writeLong(r0)
            long r0 = r2.id
            r3.writeLong(r0)
            byte[] r4 = r2.messageData
            r3.writeByteArray(r4)
            return
    }
}
