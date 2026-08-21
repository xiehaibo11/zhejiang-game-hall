package com.kwad.sdk.ranger;

import android.text.TextUtils;
import android.util.Log;
import com.kwad.sdk.utils.aw;
import com.kwad.sdk.utils.g;
import com.kwad.sdk.utils.s;
import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.TimeUnit;

public class b {
    public static final String TAG = "Ranger_" + b.class.getSimpleName();
    private String value;

    static class a {
        private static final b aGC = new b(0);
    }

    private b() {
    }

    b(byte b) {
        this();
    }

    public static b Hn() {
        return a.aGC;
    }

    static com.kwad.sdk.ranger.b.a.c a(b bVar, String str, String str2) {
        return ak(str, str2);
    }

    private static Object a(com.kwad.sdk.ranger.a.a aVar, boolean z, Class<?> cls) {
        Object[] objArrHx = aVar.aHf.Hx();
        return (objArrHx == null || objArrHx.length == 0) ? z ? s.b(cls, aVar.aHf.name, new Object[0]) : s.f(aVar.aHa, aVar.aHf.name, new Object[0]) : z ? s.b(cls, aVar.aHf.name, objArrHx) : s.f(aVar.aHa, aVar.aHf.name, objArrHx);
    }

    private void a(com.kwad.sdk.ranger.a.a aVar) {
        com.kwad.sdk.ranger.a.a aVar2;
        Object objB;
        if (aVar.aHg != null && !aVar.aHg.Hu()) {
            if (TextUtils.isEmpty(aVar.aHc)) {
                if (aVar.aHf != null && !aVar.aHf.Hu()) {
                    aVar2 = aVar.aHg;
                    objB = b(aVar);
                }
                a(aVar.aHg);
                return;
            }
            aVar2 = aVar.aHg;
            objB = c(aVar);
            aVar2.aHa = objB;
            a(aVar.aHg);
            return;
        }
        if (!TextUtils.isEmpty(aVar.aHc)) {
            l(c(aVar));
            return;
        }
        if (aVar.aHf != null && !aVar.aHf.Hu()) {
            l(b(aVar));
            return;
        }
        com.kwad.sdk.core.e.c.d(TAG, "node.nodeClassName:" + aVar.aHb);
        this.value = s.fu(aVar.aHb) ? "true" : "false";
    }

    private static com.kwad.sdk.ranger.b.a.c ak(String str, String str2) {
        if (TextUtils.isEmpty(str) || TextUtils.isEmpty(str2)) {
            return null;
        }
        com.kwad.sdk.ranger.b.a.c cVar = new com.kwad.sdk.ranger.b.a.c();
        cVar.name = str;
        cVar.aHs = str2;
        return cVar;
    }

    private Object b(com.kwad.sdk.ranger.a.a aVar) {
        if (!aVar.aHf.aHo) {
            if (aVar.aHa != null) {
                return a(aVar, false, (Class<?>) null);
            }
            return null;
        }
        try {
            Class<?> cls = !TextUtils.isEmpty(aVar.aHb) ? Class.forName(aVar.aHb) : aVar.aHa != null ? aVar.aHa.getClass() : null;
            if (cls != null) {
                return a(aVar, true, cls);
            }
            return null;
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.w(TAG, Log.getStackTraceString(e));
            return null;
        }
    }

    private static Object c(com.kwad.sdk.ranger.a.a aVar) {
        if (aVar.aHd) {
            try {
                return s.c(Class.forName(aVar.aHb), aVar.aHc);
            } catch (Exception e) {
                com.kwad.sdk.core.e.c.w(TAG, Log.getStackTraceString(e));
            }
        } else if (aVar.aHa != null) {
            return s.f(aVar.aHa, aVar.aHc);
        }
        return null;
    }

    private void l(Object obj) {
        String strValueOf;
        if (obj != null) {
            strValueOf = String.valueOf(obj);
        } else {
            com.kwad.sdk.core.e.c.w(TAG, "value is null by ob null");
            strValueOf = "";
        }
        this.value = strValueOf;
    }

    public final void b(d dVar) {
        if (dVar == null || dVar.aGK == null || dVar.aGK.isEmpty()) {
            return;
        }
        final List<com.kwad.sdk.ranger.a.a> list = dVar.aGK;
        g.schedule(new aw() {
            @Override
            public final void doTask() {
                ArrayList arrayList = new ArrayList();
                for (com.kwad.sdk.ranger.a.a aVar : list) {
                    if (aVar != null && !TextUtils.isEmpty(aVar.aHe)) {
                        String str = aVar.aHe;
                        b.this.a(aVar);
                        b bVar = b.this;
                        com.kwad.sdk.ranger.b.a.c cVarA = b.a(bVar, str, bVar.value);
                        if (cVarA != null) {
                            arrayList.add(cVarA);
                        }
                    }
                }
                if (arrayList.isEmpty()) {
                    return;
                }
                com.kwad.sdk.ranger.b.a.d dVar2 = new com.kwad.sdk.ranger.b.a.d();
                dVar2.aHt = arrayList;
                com.kwad.sdk.ranger.b.a.a(dVar2);
            }
        }, 120L, TimeUnit.SECONDS);
    }
}
