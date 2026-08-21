package com.xiaomi.clientreport.processor;

import android.content.Context;
import android.text.TextUtils;
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
import java.io.File;
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

/* JADX INFO: loaded from: classes4.dex */
public class a implements IEventProcessor {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected Context f7971a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private HashMap<String, ArrayList<com.xiaomi.clientreport.data.a>> f44a;

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
        To view partially-correct add '--show-bad-code' argument
    */
    private java.util.List<java.lang.String> a(java.lang.String r9) throws java.lang.Throwable {
        /*
            r8 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1 = 4
            byte[] r2 = new byte[r1]
            byte[] r3 = new byte[r1]
            r4 = 0
            java.io.FileInputStream r5 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72
            java.io.File r6 = new java.io.File     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72
            r6.<init>(r9)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72
            r5.<init>(r6)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72
        L15:
            int r9 = r5.read(r2)     // Catch: java.lang.Throwable -> L6a java.lang.Exception -> L6d
            r4 = -1
            if (r9 != r4) goto L1d
            goto L66
        L1d:
            java.lang.String r6 = "eventData read from cache file failed because magicNumber error"
            if (r9 == r1) goto L25
        L21:
            com.xiaomi.channel.commonutils.logger.b.d(r6)     // Catch: java.lang.Throwable -> L6a java.lang.Exception -> L6d
            goto L66
        L25:
            int r9 = com.xiaomi.push.af.a(r2)     // Catch: java.lang.Throwable -> L6a java.lang.Exception -> L6d
            r7 = -573785174(0xffffffffddccbbaa, float:-1.8440715E18)
            if (r9 == r7) goto L2f
            goto L21
        L2f:
            int r9 = r5.read(r3)     // Catch: java.lang.Throwable -> L6a java.lang.Exception -> L6d
            if (r9 != r4) goto L36
            goto L66
        L36:
            if (r9 == r1) goto L3e
            java.lang.String r9 = "eventData read from cache file failed cause lengthBuffer error"
        L3a:
            com.xiaomi.channel.commonutils.logger.b.d(r9)     // Catch: java.lang.Throwable -> L6a java.lang.Exception -> L6d
            goto L66
        L3e:
            int r9 = com.xiaomi.push.af.a(r3)     // Catch: java.lang.Throwable -> L6a java.lang.Exception -> L6d
            r4 = 1
            if (r9 < r4) goto L63
            r4 = 4096(0x1000, float:5.74E-42)
            if (r9 <= r4) goto L4a
            goto L63
        L4a:
            byte[] r4 = new byte[r9]     // Catch: java.lang.Throwable -> L6a java.lang.Exception -> L6d
            int r6 = r5.read(r4)     // Catch: java.lang.Throwable -> L6a java.lang.Exception -> L6d
            if (r6 == r9) goto L55
            java.lang.String r9 = "eventData read from cache file failed cause buffer size not equal length"
            goto L3a
        L55:
            java.lang.String r9 = r8.bytesToString(r4)     // Catch: java.lang.Throwable -> L6a java.lang.Exception -> L6d
            boolean r4 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L6a java.lang.Exception -> L6d
            if (r4 != 0) goto L15
            r0.add(r9)     // Catch: java.lang.Throwable -> L6a java.lang.Exception -> L6d
            goto L15
        L63:
            java.lang.String r9 = "eventData read from cache file failed cause lengthBuffer < 1 || lengthBuffer > 4K"
            goto L3a
        L66:
            com.xiaomi.push.ab.a(r5)
            goto L79
        L6a:
            r9 = move-exception
            r4 = r5
            goto L7a
        L6d:
            r9 = move-exception
            r4 = r5
            goto L73
        L70:
            r9 = move-exception
            goto L7a
        L72:
            r9 = move-exception
        L73:
            com.xiaomi.channel.commonutils.logger.b.a(r9)     // Catch: java.lang.Throwable -> L70
            com.xiaomi.push.ab.a(r4)
        L79:
            return r0
        L7a:
            com.xiaomi.push.ab.a(r4)
            throw r9
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.clientreport.processor.a.a(java.lang.String):java.util.List");
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
        EventClientReport eventClientReportA = com.xiaomi.clientreport.manager.a.a(this.f7971a).a(ErrorCode.SERVER_JSON_PARSE_ERROR, "24:" + str + Constants.ACCEPT_TIME_SEPARATOR_SP + str2);
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
            ab.m115a(file);
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
                    if (!bt.m164a(this.f7971a, strB)) {
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
        File externalFilesDir = this.f7971a.getExternalFilesDir("event");
        String strA = a(aVar);
        if (externalFilesDir == null) {
            return null;
        }
        String str = externalFilesDir.getAbsolutePath() + File.separator + strA;
        for (int i = 0; i < 100; i++) {
            String str2 = str + i;
            if (bt.m164a(this.f7971a, str2)) {
                return str2;
            }
        }
        return null;
    }

    /* JADX WARN: Removed duplicated region for block: B:20:0x0036 A[PHI: r3 r4 r5
      0x0036: PHI (r3v10 java.nio.channels.FileLock) = (r3v3 java.nio.channels.FileLock), (r3v1 java.nio.channels.FileLock), (r3v1 java.nio.channels.FileLock) binds: [B:65:0x0108, B:32:0x0091, B:19:0x0034] A[DONT_GENERATE, DONT_INLINE]
      0x0036: PHI (r4v14 java.io.RandomAccessFile) = (r4v3 java.io.RandomAccessFile), (r4v1 java.io.RandomAccessFile), (r4v1 java.io.RandomAccessFile) binds: [B:65:0x0108, B:32:0x0091, B:19:0x0034] A[DONT_GENERATE, DONT_INLINE]
      0x0036: PHI (r5v9 java.io.File) = (r5v3 java.io.File), (r5v1 java.io.File), (r5v1 java.io.File) binds: [B:65:0x0108, B:32:0x0091, B:19:0x0034] A[DONT_GENERATE, DONT_INLINE]] */
    @Override // com.xiaomi.clientreport.processor.c
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void a() throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 298
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.clientreport.processor.a.a():void");
    }

