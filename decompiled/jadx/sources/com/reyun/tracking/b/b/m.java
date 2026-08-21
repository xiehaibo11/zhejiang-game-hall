package com.reyun.tracking.b.b;

import android.os.IBinder;
import android.os.Parcel;
import com.alipay.sdk.m.k0.a;

/* JADX INFO: loaded from: classes3.dex */
public class m implements l {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private IBinder f4725a;

    public m(IBinder iBinder) {
        this.f4725a = iBinder;
    }

    public String a() {
        String string;
        Parcel parcelObtain = Parcel.obtain();
        Parcel parcelObtain2 = Parcel.obtain();
        try {
            parcelObtain.writeInterfaceToken(a.AbstractBinderC0014a.f1206a);
            this.f4725a.transact(1, parcelObtain, parcelObtain2, 0);
            parcelObtain2.readException();
            string = parcelObtain2.readString();
        } catch (Throwable th) {
            parcelObtain2.recycle();
            parcelObtain.recycle();
            th.printStackTrace();
            string = null;
        }
        parcelObtain2.recycle();
        parcelObtain.recycle();
        return string;
    }

    @Override // android.os.IInterface
    public IBinder asBinder() {
        return this.f4725a;
    }
}
