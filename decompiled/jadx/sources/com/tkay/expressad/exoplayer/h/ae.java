package com.tkay.expressad.exoplayer.h;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.Arrays;

/* JADX INFO: loaded from: classes3.dex */
public final class ae implements Parcelable {
    public static final Parcelable.Creator<ae> CREATOR = new Parcelable.Creator<ae>() { // from class: com.tkay.expressad.exoplayer.h.ae.1
        private static ae a(Parcel parcel) {
            return new ae(parcel);
        }

        private static ae[] a(int i) {
            return new ae[i];
        }

        @Override // android.os.Parcelable.Creator
        public final /* bridge */ /* synthetic */ ae[] newArray(int i) {
            return new ae[i];
        }

        @Override // android.os.Parcelable.Creator
        public final /* synthetic */ ae createFromParcel(Parcel parcel) {
            return new ae(parcel);
        }
    };

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final int f6632a;
    private final com.tkay.expressad.exoplayer.m[] b;
    private int c;

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    public ae(com.tkay.expressad.exoplayer.m... mVarArr) {
        com.tkay.expressad.exoplayer.k.a.b(true);
        this.b = mVarArr;
        this.f6632a = 1;
    }

    ae(Parcel parcel) {
        int i = parcel.readInt();
        this.f6632a = i;
        this.b = new com.tkay.expressad.exoplayer.m[i];
        for (int i2 = 0; i2 < this.f6632a; i2++) {
            this.b[i2] = (com.tkay.expressad.exoplayer.m) parcel.readParcelable(com.tkay.expressad.exoplayer.m.class.getClassLoader());
        }
    }

    public final com.tkay.expressad.exoplayer.m a(int i) {
        return this.b[i];
    }

    public final int a(com.tkay.expressad.exoplayer.m mVar) {
        int i = 0;
        while (true) {
            com.tkay.expressad.exoplayer.m[] mVarArr = this.b;
            if (i >= mVarArr.length) {
                return -1;
            }
            if (mVar == mVarArr[i]) {
                return i;
            }
            i++;
        }
    }

    public final int hashCode() {
        if (this.c == 0) {
            this.c = Arrays.hashCode(this.b) + 527;
        }
        return this.c;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && getClass() == obj.getClass()) {
            ae aeVar = (ae) obj;
            if (this.f6632a == aeVar.f6632a && Arrays.equals(this.b, aeVar.b)) {
                return true;
            }
        }
        return false;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        parcel.writeInt(this.f6632a);
        for (int i2 = 0; i2 < this.f6632a; i2++) {
            parcel.writeParcelable(this.b[i2], 0);
        }
    }
}
