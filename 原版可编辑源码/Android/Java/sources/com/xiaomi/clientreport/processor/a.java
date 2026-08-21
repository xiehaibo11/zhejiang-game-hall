package com.xiaomi.clientreport.processor;

import android.content.Context;
import android.text.TextUtils;
import android.text.format.Formatter;
import android.util.Base64;
import com.qq.e.comm.constants.ErrorCode;
import com.xiaomi.clientreport.data.EventClientReport;
import com.xiaomi.mipush.sdk.Constants;
import com.xiaomi.push.ab;
import com.xiaomi.push.af;
import com.xiaomi.push.bp;
import com.xiaomi.push.bt;
import com.xiaomi.push.i;
import java.io.BufferedOutputStream;
import java.io.Closeable;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.nio.channels.FileLock;
import java.security.InvalidAlgorithmParameterException;
import java.security.InvalidKeyException;
import java.security.NoSuchAlgorithmException;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import javax.crypto.BadPaddingException;
import javax.crypto.IllegalBlockSizeException;
import javax.crypto.NoSuchPaddingException;

public class a implements IEventProcessor {
    protected Context a;
    private HashMap<String, ArrayList<com.xiaomi.clientreport.data.a>> a;

    public a(Context context) {
        a(context);
    }

    public static String a(com.xiaomi.clientreport.data.a aVar) {
        return String.valueOf(aVar.production);
    }

