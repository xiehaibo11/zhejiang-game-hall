package com.reyun.tracking.b.b;

import android.os.IBinder;
import android.os.Parcel;

/* JADX INFO: loaded from: classes3.dex */
public final class b implements a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private IBinder f4721a;

    public b(IBinder iBinder) {
        this.f4721a = iBinder;
    }

    public String a() {
        String string;
        Parcel parcelObtain = Parcel.obtain();
        Parcel parcelObtain2 = Parcel.obtain();
        try {
            parcelObtain.writeInterfaceToken("com.asus.msa.SupplementaryDID.IDidAidlInterface");
            this.f4721a.transact(3, parcelObtain, parcelObtain2, 0);
            parcelObtain2.readException();
            string = parcelObtain2.readString();
        } catch (Throwable th) {
            parcelObtain.recycle();
            parcelObtain2.recycle();
            th.printStackTrace();
            string = null;
        }
        parcelObtain.recycle();
        parcelObtain2.recycle();
        return string;
    }

    @Override // android.os.IInterface
    public IBinder asBinder() {
        return this.f4721a;
    }
}
