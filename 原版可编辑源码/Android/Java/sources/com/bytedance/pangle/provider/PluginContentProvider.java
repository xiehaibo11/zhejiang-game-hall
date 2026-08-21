package com.bytedance.pangle.provider;

import android.content.ContentProvider;
import android.content.ContentValues;
import android.database.Cursor;
import android.net.Uri;

public abstract class PluginContentProvider extends ContentProvider {
    protected Uri pluginUri;

    @Override
    public abstract int delete(Uri uri, String str, String[] strArr);

    @Override
    public abstract String getType(Uri uri);

    @Override
    public abstract Uri insert(Uri uri, ContentValues contentValues);

    @Override
    public abstract Cursor query(Uri uri, String[] strArr, String str, String[] strArr2, String str2);

    @Override
    public abstract int update(Uri uri, ContentValues contentValues, String str, String[] strArr);
}
