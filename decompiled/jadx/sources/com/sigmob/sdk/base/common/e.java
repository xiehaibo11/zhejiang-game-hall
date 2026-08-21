package com.sigmob.sdk.base.common;

import android.os.Parcel;

/* JADX INFO: loaded from: classes3.dex */
public class e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f4819a;
    private int b;

    public e(int i, int i2) {
        this.f4819a = i;
        this.b = i2;
    }

    protected e(Parcel parcel) {
        this.f4819a = parcel.readInt();
        this.b = parcel.readInt();
    }

    public int a() {
        return this.f4819a;
    }

    public void a(int i) {
        this.f4819a = i;
    }

    public int b() {
        return this.b;
    }

    public void b(int i) {
        this.b = i;
    }
}
