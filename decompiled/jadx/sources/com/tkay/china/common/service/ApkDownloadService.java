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

/* JADX INFO: loaded from: classes3.dex */
public class ApkDownloadService extends Service {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f5936a = "extra_unique_id";
    private static final String b = ApkDownloadService.class.getSimpleName();
    private Map<String, d> c = new HashMap();

    public class a extends Binder implements com.tkay.china.common.service.a {
        public a() {
        }

        @Override // com.tkay.china.common.service.a
        public final void a(String str) {
            ApkDownloadService.this.a(str);
        }

        @Override // com.tkay.china.common.service.a
        public final void b(String str) {
            d dVar = (d) ApkDownloadService.this.c.get(str);
            if (dVar != null) {
                dVar.b();
                ApkDownloadService.this.c.remove(str);
            }
        }

        @Override // com.tkay.china.common.service.a
        public final void c(String str) {
            d dVar = (d) ApkDownloadService.this.c.get(str);
            if (dVar != null) {
                dVar.a();
                ApkDownloadService.this.c.remove(str);
            }
        }

        @Override // com.tkay.china.common.service.a
        public final boolean a() {
            return ApkDownloadService.this.c.size() == 0;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(String str) {
        try {
            e eVar = com.tkay.china.common.a.a(getApplicationContext()).f().get(str);
            if (eVar == null) {
                return;
            }
            d dVar = new d(eVar);
            dVar.a(new a.InterfaceC0405a() { // from class: com.tkay.china.common.service.ApkDownloadService.1
                @Override // com.tkay.china.common.a.a.InterfaceC0405a
                public final void a(e eVar2, long j, long j2) {
                    a.InterfaceC0405a interfaceC0405aC = com.tkay.china.common.a.a(ApkDownloadService.this.getApplicationContext()).c(eVar2.n);
                    if (interfaceC0405aC != null) {
                        interfaceC0405aC.a(eVar2, j, j2);
                    }
                }

                @Override // com.tkay.china.common.a.a.InterfaceC0405a
                public final void a(e eVar2, long j) {
                    if (ApkDownloadService.this.c != null) {
                        ApkDownloadService.this.c.remove(eVar2.n);
                    }
                    a.InterfaceC0405a interfaceC0405aC = com.tkay.china.common.a.a(ApkDownloadService.this.getApplicationContext()).c(eVar2.n);
                    if (interfaceC0405aC != null) {
                        interfaceC0405aC.a(eVar2, j);
                    }
                }

                @Override // com.tkay.china.common.a.a.InterfaceC0405a
                public final void b(e eVar2, long j, long j2) {
                    a.InterfaceC0405a interfaceC0405aC = com.tkay.china.common.a.a(ApkDownloadService.this.getApplicationContext()).c(eVar2.n);
                    if (interfaceC0405aC != null) {
                        interfaceC0405aC.b(eVar2, j, j2);
                    }
                }

                @Override // com.tkay.china.common.a.a.InterfaceC0405a
                public final void a(e eVar2, String str2) {
                    if (ApkDownloadService.this.c != null) {
                        ApkDownloadService.this.c.remove(eVar2.n);
                    }
                    a.InterfaceC0405a interfaceC0405aC = com.tkay.china.common.a.a(ApkDownloadService.this.getApplicationContext()).c(eVar2.n);
                    if (interfaceC0405aC != null) {
                        interfaceC0405aC.a(eVar2, str2);
                    }
                }

                @Override // com.tkay.china.common.a.a.InterfaceC0405a
                public final void a(e eVar2, long j, long j2, int i) {
                    if (ApkDownloadService.this.c != null) {
                        ApkDownloadService.this.c.remove(eVar2.n);
                    }
                    a.InterfaceC0405a interfaceC0405aC = com.tkay.china.common.a.a(ApkDownloadService.this.getApplicationContext()).c(eVar2.n);
                    if (interfaceC0405aC != null) {
                        interfaceC0405aC.a(eVar2, j, j2, i);
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

    @Override // android.app.Service
    public IBinder onBind(Intent intent) {
        if (intent != null) {
            a(intent.getStringExtra(f5936a));
        }
        return new a();
    }

    @Override // android.app.Service
    public void onCreate() {
        super.onCreate();
    }

    @Override // android.app.Service
    public boolean onUnbind(Intent intent) {
        return super.onUnbind(intent);
    }

    @Override // android.app.Service
    public void onDestroy() {
        super.onDestroy();
    }

    @Override // android.app.Service
    public void onTaskRemoved(Intent intent) {
        com.tkay.china.common.b.a.a(getApplicationContext()).a();
        super.onTaskRemoved(intent);
    }
}
