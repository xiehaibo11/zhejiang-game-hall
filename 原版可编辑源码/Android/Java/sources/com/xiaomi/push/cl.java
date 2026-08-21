package com.xiaomi.push;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import com.xiaomi.push.cj;

class cl implements Runnable {
    final Context a;
    final cj.a a;

    cl(cj.a aVar, Context context) {
        this.a = aVar;
        this.a = context;
    }

    @Override
    public void run() {
        SQLiteDatabase sQLiteDatabaseA = null;
        try {
            try {
                sQLiteDatabaseA = this.a.a();
                if (sQLiteDatabaseA != null && sQLiteDatabaseA.isOpen()) {
                    sQLiteDatabaseA.beginTransaction();
                    this.a.a(this.a, sQLiteDatabaseA);
                    sQLiteDatabaseA.setTransactionSuccessful();
                }
                if (sQLiteDatabaseA != null) {
                    try {
                        sQLiteDatabaseA.endTransaction();
                    } catch (Exception e) {
                        e = e;
                        com.xiaomi.channel.commonutils.logger.b.a(e);
                    }
                }
                if (this.a.a != null) {
                    this.a.a.close();
                }
            } catch (Throwable th) {
                if (sQLiteDatabaseA != null) {
                    try {
                        sQLiteDatabaseA.endTransaction();
                    } catch (Exception e2) {
                        com.xiaomi.channel.commonutils.logger.b.a(e2);
                        this.a.a(this.a);
                        throw th;
                    }
                }
                if (this.a.a != null) {
                    this.a.a.close();
                }
                this.a.a(this.a);
                throw th;
            }
        } catch (Exception e3) {
            com.xiaomi.channel.commonutils.logger.b.a(e3);
            if (sQLiteDatabaseA != null) {
                try {
                    sQLiteDatabaseA.endTransaction();
                } catch (Exception e4) {
                    e = e4;
                    com.xiaomi.channel.commonutils.logger.b.a(e);
                }
            }
            if (this.a.a != null) {
                this.a.a.close();
            }
        }
        this.a.a(this.a);
    }
}
