package com.tkay.expressad.exoplayer.g.c;

import com.tkay.expressad.exoplayer.g.a;

/* JADX INFO: loaded from: classes3.dex */
public abstract class b implements a.InterfaceC0446a {
    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public String toString() {
        return "SCTE-35 splice command: type=" + getClass().getSimpleName();
    }
}
