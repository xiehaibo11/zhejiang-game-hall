package com.ss.android.download.api.clean;

import android.os.Parcel;
import android.os.Parcelable;

/* JADX INFO: loaded from: classes3.dex */
public class q implements Parcelable {
    public static final Parcelable.Creator<q> CREATOR = new Parcelable.Creator<q>() { // from class: com.ss.android.download.api.clean.q.1
        @Override // android.os.Parcelable.Creator
        /* JADX INFO: renamed from: rg, reason: merged with bridge method [inline-methods] */
        public q createFromParcel(Parcel parcel) {
            return new q(parcel);
        }

        @Override // android.os.Parcelable.Creator
        /* JADX INFO: renamed from: rg, reason: merged with bridge method [inline-methods] */
        public q[] newArray(int i) {
            return new q[i];
        }
    };
    protected String df;
    boolean pt;
    protected long q;
    private String rg;

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public q() {
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeString(this.df);
        parcel.writeLong(this.q);
        parcel.writeString(this.rg);
        parcel.writeInt(this.pt ? 1 : 0);
    }

    q(Parcel parcel) {
        this.df = parcel.readString();
        this.q = parcel.readLong();
        this.rg = parcel.readString();
        this.pt = parcel.readInt() == 1;
    }
}
