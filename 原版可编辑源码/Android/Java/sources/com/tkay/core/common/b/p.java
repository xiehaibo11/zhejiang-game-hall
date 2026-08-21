package com.tkay.core.common.b;

import android.content.Context;
import android.content.Intent;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.tkay.core.activity.TYGdprAuthActivity;
import com.tkay.core.api.AdError;
import com.tkay.core.api.NetTrafficeCallback;
import com.tkay.core.api.TYGDPRAuthCallback;
import com.tkay.core.common.b.f;
import java.util.concurrent.ConcurrentHashMap;
import org.json.JSONObject;

public class p {
    private static volatile p d;
    Context b;
    int c;
    final int a = -100;
    private ConcurrentHashMap<Integer, Boolean> e = new ConcurrentHashMap<>(5);

    private p(Context context) {
        this.c = 2;
        if (context != null) {
            this.b = context.getApplicationContext();
        }
        this.c = com.tkay.core.common.l.p.b(this.b, f.o, f.o.d, 2);
    }

    public static p a(Context context) {
        if (d == null) {
            synchronized (p.class) {
                if (d == null) {
                    d = new p(context);
                }
            }
        }
        return d;
    }

    public final void a(int i) {
        this.c = i;
        com.tkay.core.common.l.p.a(this.b, f.o, f.o.d, i);
    }

    public final int a() {
        return this.c;
    }

    public final boolean b() {
        com.tkay.core.c.a aVarB = com.tkay.core.c.b.a(this.b).b(m.a().o());
        if (aVarB == null || aVarB.G()) {
            return this.c != 1;
        }
        if (aVarB.U() == 0) {
            return true;
        }
        int iR = this.c;
        if (aVarB.S() == 1) {
            iR = aVarB.R();
        }
        return iR == 0;
    }

    public final boolean c() {
        com.tkay.core.c.a aVarB = com.tkay.core.c.b.a(this.b).b(m.a().o());
        return (aVarB == null || aVarB.G()) ? this.c != 1 : this.c == 2 ? aVarB.U() == 0 : aVarB.S() == 1 ? aVarB.R() == 0 : this.c == 0 || aVarB.U() == 0;
    }

    public final boolean d() {
        return com.tkay.core.common.l.p.b(this.b, f.o, f.o.j, -100) == 1;
    }

    public final void a(final Context context, final TYGDPRAuthCallback tYGDPRAuthCallback) {
        m.a().a(new Runnable() {
            @Override
            public final void run() {
                TYGdprAuthActivity.mCallback = tYGDPRAuthCallback;
                Intent intent = new Intent(context, (Class<?>) TYGdprAuthActivity.class);
                intent.setFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
                context.startActivity(intent);
            }
        });
    }

    public final void a(final NetTrafficeCallback netTrafficeCallback) {
        int iB = com.tkay.core.common.l.p.b(this.b, f.o, f.o.j, -100);
        if (iB == -100) {
            new com.tkay.core.common.h.j().a(0, new com.tkay.core.common.h.k() {
                @Override
                public final void onLoadCanceled(int i) {
                }

                @Override
                public final void onLoadStart(int i) {
                }

                @Override
                public final void onLoadFinish(int i, Object obj) {
                    try {
                        if (obj == null) {
                            if (netTrafficeCallback != null) {
                                netTrafficeCallback.onErrorCallback("There is no result.");
                            }
                        } else if (!((JSONObject) obj).has("is_eu")) {
                            if (netTrafficeCallback != null) {
                                netTrafficeCallback.onErrorCallback("There is no result.");
                            }
                        } else if (((JSONObject) obj).optInt("is_eu") == 1) {
                            if (netTrafficeCallback != null) {
                                netTrafficeCallback.onResultCallback(true);
                            }
                        } else if (netTrafficeCallback != null) {
                            netTrafficeCallback.onResultCallback(false);
                        }
                    } catch (Throwable unused) {
                        NetTrafficeCallback netTrafficeCallback2 = netTrafficeCallback;
                        if (netTrafficeCallback2 != null) {
                            netTrafficeCallback2.onErrorCallback("Internal error");
                        }
                    }
                }

                @Override
                public final void onLoadError(int i, String str, AdError adError) {
                    NetTrafficeCallback netTrafficeCallback2 = netTrafficeCallback;
                    if (netTrafficeCallback2 != null) {
                        netTrafficeCallback2.onErrorCallback(adError.printStackTrace());
                    }
                }
            });
            return;
        }
        if (iB == 1) {
            if (netTrafficeCallback != null) {
                netTrafficeCallback.onResultCallback(true);
            }
        } else if (netTrafficeCallback != null) {
            netTrafficeCallback.onResultCallback(false);
        }
    }

    public final void b(final int i) {
        com.tkay.core.common.l.b.a.a().a(new Runnable() {
            @Override
            public final void run() {
                if (p.this.c(i)) {
                    return;
                }
                p pVarA = p.a(m.a().f());
                com.tkay.core.c.a aVarB = com.tkay.core.c.b.a(m.a().f()).b(m.a().o());
                if (pVarA.c == 2 && aVarB.U() == 1 && aVarB.I() == 0) {
                    com.tkay.core.common.k.c.a(1, pVarA.c, aVarB.U(), i);
                }
                if (pVarA.c == 1 && aVarB.S() == 0 && aVarB.U() == 0) {
                    com.tkay.core.common.k.c.a(2, pVarA.c, aVarB.U(), i);
                }
                p.this.e.put(Integer.valueOf(i), Boolean.TRUE);
            }
        });
    }

    public final boolean c(int i) {
        return this.e.get(Integer.valueOf(i)) != null && this.e.get(Integer.valueOf(i)).booleanValue();
    }
}
