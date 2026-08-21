package com.xiaomi.push;

import android.content.Context;
import java.io.File;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.nio.channels.FileLock;
import java.util.Collections;
import java.util.HashSet;
import java.util.Set;

/* JADX INFO: loaded from: classes4.dex */
public final class x {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Set<String> f8399a = Collections.synchronizedSet(new HashSet());

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Context f1028a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private RandomAccessFile f1029a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private String f1030a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private FileLock f1031a;

    private x(Context context) {
        this.f1028a = context;
    }

    public static x a(Context context, File file) throws IOException {
        com.xiaomi.channel.commonutils.logger.b.c("Locking: " + file.getAbsolutePath());
        String str = file.getAbsolutePath() + ".LOCK";
        File file2 = new File(str);
        if (!file2.exists()) {
            file2.getParentFile().mkdirs();
            file2.createNewFile();
        }
        if (!f8399a.add(str)) {
            throw new IOException("abtain lock failure");
        }
        x xVar = new x(context);
        xVar.f1030a = str;
        try {
            RandomAccessFile randomAccessFile = new RandomAccessFile(file2, "rw");
            xVar.f1029a = randomAccessFile;
            xVar.f1031a = randomAccessFile.getChannel().lock();
            com.xiaomi.channel.commonutils.logger.b.c("Locked: " + str + " :" + xVar.f1031a);
            return xVar;
        } finally {
            if (xVar.f1031a == null) {
                RandomAccessFile randomAccessFile2 = xVar.f1029a;
                if (randomAccessFile2 != null) {
                    ab.a(randomAccessFile2);
                }
                f8399a.remove(xVar.f1030a);
            }
        }
    }

    public void a() {
        com.xiaomi.channel.commonutils.logger.b.c("unLock: " + this.f1031a);
        FileLock fileLock = this.f1031a;
        if (fileLock != null && fileLock.isValid()) {
            try {
                this.f1031a.release();
            } catch (IOException unused) {
            }
            this.f1031a = null;
        }
        RandomAccessFile randomAccessFile = this.f1029a;
        if (randomAccessFile != null) {
            ab.a(randomAccessFile);
        }
        f8399a.remove(this.f1030a);
    }
}
