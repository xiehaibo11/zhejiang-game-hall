package com.xiaomi.push.providers;

public class a extends android.database.sqlite.SQLiteOpenHelper {
    private static int a = 1;
    public static final java.lang.Object a = null;
    private static final java.lang.String[] a = null;

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.xiaomi.push.providers.a.a = r0
            java.lang.String r1 = "package_name"
            java.lang.String r2 = "TEXT"
            java.lang.String r3 = "message_ts"
            java.lang.String r4 = " LONG DEFAULT 0 "
            java.lang.String r5 = "bytes"
            java.lang.String r6 = " LONG DEFAULT 0 "
            java.lang.String r7 = "network_type"
            java.lang.String r8 = " INT DEFAULT -1 "
            java.lang.String r9 = "rcv"
            java.lang.String r10 = " INT DEFAULT -1 "
            java.lang.String r11 = "imsi"
            java.lang.String r12 = "TEXT"
            java.lang.String[] r0 = new java.lang.String[]{r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12}
            com.xiaomi.push.providers.a.a = r0
            return
    }

    public a(android.content.Context r4) {
            r3 = this;
            int r0 = com.xiaomi.push.providers.a.a
            java.lang.String r1 = "traffic.db"
            r2 = 0
            r3.<init>(r4, r1, r2, r0)
            return
    }

    private void a(android.database.sqlite.SQLiteDatabase r5) {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "CREATE TABLE traffic(_id INTEGER  PRIMARY KEY ,"
            r0.<init>(r1)
            r1 = 0
        L8:
            java.lang.String[] r2 = com.xiaomi.push.providers.a.a
            int r2 = r2.length
            int r2 = r2 + (-1)
            if (r1 >= r2) goto L2e
            if (r1 == 0) goto L16
            java.lang.String r2 = ","
            r0.append(r2)
        L16:
            java.lang.String[] r2 = com.xiaomi.push.providers.a.a
            r2 = r2[r1]
            r0.append(r2)
            java.lang.String r2 = " "
            r0.append(r2)
            java.lang.String[] r2 = com.xiaomi.push.providers.a.a
            int r3 = r1 + 1
            r2 = r2[r3]
            r0.append(r2)
            int r1 = r1 + 2
            goto L8
        L2e:
            java.lang.String r1 = ");"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r5.execSQL(r0)
            return
    }

    @Override
    public void onCreate(android.database.sqlite.SQLiteDatabase r2) {
            r1 = this;
            java.lang.Object r0 = com.xiaomi.push.providers.a.a
            monitor-enter(r0)
            r1.a(r2)     // Catch: java.lang.Throwable -> L7 android.database.SQLException -> L9
            goto Ld
        L7:
            r2 = move-exception
            goto Lf
        L9:
            r2 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r2)     // Catch: java.lang.Throwable -> L7
        Ld:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            return
        Lf:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            throw r2
    }

    @Override
    public void onUpgrade(android.database.sqlite.SQLiteDatabase r1, int r2, int r3) {
            r0 = this;
            return
    }
}
