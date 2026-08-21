package com.tkay.expressad.exoplayer.g.c;

import android.os.Parcel;
import android.os.Parcelable;
import com.tkay.expressad.exoplayer.k.s;

/* JADX INFO: loaded from: classes3.dex */
public final class a extends b {
    public static final Parcelable.Creator<a> CREATOR = new Parcelable.Creator<a>() { // from class: com.tkay.expressad.exoplayer.g.c.a.1
        private static a a(Parcel parcel) {
            return new a(parcel, (byte) 0);
        }

        private static a[] a(int i) {
            return new a[i];
        }

        @Override // android.os.Parcelable.Creator
        public final /* bridge */ /* synthetic */ a[] newArray(int i) {
            return new a[i];
        }

        @Override // android.os.Parcelable.Creator
        public final /* synthetic */ a createFromParcel(Parcel parcel) {
            return new a(parcel, (byte) 0);
        }
    };

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final long f6600a;
    public final long b;
    public final byte[] c;

    /* synthetic */ a(Parcel parcel, byte b) {
        this(parcel);
    }

    private a(long j, byte[] bArr, long j2) {
        this.f6600a = j2;
        this.b = j;
        this.c = bArr;
    }

    private a(Parcel parcel) {
        this.f6600a = parcel.readLong();
        this.b = parcel.readLong();
        byte[] bArr = new byte[parcel.readInt()];
        this.c = bArr;
        parcel.readByteArray(bArr);
    }

    static a a(s sVar, int i, long j) {
        long jH = sVar.h();
        int i2 = i - 4;
        byte[] bArr = new byte[i2];
        sVar.a(bArr, 0, i2);
        return new a(jH, bArr, j);
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        parcel.writeLong(this.f6600a);
        parcel.writeLong(this.b);
        parcel.writeInt(this.c.length);
        parcel.writeByteArray(this.c);
    }
}
