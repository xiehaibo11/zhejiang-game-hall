package com.tkay.expressad.exoplayer.g.b;

import android.os.Parcel;
import android.os.Parcelable;
import com.tkay.expressad.exoplayer.k.af;

/* JADX INFO: loaded from: classes3.dex */
public final class k extends h {
    public static final Parcelable.Creator<k> CREATOR = new Parcelable.Creator<k>() { // from class: com.tkay.expressad.exoplayer.g.b.k.1
        private static k a(Parcel parcel) {
            return new k(parcel);
        }

        private static k[] a(int i) {
            return new k[i];
        }

        @Override // android.os.Parcelable.Creator
        public final /* bridge */ /* synthetic */ k[] newArray(int i) {
            return new k[i];
        }

        @Override // android.os.Parcelable.Creator
        public final /* synthetic */ k createFromParcel(Parcel parcel) {
            return new k(parcel);
        }
    };

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f6598a;
    public final String b;

    public k(String str, String str2, String str3) {
        super(str);
        this.f6598a = str2;
        this.b = str3;
    }

    k(Parcel parcel) {
        super(parcel.readString());
        this.f6598a = parcel.readString();
        this.b = parcel.readString();
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && getClass() == obj.getClass()) {
            k kVar = (k) obj;
            if (this.g.equals(kVar.g) && af.a((Object) this.f6598a, (Object) kVar.f6598a) && af.a((Object) this.b, (Object) kVar.b)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        int iHashCode = (this.g.hashCode() + 527) * 31;
        String str = this.f6598a;
        int iHashCode2 = (iHashCode + (str != null ? str.hashCode() : 0)) * 31;
        String str2 = this.b;
        return iHashCode2 + (str2 != null ? str2.hashCode() : 0);
    }

    @Override // com.tkay.expressad.exoplayer.g.b.h
    public final String toString() {
        return this.g + ": value=" + this.b;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        parcel.writeString(this.g);
        parcel.writeString(this.f6598a);
        parcel.writeString(this.b);
    }
}
