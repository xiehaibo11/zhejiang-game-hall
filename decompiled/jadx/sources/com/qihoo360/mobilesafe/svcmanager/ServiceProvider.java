package com.qihoo360.mobilesafe.svcmanager;

import android.content.ContentProvider;
import android.content.ContentValues;
import android.database.Cursor;
import android.net.Uri;
import android.util.Log;
import com.qihoo360.mobilesafe.core.BuildConfig;
import com.qihoo360.replugin.base.IPC;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class ServiceProvider extends ContentProvider {
    public static final String PATH_SERVER_CHANNEL = "severchannel";
    private static final String TAG = "ServerProvider";
    private static final boolean DEBUG = BuildConfig.DEBUG;
    public static final String AUTHORITY = IPC.getPackageName() + ".svcmanager";

    @Override // android.content.ContentProvider
    public int delete(Uri uri, String str, String[] strArr) {
        return 0;
    }

    @Override // android.content.ContentProvider
    public String getType(Uri uri) {
        return null;
    }

    @Override // android.content.ContentProvider
    public Uri insert(Uri uri, ContentValues contentValues) {
        return null;
    }

    @Override // android.content.ContentProvider
    public int update(Uri uri, ContentValues contentValues, String str, String[] strArr) {
        return 0;
    }

    @Override // android.content.ContentProvider
    public boolean onCreate() {
        if (!DEBUG) {
            return true;
        }
        Log.d(TAG, "[onCreate] App = " + getContext().getApplicationContext());
        return true;
    }

    @Override // android.content.ContentProvider
    public Cursor query(Uri uri, String[] strArr, String str, String[] strArr2, String str2) {
        if (DEBUG) {
            StringBuilder sb = new StringBuilder();
            sb.append("[query] uri = ");
            sb.append(uri == null ? "null" : uri.toString());
            Log.d(TAG, sb.toString());
        }
        return ServiceChannelImpl.sServiceChannelCursor;
    }
}
