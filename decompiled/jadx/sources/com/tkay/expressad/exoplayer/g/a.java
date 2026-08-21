package com.tkay.expressad.exoplayer.g;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.Arrays;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public final class a implements Parcelable {
    public static final Parcelable.Creator<a> CREATOR = new Parcelable.Creator<a>() { // from class: com.tkay.expressad.exoplayer.g.a.1
        private static a[] a() {
            return new a[0];
        }

        @Override // android.os.Parcelable.Creator
        public final /* bridge */ /* synthetic */ a[] newArray(int i) {
            return new a[0];
        }

        private static a a(Parcel parcel) {
            return new a(parcel);
        }

        @Override // android.os.Parcelable.Creator
        public final /* synthetic */ a createFromParcel(Parcel parcel) {
            return new a(parcel);
        }
    };

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final InterfaceC0446a[] f6586a;

    /* JADX INFO: renamed from: com.tkay.expressad.exoplayer.g.a$a, reason: collision with other inner class name */
    public interface InterfaceC0446a extends Parcelable {
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    public a(InterfaceC0446a... interfaceC0446aArr) {
        this.f6586a = interfaceC0446aArr;
    }

    public a(List<? extends InterfaceC0446a> list) {
        InterfaceC0446a[] interfaceC0446aArr = new InterfaceC0446a[list.size()];
        this.f6586a = interfaceC0446aArr;
        list.toArray(interfaceC0446aArr);
    }

    a(Parcel parcel) {
        this.f6586a = new InterfaceC0446a[parcel.readInt()];
        int i = 0;
        while (true) {
            InterfaceC0446a[] interfaceC0446aArr = this.f6586a;
            if (i >= interfaceC0446aArr.length) {
                return;
            }
            interfaceC0446aArr[i] = (InterfaceC0446a) parcel.readParcelable(InterfaceC0446a.class.getClassLoader());
            i++;
        }
    }

    public final int a() {
        return this.f6586a.length;
    }

    public final InterfaceC0446a a(int i) {
        return this.f6586a[i];
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || getClass() != obj.getClass()) {
            return false;
        }
        return Arrays.equals(this.f6586a, ((a) obj).f6586a);
    }

    public final int hashCode() {
        return Arrays.hashCode(this.f6586a);
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        parcel.writeInt(this.f6586a.length);
        for (InterfaceC0446a interfaceC0446a : this.f6586a) {
            parcel.writeParcelable(interfaceC0446a, 0);
        }
    }
}
