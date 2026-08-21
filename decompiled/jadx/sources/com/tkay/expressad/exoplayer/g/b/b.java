package com.tkay.expressad.exoplayer.g.b;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.Arrays;

/* JADX INFO: loaded from: classes3.dex */
public final class b extends h {
    public static final Parcelable.Creator<b> CREATOR = new Parcelable.Creator<b>() { // from class: com.tkay.expressad.exoplayer.g.b.b.1
        private static b a(Parcel parcel) {
            return new b(parcel);
        }

        private static b[] a(int i) {
            return new b[i];
        }

        @Override // android.os.Parcelable.Creator
        public final /* bridge */ /* synthetic */ b[] newArray(int i) {
            return new b[i];
        }

        @Override // android.os.Parcelable.Creator
        public final /* synthetic */ b createFromParcel(Parcel parcel) {
            return new b(parcel);
        }
    };

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final byte[] f6589a;

    public b(String str, byte[] bArr) {
        super(str);
        this.f6589a = bArr;
    }

    b(Parcel parcel) {
        super(parcel.readString());
        this.f6589a = parcel.createByteArray();
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && getClass() == obj.getClass()) {
            b bVar = (b) obj;
            if (this.g.equals(bVar.g) && Arrays.equals(this.f6589a, bVar.f6589a)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return ((this.g.hashCode() + 527) * 31) + Arrays.hashCode(this.f6589a);
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        parcel.writeString(this.g);
        parcel.writeByteArray(this.f6589a);
    }
}
