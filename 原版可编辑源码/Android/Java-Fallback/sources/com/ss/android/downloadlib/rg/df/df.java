package com.ss.android.downloadlib.rg.df;

public class df implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.ss.android.downloadlib.rg.df.df> CREATOR = null;
    public java.lang.String c;
    public int df;
    public java.lang.String pp;
    public int pt;
    public java.lang.String q;
    public int rg;


    static {
            com.ss.android.downloadlib.rg.df.df$1 r0 = new com.ss.android.downloadlib.rg.df.df$1
            r0.<init>()
            com.ss.android.downloadlib.rg.df.df.CREATOR = r0
            return
    }

    public df() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.q = r0
            r1.pp = r0
            r1.c = r0
            return
    }

    protected df(android.os.Parcel r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.q = r0
            r1.pp = r0
            r1.c = r0
            int r0 = r2.readInt()
            r1.rg = r0
            int r0 = r2.readInt()
            r1.df = r0
            java.lang.String r0 = r2.readString()
            r1.q = r0
            java.lang.String r0 = r2.readString()
            r1.pp = r0
            java.lang.String r0 = r2.readString()
            r1.c = r0
            int r2 = r2.readInt()
            r1.pt = r2
            return
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public boolean equals(java.lang.Object r5) {
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
            com.ss.android.downloadlib.rg.df.df r5 = (com.ss.android.downloadlib.rg.df.df) r5
            int r2 = r4.rg
            int r3 = r5.rg
            if (r2 != r3) goto L31
            int r2 = r4.df
            int r3 = r5.df
            if (r2 == r3) goto L21
            goto L31
        L21:
            java.lang.String r2 = r4.q
            if (r2 == 0) goto L2c
            java.lang.String r5 = r5.q
            boolean r5 = r2.equals(r5)
            return r5
        L2c:
            java.lang.String r5 = r5.q
            if (r5 != 0) goto L31
            return r0
        L31:
            return r1
    }

    public int hashCode() {
            r2 = this;
            int r0 = r2.rg
            int r0 = r0 * 31
            int r1 = r2.df
            int r0 = r0 + r1
            int r0 = r0 * 31
            java.lang.String r1 = r2.q
            if (r1 == 0) goto L12
            int r1 = r1.hashCode()
            goto L13
        L12:
            r1 = 0
        L13:
            int r0 = r0 + r1
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = ""
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r1, int r2) {
            r0 = this;
            int r2 = r0.rg
            r1.writeInt(r2)
            int r2 = r0.df
            r1.writeInt(r2)
            java.lang.String r2 = r0.q
            r1.writeString(r2)
            java.lang.String r2 = r0.pp
            r1.writeString(r2)
            java.lang.String r2 = r0.c
            r1.writeString(r2)
            int r2 = r0.pt
            r1.writeInt(r2)
            return
    }
}
