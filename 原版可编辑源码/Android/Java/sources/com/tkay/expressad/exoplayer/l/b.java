package com.tkay.expressad.exoplayer.l;

import android.os.Parcel;
import android.os.Parcelable;
import com.tkay.expressad.exoplayer.k.af;
import java.util.Arrays;

public final class b implements Parcelable {
    public static final Parcelable.Creator<b> CREATOR = new Parcelable.Creator<b>() {
        private static b[] a() {
            return new b[0];
        }

        @Override
        public final b[] newArray(int i) {
            return new b[0];
        }

        private static b a(Parcel parcel) {
            return new b(parcel);
        }

        @Override
        public final b createFromParcel(Parcel parcel) {
            return new b(parcel);
        }
    };
    public final int a;
    public final int b;
    public final int c;
    public final byte[] d;
    private int e;

    @Override
    public final int describeContents() {
        return 0;
    }

    private b(int i, int i2, int i3, byte[] bArr) {
        this.a = i;
        this.b = i2;
        this.c = i3;
        this.d = bArr;
    }

    b(Parcel parcel) {
        this.a = parcel.readInt();
        this.b = parcel.readInt();
        this.c = parcel.readInt();
        this.d = af.a(parcel) ? parcel.createByteArray() : null;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && getClass() == obj.getClass()) {
            b bVar = (b) obj;
            if (this.a == bVar.a && this.b == bVar.b && this.c == bVar.c && Arrays.equals(this.d, bVar.d)) {
                return true;
            }
        }
        return false;
    }

    public final String toString() {
        StringBuilder sb = new StringBuilder("ColorInfo(");
        sb.append(this.a);
        sb.append(", ");
        sb.append(this.b);
        sb.append(", ");
        sb.append(this.c);
        sb.append(", ");
        sb.append(this.d != null);
        sb.append(")");
        return sb.toString();
    }

    public final int hashCode() {
        if (this.e == 0) {
            this.e = ((((((this.a + 527) * 31) + this.b) * 31) + this.c) * 31) + Arrays.hashCode(this.d);
        }
        return this.e;
    }

    @Override
    public final void writeToParcel(Parcel parcel, int i) {
        parcel.writeInt(this.a);
        parcel.writeInt(this.b);
        parcel.writeInt(this.c);
        af.a(parcel, this.d != null);
        byte[] bArr = this.d;
        if (bArr != null) {
            parcel.writeByteArray(bArr);
        }
    }
}
