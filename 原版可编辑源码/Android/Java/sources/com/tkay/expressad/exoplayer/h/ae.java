package com.tkay.expressad.exoplayer.h;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.Arrays;

public final class ae implements Parcelable {
    public static final Parcelable.Creator<ae> CREATOR = new Parcelable.Creator<ae>() {
        private static ae a(Parcel parcel) {
            return new ae(parcel);
        }

        private static ae[] a(int i) {
            return new ae[i];
        }

        @Override
        public final ae[] newArray(int i) {
            return new ae[i];
        }

        @Override
        public final ae createFromParcel(Parcel parcel) {
            return new ae(parcel);
        }
    };
    public final int a;
    private final com.tkay.expressad.exoplayer.m[] b;
    private int c;

    @Override
    public final int describeContents() {
        return 0;
    }

    public ae(com.tkay.expressad.exoplayer.m... mVarArr) {
        com.tkay.expressad.exoplayer.k.a.b(true);
        this.b = mVarArr;
        this.a = 1;
    }

    ae(Parcel parcel) {
        int i = parcel.readInt();
        this.a = i;
        this.b = new com.tkay.expressad.exoplayer.m[i];
        for (int i2 = 0; i2 < this.a; i2++) {
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
            if (this.a == aeVar.a && Arrays.equals(this.b, aeVar.b)) {
                return true;
            }
        }
        return false;
    }

    @Override
    public final void writeToParcel(Parcel parcel, int i) {
        parcel.writeInt(this.a);
        for (int i2 = 0; i2 < this.a; i2++) {
            parcel.writeParcelable(this.b[i2], 0);
        }
    }
}
