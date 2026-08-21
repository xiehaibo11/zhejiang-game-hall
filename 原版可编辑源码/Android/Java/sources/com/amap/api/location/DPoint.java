package com.amap.api.location;

import android.os.Parcel;
import android.os.Parcelable;

public class DPoint implements Parcelable {
    public static final Parcelable.Creator<DPoint> CREATOR = new Parcelable.Creator<DPoint>() {
        private static DPoint a(Parcel parcel) {
            return new DPoint(parcel);
        }

        private static DPoint[] a(int i) {
            return new DPoint[i];
        }

        @Override
        public final DPoint createFromParcel(Parcel parcel) {
            return a(parcel);
        }

        @Override
        public final DPoint[] newArray(int i) {
            return a(i);
        }
    };
    private double a;
    private double b;

    public DPoint() {
        this.a = 0.0d;
        this.b = 0.0d;
    }

    public DPoint(double d, double d2) {
        this.a = 0.0d;
        this.b = 0.0d;
        d2 = d2 > 180.0d ? 180.0d : d2;
        d2 = d2 < -180.0d ? -180.0d : d2;
        d = d > 90.0d ? 90.0d : d;
        d = d < -90.0d ? -90.0d : d;
        this.a = d2;
        this.b = d;
    }

    protected DPoint(Parcel parcel) {
        this.a = 0.0d;
        this.b = 0.0d;
        this.a = parcel.readDouble();
        this.b = parcel.readDouble();
    }

    @Override
    public int describeContents() {
        return 0;
    }

    public boolean equals(Object obj) {
        if (!(obj instanceof DPoint)) {
            return false;
        }
        DPoint dPoint = (DPoint) obj;
        return this.b == dPoint.b && this.a == dPoint.a;
    }

    public double getLatitude() {
        return this.b;
    }

    public double getLongitude() {
        return this.a;
    }

    public int hashCode() {
        return Double.valueOf((this.b + this.a) * 1000000.0d).intValue();
    }

    public void setLatitude(double d) {
        if (d > 90.0d) {
            d = 90.0d;
        }
        if (d < -90.0d) {
            d = -90.0d;
        }
        this.b = d;
    }

    public void setLongitude(double d) {
        if (d > 180.0d) {
            d = 180.0d;
        }
        if (d < -180.0d) {
            d = -180.0d;
        }
        this.a = d;
    }

    @Override
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeDouble(this.a);
        parcel.writeDouble(this.b);
    }
}
