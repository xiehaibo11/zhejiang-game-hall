package com.tkay.expressad.mbbanner.a.d;

import android.content.Context;
import android.net.Uri;
import android.text.TextUtils;
import com.tkay.expressad.foundation.h.p;
import com.tkay.expressad.foundation.h.t;
import com.tkay.expressad.foundation.h.w;
import com.tkay.expressad.foundation.h.x;
import com.tkay.expressad.mbbanner.a.b.e;
import com.tkay.expressad.mbbanner.a.c.d;
import com.tkay.expressad.mbbanner.a.c.f;
import com.tkay.expressad.videocommon.b.g;
import java.io.File;
import java.io.FileOutputStream;
import java.util.ArrayList;
import java.util.List;
import java.util.Timer;
import java.util.TimerTask;

public class b {
    private static final String a = b.class.getSimpleName();
    private Context b;
    private e d;
    private com.tkay.expressad.mbbanner.a.e.a e;
    private com.tkay.expressad.mbbanner.a.c.b f;
    private d g;
    private int c = 0;
    private volatile boolean h = false;
    private Timer i = new Timer();
    private volatile List<String> j = new ArrayList();
    private volatile boolean k = false;
    private volatile boolean l = false;
    private volatile boolean m = false;

    static boolean b(b bVar) {
        bVar.h = true;
        return true;
    }

    public b(Context context, e eVar, com.tkay.expressad.mbbanner.a.c.b bVar, com.tkay.expressad.mbbanner.a.e.a aVar) {
        this.b = context.getApplicationContext();
        this.d = eVar;
        this.f = bVar;
        this.e = aVar;
    }

    private void a(String str) {
        if (this.m) {
            return;
        }
        if ((this.k || this.l) && this.j.size() == 0) {
            this.h = true;
            this.m = true;
            this.i.cancel();
            this.e.a(this.f, str);
            this.g.a(str);
        }
    }

    private void b(String str) {
        this.h = true;
        this.e.b(this.f, str);
        this.g.a(str);
    }

    public final void a(String str, int i, String str2, boolean z) {
        if (!z) {
            if (i == -1) {
                StringBuilder sb = new StringBuilder(" unitId =");
                sb.append(str);
                sb.append(" --> time out!");
            }
            this.i.cancel();
            this.h = true;
            this.e.b(this.f, str);
            this.g.a(str);
            return;
        }
        if (i == 1) {
            synchronized (this) {
                this.j.remove(str2);
                if (this.j.size() == 0) {
                    a(str);
                }
            }
            return;
        }
        if (i == 2) {
            this.l = true;
            a(str);
        } else if (i == 3) {
            this.k = true;
            a(str);
        }
    }

    final class 1 extends TimerTask {
        final String a;

        1(String str) {
            this.a = str;
        }

        @Override
        public final void run() {
            if (b.this.h) {
                return;
            }
            b.b(b.this);
            b.this.a(this.a, -1, "", false);
        }
    }

    private void c(String str) {
        this.i.schedule(new 1(str), 60000L);
    }

