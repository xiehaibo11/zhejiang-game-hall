package com.ss.android.download.api.clean;

import android.os.Parcel;
import android.os.Parcelable;

public class pp extends q implements Parcelable {
    public static final Parcelable.Creator<pp> CREATOR = new Parcelable.Creator<pp>() {
        @Override
        public pp createFromParcel(Parcel parcel) {
            return new pp(parcel);
        }

        @Override
        public pp[] newArray(int i) {
            return new pp[i];
        }
    };
    private boolean c;
    private String fw;
    private String pp;
    private String rg;

    @Override
    public int describeContents() {
        return 0;
    }

    public String rg() {
        return this.fw;
    }

    public pp() {
        this.fw = "clean_file";
    }

    @Override
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
