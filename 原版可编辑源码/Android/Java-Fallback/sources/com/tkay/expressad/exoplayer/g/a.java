package com.tkay.expressad.exoplayer.g;

public final class a implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.tkay.expressad.exoplayer.g.a> CREATOR = null;
    private final com.tkay.expressad.exoplayer.g.a.a[] a;


    public interface a extends android.os.Parcelable {
    }

    static {
            com.tkay.expressad.exoplayer.g.a$1 r0 = new com.tkay.expressad.exoplayer.g.a$1
            r0.<init>()
            com.tkay.expressad.exoplayer.g.a.CREATOR = r0
            return
    }

    a(android.os.Parcel r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.readInt()
            com.tkay.expressad.exoplayer.g.a$a[] r0 = new com.tkay.expressad.exoplayer.g.a.a[r0]
            r3.a = r0
            r0 = 0
        Lc:
            com.tkay.expressad.exoplayer.g.a$a[] r1 = r3.a
            int r2 = r1.length
            if (r0 >= r2) goto L22
            java.lang.Class<com.tkay.expressad.exoplayer.g.a$a> r2 = com.tkay.expressad.exoplayer.g.a.a.class
            java.lang.ClassLoader r2 = r2.getClassLoader()
            android.os.Parcelable r2 = r4.readParcelable(r2)
            com.tkay.expressad.exoplayer.g.a$a r2 = (com.tkay.expressad.exoplayer.g.a.a) r2
            r1[r0] = r2
            int r0 = r0 + 1
            goto Lc
        L22:
            return
    }

    public a(java.util.List<? extends com.tkay.expressad.exoplayer.g.a.a> r2) {
            r1 = this;
            r1.<init>()
            int r0 = r2.size()
            com.tkay.expressad.exoplayer.g.a$a[] r0 = new com.tkay.expressad.exoplayer.g.a.a[r0]
            r1.a = r0
            r2.toArray(r0)
            return
    }

    public a(com.tkay.expressad.exoplayer.g.a.a... r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    public final int a() {
            r1 = this;
            com.tkay.expressad.exoplayer.g.a$a[] r0 = r1.a
            int r0 = r0.length
            return r0
    }

    public final com.tkay.expressad.exoplayer.g.a.a a(int r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.g.a$a[] r0 = r1.a
            r2 = r0[r2]
            return r2
    }

    @Override
    public final int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public final boolean equals(java.lang.Object r3) {
            r2 = this;
            if (r2 != r3) goto L4
            r3 = 1
            return r3
        L4:
            if (r3 == 0) goto L1c
            java.lang.Class r0 = r2.getClass()
            java.lang.Class r1 = r3.getClass()
            if (r0 == r1) goto L11
            goto L1c
        L11:
            com.tkay.expressad.exoplayer.g.a r3 = (com.tkay.expressad.exoplayer.g.a) r3
            com.tkay.expressad.exoplayer.g.a$a[] r0 = r2.a
            com.tkay.expressad.exoplayer.g.a$a[] r3 = r3.a
            boolean r3 = java.util.Arrays.equals(r0, r3)
            return r3
        L1c:
            r3 = 0
            return r3
    }

    public final int hashCode() {
            r1 = this;
            com.tkay.expressad.exoplayer.g.a$a[] r0 = r1.a
            int r0 = java.util.Arrays.hashCode(r0)
            return r0
    }

    @Override
    public final void writeToParcel(android.os.Parcel r5, int r6) {
            r4 = this;
            com.tkay.expressad.exoplayer.g.a$a[] r6 = r4.a
            int r6 = r6.length
            r5.writeInt(r6)
            com.tkay.expressad.exoplayer.g.a$a[] r6 = r4.a
            int r0 = r6.length
            r1 = 0
            r2 = r1
        Lb:
            if (r2 >= r0) goto L15
            r3 = r6[r2]
            r5.writeParcelable(r3, r1)
            int r2 = r2 + 1
            goto Lb
        L15:
            return
    }
}
