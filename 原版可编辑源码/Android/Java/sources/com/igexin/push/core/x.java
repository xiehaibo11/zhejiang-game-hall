package com.igexin.push.core;

import android.app.Activity;
import android.app.Service;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import android.text.TextUtils;
import android.util.Log;
import android.util.Pair;
import com.igexin.push.util.EncryptUtils;
import com.igexin.sdk.GTIntentService;
import com.igexin.sdk.IPushCore;
import com.igexin.sdk.PushConsts;
import com.igexin.sdk.PushService;
import com.tkay.basead.b.a;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.atomic.AtomicBoolean;

public class x {
    public static Context a;
    public Pair<Integer, String> b;
    private IPushCore c;
    private final AtomicBoolean d;
    private ExecutorService e;
    private Class f;
    private Class g;
    private String h;
    private ServiceConnection i;

    private x() {
        this.d = new AtomicBoolean(false);
        this.i = new z(this);
        this.e = Executors.newSingleThreadExecutor();
    }

    x(y yVar) {
        this();
    }

    private int a(Service service) {
        com.igexin.b.a.c.b.a("ServiceManager|start by system ####", new Object[0]);
        if (!f(service)) {
            service.stopSelf();
            return 2;
        }
        com.igexin.b.a.c.b.a("ServiceManager|intent = null", new Object[0]);
        if (!this.d.getAndSet(true)) {
            b(service, (Intent) null);
        }
        return 2;
    }

    private int a(Intent intent, int i, int i2) {
        if (this.c == null) {
            return 2;
        }
        com.igexin.b.a.c.b.a("ServiceManager|inInit = true, call onServiceStartCommand...", new Object[0]);
        return this.c.onServiceStartCommand(intent, i, i2);
    }

    public static x a() {
        return aa.a;
    }

    private int b(Service service, Intent intent, int i, int i2) {
        com.igexin.b.a.c.b.a("ServiceManager|start from initialize...", new Object[0]);
        com.igexin.b.a.c.a.f.a().a("ServiceManager start from initialize...");
        b(service, intent);
        IPushCore iPushCore = this.c;
        if (iPushCore != null) {
            return iPushCore.onServiceStartCommand(intent, i, i2);
        }
        return 2;
    }

    private void b(Service service, Intent intent) {
        com.igexin.b.a.c.b.a("ServiceManager|startPushCore ++++", new Object[0]);
        if (!EncryptUtils.isLoadSuccess()) {
            Log.e("ServiceManager", "load so error, stop Service");
            service.stopSelf();
            return;
        }
        com.igexin.sdk.a.a.a().b();
        IPushCore iPushCoreC = com.igexin.sdk.a.a.a().c();
        this.c = iPushCoreC;
        if (iPushCoreC != null) {
            iPushCoreC.start(service);
        }
    }

    private boolean b(Context context, Intent intent) {
        this.e.execute(new y(this, context, intent));
        return true;
    }

    private int c(Service service, Intent intent, int i, int i2) {
        if (!f(service)) {
            this.d.set(false);
            service.stopSelf();
            return 2;
        }
        b(service, intent);
        IPushCore iPushCore = this.c;
        if (iPushCore != null) {
            return iPushCore.onServiceStartCommand(intent, i, i2);
        }
        return 2;
    }

    private boolean f(Context context) {
        return !com.igexin.push.util.c.a(context);
    }

    public int a(Service service, Intent intent, int i, int i2) {
        try {
            if (intent == null) {
                this.b = Pair.create(1, null);
                return a(service);
            }
            com.igexin.push.util.k.a(service, intent);
            String stringExtra = intent.getStringExtra("action");
            if (this.d.getAndSet(true)) {
                return a(intent, i, i2);
            }
            if (PushConsts.ACTION_SERVICE_INITIALIZE.equals(stringExtra)) {
                this.b = Pair.create(0, null);
                return b(service, intent, i, i2);
            }
            this.b = Pair.create(1, intent.getStringExtra(a.a.A));
            return c(service, intent, i, i2);
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a("ServiceManager|" + th.toString(), new Object[0]);
            return 2;
        }
    }

    public IBinder a(Service service, Intent intent) {
        com.igexin.b.a.c.b.a("ServiceManager|onBind...", new Object[0]);
        a(service, intent, 0, 0);
        return null;
    }

    public void a(Activity activity) {
        try {
            Intent intent = activity.getIntent();
            Context applicationContext = activity.getApplicationContext();
            if (intent == null) {
                intent = new Intent(applicationContext, (Class<?>) c(applicationContext));
            } else {
                intent.setComponent(new ComponentName(applicationContext, (Class<?>) c(applicationContext)));
            }
            a(applicationContext, intent);
            com.igexin.b.a.c.b.a("ServiceManager|start PushService from da", new Object[0]);
        } finally {
            try {
            } finally {
            }
        }
    }

    public void a(Context context) {
        a = context.getApplicationContext();
    }

    public boolean a(Context context, Intent intent) {
        return b(context, intent);
    }

    public void b() {
        com.igexin.b.a.c.b.a("ServiceManager|onDestroy...", new Object[0]);
    }

    public boolean b(Context context) {
        try {
            String str = (String) com.igexin.push.util.k.c(context, "us", "", new String[0]);
            if (TextUtils.isEmpty(str)) {
                return false;
            }
            Class.forName(str);
            return true;
        } catch (Exception e) {
            com.igexin.b.a.c.b.a("ServiceManager|" + e.toString(), new Object[0]);
            return false;
        }
    }

    public Class c(Context context) {
        Class cls = this.g;
        if (cls != null) {
            return cls;
        }
        Class cls2 = (Class) com.igexin.push.util.b.a(context, PushService.class).second;
        this.g = cls2;
        if (cls2 != null) {
            return cls2;
        }
        try {
            String str = (String) com.igexin.push.util.k.c(context, "us", "", new String[0]);
            if (TextUtils.isEmpty(str)) {
                return PushService.class;
            }
            Class<?> cls3 = Class.forName(str);
            this.g = cls3;
            return cls3;
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a("ServiceManager|" + th.toString(), new Object[0]);
            return PushService.class;
        }
    }

    public Class d(Context context) {
        Class cls = this.f;
        if (cls != null) {
            return cls;
        }
        Class cls2 = (Class) com.igexin.push.util.b.a(context, GTIntentService.class).second;
        this.f = cls2;
        if (cls2 != null) {
            return cls2;
        }
        try {
            String str = (String) com.igexin.push.util.k.c(context, "uis", "", new String[0]);
            if (!TextUtils.isEmpty(str)) {
                Class<?> cls3 = Class.forName(str);
                this.f = cls3;
                return cls3;
            }
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a("ServiceManager|" + th.toString(), new Object[0]);
        }
        return this.f;
    }

    public String e(Context context) {
        return (String) com.igexin.push.util.k.c(context, "ua", "", new String[0]);
    }
}
