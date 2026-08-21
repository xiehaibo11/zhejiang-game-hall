package com.xiaomi.mipush.sdk;

import android.content.Context;
import android.content.SharedPreferences;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
public class af {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile af f7990a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Context f62a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private List<x> f63a = new ArrayList();

    private af(Context context) {
        Context applicationContext = context.getApplicationContext();
        this.f62a = applicationContext;
        if (applicationContext == null) {
            this.f62a = context;
        }
    }

    public static af a(Context context) {
        if (f7990a == null) {
            synchronized (af.class) {
                if (f7990a == null) {
                    f7990a = new af(context);
                }
            }
        }
        return f7990a;
    }

    public int a(String str) {
        synchronized (this.f63a) {
            x xVar = new x();
            xVar.f102a = str;
            if (this.f63a.contains(xVar)) {
                for (x xVar2 : this.f63a) {
                    if (xVar2.equals(xVar)) {
                        return xVar2.f8024a;
                    }
                }
            }
            return 0;
        }
    }

    public synchronized String a(au auVar) {
        return this.f62a.getSharedPreferences("mipush_extra", 0).getString(auVar.name(), "");
    }

    public synchronized void a(au auVar, String str) {
        SharedPreferences sharedPreferences = this.f62a.getSharedPreferences("mipush_extra", 0);
        sharedPreferences.edit().putString(auVar.name(), str).commit();
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m64a(String str) {
        synchronized (this.f63a) {
            x xVar = new x();
            xVar.f8024a = 0;
            xVar.f102a = str;
            if (this.f63a.contains(xVar)) {
                this.f63a.remove(xVar);
            }
            this.f63a.add(xVar);
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m65a(String str) {
        synchronized (this.f63a) {
            x xVar = new x();
            xVar.f102a = str;
            return this.f63a.contains(xVar);
        }
    }

    public void b(String str) {
        synchronized (this.f63a) {
            x xVar = new x();
            xVar.f102a = str;
            if (this.f63a.contains(xVar)) {
                Iterator<x> it = this.f63a.iterator();
                while (true) {
                    if (!it.hasNext()) {
                        break;
                    }
                    x next = it.next();
                    if (xVar.equals(next)) {
                        xVar = next;
                        break;
                    }
                }
            }
            xVar.f8024a++;
            this.f63a.remove(xVar);
            this.f63a.add(xVar);
        }
    }

    public void c(String str) {
        synchronized (this.f63a) {
            x xVar = new x();
            xVar.f102a = str;
            if (this.f63a.contains(xVar)) {
                this.f63a.remove(xVar);
            }
        }
    }
}
