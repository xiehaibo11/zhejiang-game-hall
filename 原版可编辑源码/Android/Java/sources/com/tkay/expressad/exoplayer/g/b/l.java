package com.tkay.expressad.exoplayer.g.b;

import android.os.Parcel;
import android.os.Parcelable;
import com.tkay.expressad.exoplayer.k.af;

public final class l extends h {
    public static final Parcelable.Creator<l> CREATOR = new Parcelable.Creator<l>() {
        private static l a(Parcel parcel) {
            return new l(parcel);
        }

        private static l[] a(int i) {
            return new l[i];
        }

        @Override
        public final l[] newArray(int i) {
            return new l[i];
        }

        @Override
        public final l createFromParcel(Parcel parcel) {
            return new l(parcel);
        }
    };
    public final String a;
    public final String b;

    public l(String str, String str2, String str3) {
        super(str);
        this.a = str2;
        this.b = str3;
    }

    l(Parcel parcel) {
        super(parcel.readString());
        this.a = parcel.readString();
        this.b = parcel.readString();
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && getClass() == obj.getClass()) {
            l lVar = (l) obj;
            if (this.g.equals(lVar.g) && af.a((Object) this.a, (Object) lVar.a) && af.a((Object) this.b, (Object) lVar.b)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        int iHashCode = (this.g.hashCode() + 527) * 31;
        String str = this.a;
        int iHashCode2 = (iHashCode + (str != null ? str.hashCode() : 0)) * 31;
        String str2 = this.b;
        return iHashCode2 + (str2 != null ? str2.hashCode() : 0);
    }

    @Override
    public final String toString() {
        return this.g + ": url=" + this.b;
    }

    @Override
    public final void writeToParcel(Parcel parcel, int i) {
        parcel.writeString(this.g);
        parcel.writeString(this.a);
        parcel.writeString(this.b);
    }
}
