package com.tkay.expressad.exoplayer.g.c;

import android.os.Parcel;
import android.os.Parcelable;
import com.tkay.expressad.exoplayer.k.ac;
import com.tkay.expressad.exoplayer.k.s;

/* JADX INFO: loaded from: classes3.dex */
public final class g extends b {
    public static final Parcelable.Creator<g> CREATOR = new Parcelable.Creator<g>() { // from class: com.tkay.expressad.exoplayer.g.c.g.1
        private static g a(Parcel parcel) {
            return new g(parcel.readLong(), parcel.readLong(), (byte) 0);
        }

        private static g[] a(int i) {
            return new g[i];
        }

        @Override // android.os.Parcelable.Creator
        public final /* bridge */ /* synthetic */ g[] newArray(int i) {
            return new g[i];
        }

        @Override // android.os.Parcelable.Creator
        public final /* synthetic */ g createFromParcel(Parcel parcel) {
            return new g(parcel.readLong(), parcel.readLong(), (byte) 0);
        }
    };

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final long f6607a;
    public final long b;

    /* synthetic */ g(long j, long j2, byte b) {
        this(j, j2);
    }

    private g(long j, long j2) {
        this.f6607a = j;
        this.b = j2;
    }

    static g a(s sVar, long j, ac acVar) {
        long jA = a(sVar, j);
        return new g(jA, acVar.a(jA));
    }

    static long a(s sVar, long j) {
        long jD = sVar.d();
        if ((128 & jD) != 0) {
            return com.sigmob.sdk.archives.tar.e.m & ((((jD & 1) << 32) | sVar.h()) + j);
        }
        return -9223372036854775807L;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        parcel.writeLong(this.f6607a);
        parcel.writeLong(this.b);
    }
}
