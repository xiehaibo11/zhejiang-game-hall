package com.xiaomi.push;

import android.content.Context;
import android.content.SharedPreferences;
import android.text.TextUtils;
import com.xiaomi.push.al;
import java.io.BufferedOutputStream;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.nio.channels.FileLock;

/* JADX INFO: loaded from: classes4.dex */
public abstract class dt extends al.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected int f8114a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    protected Context f246a;

    public dt(Context context, int i) {
        this.f8114a = i;
        this.f246a = context;
    }

    public static void a(Context context, hr hrVar) {
        dm dmVarM225a = dn.a().m225a();
        String strA = dmVarM225a == null ? "" : dmVarM225a.a();
        if (TextUtils.isEmpty(strA) || TextUtils.isEmpty(hrVar.a())) {
            return;
        }
        a(context, hrVar, strA);
    }

    private static void a(Context context, hr hrVar, String str) {
        BufferedOutputStream bufferedOutputStream;
        RandomAccessFile randomAccessFile;
        FileLock fileLockLock;
        File file;
        byte[] bArrB = dp.b(str, it.a(hrVar));
        if (bArrB == null || bArrB.length == 0) {
            return;
        }
        synchronized (dq.f8111a) {
            FileLock fileLock = null;
            try {
                try {
                    File file2 = new File(context.getExternalFilesDir(null), "push_cdata.lock");
                    ab.m115a(file2);
                    randomAccessFile = new RandomAccessFile(file2, "rw");
                    try {
                        fileLockLock = randomAccessFile.getChannel().lock();
                        try {
                            file = new File(context.getExternalFilesDir(null), "push_cdata.data");
                            bufferedOutputStream = new BufferedOutputStream(new FileOutputStream(file, true));
                        } catch (IOException e) {
                            e = e;
                            bufferedOutputStream = null;
                        } catch (Throwable th) {
                            th = th;
                            bufferedOutputStream = null;
                        }
                    } catch (IOException e2) {
                        e = e2;
                        bufferedOutputStream = null;
                    } catch (Throwable th2) {
                        th = th2;
                        bufferedOutputStream = null;
                    }
                    try {
                        bufferedOutputStream.write(af.a(bArrB.length));
                        bufferedOutputStream.write(bArrB);
                        bufferedOutputStream.flush();
                        file.setLastModified(0L);
                        if (fileLockLock != null && fileLockLock.isValid()) {
                            try {
                                fileLockLock.release();
                            } catch (IOException unused) {
                            }
                        }
                        ab.a(bufferedOutputStream);
                    } catch (IOException e3) {
                        e = e3;
                        fileLock = fileLockLock;
                        try {
                            e.printStackTrace();
                            if (fileLock != null && fileLock.isValid()) {
                                try {
                                    fileLock.release();
                                } catch (IOException unused2) {
                                }
                            }
                            ab.a(bufferedOutputStream);
                        } catch (Throwable th3) {
                            th = th3;
                            if (fileLock != null && fileLock.isValid()) {
                                try {
                                    fileLock.release();
                                } catch (IOException unused3) {
                                }
                            }
                            ab.a(bufferedOutputStream);
                            ab.a(randomAccessFile);
                            throw th;
                        }
                    } catch (Throwable th4) {
                        th = th4;
                        fileLock = fileLockLock;
                        if (fileLock != null) {
                            fileLock.release();
                        }
                        ab.a(bufferedOutputStream);
                        ab.a(randomAccessFile);
                        throw th;
                    }
                } catch (Throwable th5) {
                    throw th5;
                }
            } catch (IOException e4) {
                e = e4;
                bufferedOutputStream = null;
                randomAccessFile = null;
            } catch (Throwable th6) {
                th = th6;
                bufferedOutputStream = null;
                randomAccessFile = null;
            }
            ab.a(randomAccessFile);
        }
    }

    private String c() {
        return "dc_job_result_time_" + a();
    }

    private String d() {
        return "dc_job_result_" + a();
    }

    public abstract hl a();

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    protected boolean m227a() {
        return dp.a(this.f246a, String.valueOf(a()), this.f8114a);
    }

    public abstract String b();

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    protected boolean m228b() {
        return true;
    }

    /* JADX INFO: renamed from: c, reason: collision with other method in class */
    protected boolean m229c() {
        return false;
    }

    @Override // java.lang.Runnable
    public void run() {
        String strB = b();
        if (TextUtils.isEmpty(strB)) {
            return;
        }
        if (m227a()) {
            com.xiaomi.channel.commonutils.logger.b.m43a("DC run job mutual: " + a());
            return;
        }
        dm dmVarM225a = dn.a().m225a();
        String strA = dmVarM225a == null ? "" : dmVarM225a.a();
        if (!TextUtils.isEmpty(strA) && m228b()) {
            if (m229c()) {
                SharedPreferences sharedPreferences = this.f246a.getSharedPreferences("mipush_extra", 0);
                if (bp.a(strB).equals(sharedPreferences.getString(d(), null))) {
                    long j = sharedPreferences.getLong(c(), 0L);
                    int iA = com.xiaomi.push.service.ba.a(this.f246a).a(ho.DCJobUploadRepeatedInterval.a(), 604800);
                    if ((System.currentTimeMillis() - j) / 1000 < this.f8114a) {
                        return;
                    }
                    if ((System.currentTimeMillis() - j) / 1000 < iA) {
                        strB = "same_" + j;
                    }
                }
            }
            hr hrVar = new hr();
            hrVar.a(strB);
            hrVar.a(System.currentTimeMillis());
            hrVar.a(a());
            a(this.f246a, hrVar, strA);
        }
    }
}
