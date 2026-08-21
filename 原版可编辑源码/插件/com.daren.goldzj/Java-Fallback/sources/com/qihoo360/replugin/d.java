package com.qihoo360.replugin;

import android.content.Context;
import android.content.ContextWrapper;
import android.os.IBinder;

public class d {
    private static Context a;
    private static Context b;
    private static ClassLoader c;
    private static IBinder d;

    public static Context a() {
        return b;
    }

    static void a(Context r0, ClassLoader r1, IBinder r2) {
        a = r0;
        b = ((ContextWrapper) r0).getBaseContext();
        c = r1;
        d = r2;
    }

    public static ClassLoader b() {
        return c;
    }

    public static Context c() {
        return a;
    }
}
