package com.tkay.expressad.exoplayer.l;

public final class b implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.tkay.expressad.exoplayer.l.b> CREATOR = null;
    public final int a;
    public final int b;
    public final int c;
    public final byte[] d;
    private int e;


    static {
            com.tkay.expressad.exoplayer.l.b$1 r0 = new com.tkay.expressad.exoplayer.l.b$1
            r0.<init>()
            com.tkay.expressad.exoplayer.l.b.CREATOR = r0
            return
    }

    private b(int r1, int r2, int r3, byte[] r4) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r0.c = r3
            r0.d = r4
            return
    }

    b(android.os.Parcel r2) {
            r1 = this;
            r1.<init>()
            int r0 = r2.readInt()
            r1.a = r0
            int r0 = r2.readInt()
            r1.b = r0
            int r0 = r2.readInt()
            r1.c = r0
            boolean r0 = com.tkay.expressad.exoplayer.k.af.a(r2)
            if (r0 == 0) goto L20
            byte[] r2 = r2.createByteArray()
            goto L21
        L20:
            r2 = 0
        L21:
            r1.d = r2
            return
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
            if (r5 == 0) goto L31
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L12
            goto L31
        L12:
            com.tkay.expressad.exoplayer.l.b r5 = (com.tkay.expressad.exoplayer.l.b) r5
            int r2 = r4.a
            int r3 = r5.a
            if (r2 != r3) goto L31
            int r2 = r4.b
            int r3 = r5.b
            if (r2 != r3) goto L31
            int r2 = r4.c
            int r3 = r5.c
            if (r2 != r3) goto L31
            byte[] r2 = r4.d
            byte[] r5 = r5.d
            boolean r5 = java.util.Arrays.equals(r2, r5)
            if (r5 == 0) goto L31
            return r0
        L31:
            return r1
    }

    public final int hashCode() {
            r2 = this;
            int r0 = r2.e
            if (r0 != 0) goto L1d
            int r0 = r2.a
            int r0 = r0 + 527
            int r0 = r0 * 31
            int r1 = r2.b
            int r0 = r0 + r1
            int r0 = r0 * 31
            int r1 = r2.c
            int r0 = r0 + r1
            int r0 = r0 * 31
            byte[] r1 = r2.d
            int r1 = java.util.Arrays.hashCode(r1)
            int r0 = r0 + r1
            r2.e = r0
        L1d:
            int r0 = r2.e
            return r0
    }

    public final java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "ColorInfo("
            r0.<init>(r1)
            int r1 = r3.a
            r0.append(r1)
            java.lang.String r1 = ", "
            r0.append(r1)
            int r2 = r3.b
            r0.append(r2)
            r0.append(r1)
            int r2 = r3.c
            r0.append(r2)
            r0.append(r1)
            byte[] r1 = r3.d
            if (r1 == 0) goto L27
            r1 = 1
            goto L28
        L27:
            r1 = 0
        L28:
            r0.append(r1)
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public final void writeToParcel(android.os.Parcel r1, int r2) {
            r0 = this;
            int r2 = r0.a
            r1.writeInt(r2)
            int r2 = r0.b
            r1.writeInt(r2)
            int r2 = r0.c
            r1.writeInt(r2)
            byte[] r2 = r0.d
            if (r2 == 0) goto L15
            r2 = 1
            goto L16
        L15:
            r2 = 0
        L16:
            com.tkay.expressad.exoplayer.k.af.a(r1, r2)
            byte[] r2 = r0.d
            if (r2 == 0) goto L20
            r1.writeByteArray(r2)
        L20:
            return
    }
}
