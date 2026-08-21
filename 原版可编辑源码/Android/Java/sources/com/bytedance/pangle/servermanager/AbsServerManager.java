package com.bytedance.pangle.servermanager;

import android.content.ContentProvider;
import android.content.ContentValues;
import android.database.Cursor;
import android.net.Uri;
import android.os.Bundle;
import android.os.IBinder;

public abstract class AbsServerManager extends ContentProvider {
    static final String BUNDLE_BINDER = "binder";
    static final String METHOD_QUERY_BINDER = "query_binder";
    static final String PACKAGE_QUERY_BINDER = "package";
    static final String SERVICE_QUERY_BINDER = "service";

    @Override
    public int delete(Uri uri, String str, String[] strArr) {
        return 0;
    }

    @Override
    public String getType(Uri uri) {
        return null;
    }

    @Override
    public Uri insert(Uri uri, ContentValues contentValues) {
        return null;
    }

    @Override
    public boolean onCreate() {
        return false;
    }

    @Override
    public Cursor query(Uri uri, String[] strArr, String str, String[] strArr2, String str2) {
        return null;
    }

    @Override
    public int update(Uri uri, ContentValues contentValues, String str, String[] strArr) {
        return 0;
    }

    /* JADX WARN: Removed duplicated region for block: B:13:0x0024  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    protected IBinder onBind(String str) {
        byte b;
        int iHashCode = str.hashCode();
        if (iHashCode != -807062458) {
            b = (iHashCode == 1984153269 && str.equals("service")) ? (byte) 1 : (byte) -1;
        } else if (str.equals("package")) {
            b = 0;
        }
        if (b == 0) {
            return com.bytedance.pangle.f.a.b();
        }
        if (b != 1) {
            return null;
        }
        return com.bytedance.pangle.service.a.a.b();
    }

    @Override
    public Bundle call(String str, String str2, Bundle bundle) {
        IBinder iBinderOnBind;
        if (!METHOD_QUERY_BINDER.equals(str) || (iBinderOnBind = onBind(str2)) == null) {
            return null;
        }
        Bundle bundle2 = new Bundle();
        bundle2.putParcelable(BUNDLE_BINDER, new a(iBinderOnBind));
        return bundle2;
    }
}
