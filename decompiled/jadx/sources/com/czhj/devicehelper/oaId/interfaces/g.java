package com.czhj.devicehelper.oaId.interfaces;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;

/* JADX INFO: loaded from: classes.dex */
public interface g extends IInterface {

    public static abstract class a extends Binder implements g {

        /* JADX INFO: renamed from: com.czhj.devicehelper.oaId.interfaces.g$a$a, reason: collision with other inner class name */
        public static class C0071a implements g {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            private IBinder f1746a;

            public C0071a(IBinder iBinder) {
                this.f1746a = iBinder;
            }

            @Override // com.czhj.devicehelper.oaId.interfaces.g
            public boolean a() {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken("com.bun.lib.MsaIdInterface");
                    this.f1746a.transact(2, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    if (parcelObtain2.readInt() != 0) {
                        return false;
                    }
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                    return true;
                } catch (Throwable th) {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                    th.printStackTrace();
                    return false;
                }
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.f1746a;
            }

            @Override // com.czhj.devicehelper.oaId.interfaces.g
            public String b() {
                String string;
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken("com.bun.lib.MsaIdInterface");
                    this.f1746a.transact(3, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    string = parcelObtain2.readString();
                } catch (Throwable unused) {
                    parcelObtain.recycle();
                    parcelObtain2.recycle();
                    string = null;
                }
                parcelObtain.recycle();
                parcelObtain2.recycle();
                return string;
            }

            @Override // com.czhj.devicehelper.oaId.interfaces.g
            public boolean c() {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken("com.bun.lib.MsaIdInterface");
                    this.f1746a.transact(1, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } catch (Exception unused) {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                    return false;
                }
            }

            @Override // com.czhj.devicehelper.oaId.interfaces.g
            public void d() {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken("com.bun.lib.MsaIdInterface");
                    this.f1746a.transact(6, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } catch (Throwable unused) {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
                parcelObtain2.recycle();
                parcelObtain.recycle();
            }
        }
    }

    boolean a();

    String b();

    boolean c();

    void d();
}
