package com.qihoo360.mobilesafe.svcmanager;

import android.database.Cursor;
import android.database.MatrixCursor;
import android.os.Bundle;
import android.os.IBinder;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class ServiceChannelCursor extends MatrixCursor {
    static final String[] DEFAULT_COLUMNS = {"s"};
    public static final String SERVER_CHANNEL_BUNDLE_KEY = "servicechannel";
    Bundle mBinderExtra;

    static final ServiceChannelCursor makeCursor(IBinder iBinder) {
        return new ServiceChannelCursor(DEFAULT_COLUMNS, iBinder);
    }

    static final IBinder getBinder(Cursor cursor) {
        Bundle extras = cursor.getExtras();
        extras.setClassLoader(ParcelBinder.class.getClassLoader());
        return ((ParcelBinder) extras.getParcelable(SERVER_CHANNEL_BUNDLE_KEY)).getIbinder();
    }

    public ServiceChannelCursor(String[] strArr, IBinder iBinder) {
        super(strArr);
        Bundle bundle = new Bundle();
        this.mBinderExtra = bundle;
        bundle.putParcelable(SERVER_CHANNEL_BUNDLE_KEY, new ParcelBinder(iBinder));
    }

    @Override
    public Bundle getExtras() {
        return this.mBinderExtra;
    }
}
