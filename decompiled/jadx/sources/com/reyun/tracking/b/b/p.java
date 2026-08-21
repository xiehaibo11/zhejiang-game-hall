package com.reyun.tracking.b.b;

import android.os.IBinder;
import android.os.Parcel;

/* JADX INFO: loaded from: classes3.dex */
public class p implements n {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private IBinder f4726a;

    public p(IBinder iBinder) {
        this.f4726a = iBinder;
    }

    @Override // com.reyun.tracking.b.b.n
    public String a() {
        String string;
        Parcel parcelObtain = Parcel.obtain();
        Parcel parcelObtain2 = Parcel.obtain();
        try {
            parcelObtain.writeInterfaceToken("com.bun.lib.MsaIdInterface");
            this.f4726a.transact(3, parcelObtain, parcelObtain2, 0);
            parcelObtain2.readException();
            string = parcelObtain2.readString();
        } catch (Throwable unused) {
            parcelObtain2.recycle();
            parcelObtain.recycle();
            string = null;
        }
        parcelObtain2.recycle();
        parcelObtain.recycle();
        return string;
    }

    @Override // android.os.IInterface
    public IBinder asBinder() {
        return this.f4726a;
    }
}
