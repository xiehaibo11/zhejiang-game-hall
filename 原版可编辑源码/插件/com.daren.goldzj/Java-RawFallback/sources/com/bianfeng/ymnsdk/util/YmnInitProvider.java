package com.bianfeng.ymnsdk.util;

public class YmnInitProvider extends android.content.ContentProvider {
    public YmnInitProvider() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public int delete(@android.support.annotation.NonNull android.net.Uri r1, @android.support.annotation.Nullable java.lang.String r2, @android.support.annotation.Nullable java.lang.String[] r3) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public java.lang.String getType(android.net.Uri r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    @android.support.annotation.Nullable
    public android.net.Uri insert(@android.support.annotation.NonNull android.net.Uri r1, @android.support.annotation.Nullable android.content.ContentValues r2) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public boolean onCreate() {
            r3 = this;
            net.grandcentrix.tray.AppPreferences r0 = new net.grandcentrix.tray.AppPreferences
            android.content.Context r1 = r3.getContext()
            r0.<init>(r1)
            java.lang.String r1 = "ymnInit"
            java.lang.String r2 = "false"
            r0.put(r1, r2)
            r0 = 1
            return r0
    }

    @Override
    @android.support.annotation.Nullable
    public android.database.Cursor query(@android.support.annotation.NonNull android.net.Uri r1, @android.support.annotation.Nullable java.lang.String[] r2, @android.support.annotation.Nullable java.lang.String r3, @android.support.annotation.Nullable java.lang.String[] r4, @android.support.annotation.Nullable java.lang.String r5) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public int update(@android.support.annotation.NonNull android.net.Uri r1, @android.support.annotation.Nullable android.content.ContentValues r2, @android.support.annotation.Nullable java.lang.String r3, @android.support.annotation.Nullable java.lang.String[] r4) {
            r0 = this;
            r1 = 0
            return r1
    }
}
