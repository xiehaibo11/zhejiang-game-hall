package com.reyun.tracking.b;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;

/* JADX INFO: loaded from: classes3.dex */
public abstract class f extends Binder implements e {
    public static e a(IBinder iBinder) {
        if (iBinder == null) {
            return null;
        }
        IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(com.alipay.sdk.m.c.b.f1163a);
        return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof e)) ? new g(iBinder) : (e) iInterfaceQueryLocalInterface;
    }

    @Override // android.os.Binder
    public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) {
        if (i == 1) {
            parcel.enforceInterface(com.alipay.sdk.m.c.b.f1163a);
            String strA = a();
            parcel2.writeNoException();
            parcel2.writeString(strA);
            return true;
        }
        if (i != 2) {
            if (i != 1598968902) {
                return super.onTransact(i, parcel, parcel2, i2);
            }
            parcel2.writeString(com.alipay.sdk.m.c.b.f1163a);
            return true;
        }
        parcel.enforceInterface(com.alipay.sdk.m.c.b.f1163a);
        boolean zB = b();
        parcel2.writeNoException();
        parcel2.writeInt(zB ? 1 : 0);
        return true;
    }
}
