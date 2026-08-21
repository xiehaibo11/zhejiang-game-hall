package com.igexin.push.core;

import android.content.ContentValues;
import android.database.Cursor;
import android.text.TextUtils;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

public class n {
    private static volatile n e;
    private final Object a = new Object();
    private final Map<String, Object> c = new HashMap();
    private final ExecutorService d = new ThreadPoolExecutor(0, 1, 30, TimeUnit.SECONDS, new LinkedBlockingQueue());
    private boolean b = false;

    private n() {
        b();
    }

    public static n a() {
        if (e == null) {
            synchronized (n.class) {
                if (e == null) {
                    e = new n();
                }
            }
        }
        return e;
    }

    private void b() {
        new Thread(new o(this), "MessageTaskIDPreferences-load").start();
    }

    /* JADX WARN: Removed duplicated region for block: B:65:0x0063 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void c() throws Throwable {
        Cursor cursorA;
        Throwable th;
        synchronized (this.a) {
            if (this.b) {
                return;
            }
            Cursor cursor = null;
            try {
                try {
                    cursorA = c.a().k().a("message", new String[]{"taskid"}, " createtime >= " + (System.currentTimeMillis() - 604800000));
                    if (cursorA != null) {
                        try {
                            if (cursorA.getCount() <= 0) {
                                com.igexin.b.a.c.b.a("MessageTaskIDPreference|db cnt = 0", new Object[0]);
                                synchronized (this.a) {
                                    this.b = true;
                                    this.a.notifyAll();
                                }
                                if (cursorA == null) {
                                } else {
                                    cursorA.close();
                                }
                            } else {
                                while (cursorA.moveToNext()) {
                                    this.c.put(cursorA.getString(cursorA.getColumnIndex("taskid")), null);
                                }
                                synchronized (this.a) {
                                }
                            }
                        } catch (Exception unused) {
                            cursor = cursorA;
                            synchronized (this.a) {
                                this.b = true;
                                this.a.notifyAll();
                            }
                            if (cursor == null) {
                            } else {
                                cursor.close();
                            }
                        } catch (Throwable th2) {
                            th = th2;
                            synchronized (this.a) {
                                this.b = true;
                                this.a.notifyAll();
                            }
                            if (cursorA != null) {
                                try {
                                    cursorA.close();
                                } catch (Throwable unused2) {
                                }
                            }
                            throw th;
                        }
                    } else {
                        com.igexin.b.a.c.b.a("MessageTaskIDPreference|db cnt = 0", new Object[0]);
                        synchronized (this.a) {
                        }
                    }
                } catch (Throwable unused3) {
                }
            } catch (Exception unused4) {
            } catch (Throwable th3) {
                cursorA = null;
                th = th3;
            }
        }
    }

    private void d() {
        synchronized (this.a) {
            while (!this.b) {
                try {
                    this.a.wait();
                } catch (InterruptedException unused) {
                }
            }
        }
    }

    public void a(String str, ContentValues contentValues) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        d();
        synchronized (this.a) {
            this.c.put(str, null);
        }
        this.d.execute(new p(this, contentValues));
    }

    public boolean a(String str) {
        boolean zContainsKey;
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        d();
        synchronized (this.a) {
            zContainsKey = this.c.containsKey(str);
        }
        return zContainsKey;
    }

    public void b(String str, ContentValues contentValues) {
        if (a(str)) {
            this.d.execute(new q(this, contentValues, str));
        }
    }
}
