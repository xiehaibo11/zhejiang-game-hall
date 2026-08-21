package com.tkay.expressad.exoplayer.g.b;

public final class b extends com.tkay.expressad.exoplayer.g.b.h {
    public static final android.os.Parcelable.Creator<com.tkay.expressad.exoplayer.g.b.b> CREATOR = null;
    public final byte[] a;


    static {
            com.tkay.expressad.exoplayer.g.b.b$1 r0 = new com.tkay.expressad.exoplayer.g.b.b$1
            r0.<init>()
            com.tkay.expressad.exoplayer.g.b.b.CREATOR = r0
            return
    }

    b(android.os.Parcel r2) {
            r1 = this;
            java.lang.String r0 = r2.readString()
            r1.<init>(r0)
            byte[] r2 = r2.createByteArray()
            r1.a = r2
            return
    }

    public b(java.lang.String r1, byte[] r2) {
            r0 = this;
            r0.<init>(r1)
            r0.a = r2
            return
    }

    public final boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 == 0) goto L29
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L12
            goto L29
        L12:
            com.tkay.expressad.exoplayer.g.b.b r5 = (com.tkay.expressad.exoplayer.g.b.b) r5
            java.lang.String r2 = r4.g
            java.lang.String r3 = r5.g
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L29
            byte[] r2 = r4.a
            byte[] r5 = r5.a
            boolean r5 = java.util.Arrays.equals(r2, r5)
            if (r5 == 0) goto L29
            return r0
        L29:
            return r1
    }

    public final int hashCode() {
            r2 = this;
            java.lang.String r0 = r2.g
            int r0 = r0.hashCode()
            int r0 = r0 + 527
            int r0 = r0 * 31
            byte[] r1 = r2.a
            int r1 = java.util.Arrays.hashCode(r1)
            int r0 = r0 + r1
            return r0
    }

    @Override
    public final void writeToParcel(android.os.Parcel r1, int r2) {
            r0 = this;
            java.lang.String r2 = r0.g
            r1.writeString(r2)
            byte[] r2 = r0.a
            r1.writeByteArray(r2)
            return
    }
}
