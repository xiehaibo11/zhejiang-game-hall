package com.xiaomi.push.service;

import android.content.SharedPreferences;
import com.xiaomi.push.ao;
import com.xiaomi.push.dw;
import com.xiaomi.push.dx;
import com.xiaomi.push.gz;
import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
public class bv {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static bv f8347a = new bv();

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static String f964a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private ao.b f965a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private dw.a f966a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private List<a> f967a = new ArrayList();

    public abstract class a {
        public void a(dw.a aVar) {
        }

        public void a(dx.b bVar) {
        }
    }

    private bv() {
    }

    public static bv a() {
        return f8347a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static synchronized String m662a() {
        if (f964a == null) {
            SharedPreferences sharedPreferences = com.xiaomi.push.v.m701a().getSharedPreferences("XMPushServiceConfig", 0);
            String string = sharedPreferences.getString("DeviceUUID", null);
            f964a = string;
            if (string == null) {
                String strA = com.xiaomi.push.j.a(com.xiaomi.push.v.m701a(), false);
                f964a = strA;
                if (strA != null) {
                    sharedPreferences.edit().putString("DeviceUUID", f964a).commit();
                }
            }
        }
        return f964a;
    }

    private void b() throws Throwable {
        if (this.f966a == null) {
            d();
        }
    }

    private void c() {
        if (this.f965a != null) {
            return;
        }
        bw bwVar = new bw(this);
        this.f965a = bwVar;
        gz.a(bwVar);
    }

    private void d() throws Throwable {
        BufferedInputStream bufferedInputStream;
        Throwable th;
        Exception e;
        try {
            try {
                bufferedInputStream = new BufferedInputStream(com.xiaomi.push.v.m701a().openFileInput("XMCloudCfg"));
                try {
                    this.f966a = dw.a.b(com.xiaomi.push.b.a(bufferedInputStream));
                    bufferedInputStream.close();
                } catch (Exception e2) {
                    e = e2;
                    com.xiaomi.channel.commonutils.logger.b.m43a("load config failure: " + e.getMessage());
                }
            } catch (Throwable th2) {
                th = th2;
                com.xiaomi.push.ab.a(bufferedInputStream);
                throw th;
            }
        } catch (Exception e3) {
            bufferedInputStream = null;
            e = e3;
        } catch (Throwable th3) {
            bufferedInputStream = null;
            th = th3;
            com.xiaomi.push.ab.a(bufferedInputStream);
            throw th;
        }
        com.xiaomi.push.ab.a(bufferedInputStream);
        if (this.f966a == null) {
            this.f966a = new dw.a();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void e() {
        try {
            if (this.f966a != null) {
                BufferedOutputStream bufferedOutputStream = new BufferedOutputStream(com.xiaomi.push.v.m701a().openFileOutput("XMCloudCfg", 0));
                com.xiaomi.push.c cVarA = com.xiaomi.push.c.a(bufferedOutputStream);
                this.f966a.a(cVarA);
                cVarA.m171a();
                bufferedOutputStream.close();
            }
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.m43a("save config failure: " + e.getMessage());
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    int m665a() throws Throwable {
        b();
        dw.a aVar = this.f966a;
        if (aVar != null) {
            return aVar.c();
        }
        return 0;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public dw.a m666a() throws Throwable {
        b();
        return this.f966a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    synchronized void m667a() {
        this.f967a.clear();
    }

    void a(dx.b bVar) {
        a[] aVarArr;
        if (bVar.m254d() && bVar.d() > m665a()) {
            c();
        }
        synchronized (this) {
            aVarArr = (a[]) this.f967a.toArray(new a[this.f967a.size()]);
        }
        for (a aVar : aVarArr) {
            aVar.a(bVar);
        }
    }

    public synchronized void a(a aVar) {
        this.f967a.add(aVar);
    }
}
