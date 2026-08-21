package com.ss.android.downloadlib.rg.df;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;
import android.text.TextUtils;
import com.ss.android.downloadlib.addownload.bm;
import com.ss.android.downloadlib.rg.df.pt;
import org.json.JSONObject;

public interface q extends IInterface {
    void rg(df dfVar, pt ptVar) throws RemoteException;

    public static abstract class rg extends Binder implements q {
        private static String rg = "";

        public static q rg(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(rg);
            if (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof q)) {
                return new rg(iBinder);
            }
            return (q) iInterfaceQueryLocalInterface;
        }

        @Override
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i == 1598968902) {
                parcel2.writeString(rg);
                return true;
            }
            if (i == 1) {
                parcel.enforceInterface(rg);
                rg(parcel.readInt() != 0 ? df.CREATOR.createFromParcel(parcel) : null, pt.rg.rg(parcel.readStrongBinder()));
                parcel2.writeNoException();
                return true;
            }
            return super.onTransact(i, parcel, parcel2, i2);
        }

        private static class rg implements q {
            private IBinder rg;

            rg(IBinder iBinder) {
                if (TextUtils.isEmpty(rg.rg)) {
                    JSONObject jSONObjectRz = bm.rz();
                    String unused = rg.rg = com.ss.android.socialbase.appdownloader.c.q.rg(jSONObjectRz.optString("r"), jSONObjectRz.optString("s"));
                }
                this.rg = iBinder;
            }

            @Override
            public IBinder asBinder() {
                return this.rg;
            }

            @Override
            public void rg(df dfVar, pt ptVar) throws RemoteException {
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
                    parcelObtain.writeStrongBinder(ptVar != null ? ptVar.asBinder() : null);
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
