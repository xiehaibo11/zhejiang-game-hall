package com.qihoo360.replugin.component.provider;

import android.content.ContentProviderClient;
import android.content.ContentValues;
import android.content.Context;
import android.content.pm.ProviderInfo;
import android.database.ContentObserver;
import android.database.Cursor;
import android.net.Uri;
import android.os.CancellationSignal;
import android.os.ParcelFileDescriptor;
import android.text.TextUtils;
import android.util.Log;
import com.qihoo360.i.Factory;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.component.ComponentList;
import com.qihoo360.replugin.component.process.PluginProcessHost;
import com.qihoo360.replugin.component.utils.PluginClientHelper;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.helper.LogRelease;
import java.io.InputStream;
import java.io.OutputStream;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginProviderClient {
    private static final int PROCESS_UNKNOWN = Integer.MAX_VALUE;
    private static final String TAG = "PluginProviderClient";

    public static ContentProviderClient acquireContentProviderClient(Context context, String str) {
        return context.getContentResolver().acquireContentProviderClient(PluginPitProviderP0.AUTHORITY);
    }

    public static Cursor query(Context context, Uri uri, String[] strArr, String str, String[] strArr2, String str2) {
        return context.getContentResolver().query(toCalledUri(context, uri), strArr, str, strArr2, str2);
    }

    public static Cursor query(Context context, Uri uri, String[] strArr, String str, String[] strArr2, String str2, CancellationSignal cancellationSignal) {
        return context.getContentResolver().query(toCalledUri(context, uri), strArr, str, strArr2, str2, cancellationSignal);
    }

    public static String getType(Context context, Uri uri) {
        return context.getContentResolver().getType(toCalledUri(context, uri));
    }

    public static Uri insert(Context context, Uri uri, ContentValues contentValues) {
        return context.getContentResolver().insert(toCalledUri(context, uri), contentValues);
    }

    public static int bulkInsert(Context context, Uri uri, ContentValues[] contentValuesArr) {
        return context.getContentResolver().bulkInsert(toCalledUri(context, uri), contentValuesArr);
    }

    public static int delete(Context context, Uri uri, String str, String[] strArr) {
        return context.getContentResolver().delete(toCalledUri(context, uri), str, strArr);
    }

    public static int update(Context context, Uri uri, ContentValues contentValues, String str, String[] strArr) {
        return context.getContentResolver().update(toCalledUri(context, uri), contentValues, str, strArr);
    }

    public static InputStream openInputStream(Context context, Uri uri) {
        try {
            return context.getContentResolver().openInputStream(toCalledUri(context, uri));
        } catch (Throwable th) {
            th.printStackTrace();
            return null;
        }
    }

    public static OutputStream openOutputStream(Context context, Uri uri) {
        try {
            return context.getContentResolver().openOutputStream(toCalledUri(context, uri));
        } catch (Throwable th) {
            th.printStackTrace();
            return null;
        }
    }

    public static OutputStream openOutputStream(Context context, Uri uri, String str) {
        try {
            return context.getContentResolver().openOutputStream(toCalledUri(context, uri), str);
        } catch (Throwable th) {
            th.printStackTrace();
            return null;
        }
    }

    public static ParcelFileDescriptor openFileDescriptor(Context context, Uri uri, String str) {
        try {
            return context.getContentResolver().openFileDescriptor(toCalledUri(context, uri), str);
        } catch (Throwable th) {
            th.printStackTrace();
            return null;
        }
    }

    public static ParcelFileDescriptor openFileDescriptor(Context context, Uri uri, String str, CancellationSignal cancellationSignal) {
        try {
            return context.getContentResolver().openFileDescriptor(toCalledUri(context, uri), str, cancellationSignal);
        } catch (Throwable th) {
            th.printStackTrace();
            return null;
        }
    }

    public static void registerContentObserver(Context context, Uri uri, boolean z, ContentObserver contentObserver) {
        try {
            context.getContentResolver().registerContentObserver(toCalledUri(context, uri), z, contentObserver);
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public static void notifyChange(Context context, Uri uri, ContentObserver contentObserver) {
        context.getContentResolver().notifyChange(toCalledUri(context, uri), contentObserver);
    }

    public static void notifyChange(Context context, Uri uri, ContentObserver contentObserver, boolean z) {
        context.getContentResolver().notifyChange(toCalledUri(context, uri), contentObserver, z);
    }

    public static Uri toCalledUri(Context context, Uri uri) {
        String strFetchPluginByContext = fetchPluginByContext(context, uri);
        return strFetchPluginByContext == null ? uri : toCalledUri(context, strFetchPluginByContext, uri, Integer.MIN_VALUE);
    }

    public static Uri toCalledUri(Context context, String str, Uri uri, int i) {
        String str2;
        if (TextUtils.isEmpty(str)) {
            throw new IllegalArgumentException();
        }
        if (uri == null) {
            throw new IllegalArgumentException();
        }
        if (uri.getAuthority().startsWith(PluginPitProviderBase.AUTHORITY_PREFIX)) {
            return uri;
        }
        if (i == Integer.MIN_VALUE && (i = getProcessByAuthority(str, uri.getAuthority())) == Integer.MAX_VALUE) {
            return uri;
        }
        if (i == -2) {
            str2 = PluginPitProviderPersist.AUTHORITY;
        } else if (PluginProcessHost.isCustomPluginProcess(i)) {
            str2 = PluginProcessHost.PROCESS_AUTHORITY_MAP.get(i);
        } else {
            str2 = PluginPitProviderUI.AUTHORITY;
        }
        return Uri.parse(String.format("content://%s/%s/%s", str2, str, uri.toString().replace("content://", "")));
    }

    private static String fetchPluginByContext(Context context, Uri uri) {
        String strFetchPluginName = Factory.fetchPluginName(context.getClassLoader());
        if (TextUtils.isEmpty(strFetchPluginName)) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "ppc.fubc: pn is n. u=" + uri);
            return null;
        }
        if (TextUtils.equals(strFetchPluginName, RePlugin.PLUGIN_NAME_MAIN)) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "PluginProviderClient.fubc(): Call Main! u=" + uri);
            }
            return null;
        }
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "PluginProviderClient.fubc(): Call Plugin! u=" + uri);
        }
        return strFetchPluginName;
    }

    private static int getProcessByAuthority(String str, String str2) {
        ComponentList componentListQueryPluginComponentList = Factory.queryPluginComponentList(str);
        if (componentListQueryPluginComponentList == null) {
            if (LogDebug.LOG) {
                Log.e(TAG, "getProcessByAuthority(): Fetch Component List Error! pn=" + str + "; au=" + str2);
            }
            return Integer.MAX_VALUE;
        }
        ProviderInfo providerByAuthority = componentListQueryPluginComponentList.getProviderByAuthority(str2);
        if (providerByAuthority == null) {
            if (LogDebug.LOG) {
                Log.e(TAG, "getProcessByAuthority(): Not register! pn=" + str + "; au=" + str2);
            }
            return Integer.MAX_VALUE;
        }
        int iIntValue = PluginClientHelper.getProcessInt(providerByAuthority.processName).intValue();
        if (LogDebug.LOG) {
            Log.d(TAG, "getProcessByAuthority(): Okay! Process=" + iIntValue + "; pn=" + str);
        }
        return iIntValue;
    }
}