    /* JADX WARN: Code restructure failed: missing block: B:10:0x0021, code lost:
    
        com.xiaomi.channel.commonutils.logger.b.d("eventData read from cache file failed because magicNumber error");
     */
    /* JADX WARN: Code restructure failed: missing block: B:31:0x0063, code lost:
    
        r9 = "eventData read from cache file failed cause lengthBuffer < 1 || lengthBuffer > 4K";
        r4 = r4;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r4v0 */
    /* JADX WARN: Type inference failed for: r4v1 */
    /* JADX WARN: Type inference failed for: r4v16 */
    /* JADX WARN: Type inference failed for: r4v17 */
    /* JADX WARN: Type inference failed for: r4v18 */
    /* JADX WARN: Type inference failed for: r4v19 */
    /* JADX WARN: Type inference failed for: r4v2, types: [java.io.Closeable] */
    /* JADX WARN: Type inference failed for: r4v20 */
    /* JADX WARN: Type inference failed for: r4v21 */
    /* JADX WARN: Type inference failed for: r4v22 */
    /* JADX WARN: Type inference failed for: r4v4 */
    /* JADX WARN: Type inference failed for: r4v5 */
    /* JADX WARN: Type inference failed for: r4v7 */
    /* JADX WARN: Type inference failed for: r4v8 */
    /* JADX WARN: Type inference failed for: r4v9 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private List<String> a(String str) throws Throwable {
        ?? r4;
        String str2;
        ArrayList arrayList = new ArrayList();
        byte[] bArr = new byte[4];
        byte[] bArr2 = new byte[4];
        ?? r42 = 0;
        FileInputStream fileInputStream = null;
        try {
            try {
                FileInputStream fileInputStream2 = new FileInputStream(new File(str));
                while (true) {
                    try {
                        int i = fileInputStream2.read(bArr);
                        r4 = -1;
                        r4 = -1;
                        r4 = -1;
                        r4 = -1;
                        if (i == -1) {
                            break;
                        }
                        if (i == 4 && af.a(bArr) == -573785174) {
                            int i2 = fileInputStream2.read(bArr2);
                            if (i2 == -1) {
                                break;
                            }
                            if (i2 == 4) {
                                int iA = af.a(bArr2);
                                char c = 1;
                                if (iA < 1) {
                                    break;
                                }
                                c = 4096;
                                if (iA > 4096) {
                                    break;
                                }
                                byte[] bArr3 = new byte[iA];
                                if (fileInputStream2.read(bArr3) != iA) {
                                    str2 = "eventData read from cache file failed cause buffer size not equal length";
                                    r4 = bArr3;
                                    break;
                                }
                                String strBytesToString = bytesToString(bArr3);
                                if (!TextUtils.isEmpty(strBytesToString)) {
                                    arrayList.add(strBytesToString);
                                }
                            } else {
                                str2 = "eventData read from cache file failed cause lengthBuffer error";
                                break;
                            }
                        }
                    } catch (Exception e) {
                        e = e;
                        fileInputStream = fileInputStream2;
                        com.xiaomi.channel.commonutils.logger.b.a(e);
                        ab.a(fileInputStream);
                        r42 = fileInputStream;
                    } catch (Throwable th) {
                        th = th;
                        r42 = fileInputStream2;
                        ab.a((Closeable) r42);
                        throw th;
                    }
                }
                com.xiaomi.channel.commonutils.logger.b.d(str2);
                ab.a(fileInputStream2);
                r42 = r4;
            } catch (Throwable th2) {
                th = th2;
            }
        } catch (Exception e2) {
            e = e2;
        }
        return arrayList;
    }

    private void a(RandomAccessFile randomAccessFile, FileLock fileLock) {
        if (fileLock != null && fileLock.isValid()) {
            try {
                fileLock.release();
            } catch (IOException e) {
                com.xiaomi.channel.commonutils.logger.b.a(e);
            }
        }
        ab.a(randomAccessFile);
    }

    private void a(String str, String str2) {
        EventClientReport eventClientReportA = com.xiaomi.clientreport.manager.a.a(this.a).a(ErrorCode.SERVER_JSON_PARSE_ERROR, "24:" + str + Constants.ACCEPT_TIME_SEPARATOR_SP + str2);
        ArrayList arrayList = new ArrayList();
        arrayList.add(eventClientReportA.toJsonString());
        a(arrayList);
    }

    private com.xiaomi.clientreport.data.a[] a(com.xiaomi.clientreport.data.a[] aVarArr) throws Throwable {
        FileLock fileLockLock;
        RandomAccessFile randomAccessFile;
        BufferedOutputStream bufferedOutputStream;
        int i;
        int i2;
        String strB = b(aVarArr[0]);
        BufferedOutputStream bufferedOutputStream2 = null;
        if (TextUtils.isEmpty(strB)) {
            return null;
        }
        try {
            File file = new File(strB + ".lock");
            ab.a(file);
            randomAccessFile = new RandomAccessFile(file, "rw");
            try {
                fileLockLock = randomAccessFile.getChannel().lock();
            } catch (Exception e) {
                e = e;
                fileLockLock = null;
                bufferedOutputStream = null;
            } catch (Throwable th) {
                th = th;
                fileLockLock = null;
            }
        } catch (Exception e2) {
            e = e2;
            fileLockLock = null;
            randomAccessFile = null;
            bufferedOutputStream = null;
        } catch (Throwable th2) {
            th = th2;
            fileLockLock = null;
            randomAccessFile = null;
        }
        try {
            bufferedOutputStream = new BufferedOutputStream(new FileOutputStream(new File(strB), true));
            try {
                try {
                    i2 = 0;
                } catch (Exception e3) {
                    e = e3;
                    com.xiaomi.channel.commonutils.logger.b.a("event data write to cache file failed cause exception", e);
                }
            } catch (Throwable th3) {
                th = th3;
                bufferedOutputStream2 = bufferedOutputStream;
                ab.a(bufferedOutputStream2);
                a(randomAccessFile, fileLockLock);
                throw th;
            }
        } catch (Exception e4) {
            e = e4;
            bufferedOutputStream = null;
        } catch (Throwable th4) {
            th = th4;
            ab.a(bufferedOutputStream2);
            a(randomAccessFile, fileLockLock);
            throw th;
        }
        for (com.xiaomi.clientreport.data.a aVar : aVarArr) {
            if (aVar != null) {
                byte[] bArrStringToBytes = stringToBytes(aVar.toJsonString());
                if (bArrStringToBytes != null && bArrStringToBytes.length >= 1 && bArrStringToBytes.length <= 4096) {
                    if (!bt.a(this.a, strB)) {
                        int length = aVarArr.length - i2;
                        com.xiaomi.clientreport.data.a[] aVarArr2 = new com.xiaomi.clientreport.data.a[length];
                        System.arraycopy(aVarArr, i2, aVarArr2, 0, length);
                        ab.a(bufferedOutputStream);
                        a(randomAccessFile, fileLockLock);
                        return aVarArr2;
                    }
                    bufferedOutputStream.write(af.a(-573785174));
                    bufferedOutputStream.write(af.a(bArrStringToBytes.length));
                    bufferedOutputStream.write(bArrStringToBytes);
                    bufferedOutputStream.flush();
                    i2++;
                    ab.a(bufferedOutputStream);
                    a(randomAccessFile, fileLockLock);
                    return null;
                }
                com.xiaomi.channel.commonutils.logger.b.d("event data throw a invalid item ");
            }
        }
        ab.a(bufferedOutputStream);
        a(randomAccessFile, fileLockLock);
        return null;
    }

    private String b(com.xiaomi.clientreport.data.a aVar) {
        File externalFilesDir = this.a.getExternalFilesDir("event");
        String strA = a(aVar);
        if (externalFilesDir == null) {
            return null;
        }
        String str = externalFilesDir.getAbsolutePath() + File.separator + strA;
        for (int i = 0; i < 100; i++) {
            String str2 = str + i;
            if (bt.a(this.a, str2)) {
                return str2;
            }
        }
        return null;
    }

    /* JADX WARN: Removed duplicated region for block: B:20:0x0036 A[PHI: r3 r4 r5
      0x0036: PHI (r3v10 java.nio.channels.FileLock) = (r3v3 java.nio.channels.FileLock), (r3v1 java.nio.channels.FileLock), (r3v1 java.nio.channels.FileLock) binds: [B:65:0x0108, B:32:0x0091, B:19:0x0034] A[DONT_GENERATE, DONT_INLINE]
      0x0036: PHI (r4v14 java.io.RandomAccessFile) = (r4v3 java.io.RandomAccessFile), (r4v1 java.io.RandomAccessFile), (r4v1 java.io.RandomAccessFile) binds: [B:65:0x0108, B:32:0x0091, B:19:0x0034] A[DONT_GENERATE, DONT_INLINE]
      0x0036: PHI (r5v9 java.io.File) = (r5v3 java.io.File), (r5v1 java.io.File), (r5v1 java.io.File) binds: [B:65:0x0108, B:32:0x0091, B:19:0x0034] A[DONT_GENERATE, DONT_INLINE]] */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void a() throws Throwable {
        bt.a(this.a, "event", "eventUploading");
        File[] fileArrA = bt.a(this.a, "eventUploading");
        if (fileArrA == null || fileArrA.length <= 0) {
            return;
        }
        FileLock fileLockLock = null;
        RandomAccessFile randomAccessFile = null;
        File file = null;
        for (File file2 : fileArrA) {
            if (file2 == null) {
                if (fileLockLock != null && fileLockLock.isValid()) {
                    try {
                        fileLockLock.release();
                    } catch (IOException e) {
                        com.xiaomi.channel.commonutils.logger.b.a(e);
                    }
                }
                ab.a(randomAccessFile);
                if (file != null) {
                    file.delete();
                }
            } else {
                try {
                    try {
                        if (file2.length() > 5242880) {
                            com.xiaomi.channel.commonutils.logger.b.d("eventData read from cache file failed because " + file2.getName() + " is too big, length " + file2.length());
                            a(file2.getName(), Formatter.formatFileSize(this.a, file2.length()));
                            file2.delete();
                            if (fileLockLock != null && fileLockLock.isValid()) {
                                try {
                                    fileLockLock.release();
                                } catch (IOException e2) {
                                    com.xiaomi.channel.commonutils.logger.b.a(e2);
                                }
                            }
                            ab.a(randomAccessFile);
                            if (file != null) {
                            }
                        } else {
                            String absolutePath = file2.getAbsolutePath();
                            File file3 = new File(absolutePath + ".lock");
                            try {
                                ab.a(file3);
                                RandomAccessFile randomAccessFile2 = new RandomAccessFile(file3, "rw");
                                try {
                                    fileLockLock = randomAccessFile2.getChannel().lock();
                                    a(a(absolutePath));
                                    file2.delete();
                                    if (fileLockLock != null && fileLockLock.isValid()) {
                                        try {
                                            fileLockLock.release();
                                        } catch (IOException e3) {
                                            com.xiaomi.channel.commonutils.logger.b.a(e3);
                                        }
                                    }
                                    ab.a(randomAccessFile2);
                                    file3.delete();
                                    randomAccessFile = randomAccessFile2;
                                    file = file3;
                                } catch (Exception e4) {
                                    e = e4;
                                    randomAccessFile = randomAccessFile2;
                                    file = file3;
                                    com.xiaomi.channel.commonutils.logger.b.a(e);
                                    if (fileLockLock != null && fileLockLock.isValid()) {
                                        try {
                                            fileLockLock.release();
                                        } catch (IOException e5) {
                                            com.xiaomi.channel.commonutils.logger.b.a(e5);
                                        }
                                    }
                                    ab.a(randomAccessFile);
                                    if (file != null) {
                                    }
                                } catch (Throwable th) {
                                    th = th;
                                    randomAccessFile = randomAccessFile2;
                                    file = file3;
                                    if (fileLockLock != null && fileLockLock.isValid()) {
                                        try {
                                            fileLockLock.release();
                                        } catch (IOException e6) {
                                            com.xiaomi.channel.commonutils.logger.b.a(e6);
                                        }
                                    }
                                    ab.a(randomAccessFile);
                                    if (file == null) {
                                        throw th;
                                    }
                                    file.delete();
                                    throw th;
                                }
                            } catch (Exception e7) {
                                e = e7;
                            } catch (Throwable th2) {
                                th = th2;
                            }
                        }
                    } catch (Exception e8) {
                        e = e8;
                    }
                } catch (Throwable th3) {
                    th = th3;
                }
            }
        }
    }

