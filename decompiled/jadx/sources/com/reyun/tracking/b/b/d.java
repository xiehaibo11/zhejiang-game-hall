package com.reyun.tracking.b.b;

import android.os.Binder;
import android.os.Parcel;
import com.alipay.sdk.m.q0.a;

/* JADX INFO: loaded from: classes3.dex */
public abstract class d extends Binder implements c {
    @Override // android.os.Binder
    protected boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) {
        String strA;
        if (i == 1) {
            parcel.enforceInterface(a.AbstractBinderC0019a.f1238a);
            strA = a();
        } else if (i == 2) {
            parcel.enforceInterface(a.AbstractBinderC0019a.f1238a);
            strA = b();
        } else {
            if (i == 3) {
                parcel.enforceInterface(a.AbstractBinderC0019a.f1238a);
                boolean zC = c();
                parcel2.writeNoException();
                parcel2.writeInt(zC ? 1 : 0);
                return true;
            }
            if (i == 4) {
                parcel.enforceInterface(a.AbstractBinderC0019a.f1238a);
                strA = a(parcel.readString());
            } else {
                if (i != 5) {
                    if (i != 1598968902) {
                        return super.onTransact(i, parcel, parcel2, i2);
                    }
                    parcel2.writeString(a.AbstractBinderC0019a.f1238a);
                    return true;
                }
                parcel.enforceInterface(a.AbstractBinderC0019a.f1238a);
                strA = b(parcel.readString());
            }
        }
        parcel2.writeNoException();
        parcel2.writeString(strA);
        return true;
    }
}
