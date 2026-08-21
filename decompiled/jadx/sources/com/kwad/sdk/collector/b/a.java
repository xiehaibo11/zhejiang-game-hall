package com.kwad.sdk.collector.b;

import android.app.Service;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.IBinder;
import android.os.Message;
import android.os.Messenger;
import android.os.Process;
import android.os.RemoteException;
import android.webkit.WebView;
import com.kwad.sdk.api.proxy.app.ServiceProxyRemote;
import com.kwad.sdk.collector.AppStatusRules;
import com.kwad.sdk.collector.d;
import com.kwad.sdk.collector.model.b;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.utils.SystemUtil;
import com.kwad.sdk.utils.ap;
import com.kwad.sdk.utils.f;
import com.kwad.sdk.utils.t;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.atomic.AtomicBoolean;
import org.json.JSONArray;

/* JADX INFO: loaded from: classes2.dex */
public class a extends com.kwad.sdk.l.a {
    private static AtomicBoolean ajS = new AtomicBoolean(false);
    public static volatile Message ajT;
    private HandlerC0201a ajQ = new HandlerC0201a(0);
    private Messenger ajR = new Messenger(this.ajQ);

    /* JADX INFO: renamed from: com.kwad.sdk.collector.b.a$a, reason: collision with other inner class name */
    static class HandlerC0201a extends Handler {
        private WeakReference<Service> ajV;

        private HandlerC0201a() {
        }

        /* synthetic */ HandlerC0201a(byte b) {
            this();
        }

        public final void a(Service service) {
            if (service != null) {
                this.ajV = new WeakReference<>(service);
            } else {
                this.ajV = null;
            }
        }

        @Override // android.os.Handler
        public final void handleMessage(Message message) {
            super.handleMessage(message);
            c.d("RemoteService", "handleMessage");
            WeakReference<Service> weakReference = this.ajV;
            Service service = weakReference != null ? weakReference.get() : null;
            if (service == null) {
                return;
            }
            if (!a.yO().get()) {
                c.d("RemoteService", "save buffered message");
                a.ajT = Message.obtain(message);
                return;
            }
            final Messenger messenger = message.replyTo;
            int i = message.what;
            c.d("RemoteService", "handleMessage what: " + i);
            if (i != 100) {
                return;
            }
            final Bundle bundle = new Bundle();
            f.a(service, new f.b() { // from class: com.kwad.sdk.collector.b.a.a.1
                @Override // com.kwad.sdk.utils.f.b
                public final void q(List<b> list) {
                    c.d("RemoteService", "RemoteService: onAppStatusResult list: " + list);
                    if (list != null && !list.isEmpty()) {
                        c.d("RemoteService", "RemoteService: onAppStatusResult: " + list.size());
                        JSONArray jSONArrayF = f.a.F(list);
                        String string = jSONArrayF != null ? jSONArrayF.toString() : null;
                        c.d("RemoteService", "resultJson :" + string);
                        if (string != null) {
                            AppStatusRules appStatusRulesHG = f.HG();
                            ArrayList<AppStatusRules.Strategy> allStrategy = appStatusRulesHG != null ? appStatusRulesHG.getAllStrategy() : null;
                            String string2 = allStrategy != null ? t.I(allStrategy).toString() : null;
                            bundle.putString("resultJson", string);
                            bundle.putString("allStrategyJson", string2);
                        }
                    }
                    try {
                        Message messageObtain = Message.obtain();
                        messageObtain.what = 101;
                        messageObtain.setData(bundle);
                        messenger.send(messageObtain);
                    } catch (RemoteException unused) {
                    }
                    if (list == null || list.isEmpty()) {
                        return;
                    }
                    Iterator<b> it = list.iterator();
                    while (it.hasNext()) {
                        it.next().destroy();
                    }
                }
            });
        }
    }

    public static void a(Context context, ServiceConnection serviceConnection) {
        c.d("RemoteService", "bindASService");
        context.bindService(new Intent(context, (Class<?>) ServiceProxyRemote.class), serviceConnection, 1);
    }

    private static boolean aM(Context context) {
        String processName = ap.getProcessName(context);
        return (processName == null || context.getPackageName().equals(processName)) ? false : true;
    }

    public static void b(Context context, ServiceConnection serviceConnection) {
        c.d("RemoteService", "unbindASService");
        try {
            context.unbindService(serviceConnection);
        } catch (Exception e) {
            c.printStackTrace(e);
        }
    }

    public static void register() {
        try {
            com.kwad.sdk.service.b.a(Class.forName("com.kwad.sdk.api.proxy.app.ServiceProxyRemote"), a.class);
        } catch (Throwable unused) {
        }
    }

    public static AtomicBoolean yO() {
        return ajS;
    }

    @Override // com.kwad.sdk.l.a, com.kwad.sdk.api.proxy.IServiceProxy
    public IBinder onBind(Service service, Intent intent) {
        return this.ajR.getBinder();
    }

    @Override // com.kwad.sdk.l.a, com.kwad.sdk.api.proxy.IServiceProxy
    public void onCreate(Service service) {
        super.onCreate(service);
        if (Build.VERSION.SDK_INT >= 28) {
            try {
                WebView.setDataDirectorySuffix(ap.getProcessName(service.getApplicationContext()));
            } catch (Exception e) {
                c.d("RemoteService", "WebView has already been initialized " + e.getMessage());
            }
        }
        c.d("RemoteService", "onCreate processName:" + ap.getProcessName(service));
        if (SystemUtil.isInMainProcess(service)) {
            ajS.set(true);
        } else {
            d.a(service, new d.a() { // from class: com.kwad.sdk.collector.b.a.1
                @Override // com.kwad.sdk.collector.d.a
                public final void cj(String str) {
                    c.e("RemoteService", "onLoadError: " + str);
                    a.ajS.set(false);
                }

                @Override // com.kwad.sdk.collector.d.a
                public final void onLoaded() {
                    c.d("RemoteService", "onLoaded");
                    a.ajS.set(true);
                    if (a.ajT != null) {
                        a.this.ajQ.handleMessage(a.ajT);
                        a.ajT = null;
                    }
                }
            });
        }
        this.ajQ.a(service);
    }

    @Override // com.kwad.sdk.l.a, com.kwad.sdk.api.proxy.IServiceProxy
    public void onDestroy(Service service) {
        super.onDestroy(service);
        c.d("RemoteService", "onDestroy");
        this.ajQ.a(null);
        if (aM(service)) {
            c.d("RemoteService", "goto kill myself");
            Process.killProcess(Process.myPid());
        }
    }
}
