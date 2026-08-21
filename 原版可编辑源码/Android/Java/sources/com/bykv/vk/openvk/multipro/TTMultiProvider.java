package com.bykv.vk.openvk.multipro;

import android.content.ContentProvider;
import android.content.ContentValues;
import android.database.Cursor;
import android.net.Uri;
import com.bykv.vk.openvk.ITTProvider;
import com.bykv.vk.openvk.TTVfSdk;

public class TTMultiProvider extends ContentProvider {
    @Override
    public boolean onCreate() {
        return true;
    }

    @Override
    public Cursor query(Uri uri, String[] strArr, String str, String[] strArr2, String str2) {
        if (rg() != null) {
            return rg().query(uri, strArr, str, strArr2, str2);
        }
        return null;
    }

    @Override
    public String getType(Uri uri) {
        return rg() != null ? rg().getType(uri) : "";
    }

    @Override
    public Uri insert(Uri uri, ContentValues contentValues) {
        if (rg() != null) {
            return rg().insert(uri, contentValues);
        }
        return null;
    }

    @Override
    public int delete(Uri uri, String str, String[] strArr) {
        if (rg() != null) {
            return rg().delete(uri, str, strArr);
        }
        return 0;
    }

    @Override
    public int update(Uri uri, ContentValues contentValues, String str, String[] strArr) {
        if (rg() != null) {
            return rg().update(uri, contentValues, str, strArr);
        }
        return 0;
    }

    private ITTProvider rg() {
        if (TTVfSdk.getVfManager() != null) {
            return (ITTProvider) TTVfSdk.getVfManager().getExtra(ITTProvider.class, null);
        }
        return null;
    }
}
