package com.tkay.expressad.exoplayer.h;

public final class ae implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.tkay.expressad.exoplayer.h.ae> CREATOR = null;
    public final int a;
    private final com.tkay.expressad.exoplayer.m[] b;
    private int c;


    static {
            com.tkay.expressad.exoplayer.h.ae$1 r0 = new com.tkay.expressad.exoplayer.h.ae$1
            r0.<init>()
            com.tkay.expressad.exoplayer.h.ae.CREATOR = r0
            return
    }

    ae(android.os.Parcel r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.readInt()
            r3.a = r0
            com.tkay.expressad.exoplayer.m[] r0 = new com.tkay.expressad.exoplayer.m[r0]
            r3.b = r0
            r0 = 0
        Le:
            int r1 = r3.a
            if (r0 >= r1) goto L25
            com.tkay.expressad.exoplayer.m[] r1 = r3.b
            java.lang.Class<com.tkay.expressad.exoplayer.m> r2 = com.tkay.expressad.exoplayer.m.class
            java.lang.ClassLoader r2 = r2.getClassLoader()
            android.os.Parcelable r2 = r4.readParcelable(r2)
            com.tkay.expressad.exoplayer.m r2 = (com.tkay.expressad.exoplayer.m) r2
            r1[r0] = r2
            int r0 = r0 + 1
            goto Le
        L25:
            return
    }

    public ae(com.tkay.expressad.exoplayer.m... r2) {
            r1 = this;
            r1.<init>()
            r0 = 1
            com.tkay.expressad.exoplayer.k.a.b(r0)
            r1.b = r2
            r1.a = r0
            return
    }

    public final int a(com.tkay.expressad.exoplayer.m r4) {
            r3 = this;
            r0 = 0
        L1:
            com.tkay.expressad.exoplayer.m[] r1 = r3.b
            int r2 = r1.length
            if (r0 >= r2) goto Le
            r1 = r1[r0]
            if (r4 != r1) goto Lb
            return r0
        Lb:
            int r0 = r0 + 1
            goto L1
        Le:
            r4 = -1
            return r4
    }

    public final com.tkay.expressad.exoplayer.m a(int r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.m[] r0 = r1.b
            r2 = r0[r2]
            return r2
    }

    @Override
    public final int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public final boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 == 0) goto L25
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L12
            goto L25
        L12:
            com.tkay.expressad.exoplayer.h.ae r5 = (com.tkay.expressad.exoplayer.h.ae) r5
            int r2 = r4.a
            int r3 = r5.a
            if (r2 != r3) goto L25
            com.tkay.expressad.exoplayer.m[] r2 = r4.b
            com.tkay.expressad.exoplayer.m[] r5 = r5.b
            boolean r5 = java.util.Arrays.equals(r2, r5)
            if (r5 == 0) goto L25
            return r0
        L25:
            return r1
    }

    public final int hashCode() {
            r1 = this;
            int r0 = r1.c
            if (r0 != 0) goto Le
            com.tkay.expressad.exoplayer.m[] r0 = r1.b
            int r0 = java.util.Arrays.hashCode(r0)
            int r0 = r0 + 527
            r1.c = r0
        Le:
            int r0 = r1.c
            return r0
    }

    @Override
    public final void writeToParcel(android.os.Parcel r3, int r4) {
            r2 = this;
            int r4 = r2.a
            r3.writeInt(r4)
            r4 = 0
            r0 = r4
        L7:
            int r1 = r2.a
            if (r0 >= r1) goto L15
            com.tkay.expressad.exoplayer.m[] r1 = r2.b
            r1 = r1[r0]
            r3.writeParcelable(r1, r4)
            int r0 = r0 + 1
            goto L7
        L15:
            return
    }
}
