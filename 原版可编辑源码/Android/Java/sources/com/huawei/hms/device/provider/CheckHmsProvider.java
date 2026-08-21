package com.huawei.hms.device.provider;

import android.content.ContentProvider;
import android.content.ContentValues;
import android.content.Context;
import android.content.pm.ProviderInfo;
import android.database.Cursor;
import android.net.Uri;
import com.huawei.hms.utils.HMSPackageManager;

public class CheckHmsProvider extends ContentProvider {

    public class a implements Runnable {
        public a() {
        }

        @Override
        public void run() {
            HMSPackageManager.getInstance(CheckHmsProvider.this.getContext());
        }
    }

    @Override
    public void attachInfo(Context context, ProviderInfo providerInfo) {
        super.attachInfo(context, providerInfo);
        if (providerInfo.exported) {
            throw new SecurityException("Provider must not be exported");
        }
        if (providerInfo.grantUriPermissions) {
            throw new SecurityException("Provider must not grant uri permissions");
        }
    }

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
        if (getContext() == null) {
            return true;
        }
        new Thread(new a()).start();
        return true;
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
