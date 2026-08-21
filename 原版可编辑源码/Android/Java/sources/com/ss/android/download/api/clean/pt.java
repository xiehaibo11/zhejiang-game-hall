package com.ss.android.download.api.clean;

import android.os.Parcel;
import android.os.Parcelable;

public class pt extends df implements Parcelable {
    public static final Parcelable.Creator<pt> CREATOR = new Parcelable.Creator<pt>() {
        @Override
        public pt createFromParcel(Parcel parcel) {
            return new pt(parcel);
        }

        @Override
        public pt[] newArray(int i) {
            return new pt[i];
        }
    };
    private String pp;

    @Override
    public int describeContents() {
        return 0;
    }

    @Override
    public String rg() {
        return "clean_app_cache";
    }

    public pt() {
    }

    pt(Parcel parcel) {
        this.pp = parcel.readString();
    }

    @Override
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeString(this.pp);
    }
}
