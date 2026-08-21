package com.qihoo360.replugin;

public class d {
    private static android.content.Context a;
    private static android.content.Context b;
    private static java.lang.ClassLoader c;
    private static android.os.IBinder d;

    public static android.content.Context a() {
            android.content.Context r0 = com.qihoo360.replugin.d.b
            return r0
    }

    static void a(android.content.Context r0, java.lang.ClassLoader r1, android.os.IBinder r2) {
            com.qihoo360.replugin.d.a = r0
            android.content.ContextWrapper r0 = (android.content.ContextWrapper) r0
            android.content.Context r0 = r0.getBaseContext()
            com.qihoo360.replugin.d.b = r0
            com.qihoo360.replugin.d.c = r1
            com.qihoo360.replugin.d.d = r2
            return
    }

    public static java.lang.ClassLoader b() {
            java.lang.ClassLoader r0 = com.qihoo360.replugin.d.c
            return r0
    }

    public static android.content.Context c() {
            android.content.Context r0 = com.qihoo360.replugin.d.a
            return r0
    }
}
