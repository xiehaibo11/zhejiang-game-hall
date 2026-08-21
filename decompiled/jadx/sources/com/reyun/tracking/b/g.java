package com.reyun.tracking.b;

import android.os.IBinder;
import android.os.Parcel;

/* JADX INFO: loaded from: classes3.dex */
class g implements e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private IBinder f4728a;

    g(IBinder iBinder) {
        this.f4728a = iBinder;
    }

    @Override // com.reyun.tracking.b.e
    public String a() {
        Parcel parcelObtain = Parcel.obtain();
        Parcel parcelObtain2 = Parcel.obtain();
        try {
            parcelObtain.writeInterfaceToken(com.alipay.sdk.m.c.b.f1163a);
            this.f4728a.transact(1, parcelObtain, parcelObtain2, 0);
            parcelObtain2.readException();
            return parcelObtain2.readString();
        } finally {
            parcelObtain2.recycle();
            parcelObtain.recycle();
        }
    }

    @Override // android.os.IInterface
    public IBinder asBinder() {
        return this.f4728a;
    }

    @Override // com.reyun.tracking.b.e
    public boolean b() {
        Parcel parcelObtain = Parcel.obtain();
        Parcel parcelObtain2 = Parcel.obtain();
        try {
            parcelObtain.writeInterfaceToken(com.alipay.sdk.m.c.b.f1163a);
            this.f4728a.transact(2, parcelObtain, parcelObtain2, 0);
            parcelObtain2.readException();
            return parcelObtain2.readInt() != 0;
        } finally {
            parcelObtain2.recycle();
            parcelObtain.recycle();
        }
    }
}
