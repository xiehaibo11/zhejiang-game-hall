package com.xiaomi.push;

import android.content.Context;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Process;
import android.text.TextUtils;
import android.util.Log;
import android.util.Pair;
import com.xiaomi.channel.commonutils.logger.LoggerInterface;
import com.xiaomi.mipush.sdk.Constants;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.OutputStreamWriter;
import java.io.RandomAccessFile;
import java.nio.channels.FileLock;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
public class dj implements LoggerInterface {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile dj f8107a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Context f237a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Handler f238a;
    private String b;
    private String c = "";

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final SimpleDateFormat f235a = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss aaa");

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public static String f234a = "/MiPushLog";

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static List<Pair<String, Throwable>> f236a = Collections.synchronizedList(new ArrayList());

    private dj(Context context) {
        this.f237a = context;
        if (context.getApplicationContext() != null) {
            this.f237a = context.getApplicationContext();
        }
        this.b = this.f237a.getPackageName() + Constants.ACCEPT_TIME_SEPARATOR_SERVER + Process.myPid();
        HandlerThread handlerThread = new HandlerThread("Log2FileHandlerThread");
        handlerThread.start();
        this.f238a = new Handler(handlerThread.getLooper());
    }

    public static dj a(Context context) {
        if (f8107a == null) {
            synchronized (dj.class) {
                if (f8107a == null) {
                    f8107a = new dj(context);
                }
            }
        }
        return f8107a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:85:0x017a -> B:108:0x017f). Please report as a decompilation issue!!! */
    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m223a() throws Throwable {
        RandomAccessFile randomAccessFile;
        FileLock fileLockLock;
        File file;
        File externalFilesDir;
        BufferedWriter bufferedWriter = null;
        try {
            try {
                try {
                    if (TextUtils.isEmpty(this.c) && (externalFilesDir = this.f237a.getExternalFilesDir(null)) != null) {
                        this.c = externalFilesDir.getAbsolutePath() + "";
                    }
                    file = new File(this.c + f234a);
                } catch (IOException e) {
                    Log.e(this.b, "", e);
                }
            } catch (Exception e2) {
                e = e2;
                fileLockLock = null;
                randomAccessFile = null;
            } catch (Throwable th) {
                th = th;
                fileLockLock = null;
                randomAccessFile = null;
            }
            if ((!file.exists() || !file.isDirectory()) && !file.mkdirs()) {
                Log.w(this.b, "Create mipushlog directory fail.");
                return;
            }
            File file2 = new File(file, "log.lock");
            if (!file2.exists() || file2.isDirectory()) {
                file2.createNewFile();
            }
            randomAccessFile = new RandomAccessFile(file2, "rw");
            try {
                fileLockLock = randomAccessFile.getChannel().lock();
                try {
                    BufferedWriter bufferedWriter2 = new BufferedWriter(new OutputStreamWriter(new FileOutputStream(new File(file, "log1.txt"), true)));
                    while (!f236a.isEmpty()) {
                        try {
                            Pair<String, Throwable> pairRemove = f236a.remove(0);
                            String str = (String) pairRemove.first;
                            if (pairRemove.second != null) {
                                str = (str + "\n") + Log.getStackTraceString((Throwable) pairRemove.second);
                            }
                            bufferedWriter2.write(str + "\n");
                        } catch (Exception e3) {
                            e = e3;
                            bufferedWriter = bufferedWriter2;
                            Log.e(this.b, "", e);
                            if (bufferedWriter != null) {
                                try {
                                    bufferedWriter.close();
                                } catch (IOException e4) {
                                    Log.e(this.b, "", e4);
                                }
                            }
                            if (fileLockLock != null && fileLockLock.isValid()) {
                                try {
                                    fileLockLock.release();
                                } catch (IOException e5) {
                                    Log.e(this.b, "", e5);
                                }
                            }
                            if (randomAccessFile == null) {
                                return;
                            } else {
                                randomAccessFile.close();
                            }
                        } catch (Throwable th2) {
                            th = th2;
                            bufferedWriter = bufferedWriter2;
                            if (bufferedWriter != null) {
                                try {
                                    bufferedWriter.close();
                                } catch (IOException e6) {
                                    Log.e(this.b, "", e6);
                                }
                            }
                            if (fileLockLock != null && fileLockLock.isValid()) {
                                try {
                                    fileLockLock.release();
                                } catch (IOException e7) {
                                    Log.e(this.b, "", e7);
                                }
                            }
                            if (randomAccessFile == null) {
                                throw th;
                            }
                            try {
                                randomAccessFile.close();
                                throw th;
                            } catch (IOException e8) {
                                Log.e(this.b, "", e8);
                                throw th;
                            }
                        }
                    }
                    bufferedWriter2.flush();
                    bufferedWriter2.close();
                    File file3 = new File(file, "log1.txt");
                    if (file3.length() >= 1048576) {
                        File file4 = new File(file, "log0.txt");
                        if (file4.exists() && file4.isFile()) {
                            file4.delete();
                        }
                        file3.renameTo(file4);
                    }
                    if (0 != 0) {
                        try {
                            bufferedWriter.close();
                        } catch (IOException e9) {
                            Log.e(this.b, "", e9);
                        }
                    }
                    if (fileLockLock != null && fileLockLock.isValid()) {
                        try {
                            fileLockLock.release();
                        } catch (IOException e10) {
                            Log.e(this.b, "", e10);
                        }
                    }
                    randomAccessFile.close();
                } catch (Exception e11) {
                    e = e11;
                }
            } catch (Exception e12) {
                e = e12;
                fileLockLock = null;
            } catch (Throwable th3) {
                th = th3;
                fileLockLock = null;
            }
        } catch (Throwable th4) {
            th = th4;
        }
    }

    @Override // com.xiaomi.channel.commonutils.logger.LoggerInterface
    public final void log(String str) {
        log(str, null);
    }

    @Override // com.xiaomi.channel.commonutils.logger.LoggerInterface
    public final void log(String str, Throwable th) {
        this.f238a.post(new dk(this, str, th));
    }

    @Override // com.xiaomi.channel.commonutils.logger.LoggerInterface
    public final void setTag(String str) {
        this.b = str;
    }
}
