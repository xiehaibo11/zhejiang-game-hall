package com.bykv.vk.openvk;

public interface ITTProvider {
    int delete(android.net.Uri r1, java.lang.String r2, java.lang.String[] r3);

    java.lang.String getTableName();

    java.lang.String getType(android.net.Uri r1);

    void init();

    void injectContext(android.content.Context r1);

    android.net.Uri insert(android.net.Uri r1, android.content.ContentValues r2);

    android.database.Cursor query(android.net.Uri r1, java.lang.String[] r2, java.lang.String r3, java.lang.String[] r4, java.lang.String r5);

    int update(android.net.Uri r1, android.content.ContentValues r2, java.lang.String r3, java.lang.String[] r4);
}
