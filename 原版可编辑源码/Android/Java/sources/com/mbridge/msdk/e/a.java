package com.mbridge.msdk.e;

import android.content.Context;
import android.os.Handler;
import android.os.Message;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.db.f;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.db.r;
import com.mbridge.msdk.foundation.entity.k;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.reward.adapter.d;
import java.util.LinkedList;
import java.util.List;

public final class a {
    private long a;
    private boolean b;
    private LinkedList<k> c;
    private LinkedList<k> d;
    private int e;
    private int f;
    private f g;
    private com.mbridge.msdk.videocommon.d.a h;
    private r i;
    private i j;
    private Handler k;

    static class a {
        static a a = new a();
    }

    private a() {
        this.b = false;
        this.c = new LinkedList<>();
        this.d = new LinkedList<>();
        this.e = 0;
        this.f = 0;
        this.k = new Handler() {
            @Override
            public final void handleMessage(Message message) {
                synchronized (a.this) {
                    int i = message.what;
                    if (i != 1) {
                        if (i == 2) {
                            a.c(a.this);
                        }
                    } else {
                        if (a.this.b) {
                            return;
                        }
                        a.a(a.this, a.this.a);
                        sendMessageDelayed(obtainMessage(1), a.this.a);
                    }
                }
            }
        };
    }

    private boolean a(k kVar) {
        boolean z = false;
        if (kVar == null || TextUtils.isEmpty(kVar.a())) {
            return false;
        }
        String strA = kVar.a();
        try {
            if (this.g != null) {
                int iA = this.g.a(strA, this.h != null ? this.h.e() : 0L);
                if (iA != -1) {
                    if (iA != 1) {
                    }
                } else if (!TextUtils.isEmpty(strA)) {
                    if (this.c != null && this.c.contains(strA)) {
                        this.c.remove(strA);
                    } else if (this.d != null && this.d.contains(strA)) {
                        this.d.remove(strA);
                    }
                    if (this.i != null) {
                        this.i.a(strA);
                    }
                }
                try {
                    this.k.sendMessage(this.k.obtainMessage(2));
                    return false;
                } catch (Throwable th) {
                    th = th;
                    z.c("LoopTimer", th.getMessage(), th);
                    return z;
                }
            }
            return true;
        } catch (Throwable th2) {
            th = th2;
            z = true;
        }
    }

    private void a(String str, String str2, boolean z) {
        try {
            Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
            if (contextJ == null) {
                return;
            }
            final d dVar = new d(contextJ, str, str2);
            dVar.a(z);
            dVar.a(new com.mbridge.msdk.reward.adapter.b() {
                @Override
                public final void a() {
                }

                @Override
                public final void a(String str3) {
                    a.this.k.sendMessage(a.this.k.obtainMessage(2));
                    dVar.a((com.mbridge.msdk.reward.adapter.b) null);
                }

                @Override
                public final void b(String str3) {
                    a.this.k.sendMessage(a.this.k.obtainMessage(2));
                    dVar.a((com.mbridge.msdk.reward.adapter.b) null);
                }
            });
            dVar.a(1, 8000, false);
        } catch (Exception e) {
            z.c("LoopTimer", e.getMessage(), e);
        }
    }

    public final void a(String str, String str2) {
        if (this.c.contains(str2)) {
            return;
        }
        this.c.add(new k(str, str2, 94));
        r rVar = this.i;
        if (rVar != null) {
            rVar.a(str, str2, 94);
        }
    }

    public final void b(String str, String str2) {
        if (this.d.contains(str2)) {
            return;
        }
        this.d.add(new k(str, str2, com.tkay.expressad.foundation.g.a.aU));
        r rVar = this.i;
        if (rVar != null) {
            rVar.a(str, str2, com.tkay.expressad.foundation.g.a.aU);
        }
    }

    public final void a(long j) {
        if (this.j == null) {
            this.j = i.a(com.mbridge.msdk.foundation.controller.a.f().j());
        }
        if (this.i == null) {
            this.i = r.a(this.j);
        }
        List<k> listA = this.i.a(com.tkay.expressad.foundation.g.a.aU);
        if (listA != null) {
            this.d.addAll(listA);
            for (k kVar : listA) {
                b(kVar.b(), kVar.a());
            }
        }
        List<k> listA2 = this.i.a(94);
        if (listA2 != null) {
            this.c.addAll(listA2);
            for (k kVar2 : listA2) {
                a(kVar2.b(), kVar2.a());
            }
        }
        if (this.g == null) {
            this.g = f.a(this.j);
        }
        if (this.h == null) {
            this.h = com.mbridge.msdk.videocommon.d.b.a().b();
        }
        this.a = j;
        this.b = false;
        Handler handler = this.k;
        handler.sendMessageDelayed(handler.obtainMessage(1), this.a);
    }

    static void a(a aVar, long j) {
        LinkedList<k> linkedList = aVar.c;
        if (linkedList == null || linkedList.size() <= 0 || aVar.e == 0 || aVar.c.size() <= aVar.e) {
            LinkedList<k> linkedList2 = aVar.d;
            if (linkedList2 == null || linkedList2.size() <= 0 || aVar.f == 0 || aVar.d.size() == aVar.f) {
                aVar.f = 0;
                aVar.e = 0;
                Handler handler = aVar.k;
                handler.sendMessage(handler.obtainMessage(2));
            }
        }
    }

    static void c(a aVar) {
        try {
            if (aVar.c != null && aVar.c.size() > 0 && aVar.e < aVar.c.size()) {
                k kVar = aVar.c.get(aVar.e);
                aVar.e++;
                if (aVar.a(kVar)) {
                    aVar.a(kVar.b(), kVar.a(), false);
                }
            } else if (aVar.d != null && aVar.d.size() > 0 && aVar.f < aVar.d.size()) {
                k kVar2 = aVar.d.get(aVar.f);
                aVar.f++;
                if (aVar.a(kVar2)) {
                    aVar.a(kVar2.b(), kVar2.a(), true);
                }
            }
        } catch (Throwable th) {
            z.c("LoopTimer", th.getMessage(), th);
        }
    }
}
