package com.qihoo360.loader2;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.net.Uri;
import android.os.IBinder;
import android.os.RemoteException;
import android.text.TextUtils;
import com.qihoo360.i.IPluginManager;
import com.qihoo360.loader2.sp.IPref;
import com.qihoo360.loader2.sp.PrefImpl;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.base.IPC;
import com.qihoo360.replugin.component.process.ProcessPitProviderBase;
import com.qihoo360.replugin.component.process.ProcessPitProviderPersist;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.utils.CloseableUtils;
import java.util.Arrays;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class PluginProviderStub {
    private static final String KEY_COOKIE = "cookie";
    private static final String KEY_METHOD = "main_method";
    private static final String METHOD_START_PROCESS = "start_process";
    private static final String[] PROJECTION_MAIN = {RePlugin.PLUGIN_NAME_MAIN};
    private static final String SELECTION_MAIN_BINDER = "main_binder";
    private static final String SELECTION_MAIN_PREF = "main_pref";
    private static final String URL_PARAM_KEY_LOADED = "loaded";
    static IPref sPref;
    static PrefImpl sPrefImpl;

    public static final Cursor stubMain(Uri uri, String[] strArr, String str, String[] strArr2, String str2) {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "stubMain projection=" + Arrays.toString(strArr) + " selection=" + str);
        }
        if (SELECTION_MAIN_BINDER.equals(str)) {
            return BinderCursor.queryBinder(PMF.sPluginMgr.getHostBinder());
        }
        if (!SELECTION_MAIN_PREF.equals(str)) {
            return null;
        }
        initPref();
        return BinderCursor.queryBinder(sPrefImpl);
    }

    public static final Uri stubPlugin(Uri uri, ContentValues contentValues) {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "stubPlugin values=" + contentValues);
        }
        if (!TextUtils.equals(contentValues.getAsString(KEY_METHOD), METHOD_START_PROCESS)) {
            return null;
        }
        Uri uriBuild = new Uri.Builder().scheme("content").authority(IPluginManager.KEY_PROCESS).encodedPath("status").encodedQuery("loaded=1").build();
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "plugin provider: return uri=" + uriBuild);
        }
        long jLongValue = contentValues.getAsLong(KEY_COOKIE).longValue();
        if (PMF.sPluginMgr.mLocalCookie == 0) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "set cookie: " + jLongValue);
            }
            PMF.sPluginMgr.mLocalCookie = jLongValue;
        } else if (PMF.sPluginMgr.mLocalCookie != jLongValue) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "reset cookie: " + jLongValue);
            }
            PMF.sPluginMgr.mLocalCookie = jLongValue;
            PluginProcessMain.connectToHostSvc();
        }
        return uriBuild;
    }

    static final IBinder proxyFetchHostBinder(Context context) {
        return proxyFetchHostBinder(context, SELECTION_MAIN_BINDER);
    }

    static final IBinder proxyFetchHostPref(Context context) {
        return proxyFetchHostBinder(context, SELECTION_MAIN_PREF);
    }

    private static final IBinder proxyFetchHostBinder(Context context, String str) throws Throwable {
        Cursor cursor = null;
        try {
            Cursor cursorQuery = context.getContentResolver().query(ProcessPitProviderPersist.URI, PROJECTION_MAIN, str, null, null);
            try {
                if (cursorQuery == null) {
                    if (LogDebug.LOG) {
                        LogDebug.d(LogDebug.PLUGIN_TAG, "proxy fetch binder: cursor is null");
                    }
                    CloseableUtils.closeQuietly(cursorQuery);
                    return null;
                }
                while (cursorQuery.moveToNext()) {
                }
                IBinder binder = BinderCursor.getBinder(cursorQuery);
                if (LogDebug.LOG) {
                    LogDebug.d(LogDebug.PLUGIN_TAG, "proxy fetch binder: binder=" + binder);
                }
                CloseableUtils.closeQuietly(cursorQuery);
                return binder;
            } catch (Throwable th) {
                th = th;
                cursor = cursorQuery;
                CloseableUtils.closeQuietly(cursor);
                throw th;
            }
        } catch (Throwable th2) {
            th = th2;
        }
    }

    static final boolean proxyStartPluginProcess(Context context, int i) {
        ContentValues contentValues = new ContentValues();
        contentValues.put(KEY_METHOD, METHOD_START_PROCESS);
        contentValues.put(KEY_COOKIE, Long.valueOf(PMF.sPluginMgr.mLocalCookie));
        Uri uriInsert = context.getContentResolver().insert(ProcessPitProviderBase.buildUri(i), contentValues);
        if (LogDebug.LOG) {
            StringBuilder sb = new StringBuilder();
            sb.append("proxyStartPluginProcess insert.rc=");
            sb.append(uriInsert != null ? uriInsert.toString() : "null");
            LogDebug.d(LogDebug.PLUGIN_TAG, sb.toString());
        }
        if (uriInsert != null) {
            return true;
        }
        if (!LogDebug.LOG) {
            return false;
        }
        LogDebug.d(LogDebug.PLUGIN_TAG, "proxyStartPluginProcess failed");
        return false;
    }

    public static final IPref getPref(Context context) throws RemoteException {
        if (sPref == null) {
            if (IPC.isPersistentProcess()) {
                initPref();
            } else {
                IBinder iBinderProxyFetchHostPref = proxyFetchHostPref(context);
                iBinderProxyFetchHostPref.linkToDeath(new IBinder.DeathRecipient() { // from class: com.qihoo360.loader2.PluginProviderStub.1
                    @Override // android.os.IBinder.DeathRecipient
                    public void binderDied() {
                        PluginProviderStub.sPref = null;
                    }
                }, 0);
                sPref = IPref.Stub.asInterface(iBinderProxyFetchHostPref);
            }
        }
        return sPref;
    }

    static final void initPref() {
        if (sPrefImpl == null) {
            PrefImpl prefImpl = new PrefImpl();
            sPrefImpl = prefImpl;
            sPref = prefImpl;
        }
    }
}
