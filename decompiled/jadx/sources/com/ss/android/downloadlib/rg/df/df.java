package com.ss.android.downloadlib.rg.df;

import android.os.Parcel;
import android.os.Parcelable;

/* JADX INFO: loaded from: classes3.dex */
public class df implements Parcelable {
    public static final Parcelable.Creator<df> CREATOR = new Parcelable.Creator<df>() { // from class: com.ss.android.downloadlib.rg.df.df.1
        @Override // android.os.Parcelable.Creator
        /* JADX INFO: renamed from: rg, reason: merged with bridge method [inline-methods] */
        public df createFromParcel(Parcel parcel) {
            return new df(parcel);
        }

        @Override // android.os.Parcelable.Creator
        /* JADX INFO: renamed from: rg, reason: merged with bridge method [inline-methods] */
        public df[] newArray(int i) {
            return new df[i];
        }
    };
    public String c;
    public int df;
    public String pp;
    public int pt;
    public String q;
    public int rg;

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public String toString() {
        return "";
    }

    public df() {
        this.q = "";
        this.pp = "";
        this.c = "";
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeInt(this.rg);
        parcel.writeInt(this.df);
        parcel.writeString(this.q);
        parcel.writeString(this.pp);
        parcel.writeString(this.c);
        parcel.writeInt(this.pt);
    }

    protected df(Parcel parcel) {
        this.q = "";
        this.pp = "";
        this.c = "";
        this.rg = parcel.readInt();
        this.df = parcel.readInt();
        this.q = parcel.readString();
        this.pp = parcel.readString();
        this.c = parcel.readString();
        this.pt = parcel.readInt();
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && getClass() == obj.getClass()) {
            df dfVar = (df) obj;
            if (this.rg == dfVar.rg && this.df == dfVar.df) {
                String str = this.q;
                if (str != null) {
                    return str.equals(dfVar.q);
                }
                if (dfVar.q == null) {
                    return true;
                }
            }
        }
        return false;
    }

    public int hashCode() {
        int i = ((this.rg * 31) + this.df) * 31;
        String str = this.q;
        return i + (str != null ? str.hashCode() : 0);
    }
}
