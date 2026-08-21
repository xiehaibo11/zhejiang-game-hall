package com.qihoo360.replugin;

import android.content.Context;
import android.os.IBinder;
import library.a;

public class Entry {
    public static final IBinder create(Context context, ClassLoader classLoader, IBinder iBinder) {
        e.a(classLoader);
        d.a(context, classLoader, iBinder);
        return new a.a() {
            @Override
            public IBinder a(String str) {
                return g.a().a(str);
            }
        };
    }
}
