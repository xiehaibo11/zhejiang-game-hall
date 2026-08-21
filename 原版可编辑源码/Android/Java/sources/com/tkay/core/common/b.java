package com.tkay.core.common;

import android.text.TextUtils;
import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.ConcurrentHashMap;

public class b {
    public static final String a = "1";
    private static volatile b c;
    ConcurrentHashMap<String, List<a>> b = new ConcurrentHashMap<>();

    public interface a {
        void a(Object obj);
    }

    private b() {
    }

    public static b a() {
        if (c == null) {
            synchronized (b.class) {
                if (c == null) {
                    c = new b();
                }
            }
        }
        return c;
    }

    public final synchronized void a(final String str, final a aVar) {
        if (!TextUtils.isEmpty(str) && aVar != null) {
            com.tkay.core.common.l.b.a.a().a(new Runnable() {
                @Override
                public final void run() {
                    synchronized (b.this) {
                        List<a> arrayList = b.this.b.get(str);
                        if (arrayList == null) {
                            arrayList = new ArrayList<>();
                            b.this.b.put(str, arrayList);
                        }
                        arrayList.add(aVar);
                    }
                }
            });
        }
    }

    public final synchronized void b(final String str, final a aVar) {
        if (!TextUtils.isEmpty(str) && aVar != null) {
            com.tkay.core.common.l.b.a.a().a(new Runnable() {
                @Override
                public final void run() {
                    synchronized (b.this) {
                        List<a> list = b.this.b.get(str);
                        if (list != null) {
                            list.remove(aVar);
                        }
                    }
                }
            });
        }
    }

    public final synchronized void a(final String str, final Object obj) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        com.tkay.core.common.l.b.a.a().a(new Runnable() {
            @Override
            public final void run() {
                synchronized (b.this) {
                    List<a> list = b.this.b.get(str);
                    if (list == null) {
                        return;
                    }
                    for (a aVar : list) {
                        if (aVar != null) {
                            aVar.a(obj);
                        }
                    }
                }
            }
        });
    }
}
