package com.kwad.framework.filedownloader.d;

import android.os.Parcel;
import android.os.Parcelable;
import com.kwad.sdk.utils.ao;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public final class b implements Parcelable {
    public static final Parcelable.Creator<b> CREATOR = new Parcelable.Creator<b>() { // from class: com.kwad.framework.filedownloader.d.b.1
        private static b b(Parcel parcel) {
            return new b(parcel);
        }

        private static b[] bx(int i) {
            return new b[i];
        }

        @Override // android.os.Parcelable.Creator
        public final /* synthetic */ b createFromParcel(Parcel parcel) {
            return b(parcel);
        }

        @Override // android.os.Parcelable.Creator
        public final /* synthetic */ b[] newArray(int i) {
            return bx(i);
        }
    };
    private HashMap<String, List<String>> adZ;

    public b() {
    }

    protected b(Parcel parcel) {
        this.adZ = parcel.readHashMap(String.class.getClassLoader());
    }

    public final void bh(String str) {
        HashMap<String, List<String>> map = this.adZ;
        if (map == null) {
            return;
        }
        map.remove(str);
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    public final void o(String str, String str2) {
        ao.fE(str);
        ao.fE(str2);
        if (this.adZ == null) {
            this.adZ = new HashMap<>();
        }
        List<String> arrayList = this.adZ.get(str);
        if (arrayList == null) {
            arrayList = new ArrayList<>();
            this.adZ.put(str, arrayList);
        }
        if (arrayList.contains(str2)) {
            return;
        }
        arrayList.add(str2);
    }

    public final String toString() {
        return this.adZ.toString();
    }

    public final HashMap<String, List<String>> vl() {
        return this.adZ;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        parcel.writeMap(this.adZ);
    }
}
