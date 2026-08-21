package com.huawei.hms.availableupdate;

import com.huawei.hms.support.log.HMSLog;
import com.huawei.hms.utils.IOUtils;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.OutputStream;
import java.io.RandomAccessFile;

public class c extends OutputStream {
    public RandomAccessFile a;

    public c(File file, int i) {
        try {
            RandomAccessFile randomAccessFile = new RandomAccessFile(file, "rwd");
            this.a = randomAccessFile;
            randomAccessFile.setLength(i);
        } catch (FileNotFoundException unused) {
            HMSLog.e("RandomFileOutputStream", "create  file stream failed");
        } catch (IOException unused2) {
            IOUtils.closeQuietly(this.a);
            HMSLog.e("RandomFileOutputStream", "create  file stream failed");
        }
    }

    public void a(long j) throws IOException {
        RandomAccessFile randomAccessFile = this.a;
        if (randomAccessFile != null) {
            randomAccessFile.seek(j);
        }
    }

    @Override
    public void close() throws IOException {
        RandomAccessFile randomAccessFile = this.a;
        if (randomAccessFile != null) {
            randomAccessFile.close();
        }
    }

    @Override
    public void write(byte[] bArr, int i, int i2) throws IOException {
        RandomAccessFile randomAccessFile = this.a;
        if (randomAccessFile != null) {
            randomAccessFile.write(bArr, i, i2);
        }
    }

    @Override
    public void write(int i) throws IOException {
        write(new byte[]{(byte) i}, 0, 1);
    }
}
