package com.bytedance.pangle.service.a;

import android.content.ComponentName;
import android.content.Intent;
import android.os.Handler;
import android.os.IBinder;
import android.os.Looper;
import android.os.RemoteException;
import com.bytedance.pangle.Zeus;
import com.bytedance.pangle.d;
import com.bytedance.pangle.f;
import com.bytedance.pangle.log.ZeusLogger;
import com.bytedance.pangle.plugin.Plugin;
import com.bytedance.pangle.plugin.PluginManager;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;

public class a extends d.a {
    private static volatile a b;
    private final HashMap<ComponentName, IBinder> c = new HashMap<>();
    private final HashMap<ComponentName, b> d = new HashMap<>();
    private final a<Intent> e = new a<>();
    private final HashMap<ComponentName, com.bytedance.pangle.service.a> f = new HashMap<>();
    private final HashSet<ComponentName> g = new HashSet<>();
    private final HashSet<ComponentName> h = new HashSet<>();
    private final Handler a = new Handler(Looper.getMainLooper());

    @Override
    public IBinder asBinder() {
        return null;
    }

    class b extends HashSet<f> {
        b() {
        }

        @Override
        public final boolean contains(Object obj) {
            if (super.contains(obj)) {
                return true;
            }
            if (!(obj instanceof f)) {
                return false;
            }
            Iterator<f> it = iterator();
            while (it.hasNext()) {
                try {
                } catch (RemoteException e) {
                    e.printStackTrace();
                }
                if (it.next().a() == ((f) obj).a()) {
                    return true;
                }
            }
            return false;
        }

        @Override
        public final boolean remove(Object obj) {
            if (super.remove(obj)) {
                return true;
            }
            Object obj2 = null;
            Iterator it = iterator();
            while (true) {
                if (!it.hasNext()) {
                    break;
                }
                f fVar = (f) it.next();
                try {
                } catch (RemoteException e) {
                    e.printStackTrace();
                }
                if (fVar.a() == ((f) obj).a()) {
                    obj2 = fVar;
                    break;
                }
            }
            return super.remove(obj2);
        }
    }

    class a<T> extends HashMap<f, T> {
        a() {
        }

        @Override
        public final boolean containsKey(Object obj) {
            if (super.containsKey(obj)) {
                return true;
            }
            if (!(obj instanceof f)) {
                return false;
            }
            Iterator<f> it = keySet().iterator();
            while (it.hasNext()) {
                try {
                } catch (RemoteException e) {
                    e.printStackTrace();
                }
                if (it.next().a() == ((f) obj).a()) {
                    return true;
                }
            }
            return false;
        }

        @Override
        public final T remove(Object obj) {
            f next;
            T t = (T) super.remove(obj);
            if (t != null) {
                return t;
            }
            Iterator<f> it = keySet().iterator();
            while (true) {
                if (!it.hasNext()) {
                    next = null;
                    break;
                }
                next = it.next();
                try {
                } catch (RemoteException e) {
                    e.printStackTrace();
                }
                if (next.a() == ((f) obj).a()) {
                    break;
                }
            }
            return (T) super.remove(next);
        }
    }

    public static a b() {
        if (b == null) {
            synchronized (a.class) {
                if (b == null) {
                    b = new a();
                }
            }
        }
        return b;
    }

    private a() {
    }

    @Override
    public final ComponentName a(final Intent intent, final String str) {
        if (Looper.myLooper() == Looper.getMainLooper()) {
            return c(intent, str);
        }
        this.a.post(new Runnable() {
            @Override
            public final void run() {
                a.this.c(intent, str);
            }
        });
        return intent.getComponent();
    }

    private synchronized ComponentName c(Intent intent, String str) {
        ComponentName component = intent.getComponent();
        if (!this.f.containsKey(component)) {
            com.bytedance.pangle.service.a aVarD = d(intent, str);
            if (aVarD == null) {
                return component;
            }
            this.f.put(component, aVarD);
            this.g.add(component);
        }
        com.bytedance.pangle.service.a aVar = this.f.get(component);
        if (aVar != null) {
            aVar.onStartCommand(intent, 0, 0);
        }
        return component;
    }

    private static com.bytedance.pangle.service.a d(Intent intent, String str) {
        com.bytedance.pangle.service.a aVarE = e(intent, str);
        if (aVarE != null) {
            aVarE.onCreate();
        }
        return aVarE;
    }

