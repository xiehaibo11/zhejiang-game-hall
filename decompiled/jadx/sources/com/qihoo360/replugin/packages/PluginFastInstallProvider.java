package com.qihoo360.replugin.packages;

import android.content.ContentProvider;
import android.content.ContentValues;
import android.database.Cursor;
import android.net.Uri;
import android.text.TextUtils;
import com.qihoo360.loader2.PMF;
import com.qihoo360.replugin.base.IPC;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.model.PluginInfo;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class PluginFastInstallProvider extends ContentProvider {
    public static final String AUTHORITY = IPC.getPackageName() + ".loader.p.pip";
    public static final Uri CONTENT_URI = Uri.parse("content://" + AUTHORITY);
    public static final String KEY_PLUGIN_INFO = "pi";
    public static final String SELECTION_INSTALL = "inst";
    private static final String TAG = "PluginFastInstallPv";

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
    public boolean onCreate() {
        return true;
    }

    @Override // android.content.ContentProvider
    public Cursor query(Uri uri, String[] strArr, String str, String[] strArr2, String str2) {
        return null;
    }

    static ContentValues makeInstallValues(PluginInfo pluginInfo) {
        ContentValues contentValues = new ContentValues();
        contentValues.put(KEY_PLUGIN_INFO, pluginInfo.getJSON().toString());
        return contentValues;
    }

    @Override // android.content.ContentProvider
    public int update(Uri uri, ContentValues contentValues, String str, String[] strArr) {
        if (LogDebug.LOG) {
            LogDebug.d(TAG, "update: cv=" + contentValues);
        }
        if (TextUtils.isEmpty(str)) {
            return 0;
        }
        byte b = -1;
        if (str.hashCode() == 3237446 && str.equals(SELECTION_INSTALL)) {
            b = 0;
        }
        if (b != 0) {
            return 0;
        }
        return install(contentValues);
    }

    private int install(ContentValues contentValues) {
        if (contentValues == null) {
            return 0;
        }
        String asString = contentValues.getAsString(KEY_PLUGIN_INFO);
        if (TextUtils.isEmpty(asString)) {
            return 0;
        }
        return PMF.getLocal().loadPluginClassLoader(PluginInfo.parseFromJsonText(asString)) != null ? 1 : 0;
    }
}