    public void a(Context context) {
        this.a = context;
    }

    @Override
    public void a(com.xiaomi.clientreport.data.a aVar) {
        if ((aVar instanceof EventClientReport) && this.a != null) {
            EventClientReport eventClientReport = (EventClientReport) aVar;
            String strA = a((com.xiaomi.clientreport.data.a) eventClientReport);
            ArrayList<com.xiaomi.clientreport.data.a> arrayList = this.a.get(strA);
            if (arrayList == null) {
                arrayList = new ArrayList<>();
            }
            arrayList.add(eventClientReport);
            this.a.put(strA, arrayList);
        }
    }

    public void a(List<String> list) {
        bt.a(this.a, list);
    }

    public void a(com.xiaomi.clientreport.data.a[] aVarArr) throws Throwable {
        if (aVarArr == null || aVarArr.length == 0 || aVarArr[0] == null) {
            com.xiaomi.channel.commonutils.logger.b.a("event data write to cache file failed because data null");
            return;
        }
        do {
            aVarArr = a(aVarArr);
            if (aVarArr == null || aVarArr.length <= 0) {
                return;
            }
        } while (aVarArr[0] != null);
    }

    @Override
    public void b() throws Throwable {
        HashMap<String, ArrayList<com.xiaomi.clientreport.data.a>> map = this.a;
        if (map == null) {
            return;
        }
        if (map.size() > 0) {
            Iterator<String> it = this.a.keySet().iterator();
            while (it.hasNext()) {
                ArrayList<com.xiaomi.clientreport.data.a> arrayList = this.a.get(it.next());
                if (arrayList != null && arrayList.size() > 0) {
                    com.xiaomi.clientreport.data.a[] aVarArr = new com.xiaomi.clientreport.data.a[arrayList.size()];
                    arrayList.toArray(aVarArr);
                    a(aVarArr);
                }
            }
        }
        this.a.clear();
    }