    private static com.bytedance.pangle.service.a e(Intent intent, String str) {
        boolean zLoadPlugin;
        ComponentName component = intent.getComponent();
        Plugin plugin = PluginManager.getInstance().getPlugin(str);
        try {
            zLoadPlugin = Zeus.loadPlugin(str);
        } catch (Exception e) {
            e = e;
            zLoadPlugin = false;
        }
        try {
            com.bytedance.pangle.service.a aVar = (com.bytedance.pangle.service.a) plugin.mClassLoader.loadClass(component.getClassName()).newInstance();
            aVar.attach(plugin);
            return aVar;
        } catch (Exception e2) {
            e = e2;
            ZeusLogger.errReport(ZeusLogger.TAG_SERVICE, "newServiceInstance failed! loadPlugin = ".concat(String.valueOf(zLoadPlugin)), e);
            throw new RuntimeException(e);
        }
    }

    @Override
    public final boolean b(final Intent intent, String str) {
        if (Looper.myLooper() == Looper.getMainLooper()) {
            b().a(intent.getComponent());
            return true;
        }
        this.a.post(new Runnable() {
            @Override
            public final void run() {
                a.b().a(intent.getComponent());
            }
        });
        return true;
    }

    public final synchronized boolean a(ComponentName componentName) {
        if (!this.f.containsKey(componentName)) {
            return false;
        }
        this.h.add(componentName);
        return b(componentName);
    }

    private boolean b(ComponentName componentName) {
        if (!this.g.contains(componentName)) {
            if (this.d.get(componentName) != null) {
                return false;
            }
            c(componentName);
            return true;
        }
        if (!this.h.contains(componentName) || this.d.containsKey(componentName)) {
            return false;
        }
        c(componentName);
        return true;
    }

    private void c(ComponentName componentName) {
        com.bytedance.pangle.service.a aVarRemove = this.f.remove(componentName);
        this.h.remove(componentName);
        this.c.remove(componentName);
        this.g.remove(componentName);
        if (aVarRemove != null) {
            aVarRemove.onDestroy();
        }
    }

    @Override
    public final boolean a(final Intent intent, final f fVar, final int i, final String str) {
        if (Looper.myLooper() == Looper.getMainLooper()) {
            return a(intent, fVar, str);
        }
        this.a.post(new Runnable() {
            @Override
            public final void run() {
                try {
                    a.this.a(intent, fVar, str);
                } catch (RemoteException e) {
                    ZeusLogger.errReport(ZeusLogger.TAG_SERVICE, "bindService failed", e);
                }
            }
        });
        return true;
    }

    private synchronized boolean a(Intent intent, f fVar, String str) {
        ComponentName component = intent.getComponent();
        if (!this.f.containsKey(component)) {
            com.bytedance.pangle.service.a aVarD = d(intent, str);
            if (aVarD == null) {
                return false;
            }
            this.f.put(component, aVarD);
        }
        com.bytedance.pangle.service.a aVar = this.f.get(component);
        if (!this.c.containsKey(component)) {
            this.c.put(component, aVar.onBind(intent));
        }
        IBinder iBinder = this.c.get(component);
        if (iBinder != null) {
            if (this.d.containsKey(component)) {
                if (!this.d.get(component).contains(fVar)) {
                    this.d.get(component).add(fVar);
                    this.e.put(fVar, intent);
                    fVar.a(component, iBinder);
                }
            } else {
                b bVar = new b();
                bVar.add(fVar);
                this.d.put(component, bVar);
                this.e.put(fVar, intent);
                fVar.a(component, iBinder);
            }
        }
        return true;
    }

    @Override
    public final void a(final f fVar) {
        if (Looper.myLooper() == Looper.getMainLooper()) {
            b(fVar);
        } else {
            this.a.post(new Runnable() {
                @Override
                public final void run() {
                    a.this.b(fVar);
                }
            });
        }
    }

    private synchronized void b(f fVar) {
        for (ComponentName componentName : this.d.keySet()) {
            b bVar = this.d.get(componentName);
            if (bVar.contains(fVar)) {
                bVar.remove(fVar);
                Intent intentRemove = this.e.remove(fVar);
                if (bVar.size() == 0) {
                    this.d.remove(componentName);
                    com.bytedance.pangle.service.a aVar = this.f.get(componentName);
                    if (aVar != null) {
                        aVar.onUnbind(intentRemove);
                    }
                }
                b(componentName);
                return;
            }
        }
    }
}
