package com.qihoo360.loader2;

import android.database.Cursor;
import android.database.MatrixCursor;
import android.os.Bundle;
import android.os.IBinder;
import android.os.Parcel;
import android.os.Parcelable;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.model.PluginInfo;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class BinderCursor extends MatrixCursor {
    static final String BINDER_KEY = "binder";
    Bundle mBinderExtra;

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static class BinderParcelable implements Parcelable {
        public static final Parcelable.Creator<BinderParcelable> CREATOR = new Parcelable.Creator<BinderParcelable>() {
            @Override
            public BinderParcelable createFromParcel(Parcel parcel) {
                return new BinderParcelable(parcel);
            }

            @Override
            public BinderParcelable[] newArray(int i) {
                return new BinderParcelable[i];
            }
        };
        IBinder mBinder;

        @Override
        public int describeContents() {
            return 0;
        }

        BinderParcelable(IBinder iBinder) {
            this.mBinder = iBinder;
        }

        BinderParcelable() {
        }

        BinderParcelable(Parcel parcel) {
            this.mBinder = parcel.readStrongBinder();
        }

        @Override
        public void writeToParcel(Parcel parcel, int i) {
            parcel.writeStrongBinder(this.mBinder);
        }
    }

    public BinderCursor(String[] strArr, IBinder iBinder) {
        super(strArr);
        this.mBinderExtra = new Bundle();
        if (iBinder != null) {
            this.mBinderExtra.putParcelable(BINDER_KEY, new BinderParcelable(iBinder));
        }
    }

    @Override
    public Bundle getExtras() {
        return this.mBinderExtra;
    }

    public static final Cursor queryBinder(IBinder iBinder) {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "query binder = " + iBinder);
        }
        return new BinderCursor(PluginInfo.QUERY_COLUMNS, iBinder);
    }

    public static final IBinder getBinder(Cursor cursor) {
        Bundle extras = cursor.getExtras();
        extras.setClassLoader(BinderCursor.class.getClassLoader());
        BinderParcelable binderParcelable = (BinderParcelable) extras.getParcelable(BINDER_KEY);
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "get binder = " + binderParcelable.mBinder);
        }
        return binderParcelable.mBinder;
    }
}
