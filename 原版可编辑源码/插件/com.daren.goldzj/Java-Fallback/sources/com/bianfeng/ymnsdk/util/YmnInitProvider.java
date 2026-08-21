package com.bianfeng.ymnsdk.util;

import android.content.ContentProvider;
import android.content.ContentValues;
import android.database.Cursor;
import android.net.Uri;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import net.grandcentrix.tray.AppPreferences;

public class YmnInitProvider extends ContentProvider {
    public YmnInitProvider() {
    }

    @Override
    public int delete(@NonNull Uri r1, @Nullable String r2, @Nullable String[] r3) {
        return 0;
    }

    @Override
    public String getType(Uri r1) {
        return null;
    }

    @Override
    @Nullable
    public Uri insert(@NonNull Uri r1, @Nullable ContentValues r2) {
        return null;
    }

    @Override
    public boolean onCreate() {
        new AppPreferences(getContext()).put("ymnInit", "false");
        return true;
    }

    @Override
    @Nullable
    public Cursor query(@NonNull Uri r1, @Nullable String[] r2, @Nullable String r3, @Nullable String[] r4, @Nullable String r5) {
        return null;
    }

    @Override
    public int update(@NonNull Uri r1, @Nullable ContentValues r2, @Nullable String r3, @Nullable String[] r4) {
        return 0;
    }
}
