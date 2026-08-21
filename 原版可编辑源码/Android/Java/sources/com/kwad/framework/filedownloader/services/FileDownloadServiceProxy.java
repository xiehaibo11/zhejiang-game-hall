package com.kwad.framework.filedownloader.services;

import android.app.Service;
import android.content.Intent;
import android.os.Build;
import android.os.IBinder;
import android.webkit.WebView;
import com.kwad.sdk.api.core.KsAdSdkDynamicImpl;
import com.kwad.sdk.api.proxy.app.FileDownloadService;
import com.kwad.sdk.utils.ap;
import java.lang.ref.WeakReference;

@KsAdSdkDynamicImpl(FileDownloadService.class)
public class FileDownloadServiceProxy extends com.kwad.sdk.l.a {
    private static final String TAG = "filedownloader";
    public Service context;
    private i handler;

    @KsAdSdkDynamicImpl(FileDownloadService.SeparateProcessService.class)
    public static class SeparateProcessServiceProxy extends FileDownloadServiceProxy {
        @Override
        public void onCreate(Service service) {
            if (Build.VERSION.SDK_INT >= 28) {
                try {
                    WebView.setDataDirectorySuffix(ap.getProcessName(service.getApplicationContext()));
                } catch (Exception unused) {
                }
            }
            super.onCreate(service);
        }
    }

    @KsAdSdkDynamicImpl(FileDownloadService.SharedMainProcessService.class)
    public static class SharedMainProcessServiceProxy extends FileDownloadServiceProxy {
        @Override
        public void onCreate(Service service) {
            super.onCreate(service);
        }
    }

    public static void register() {
        com.kwad.sdk.service.b.a(FileDownloadService.SeparateProcessService.class, SeparateProcessServiceProxy.class);
        com.kwad.sdk.service.b.a(FileDownloadService.SharedMainProcessService.class, SharedMainProcessServiceProxy.class);
    }

    @Override
    public IBinder onBind(Service service, Intent intent) {
        return this.handler.vE();
    }

    @Override
    public void onCreate(Service service) {
        if (service == null) {
            return;
        }
        this.context = service;
        com.kwad.framework.filedownloader.f.c.ap(service);
        try {
            com.kwad.framework.filedownloader.f.f.bH(com.kwad.framework.filedownloader.f.e.vO().aeJ);
            com.kwad.framework.filedownloader.f.f.O(com.kwad.framework.filedownloader.f.e.vO().aeK);
        } catch (IllegalAccessException e) {
            e.printStackTrace();
        }
        g gVar = new g();
        this.handler = com.kwad.framework.filedownloader.f.e.vO().aeM ? new e(new WeakReference(this), gVar) : new d(new WeakReference(this), gVar);
    }

    @Override
    public void onDestroy(Service service) {
        this.handler.onDestroy();
    }

    @Override
    public int onStartCommand(Service service, Intent intent, int i, int i2) {
        this.handler.vD();
        return 2;
    }
}
