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

    static void a(Context context, ClassLoader classLoader, IBinder iBinder) {
        a = context;
        b = ((ContextWrapper) context).getBaseContext();
        c = classLoader;
        d = iBinder;
    }

    public static ClassLoader b() {
        return c;
    }

    public static Context c() {
        return a;
    }
}
