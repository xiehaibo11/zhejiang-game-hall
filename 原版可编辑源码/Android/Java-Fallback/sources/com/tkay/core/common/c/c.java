package com.tkay.core.common.c;

public class c extends com.tkay.core.common.c.b {
    private static com.tkay.core.common.c.c a;

    private c(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public static com.tkay.core.common.c.c a(android.content.Context r2) {
            com.tkay.core.common.c.c r0 = com.tkay.core.common.c.c.a
            if (r0 != 0) goto L1b
            java.lang.Class<com.tkay.core.common.c.c> r0 = com.tkay.core.common.c.c.class
            monitor-enter(r0)
            com.tkay.core.common.c.c r1 = com.tkay.core.common.c.c.a     // Catch: java.lang.Throwable -> L18
            if (r1 != 0) goto L16
            com.tkay.core.common.c.c r1 = new com.tkay.core.common.c.c     // Catch: java.lang.Throwable -> L18
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L18
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L18
            com.tkay.core.common.c.c.a = r1     // Catch: java.lang.Throwable -> L18
        L16:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            goto L1b
        L18:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L1b:
            com.tkay.core.common.c.c r2 = com.tkay.core.common.c.c.a
            return r2
    }

    private void c(android.database.sqlite.SQLiteDatabase r3) {
            r2 = this;
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS sdkconfig(key TEXT ,type TEXT ,lastupdatetime TEXT ,value TEXT )"
            r3.execSQL(r0)     // Catch: java.lang.Exception -> L11
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS request_info(id TEXT, req_type INTEGER, req_url TEXT, req_head TEXT, req_content TEXT, time INTEGER, extra TEXT )"
            r3.execSQL(r0)     // Catch: java.lang.Exception -> L11
            r0 = 3
            r1 = 9
            r2.a(r3, r0, r1)     // Catch: java.lang.Exception -> L11
            return
        L11:
            r3 = move-exception
            r3.printStackTrace()
            return
    }

    private static void d(android.database.sqlite.SQLiteDatabase r1) {
            java.lang.String r0 = "DROP TABLE IF EXISTS 'sdkconfig'"
            r1.execSQL(r0)     // Catch: java.lang.Exception -> L33
            java.lang.String r0 = "DROP TABLE IF EXISTS 'request_info'"
            r1.execSQL(r0)     // Catch: java.lang.Exception -> L33
            java.lang.String r0 = "DROP TABLE IF EXISTS 'placement_ad_impression'"
            r1.execSQL(r0)     // Catch: java.lang.Exception -> L33
            java.lang.String r0 = "DROP TABLE IF EXISTS 'offer_action_record'"
            r1.execSQL(r0)     // Catch: java.lang.Exception -> L33
            java.lang.String r0 = "DROP TABLE IF EXISTS 'offer_data_cache'"
            r1.execSQL(r0)     // Catch: java.lang.Exception -> L33
            java.lang.String r0 = "DROP TABLE IF EXISTS 'dsp_offer_show_record'"
            r1.execSQL(r0)     // Catch: java.lang.Exception -> L33
            java.lang.String r0 = "DROP TABLE IF EXISTS 'dsp_offer_install_record'"
            r1.execSQL(r0)     // Catch: java.lang.Exception -> L33
            java.lang.String r0 = "DROP TABLE IF EXISTS 'inspect_info'"
            r1.execSQL(r0)     // Catch: java.lang.Exception -> L33
            java.lang.String r0 = "DROP TABLE IF EXISTS 'video_res_cache_info'"
            r1.execSQL(r0)     // Catch: java.lang.Exception -> L33
            java.lang.String r0 = "DROP TABLE IF EXISTS 'notice_url_fail_info'"
            r1.execSQL(r0)     // Catch: java.lang.Exception -> L33
            return
        L33:
            r1 = move-exception
            r1.printStackTrace()
            return
    }

    private void e(android.database.sqlite.SQLiteDatabase r1) {
            r0 = this;
            d(r1)
            r0.c(r1)
            return
    }

    @Override
    protected final void a(android.database.sqlite.SQLiteDatabase r1) {
            r0 = this;
            r0.c(r1)
            return
    }

    @Override
    protected final void a(android.database.sqlite.SQLiteDatabase r2, int r3, int r4) {
            r1 = this;
        L0:
            if (r3 >= r4) goto L47
            switch(r3) {
                case 1: goto L3e;
                case 2: goto L3e;
                case 3: goto L38;
                case 4: goto L2d;
                case 5: goto L22;
                case 6: goto L1c;
                case 7: goto L16;
                case 8: goto L6;
                default: goto L5;
            }
        L5:
            goto L44
        L6:
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS notice_url_fail_info(id TEXT, req_type INTEGER, req_url TEXT, req_head TEXT, first_fail_time INTEGER, offer_out_date_time INTEGER, retry_count INTEGER )"
            r2.execSQL(r0)
            java.lang.String r0 = "DROP TABLE IF EXISTS 'request_info'"
            r2.execSQL(r0)
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS request_info(id TEXT, req_type INTEGER, req_url TEXT, req_head TEXT, req_content TEXT, time INTEGER, extra TEXT )"
            r2.execSQL(r0)
            goto L44
        L16:
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS video_res_cache_info(video_url TEXT, file_path TEXT, ready_rate INTEGER, download_size INTEGER, total_size INTEGER, update_time INTEGER )"
            r2.execSQL(r0)
            goto L44
        L1c:
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS inspect_info(inspect_id TEXT, update_time INTEGER )"
            r2.execSQL(r0)
            goto L44
        L22:
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS dsp_offer_show_record(dsp_id TEXT ,dsp_offer_id TEXT ,show_limit INTEGER ,show_count INTEGER ,create_time INTEGER ,last_update_time INTEGER)"
            r2.execSQL(r0)
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS dsp_offer_install_record(dsp_id TEXT ,dsp_offer_id TEXT ,package_name TEXT ,last_update_time INTEGER)"
            r2.execSQL(r0)
            goto L44
        L2d:
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS offer_action_record(adsource_id TEXT ,type INTEGER ,unit_id TEXT ,click_count INTEGER ,show_count INTEGER ,expire_time INTEGER )"
            r2.execSQL(r0)
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS offer_data_cache(bid_id TEXT ,adsource_id TEXT ,network_firm_id INTEGER ,offer_data TEXT)"
            r2.execSQL(r0)
            goto L44
        L38:
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS placement_ad_impression(format INTEGER ,placement_id TEXT ,adsource_id TEXT ,hour_time TEXT ,hour_imp INTEGER ,date_time TEXT ,date_imp INTEGER , show_time INTEGER)"
            r2.execSQL(r0)
            goto L44
        L3e:
            d(r2)
            r1.c(r2)
        L44:
            int r3 = r3 + 1
            goto L0
        L47:
            return
    }

    @Override
    protected final void b(android.database.sqlite.SQLiteDatabase r1) {
            r0 = this;
            d(r1)
            r0.c(r1)
            return
    }

    @Override
    protected final java.lang.String c() {
            r1 = this;
            java.lang.String r0 = "tkay.db"
            return r0
    }

    @Override
    protected final int d() {
            r1 = this;
            r0 = 9
            return r0
    }
}
