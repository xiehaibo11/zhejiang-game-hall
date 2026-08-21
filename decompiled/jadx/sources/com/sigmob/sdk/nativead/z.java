package com.sigmob.sdk.nativead;

import android.os.Parcel;
import android.os.Parcelable;

/* JADX INFO: loaded from: classes3.dex */
public class z implements Parcelable {
    public static final Parcelable.Creator<z> CREATOR = new Parcelable.Creator<z>() { // from class: com.sigmob.sdk.nativead.z.1
        @Override // android.os.Parcelable.Creator
        /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
        public z createFromParcel(Parcel parcel) {
            return new z(parcel);
        }

        @Override // android.os.Parcelable.Creator
        /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
        public z[] newArray(int i) {
            return new z[i];
        }
    };

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f5138a;
    private int b;
    private int c;
    private int d;

    public z() {
    }

    protected z(Parcel parcel) {
        this.f5138a = parcel.readInt();
        this.b = parcel.readInt();
        this.c = parcel.readInt();
        this.d = parcel.readInt();
    }

    public int a() {
        return this.f5138a;
    }

    public void a(int i) {
        this.f5138a = i;
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

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeInt(this.f5138a);
        parcel.writeInt(this.b);
        parcel.writeInt(this.c);
        parcel.writeInt(this.d);
    }
}
