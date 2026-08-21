package com.tkay.china.a.a;

import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;

/* JADX INFO: loaded from: classes3.dex */
public final class a implements IInterface {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private IBinder f5866a;

    public a(IBinder iBinder) {
        this.f5866a = iBinder;
    }

    @Override // android.os.IInterface
    public final IBinder asBinder() {
        return this.f5866a;
    }

    public final String a() {
        String string;
        Parcel parcelObtain = Parcel.obtain();
        Parcel parcelObtain2 = Parcel.obtain();
        try {
            parcelObtain.writeInterfaceToken("com.asus.msa.SupplementaryDID.IDidAidlInterface");
            this.f5866a.transact(3, parcelObtain, parcelObtain2, 0);
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
}