    @Override
    public String bytesToString(byte[] bArr) {
        byte[] bArrA;
        if (bArr != null && bArr.length >= 1) {
            if (!com.xiaomi.clientreport.manager.a.a(this.a).a().isEventEncrypted()) {
                return bp.b(bArr);
            }
            String strA = bt.a(this.a);
            if (!TextUtils.isEmpty(strA) && (bArrA = bt.a(strA)) != null && bArrA.length > 0) {
                try {
                    return bp.b(Base64.decode(i.a(bArrA, bArr), 2));
                } catch (InvalidAlgorithmParameterException | InvalidKeyException | NoSuchAlgorithmException | BadPaddingException | IllegalBlockSizeException | NoSuchPaddingException e) {
                    com.xiaomi.channel.commonutils.logger.b.a(e);
                }
            }
        }
        return null;
    }

    @Override
    public void setEventMap(HashMap<String, ArrayList<com.xiaomi.clientreport.data.a>> map) {
        this.a = map;
    }

    @Override
    public byte[] stringToBytes(String str) {
        byte[] bArrA;
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        if (!com.xiaomi.clientreport.manager.a.a(this.a).a().isEventEncrypted()) {
            return bp.a(str);
        }
        String strA = bt.a(this.a);
        byte[] bArrA2 = bp.a(str);
        if (!TextUtils.isEmpty(strA) && bArrA2 != null && bArrA2.length > 1 && (bArrA = bt.a(strA)) != null) {
            try {
                if (bArrA.length > 1) {
                    return i.b(bArrA, Base64.encode(bArrA2, 2));
                }
            } catch (Exception e) {
                com.xiaomi.channel.commonutils.logger.b.a(e);
            }
        }
        return null;
    }
}
