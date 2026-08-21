package com.tkay.expressad.exoplayer.g.b;

public final class f extends com.tkay.expressad.exoplayer.g.b.h {
    public static final android.os.Parcelable.Creator<com.tkay.expressad.exoplayer.g.b.f> CREATOR = null;
    public static final java.lang.String a = "GEOB";
    public final java.lang.String b;
    public final java.lang.String c;
    public final java.lang.String d;
    public final byte[] e;


    static {
            com.tkay.expressad.exoplayer.g.b.f$1 r0 = new com.tkay.expressad.exoplayer.g.b.f$1
            r0.<init>()
            com.tkay.expressad.exoplayer.g.b.f.CREATOR = r0
            return
    }

    f(android.os.Parcel r2) {
            r1 = this;
            java.lang.String r0 = "GEOB"
            r1.<init>(r0)
            java.lang.String r0 = r2.readString()
            r1.b = r0
            java.lang.String r0 = r2.readString()
            r1.c = r0
            java.lang.String r0 = r2.readString()
            r1.d = r0
            byte[] r2 = r2.createByteArray()
            r1.e = r2
            return
    }

    public f(java.lang.String r2, java.lang.String r3, java.lang.String r4, byte[] r5) {
            r1 = this;
            java.lang.String r0 = "GEOB"
            r1.<init>(r0)
            r1.b = r2
            r1.c = r3
            r1.d = r4
            r1.e = r5
            return
    }

    public final boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 == 0) goto L3d
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L12
            goto L3d
        L12:
            com.tkay.expressad.exoplayer.g.b.f r5 = (com.tkay.expressad.exoplayer.g.b.f) r5
            java.lang.String r2 = r4.b
            java.lang.String r3 = r5.b
            boolean r2 = com.tkay.expressad.exoplayer.k.af.a(r2, r3)
            if (r2 == 0) goto L3d
            java.lang.String r2 = r4.c
            java.lang.String r3 = r5.c
            boolean r2 = com.tkay.expressad.exoplayer.k.af.a(r2, r3)
            if (r2 == 0) goto L3d
            java.lang.String r2 = r4.d
            java.lang.String r3 = r5.d
            boolean r2 = com.tkay.expressad.exoplayer.k.af.a(r2, r3)
            if (r2 == 0) goto L3d
            byte[] r2 = r4.e
            byte[] r5 = r5.e
            boolean r5 = java.util.Arrays.equals(r2, r5)
            if (r5 == 0) goto L3d
            return r0
        L3d:
            return r1
    }

    public final int hashCode() {
            r3 = this;
            java.lang.String r0 = r3.b
            r1 = 0
            if (r0 == 0) goto La
            int r0 = r0.hashCode()
            goto Lb
        La:
            r0 = r1
        Lb:
            int r0 = r0 + 527
            int r0 = r0 * 31
            java.lang.String r2 = r3.c
            if (r2 == 0) goto L18
            int r2 = r2.hashCode()
            goto L19
        L18:
            r2 = r1
        L19:
            int r0 = r0 + r2
            int r0 = r0 * 31
            java.lang.String r2 = r3.d
            if (r2 == 0) goto L24
            int r1 = r2.hashCode()
        L24:
            int r0 = r0 + r1
            int r0 = r0 * 31
            byte[] r1 = r3.e
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
            java.lang.String r1 = ": mimeType="
            r0.append(r1)
            java.lang.String r1 = r2.b
            r0.append(r1)
            java.lang.String r1 = ", filename="
            r0.append(r1)
            java.lang.String r1 = r2.c
            r0.append(r1)
            java.lang.String r1 = ", description="
            r0.append(r1)
            java.lang.String r1 = r2.d
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public final void writeToParcel(android.os.Parcel r1, int r2) {
            r0 = this;
            java.lang.String r2 = r0.b
            r1.writeString(r2)
            java.lang.String r2 = r0.c
            r1.writeString(r2)
            java.lang.String r2 = r0.d
            r1.writeString(r2)
            byte[] r2 = r0.e
            r1.writeByteArray(r2)
            return
    }
}
