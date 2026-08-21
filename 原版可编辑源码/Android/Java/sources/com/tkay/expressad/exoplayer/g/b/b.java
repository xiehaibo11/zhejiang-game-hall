package com.tkay.expressad.exoplayer.g.b;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.Arrays;

public final class b extends h {
    public static final Parcelable.Creator<b> CREATOR = new Parcelable.Creator<b>() {
        private static b a(Parcel parcel) {
            return new b(parcel);
        }

        private static b[] a(int i) {
            return new b[i];
        }

        @Override
        public final b[] newArray(int i) {
            return new b[i];
        }

        @Override
        public final b createFromParcel(Parcel parcel) {
            return new b(parcel);
        }
    };
    public final byte[] a;

    public b(String str, byte[] bArr) {
        super(str);
        this.a = bArr;
    }

    b(Parcel parcel) {
        super(parcel.readString());
        this.a = parcel.createByteArray();
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && getClass() == obj.getClass()) {
            b bVar = (b) obj;
            if (this.g.equals(bVar.g) && Arrays.equals(this.a, bVar.a)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return ((this.g.hashCode() + 527) * 31) + Arrays.hashCode(this.a);
    }

    @Override
    public final void writeToParcel(Parcel parcel, int i) {
        parcel.writeString(this.g);
        parcel.writeByteArray(this.a);
    }
}
