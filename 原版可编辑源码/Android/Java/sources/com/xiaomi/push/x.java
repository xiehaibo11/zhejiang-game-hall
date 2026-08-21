package com.xiaomi.push;

import android.content.Context;
import java.io.File;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.nio.channels.FileLock;
import java.util.Collections;
import java.util.HashSet;
import java.util.Set;

public final class x {
    private static final Set<String> a = Collections.synchronizedSet(new HashSet());
    private Context a;
    private RandomAccessFile a;
    private String a;
    private FileLock a;

    private x(Context context) {
        this.a = context;
    }

    public static x a(Context context, File file) throws IOException {
        com.xiaomi.channel.commonutils.logger.b.c("Locking: " + file.getAbsolutePath());
        String str = file.getAbsolutePath() + ".LOCK";
        File file2 = new File(str);
        if (!file2.exists()) {
            file2.getParentFile().mkdirs();
            file2.createNewFile();
        }
        if (!a.add(str)) {
            throw new IOException("abtain lock failure");
        }
        x xVar = new x(context);
        xVar.a = str;
        try {
            RandomAccessFile randomAccessFile = new RandomAccessFile(file2, "rw");
            xVar.a = randomAccessFile;
            xVar.a = randomAccessFile.getChannel().lock();
            com.xiaomi.channel.commonutils.logger.b.c("Locked: " + str + " :" + xVar.a);
            return xVar;
        } finally {
            if (xVar.a == null) {
                RandomAccessFile randomAccessFile2 = xVar.a;
                if (randomAccessFile2 != null) {
                    ab.a(randomAccessFile2);
                }
                a.remove(xVar.a);
            }
        }
    }

    public void a() {
        com.xiaomi.channel.commonutils.logger.b.c("unLock: " + this.a);
        FileLock fileLock = this.a;
        if (fileLock != null && fileLock.isValid()) {
            try {
                this.a.release();
            } catch (IOException unused) {
            }
            this.a = null;
        }
        RandomAccessFile randomAccessFile = this.a;
        if (randomAccessFile != null) {
            ab.a(randomAccessFile);
        }
        a.remove(this.a);
    }
}
