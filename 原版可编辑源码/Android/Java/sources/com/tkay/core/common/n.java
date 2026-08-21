package com.tkay.core.common;

import com.tkay.core.common.b.f;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import org.json.JSONArray;

public class n {
    private static volatile n c;
    com.tkay.core.common.c.h a;
    private final String b = getClass().getSimpleName();
    private ConcurrentHashMap<String, String> d = new ConcurrentHashMap<>(3);

    public static n a() {
        if (c == null) {
            synchronized (n.class) {
                if (c == null) {
                    c = new n();
                }
            }
        }
        return c;
    }

    public n() {
        com.tkay.core.common.c.h hVarA = com.tkay.core.common.c.h.a(com.tkay.core.common.c.c.a(com.tkay.core.common.b.m.a().f()));
        this.a = hVarA;
        List<com.tkay.core.common.f.o> listD = hVarA.d();
        if (listD != null) {
            Iterator<com.tkay.core.common.f.o> it = listD.iterator();
            while (it.hasNext()) {
                this.d.put(it.next().a(), "1");
            }
        }
    }

    public final void a(String str) {
        Map<String, Object> mapC = com.tkay.core.common.l.h.c(com.tkay.core.common.l.c.c(str));
        if (mapC.size() == 0) {
            com.tkay.core.common.l.p.a(com.tkay.core.common.b.m.a().f(), com.tkay.core.common.b.f.o, f.o.p, 0);
            return;
        }
        for (Map.Entry<String, Object> entry : mapC.entrySet()) {
            try {
                if (com.tkay.core.common.l.h.a(com.tkay.core.common.b.m.a().f(), entry.getValue().toString())) {
                    this.d.put(entry.getKey(), "1");
                    this.a.a(entry.getKey());
                }
            } catch (Throwable unused) {
            }
        }
        com.tkay.core.common.l.p.a(com.tkay.core.common.b.m.a().f(), com.tkay.core.common.b.f.o, f.o.p, b() + mapC.size());
        com.tkay.core.common.l.b.a.a().a(new Runnable() {
            @Override
            public final void run() {
                n.this.a.c();
            }
        });
    }

    public static int b() {
        return com.tkay.core.common.l.p.b(com.tkay.core.common.b.m.a().f(), com.tkay.core.common.b.f.o, f.o.p, 0);
    }

    public final JSONArray c() {
        Iterator<Map.Entry<String, String>> it = this.d.entrySet().iterator();
        JSONArray jSONArray = new JSONArray();
        while (it.hasNext()) {
            try {
                jSONArray.put(Long.parseLong(it.next().getKey()));
            } catch (Throwable unused) {
            }
        }
        return jSONArray;
    }
}
