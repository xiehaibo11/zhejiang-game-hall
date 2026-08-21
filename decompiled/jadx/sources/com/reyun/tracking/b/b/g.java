package com.reyun.tracking.b.b;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;

/* JADX INFO: loaded from: classes3.dex */
public abstract class g extends Binder implements f {
    public static f a(IBinder iBinder) {
        if (iBinder == null) {
            return null;
        }
        try {
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface("com.heytap.openid.IOpenID");
            if (iInterfaceQueryLocalInterface != null && (iInterfaceQueryLocalInterface instanceof f)) {
                return (f) iInterfaceQueryLocalInterface;
            }
            return new h(iBinder);
        } catch (Throwable unused) {
            return null;
        }
    }
}
