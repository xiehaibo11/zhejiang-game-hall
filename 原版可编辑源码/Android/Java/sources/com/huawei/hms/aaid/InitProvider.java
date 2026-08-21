package com.huawei.hms.aaid;

import android.content.ContentProvider;
import android.content.ContentValues;
import android.database.Cursor;
import android.net.Uri;
import com.huawei.hms.aaid.init.AutoInitHelper;

public class InitProvider extends ContentProvider {
    @Override
    public int delete(Uri uri, String str, String[] strArr) {
        return 0;
    }

    @Override
    public String getType(Uri uri) {
        return null;
    }

    @Override
    public Uri insert(Uri uri, ContentValues contentValues) {
        return null;
    }

    @Override
    public boolean onCreate() {
        AutoInitHelper.doAutoInit(getContext());
        return false;
    }

    @Override
    public Cursor query(Uri uri, String[] strArr, String str, String[] strArr2, String str2) {
        return null;
    }

    @Override
    public int update(Uri uri, ContentValues contentValues, String str, String[] strArr) {
        return 0;
    }
}
