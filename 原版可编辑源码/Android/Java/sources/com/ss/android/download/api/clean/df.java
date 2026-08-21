package com.ss.android.download.api.clean;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class df extends c implements Parcelable {
    public static final Parcelable.Creator<df> CREATOR = new Parcelable.Creator<df>() {
        @Override
        public df createFromParcel(Parcel parcel) {
            return new df(parcel);
        }

        @Override
        public df[] newArray(int i) {
            return new df[i];
        }
    };
    List<c> rg;

    @Override
    public int describeContents() {
        return 0;
    }

    public df() {
        this.rg = new ArrayList();
    }

    df(Parcel parcel) {
        super(parcel);
        this.rg = new ArrayList();
        int i = parcel.readInt();
        for (int i2 = 0; i2 < i; i2++) {
            this.rg.add((c) parcel.readParcelable(c.class.getClassLoader()));
        }
    }

    @Override
    public void writeToParcel(Parcel parcel, int i) {
        super.writeToParcel(parcel, i);
        if (this.rg == null) {
            this.rg = new ArrayList();
        }
        parcel.writeInt(this.rg.size());
        Iterator<c> it = this.rg.iterator();
        while (it.hasNext()) {
            parcel.writeParcelable(it.next(), 0);
        }
    }
}
