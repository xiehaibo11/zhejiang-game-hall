package com.ss.android.download.api.clean;

public class pp extends com.ss.android.download.api.clean.q implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.ss.android.download.api.clean.pp> CREATOR = null;
    private boolean c;
    private java.lang.String fw;
    private java.lang.String pp;
    private java.lang.String rg;


    static {
            com.ss.android.download.api.clean.pp$1 r0 = new com.ss.android.download.api.clean.pp$1
            r0.<init>()
            com.ss.android.download.api.clean.pp.CREATOR = r0
            return
    }

    public pp() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "clean_file"
            r1.fw = r0
            return
    }

    pp(android.os.Parcel r3) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "clean_file"
            r2.fw = r0
            java.lang.String r0 = r3.readString()
            r2.rg = r0
            java.lang.String r0 = r3.readString()
            r2.pp = r0
            int r0 = r3.readInt()
            r1 = 1
            if (r0 != r1) goto L1b
            goto L1c
        L1b:
            r1 = 0
        L1c:
            r2.c = r1
            java.lang.String r3 = r3.readString()
            r2.fw = r3
            return
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.lang.String rg() {
            r1 = this;
            java.lang.String r0 = r1.fw
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r1, int r2) {
            r0 = this;
            java.lang.String r2 = r0.rg
            r1.writeString(r2)
            java.lang.String r2 = r0.pp
            r1.writeString(r2)
            boolean r2 = r0.c
            r1.writeInt(r2)
            java.lang.String r2 = r0.fw
            r1.writeString(r2)
            return
    }
}
