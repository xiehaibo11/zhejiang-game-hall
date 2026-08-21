package com.kwad.sdk.core.c;

import android.app.Activity;
import android.app.Application;
import android.content.Context;
import android.os.Bundle;
import com.kwad.sdk.api.core.KSLifecycleListener;
import com.kwad.sdk.api.core.KSLifecycleObserver;
import com.kwad.sdk.m.l;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.service.a.e;
import com.kwad.sdk.utils.bk;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.atomic.AtomicBoolean;

public class b implements c<Activity> {
    private static volatile b aox;
    private static final List<c> mListeners = new CopyOnWriteArrayList();
    private final AtomicBoolean IP = new AtomicBoolean(false);
    private Application mApplication;

    private b() {
    }

    public static b AU() {
        if (aox == null) {
            synchronized (b.class) {
                if (aox == null) {
                    aox = new b();
                }
            }
        }
        return aox;
    }

    public static boolean AV() {
        try {
            if (bk.aw(((e) ServiceProvider.get(e.class)).getApiVersion(), "3.3.26")) {
                return KSLifecycleObserver.getInstance().isEnable();
            }
            return false;
        } catch (Throwable unused) {
            return false;
        }
    }

    public static void a(c cVar) {
        mListeners.add(cVar);
    }

    public static void b(c cVar) {
        mListeners.remove(cVar);
    }

    private static <T> void c(com.kwad.sdk.g.a<c> aVar) {
        for (c cVar : mListeners) {
            if (cVar != null) {
                aVar.accept(cVar);
            }
        }
    }

    public static Activity getCurrentActivity() {
        if (AV()) {
            return KSLifecycleObserver.getInstance().getCurrentActivity();
        }
        if (a.AS().isEnable()) {
            return a.AS().getCurrentActivity();
        }
        return null;
    }

    public static boolean isAppOnForeground() {
        if (AV()) {
            return KSLifecycleObserver.getInstance().isAppOnForeground();
        }
        if (a.AS().isEnable()) {
            return a.AS().isAppOnForeground();
        }
        return false;
    }

    public static boolean isEnable() {
        return AV() || a.AS().isEnable();
    }

    @Override
    private void a(final Activity activity, final Bundle bundle) {
        c(new com.kwad.sdk.g.a<c>() {
            @Override
            private void accept(c cVar) {
                cVar.a(activity, bundle);
            }
        });
    }

    @Override
    private void d(final Activity activity) {
        c(new com.kwad.sdk.g.a<c>() {
            @Override
            private void accept(c cVar) {
                cVar.d(activity);
            }
        });
    }

    @Override
    private void b(final Activity activity) {
        c(new com.kwad.sdk.g.a<c>() {
            @Override
            private void accept(c cVar) {
                cVar.b(activity);
            }
        });
    }

    @Override
    private void c(final Activity activity) {
        c(new com.kwad.sdk.g.a<c>() {
            @Override
            private void accept(c cVar) {
                cVar.c(activity);
            }
        });
    }

    public final Application getApplication() {
        return this.mApplication;
    }

    public final void init(Context context) {
        if (this.IP.get() || context == null) {
            return;
        }
        this.IP.set(true);
        try {
            if (bk.aw(((e) ServiceProvider.get(e.class)).getApiVersion(), "3.3.26")) {
                this.mApplication = KSLifecycleObserver.getInstance().getApplication();
                KSLifecycleObserver.getInstance().registerLifecycleListener(new KSLifecycleListener() {
                    @Override
                    public final void onActivityCreated(final Activity activity, final Bundle bundle) {
                        b bVar = b.this;
                        b.c(new com.kwad.sdk.g.a<c>() {
                            @Override
                            private void accept(c cVar) {
                                cVar.a(activity, bundle);
                            }
                        });
                    }

                    @Override
                    public final void onActivityDestroyed(final Activity activity) {
                        b bVar = b.this;
                        b.c(new com.kwad.sdk.g.a<c>() {
                            @Override
                            private void accept(c cVar) {
                                cVar.d(activity);
                            }
                        });
                    }

                    @Override
                    public final void onActivityPaused(final Activity activity) {
                        b bVar = b.this;
                        b.c(new com.kwad.sdk.g.a<c>() {
                            @Override
                            private void accept(c cVar) {
                                cVar.b(activity);
                            }
                        });
                    }

                    @Override
                    public final void onActivityResumed(final Activity activity) {
                        b bVar = b.this;
                        b.c(new com.kwad.sdk.g.a<c>() {
                            @Override
                            private void accept(c cVar) {
                                cVar.c(activity);
                            }
                        });
                    }

                    @Override
                    public final void onBackToBackground() {
                        com.kwad.sdk.core.e.c.M("LifecycleHolder", "onBackToBackground");
                        b bVar = b.this;
                        b.c(new com.kwad.sdk.g.a<c>() {
                            private static void c(c cVar) {
                                cVar.onBackToBackground();
                            }

                            @Override
                            public final void accept(c cVar) {
                                c(cVar);
                            }
                        });
                    }

                    @Override
                    public final void onBackToForeground() {
                        com.kwad.sdk.core.e.c.M("LifecycleHolder", "onBackToForeground");
                        b bVar = b.this;
                        b.c(new com.kwad.sdk.g.a<c>() {
                            private static void c(c cVar) {
                                cVar.onBackToForeground();
                            }

                            @Override
                            public final void accept(c cVar) {
                                c(cVar);
                            }
                        });
                    }
                });
            } else {
                com.kwad.sdk.core.e.c.M("LifecycleHolder", "init KSLifecycleObserver not support");
            }
        } catch (Throwable unused) {
        }
        Application applicationKT = l.KT();
        if (applicationKT != null) {
            this.mApplication = applicationKT;
            a.AS().init(this.mApplication);
            a.AS().a(this);
        }
    }

    @Override
    public final void onBackToBackground() {
        com.kwad.sdk.core.e.c.M("LifecycleHolder", "onBackToBackground old");
        c(new com.kwad.sdk.g.a<c>() {
            private static void c(c cVar) {
                cVar.onBackToBackground();
            }

            @Override
            public final void accept(c cVar) {
                c(cVar);
            }
        });
    }

    @Override
    public final void onBackToForeground() {
        com.kwad.sdk.core.e.c.M("LifecycleHolder", "onBackToForeground old");
        c(new com.kwad.sdk.g.a<c>() {
            private static void c(c cVar) {
                cVar.onBackToForeground();
            }

            @Override
            public final void accept(c cVar) {
                c(cVar);
            }
        });
    }
}
