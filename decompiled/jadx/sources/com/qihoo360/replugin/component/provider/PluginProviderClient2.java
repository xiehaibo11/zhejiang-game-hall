package com.qihoo360.replugin.component.provider;

import android.content.ContentProviderClient;
import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.net.Uri;
import android.os.CancellationSignal;
import android.os.RemoteException;
import android.util.Log;
import com.qihoo360.replugin.helper.LogDebug;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class PluginProviderClient2 {
    private static final String TAG = "PluginProviderClient2";

    public static Cursor query(Context context, Uri uri, String[] strArr, String str, String[] strArr2, String str2) {
        ContentProviderClient contentProviderClientAcquireContentProviderClient = PluginProviderClient.acquireContentProviderClient(context, "");
        if (contentProviderClientAcquireContentProviderClient != null) {
            try {
                return contentProviderClientAcquireContentProviderClient.query(PluginProviderClient.toCalledUri(context, uri), strArr, str, strArr2, str2);
            } catch (RemoteException e) {
                if (LogDebug.LOG) {
                    Log.d(TAG, e.toString());
                }
            }
        }
        if (!LogDebug.LOG) {
            return null;
        }
        Log.d(TAG, String.format("call query1 %s fail", uri.toString()));
        return null;
    }

    public static Cursor query(Context context, Uri uri, String[] strArr, String str, String[] strArr2, String str2, CancellationSignal cancellationSignal) {
        ContentProviderClient contentProviderClientAcquireContentProviderClient = PluginProviderClient.acquireContentProviderClient(context, "");
        if (contentProviderClientAcquireContentProviderClient != null) {
            try {
                return contentProviderClientAcquireContentProviderClient.query(PluginProviderClient.toCalledUri(context, uri), strArr, str, strArr2, str2, cancellationSignal);
            } catch (RemoteException e) {
                if (LogDebug.LOG) {
                    Log.d(TAG, e.toString());
                }
            }
        }
        if (!LogDebug.LOG) {
            return null;
        }
        Log.d(TAG, String.format("call query2 %s fail", uri.toString()));
        return null;
    }

    public static int update(Context context, Uri uri, ContentValues contentValues, String str, String[] strArr) {
        ContentProviderClient contentProviderClientAcquireContentProviderClient = PluginProviderClient.acquireContentProviderClient(context, "");
        if (contentProviderClientAcquireContentProviderClient != null) {
            try {
                return contentProviderClientAcquireContentProviderClient.update(PluginProviderClient.toCalledUri(context, uri), contentValues, str, strArr);
            } catch (RemoteException e) {
                if (LogDebug.LOG) {
                    Log.d(TAG, e.toString());
                }
            }
        }
        if (!LogDebug.LOG) {
            return -1;
        }
        Log.d(TAG, String.format("call update %s", uri.toString()));
        return -1;
    }
}
