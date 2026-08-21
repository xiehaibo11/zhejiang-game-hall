package com.tkay.basead.d.b;

import android.content.Context;
import android.text.TextUtils;
import com.tkay.basead.a.b.b;
import com.tkay.basead.c.e;
import com.tkay.basead.c.f;
import com.tkay.basead.d.c.c;
import com.tkay.basead.g.d;
import com.tkay.core.api.AdError;
import com.tkay.core.common.f.i;
import com.tkay.core.common.f.y;
import com.tkay.core.common.h.k;
import java.util.concurrent.ConcurrentHashMap;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class a {
    private static volatile a c;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    ConcurrentHashMap<String, Boolean> f5644a = new ConcurrentHashMap<>(3);
    private Context b;

    /* JADX INFO: renamed from: com.tkay.basead.d.b.a$a, reason: collision with other inner class name */
    public interface InterfaceC0391a {
        void a();

        void a(y yVar);

        void a(y yVar, e eVar);
    }

    private a(Context context) {
        this.b = context.getApplicationContext();
    }

    public static a a(Context context) {
        if (c == null) {
            synchronized (a.class) {
                if (c == null) {
                    c = new a(context);
                }
            }
        }
        return c;
    }

    public final void a(i iVar, String str, InterfaceC0391a interfaceC0391a) {
        int i;
        int i2;
        int i3;
        String[] strArrSplit;
        com.tkay.core.basead.b.a();
        String strA = com.tkay.core.basead.b.a(iVar);
        y yVarA = null;
        if (this.f5644a.contains(strA) && this.f5644a.get(strA).booleanValue()) {
            interfaceC0391a.a(null, f.a(f.g, f.q));
            return;
        }
        this.f5644a.put(strA, Boolean.TRUE);
        try {
            yVarA = a(iVar);
        } catch (Throwable unused) {
        }
        if (yVarA == null || yVarA.N()) {
            if (TextUtils.isEmpty(iVar.m.r())) {
                i3 = 0;
                i2 = 0;
            } else {
                try {
                    strArrSplit = iVar.m.r().split("x");
                    i = Integer.parseInt(strArrSplit[0]);
                } catch (Throwable unused2) {
                    i = 0;
                }
                try {
                    i2 = Integer.parseInt(strArrSplit[1]);
                } catch (Throwable unused3) {
                    i2 = 0;
                }
                i3 = i;
            }
            new d(iVar, i3, i2, c.a().a(this.b, c.a(iVar.b, iVar.c)), str).a(0, (k) new AnonymousClass1(iVar, interfaceC0391a));
            return;
        }
        interfaceC0391a.a();
        a(yVarA, iVar, interfaceC0391a);
    }

    private void b(i iVar, String str, InterfaceC0391a interfaceC0391a) {
        y yVarA;
        int i;
        int i2;
        int i3;
        String[] strArrSplit;
        try {
            yVarA = a(iVar);
        } catch (Throwable unused) {
            yVarA = null;
        }
        if (yVarA == null || yVarA.N()) {
            if (TextUtils.isEmpty(iVar.m.r())) {
                i3 = 0;
                i2 = 0;
            } else {
                try {
                    strArrSplit = iVar.m.r().split("x");
                    i = Integer.parseInt(strArrSplit[0]);
                } catch (Throwable unused2) {
                    i = 0;
                }
                try {
                    i2 = Integer.parseInt(strArrSplit[1]);
                } catch (Throwable unused3) {
                    i2 = 0;
                }
                i3 = i;
            }
            new d(iVar, i3, i2, c.a().a(this.b, c.a(iVar.b, iVar.c)), str).a(0, (k) new AnonymousClass1(iVar, interfaceC0391a));
            return;
        }
        if (interfaceC0391a != null) {
            interfaceC0391a.a();
        }
        a(yVarA, iVar, interfaceC0391a);
    }

    /* JADX INFO: renamed from: com.tkay.basead.d.b.a$1, reason: invalid class name */
    final class AnonymousClass1 implements k {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ i f5645a;
        final /* synthetic */ InterfaceC0391a b;

        @Override // com.tkay.core.common.h.k
        public final void onLoadStart(int i) {
        }

        AnonymousClass1(i iVar, InterfaceC0391a interfaceC0391a) {
            this.f5645a = iVar;
            this.b = interfaceC0391a;
        }

        @Override // com.tkay.core.common.h.k
        public final void onLoadFinish(int i, Object obj) {
            JSONObject jSONObject;
            y yVarA;
            try {
                jSONObject = new JSONObject(obj.toString());
                try {
                    jSONObject.put(b.f5647a, System.currentTimeMillis());
                    yVarA = b.a(this.f5645a, jSONObject);
                } catch (Exception unused) {
                    yVarA = null;
                }
            } catch (Exception unused2) {
                jSONObject = null;
            }
            if (yVarA != null) {
                com.tkay.basead.d.c.b.a(yVarA);
                if (yVarA.b() == 1 && com.tkay.basead.a.b.a(a.this.b.getApplicationContext(), yVarA.B())) {
                    c.a().a(a.this.b, c.a(this.f5645a.b, this.f5645a.c), yVarA, this.f5645a.m);
                    InterfaceC0391a interfaceC0391a = this.b;
                    if (interfaceC0391a != null) {
                        interfaceC0391a.a(null, f.a(f.i, "Application installed."));
                        return;
                    }
                    return;
                }
                if (yVarA.b() == 2 && !com.tkay.basead.a.b.a(a.this.b.getApplicationContext(), yVarA.B())) {
                    c.a().a(a.this.b, c.a(this.f5645a.b, this.f5645a.c), yVarA, this.f5645a.m);
                    InterfaceC0391a interfaceC0391a2 = this.b;
                    if (interfaceC0391a2 != null) {
                        interfaceC0391a2.a(null, f.a(f.i, "Application not installed yet."));
                        return;
                    }
                    return;
                }
                com.tkay.basead.d.c.a.a(this.f5645a, yVarA);
                com.tkay.basead.a.b.a(10, yVarA, new com.tkay.basead.c.i(this.f5645a.d, ""));
                com.tkay.core.basead.b.a();
                Context context = a.this.b;
                com.tkay.core.basead.b.a();
                com.tkay.core.basead.b.a(context, com.tkay.core.basead.b.a(this.f5645a), jSONObject.toString());
                InterfaceC0391a interfaceC0391a3 = this.b;
                if (interfaceC0391a3 != null) {
                    interfaceC0391a3.a();
                }
                a.this.a(yVarA, this.f5645a, this.b);
                return;
            }
            InterfaceC0391a interfaceC0391a4 = this.b;
            if (interfaceC0391a4 != null) {
                interfaceC0391a4.a(null, f.a(f.i, obj != null ? obj.toString() : "No Ad Return."));
            }
        }

        @Override // com.tkay.core.common.h.k
        public final void onLoadError(int i, String str, AdError adError) {
            InterfaceC0391a interfaceC0391a = this.b;
            if (interfaceC0391a != null) {
                interfaceC0391a.a(null, f.a(f.i, str));
            }
        }

        @Override // com.tkay.core.common.h.k
        public final void onLoadCanceled(int i) {
            InterfaceC0391a interfaceC0391a = this.b;
            if (interfaceC0391a != null) {
                interfaceC0391a.a(null, f.a(f.i, "Cancel Request."));
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(final y yVar, final i iVar, final InterfaceC0391a interfaceC0391a) {
        com.tkay.basead.a.f.a();
        com.tkay.basead.a.f.a(iVar.b, yVar, iVar, new b.InterfaceC0384b() { // from class: com.tkay.basead.d.b.a.2
            @Override // com.tkay.basead.a.b.b.InterfaceC0384b
            public final void a() {
                ConcurrentHashMap<String, Boolean> concurrentHashMap = a.this.f5644a;
                com.tkay.core.basead.b.a();
                concurrentHashMap.put(com.tkay.core.basead.b.a(iVar), Boolean.FALSE);
                InterfaceC0391a interfaceC0391a2 = interfaceC0391a;
                if (interfaceC0391a2 != null) {
                    interfaceC0391a2.a(yVar);
                }
            }

            @Override // com.tkay.basead.a.b.b.InterfaceC0384b
            public final void a(e eVar) {
                ConcurrentHashMap<String, Boolean> concurrentHashMap = a.this.f5644a;
                com.tkay.core.basead.b.a();
                concurrentHashMap.put(com.tkay.core.basead.b.a(iVar), Boolean.FALSE);
                InterfaceC0391a interfaceC0391a2 = interfaceC0391a;
                if (interfaceC0391a2 != null) {
                    interfaceC0391a2.a(yVar, eVar);
                }
            }
        });
    }

    public final y a(i iVar) {
        com.tkay.core.basead.b.a();
        String strA = com.tkay.core.basead.b.a(iVar);
        com.tkay.core.basead.b.a();
        String strA2 = com.tkay.core.basead.b.a(this.b, strA);
        y yVarA = null;
        if (TextUtils.isEmpty(strA2)) {
            return null;
        }
        try {
            yVarA = b.a(iVar, new JSONObject(strA2));
        } catch (Throwable unused) {
        }
        if (yVarA != null) {
            com.tkay.basead.d.c.b.a(yVarA);
            com.tkay.basead.d.c.a.a(iVar, yVarA);
        }
        return yVarA;
    }
}
