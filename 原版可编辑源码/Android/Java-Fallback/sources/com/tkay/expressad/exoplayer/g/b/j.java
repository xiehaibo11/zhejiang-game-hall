package com.tkay.expressad.exoplayer.g.b;

public final class j extends com.tkay.expressad.exoplayer.g.b.h {
    public static final android.os.Parcelable.Creator<com.tkay.expressad.exoplayer.g.b.j> CREATOR = null;
    public static final java.lang.String a = "PRIV";
    public final java.lang.String b;
    public final byte[] c;


    static {
            com.tkay.expressad.exoplayer.g.b.j$1 r0 = new com.tkay.expressad.exoplayer.g.b.j$1
            r0.<init>()
            com.tkay.expressad.exoplayer.g.b.j.CREATOR = r0
            return
    }

    j(android.os.Parcel r2) {
            r1 = this;
            java.lang.String r0 = "PRIV"
            r1.<init>(r0)
            java.lang.String r0 = r2.readString()
            r1.b = r0
            byte[] r2 = r2.createByteArray()
            r1.c = r2
            return
    }

    public j(java.lang.String r2, byte[] r3) {
            r1 = this;
            java.lang.String r0 = "PRIV"
            r1.<init>(r0)
            r1.b = r2
            r1.c = r3
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
            com.tkay.expressad.exoplayer.g.b.j r5 = (com.tkay.expressad.exoplayer.g.b.j) r5
            java.lang.String r2 = r4.b
            java.lang.String r3 = r5.b
            boolean r2 = com.tkay.expressad.exoplayer.k.af.a(r2, r3)
            if (r2 == 0) goto L29
            byte[] r2 = r4.c
            byte[] r5 = r5.c
            boolean r5 = java.util.Arrays.equals(r2, r5)
            if (r5 == 0) goto L29
            return r0
        L29:
            return r1
    }

    public final int hashCode() {
            r2 = this;
            java.lang.String r0 = r2.b
            if (r0 == 0) goto L9
            int r0 = r0.hashCode()
            goto La
        L9:
            r0 = 0
        La:
            int r0 = r0 + 527
            int r0 = r0 * 31
            byte[] r1 = r2.c
            int r1 = java.util.Arrays.hashCode(r1)
            int r0 = r0 + r1
            return r0
    }

    @Override
    public final java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.g
            r0.append(r1)
            java.lang.String r1 = ": owner="
            r0.append(r1)
            java.lang.String r1 = r2.b
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public final void writeToParcel(android.os.Parcel r1, int r2) {
            r0 = this;
            java.lang.String r2 = r0.b
            r1.writeString(r2)
            byte[] r2 = r0.c
            r1.writeByteArray(r2)
            return
    }
}
