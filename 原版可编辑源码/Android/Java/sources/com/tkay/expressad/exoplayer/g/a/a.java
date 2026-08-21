package com.tkay.expressad.exoplayer.g.a;

import android.os.Parcel;
import android.os.Parcelable;
import com.tkay.expressad.exoplayer.g.a;
import com.tkay.expressad.exoplayer.k.af;
import java.util.Arrays;

public final class a implements a.a {
    public static final Parcelable.Creator<a> CREATOR = new Parcelable.Creator<a>() {
        private static a a(Parcel parcel) {
            return new a(parcel);
        }

        private static a[] a(int i) {
            return new a[i];
        }

        @Override
        public final a[] newArray(int i) {
            return new a[i];
        }

        @Override
        public final a createFromParcel(Parcel parcel) {
            return new a(parcel);
        }
    };
    public final String a;
    public final String b;
    public final long c;
    public final long d;
    public final long e;
    public final byte[] f;
    private int g;

    @Override
    public final int describeContents() {
        return 0;
    }

    public a(String str, String str2, long j, long j2, byte[] bArr, long j3) {
        this.a = str;
        this.b = str2;
        this.c = j;
        this.e = j2;
        this.f = bArr;
        this.d = j3;
    }

    a(Parcel parcel) {
        this.a = parcel.readString();
        this.b = parcel.readString();
        this.d = parcel.readLong();
        this.c = parcel.readLong();
        this.e = parcel.readLong();
        this.f = parcel.createByteArray();
    }

    public final int hashCode() {
        if (this.g == 0) {
            String str = this.a;
            int iHashCode = ((str != null ? str.hashCode() : 0) + 527) * 31;
            String str2 = this.b;
            int iHashCode2 = (iHashCode + (str2 != null ? str2.hashCode() : 0)) * 31;
            long j = this.d;
            int i = (iHashCode2 + ((int) (j ^ (j >>> 32)))) * 31;
            long j2 = this.c;
            int i2 = (i + ((int) (j2 ^ (j2 >>> 32)))) * 31;
            long j3 = this.e;
            this.g = ((i2 + ((int) (j3 ^ (j3 >>> 32)))) * 31) + Arrays.hashCode(this.f);
        }
        return this.g;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && getClass() == obj.getClass()) {
            a aVar = (a) obj;
            if (this.d == aVar.d && this.c == aVar.c && this.e == aVar.e && af.a((Object) this.a, (Object) aVar.a) && af.a((Object) this.b, (Object) aVar.b) && Arrays.equals(this.f, aVar.f)) {
                return true;
            }
        }
        return false;
    }

    public final String toString() {
        return "EMSG: scheme=" + this.a + ", id=" + this.e + ", value=" + this.b;
    }

    @Override
    public final void writeToParcel(Parcel parcel, int i) {
        parcel.writeString(this.a);
        parcel.writeString(this.b);
        parcel.writeLong(this.d);
        parcel.writeLong(this.c);
        parcel.writeLong(this.e);
        parcel.writeByteArray(this.f);
    }
}
