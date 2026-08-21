package com.tramini.plugin.api;

import android.content.ContentProvider;
import android.content.ContentValues;
import android.database.Cursor;
import android.net.Uri;
import android.os.Handler;
import android.os.Looper;
import com.tramini.plugin.a.a.c;

public class TraminiContentProvider extends ContentProvider {
    public static final String TAG = TraminiContentProvider.class.getSimpleName();

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
    public Cursor query(Uri uri, String[] strArr, String str, String[] strArr2, String str2) {
        return null;
    }

    @Override
    public int update(Uri uri, ContentValues contentValues, String str, String[] strArr) {
        return 0;
    }

    @Override
    public boolean onCreate() {
        new Handler(Looper.getMainLooper()).postDelayed(new Runnable() {
            @Override
            public final void run() {
                try {
                    c.a().a(TraminiContentProvider.this.getContext().getApplicationContext());
                } catch (Throwable unused) {
                }
            }
        }, 500L);
        return true;
    }
}
