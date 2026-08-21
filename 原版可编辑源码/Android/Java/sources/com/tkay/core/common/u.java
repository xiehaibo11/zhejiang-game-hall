package com.tkay.core.common;

import com.tkay.core.api.AdError;
import com.tkay.core.common.h.a.c;
import java.util.List;
import java.util.concurrent.atomic.AtomicInteger;
import org.json.JSONObject;

public class u {
    private static volatile u c;
    private String b = u.class.getSimpleName();
    AtomicInteger a = new AtomicInteger(0);

    private u() {
    }

    public static u a() {
        if (c == null) {
            synchronized (u.class) {
                if (c == null) {
                    c = new u();
                }
            }
        }
        return c;
    }

    public final void a(final int i, final String str, final String str2, final String str3, final String str4) {
        com.tkay.core.common.l.b.a.a().a(new Runnable() {
            @Override
            public final void run() {
                com.tkay.core.common.f.n nVar = new com.tkay.core.common.f.n();
                nVar.b = i;
                nVar.d = str;
                nVar.c = str2;
                nVar.e = str3;
                nVar.f = System.currentTimeMillis();
                StringBuilder sb = new StringBuilder();
                sb.append(str);
                sb.append(nVar.f);
                sb.append(str3);
                nVar.a = com.tkay.core.common.l.f.a(sb.toString() != null ? str3 : "");
                nVar.g = str4;
                String unused = u.this.b;
                new StringBuilder("save request:").append(nVar.a());
                com.tkay.core.common.c.g.a(com.tkay.core.common.c.c.a(com.tkay.core.common.b.m.a().f())).a(nVar);
            }
        });
    }

    public final synchronized void b() {
        List<com.tkay.core.common.f.n> listC;
        if (this.a.get() <= 0 && (listC = com.tkay.core.common.c.g.a(com.tkay.core.common.c.c.a(com.tkay.core.common.b.m.a().f())).c()) != null && listC.size() > 0) {
            this.a.set(listC.size());
            new StringBuilder("need to send request count: ").append(this.a.get());
            for (final com.tkay.core.common.f.n nVar : listC) {
                if (System.currentTimeMillis() - nVar.f >= 604800000) {
                    this.a.decrementAndGet();
                    com.tkay.core.common.c.g.a(com.tkay.core.common.c.c.a(com.tkay.core.common.b.m.a().f())).b(nVar);
                } else {
                    int iOptInt = 1000;
                    try {
                        iOptInt = new JSONObject(nVar.g).optInt(com.tkay.core.common.f.n.h);
                    } catch (Throwable unused) {
                    }
                    if (nVar.b == 3) {
                        new com.tkay.core.common.h.a.b(nVar.e, iOptInt).a(new c.a() {
                            @Override
                            public final void a(Object obj) {
                                String unused2 = u.this.b;
                                new StringBuilder("re-send success.... ").append(nVar.a());
                                com.tkay.core.common.c.g.a(com.tkay.core.common.c.c.a(com.tkay.core.common.b.m.a().f())).b(nVar);
                                u.this.a.decrementAndGet();
                            }

                            @Override
                            public final void a(Throwable th) {
                                String unused2 = u.this.b;
                                StringBuilder sb = new StringBuilder("re-send fail.... ");
                                sb.append(nVar.a());
                                sb.append("--error: ");
                                sb.append(th.getMessage());
                                u.this.a.decrementAndGet();
                            }
                        });
                    } else {
                        final com.tkay.core.common.h.n nVar2 = new com.tkay.core.common.h.n(nVar);
                        if (iOptInt == 1001) {
                            nVar2.p();
                        }
                        nVar2.a(0, new com.tkay.core.common.h.k() {
                            @Override
                            public final void onLoadStart(int i) {
                            }

                            @Override
                            public final void onLoadFinish(int i, Object obj) {
                                String unused2 = u.this.b;
                                new StringBuilder("re-send success.... ").append(nVar.a());
                                com.tkay.core.common.c.g.a(com.tkay.core.common.c.c.a(com.tkay.core.common.b.m.a().f())).b(nVar2.q());
                                u.this.a.decrementAndGet();
                            }

                            @Override
                            public final void onLoadError(int i, String str, AdError adError) {
                                String unused2 = u.this.b;
                                StringBuilder sb = new StringBuilder("re-send fail.... ");
                                sb.append(nVar.a());
                                sb.append("--error: ");
                                if (str == null) {
                                    str = "";
                                }
                                sb.append(str);
                                u.this.a.decrementAndGet();
                            }

                            @Override
                            public final void onLoadCanceled(int i) {
                                u.this.a.decrementAndGet();
                            }
                        });
                    }
                }
            }
        }
    }
}
