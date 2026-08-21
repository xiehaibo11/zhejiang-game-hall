package com.tkay.china.a.a;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;

/* JADX INFO: loaded from: classes3.dex */
public interface h extends IInterface {

    public static abstract class a extends Binder implements h {
        public static h a(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            try {
                IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface("com.heytap.openid.IOpenID");
                return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof h)) ? new C0401a(iBinder) : (h) iInterfaceQueryLocalInterface;
            } catch (Throwable unused) {
                return null;
            }
        }

        /* JADX INFO: renamed from: com.tkay.china.a.a.h$a$a, reason: collision with other inner class name */
        public static class C0401a implements h {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            public IBinder f5877a;

            public C0401a(IBinder iBinder) {
                this.f5877a = iBinder;
            }

            public final String a(String str, String str2, String str3) {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    try {
                        parcelObtain.writeInterfaceToken("com.heytap.openid.IOpenID");
                        parcelObtain.writeString(str);
                        parcelObtain.writeString(str2);
                        parcelObtain.writeString(str3);
                        this.f5877a.transact(1, parcelObtain, parcelObtain2, 0);
                        parcelObtain2.readException();
                        return parcelObtain2.readString();
                    } catch (Exception e) {
                        e.printStackTrace();
                        parcelObtain.recycle();
                        parcelObtain2.recycle();
                        return null;
                    }
                } finally {
                    parcelObtain.recycle();
                    parcelObtain2.recycle();
                }
            }

            @Override // android.os.IInterface
            public final IBinder asBinder() {
                return this.f5877a;
            }
        }
    }
}
