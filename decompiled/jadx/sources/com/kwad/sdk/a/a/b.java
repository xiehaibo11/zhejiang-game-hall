package com.kwad.sdk.a.a;

import android.content.Context;
import com.kwad.sdk.KsAdSDKImpl;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.ak;
import com.kwad.sdk.utils.av;
import com.kwad.sdk.utils.aw;
import com.kwad.sdk.utils.g;
import com.kwad.sdk.utils.q;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Stack;

/* JADX INFO: loaded from: classes2.dex */
public class b {
    private static volatile b ahw;
    private Stack<AdTemplate> ahu = new Stack<>();
    private File ahv;
    private boolean mHasInit;

    public interface a {
        void gB();

        void ya();
    }

    private b() {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public synchronized void ad(AdTemplate adTemplate) {
        ObjectOutputStream objectOutputStream;
        Throwable th;
        Exception e;
        boolean z = false;
        Iterator<AdTemplate> it = this.ahu.iterator();
        while (it.hasNext()) {
            if (com.kwad.sdk.core.response.b.d.cq(it.next()) == com.kwad.sdk.core.response.b.d.cq(adTemplate)) {
                it.remove();
                z = true;
            }
        }
        if (!z) {
            return;
        }
        try {
            objectOutputStream = new ObjectOutputStream(new FileOutputStream(this.ahv));
            try {
                try {
                    objectOutputStream.writeObject(this.ahu);
                    com.kwad.sdk.crash.utils.b.closeQuietly(objectOutputStream);
                } catch (Exception e2) {
                    e = e2;
                    com.kwad.sdk.core.e.c.d("InstallTipsDataManager", " removeApkDownloadedData e" + e);
                    com.kwad.sdk.crash.utils.b.closeQuietly(objectOutputStream);
                }
            } catch (Throwable th2) {
                th = th2;
                com.kwad.sdk.crash.utils.b.closeQuietly(objectOutputStream);
                throw th;
            }
        } catch (Exception e3) {
            objectOutputStream = null;
            e = e3;
        } catch (Throwable th3) {
            objectOutputStream = null;
            th = th3;
            com.kwad.sdk.crash.utils.b.closeQuietly(objectOutputStream);
            throw th;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public synchronized void ae(AdTemplate adTemplate) {
        ObjectOutputStream objectOutputStream;
        Throwable th;
        Exception e;
        this.ahu.add(adTemplate);
        try {
            objectOutputStream = new ObjectOutputStream(new FileOutputStream(xX()));
            try {
                try {
                    objectOutputStream.writeObject(this.ahu);
                    com.kwad.sdk.crash.utils.b.closeQuietly(objectOutputStream);
                } catch (Exception e2) {
                    e = e2;
                    com.kwad.sdk.core.e.c.printStackTrace(e);
                    com.kwad.sdk.crash.utils.b.closeQuietly(objectOutputStream);
                }
            } catch (Throwable th2) {
                th = th2;
                com.kwad.sdk.crash.utils.b.closeQuietly(objectOutputStream);
                throw th;
            }
        } catch (Exception e3) {
            objectOutputStream = null;
            e = e3;
        } catch (Throwable th3) {
            objectOutputStream = null;
            th = th3;
            com.kwad.sdk.crash.utils.b.closeQuietly(objectOutputStream);
            throw th;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static File ah(AdTemplate adTemplate) {
        File file = new File(com.kwad.sdk.core.download.a.B(com.kwad.sdk.core.response.b.d.cg(adTemplate)));
        if (q.L(file)) {
            return file;
        }
        return null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public synchronized File xX() {
        if (this.ahv != null) {
            return this.ahv;
        }
        Context context = KsAdSDKImpl.get().getContext();
        if (context == null) {
            return null;
        }
        String strCN = av.cN(context);
        File file = new File(strCN);
        if (!file.exists()) {
            file.mkdir();
        }
        File file2 = new File(strCN + File.separator + "uninstall_ad");
        this.ahv = file2;
        if (!file2.exists()) {
            try {
                this.ahv.createNewFile();
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
        return this.ahv;
    }

    public static b xY() {
        if (ahw == null) {
            synchronized (b.class) {
                if (ahw == null) {
                    ahw = new b();
                }
            }
        }
        return ahw;
    }

    public final synchronized void a(final a aVar) {
        if (this.mHasInit) {
            return;
        }
        this.mHasInit = true;
        g.execute(new aw() { // from class: com.kwad.sdk.a.a.b.1
            /* JADX WARN: Not initialized variable reg: 4, insn: 0x0124: MOVE (r3 I:??[OBJECT, ARRAY]) = (r4 I:??[OBJECT, ARRAY]), block:B:71:0x0124 */
            @Override // com.kwad.sdk.utils.aw
            public final void doTask() {
                ObjectInputStream objectInputStream;
                ObjectOutputStream objectOutputStream;
                ObjectOutputStream objectOutputStream2;
                try {
                    if (com.kwad.sdk.core.config.d.zm() != 0 && com.kwad.sdk.a.a.a.b.cI() <= 0) {
                        HashMap map = new HashMap();
                        File fileXX = b.this.xX();
                        ObjectOutputStream objectOutputStream3 = null;
                        try {
                            try {
                                if (!fileXX.exists()) {
                                    com.kwad.sdk.core.e.c.d("InstallTipsDataManager", "getCanShowDownloadData mDownloadFile is not exists");
                                }
                                b.this.ahu.clear();
                                objectInputStream = new ObjectInputStream(new FileInputStream(fileXX));
                                try {
                                    b.this.ahu = (Stack) objectInputStream.readObject();
                                    if (!b.this.ahu.isEmpty()) {
                                        Stack stack = new Stack();
                                        while (!b.this.ahu.isEmpty()) {
                                            AdTemplate adTemplate = (AdTemplate) b.this.ahu.pop();
                                            if (adTemplate != null) {
                                                String strValueOf = String.valueOf(com.kwad.sdk.core.response.b.d.cq(adTemplate));
                                                File fileAh = b.ah(adTemplate);
                                                if (fileAh == null || !fileAh.exists() || fileAh.lastModified() + 604800000 <= System.currentTimeMillis()) {
                                                    map.put(strValueOf, Boolean.TRUE);
                                                } else {
                                                    stack.push(adTemplate);
                                                }
                                            }
                                        }
                                        while (!stack.isEmpty()) {
                                            b.this.ahu.push((AdTemplate) stack.pop());
                                        }
                                    }
                                } catch (Exception e) {
                                    e = e;
                                    com.kwad.sdk.core.e.c.d("InstallTipsDataManager", " getCanShowDownloadBannerData e" + e);
                                    if (aVar != null) {
                                        aVar.ya();
                                        com.kwad.sdk.crash.utils.b.closeQuietly(objectInputStream);
                                        com.kwad.sdk.crash.utils.b.closeQuietly(objectInputStream);
                                        return;
                                    }
                                }
                            } catch (Throwable th) {
                                th = th;
                                objectOutputStream3 = objectOutputStream;
                                com.kwad.sdk.crash.utils.b.closeQuietly(objectOutputStream3);
                                throw th;
                            }
                        } catch (Exception e2) {
                            e = e2;
                            objectInputStream = null;
                        } catch (Throwable th2) {
                            th = th2;
                            com.kwad.sdk.crash.utils.b.closeQuietly(objectOutputStream3);
                            throw th;
                        }
                        com.kwad.sdk.crash.utils.b.closeQuietly(objectInputStream);
                        try {
                            try {
                                objectOutputStream2 = new ObjectOutputStream(new FileOutputStream(fileXX));
                            } catch (Exception e3) {
                                e = e3;
                            }
                        } catch (Throwable th3) {
                            th = th3;
                        }
                        try {
                            objectOutputStream2.writeObject(b.this.ahu);
                            com.kwad.sdk.crash.utils.b.closeQuietly(objectOutputStream2);
                        } catch (Exception e4) {
                            e = e4;
                            objectOutputStream3 = objectOutputStream2;
                            com.kwad.sdk.core.e.c.printStackTrace(e);
                            if (aVar != null) {
                                aVar.ya();
                                com.kwad.sdk.crash.utils.b.closeQuietly(objectInputStream);
                                com.kwad.sdk.crash.utils.b.closeQuietly(objectOutputStream3);
                                return;
                            }
                            com.kwad.sdk.crash.utils.b.closeQuietly(objectOutputStream3);
                            com.kwad.sdk.crash.utils.b.closeQuietly(objectOutputStream3);
                            throw th;
                        } catch (Throwable th4) {
                            th = th4;
                            objectOutputStream3 = objectOutputStream2;
                            com.kwad.sdk.crash.utils.b.closeQuietly(objectOutputStream3);
                            throw th;
                        }
                        if (aVar != null) {
                            aVar.gB();
                        }
                    }
                } catch (Throwable th5) {
                    com.kwad.components.core.d.a.b(th5);
                }
            }
        });
    }

    public final void af(final AdTemplate adTemplate) {
        if (adTemplate == null) {
            return;
        }
        g.execute(new Runnable() { // from class: com.kwad.sdk.a.a.b.2
            @Override // java.lang.Runnable
            public final void run() {
                b.this.ae(adTemplate);
            }
        });
    }

    public final void ag(final AdTemplate adTemplate) {
        if (adTemplate == null) {
            return;
        }
        g.execute(new Runnable() { // from class: com.kwad.sdk.a.a.b.3
            @Override // java.lang.Runnable
            public final void run() {
                b.this.ad(adTemplate);
            }
        });
    }

    public final synchronized AdTemplate xZ() {
        AdTemplate adTemplate;
        adTemplate = null;
        Stack stack = (Stack) this.ahu.clone();
        while (true) {
            if (stack.isEmpty()) {
                break;
            }
            AdTemplate adTemplate2 = (AdTemplate) stack.pop();
            if (adTemplate2 != null) {
                String str = com.kwad.sdk.core.response.b.d.cg(adTemplate2).adBaseInfo.appPackageName;
                Context context = KsAdSDKImpl.get().getContext();
                File fileAh = ah(adTemplate2);
                if (fileAh != null && fileAh.exists() && fileAh.lastModified() + 604800000 > System.currentTimeMillis() && !ak.ak(context, str)) {
                    adTemplate = adTemplate2;
                    break;
                }
            }
        }
        return adTemplate;
    }
}
