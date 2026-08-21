package com.qq.e.comm.managers.plugin;

import android.content.Context;
import android.content.SharedPreferences;
import android.text.TextUtils;
import com.qq.e.comm.constants.Sig;
import com.qq.e.comm.managers.status.SDKStatus;
import com.qq.e.comm.pi.POFactory;
import com.qq.e.comm.util.GDTLogger;
import dalvik.system.DexClassLoader;
import java.io.File;
import java.io.RandomAccessFile;
import java.nio.channels.FileLock;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.Callable;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.Future;
import org.json.JSONException;
import org.json.JSONObject;

public class PM {
    private static final Map<Class<?>, String> q = new b();
    private final Context b;
    private String c;
    private File d;
    private volatile int e;
    private DexClassLoader f;
    private RandomAccessFile g;
    private FileLock h;
    private boolean i;
    private final f j;
    private volatile POFactory k;
    private int l;
    private Future<Boolean> m;
    private boolean o;
    private String p;
    final ExecutorService a = Executors.newSingleThreadExecutor();
    private boolean n = false;

    class a implements Callable<Boolean> {
        a() {
        }

        @Override
        public Boolean call() throws Exception {
            long jCurrentTimeMillis = System.currentTimeMillis();
            if (!PM.this.i) {
                PM pm = PM.this;
                pm.i = pm.tryLockUpdate();
            }
            if (PM.b(PM.this)) {
                PM.c(PM.this);
            }
            PM.this.l = (int) (System.currentTimeMillis() - jCurrentTimeMillis);
            return Boolean.TRUE;
        }
    }

    static class b extends HashMap<Class<?>, String> {
        b() {
            put(POFactory.class, "com.qq.e.comm.plugin.POFactoryImpl");
        }
    }

    public PM(Context context, f fVar) {
        this.b = context.getApplicationContext();
        this.j = fVar;
        com.qq.e.comm.managers.plugin.b.a(context);
        if (SDKStatus.isNoPlugin) {
            return;
        }
        d();
    }

    private JSONObject a() {
        JSONObject jSONObject = new JSONObject();
        try {
            int pluginVersion = getPluginVersion();
            if (pluginVersion > 10000) {
                jSONObject.put("vas", this.p);
            }
            jSONObject.put("pv", pluginVersion);
            jSONObject.put("sig", this.c);
            jSONObject.put(com.tkay.expressad.videocommon.e.b.u, com.qq.e.comm.managers.b.b().a());
            jSONObject.put("pn", com.qq.e.comm.managers.plugin.b.a(this.b));
            jSONObject.put("ict", this.l);
            jSONObject.put("mup", this.i);
        } catch (JSONException unused) {
        }
        return jSONObject;
    }

