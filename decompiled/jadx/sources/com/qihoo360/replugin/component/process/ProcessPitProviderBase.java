package com.qihoo360.replugin.component.process;

import android.content.ContentProvider;
import android.content.ContentValues;
import android.database.Cursor;
import android.net.Uri;
import android.util.Log;
import com.qihoo360.loader2.PluginProviderStub;
import com.qihoo360.mobilesafe.core.BuildConfig;
import com.qihoo360.replugin.base.IPC;
import java.io.FileDescriptor;
import java.io.PrintWriter;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class ProcessPitProviderBase extends ContentProvider {
    public static final String AUTHORITY_PREFIX = IPC.getPackageName() + ".loader.p.main";
    private static final String TAG = "ProviderBase";

    @Override // android.content.ContentProvider
    public int delete(Uri uri, String str, String[] strArr) {
        return 0;
    }

    @Override // android.content.ContentProvider
    public void dump(FileDescriptor fileDescriptor, PrintWriter printWriter, String[] strArr) {
    }

    @Override // android.content.ContentProvider
    public String getType(Uri uri) {
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

    @Override // android.content.ContentProvider
    public int update(Uri uri, ContentValues contentValues, String str, String[] strArr) {
        return 0;
    }

    public static final Uri buildUri(int i) {
        String str;
        if (i < 0) {
            i *= -1;
            str = "N";
        } else {
            str = "";
        }
        Uri uri = Uri.parse("content://" + AUTHORITY_PREFIX + (str + i) + "/main");
        if (BuildConfig.DEBUG) {
            Log.d(TAG, "buildUri: uri=" + uri);
        }
        return uri;
    }

    @Override // android.content.ContentProvider
    public Uri insert(Uri uri, ContentValues contentValues) {
        return PluginProviderStub.stubPlugin(uri, contentValues);
    }
}
