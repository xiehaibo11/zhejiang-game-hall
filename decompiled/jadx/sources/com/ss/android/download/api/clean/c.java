package com.ss.android.download.api.clean;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class c extends pp implements Parcelable {
    public static final Parcelable.Creator<c> CREATOR = new Parcelable.Creator<c>() { // from class: com.ss.android.download.api.clean.c.1
        @Override // android.os.Parcelable.Creator
        /* JADX INFO: renamed from: rg, reason: merged with bridge method [inline-methods] */
        public c createFromParcel(Parcel parcel) {
            return new c(parcel);
        }

        @Override // android.os.Parcelable.Creator
        /* JADX INFO: renamed from: rg, reason: merged with bridge method [inline-methods] */
        public c[] newArray(int i) {
            return new c[i];
        }
    };
    private Map<String, pp> c;
    private boolean fw;
    private List<pp> pp;
    private String rg;

    @Override // com.ss.android.download.api.clean.pp, com.ss.android.download.api.clean.q, android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // com.ss.android.download.api.clean.pp
    public String rg() {
        return "clean_folder";
    }

    public c() {
        this.pp = new ArrayList();
        this.c = new HashMap();
    }

    @Override // com.ss.android.download.api.clean.pp, com.ss.android.download.api.clean.q, android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        super.writeToParcel(parcel, i);
        parcel.writeString(this.rg);
        parcel.writeInt(this.fw ? 1 : 0);
        parcel.writeInt(this.c.size());
        for (Map.Entry<String, pp> entry : this.c.entrySet()) {
            String key = entry.getKey();
            pp value = entry.getValue();
            parcel.writeString(key);
            parcel.writeString(value.rg());
            parcel.writeParcelable(value, 0);
        }
    }

    c(Parcel parcel) {
        Parcelable parcelable;
        super(parcel);
        this.pp = new ArrayList();
        this.c = new HashMap();
        this.rg = parcel.readString();
        this.fw = parcel.readInt() == 1;
        int i = parcel.readInt();
        for (int i2 = 0; i2 < i; i2++) {
            String string = parcel.readString();
            String string2 = parcel.readString();
            if ("apk_clean_file".equals(string2)) {
                parcelable = parcel.readParcelable(rg.class.getClassLoader());
            } else if ("clean_app_cache".equals(string2)) {
                parcelable = parcel.readParcelable(pt.class.getClassLoader());
            } else if ("clean_folder".equals(string2)) {
                parcelable = parcel.readParcelable(c.class.getClassLoader());
            } else {
                parcelable = parcel.readParcelable(pp.class.getClassLoader());
            }
            this.c.put(string, (pp) parcelable);
        }
    }
}
