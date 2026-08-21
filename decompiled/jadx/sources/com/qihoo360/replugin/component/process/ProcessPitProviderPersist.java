package com.qihoo360.replugin.component.process;

import android.content.ContentProvider;
import android.content.ContentValues;
import android.database.Cursor;
import android.net.Uri;
import com.qihoo360.loader2.PluginProviderStub;
import com.qihoo360.replugin.base.IPC;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class ProcessPitProviderPersist extends ContentProvider {
    private static final String TAG = "ProcessPitProviderPersist";
    public static boolean sInvoked;
    private static final String AUTHORITY_PREFIX = IPC.getPackageName() + ".loader.p.main";
    public static final Uri URI = Uri.parse("content://" + AUTHORITY_PREFIX + "/main");

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
    public int update(Uri uri, ContentValues contentValues, String str, String[] strArr) {
        return 0;
    }

    @Override // android.content.ContentProvider
    public Cursor query(Uri uri, String[] strArr, String str, String[] strArr2, String str2) {
        sInvoked = true;
        return PluginProviderStub.stubMain(uri, strArr, str, strArr2, str2);
    }
}
