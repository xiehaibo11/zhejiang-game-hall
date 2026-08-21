package com.qihoo360.replugin.component.provider;

import android.content.ContentProvider;
import android.content.ContentValues;
import android.database.Cursor;
import android.net.Uri;
import android.os.CancellationSignal;
import com.qihoo360.replugin.base.IPC;
import com.qihoo360.replugin.component.provider.PluginProviderHelper;
import java.util.Iterator;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public abstract class PluginPitProviderBase extends ContentProvider {
    public static final String AUTHORITY_PREFIX = IPC.getPackageName() + ".Plugin.NP.";
    PluginProviderHelper mHelper;

    @Override // android.content.ContentProvider
    public boolean onCreate() {
        return true;
    }

    protected PluginPitProviderBase(String str) {
        this.mHelper = new PluginProviderHelper(str);
    }

    @Override // android.content.ContentProvider
    public Cursor query(Uri uri, String[] strArr, String str, String[] strArr2, String str2) {
        ContentProvider provider;
        PluginProviderHelper.PluginUri pluginUri = this.mHelper.toPluginUri(uri);
        if (pluginUri == null || (provider = this.mHelper.getProvider(pluginUri)) == null) {
            return null;
        }
        return provider.query(pluginUri.transferredUri, strArr, str, strArr2, str2);
    }

    @Override // android.content.ContentProvider
    public Cursor query(Uri uri, String[] strArr, String str, String[] strArr2, String str2, CancellationSignal cancellationSignal) {
        ContentProvider provider;
        PluginProviderHelper.PluginUri pluginUri = this.mHelper.toPluginUri(uri);
        if (pluginUri == null || (provider = this.mHelper.getProvider(pluginUri)) == null) {
            return null;
        }
        return provider.query(pluginUri.transferredUri, strArr, str, strArr2, str2, cancellationSignal);
    }

    @Override // android.content.ContentProvider
    public String getType(Uri uri) {
        ContentProvider provider;
        PluginProviderHelper.PluginUri pluginUri = this.mHelper.toPluginUri(uri);
        if (pluginUri == null || (provider = this.mHelper.getProvider(pluginUri)) == null) {
            return null;
        }
        return provider.getType(pluginUri.transferredUri);
    }

    @Override // android.content.ContentProvider
    public Uri insert(Uri uri, ContentValues contentValues) {
        ContentProvider provider;
        PluginProviderHelper.PluginUri pluginUri = this.mHelper.toPluginUri(uri);
        if (pluginUri == null || (provider = this.mHelper.getProvider(pluginUri)) == null) {
            return null;
        }
        return provider.insert(pluginUri.transferredUri, contentValues);
    }

    @Override // android.content.ContentProvider
    public int bulkInsert(Uri uri, ContentValues[] contentValuesArr) {
        ContentProvider provider;
        PluginProviderHelper.PluginUri pluginUri = this.mHelper.toPluginUri(uri);
        if (pluginUri == null || (provider = this.mHelper.getProvider(pluginUri)) == null) {
            return -1;
        }
        return provider.bulkInsert(pluginUri.transferredUri, contentValuesArr);
    }

    @Override // android.content.ContentProvider
    public int delete(Uri uri, String str, String[] strArr) {
        ContentProvider provider;
        PluginProviderHelper.PluginUri pluginUri = this.mHelper.toPluginUri(uri);
        if (pluginUri == null || (provider = this.mHelper.getProvider(pluginUri)) == null) {
            return -1;
        }
        return provider.delete(pluginUri.transferredUri, str, strArr);
    }

    @Override // android.content.ContentProvider
    public int update(Uri uri, ContentValues contentValues, String str, String[] strArr) {
        ContentProvider provider;
        PluginProviderHelper.PluginUri pluginUri = this.mHelper.toPluginUri(uri);
        if (pluginUri == null || (provider = this.mHelper.getProvider(pluginUri)) == null) {
            return -1;
        }
        return provider.update(pluginUri.transferredUri, contentValues, str, strArr);
    }

    @Override // android.content.ContentProvider, android.content.ComponentCallbacks
    public void onLowMemory() {
        Iterator<ContentProvider> it = this.mHelper.mProviderAuthorityMap.values().iterator();
        while (it.hasNext()) {
            it.next().onLowMemory();
        }
        super.onLowMemory();
    }

    @Override // android.content.ContentProvider, android.content.ComponentCallbacks2
    public void onTrimMemory(int i) {
        Iterator<ContentProvider> it = this.mHelper.mProviderAuthorityMap.values().iterator();
        while (it.hasNext()) {
            it.next().onTrimMemory(i);
        }
        super.onTrimMemory(i);
    }
}
