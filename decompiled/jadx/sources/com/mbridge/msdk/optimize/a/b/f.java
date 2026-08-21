package com.mbridge.msdk.optimize.a.b;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;

/* JADX INFO: compiled from: ZTEIDInterface.java */
/* JADX INFO: loaded from: classes2.dex */
public interface f extends IInterface {
    String a();

    /* JADX INFO: compiled from: ZTEIDInterface.java */
    public static abstract class a extends Binder implements f {

        /* JADX INFO: renamed from: com.mbridge.msdk.optimize.a.b.f$a$a, reason: collision with other inner class name */
        /* JADX INFO: compiled from: ZTEIDInterface.java */
        public static class C0283a implements f {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            private IBinder f3876a;

            public C0283a(IBinder iBinder) {
                this.f3876a = iBinder;
            }

            @Override // android.os.IInterface
            public final IBinder asBinder() {
                return this.f3876a;
            }

            @Override // com.mbridge.msdk.optimize.a.b.f
            public final String a() {
                String string;
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken("com.bun.lib.MsaIdInterface");
                    this.f3876a.transact(3, parcelObtain, parcelObtain2, 0);
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
        }
    }
}
