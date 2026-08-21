package com.meizu.cloud.pushsdk.d.d;

public class b extends android.database.sqlite.SQLiteOpenHelper {
    private static final java.lang.String a = null;
    private static com.meizu.cloud.pushsdk.d.d.b b;

    static {
            java.lang.Class<com.meizu.cloud.pushsdk.d.d.b> r0 = com.meizu.cloud.pushsdk.d.d.b.class
            java.lang.String r0 = r0.getName()
            com.meizu.cloud.pushsdk.d.d.b.a = r0
            return
    }

    private b(android.content.Context r3, java.lang.String r4) {
            r2 = this;
            r0 = 0
            r1 = 1
            r2.<init>(r3, r4, r0, r1)
            return
    }

    public static com.meizu.cloud.pushsdk.d.d.b a(android.content.Context r1, java.lang.String r2) {
            com.meizu.cloud.pushsdk.d.d.b r0 = com.meizu.cloud.pushsdk.d.d.b.b
            if (r0 != 0) goto Lf
            com.meizu.cloud.pushsdk.d.d.b r0 = new com.meizu.cloud.pushsdk.d.d.b
            android.content.Context r1 = r1.getApplicationContext()
            r0.<init>(r1, r2)
            com.meizu.cloud.pushsdk.d.d.b.b = r0
        Lf:
            com.meizu.cloud.pushsdk.d.d.b r1 = com.meizu.cloud.pushsdk.d.d.b.b
            return r1
    }

    @Override
    public void onCreate(android.database.sqlite.SQLiteDatabase r2) {
            r1 = this;
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS 'events' (id INTEGER PRIMARY KEY, eventData BLOB, dateCreated TIMESTAMP DEFAULT CURRENT_TIMESTAMP)"
            r2.execSQL(r0)
            return
    }

    @Override
    public void onUpgrade(android.database.sqlite.SQLiteDatabase r4, int r5, int r6) {
            r3 = this;
            java.lang.String r0 = com.meizu.cloud.pushsdk.d.d.b.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Upgrading database from version "
            r1.append(r2)
            r1.append(r5)
            java.lang.String r5 = " to "
            r1.append(r5)
            r1.append(r6)
            java.lang.String r5 = ". Destroying old data now.."
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r6 = 0
            java.lang.Object[] r6 = new java.lang.Object[r6]
            com.meizu.cloud.pushsdk.d.f.c.b(r0, r5, r6)
            java.lang.String r5 = "DROP TABLE IF EXISTS 'events'"
            r4.execSQL(r5)
            r3.onCreate(r4)
            return
    }
}