    protected final void a(String str, com.tkay.expressad.foundation.d.d dVar, d dVar2) throws Throwable {
        this.g = dVar2;
        if (dVar == null) {
            this.e.a(this.f, "campaignUnit is NULL!", str);
            this.g.a(str);
            return;
        }
        List<com.tkay.expressad.foundation.d.c> listA = a(dVar);
        new Thread(new 2(dVar)).start();
        if (listA.size() == 0) {
            this.e.a(this.f, com.tkay.expressad.reward.a.d.a, str);
            this.g.a(str);
            return;
        }
        this.i.schedule(new 1(str), 60000L);
        this.d.a(dVar.c());
        int size = this.c;
        int i = 0;
        try {
            if (listA.size() > 0) {
                size += listA.size();
            }
            if (size > this.d.c()) {
                size = 0;
            }
            if (w.b(str)) {
                this.d.a(size);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        com.tkay.expressad.foundation.d.c cVar = listA.get(0);
        String strTrim = cVar.p().trim();
        if (TextUtils.isEmpty(strTrim)) {
            String strTrim2 = cVar.q().trim();
            if (!TextUtils.isEmpty(strTrim2)) {
                String strA = a(str, strTrim2);
                if (listA.size() > 0) {
                    while (i < listA.size()) {
                        listA.get(i).e(strA);
                        listA.get(i).a(strTrim2.contains("<MBTPLMARK>"));
                        i++;
                    }
                }
            } else {
                this.l = true;
                this.k = true;
            }
        } else {
            if (!TextUtils.isEmpty(strTrim)) {
                g.a().a(strTrim, new f(this, str));
            }
            if (listA.size() > 0) {
                while (i < listA.size()) {
                    listA.get(i).d(cVar.p());
                    listA.get(i).a(true);
                    i++;
                }
            }
        }
        a(str, listA);
    }

    private List<com.tkay.expressad.foundation.d.c> a(com.tkay.expressad.foundation.d.d dVar) {
        ArrayList arrayList = new ArrayList();
        if (dVar != null) {
            try {
                if (dVar.J != null && dVar.J.size() > 0) {
                    ArrayList<com.tkay.expressad.foundation.d.c> arrayList2 = dVar.J;
                    new StringBuilder("getNeedShowList total campaign:").append(arrayList2.size());
                    for (int i = 0; i < arrayList2.size(); i++) {
                        com.tkay.expressad.foundation.d.c cVar = arrayList2.get(i);
                        if (cVar != null && cVar.O() != 99 && (!TextUtils.isEmpty(cVar.p()) || !TextUtils.isEmpty(cVar.q()) || !TextUtils.isEmpty(cVar.be()))) {
                            if (t.a(cVar)) {
                                cVar.i(t.a(this.b, cVar.ba()) ? 1 : 2);
                            }
                            if (cVar.ae() == 1 || !t.a(this.b, cVar.ba())) {
                                arrayList.add(cVar);
                            } else if (t.a(cVar)) {
                                arrayList.add(cVar);
                            }
                        }
                    }
                    new StringBuilder("getNeedShowList return these campaign with video res:").append(arrayList.size());
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
        return arrayList;
    }

    private void a(String str, List<com.tkay.expressad.foundation.d.c> list) {
        if (list == null || list.size() <= 0) {
            return;
        }
        for (com.tkay.expressad.foundation.d.c cVar : list) {
            if (!TextUtils.isEmpty(cVar.be())) {
                this.j.add(cVar.be());
                com.tkay.expressad.foundation.g.d.b.a(this.b).a(cVar.be(), new com.tkay.expressad.mbbanner.a.c.g(this, str));
            }
        }
    }

    private String a(String str, String str2) throws Throwable {
        File file;
        FileOutputStream fileOutputStream;
        String str3 = "";
        if (!TextUtils.isEmpty(str2)) {
            FileOutputStream fileOutputStream2 = null;
            try {
                try {
                    String strB = com.tkay.expressad.foundation.g.c.f.b(com.tkay.expressad.foundation.g.c.c.i);
                    String strA = p.a(x.a(str2));
                    if (TextUtils.isEmpty(strA)) {
                        strA = String.valueOf(System.currentTimeMillis());
                    }
                    file = new File(strB, strA.concat(".html"));
                    Uri.parse(str2).getPath();
                    fileOutputStream = new FileOutputStream(file);
                } catch (Exception e) {
                    e = e;
                }
            } catch (Throwable th) {
                th = th;
            }
            try {
                fileOutputStream.write(str2.getBytes());
                fileOutputStream.flush();
                String absolutePath = file.getAbsolutePath();
                try {
                    fileOutputStream.close();
                } catch (Exception e2) {
                    e2.printStackTrace();
                }
                str3 = absolutePath;
            } catch (Exception e3) {
                e = e3;
                fileOutputStream2 = fileOutputStream;
                e.printStackTrace();
                if (fileOutputStream2 != null) {
                    try {
                        fileOutputStream2.close();
                    } catch (Exception e4) {
                        e4.printStackTrace();
                    }
                }
            } catch (Throwable th2) {
                th = th2;
                fileOutputStream2 = fileOutputStream;
                if (fileOutputStream2 != null) {
                    try {
                        fileOutputStream2.close();
                    } catch (Exception e5) {
                        e5.printStackTrace();
                    }
                }
                throw th;
            }
            File file2 = new File(str3);
            if (!file2.exists() || !file2.isFile() || !file2.canRead()) {
                a(str, 2, str2, false);
            } else {
                a(str, 2, str2, true);
            }
        }
        return str3;
    }

    private void b(String str, String str2) {
        if (TextUtils.isEmpty(str2)) {
            return;
        }
        g.a().a(str2, new f(this, str));
    }

    final class 2 implements Runnable {
        final com.tkay.expressad.foundation.d.d a;

        2(com.tkay.expressad.foundation.d.d dVar) {
            this.a = dVar;
        }

        @Override
        public final void run() {
            String unused = b.a;
            com.tkay.expressad.foundation.d.d dVar = this.a;
            if (dVar != null && dVar.J != null && this.a.J.size() > 0) {
                Context unused2 = b.this.b;
                com.tkay.expressad.mbbanner.a.e.b.a();
            }
            String unused3 = b.a;
        }
    }

    private void b(com.tkay.expressad.foundation.d.d dVar) {
        new Thread(new 2(dVar)).start();
    }

    private String b() {
        return this.d.a();
    }

    private void d(String str) {
        this.d.a(str);
    }

    private int c() {
        try {
            int iB = this.d.b();
            if (iB > this.d.c()) {
                return 0;
            }
            return iB;
        } catch (Exception e) {
            e.printStackTrace();
            return 0;
        }
    }

    private void b(String str, List<com.tkay.expressad.foundation.d.c> list) {
        int size = this.c;
        if (list != null) {
            try {
                if (list.size() > 0) {
                    size += list.size();
                }
            } catch (Exception e) {
                e.printStackTrace();
                return;
            }
        }
        if (size > this.d.c()) {
            size = 0;
        }
        if (w.b(str)) {
            this.d.a(size);
        }
    }
}
