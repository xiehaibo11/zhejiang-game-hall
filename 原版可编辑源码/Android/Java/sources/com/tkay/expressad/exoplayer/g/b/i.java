package com.tkay.expressad.exoplayer.g.b;

import android.os.Parcel;
import android.os.Parcelable;
import com.tkay.expressad.exoplayer.k.af;

public final class i extends h {
    public static final Parcelable.Creator<i> CREATOR = new Parcelable.Creator<i>() {
        private static i a(Parcel parcel) {
            return new i(parcel);
        }

        private static i[] a(int i) {
            return new i[i];
        }

        @Override
        public final i[] newArray(int i) {
            return new i[i];
        }

        @Override
        public final i createFromParcel(Parcel parcel) {
            return new i(parcel);
        }
    };
    public static final String a = "----";
    public final String b;
    public final String c;
    public final String d;

    public i(String str, String str2, String str3) {
        super("----");
        this.b = str;
        this.c = str2;
        this.d = str3;
    }

    i(Parcel parcel) {
        super("----");
        this.b = (String) com.tkay.expressad.exoplayer.k.a.a(parcel.readString());
        this.c = (String) com.tkay.expressad.exoplayer.k.a.a(parcel.readString());
        this.d = (String) com.tkay.expressad.exoplayer.k.a.a(parcel.readString());
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && getClass() == obj.getClass()) {
            i iVar = (i) obj;
            if (af.a((Object) this.c, (Object) iVar.c) && af.a((Object) this.b, (Object) iVar.b) && af.a((Object) this.d, (Object) iVar.d)) {
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
        return this.g + ": domain=" + this.b + ", description=" + this.c;
    }

    @Override
    public final void writeToParcel(Parcel parcel, int i) {
        parcel.writeString(this.g);
        parcel.writeString(this.b);
        parcel.writeString(this.d);
    }
}
