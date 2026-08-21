package com.sigmob.sdk.nativead;

import android.os.Parcel;
import android.os.Parcelable;

public class z implements Parcelable {
    public static final Parcelable.Creator<z> CREATOR = new Parcelable.Creator<z>() {
        @Override
        public z createFromParcel(Parcel parcel) {
            return new z(parcel);
        }

        @Override
        public z[] newArray(int i) {
            return new z[i];
        }
    };
    private int a;
    private int b;
    private int c;
    private int d;

    public z() {
    }

    protected z(Parcel parcel) {
        this.a = parcel.readInt();
        this.b = parcel.readInt();
        this.c = parcel.readInt();
        this.d = parcel.readInt();
    }

    public int a() {
        return this.a;
    }

    public void a(int i) {
        this.a = i;
    }

    public int b() {
        return this.b;
    }

    public void b(int i) {
        this.b = i;
    }

    public int c() {
        return this.c;
    }

    public void c(int i) {
        this.c = i;
    }

    public int d() {
        return this.d;
    }

    public void d(int i) {
        this.d = i;
    }

    @Override
    public int describeContents() {
        return 0;
    }

    @Override
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeInt(this.a);
        parcel.writeInt(this.b);
        parcel.writeInt(this.c);
        parcel.writeInt(this.d);
    }
}
