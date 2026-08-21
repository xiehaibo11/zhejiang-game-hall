package com.tkay.expressad.exoplayer.h;

public final class af implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.tkay.expressad.exoplayer.h.af> CREATOR = null;
    public static final com.tkay.expressad.exoplayer.h.af a = null;
    public final int b;
    private final com.tkay.expressad.exoplayer.h.ae[] c;
    private int d;


    static {
            com.tkay.expressad.exoplayer.h.af r0 = new com.tkay.expressad.exoplayer.h.af
            r1 = 0
            com.tkay.expressad.exoplayer.h.ae[] r1 = new com.tkay.expressad.exoplayer.h.ae[r1]
            r0.<init>(r1)
            com.tkay.expressad.exoplayer.h.af.a = r0
            com.tkay.expressad.exoplayer.h.af$1 r0 = new com.tkay.expressad.exoplayer.h.af$1
            r0.<init>()
            com.tkay.expressad.exoplayer.h.af.CREATOR = r0
            return
    }

    af(android.os.Parcel r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.readInt()
            r3.b = r0
            com.tkay.expressad.exoplayer.h.ae[] r0 = new com.tkay.expressad.exoplayer.h.ae[r0]
            r3.c = r0
            r0 = 0
        Le:
            int r1 = r3.b
            if (r0 >= r1) goto L25
            com.tkay.expressad.exoplayer.h.ae[] r1 = r3.c
            java.lang.Class<com.tkay.expressad.exoplayer.h.ae> r2 = com.tkay.expressad.exoplayer.h.ae.class
            java.lang.ClassLoader r2 = r2.getClassLoader()
            android.os.Parcelable r2 = r4.readParcelable(r2)
            com.tkay.expressad.exoplayer.h.ae r2 = (com.tkay.expressad.exoplayer.h.ae) r2
            r1[r0] = r2
            int r0 = r0 + 1
            goto Le
        L25:
            return
    }

    public af(com.tkay.expressad.exoplayer.h.ae... r1) {
            r0 = this;
            r0.<init>()
            r0.c = r1
            int r1 = r1.length
            r0.b = r1
            return
    }

    private boolean a() {
            r1 = this;
            int r0 = r1.b
            if (r0 != 0) goto L6
            r0 = 1
            return r0
        L6:
            r0 = 0
            return r0
    }

    public final int a(com.tkay.expressad.exoplayer.h.ae r3) {
            r2 = this;
            r0 = 0
        L1:
            int r1 = r2.b
            if (r0 >= r1) goto Lf
            com.tkay.expressad.exoplayer.h.ae[] r1 = r2.c
            r1 = r1[r0]
            if (r1 != r3) goto Lc
            return r0
        Lc:
            int r0 = r0 + 1
            goto L1
        Lf:
            r3 = -1
            return r3
    }

    public final com.tkay.expressad.exoplayer.h.ae a(int r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.h.ae[] r0 = r1.c
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
            com.tkay.expressad.exoplayer.h.af r5 = (com.tkay.expressad.exoplayer.h.af) r5
            int r2 = r4.b
            int r3 = r5.b
            if (r2 != r3) goto L25
            com.tkay.expressad.exoplayer.h.ae[] r2 = r4.c
            com.tkay.expressad.exoplayer.h.ae[] r5 = r5.c
            boolean r5 = java.util.Arrays.equals(r2, r5)
            if (r5 == 0) goto L25
            return r0
        L25:
            return r1
    }

    public final int hashCode() {
            r1 = this;
            int r0 = r1.d
            if (r0 != 0) goto Lc
            com.tkay.expressad.exoplayer.h.ae[] r0 = r1.c
            int r0 = java.util.Arrays.hashCode(r0)
            r1.d = r0
        Lc:
            int r0 = r1.d
            return r0
    }

    @Override
    public final void writeToParcel(android.os.Parcel r3, int r4) {
            r2 = this;
            int r4 = r2.b
            r3.writeInt(r4)
            r4 = 0
            r0 = r4
        L7:
            int r1 = r2.b
            if (r0 >= r1) goto L15
            com.tkay.expressad.exoplayer.h.ae[] r1 = r2.c
            r1 = r1[r0]
            r3.writeParcelable(r1, r4)
            int r0 = r0 + 1
            goto L7
        L15:
            return
    }
}
