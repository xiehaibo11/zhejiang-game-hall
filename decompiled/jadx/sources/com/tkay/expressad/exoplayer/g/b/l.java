package com.tkay.expressad.exoplayer.g.b;

import android.os.Parcel;
import android.os.Parcelable;
import com.tkay.expressad.exoplayer.k.af;

/* JADX INFO: loaded from: classes3.dex */
public final class l extends h {
    public static final Parcelable.Creator<l> CREATOR = new Parcelable.Creator<l>() { // from class: com.tkay.expressad.exoplayer.g.b.l.1
        private static l a(Parcel parcel) {
            return new l(parcel);
        }

        private static l[] a(int i) {
            return new l[i];
        }

        @Override // android.os.Parcelable.Creator
        public final /* bridge */ /* synthetic */ l[] newArray(int i) {
            return new l[i];
        }

        @Override // android.os.Parcelable.Creator
        public final /* synthetic */ l createFromParcel(Parcel parcel) {
            return new l(parcel);
        }
    };

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f6599a;
    public final String b;

    public l(String str, String str2, String str3) {
        super(str);
        this.f6599a = str2;
        this.b = str3;
    }

    l(Parcel parcel) {
        super(parcel.readString());
        this.f6599a = parcel.readString();
        this.b = parcel.readString();
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && getClass() == obj.getClass()) {
            l lVar = (l) obj;
            if (this.g.equals(lVar.g) && af.a((Object) this.f6599a, (Object) lVar.f6599a) && af.a((Object) this.b, (Object) lVar.b)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        int iHashCode = (this.g.hashCode() + 527) * 31;
        String str = this.f6599a;
        int iHashCode2 = (iHashCode + (str != null ? str.hashCode() : 0)) * 31;
        String str2 = this.b;
        return iHashCode2 + (str2 != null ? str2.hashCode() : 0);
    }

    @Override // com.tkay.expressad.exoplayer.g.b.h
    public final String toString() {
        return this.g + ": url=" + this.b;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        parcel.writeString(this.g);
        parcel.writeString(this.f6599a);
        parcel.writeString(this.b);
    }
}
