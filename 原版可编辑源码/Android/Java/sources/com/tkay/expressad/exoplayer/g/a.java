package com.tkay.expressad.exoplayer.g;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.Arrays;
import java.util.List;

public final class a implements Parcelable {
    public static final Parcelable.Creator<a> CREATOR = new Parcelable.Creator<a>() {
        private static a[] a() {
            return new a[0];
        }

        @Override
        public final a[] newArray(int i) {
            return new a[0];
        }

        private static a a(Parcel parcel) {
            return new a(parcel);
        }

        @Override
        public final a createFromParcel(Parcel parcel) {
            return new a(parcel);
        }
    };
    private final a[] a;

    public interface a extends Parcelable {
    }

    @Override
    public final int describeContents() {
        return 0;
    }

    public a(a... aVarArr) {
        this.a = aVarArr;
    }

    public a(List<? extends a> list) {
        a[] aVarArr = new a[list.size()];
        this.a = aVarArr;
        list.toArray(aVarArr);
    }

    a(Parcel parcel) {
        this.a = new a[parcel.readInt()];
        int i = 0;
        while (true) {
            a[] aVarArr = this.a;
            if (i >= aVarArr.length) {
                return;
            }
            aVarArr[i] = (a) parcel.readParcelable(a.class.getClassLoader());
            i++;
        }
    }

    public final int a() {
        return this.a.length;
    }

    public final a a(int i) {
        return this.a[i];
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || getClass() != obj.getClass()) {
            return false;
        }
        return Arrays.equals(this.a, ((a) obj).a);
    }

    public final int hashCode() {
        return Arrays.hashCode(this.a);
    }

    @Override
    public final void writeToParcel(Parcel parcel, int i) {
        parcel.writeInt(this.a.length);
        for (a aVar : this.a) {
            parcel.writeParcelable(aVar, 0);
        }
    }
}
