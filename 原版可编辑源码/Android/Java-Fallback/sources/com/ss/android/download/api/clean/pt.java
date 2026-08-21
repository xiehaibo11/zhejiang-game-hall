package com.ss.android.download.api.clean;

public class pt extends com.ss.android.download.api.clean.df implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.ss.android.download.api.clean.pt> CREATOR = null;
    private java.lang.String pp;


    static {
            com.ss.android.download.api.clean.pt$1 r0 = new com.ss.android.download.api.clean.pt$1
            r0.<init>()
            com.ss.android.download.api.clean.pt.CREATOR = r0
            return
    }

    public pt() {
            r0 = this;
            r0.<init>()
            return
    }

    pt(android.os.Parcel r1) {
            r0 = this;
            r0.<init>()
            java.lang.String r1 = r1.readString()
            r0.pp = r1
            return
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public java.lang.String rg() {
            r1 = this;
            java.lang.String r0 = "clean_app_cache"
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r1, int r2) {
            r0 = this;
            java.lang.String r2 = r0.pp
            r1.writeString(r2)
            return
    }
}
