package com.tkay.expressad.exoplayer.g.b;

public final class c extends com.tkay.expressad.exoplayer.g.b.h {
    public static final android.os.Parcelable.Creator<com.tkay.expressad.exoplayer.g.b.c> CREATOR = null;
    public static final java.lang.String a = "CHAP";
    public final java.lang.String b;
    public final int c;
    public final int d;
    public final long e;
    public final long f;
    private final com.tkay.expressad.exoplayer.g.b.h[] h;


    static {
            com.tkay.expressad.exoplayer.g.b.c$1 r0 = new com.tkay.expressad.exoplayer.g.b.c$1
            r0.<init>()
            com.tkay.expressad.exoplayer.g.b.c.CREATOR = r0
            return
    }

    c(android.os.Parcel r5) {
            r4 = this;
            java.lang.String r0 = "CHAP"
            r4.<init>(r0)
            java.lang.String r0 = r5.readString()
            r4.b = r0
            int r0 = r5.readInt()
            r4.c = r0
            int r0 = r5.readInt()
            r4.d = r0
            long r0 = r5.readLong()
            r4.e = r0
            long r0 = r5.readLong()
            r4.f = r0
            int r0 = r5.readInt()
            com.tkay.expressad.exoplayer.g.b.h[] r1 = new com.tkay.expressad.exoplayer.g.b.h[r0]
            r4.h = r1
            r1 = 0
        L2c:
            if (r1 >= r0) goto L41
            com.tkay.expressad.exoplayer.g.b.h[] r2 = r4.h
            java.lang.Class<com.tkay.expressad.exoplayer.g.b.h> r3 = com.tkay.expressad.exoplayer.g.b.h.class
            java.lang.ClassLoader r3 = r3.getClassLoader()
            android.os.Parcelable r3 = r5.readParcelable(r3)
            com.tkay.expressad.exoplayer.g.b.h r3 = (com.tkay.expressad.exoplayer.g.b.h) r3
            r2[r1] = r3
            int r1 = r1 + 1
            goto L2c
        L41:
            return
    }

    public c(java.lang.String r2, int r3, int r4, long r5, long r7, com.tkay.expressad.exoplayer.g.b.h[] r9) {
            r1 = this;
            java.lang.String r0 = "CHAP"
            r1.<init>(r0)
            r1.b = r2
            r1.c = r3
            r1.d = r4
            r1.e = r5
            r1.f = r7
            r1.h = r9
            return
    }

    private int a() {
            r1 = this;
            com.tkay.expressad.exoplayer.g.b.h[] r0 = r1.h
            int r0 = r0.length
            return r0
    }

    private com.tkay.expressad.exoplayer.g.b.h a(int r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.g.b.h[] r0 = r1.h
            r2 = r0[r2]
            return r2
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
            if (r7 == 0) goto L45
            java.lang.Class r2 = r6.getClass()
            java.lang.Class r3 = r7.getClass()
            if (r2 == r3) goto L12
            goto L45
        L12:
            com.tkay.expressad.exoplayer.g.b.c r7 = (com.tkay.expressad.exoplayer.g.b.c) r7
            int r2 = r6.c
            int r3 = r7.c
            if (r2 != r3) goto L45
            int r2 = r6.d
            int r3 = r7.d
            if (r2 != r3) goto L45
            long r2 = r6.e
            long r4 = r7.e
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 != 0) goto L45
            long r2 = r6.f
            long r4 = r7.f
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 != 0) goto L45
            java.lang.String r2 = r6.b
            java.lang.String r3 = r7.b
            boolean r2 = com.tkay.expressad.exoplayer.k.af.a(r2, r3)
            if (r2 == 0) goto L45
            com.tkay.expressad.exoplayer.g.b.h[] r2 = r6.h
            com.tkay.expressad.exoplayer.g.b.h[] r7 = r7.h
            boolean r7 = java.util.Arrays.equals(r2, r7)
            if (r7 == 0) goto L45
            return r0
        L45:
            return r1
    }

    public final int hashCode() {
            r3 = this;
            int r0 = r3.c
            int r0 = r0 + 527
            int r0 = r0 * 31
            int r1 = r3.d
            int r0 = r0 + r1
            int r0 = r0 * 31
            long r1 = r3.e
            int r1 = (int) r1
            int r0 = r0 + r1
            int r0 = r0 * 31
            long r1 = r3.f
            int r1 = (int) r1
            int r0 = r0 + r1
            int r0 = r0 * 31
            java.lang.String r1 = r3.b
            if (r1 == 0) goto L20
            int r1 = r1.hashCode()
            goto L21
        L20:
            r1 = 0
        L21:
            int r0 = r0 + r1
            return r0
    }

    @Override
    public final void writeToParcel(android.os.Parcel r5, int r6) {
            r4 = this;
            java.lang.String r6 = r4.b
            r5.writeString(r6)
            int r6 = r4.c
            r5.writeInt(r6)
            int r6 = r4.d
            r5.writeInt(r6)
            long r0 = r4.e
            r5.writeLong(r0)
            long r0 = r4.f
            r5.writeLong(r0)
            com.tkay.expressad.exoplayer.g.b.h[] r6 = r4.h
            int r6 = r6.length
            r5.writeInt(r6)
            com.tkay.expressad.exoplayer.g.b.h[] r6 = r4.h
            int r0 = r6.length
            r1 = 0
            r2 = r1
        L24:
            if (r2 >= r0) goto L2e
            r3 = r6[r2]
            r5.writeParcelable(r3, r1)
            int r2 = r2 + 1
            goto L24
        L2e:
            return
    }
}
