package com.xiaomi.mipush.sdk;

import android.content.Context;
import android.content.SharedPreferences;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class af {
    private static volatile af a;
    private Context a;
    private List<x> a = new ArrayList();

    private af(Context context) {
        Context applicationContext = context.getApplicationContext();
        this.a = applicationContext;
        if (applicationContext == null) {
            this.a = context;
        }
    }

    public static af a(Context context) {
        if (a == null) {
            synchronized (af.class) {
                if (a == null) {
                    a = new af(context);
                }
            }
        }
        return a;
    }

    public int a(String str) {
        synchronized (this.a) {
            x xVar = new x();
            xVar.a = str;
            if (this.a.contains(xVar)) {
                for (x xVar2 : this.a) {
                    if (xVar2.equals(xVar)) {
                        return xVar2.a;
                    }
                }
            }
            return 0;
        }
    }

    public synchronized String a(au auVar) {
        return this.a.getSharedPreferences("mipush_extra", 0).getString(auVar.name(), "");
    }

    public synchronized void a(au auVar, String str) {
        SharedPreferences sharedPreferences = this.a.getSharedPreferences("mipush_extra", 0);
        sharedPreferences.edit().putString(auVar.name(), str).commit();
    }

    public void a(String str) {
        synchronized (this.a) {
            x xVar = new x();
            xVar.a = 0;
            xVar.a = str;
            if (this.a.contains(xVar)) {
                this.a.remove(xVar);
            }
            this.a.add(xVar);
        }
    }

    public boolean a(String str) {
        synchronized (this.a) {
            x xVar = new x();
            xVar.a = str;
            return this.a.contains(xVar);
        }
    }

    public void b(String str) {
        synchronized (this.a) {
            x xVar = new x();
            xVar.a = str;
            if (this.a.contains(xVar)) {
                Iterator<x> it = this.a.iterator();
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
            xVar.a++;
            this.a.remove(xVar);
            this.a.add(xVar);
        }
    }

    public void c(String str) {
        synchronized (this.a) {
            x xVar = new x();
            xVar.a = str;
            if (this.a.contains(xVar)) {
                this.a.remove(xVar);
            }
        }
    }
}
