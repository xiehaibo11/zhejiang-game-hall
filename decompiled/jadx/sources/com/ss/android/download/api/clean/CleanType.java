package com.ss.android.download.api.clean;

import android.os.Parcel;
import android.os.Parcelable;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class CleanType extends df implements Parcelable {
    public static final Parcelable.Creator<CleanType> CREATOR = new Parcelable.Creator<CleanType>() { // from class: com.ss.android.download.api.clean.CleanType.1
        @Override // android.os.Parcelable.Creator
        /* JADX INFO: renamed from: rg, reason: merged with bridge method [inline-methods] */
        public CleanType createFromParcel(Parcel parcel) {
            return new CleanType(parcel);
        }

        @Override // android.os.Parcelable.Creator
        /* JADX INFO: renamed from: rg, reason: merged with bridge method [inline-methods] */
        public CleanType[] newArray(int i) {
            return new CleanType[i];
        }
    };
    private Map<String, pt> c;
    private int pp;

    @Retention(RetentionPolicy.SOURCE)
    public @interface Type {
        public static final int APK = -1;
        public static final int CACHE = -3;
        public static final int LOG = -2;
        public static final int OTHERS = -5;
        public static final int REMAIN = -4;
    }

    public int getType() {
        return this.pp;
    }

    public CleanType() {
        this.c = new HashMap();
    }

    CleanType(Parcel parcel) {
        super(parcel);
        this.c = new HashMap();
        this.pp = parcel.readInt();
        int i = parcel.readInt();
        for (int i2 = 0; i2 < i; i2++) {
            this.c.put(parcel.readString(), (pt) parcel.readParcelable(pt.class.getClassLoader()));
        }
    }

    @Override // com.ss.android.download.api.clean.df, com.ss.android.download.api.clean.c, com.ss.android.download.api.clean.pp, com.ss.android.download.api.clean.q, android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        super.writeToParcel(parcel, i);
        parcel.writeInt(this.pp);
        parcel.writeInt(this.c.size());
        for (Map.Entry<String, pt> entry : this.c.entrySet()) {
            try {
                String key = entry.getKey();
                pt value = entry.getValue();
                parcel.writeString(key);
                parcel.writeParcelable(value, 0);
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }
}
