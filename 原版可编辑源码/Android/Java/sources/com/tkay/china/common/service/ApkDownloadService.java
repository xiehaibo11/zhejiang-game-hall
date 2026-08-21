package com.tkay.china.common.service;

import android.app.Service;
import android.content.Intent;
import android.os.Binder;
import android.os.IBinder;
import com.tkay.china.common.a.a;
import com.tkay.china.common.a.d;
import com.tkay.china.common.a.e;
import java.util.HashMap;
import java.util.Map;

public class ApkDownloadService extends Service {
    public static final String a = "extra_unique_id";
    private static final String b = ApkDownloadService.class.getSimpleName();
    private Map<String, d> c = new HashMap();

    public class a extends Binder implements com.tkay.china.common.service.a {
        public a() {
        }

        @Override
        public final void a(String str) {
            ApkDownloadService.this.a(str);
        }

        @Override
        public final void b(String str) {
            d dVar = (d) ApkDownloadService.this.c.get(str);
            if (dVar != null) {
                dVar.b();
                ApkDownloadService.this.c.remove(str);
            }
        }

        @Override
        public final void c(String str) {
            d dVar = (d) ApkDownloadService.this.c.get(str);
            if (dVar != null) {
                dVar.a();
                ApkDownloadService.this.c.remove(str);
            }
        }

        @Override
        public final boolean a() {
            return ApkDownloadService.this.c.size() == 0;
        }
    }

    private void a(String str) {
        try {
            e eVar = com.tkay.china.common.a.a(getApplicationContext()).f().get(str);
            if (eVar == null) {
                return;
            }
            d dVar = new d(eVar);
            dVar.a(new a.a() {
                @Override
                public final void a(e eVar2, long j, long j2) {
                    a.a aVarC = com.tkay.china.common.a.a(ApkDownloadService.this.getApplicationContext()).c(eVar2.n);
                    if (aVarC != null) {
                        aVarC.a(eVar2, j, j2);
                    }
                }

                @Override
                public final void a(e eVar2, long j) {
                    if (ApkDownloadService.this.c != null) {
                        ApkDownloadService.this.c.remove(eVar2.n);
                    }
                    a.a aVarC = com.tkay.china.common.a.a(ApkDownloadService.this.getApplicationContext()).c(eVar2.n);
                    if (aVarC != null) {
                        aVarC.a(eVar2, j);
                    }
                }

                @Override
                public final void b(e eVar2, long j, long j2) {
                    a.a aVarC = com.tkay.china.common.a.a(ApkDownloadService.this.getApplicationContext()).c(eVar2.n);
                    if (aVarC != null) {
                        aVarC.b(eVar2, j, j2);
                    }
                }

                @Override
                public final void a(e eVar2, String str2) {
                    if (ApkDownloadService.this.c != null) {
                        ApkDownloadService.this.c.remove(eVar2.n);
                    }
                    a.a aVarC = com.tkay.china.common.a.a(ApkDownloadService.this.getApplicationContext()).c(eVar2.n);
                    if (aVarC != null) {
                        aVarC.a(eVar2, str2);
                    }
                }

                @Override
                public final void a(e eVar2, long j, long j2, int i) {
                    if (ApkDownloadService.this.c != null) {
                        ApkDownloadService.this.c.remove(eVar2.n);
                    }
                    a.a aVarC = com.tkay.china.common.a.a(ApkDownloadService.this.getApplicationContext()).c(eVar2.n);
                    if (aVarC != null) {
                        aVarC.a(eVar2, j, j2, i);
                    }
                }
            });
            if (this.c != null) {
                this.c.put(str, dVar);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override
    public IBinder onBind(Intent intent) {
        if (intent != null) {
            a(intent.getStringExtra(a));
        }
        return new a();
    }

    @Override
    public void onCreate() {
        super.onCreate();
    }

    @Override
    public boolean onUnbind(Intent intent) {
        return super.onUnbind(intent);
    }

    @Override
    public void onDestroy() {
        super.onDestroy();
    }

    @Override
    public void onTaskRemoved(Intent intent) {
        com.tkay.china.common.b.a.a(getApplicationContext()).a();
        super.onTaskRemoved(intent);
    }
}
