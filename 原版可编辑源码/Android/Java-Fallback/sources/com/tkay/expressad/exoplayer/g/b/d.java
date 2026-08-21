package com.tkay.expressad.exoplayer.g.b;

public final class d extends com.tkay.expressad.exoplayer.g.b.h {
    public static final android.os.Parcelable.Creator<com.tkay.expressad.exoplayer.g.b.d> CREATOR = null;
    public static final java.lang.String a = "CTOC";
    public final java.lang.String b;
    public final boolean c;
    public final boolean d;
    public final java.lang.String[] e;
    private final com.tkay.expressad.exoplayer.g.b.h[] f;


    static {
            com.tkay.expressad.exoplayer.g.b.d$1 r0 = new com.tkay.expressad.exoplayer.g.b.d$1
            r0.<init>()
            com.tkay.expressad.exoplayer.g.b.d.CREATOR = r0
            return
    }

    d(android.os.Parcel r5) {
            r4 = this;
            java.lang.String r0 = "CTOC"
            r4.<init>(r0)
            java.lang.String r0 = r5.readString()
            r4.b = r0
            byte r0 = r5.readByte()
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L15
            r0 = r1
            goto L16
        L15:
            r0 = r2
        L16:
            r4.c = r0
            byte r0 = r5.readByte()
            if (r0 == 0) goto L1f
            goto L20
        L1f:
            r1 = r2
        L20:
            r4.d = r1
            java.lang.String[] r0 = r5.createStringArray()
            r4.e = r0
            int r0 = r5.readInt()
            com.tkay.expressad.exoplayer.g.b.h[] r1 = new com.tkay.expressad.exoplayer.g.b.h[r0]
            r4.f = r1
        L30:
            if (r2 >= r0) goto L45
            com.tkay.expressad.exoplayer.g.b.h[] r1 = r4.f
            java.lang.Class<com.tkay.expressad.exoplayer.g.b.h> r3 = com.tkay.expressad.exoplayer.g.b.h.class
            java.lang.ClassLoader r3 = r3.getClassLoader()
            android.os.Parcelable r3 = r5.readParcelable(r3)
            com.tkay.expressad.exoplayer.g.b.h r3 = (com.tkay.expressad.exoplayer.g.b.h) r3
            r1[r2] = r3
            int r2 = r2 + 1
            goto L30
        L45:
            return
    }

    public d(java.lang.String r2, boolean r3, boolean r4, java.lang.String[] r5, com.tkay.expressad.exoplayer.g.b.h[] r6) {
            r1 = this;
            java.lang.String r0 = "CTOC"
            r1.<init>(r0)
            r1.b = r2
            r1.c = r3
            r1.d = r4
            r1.e = r5
            r1.f = r6
            return
    }

    private int a() {
            r1 = this;
            com.tkay.expressad.exoplayer.g.b.h[] r0 = r1.f
            int r0 = r0.length
            return r0
    }

    private com.tkay.expressad.exoplayer.g.b.h a(int r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.g.b.h[] r0 = r1.f
            r2 = r0[r2]
            return r2
    }

    public final boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 == 0) goto L3f
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L12
            goto L3f
        L12:
            com.tkay.expressad.exoplayer.g.b.d r5 = (com.tkay.expressad.exoplayer.g.b.d) r5
            boolean r2 = r4.c
            boolean r3 = r5.c
            if (r2 != r3) goto L3f
            boolean r2 = r4.d
            boolean r3 = r5.d
            if (r2 != r3) goto L3f
            java.lang.String r2 = r4.b
            java.lang.String r3 = r5.b
            boolean r2 = com.tkay.expressad.exoplayer.k.af.a(r2, r3)
            if (r2 == 0) goto L3f
            java.lang.String[] r2 = r4.e
            java.lang.String[] r3 = r5.e
            boolean r2 = java.util.Arrays.equals(r2, r3)
            if (r2 == 0) goto L3f
            com.tkay.expressad.exoplayer.g.b.h[] r2 = r4.f
            com.tkay.expressad.exoplayer.g.b.h[] r5 = r5.f
            boolean r5 = java.util.Arrays.equals(r2, r5)
            if (r5 == 0) goto L3f
            return r0
        L3f:
            return r1
    }

    public final int hashCode() {
            r2 = this;
            boolean r0 = r2.c
            int r0 = r0 + 527
            int r0 = r0 * 31
            boolean r1 = r2.d
            int r0 = r0 + r1
            int r0 = r0 * 31
            java.lang.String r1 = r2.b
            if (r1 == 0) goto L14
            int r1 = r1.hashCode()
            goto L15
        L14:
            r1 = 0
        L15:
            int r0 = r0 + r1
            return r0
    }

    @Override
    public final void writeToParcel(android.os.Parcel r5, int r6) {
            r4 = this;
            java.lang.String r6 = r4.b
            r5.writeString(r6)
            boolean r6 = r4.c
            byte r6 = (byte) r6
            r5.writeByte(r6)
            boolean r6 = r4.d
            byte r6 = (byte) r6
            r5.writeByte(r6)
            java.lang.String[] r6 = r4.e
            r5.writeStringArray(r6)
            com.tkay.expressad.exoplayer.g.b.h[] r6 = r4.f
            int r6 = r6.length
            r5.writeInt(r6)
            com.tkay.expressad.exoplayer.g.b.h[] r6 = r4.f
            int r0 = r6.length
            r1 = 0
            r2 = r1
        L21:
            if (r2 >= r0) goto L2b
            r3 = r6[r2]
            r5.writeParcelable(r3, r1)
            int r2 = r2 + 1
            goto L21
        L2b:
            return
    }
}
