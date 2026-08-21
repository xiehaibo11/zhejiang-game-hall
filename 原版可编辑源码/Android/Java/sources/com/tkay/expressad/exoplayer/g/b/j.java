package com.tkay.expressad.exoplayer.g.b;

import android.os.Parcel;
import android.os.Parcelable;
import com.tkay.expressad.exoplayer.k.af;
import java.util.Arrays;

public final class j extends h {
    public static final Parcelable.Creator<j> CREATOR = new Parcelable.Creator<j>() {
        private static j a(Parcel parcel) {
            return new j(parcel);
        }

        private static j[] a(int i) {
            return new j[i];
        }

        @Override
        public final j[] newArray(int i) {
            return new j[i];
        }

        @Override
        public final j createFromParcel(Parcel parcel) {
            return new j(parcel);
        }
    };
    public static final String a = "PRIV";
    public final String b;
    public final byte[] c;

    public j(String str, byte[] bArr) {
        super("PRIV");
        this.b = str;
        this.c = bArr;
    }

    j(Parcel parcel) {
        super("PRIV");
        this.b = parcel.readString();
        this.c = parcel.createByteArray();
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && getClass() == obj.getClass()) {
            j jVar = (j) obj;
            if (af.a((Object) this.b, (Object) jVar.b) && Arrays.equals(this.c, jVar.c)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        String str = this.b;
        return (((str != null ? str.hashCode() : 0) + 527) * 31) + Arrays.hashCode(this.c);
    }

    @Override
    public final String toString() {
        return this.g + ": owner=" + this.b;
    }

    @Override
    public final void writeToParcel(Parcel parcel, int i) {
        parcel.writeString(this.b);
        parcel.writeByteArray(this.c);
    }
}
