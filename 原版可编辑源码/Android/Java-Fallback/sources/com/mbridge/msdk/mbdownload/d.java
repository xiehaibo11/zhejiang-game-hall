package com.mbridge.msdk.mbdownload;

public class d {
    private static final java.lang.String a = null;
    private static android.content.Context b;
    private com.mbridge.msdk.mbdownload.d.a c;

    static class 1 {
    }

    class a extends android.database.sqlite.SQLiteOpenHelper {
        final com.mbridge.msdk.mbdownload.d a;

        a(com.mbridge.msdk.mbdownload.d r3, android.content.Context r4) {
                r2 = this;
                r2.a = r3
                java.lang.String r3 = "MB_DATA"
                r0 = 0
                r1 = 2
                r2.<init>(r4, r3, r0, r1)
                return
        }

        @Override
        public final void onCreate(android.database.sqlite.SQLiteDatabase r3) {
                r2 = this;
                java.lang.String r0 = com.mbridge.msdk.mbdownload.d.a()
                java.lang.String r1 = "CREATE TABLE mb_download_task_list (cp TEXT, url TEXT, progress INTEGER, extra TEXT, last_modified TEXT, UNIQUE (cp,url) ON CONFLICT ABORT);"
                com.mbridge.msdk.foundation.tools.z.a(r0, r1)
                r3.execSQL(r1)
                return
        }

        @Override
        public final void onUpgrade(android.database.sqlite.SQLiteDatabase r1, int r2, int r3) {
                r0 = this;
                return
        }
    }

    private static class b {
        public static final com.mbridge.msdk.mbdownload.d a = null;

        static {
                com.mbridge.msdk.mbdownload.d r0 = new com.mbridge.msdk.mbdownload.d
                r1 = 0
                r0.<init>(r1)
                com.mbridge.msdk.mbdownload.d.b.a = r0
                return
        }
    }

    static {
            java.lang.Class<com.mbridge.msdk.mbdownload.d> r0 = com.mbridge.msdk.mbdownload.d.class
            java.lang.String r0 = r0.getName()
            com.mbridge.msdk.mbdownload.d.a = r0
            return
    }

    private d() {
            r2 = this;
            r2.<init>()
            com.mbridge.msdk.mbdownload.d$a r0 = new com.mbridge.msdk.mbdownload.d$a
            android.content.Context r1 = com.mbridge.msdk.mbdownload.d.b
            r0.<init>(r2, r1)
            r2.c = r0
            return
    }

    d(com.mbridge.msdk.mbdownload.d.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.mbdownload.d a(android.content.Context r1) {
            android.content.Context r0 = com.mbridge.msdk.mbdownload.d.b
            if (r0 != 0) goto L9
            if (r1 == 0) goto L7
            goto L9
        L7:
            r1 = 0
            throw r1
        L9:
            android.content.Context r0 = com.mbridge.msdk.mbdownload.d.b
            if (r0 != 0) goto Lf
            com.mbridge.msdk.mbdownload.d.b = r1
        Lf:
            com.mbridge.msdk.mbdownload.d r1 = com.mbridge.msdk.mbdownload.d.b.a
            return r1
    }

    static java.lang.String a() {
            java.lang.String r0 = com.mbridge.msdk.mbdownload.d.a
            return r0
    }

    public final void a(int r7) {
            r6 = this;
            java.lang.String r0 = "yyyy-MM-dd HH:mm:ss"
            java.util.Date r1 = new java.util.Date     // Catch: java.lang.Exception -> L64
            java.util.Date r2 = new java.util.Date     // Catch: java.lang.Exception -> L64
            r2.<init>()     // Catch: java.lang.Exception -> L64
            long r2 = r2.getTime()     // Catch: java.lang.Exception -> L64
            int r4 = r7 * 1000
            long r4 = (long) r4     // Catch: java.lang.Exception -> L64
            long r2 = r2 - r4
            r1.<init>(r2)     // Catch: java.lang.Exception -> L64
            java.text.SimpleDateFormat r2 = new java.text.SimpleDateFormat     // Catch: java.lang.Exception -> L64
            r2.<init>(r0)     // Catch: java.lang.Exception -> L64
            java.lang.String r2 = r2.format(r1)     // Catch: java.lang.Exception -> L64
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L64
            r3.<init>()     // Catch: java.lang.Exception -> L64
            java.lang.String r4 = " DELETE FROM mb_download_task_list WHERE strftime('yyyy-MM-dd HH:mm:ss', last_modified)<=strftime('yyyy-MM-dd HH:mm:ss', '"
            r3.append(r4)     // Catch: java.lang.Exception -> L64
            r3.append(r2)     // Catch: java.lang.Exception -> L64
            java.lang.String r2 = "')"
            r3.append(r2)     // Catch: java.lang.Exception -> L64
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Exception -> L64
            com.mbridge.msdk.mbdownload.d$a r3 = r6.c     // Catch: java.lang.Exception -> L64
            android.database.sqlite.SQLiteDatabase r3 = r3.getWritableDatabase()     // Catch: java.lang.Exception -> L64
            r3.execSQL(r2)     // Catch: java.lang.Exception -> L64
            java.lang.String r2 = com.mbridge.msdk.mbdownload.d.a     // Catch: java.lang.Exception -> L64
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L64
            r3.<init>()     // Catch: java.lang.Exception -> L64
            java.lang.String r4 = "clearOverdueTasks("
            r3.append(r4)     // Catch: java.lang.Exception -> L64
            r3.append(r7)     // Catch: java.lang.Exception -> L64
            java.lang.String r7 = ") remove all tasks before "
            r3.append(r7)     // Catch: java.lang.Exception -> L64
            java.text.SimpleDateFormat r7 = new java.text.SimpleDateFormat     // Catch: java.lang.Exception -> L64
            r7.<init>(r0)     // Catch: java.lang.Exception -> L64
            java.lang.String r7 = r7.format(r1)     // Catch: java.lang.Exception -> L64
            r3.append(r7)     // Catch: java.lang.Exception -> L64
            java.lang.String r7 = r3.toString()     // Catch: java.lang.Exception -> L64
            com.mbridge.msdk.foundation.tools.z.a(r2, r7)     // Catch: java.lang.Exception -> L64
            goto L6e
        L64:
            r7 = move-exception
            java.lang.String r0 = com.mbridge.msdk.mbdownload.d.a
            java.lang.String r7 = r7.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r7)
        L6e:
            return
    }

    public final void a(java.lang.String r3, java.lang.String r4, int r5) {
            r2 = this;
            android.content.ContentValues r0 = new android.content.ContentValues
            r0.<init>()
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            java.lang.String r1 = "progress"
            r0.put(r1, r5)
            java.lang.String r5 = com.mbridge.msdk.mbdownload.e.a()
            java.lang.String r1 = "last_modified"
            r0.put(r1, r5)
            r5 = 2
            java.lang.String[] r5 = new java.lang.String[r5]
            r1 = 0
            r5[r1] = r3
            r3 = 1
            r5[r3] = r4
            com.mbridge.msdk.mbdownload.d$a r3 = r2.c
            android.database.sqlite.SQLiteDatabase r3 = r3.getWritableDatabase()
            java.lang.String r4 = "cp=? and url=?"
            java.lang.String r1 = "mb_download_task_list"
            r3.update(r1, r0, r4, r5)
            return
    }

    public void finalize() {
            r1 = this;
            com.mbridge.msdk.mbdownload.d$a r0 = r1.c
            r0.close()
            return
    }
}