    private boolean b() {
        if (!this.i) {
            return false;
        }
        try {
            com.qq.e.comm.managers.plugin.b.a(this.b, h.e(this.b), h.f(this.b));
            this.c = Sig.ASSET_PLUGIN_SIG;
            this.d = h.e(this.b);
            this.e = SDKStatus.getBuildInPluginVersion();
            return true;
        } catch (Throwable th) {
            GDTLogger.e("插件初始化失败 ");
            com.qq.e.comm.managers.plugin.a.a(th, th.getMessage());
            return false;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:9:0x0029  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    static boolean b(PM pm) {
        StringBuilder sb;
        if (pm == null) {
            throw null;
        }
        try {
            GDTLogger.d("TimeStap_BEFORE_PLUGIN_INIT:" + System.currentTimeMillis());
            if (!pm.c()) {
                z = pm.b();
                sb = new StringBuilder();
            }
        } catch (Throwable th) {
            try {
                GDTLogger.e("插件加载出现异常", th);
                com.qq.e.comm.managers.plugin.a.a(th, th.getMessage());
                sb = new StringBuilder();
            } catch (Throwable th2) {
                GDTLogger.d("TimeStap_AFTER_PLUGIN_INIT:" + System.currentTimeMillis());
                throw th2;
            }
        }
        sb.append("TimeStap_AFTER_PLUGIN_INIT:");
        sb.append(System.currentTimeMillis());
        GDTLogger.d(sb.toString());
        return z;
    }

    static void c(PM pm) {
        if (pm == null) {
            throw null;
        }
        StringBuilder sb = new StringBuilder();
        sb.append("PluginFile:\t");
        File file = pm.d;
        sb.append(file == null ? "null" : file.getAbsolutePath());
        GDTLogger.d(sb.toString());
        if (SDKStatus.isNoPlugin || pm.c == null || pm.d == null) {
            if (SDKStatus.isNoPlugin) {
                return;
            }
            pm.f = null;
            return;
        }
        try {
            pm.f = new DexClassLoader(pm.d.getAbsolutePath(), h.a(pm.b).getAbsolutePath(), null, pm.getClass().getClassLoader());
            f fVar = pm.j;
            if (fVar != null) {
                fVar.a();
            }
        } catch (Throwable th) {
            GDTLogger.e("插件ClassLoader构造发生异常", th);
            f fVar2 = pm.j;
            if (fVar2 != null) {
                fVar2.b();
            }
            com.qq.e.comm.managers.plugin.a.a(th, th.getMessage());
        }
    }

    private boolean c() {
        if (this.o) {
            return false;
        }
        if (this.i) {
            g gVar = new g(h.c(this.b), h.d(this.b));
            if (gVar.a()) {
                GDTLogger.d("NextExist,Updated=" + gVar.a(h.e(this.b), h.f(this.b)));
            }
        }
        g gVar2 = new g(h.e(this.b), h.f(this.b));
        if (!gVar2.a()) {
            return false;
        }
        if (gVar2.c() >= SDKStatus.getBuildInPluginVersion()) {
            this.c = gVar2.b();
            this.e = gVar2.c();
            this.d = h.e(this.b);
            this.p = gVar2.d();
            this.n = true;
            return true;
        }
        GDTLogger.d("last updated plugin version =" + this.e + ";asset plugin version=" + SDKStatus.getBuildInPluginVersion());
        return false;
    }

    private void d() {
        this.n = false;
        SharedPreferences sharedPreferences = this.b.getSharedPreferences("start_crash", 0);
        if (sharedPreferences.getInt("crash_count", 0) >= 2) {
            this.o = true;
            sharedPreferences.edit().remove("crash_count").commit();
            GDTLogger.e("加载本地插件");
        }
        this.m = this.a.submit(new a());
    }

    public <T> T getFactory(Class<T> cls) throws e {
        Future<Boolean> future = this.m;
        if (future != null) {
            try {
                future.get();
            } catch (InterruptedException | ExecutionException unused) {
            }
        }
        GDTLogger.d("GetFactoryInstaceforInterface:" + cls);
        ClassLoader classLoader = (SDKStatus.isNoPlugin || Sig.ASSET_PLUGIN_SIG == null) ? PM.class.getClassLoader() : this.f;
        StringBuilder sb = new StringBuilder();
        sb.append("PluginClassLoader is parent");
        sb.append(PM.class.getClassLoader() == classLoader);
        GDTLogger.d(sb.toString());
        if (classLoader == null) {
            throw new e("Fail to init GDTADPLugin,PluginClassLoader == null;while loading factory impl for:" + cls);
        }
        try {
            String str = q.get(cls);
            if (TextUtils.isEmpty(str)) {
                throw new e("factory  implemention name is not specified for interface:" + cls.getName());
            }
            Class<?> clsLoadClass = classLoader.loadClass(str);
            T tCast = cls.cast(clsLoadClass.getDeclaredMethod("getInstance", Context.class, JSONObject.class).invoke(clsLoadClass, this.b, a()));
            GDTLogger.d("ServiceDelegateFactory =" + tCast);
            return tCast;
        } catch (Throwable th) {
            throw new e("Fail to getfactory implement instance for interface:" + cls.getName(), th);
        }
    }

    public POFactory getPOFactory() throws e {
        if (this.k == null) {
            synchronized (this) {
                if (this.k == null) {
                    try {
                        this.k = (POFactory) getFactory(POFactory.class);
                    } catch (e e) {
                        if (!this.n) {
                            throw e;
                        }
                        GDTLogger.e("插件加载错误，回退到内置版本");
                        this.o = true;
                        d();
                        this.k = (POFactory) getFactory(POFactory.class);
                    }
                }
            }
        }
        return this.k;
    }

    public int getPluginVersion() {
        if (SDKStatus.isNoPlugin) {
            return 1381;
        }
        Future<Boolean> future = this.m;
        if (future != null) {
            try {
                future.get();
            } catch (InterruptedException | ExecutionException unused) {
            }
        }
        return this.e;
    }

    public boolean tryLockUpdate() {
        try {
            File fileB = h.b(this.b);
            if (!fileB.exists()) {
                fileB.createNewFile();
                h.a("lock", fileB);
            }
            if (!fileB.exists()) {
                return false;
            }
            RandomAccessFile randomAccessFile = new RandomAccessFile(fileB, "rw");
            this.g = randomAccessFile;
            FileLock fileLockTryLock = randomAccessFile.getChannel().tryLock();
            this.h = fileLockTryLock;
            if (fileLockTryLock == null) {
                return false;
            }
            this.g.writeByte(37);
            return true;
        } catch (Throwable unused) {
            return false;
        }
    }
}
