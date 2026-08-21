package com.tkay.core.common;

import android.text.TextUtils;
import com.tkay.core.api.AdError;
import com.tkay.core.common.c.i;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

public class t {
    public static final String a = t.class.getSimpleName();
    private static volatile t b;
    private Map<String, com.tkay.core.common.f.v> c;
    private List<com.tkay.core.common.f.v> d;
    private final int f = 5;
    private final int g = 500;
    private List<String> e = Collections.synchronizedList(new ArrayList(8));

    public static boolean a(int i) {
        boolean z;
        switch (i) {
            case -1003:
            case -1002:
            case -1001:
            case -1000:
                z = true;
                break;
            default:
                z = false;
                break;
        }
        if (z || ((i < -99 || i >= 200) && i < 400)) {
            return z;
        }
        return true;
    }

    private t() {
    }

    public static t a() {
        if (b == null) {
            synchronized (t.class) {
                if (b == null) {
                    b = new t();
                }
            }
        }
        return b;
    }

    public final synchronized void a(String str, String str2, long j) {
        com.tkay.core.common.f.v vVar = new com.tkay.core.common.f.v();
        vVar.b = 2;
        vVar.d = str;
        vVar.c = str2;
        vVar.f = j;
        new StringBuilder("reSendNow: ").append(vVar.a());
        a(vVar, false);
    }

    private synchronized void a(final com.tkay.core.common.f.v vVar, final boolean z) {
        if (System.currentTimeMillis() > vVar.f) {
            new StringBuilder("resendNoticeUrl: do nothing because offer is out date: ").append(vVar.a());
            this.e.remove(vVar.a);
            if (z) {
                a(vVar);
            }
            return;
        }
        if (this.e.contains(vVar.a)) {
            new StringBuilder("resendNoticeUrl: do nothing because it is loading... ").append(vVar.a());
            return;
        }
        this.e.add(vVar.a);
        if (z) {
            vVar.g++;
            if (vVar.g >= 5) {
                new StringBuilder("resendNoticeUrl: The number of retries is greater than or equal to the maximum number of retries, start deleting and continue: ").append(vVar.a());
                a(vVar);
            } else {
                b(vVar);
            }
        } else {
            vVar.g++;
            if (vVar.g >= 5) {
                new StringBuilder("resendNoticeUrl: The number of retries is greater than or equal to the maximum number of retries, start deleting and continue: ").append(vVar.a());
                this.e.remove(vVar.a);
                return;
            }
        }
        new StringBuilder("resendNoticeUrl: start to send notice: ").append(vVar.a());
        new com.tkay.core.common.h.m(vVar).a(0, new com.tkay.core.common.h.k() {
            @Override
            public final void onLoadStart(int i) {
            }

            @Override
            public final void onLoadFinish(int i, Object obj) {
                String str = t.a;
                new StringBuilder("resendNoticeUrl:  send notice success: ").append(vVar.a());
                synchronized (t.this) {
                    t.this.e.remove(vVar.a);
                    if (z) {
                        t.this.a(vVar);
                    }
                }
            }

            @Override
            public final void onLoadError(int i, String str, AdError adError) {
                String str2 = t.a;
                new StringBuilder("resendNoticeUrl:  send notice failed: ").append(vVar.a());
                synchronized (t.this) {
                    t.this.e.remove(vVar.a);
                    if (!z) {
                        t.this.b(vVar);
                    }
                }
            }

            @Override
            public final void onLoadCanceled(int i) {
                synchronized (t.this) {
                    t.this.e.remove(vVar.a);
                }
            }
        });
    }

    public final synchronized void b() {
        try {
            c();
            List<com.tkay.core.common.f.v> listSynchronizedList = Collections.synchronizedList(new ArrayList(this.d));
            if (listSynchronizedList != null && listSynchronizedList.size() > 0) {
                for (com.tkay.core.common.f.v vVar : listSynchronizedList) {
                    new StringBuilder("tryToReSendNoticeUrl: ").append(vVar.a());
                    a(vVar, true);
                }
            }
        } catch (Throwable unused) {
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:13:0x002e A[Catch: all -> 0x0046, TryCatch #0 {, blocks: (B:11:0x002a, B:13:0x002e, B:14:0x0035, B:16:0x0039, B:10:0x0027, B:3:0x0001, B:5:0x0005, B:7:0x0009), top: B:22:0x0001, inners: #1 }] */
    /* JADX WARN: Removed duplicated region for block: B:16:0x0039 A[Catch: all -> 0x0046, TRY_LEAVE, TryCatch #0 {, blocks: (B:11:0x002a, B:13:0x002e, B:14:0x0035, B:16:0x0039, B:10:0x0027, B:3:0x0001, B:5:0x0005, B:7:0x0009), top: B:22:0x0001, inners: #1 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private synchronized void c() {
        try {
        } catch (Throwable th) {
            th.printStackTrace();
        }
        if (this.c == null && this.d == null) {
            i.a aVarC = com.tkay.core.common.c.i.a(com.tkay.core.common.c.c.a(com.tkay.core.common.b.m.a().f())).c();
            this.c = aVarC.b;
            this.d = aVarC.a;
            if (this.c == null) {
            }
            if (this.d == null) {
            }
        } else {
            if (this.c == null) {
                this.c = new ConcurrentHashMap();
            }
            if (this.d == null) {
                this.d = Collections.synchronizedList(new ArrayList());
            }
        }
    }

    private synchronized void a(com.tkay.core.common.f.v vVar) {
        new StringBuilder("delete: ").append(vVar.a());
        this.c.remove(vVar.a);
        this.d.remove(vVar);
        com.tkay.core.common.c.i.a(com.tkay.core.common.c.c.a(com.tkay.core.common.b.m.a().f())).b(vVar);
    }

    private synchronized void b(com.tkay.core.common.f.v vVar) {
        if (TextUtils.isEmpty(vVar.a)) {
            vVar.e = System.currentTimeMillis();
            vVar.a = com.tkay.core.common.l.f.a(vVar.d + vVar.e);
            this.c.put(vVar.a, vVar);
            this.d.add(vVar);
        }
        new StringBuilder("insertOrUpdate: ").append(vVar.a());
        com.tkay.core.common.c.i.a(com.tkay.core.common.c.c.a(com.tkay.core.common.b.m.a().f())).a(vVar);
        if (this.d.size() > 500) {
            com.tkay.core.common.f.v vVar2 = this.d.get(0);
            new StringBuilder("insertOrUpdate,  exceeded the maximum number of records, start to delete: ").append(vVar.a());
            this.e.remove(vVar.a);
            a(vVar2);
        }
    }
}
