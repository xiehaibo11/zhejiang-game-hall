package com.kwad.components.core.t;

import android.os.SystemClock;
import android.text.TextUtils;
import com.kwad.sdk.core.config.item.o;
import com.kwad.sdk.internal.api.SceneImpl;
import com.mbridge.msdk.MBridgeConstans;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes2.dex */
public class k {
    private static volatile k Rq;
    private boolean Rr = false;
    private o.a Rs;
    public static final String TAG = k.class.getSimpleName();
    private static final String Rp = k.class.getName();

    private k() {
    }

    private static void B(long j) {
        com.kwad.sdk.core.e.c.d(TAG, "checkBySuper end:" + (SystemClock.elapsedRealtime() - j));
    }

    private static boolean a(List<String> list, Class cls) {
        int i = 0;
        while (cls != null && !TextUtils.equals(cls.getName(), "java.lang.Object")) {
            Iterator<String> it = list.iterator();
            while (it.hasNext()) {
                if (cls.getName().contains(it.next())) {
                    return true;
                }
            }
            cls = cls.getSuperclass();
            i++;
            if (i >= 4) {
                break;
            }
        }
        return false;
    }

    private boolean a(List<String> list, List<String> list2) {
        if (list == null || list.size() <= 0) {
            return false;
        }
        StackTraceElement[] stackTrace = Thread.currentThread().getStackTrace();
        for (StackTraceElement stackTraceElement : stackTrace) {
            String className = stackTraceElement.getClassName();
            if (className != null) {
                Iterator<String> it = list.iterator();
                while (it.hasNext()) {
                    if (className.contains(it.next())) {
                        return true;
                    }
                }
            }
        }
        return a(list2, stackTrace);
    }

    private boolean a(List<String> list, StackTraceElement[] stackTraceElementArr) {
        if (list != null && !list.isEmpty()) {
            long jElapsedRealtime = SystemClock.elapsedRealtime();
            com.kwad.sdk.core.e.c.d(TAG, "checkBySuper begin:" + jElapsedRealtime);
            int length = stackTraceElementArr.length;
            for (int i = 0; i < length; i++) {
                String className = stackTraceElementArr[i].getClassName();
                if (className != null && ax(className) && ay(className)) {
                    try {
                        if (a(list, Class.forName(className).getSuperclass())) {
                            B(jElapsedRealtime);
                            return true;
                        }
                    } catch (Throwable unused) {
                    }
                    try {
                        if (className.contains("$") && a(list, Class.forName(className.substring(0, className.lastIndexOf("$"))).getSuperclass())) {
                            B(jElapsedRealtime);
                            return true;
                        }
                    } catch (Throwable unused2) {
                        continue;
                    }
                }
            }
            B(jElapsedRealtime);
        }
        return false;
    }

    private static boolean ax(String str) {
        return (str.startsWith("android") || str.startsWith("java") || str.startsWith("dalvik") || str.startsWith(MBridgeConstans.APPLICATION_STACK_COM_ANDROID) || str.contains(Rp) || !str.startsWith("androidx")) ? false : true;
    }

    private static boolean ay(String str) {
        return !str.startsWith("com.kwad");
    }

    private static boolean az(String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        return Class.forName(str) != null;
    }

    public static k qo() {
        if (Rq == null) {
            synchronized (k.class) {
                if (Rq == null) {
                    Rq = new k();
                }
            }
        }
        return Rq;
    }

    private void qq() {
        o.a aVar = this.Rs;
        if (aVar == null) {
            return;
        }
        if (!this.Rr && aVar.amN.size() > 0) {
            Iterator<String> it = this.Rs.amN.iterator();
            while (it.hasNext()) {
                boolean zAz = az(it.next());
                this.Rr = zAz;
                if (zAz) {
                    break;
                }
            }
        }
        if (this.Rr) {
            ArrayList arrayList = new ArrayList();
            if (this.Rs.amK.size() > 0) {
                for (Map.Entry<Integer, String> entry : this.Rs.amK.entrySet()) {
                    if (az(entry.getValue())) {
                        arrayList.add(entry.getKey());
                    }
                }
            }
            com.kwad.components.core.o.a.pA().a(a(this.Rs.amL, this.Rs.amM), arrayList);
        }
    }

    public final boolean a(SceneImpl sceneImpl, String str) {
        boolean zA = this.Rr ? a(this.Rs.amL, this.Rs.amM) : false;
        com.kwad.components.core.o.a.pA().a(sceneImpl, zA, str);
        return zA;
    }

    public final void init() {
        o.a aVar = (o.a) com.kwad.sdk.core.config.d.b(com.kwad.sdk.core.config.c.akS);
        this.Rs = aVar;
        if (aVar != null) {
            qq();
        }
    }

    public final int qp() {
        o.a aVar = this.Rs;
        if (aVar != null) {
            return aVar.amO;
        }
        return 0;
    }
}
