package com.tkay.expressad.exoplayer.g.b;

public final class l extends com.tkay.expressad.exoplayer.g.b.h {
    public static final android.os.Parcelable.Creator<com.tkay.expressad.exoplayer.g.b.l> CREATOR = null;
    public final java.lang.String a;
    public final java.lang.String b;


    static {
            com.tkay.expressad.exoplayer.g.b.l$1 r0 = new com.tkay.expressad.exoplayer.g.b.l$1
            r0.<init>()
            com.tkay.expressad.exoplayer.g.b.l.CREATOR = r0
            return
    }

    l(android.os.Parcel r2) {
            r1 = this;
            java.lang.String r0 = r2.readString()
            r1.<init>(r0)
            java.lang.String r0 = r2.readString()
            r1.a = r0
            java.lang.String r2 = r2.readString()
            r1.b = r2
            return
    }

    public l(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1)
            r0.a = r2
            r0.b = r3
            return
    }

    public final boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 == 0) goto L33
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L12
            goto L33
        L12:
            com.tkay.expressad.exoplayer.g.b.l r5 = (com.tkay.expressad.exoplayer.g.b.l) r5
            java.lang.String r2 = r4.g
            java.lang.String r3 = r5.g
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L33
            java.lang.String r2 = r4.a
            java.lang.String r3 = r5.a
            boolean r2 = com.tkay.expressad.exoplayer.k.af.a(r2, r3)
            if (r2 == 0) goto L33
            java.lang.String r2 = r4.b
            java.lang.String r5 = r5.b
            boolean r5 = com.tkay.expressad.exoplayer.k.af.a(r2, r5)
            if (r5 == 0) goto L33
            return r0
        L33:
            return r1
    }

    public final int hashCode() {
            r3 = this;
            java.lang.String r0 = r3.g
            int r0 = r0.hashCode()
            int r0 = r0 + 527
            int r0 = r0 * 31
            java.lang.String r1 = r3.a
            r2 = 0
            if (r1 == 0) goto L14
            int r1 = r1.hashCode()
            goto L15
        L14:
            r1 = r2
        L15:
            int r0 = r0 + r1
            int r0 = r0 * 31
            java.lang.String r1 = r3.b
            if (r1 == 0) goto L20
            int r2 = r1.hashCode()
        L20:
            int r0 = r0 + r2
            return r0
    }

    @Override
    public final java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.g
            r0.append(r1)
            java.lang.String r1 = ": url="
            r0.append(r1)
            java.lang.String r1 = r2.b
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public final void writeToParcel(android.os.Parcel r1, int r2) {
            r0 = this;
            java.lang.String r2 = r0.g
            r1.writeString(r2)
            java.lang.String r2 = r0.a
            r1.writeString(r2)
            java.lang.String r2 = r0.b
            r1.writeString(r2)
            return
    }
}
