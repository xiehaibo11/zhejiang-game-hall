package com.ss.android.download.api.clean;

import android.os.Parcel;
import android.os.Parcelable;

/* JADX INFO: loaded from: classes3.dex */
public class pt extends df implements Parcelable {
    public static final Parcelable.Creator<pt> CREATOR = new Parcelable.Creator<pt>() { // from class: com.ss.android.download.api.clean.pt.1
        @Override // android.os.Parcelable.Creator
        /* JADX INFO: renamed from: rg, reason: merged with bridge method [inline-methods] */
        public pt createFromParcel(Parcel parcel) {
            return new pt(parcel);
        }

        @Override // android.os.Parcelable.Creator
        /* JADX INFO: renamed from: rg, reason: merged with bridge method [inline-methods] */
        public pt[] newArray(int i) {
            return new pt[i];
        }
    };
    private String pp;

    @Override // com.ss.android.download.api.clean.df, com.ss.android.download.api.clean.c, com.ss.android.download.api.clean.pp, com.ss.android.download.api.clean.q, android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // com.ss.android.download.api.clean.c, com.ss.android.download.api.clean.pp
    public String rg() {
        return "clean_app_cache";
    }

    public pt() {
    }

    pt(Parcel parcel) {
        this.pp = parcel.readString();
    }

    @Override // com.ss.android.download.api.clean.df, com.ss.android.download.api.clean.c, com.ss.android.download.api.clean.pp, com.ss.android.download.api.clean.q, android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeString(this.pp);
    }
}
