package com.ss.android.download.api.clean;

public class q implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.ss.android.download.api.clean.q> CREATOR = null;
    protected java.lang.String df;
    boolean pt;
    protected long q;
    private java.lang.String rg;


    static {
            com.ss.android.download.api.clean.q$1 r0 = new com.ss.android.download.api.clean.q$1
            r0.<init>()
            com.ss.android.download.api.clean.q.CREATOR = r0
            return
    }

    public q() {
            r0 = this;
            r0.<init>()
            return
    }

    q(android.os.Parcel r3) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = r3.readString()
            r2.df = r0
            long r0 = r3.readLong()
            r2.q = r0
            java.lang.String r0 = r3.readString()
            r2.rg = r0
            int r3 = r3.readInt()
            r0 = 1
            if (r3 != r0) goto L1d
            goto L1e
        L1d:
            r0 = 0
        L1e:
            r2.pt = r0
            return
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r3, int r4) {
            r2 = this;
            java.lang.String r4 = r2.df
            r3.writeString(r4)
            long r0 = r2.q
            r3.writeLong(r0)
            java.lang.String r4 = r2.rg
            r3.writeString(r4)
            boolean r4 = r2.pt
            r3.writeInt(r4)
            return
    }
}
