package com.ss.android.download.api.clean;

import android.os.Parcel;
import android.os.Parcelable;

/* JADX INFO: loaded from: classes3.dex */
public class pp extends q implements Parcelable {
    public static final Parcelable.Creator<pp> CREATOR = new Parcelable.Creator<pp>() { // from class: com.ss.android.download.api.clean.pp.1
        @Override // android.os.Parcelable.Creator
        /* JADX INFO: renamed from: rg, reason: merged with bridge method [inline-methods] */
        public pp createFromParcel(Parcel parcel) {
            return new pp(parcel);
        }

        @Override // android.os.Parcelable.Creator
        /* JADX INFO: renamed from: rg, reason: merged with bridge method [inline-methods] */
        public pp[] newArray(int i) {
            return new pp[i];
        }
    };
    private boolean c;
    private String fw;
    private String pp;
    private String rg;

    @Override // com.ss.android.download.api.clean.q, android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public String rg() {
        return this.fw;
    }

    public pp() {
        this.fw = "clean_file";
    }

    @Override // com.ss.android.download.api.clean.q, android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeString(this.rg);
        parcel.writeString(this.pp);
        parcel.writeInt(this.c ? 1 : 0);
        parcel.writeString(this.fw);
    }

    pp(Parcel parcel) {
        this.fw = "clean_file";
        this.rg = parcel.readString();
        this.pp = parcel.readString();
        this.c = parcel.readInt() == 1;
        this.fw = parcel.readString();
    }
}
