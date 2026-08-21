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

public class bv {
    private static bv a = new bv();
    private static String a;
    private ao.b a;
    private dw.a a;
    private List<a> a = new ArrayList();

    public abstract class a {
        public void a(dw.a aVar) {
        }

        public void a(dx.b bVar) {
        }
    }

    private bv() {
    }

    public static bv a() {
        return a;
    }

    public static synchronized String a() {
        if (a == null) {
            SharedPreferences sharedPreferences = com.xiaomi.push.v.a().getSharedPreferences("XMPushServiceConfig", 0);
            String string = sharedPreferences.getString("DeviceUUID", null);
            a = string;
            if (string == null) {
                String strA = com.xiaomi.push.j.a(com.xiaomi.push.v.a(), false);
                a = strA;
                if (strA != null) {
                    sharedPreferences.edit().putString("DeviceUUID", a).commit();
                }
            }
        }
        return a;
    }

    private void b() throws Throwable {
        if (this.a == null) {
            d();
        }
    }

    private void c() {
        if (this.a != null) {
            return;
        }
        bw bwVar = new bw(this);
        this.a = bwVar;
        gz.a(bwVar);
    }

    private void d() throws Throwable {
        BufferedInputStream bufferedInputStream;
        Throwable th;
        Exception e;
        try {
            try {
                bufferedInputStream = new BufferedInputStream(com.xiaomi.push.v.a().openFileInput("XMCloudCfg"));
                try {
                    this.a = dw.a.b(com.xiaomi.push.b.a(bufferedInputStream));
                    bufferedInputStream.close();
                } catch (Exception e2) {
                    e = e2;
                    com.xiaomi.channel.commonutils.logger.b.a("load config failure: " + e.getMessage());
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
        if (this.a == null) {
            this.a = new dw.a();
        }
    }

    private void e() {
        try {
            if (this.a != null) {
                BufferedOutputStream bufferedOutputStream = new BufferedOutputStream(com.xiaomi.push.v.a().openFileOutput("XMCloudCfg", 0));
                com.xiaomi.push.c cVarA = com.xiaomi.push.c.a(bufferedOutputStream);
                this.a.a(cVarA);
                cVarA.a();
                bufferedOutputStream.close();
            }
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a("save config failure: " + e.getMessage());
        }
    }

    int a() throws Throwable {
        b();
        dw.a aVar = this.a;
        if (aVar != null) {
            return aVar.c();
        }
        return 0;
    }

    public dw.a a() throws Throwable {
        b();
        return this.a;
    }

    synchronized void a() {
        this.a.clear();
    }

    void a(dx.b bVar) {
        a[] aVarArr;
        if (bVar.d() && bVar.d() > a()) {
            c();
        }
        synchronized (this) {
            aVarArr = (a[]) this.a.toArray(new a[this.a.size()]);
        }
        for (a aVar : aVarArr) {
            aVar.a(bVar);
        }
    }

    public synchronized void a(a aVar) {
        this.a.add(aVar);
    }
}
