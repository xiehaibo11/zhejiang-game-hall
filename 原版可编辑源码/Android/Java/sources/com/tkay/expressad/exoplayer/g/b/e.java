package com.tkay.expressad.exoplayer.g.b;

import android.os.Parcel;
import android.os.Parcelable;
import com.tkay.expressad.exoplayer.k.af;

public final class e extends h {
    public static final Parcelable.Creator<e> CREATOR = new Parcelable.Creator<e>() {
        private static e a(Parcel parcel) {
            return new e(parcel);
        }

        private static e[] a(int i) {
            return new e[i];
        }

        @Override
        public final e[] newArray(int i) {
            return new e[i];
        }

        @Override
        public final e createFromParcel(Parcel parcel) {
            return new e(parcel);
        }
    };
    public static final String a = "COMM";
    public final String b;
    public final String c;
    public final String d;

    public e(String str, String str2, String str3) {
        super("COMM");
        this.b = str;
        this.c = str2;
        this.d = str3;
    }

    e(Parcel parcel) {
        super("COMM");
        this.b = parcel.readString();
        this.c = parcel.readString();
        this.d = parcel.readString();
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && getClass() == obj.getClass()) {
            e eVar = (e) obj;
            if (af.a((Object) this.c, (Object) eVar.c) && af.a((Object) this.b, (Object) eVar.b) && af.a((Object) this.d, (Object) eVar.d)) {
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
        return iHashCode2 + (str3 != null ? str3.hashCode() : 0);
    }

    @Override
    public final String toString() {
        return this.g + ": language=" + this.b + ", description=" + this.c;
    }

    @Override
    public final void writeToParcel(Parcel parcel, int i) {
        parcel.writeString(this.g);
        parcel.writeString(this.b);
        parcel.writeString(this.d);
    }
}
