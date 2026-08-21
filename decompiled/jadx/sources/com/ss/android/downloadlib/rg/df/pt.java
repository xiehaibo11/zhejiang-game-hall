package com.ss.android.downloadlib.rg.df;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;
import android.text.TextUtils;
import com.ss.android.downloadlib.addownload.bm;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public interface pt extends IInterface {
    void rg(df dfVar) throws RemoteException;

    public static abstract class rg extends Binder implements pt {
        private static String rg = "";

        public static pt rg(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(rg);
            if (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof pt)) {
                return new C0352rg(iBinder);
            }
            return (pt) iInterfaceQueryLocalInterface;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i == 1) {
                parcel.enforceInterface(rg);
                rg(parcel.readInt() != 0 ? df.CREATOR.createFromParcel(parcel) : null);
                parcel2.writeNoException();
                return true;
            }
            if (i != 1598968902) {
                return super.onTransact(i, parcel, parcel2, i2);
            }
            parcel2.writeString(rg);
            return true;
        }

        /* JADX INFO: renamed from: com.ss.android.downloadlib.rg.df.pt$rg$rg, reason: collision with other inner class name */
        private static class C0352rg implements pt {
            private IBinder rg;

            C0352rg(IBinder iBinder) {
                if (TextUtils.isEmpty(rg.rg)) {
                    JSONObject jSONObjectRz = bm.rz();
                    String unused = rg.rg = com.ss.android.socialbase.appdownloader.c.q.rg(jSONObjectRz.optString("t"), jSONObjectRz.optString("s"));
                }
                this.rg = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.rg;
            }

            @Override // com.ss.android.downloadlib.rg.df.pt
            public void rg(df dfVar) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(rg.rg);
                    if (dfVar != null) {
                        parcelObtain.writeInt(1);
                        dfVar.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    this.rg.transact(1, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }
    }
}
