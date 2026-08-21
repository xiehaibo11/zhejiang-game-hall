package com.mbridge.msdk.pluginFramework;

import android.content.Intent;
import android.os.IBinder;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbdownload.c;

/* JADX INFO: compiled from: PluginServiceAgent.java */
/* JADX INFO: loaded from: classes2.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public C0286a f3879a;

    public a(C0286a c0286a) {
        this.f3879a = c0286a;
    }

    /* JADX INFO: renamed from: com.mbridge.msdk.pluginFramework.a$a, reason: collision with other inner class name */
    /* JADX INFO: compiled from: PluginServiceAgent.java */
    public static class C0286a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        c f3880a;

        public C0286a(c cVar) {
            this.f3880a = cVar;
        }

        public final IBinder a(Intent intent) {
            try {
                return this.f3880a.a(intent);
            } catch (Exception e) {
                z.c("PluginServiceContext", "invoke onBind error", e);
                return null;
            }
        }

        public final int a(Intent intent, int i, int i2) {
            try {
                return this.f3880a.a(intent, i, i2);
            } catch (Exception e) {
                z.c("PluginServiceContext", "invoke onStartCommand error", e);
                return 0;
            }
        }

        public final void a() {
            try {
                this.f3880a.a();
            } catch (Exception e) {
                z.c("PluginServiceContext", "invoke onCreate error", e);
            }
        }

        public final void b() {
            try {
                this.f3880a.b();
            } catch (Exception e) {
                z.c("PluginServiceContext", "invoke onDestroy error", e);
            }
        }
    }
}
