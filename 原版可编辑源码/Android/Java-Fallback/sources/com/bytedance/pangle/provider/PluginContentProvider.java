package com.bytedance.pangle.provider;

public abstract class PluginContentProvider extends android.content.ContentProvider {
    protected android.net.Uri pluginUri;

    public PluginContentProvider() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public abstract int delete(android.net.Uri r1, java.lang.String r2, java.lang.String[] r3);

    @Override
    public abstract java.lang.String getType(android.net.Uri r1);

    @Override
    public abstract android.net.Uri insert(android.net.Uri r1, android.content.ContentValues r2);

    @Override
    public abstract android.database.Cursor query(android.net.Uri r1, java.lang.String[] r2, java.lang.String r3, java.lang.String[] r4, java.lang.String r5);

    @Override
    public abstract int update(android.net.Uri r1, android.content.ContentValues r2, java.lang.String r3, java.lang.String[] r4);
}