    public void a(Context context) {
        this.f7971a = context;
    }

    @Override // com.xiaomi.clientreport.processor.d
    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void mo51a(com.xiaomi.clientreport.data.a aVar) {
        if ((aVar instanceof EventClientReport) && this.f44a != null) {
            EventClientReport eventClientReport = (EventClientReport) aVar;
            String strA = a((com.xiaomi.clientreport.data.a) eventClientReport);
            ArrayList<com.xiaomi.clientreport.data.a> arrayList = this.f44a.get(strA);
            if (arrayList == null) {
                arrayList = new ArrayList<>();
            }
            arrayList.add(eventClientReport);
            this.f44a.put(strA, arrayList);
        }
    }

    public void a(List<String> list) {
        bt.a(this.f7971a, list);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m52a(com.xiaomi.clientreport.data.a[] aVarArr) throws Throwable {
        if (aVarArr == null || aVarArr.length == 0 || aVarArr[0] == null) {
            com.xiaomi.channel.commonutils.logger.b.m43a("event data write to cache file failed because data null");
            return;
        }
        do {
            aVarArr = a(aVarArr);
            if (aVarArr == null || aVarArr.length <= 0) {
                return;
            }
        } while (aVarArr[0] != null);
    }

    @Override // com.xiaomi.clientreport.processor.d
    public void b() throws Throwable {
        HashMap<String, ArrayList<com.xiaomi.clientreport.data.a>> map = this.f44a;
        if (map == null) {
            return;
        }
        if (map.size() > 0) {
            Iterator<String> it = this.f44a.keySet().iterator();
            while (it.hasNext()) {
                ArrayList<com.xiaomi.clientreport.data.a> arrayList = this.f44a.get(it.next());
                if (arrayList != null && arrayList.size() > 0) {
                    com.xiaomi.clientreport.data.a[] aVarArr = new com.xiaomi.clientreport.data.a[arrayList.size()];
                    arrayList.toArray(aVarArr);
                    m52a(aVarArr);
                }
            }
        }
        this.f44a.clear();
    }

    @Override // com.xiaomi.clientreport.processor.IEventProcessor
    public String bytesToString(byte[] bArr) {
        byte[] bArrA;
        if (bArr != null && bArr.length >= 1) {
            if (!com.xiaomi.clientreport.manager.a.a(this.f7971a).m48a().isEventEncrypted()) {
                return bp.b(bArr);
            }
            String strA = bt.a(this.f7971a);
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

    @Override // com.xiaomi.clientreport.processor.IEventProcessor
    public void setEventMap(HashMap<String, ArrayList<com.xiaomi.clientreport.data.a>> map) {
        this.f44a = map;
    }

    @Override // com.xiaomi.clientreport.processor.IEventProcessor
    public byte[] stringToBytes(String str) {
        byte[] bArrA;
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        if (!com.xiaomi.clientreport.manager.a.a(this.f7971a).m48a().isEventEncrypted()) {
            return bp.m160a(str);
        }
        String strA = bt.a(this.f7971a);
        byte[] bArrM160a = bp.m160a(str);
        if (!TextUtils.isEmpty(strA) && bArrM160a != null && bArrM160a.length > 1 && (bArrA = bt.a(strA)) != null) {
            try {
                if (bArrA.length > 1) {
                    return i.b(bArrA, Base64.encode(bArrM160a, 2));
                }
            } catch (Exception e) {
                com.xiaomi.channel.commonutils.logger.b.a(e);
            }
        }
        return null;
    }
}
