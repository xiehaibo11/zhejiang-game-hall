package com.reyun.tracking.b.b;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;

/* JADX INFO: loaded from: classes3.dex */
public abstract class j extends Binder implements i {
    public static i a(IBinder iBinder) {
        if (iBinder == null) {
            return null;
        }
        try {
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface("com.heytap.openid.IOpenID");
            if (iInterfaceQueryLocalInterface != null && (iInterfaceQueryLocalInterface instanceof i)) {
                return (i) iInterfaceQueryLocalInterface;
            }
            return new k(iBinder);
        } catch (Throwable unused) {
            return null;
        }
    }
}
