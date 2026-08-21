package com.kwad.sdk.service;

import android.app.Service;
import android.content.Intent;
import android.os.Handler;
import android.os.Message;
import com.kwad.sdk.DownloadTask;
import com.kwad.sdk.api.proxy.app.DownloadService;
import java.lang.ref.WeakReference;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes2.dex */
public class a extends com.kwad.sdk.l.a {
    private com.kwad.sdk.c aHu;
    private Service aHw;
    private final Map<String, Integer> aHv = new ConcurrentHashMap();
    private final HandlerC0228a aHx = new HandlerC0228a(this);

    /* JADX INFO: renamed from: com.kwad.sdk.service.a$a, reason: collision with other inner class name */
    static class HandlerC0228a extends Handler {
        final WeakReference<a> aHy;

        public HandlerC0228a(a aVar) {
            this.aHy = new WeakReference<>(aVar);
        }

        @Override // android.os.Handler
        public final void handleMessage(Message message) {
            a aVar = this.aHy.get();
            if (aVar != null && message.what == 1) {
                if (aVar.aHu == null || !aVar.aHu.wV()) {
                    sendEmptyMessageDelayed(1, 30000L);
                } else {
                    aVar.aHw.stopSelf();
                }
            }
        }
    }

    private void h(Intent intent) {
        if (intent == null) {
            return;
        }
        try {
            int intExtra = intent.getIntExtra("download_service_type_tag", 0);
            String stringExtra = intent.getStringExtra("download_service_id_tag");
            DownloadTask.DownloadRequest downloadRequest = (DownloadTask.DownloadRequest) intent.getSerializableExtra("download_service_args_tag");
            Integer num = this.aHv.get(stringExtra);
            if (intExtra == 1) {
                this.aHv.put(stringExtra, Integer.valueOf(this.aHu.a(downloadRequest, (com.kwad.sdk.a) null)));
            } else if (intExtra == 2) {
                this.aHu.pause(num.intValue());
            } else if (intExtra == 3) {
                this.aHu.resume(num.intValue());
            } else {
                if (intExtra != 4) {
                    return;
                }
                this.aHu.cancel(num.intValue());
            }
        } catch (Exception unused) {
        }
    }

    public static void register() {
        b.a(DownloadService.class, a.class);
    }

    @Override // com.kwad.sdk.l.a, com.kwad.sdk.api.proxy.IServiceProxy
    public void onCreate(Service service) {
        if (service == null) {
            return;
        }
        this.aHw = service;
        this.aHu = com.kwad.sdk.c.wP();
        this.aHx.sendEmptyMessageDelayed(1, 30000L);
    }

    @Override // com.kwad.sdk.l.a, com.kwad.sdk.api.proxy.IServiceProxy
    public int onStartCommand(Service service, Intent intent, int i, int i2) {
        h(intent);
        return super.onStartCommand(service, intent, i, i2);
    }
}
