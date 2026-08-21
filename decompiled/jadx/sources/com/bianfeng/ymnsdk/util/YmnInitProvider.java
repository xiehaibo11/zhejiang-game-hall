package com.bianfeng.ymnsdk.util;

import android.content.ContentProvider;
import android.content.ContentValues;
import android.database.Cursor;
import android.net.Uri;
import net.grandcentrix.tray.AppPreferences;

/* JADX INFO: loaded from: classes.dex */
public class YmnInitProvider extends ContentProvider {
    @Override // android.content.ContentProvider
    public boolean onCreate() {
        AppPreferences appPreferences = new AppPreferences(getContext());
        appPreferences.put("ymnInit", "false");
        return true;
    }

    @Override // android.content.ContentProvider
    public Cursor query(Uri uri, String[] strings, String s, String[] strings1, String s1) {
        return null;
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
    public int delete(Uri uri, String s, String[] strings) {
        return 0;
    }

    @Override // android.content.ContentProvider
    public int update(Uri uri, ContentValues contentValues, String s, String[] strings) {
        return 0;
    }
}
