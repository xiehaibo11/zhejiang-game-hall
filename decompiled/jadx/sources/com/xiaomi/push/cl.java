package com.xiaomi.push;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import com.xiaomi.push.cj;

/* JADX INFO: loaded from: classes4.dex */
class cl implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Context f8086a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ cj.a f190a;

    cl(cj.a aVar, Context context) {
        this.f190a = aVar;
        this.f8086a = context;
    }

    @Override // java.lang.Runnable
    public void run() {
        SQLiteDatabase sQLiteDatabaseA = null;
        try {
            try {
                sQLiteDatabaseA = this.f190a.a();
                if (sQLiteDatabaseA != null && sQLiteDatabaseA.isOpen()) {
                    sQLiteDatabaseA.beginTransaction();
                    this.f190a.a(this.f8086a, sQLiteDatabaseA);
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
                if (this.f190a.f181a != null) {
                    this.f190a.f181a.close();
                }
            } catch (Throwable th) {
                if (sQLiteDatabaseA != null) {
                    try {
                        sQLiteDatabaseA.endTransaction();
                    } catch (Exception e2) {
                        com.xiaomi.channel.commonutils.logger.b.a(e2);
                        this.f190a.a(this.f8086a);
                        throw th;
                    }
                }
                if (this.f190a.f181a != null) {
                    this.f190a.f181a.close();
                }
                this.f190a.a(this.f8086a);
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
            if (this.f190a.f181a != null) {
                this.f190a.f181a.close();
            }
        }
        this.f190a.a(this.f8086a);
    }
}
