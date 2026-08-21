package com.mbridge.msdk.optimize.a.b;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;

/* JADX INFO: compiled from: OnePlusIDInterface.java */
/* JADX INFO: loaded from: classes2.dex */
public interface c extends IInterface {

    /* JADX INFO: compiled from: OnePlusIDInterface.java */
    public static abstract class a extends Binder implements c {

        /* JADX INFO: renamed from: com.mbridge.msdk.optimize.a.b.c$a$a, reason: collision with other inner class name */
        /* JADX INFO: compiled from: OnePlusIDInterface.java */
        public static class C0281a implements c {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            public IBinder f3873a;

            public C0281a(IBinder iBinder) {
                this.f3873a = iBinder;
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
                        this.f3873a.transact(1, parcelObtain, parcelObtain2, 0);
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
                return this.f3873a;
            }
        }

        public static c a(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            try {
                IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface("com.heytap.openid.IOpenID");
                if (iInterfaceQueryLocalInterface != null && (iInterfaceQueryLocalInterface instanceof c)) {
                    return (c) iInterfaceQueryLocalInterface;
                }
                return new C0281a(iBinder);
            } catch (Throwable unused) {
                return null;
            }
        }
    }
}
