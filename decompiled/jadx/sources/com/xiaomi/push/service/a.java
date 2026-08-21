package com.xiaomi.push.service;

import android.content.Context;
import android.text.TextUtils;
import java.io.File;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.nio.channels.FileLock;

/* JADX INFO: loaded from: classes4.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile a f8294a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Context f887a;
    private volatile String e;
    private volatile String f;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private final Object f888a = new Object();
    private final Object b = new Object();

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private final String f889a = "mipush_region";

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    private final String f890b = "mipush_country_code";
    private final String c = "mipush_region.lock";
    private final String d = "mipush_country_code.lock";

    public a(Context context) {
        this.f887a = context;
    }

    public static a a(Context context) {
        if (f8294a == null) {
            synchronized (a.class) {
                if (f8294a == null) {
                    f8294a = new a(context);
                }
            }
        }
        return f8294a;
    }

    private String a(Context context, String str, String str2, Object obj) {
        RandomAccessFile randomAccessFile;
        FileLock fileLockLock;
        File file = new File(context.getFilesDir(), str);
        FileLock fileLock = null;
        if (!file.exists()) {
            com.xiaomi.channel.commonutils.logger.b.m43a("No ready file to get data from " + str);
            return null;
        }
        synchronized (obj) {
            try {
                File file2 = new File(context.getFilesDir(), str2);
                com.xiaomi.push.ab.m115a(file2);
                randomAccessFile = new RandomAccessFile(file2, "rw");
            } catch (Exception e) {
                e = e;
                randomAccessFile = null;
                fileLockLock = null;
            } catch (Throwable th) {
                th = th;
                randomAccessFile = null;
            }
            try {
                fileLockLock = randomAccessFile.getChannel().lock();
                try {
                    try {
                        String strA = com.xiaomi.push.ab.a(file);
                        if (fileLockLock != null && fileLockLock.isValid()) {
                            try {
                                fileLockLock.release();
                            } catch (IOException e2) {
                                com.xiaomi.channel.commonutils.logger.b.a(e2);
                            }
                        }
                        com.xiaomi.push.ab.a(randomAccessFile);
                        return strA;
                    } catch (Exception e3) {
                        e = e3;
                        com.xiaomi.channel.commonutils.logger.b.a(e);
                        if (fileLockLock != null && fileLockLock.isValid()) {
                            try {
                                fileLockLock.release();
                            } catch (IOException e4) {
                                com.xiaomi.channel.commonutils.logger.b.a(e4);
                            }
                        }
                        com.xiaomi.push.ab.a(randomAccessFile);
                        return null;
                    }
                } catch (Throwable th2) {
                    th = th2;
                    fileLock = fileLockLock;
                    if (fileLock != null && fileLock.isValid()) {
                        try {
                            fileLock.release();
                        } catch (IOException e5) {
                            com.xiaomi.channel.commonutils.logger.b.a(e5);
                        }
                    }
                    com.xiaomi.push.ab.a(randomAccessFile);
                    throw th;
                }
            } catch (Exception e6) {
                e = e6;
                fileLockLock = null;
            } catch (Throwable th3) {
                th = th3;
                if (fileLock != null) {
                    fileLock.release();
                }
                com.xiaomi.push.ab.a(randomAccessFile);
                throw th;
            }
        }
    }

    private void a(Context context, String str, String str2, String str3, Object obj) {
        RandomAccessFile randomAccessFile;
        synchronized (obj) {
            FileLock fileLockLock = null;
            try {
                try {
                    File file = new File(context.getFilesDir(), str3);
                    com.xiaomi.push.ab.m115a(file);
                    randomAccessFile = new RandomAccessFile(file, "rw");
                    try {
                        try {
                            fileLockLock = randomAccessFile.getChannel().lock();
                            com.xiaomi.push.ab.a(new File(context.getFilesDir(), str2), str);
                            if (fileLockLock != null && fileLockLock.isValid()) {
                                try {
                                    fileLockLock.release();
                                } catch (IOException e) {
                                    com.xiaomi.channel.commonutils.logger.b.a(e);
                                }
                            }
                        } catch (Exception e2) {
                            e = e2;
                            com.xiaomi.channel.commonutils.logger.b.a(e);
                            if (fileLockLock != null && fileLockLock.isValid()) {
                                try {
                                    fileLockLock.release();
                                } catch (IOException e3) {
                                    com.xiaomi.channel.commonutils.logger.b.a(e3);
                                }
                            }
                        }
                    } catch (Throwable th) {
                        th = th;
                        if (fileLockLock != null && fileLockLock.isValid()) {
                            try {
                                fileLockLock.release();
                            } catch (IOException e4) {
                                com.xiaomi.channel.commonutils.logger.b.a(e4);
                            }
                        }
                        com.xiaomi.push.ab.a(randomAccessFile);
                        throw th;
                    }
                } catch (Throwable th2) {
                    throw th2;
                }
            } catch (Exception e5) {
                e = e5;
                randomAccessFile = null;
            } catch (Throwable th3) {
                th = th3;
                randomAccessFile = null;
                if (fileLockLock != null) {
                    fileLockLock.release();
                }
                com.xiaomi.push.ab.a(randomAccessFile);
                throw th;
            }
            com.xiaomi.push.ab.a(randomAccessFile);
        }
    }

    public String a() {
        if (TextUtils.isEmpty(this.e)) {
            this.e = a(this.f887a, "mipush_region", "mipush_region.lock", this.f888a);
        }
        return this.e;
    }

    public void a(String str) {
        if (TextUtils.equals(str, this.e)) {
            return;
        }
        this.e = str;
        a(this.f887a, this.e, "mipush_region", "mipush_region.lock", this.f888a);
    }

    public String b() {
        if (TextUtils.isEmpty(this.f)) {
            this.f = a(this.f887a, "mipush_country_code", "mipush_country_code.lock", this.b);
        }
        return this.f;
    }

    public void b(String str) {
        if (TextUtils.equals(str, this.f)) {
            return;
        }
        this.f = str;
        a(this.f887a, this.f, "mipush_country_code", "mipush_country_code.lock", this.b);
    }
}
