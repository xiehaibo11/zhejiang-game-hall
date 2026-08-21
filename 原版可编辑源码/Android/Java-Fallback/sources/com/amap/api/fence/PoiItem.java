package com.amap.api.fence;

public class PoiItem implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.amap.api.fence.PoiItem> CREATOR = null;
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;
    private java.lang.String e;
    private double f;
    private double g;
    private java.lang.String h;
    private java.lang.String i;
    private java.lang.String j;
    private java.lang.String k;


    static {
            com.amap.api.fence.PoiItem$1 r0 = new com.amap.api.fence.PoiItem$1
            r0.<init>()
            com.amap.api.fence.PoiItem.CREATOR = r0
            return
    }

    public PoiItem() {
            r3 = this;
            r3.<init>()
            java.lang.String r0 = ""
            r3.a = r0
            r3.b = r0
            r3.c = r0
            r3.d = r0
            r3.e = r0
            r1 = 0
            r3.f = r1
            r3.g = r1
            r3.h = r0
            r3.i = r0
            r3.j = r0
            r3.k = r0
            return
    }

    protected PoiItem(android.os.Parcel r4) {
            r3 = this;
            r3.<init>()
            java.lang.String r0 = ""
            r3.a = r0
            r3.b = r0
            r3.c = r0
            r3.d = r0
            r3.e = r0
            r1 = 0
            r3.f = r1
            r3.g = r1
            r3.h = r0
            r3.i = r0
            r3.j = r0
            r3.k = r0
            java.lang.String r0 = r4.readString()
            r3.a = r0
            java.lang.String r0 = r4.readString()
            r3.b = r0
            java.lang.String r0 = r4.readString()
            r3.c = r0
            java.lang.String r0 = r4.readString()
            r3.d = r0
            java.lang.String r0 = r4.readString()
            r3.e = r0
            double r0 = r4.readDouble()
            r3.f = r0
            double r0 = r4.readDouble()
            r3.g = r0
            java.lang.String r0 = r4.readString()
            r3.h = r0
            java.lang.String r0 = r4.readString()
            r3.i = r0
            java.lang.String r0 = r4.readString()
            r3.j = r0
            java.lang.String r4 = r4.readString()
            r3.k = r4
            return
    }

    public static android.os.Parcelable.Creator<com.amap.api.fence.PoiItem> getCreator() {
            android.os.Parcelable$Creator<com.amap.api.fence.PoiItem> r0 = com.amap.api.fence.PoiItem.CREATOR
            return r0
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.lang.String getAddress() {
            r1 = this;
            java.lang.String r0 = r1.e
            return r0
    }

    public java.lang.String getAdname() {
            r1 = this;
            java.lang.String r0 = r1.k
            return r0
    }

    public java.lang.String getCity() {
            r1 = this;
            java.lang.String r0 = r1.j
            return r0
    }

    public double getLatitude() {
            r2 = this;
            double r0 = r2.f
            return r0
    }

    public double getLongitude() {
            r2 = this;
            double r0 = r2.g
            return r0
    }

    public java.lang.String getPoiId() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public java.lang.String getPoiName() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public java.lang.String getPoiType() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    public java.lang.String getProvince() {
            r1 = this;
            java.lang.String r0 = r1.i
            return r0
    }

    public java.lang.String getTel() {
            r1 = this;
            java.lang.String r0 = r1.h
            return r0
    }

    public java.lang.String getTypeCode() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }

    public void setAddress(java.lang.String r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public void setAdname(java.lang.String r1) {
            r0 = this;
            r0.k = r1
            return
    }

    public void setCity(java.lang.String r1) {
            r0 = this;
            r0.j = r1
            return
    }

    public void setLatitude(double r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public void setLongitude(double r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public void setPoiId(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public void setPoiName(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void setPoiType(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public void setProvince(java.lang.String r1) {
            r0 = this;
            r0.i = r1
            return
    }

    public void setTel(java.lang.String r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public void setTypeCode(java.lang.String r1) {
            r0 = this;
            r0.d = r1
            return
    }

    @Override
    public void writeToParcel(android.os.Parcel r3, int r4) {
            r2 = this;
            java.lang.String r4 = r2.a
            r3.writeString(r4)
            java.lang.String r4 = r2.b
            r3.writeString(r4)
            java.lang.String r4 = r2.c
            r3.writeString(r4)
            java.lang.String r4 = r2.d
            r3.writeString(r4)
            java.lang.String r4 = r2.e
            r3.writeString(r4)
            double r0 = r2.f
            r3.writeDouble(r0)
            double r0 = r2.g
            r3.writeDouble(r0)
            java.lang.String r4 = r2.h
            r3.writeString(r4)
            java.lang.String r4 = r2.i
            r3.writeString(r4)
            java.lang.String r4 = r2.j
            r3.writeString(r4)
            java.lang.String r4 = r2.k
            r3.writeString(r4)
            return
    }
}
