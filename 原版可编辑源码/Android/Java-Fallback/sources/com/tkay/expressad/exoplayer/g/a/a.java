package com.tkay.expressad.exoplayer.g.a;

public final class a implements com.tkay.expressad.exoplayer.g.a.a {
    public static final android.os.Parcelable.Creator<com.tkay.expressad.exoplayer.g.a.a> CREATOR = null;
    public final java.lang.String a;
    public final java.lang.String b;
    public final long c;
    public final long d;
    public final long e;
    public final byte[] f;
    private int g;


    static {
            com.tkay.expressad.exoplayer.g.a.a$1 r0 = new com.tkay.expressad.exoplayer.g.a.a$1
            r0.<init>()
            com.tkay.expressad.exoplayer.g.a.a.CREATOR = r0
            return
    }

    a(android.os.Parcel r3) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = r3.readString()
            r2.a = r0
            java.lang.String r0 = r3.readString()
            r2.b = r0
            long r0 = r3.readLong()
            r2.d = r0
            long r0 = r3.readLong()
            r2.c = r0
            long r0 = r3.readLong()
            r2.e = r0
            byte[] r3 = r3.createByteArray()
            r2.f = r3
            return
    }

    public a(java.lang.String r1, java.lang.String r2, long r3, long r5, byte[] r7, long r8) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r0.c = r3
            r0.e = r5
            r0.f = r7
            r0.d = r8
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
            if (r7 == 0) goto L4b
            java.lang.Class r2 = r6.getClass()
            java.lang.Class r3 = r7.getClass()
            if (r2 == r3) goto L12
            goto L4b
        L12:
            com.tkay.expressad.exoplayer.g.a.a r7 = (com.tkay.expressad.exoplayer.g.a.a) r7
            long r2 = r6.d
            long r4 = r7.d
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 != 0) goto L4b
            long r2 = r6.c
            long r4 = r7.c
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 != 0) goto L4b
            long r2 = r6.e
            long r4 = r7.e
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 != 0) goto L4b
            java.lang.String r2 = r6.a
            java.lang.String r3 = r7.a
            boolean r2 = com.tkay.expressad.exoplayer.k.af.a(r2, r3)
            if (r2 == 0) goto L4b
            java.lang.String r2 = r6.b
            java.lang.String r3 = r7.b
            boolean r2 = com.tkay.expressad.exoplayer.k.af.a(r2, r3)
            if (r2 == 0) goto L4b
            byte[] r2 = r6.f
            byte[] r7 = r7.f
            boolean r7 = java.util.Arrays.equals(r2, r7)
            if (r7 == 0) goto L4b
            return r0
        L4b:
            return r1
    }

    public final int hashCode() {
            r6 = this;
            int r0 = r6.g
            if (r0 != 0) goto L44
            java.lang.String r0 = r6.a
            r1 = 0
            if (r0 == 0) goto Le
            int r0 = r0.hashCode()
            goto Lf
        Le:
            r0 = r1
        Lf:
            int r0 = r0 + 527
            int r0 = r0 * 31
            java.lang.String r2 = r6.b
            if (r2 == 0) goto L1b
            int r1 = r2.hashCode()
        L1b:
            int r0 = r0 + r1
            int r0 = r0 * 31
            long r1 = r6.d
            r3 = 32
            long r4 = r1 >>> r3
            long r1 = r1 ^ r4
            int r1 = (int) r1
            int r0 = r0 + r1
            int r0 = r0 * 31
            long r1 = r6.c
            long r4 = r1 >>> r3
            long r1 = r1 ^ r4
            int r1 = (int) r1
            int r0 = r0 + r1
            int r0 = r0 * 31
            long r1 = r6.e
            long r3 = r1 >>> r3
            long r1 = r1 ^ r3
            int r1 = (int) r1
            int r0 = r0 + r1
            int r0 = r0 * 31
            byte[] r1 = r6.f
            int r1 = java.util.Arrays.hashCode(r1)
            int r0 = r0 + r1
            r6.g = r0
        L44:
            int r0 = r6.g
            return r0
    }

    public final java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "EMSG: scheme="
            r0.<init>(r1)
            java.lang.String r1 = r3.a
            r0.append(r1)
            java.lang.String r1 = ", id="
            r0.append(r1)
            long r1 = r3.e
            r0.append(r1)
            java.lang.String r1 = ", value="
            r0.append(r1)
            java.lang.String r1 = r3.b
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public final void writeToParcel(android.os.Parcel r3, int r4) {
            r2 = this;
            java.lang.String r4 = r2.a
            r3.writeString(r4)
            java.lang.String r4 = r2.b
            r3.writeString(r4)
            long r0 = r2.d
            r3.writeLong(r0)
            long r0 = r2.c
            r3.writeLong(r0)
            long r0 = r2.e
            r3.writeLong(r0)
            byte[] r4 = r2.f
            r3.writeByteArray(r4)
            return
    }
}
