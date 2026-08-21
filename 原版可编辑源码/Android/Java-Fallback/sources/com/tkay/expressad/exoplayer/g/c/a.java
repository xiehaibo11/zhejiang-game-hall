package com.tkay.expressad.exoplayer.g.c;

public final class a extends com.tkay.expressad.exoplayer.g.c.b {
    public static final android.os.Parcelable.Creator<com.tkay.expressad.exoplayer.g.c.a> CREATOR = null;
    public final long a;
    public final long b;
    public final byte[] c;


    static {
            com.tkay.expressad.exoplayer.g.c.a$1 r0 = new com.tkay.expressad.exoplayer.g.c.a$1
            r0.<init>()
            com.tkay.expressad.exoplayer.g.c.a.CREATOR = r0
            return
    }

    private a(long r1, byte[] r3, long r4) {
            r0 = this;
            r0.<init>()
            r0.a = r4
            r0.b = r1
            r0.c = r3
            return
    }

    private a(android.os.Parcel r3) {
            r2 = this;
            r2.<init>()
            long r0 = r3.readLong()
            r2.a = r0
            long r0 = r3.readLong()
            r2.b = r0
            int r0 = r3.readInt()
            byte[] r0 = new byte[r0]
            r2.c = r0
            r3.readByteArray(r0)
            return
    }

    a(android.os.Parcel r1, byte r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    static com.tkay.expressad.exoplayer.g.c.a a(com.tkay.expressad.exoplayer.k.s r6, int r7, long r8) {
            long r1 = r6.h()
            int r7 = r7 + (-4)
            byte[] r3 = new byte[r7]
            r0 = 0
            r6.a(r3, r0, r7)
            com.tkay.expressad.exoplayer.g.c.a r6 = new com.tkay.expressad.exoplayer.g.c.a
            r0 = r6
            r4 = r8
            r0.<init>(r1, r3, r4)
            return r6
    }

    @Override
    public final void writeToParcel(android.os.Parcel r3, int r4) {
            r2 = this;
            long r0 = r2.a
            r3.writeLong(r0)
            long r0 = r2.b
            r3.writeLong(r0)
            byte[] r4 = r2.c
            int r4 = r4.length
            r3.writeInt(r4)
            byte[] r4 = r2.c
            r3.writeByteArray(r4)
            return
    }
}
