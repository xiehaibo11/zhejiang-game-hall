package com.tkay.expressad.exoplayer.g.b;

import android.os.Parcel;
import android.os.Parcelable;
import com.tkay.expressad.exoplayer.k.af;
import java.util.Arrays;

public final class f extends h {
    public static final Parcelable.Creator<f> CREATOR = new Parcelable.Creator<f>() {
        private static f a(Parcel parcel) {
            return new f(parcel);
        }

        private static f[] a(int i) {
            return new f[i];
        }

        @Override
        public final f[] newArray(int i) {
            return new f[i];
        }

        @Override
        public final f createFromParcel(Parcel parcel) {
            return new f(parcel);
        }
    };
    public static final String a = "GEOB";
    public final String b;
    public final String c;
    public final String d;
    public final byte[] e;

    public f(String str, String str2, String str3, byte[] bArr) {
        super("GEOB");
        this.b = str;
        this.c = str2;
        this.d = str3;
        this.e = bArr;
    }

    f(Parcel parcel) {
        super("GEOB");
        this.b = parcel.readString();
        this.c = parcel.readString();
        this.d = parcel.readString();
        this.e = parcel.createByteArray();
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && getClass() == obj.getClass()) {
            f fVar = (f) obj;
            if (af.a((Object) this.b, (Object) fVar.b) && af.a((Object) this.c, (Object) fVar.c) && af.a((Object) this.d, (Object) fVar.d) && Arrays.equals(this.e, fVar.e)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        String str = this.b;
        int iHashCode = ((str != null ? str.hashCode() : 0) + 527) * 31;
        String str2 = this.c;
        int iHashCode2 = (iHashCode + (str2 != null ? str2.hashCode() : 0)) * 31;
        String str3 = this.d;
        return ((iHashCode2 + (str3 != null ? str3.hashCode() : 0)) * 31) + Arrays.hashCode(this.e);
    }

    @Override
    public final String toString() {
        return this.g + ": mimeType=" + this.b + ", filename=" + this.c + ", description=" + this.d;
    }

    @Override
    public final void writeToParcel(Parcel parcel, int i) {
        parcel.writeString(this.b);
        parcel.writeString(this.c);
        parcel.writeString(this.d);
        parcel.writeByteArray(this.e);
    }
}
