package com.kwad.sdk.utils.a;

import android.text.TextUtils;
import com.kuaishou.weapon.p0.bh;
import com.kwad.sdk.utils.a.a;
import java.io.File;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.nio.ByteOrder;
import java.nio.MappedByteBuffer;
import java.nio.channels.FileChannel;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.Executor;
import kotlin.UByte;
import kotlin.jvm.internal.ByteCompanionObject;

/* JADX INFO: loaded from: classes2.dex */
public final class c {
    private static final int PAGE_SIZE;
    private static final int[] aKH = {0, 1, 4, 4, 8, 8};
    private static final byte[] aKI = new byte[0];
    private static final int aKJ;
    private static final int aKK;
    private static final int aKL;
    private final String Tt;
    private final Map<String, b> aKM;
    private FileChannel aKO;
    private FileChannel aKP;
    private RandomAccessFile aKQ;
    private RandomAccessFile aKR;
    private MappedByteBuffer aKS;
    private MappedByteBuffer aKT;
    private com.kwad.sdk.utils.a.b aKU;
    private int aKV;
    private long aKW;
    private int aKZ;
    private int aLa;
    private int aLb;
    private boolean aLc;
    private String aLd;
    private int aLe;
    private int aLg;
    private final String name;
    private final d aKN = com.kwad.sdk.utils.a.d.aLr;
    private final Map<String, a.b> aKX = new HashMap();
    private boolean aKY = false;
    private final ArrayList<e> aLf = new ArrayList<>();
    private boolean aLh = true;
    private final Executor aLi = new f();

    public static class a {
        static int aLk = 11;
        static final C0230c aLl = new C0230c(11);
        private final String Tt;
        private int aLg = 0;
        private b[] aLm;
        private final String name;

        public a(String str, String str2) {
            if (str == null || str.isEmpty()) {
                throw new IllegalArgumentException("path is empty");
            }
            if (str2 == null || str2.isEmpty()) {
                throw new IllegalArgumentException("name is empty");
            }
            if (!str.endsWith("/")) {
                str = str + '/';
            }
            this.Tt = str;
            this.name = str2;
        }

        public final c Kz() {
            String str = this.Tt + this.name;
            c cVarFX = C0230c.fX(str);
            if (cVarFX == null) {
                synchronized (a.class) {
                    cVarFX = C0230c.fX(str);
                    if (cVarFX == null) {
                        cVarFX = new c(this.Tt, this.name, this.aLm, this.aLg);
                        C0230c.b(str, cVarFX);
                    }
                }
            }
            Integer num = C0230c.aLq.get(str);
            if (num != null) {
                C0230c.aLq.put(str, Integer.valueOf(num.intValue() + 1));
            } else {
                C0230c.aLq.put(str, 1);
            }
            return cVarFX;
        }
    }

    public interface b<T> {
        String KA();

        T g(byte[] bArr, int i, int i2);

        byte[] o(T t);
    }

    /* JADX INFO: renamed from: com.kwad.sdk.utils.a.c$c, reason: collision with other inner class name */
    static class C0230c {
        private static Map<String, c> aLn;
        private static List<String> aLo;
        private static int aLp;
        public static Map<String, Integer> aLq;

        public C0230c(int i) {
            int size = getSize(i);
            aLn = new ConcurrentHashMap(size);
            aLq = new HashMap(size);
            aLo = new CopyOnWriteArrayList();
            aLp = i;
        }

        public static void b(String str, c cVar) {
            if (aLn == null) {
                aLn = new ConcurrentHashMap(getSize(aLp));
            }
            if (aLo == null) {
                aLo = new CopyOnWriteArrayList();
            }
            if (aLn.containsKey(str)) {
                aLo.remove(str);
            }
            aLo.add(str);
            aLn.put(str, cVar);
            if (aLn.size() > aLp) {
                Integer num = aLq.get(aLo.get(0));
                if (num != null && num.intValue() != 2) {
                    dq(aLp + 1);
                    return;
                }
                c cVar2 = aLn.get(aLo.get(0));
                if (cVar2 != null) {
                    cVar2.release();
                }
                aLn.remove(aLo.get(0));
                aLo.remove(0);
            }
        }

        private static void dq(int i) {
            com.kwad.sdk.utils.a.d.aLr.i("Ks_UnionKv", "reSize:" + i);
            aLp = i;
        }

        public static c fX(String str) {
            if (aLn == null) {
                aLn = new ConcurrentHashMap(getSize(aLp));
            }
            if (aLo == null) {
                aLo = new CopyOnWriteArrayList();
            }
            c cVar = aLn.get(str);
            if (cVar == null) {
                return null;
            }
            aLo.remove(str);
            aLo.add(str);
            return cVar;
        }

        private static int getSize(int i) {
            return (int) ((i / 0.75f) + 1.0f);
        }

        public static void remove(String str) {
            List<String> list = aLo;
            if (list != null) {
                list.remove(str);
            }
            Map<String, c> map = aLn;
            if (map != null) {
                map.remove(str);
            }
        }
    }

    public interface d {
        void a(String str, Exception exc);

        void e(String str, Throwable th);

        void i(String str, String str2);
    }

    static class e implements Comparable<e> {
        int end;
        int start;

        e(int i, int i2) {
            this.start = i;
            this.end = i2;
        }

        /* JADX INFO: Access modifiers changed from: private */
        @Override // java.lang.Comparable
        /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
        public int compareTo(e eVar) {
            return this.start - eVar.start;
        }
    }

    static {
        int iKD = h.KD();
        PAGE_SIZE = iKD;
        aKJ = iKD - 192;
        int iMax = Math.max(iKD << 1, 16384);
        aKK = iMax;
        aKL = iMax << 1;
    }

    c(String str, String str2, b[] bVarArr, int i) {
        this.Tt = str;
        this.name = str2;
        this.aLg = i;
        HashMap map = new HashMap();
        g gVar = g.aLz;
        map.put(gVar.KA(), gVar);
        if (bVarArr != null && bVarArr.length > 0) {
            for (b bVar : bVarArr) {
                String strKA = bVar.KA();
                if (map.containsKey(strKA)) {
                    fW("duplicate encoder tag:" + strKA);
                } else {
                    map.put(strKA, bVar);
                }
            }
        }
        this.aKM = map;
        synchronized (this.aKX) {
            com.kwad.sdk.utils.a.d.getExecutor().execute(new Runnable() { // from class: com.kwad.sdk.utils.a.c.1
                @Override // java.lang.Runnable
                public final void run() {
                    c.this.Kh();
                }
            });
            while (!this.aKY) {
                try {
                    this.aKX.wait();
                } catch (InterruptedException unused) {
                }
            }
        }
    }

    private int B(int i, int i2) {
        if (i2 > 536870912) {
            IllegalStateException illegalStateException = new IllegalStateException("data size out of limit");
            if (com.kwad.library.a.a.ml.booleanValue()) {
                throw illegalStateException;
            }
            r(illegalStateException);
        }
        int i3 = PAGE_SIZE;
        if (i2 <= i3) {
            return i3;
        }
        while (i < i2) {
            int i4 = aKK;
            i = i <= i4 ? i << 1 : i + i4;
        }
        return i;
    }

    private void C(int i, int i2) {
        this.aLe += i2 - i;
        ArrayList<e> arrayList = this.aLf;
        if (arrayList != null) {
            arrayList.add(new e(i, i2));
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public synchronized void Kh() {
        synchronized (this.aKX) {
            this.aKY = true;
            this.aKX.notify();
        }
        long jNanoTime = System.nanoTime();
        if (!Kk() && this.aLg == 0) {
            Ki();
        }
        if (this.aKU == null) {
            this.aKU = new com.kwad.sdk.utils.a.b(PAGE_SIZE);
        }
        if (this.aKN != null) {
            info("loading finish, data len:" + this.aKV + ", get keys:" + this.aKX.size() + ", use time:" + ((System.nanoTime() - jNanoTime) / 1000000) + " ms");
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:31:0x0112  */
    /* JADX WARN: Removed duplicated region for block: B:49:0x019d  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private void Ki() {
        /*
            Method dump skipped, instruction units count: 461
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.kwad.sdk.utils.a.c.Ki():void");
    }

    private boolean Kj() {
        com.kwad.sdk.utils.a.b bVar = new com.kwad.sdk.utils.a.b(this.aKV);
        MappedByteBuffer mappedByteBuffer = this.aKT;
        if (mappedByteBuffer != null) {
            mappedByteBuffer.rewind();
            this.aKT.get(bVar.aKG, 0, this.aKV);
        }
        com.kwad.sdk.utils.a.b bVar2 = this.aKU;
        if (bVar2 == null) {
            return true;
        }
        byte[] bArr = bVar2.aKG;
        byte[] bArr2 = bVar.aKG;
        for (int i = 0; i < this.aKV; i++) {
            if (bArr[i] != bArr2[i]) {
                return false;
            }
        }
        return true;
    }

    private boolean Kk() {
        File file = new File(this.Tt, this.name + ".kvc");
        File file2 = new File(this.Tt, this.name + bh.k);
        boolean z = true;
        try {
            if (!file.exists()) {
                file = file2.exists() ? file2 : null;
            }
            if (file != null) {
                if (!ac(file)) {
                    Ks();
                    Kp();
                } else if (this.aLg == 0) {
                    if (a(this.aKU)) {
                        info("recover from c file");
                        try {
                            Kp();
                            return true;
                        } catch (Exception e2) {
                            e = e2;
                            r(e);
                            return z;
                        }
                    }
                    this.aLg = 1;
                }
            } else if (this.aLg != 0) {
                File file3 = new File(this.Tt, this.name + ".kva");
                File file4 = new File(this.Tt, this.name + ".kvb");
                if (file3.exists() && file4.exists()) {
                    h(file3, file4);
                }
            }
            return false;
        } catch (Exception e3) {
            e = e3;
            z = false;
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:68:0x015f, code lost:
    
        throw new java.lang.Exception("parse dara failed");
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private int Kl() {
        /*
            Method dump skipped, instruction units count: 373
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.kwad.sdk.utils.a.c.Kl():int");
    }

    private void Km() {
        if (this.aLg == 0 || !this.aLh) {
            return;
        }
        Kn();
    }

    private boolean Kn() {
        int i = this.aLg;
        if (i == 1) {
            Executor executor = this.aLi;
            if (executor != null) {
                executor.execute(new Runnable() { // from class: com.kwad.sdk.utils.a.c.2
                    @Override // java.lang.Runnable
                    public final void run() {
                        c.this.Ko();
                    }
                });
            }
        } else if (i == 2) {
            return Ko();
        }
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Removed duplicated region for block: B:21:0x007b A[DONT_GENERATE] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public synchronized boolean Ko() {
        /*
            r6 = this;
            monitor-enter(r6)
            r0 = 0
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.lang.String r2 = r6.Tt     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            r3.<init>()     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.lang.String r4 = r6.name     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            r3.append(r4)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.lang.String r4 = ".tmp"
            r3.append(r4)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            boolean r2 = com.kwad.sdk.utils.a.h.ad(r1)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            if (r2 == 0) goto L7b
            java.io.RandomAccessFile r2 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.lang.String r3 = "rw"
            r2.<init>(r1, r3)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            int r3 = r6.aKV     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            long r3 = (long) r3     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            r2.setLength(r3)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            com.kwad.sdk.utils.a.b r3 = r6.aKU     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            byte[] r3 = r3.aKG     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            int r4 = r6.aKV     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            r2.write(r3, r0, r4)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            r2.close()     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.lang.String r3 = r6.Tt     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            r4.<init>()     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.lang.String r5 = r6.name     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            r4.append(r5)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.lang.String r5 = ".kvc"
            r4.append(r5)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            r2.<init>(r3, r4)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            boolean r3 = r2.exists()     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            if (r3 == 0) goto L61
            boolean r3 = r2.delete()     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            if (r3 == 0) goto L7b
        L61:
            boolean r1 = r1.renameTo(r2)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            if (r1 == 0) goto L6a
            r0 = 1
            monitor-exit(r6)
            return r0
        L6a:
            java.lang.Exception r1 = new java.lang.Exception     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.lang.String r2 = "rename failed"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            r6.g(r1)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            goto L7b
        L75:
            r0 = move-exception
            goto L7d
        L77:
            r1 = move-exception
            r6.r(r1)     // Catch: java.lang.Throwable -> L75
        L7b:
            monitor-exit(r6)
            return r0
        L7d:
            monitor-exit(r6)
            throw r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.kwad.sdk.utils.a.c.Ko():boolean");
    }

    private void Kp() {
        try {
            h.h(new File(this.Tt, this.name + ".kvc"));
            h.h(new File(this.Tt, this.name + bh.k));
        } catch (Exception e2) {
            r(e2);
        }
    }

    private void Kq() {
        this.aLg = 1;
        h.closeQuietly(this.aKO);
        h.closeQuietly(this.aKP);
        this.aKO = null;
        this.aKP = null;
        this.aKS = null;
        this.aKT = null;
    }

    private void Kr() {
        if (this.aLg == 0) {
            try {
                a(this.aKS);
                a(this.aKT);
            } catch (Throwable unused) {
                Kq();
            }
        }
        Ks();
        h.h(new File(this.Tt + this.name));
    }

    private void Ks() {
        this.aKV = 12;
        this.aKW = 0L;
        Ky();
        this.aKX.clear();
        com.kwad.sdk.utils.a.b bVar = this.aKU;
        if (bVar == null || bVar.aKG.length != PAGE_SIZE) {
            this.aKU = new com.kwad.sdk.utils.a.b(PAGE_SIZE);
        } else {
            this.aKU.y(0, 0);
            this.aKU.g(4, 0L);
        }
    }

    private void Kt() {
        com.kwad.sdk.utils.a.b bVar;
        com.kwad.sdk.utils.a.b bVar2 = this.aKU;
        if (bVar2 != null) {
            this.aKW ^= bVar2.A(this.aKZ, this.aLa);
        }
        if (this.aLg == 0) {
            MappedByteBuffer mappedByteBuffer = this.aKS;
            if (mappedByteBuffer != null) {
                mappedByteBuffer.putInt(0, -1);
                b(this.aKS);
                this.aKS.putInt(0, this.aKV - 12);
            }
            MappedByteBuffer mappedByteBuffer2 = this.aKT;
            if (mappedByteBuffer2 != null) {
                b(mappedByteBuffer2);
            }
        } else {
            if (this.aLc && (bVar = this.aKU) != null) {
                bVar.y(0, this.aKV - 12);
            }
            com.kwad.sdk.utils.a.b bVar3 = this.aKU;
            if (bVar3 != null) {
                bVar3.g(4, this.aKW);
            }
        }
        this.aLc = false;
        this.aLb = 0;
        this.aLa = 0;
    }

    private int Ku() {
        int i = this.aKV;
        if (i <= 16384) {
            return 4096;
        }
        return i <= 65536 ? 8192 : 16384;
    }

    private void Kv() {
        dn(this.aLa);
        int i = this.aKV;
        this.aKZ = i;
        this.aKV = this.aLa + i;
        com.kwad.sdk.utils.a.b bVar = this.aKU;
        if (bVar != null) {
            bVar.position = i;
        }
        this.aLc = true;
    }

    private void Kw() {
        if (this.aLe < (Ku() << 1)) {
            if (this.aLf.size() < (this.aKV < 16384 ? 80 : 160)) {
                return;
            }
        }
        m24do(0);
    }

    private void Kx() {
        ArrayList<e> arrayList = this.aLf;
        if (arrayList == null) {
            return;
        }
        int size = arrayList.size() - 1;
        e eVar = this.aLf.get(size);
        while (size > 0) {
            size--;
            e eVar2 = this.aLf.get(size);
            if (eVar.start == eVar2.end) {
                eVar2.end = eVar.end;
                this.aLf.remove(size + 1);
            }
            eVar = eVar2;
        }
    }

    private void Ky() {
        this.aLe = 0;
        ArrayList<e> arrayList = this.aLf;
        if (arrayList != null) {
            arrayList.clear();
        }
    }

    private int a(String str, byte[] bArr, byte b2) {
        this.aLd = null;
        if (bArr.length < 2048) {
            return b(str, bArr, b2);
        }
        info("large value, key: " + str + ", size: " + bArr.length);
        String strKC = h.KC();
        if (!h.a(new File(this.Tt + this.name, strKC), bArr)) {
            fW("save large value failed");
            return 0;
        }
        this.aLd = strKC;
        byte[] bArr2 = new byte[32];
        strKC.getBytes(0, 32, bArr2, 0);
        return b(str, bArr2, (byte) (b2 | 64));
    }

    private Object a(a.h hVar) {
        Exception exc;
        try {
            byte[] bArrAe = h.ae(new File(this.Tt + this.name, (String) hVar.value));
            if (bArrAe != null) {
                int i = bArrAe[0] & UByte.MAX_VALUE;
                String str = new String(bArrAe, 1, i, com.kwad.sdk.utils.a.b.UTF_8);
                b bVar = this.aKM.get(str);
                if (bVar != null) {
                    int i2 = i + 1;
                    return bVar.g(bArrAe, i2, bArrAe.length - i2);
                }
                exc = new Exception("No encoder for tag:" + str);
            } else {
                exc = new Exception("Read object data failed");
            }
            g(exc);
            return null;
        } catch (Exception e2) {
            r(e2);
            return null;
        }
    }

    private String a(a.i iVar) {
        byte[] bytes;
        try {
            byte[] bArrAe = h.ae(new File(this.Tt + this.name, (String) iVar.value));
            String str = new String(bArrAe);
            return (bArrAe == null || TextUtils.isEmpty(str) || (bytes = com.kwad.sdk.utils.a.b.j(bArrAe, com.kwad.sdk.utils.a.b.fS(str)).getBytes()) == null || bytes.length == 0) ? "" : new String(bytes, com.kwad.sdk.utils.a.b.UTF_8);
        } catch (Exception e2) {
            r(e2);
        }
        return "";
    }

    private void a(byte b2, int i) {
        long jD = this.aKW ^ d(1L, i);
        this.aKW = jD;
        if (this.aLg == 0) {
            MappedByteBuffer mappedByteBuffer = this.aKS;
            if (mappedByteBuffer != null) {
                mappedByteBuffer.putLong(4, jD);
                this.aKS.put(i, b2);
            }
            MappedByteBuffer mappedByteBuffer2 = this.aKT;
            if (mappedByteBuffer2 != null) {
                mappedByteBuffer2.putLong(4, this.aKW);
                this.aKT.put(i, b2);
            }
        } else {
            com.kwad.sdk.utils.a.b bVar = this.aKU;
            if (bVar != null) {
                bVar.g(4, jD);
            }
        }
        com.kwad.sdk.utils.a.b bVar2 = this.aKU;
        if (bVar2 != null) {
            bVar2.aKG[i] = b2;
        }
    }

    private void a(byte b2, int i, int i2) {
        C(i, i2);
        byte b3 = (byte) (b2 | ByteCompanionObject.MIN_VALUE);
        com.kwad.sdk.utils.a.b bVar = this.aKU;
        if (bVar != null && bVar.aKG != null) {
            this.aKW ^= (((long) (this.aKU.aKG[i] ^ b3)) & 255) << ((i & 7) << 3);
            this.aKU.aKG[i] = b3;
        }
        this.aLb = i;
    }

    private void a(int i, long j, int i2) {
        long jD = d(j, i2) ^ this.aKW;
        this.aKW = jD;
        if (this.aLg == 0) {
            MappedByteBuffer mappedByteBuffer = this.aKS;
            if (mappedByteBuffer != null) {
                mappedByteBuffer.putLong(4, jD);
                this.aKS.putInt(i2, i);
            }
            MappedByteBuffer mappedByteBuffer2 = this.aKT;
            if (mappedByteBuffer2 != null) {
                mappedByteBuffer2.putLong(4, this.aKW);
                this.aKT.putInt(i2, i);
            }
        } else {
            com.kwad.sdk.utils.a.b bVar = this.aKU;
            if (bVar != null) {
                bVar.g(4, jD);
            }
        }
        com.kwad.sdk.utils.a.b bVar2 = this.aKU;
        if (bVar2 != null) {
            bVar2.y(i2, i);
        }
    }

    private void a(int i, int[] iArr) {
        Map<String, a.b> map = this.aKX;
        if (map == null) {
            return;
        }
        for (a.b bVar : map.values()) {
            if (bVar.offset > i) {
                int i2 = iArr[(h.binarySearch(iArr, bVar.offset) << 1) + 1];
                bVar.offset -= i2;
                if (bVar.Kf() >= 6) {
                    ((a.j) bVar).start -= i2;
                }
            }
        }
    }

    private void a(String str, byte b2) {
        a(str, b2, aKH[b2]);
    }

    private void a(String str, byte b2, int i) {
        int iFS = com.kwad.sdk.utils.a.b.fS(str);
        dm(iFS);
        this.aLa = iFS + 2 + i;
        Kv();
        com.kwad.sdk.utils.a.b bVar = this.aKU;
        if (bVar != null) {
            bVar.e(b2);
        }
        q(str, iFS);
    }

    private static void a(String str, int i, int i2, byte[] bArr, int i3) {
        int i4;
        if (i2 <= str.length() && i2 >= 0) {
            int i5 = 0;
            while (i5 < i2) {
                int i6 = i5 + 1;
                char cCharAt = str.charAt(i5);
                if (cCharAt < 128) {
                    i4 = i3 + 1;
                    bArr[i3] = (byte) (((byte) cCharAt) ^ 1);
                } else {
                    i4 = i3 + 1;
                    bArr[i3] = (byte) cCharAt;
                }
                i5 = i6;
                i3 = i4;
            }
        }
    }

    private synchronized <T> void a(String str, T t, b<T> bVar) {
        fV(str);
        if (bVar == null) {
            IllegalArgumentException illegalArgumentException = new IllegalArgumentException("Encoder is null");
            if (com.kwad.library.a.a.ml.booleanValue()) {
                throw illegalArgumentException;
            }
            r(illegalArgumentException);
            return;
        }
        String strKA = bVar.KA();
        if (!strKA.isEmpty() && strKA.length() <= 50) {
            if (!this.aKM.containsKey(strKA)) {
                IllegalArgumentException illegalArgumentException2 = new IllegalArgumentException("Encoder hasn't been registered");
                if (com.kwad.library.a.a.ml.booleanValue()) {
                    throw illegalArgumentException2;
                }
                r(illegalArgumentException2);
                return;
            }
            if (t == null) {
                remove(str);
                return;
            }
            byte[] bArrO = null;
            try {
                bArrO = bVar.o(t);
            } catch (Exception e2) {
                r(e2);
            }
            if (bArrO == null) {
                remove(str);
                return;
            }
            int iFS = com.kwad.sdk.utils.a.b.fS(strKA);
            com.kwad.sdk.utils.a.b bVar2 = new com.kwad.sdk.utils.a.b(iFS + 1 + bArrO.length);
            bVar2.e((byte) iFS);
            bVar2.fR(strKA);
            bVar2.n(bArrO);
            a(str, t, bVar2.aKG, (a.h) this.aKX.get(str), (byte) 8);
            return;
        }
        IllegalArgumentException illegalArgumentException3 = new IllegalArgumentException("Invalid encoder tag:" + strKA);
        if (com.kwad.library.a.a.ml.booleanValue()) {
            throw illegalArgumentException3;
        }
        r(illegalArgumentException3);
    }

    private void a(String str, Object obj, byte[] bArr, byte b2) {
        Object obj2;
        int length;
        int iA = a(str, bArr, b2);
        if (iA != 0) {
            boolean z = this.aLd != null;
            if (z) {
                String str2 = this.aLd;
                this.aLd = null;
                length = 32;
                obj2 = str2;
            } else {
                obj2 = obj;
                length = bArr.length;
            }
            this.aKX.put(str, b2 == 6 ? new a.i(this.aKZ, iA, (String) obj2, length, z) : b2 == 7 ? new a.C0229a(this.aKZ, iA, obj2, length, z) : new a.h(this.aKZ, iA, obj2, length, z));
            Kt();
        }
    }

    private void a(String str, Object obj, byte[] bArr, a.j jVar) {
        int iA = a(str, bArr, jVar.Kf());
        if (iA != 0) {
            String str2 = jVar.aKE ? (String) jVar.value : null;
            a(jVar.Kf(), jVar.start, jVar.offset + jVar.aKD);
            boolean z = this.aLd != null;
            jVar.start = this.aKZ;
            jVar.offset = iA;
            jVar.aKE = z;
            if (z) {
                jVar.value = this.aLd;
                jVar.aKD = 32;
                this.aLd = null;
            } else {
                jVar.value = obj;
                jVar.aKD = bArr.length;
            }
            Kt();
            Kw();
            if (str2 != null) {
                h.h(new File(this.Tt + this.name, str2));
            }
        }
    }

    private void a(String str, Object obj, byte[] bArr, a.j jVar, byte b2) {
        if (jVar == null) {
            a(str, obj, bArr, b2);
        } else if (jVar.aKE || jVar.aKD != bArr.length) {
            a(str, obj, bArr, jVar);
        } else {
            updateBytes(jVar.offset, bArr);
            jVar.value = obj;
        }
        Km();
    }

    private void a(String str, String str2, a.i iVar) {
        int iFS = com.kwad.sdk.utils.a.b.fS(str2);
        if (iVar == null) {
            int iFS2 = com.kwad.sdk.utils.a.b.fS(str);
            dm(iFS2);
            int i = iFS2 + 4;
            this.aLa = i + iFS;
            Kv();
            com.kwad.sdk.utils.a.b bVar = this.aKU;
            if (bVar != null) {
                bVar.e((byte) 6);
            }
            q(str, iFS2);
            r(str2, iFS);
            Map<String, a.b> map = this.aKX;
            int i2 = this.aKZ;
            map.put(str, new a.i(i2, i2 + i, str2, iFS, false));
            Kt();
        } else {
            int i3 = iVar.offset - iVar.start;
            boolean z = true;
            if (iVar.aKD == iFS) {
                this.aKW ^= this.aKU.A(iVar.offset, iVar.aKD);
                if (iFS == str2.length()) {
                    a(str2, 0, iFS, this.aKU.aKG, iVar.offset);
                } else {
                    com.kwad.sdk.utils.a.b bVar2 = this.aKU;
                    if (bVar2 != null) {
                        bVar2.position = iVar.offset;
                        this.aKU.fR(str2);
                    }
                }
                this.aKZ = iVar.offset;
                this.aLa = iFS;
                z = false;
            } else {
                this.aLa = i3 + iFS;
                Kv();
                com.kwad.sdk.utils.a.b bVar3 = this.aKU;
                if (bVar3 != null) {
                    bVar3.e((byte) 6);
                }
                int i4 = i3 - 3;
                com.kwad.sdk.utils.a.b bVar4 = this.aKU;
                if (bVar4 != null) {
                    System.arraycopy(bVar4.aKG, iVar.start + 1, this.aKU.aKG, this.aKU.position, i4);
                }
                com.kwad.sdk.utils.a.b bVar5 = this.aKU;
                if (bVar5 != null) {
                    bVar5.position += i4;
                }
                r(str2, iFS);
                a((byte) 6, iVar.start, iVar.offset + iVar.aKD);
                str = iVar.aKE ? (String) iVar.value : null;
                iVar.aKE = false;
                iVar.start = this.aKZ;
                iVar.offset = this.aKZ + i3;
                iVar.aKD = iFS;
            }
            iVar.value = str2;
            Kt();
            if (z) {
                Kw();
            }
            if (str != null) {
                h.h(new File(this.Tt + this.name, str));
            }
        }
        Km();
    }

    private void a(MappedByteBuffer mappedByteBuffer) throws IOException {
        if (mappedByteBuffer == null) {
            return;
        }
        if (mappedByteBuffer.capacity() != PAGE_SIZE) {
            FileChannel fileChannel = mappedByteBuffer == this.aKS ? this.aKO : this.aKP;
            if (fileChannel == null) {
                return;
            }
            fileChannel.truncate(PAGE_SIZE);
            MappedByteBuffer map = fileChannel.map(FileChannel.MapMode.READ_WRITE, 0L, PAGE_SIZE);
            map.order(ByteOrder.LITTLE_ENDIAN);
            if (mappedByteBuffer == this.aKS) {
                this.aKS = map;
            } else {
                this.aKT = map;
            }
            mappedByteBuffer = map;
        }
        mappedByteBuffer.putInt(0, 0);
        mappedByteBuffer.putLong(4, 0L);
    }

    private void a(MappedByteBuffer mappedByteBuffer, MappedByteBuffer mappedByteBuffer2, int i) {
        if (mappedByteBuffer.capacity() != mappedByteBuffer2.capacity()) {
            try {
                MappedByteBuffer map = (mappedByteBuffer2 == this.aKT ? this.aKP : this.aKO).map(FileChannel.MapMode.READ_WRITE, 0L, mappedByteBuffer.capacity());
                map.order(ByteOrder.LITTLE_ENDIAN);
                if (mappedByteBuffer2 == this.aKT) {
                    this.aKT = map;
                } else {
                    this.aKS = map;
                }
                mappedByteBuffer2 = map;
            } catch (Exception e2) {
                r(e2);
                Kq();
                return;
            }
        }
        mappedByteBuffer.rewind();
        mappedByteBuffer2.rewind();
        mappedByteBuffer.limit(i);
        mappedByteBuffer2.put(mappedByteBuffer);
        mappedByteBuffer.limit(mappedByteBuffer.capacity());
    }

    private synchronized void a(Map<String, Object> map, Map<Class, b> map2) {
        if (map == null) {
            return;
        }
        for (Map.Entry<String, Object> entry : map.entrySet()) {
            String key = entry.getKey();
            Object value = entry.getValue();
            if (key != null && !key.isEmpty()) {
                if (value instanceof String) {
                    putString(key, (String) value);
                } else if (value instanceof Boolean) {
                    putBoolean(key, ((Boolean) value).booleanValue());
                } else if (value instanceof Integer) {
                    putInt(key, ((Integer) value).intValue());
                } else if (value instanceof Long) {
                    putLong(key, ((Long) value).longValue());
                } else if (value instanceof Float) {
                    putFloat(key, ((Float) value).floatValue());
                } else if (value instanceof Double) {
                    putDouble(key, ((Double) value).doubleValue());
                } else if (value instanceof Set) {
                    Set set = (Set) value;
                    if (!set.isEmpty() && (set.iterator().next() instanceof String)) {
                        putStringSet(key, (Set) value);
                    }
                } else if (value instanceof byte[]) {
                    b(key, (byte[]) value);
                } else {
                    g(new Exception("missing encoders"));
                }
            }
        }
    }

    private boolean a(com.kwad.sdk.utils.a.b bVar) {
        int length = bVar.aKG.length;
        File file = new File(this.Tt, this.name + ".kva");
        File file2 = new File(this.Tt, this.name + ".kvb");
        try {
            if (!h.ad(file) || !h.ad(file2)) {
                throw new Exception("open file failed");
            }
            RandomAccessFile randomAccessFile = new RandomAccessFile(file, "rw");
            RandomAccessFile randomAccessFile2 = new RandomAccessFile(file2, "rw");
            long j = length;
            randomAccessFile.setLength(j);
            randomAccessFile2.setLength(j);
            this.aKO = randomAccessFile.getChannel();
            this.aKP = randomAccessFile2.getChannel();
            MappedByteBuffer map = this.aKO.map(FileChannel.MapMode.READ_WRITE, 0L, j);
            this.aKS = map;
            map.order(ByteOrder.LITTLE_ENDIAN);
            MappedByteBuffer map2 = this.aKP.map(FileChannel.MapMode.READ_WRITE, 0L, j);
            this.aKT = map2;
            map2.order(ByteOrder.LITTLE_ENDIAN);
            this.aKS.put(bVar.aKG, 0, this.aKV);
            this.aKT.put(bVar.aKG, 0, this.aKV);
            return true;
        } catch (Exception e2) {
            r(e2);
            return false;
        }
    }

    private byte[] a(a.C0229a c0229a) {
        try {
            byte[] bArrAe = h.ae(new File(this.Tt + this.name, (String) c0229a.value));
            return bArrAe != null ? bArrAe : aKI;
        } catch (Exception e2) {
            r(e2);
            return aKI;
        }
    }

    private boolean ac(File file) {
        com.kwad.sdk.utils.a.b bVar;
        long length = file.length();
        if (length != 0 && length <= 536870912) {
            int i = (int) length;
            int iB = B(PAGE_SIZE, i);
            com.kwad.sdk.utils.a.b bVar2 = this.aKU;
            if (bVar2 == null || bVar2.aKG.length != iB) {
                com.kwad.sdk.utils.a.b bVar3 = new com.kwad.sdk.utils.a.b(new byte[iB]);
                this.aKU = bVar3;
                bVar = bVar3;
            } else {
                bVar = this.aKU;
                bVar.position = 0;
            }
            h.a(file, bVar.aKG, i);
            int i2 = bVar.getInt();
            long j = bVar.getLong();
            this.aKV = i2 + 12;
            if (i2 >= 0 && i2 <= i - 12 && j == bVar.A(12, i2) && Kl() == 0) {
                this.aKW = j;
                return true;
            }
        }
        return false;
    }

    private int b(String str, byte[] bArr, byte b2) {
        a(str, b2, bArr.length + 2);
        com.kwad.sdk.utils.a.b bVar = this.aKU;
        if (bVar == null) {
            return 0;
        }
        bVar.a((short) bArr.length);
        int i = this.aKU.position;
        this.aKU.n(bArr);
        return i;
    }

    private void b(long j, long j2, int i) {
        long jD = d(j2, i) ^ this.aKW;
        this.aKW = jD;
        if (this.aLg == 0) {
            MappedByteBuffer mappedByteBuffer = this.aKS;
            if (mappedByteBuffer != null) {
                mappedByteBuffer.putLong(4, jD);
                this.aKS.putLong(i, j);
            }
            MappedByteBuffer mappedByteBuffer2 = this.aKT;
            if (mappedByteBuffer2 != null) {
                mappedByteBuffer2.putLong(4, this.aKW);
                this.aKT.putLong(i, j);
            }
        } else {
            com.kwad.sdk.utils.a.b bVar = this.aKU;
            if (bVar != null) {
                bVar.g(4, jD);
            }
        }
        com.kwad.sdk.utils.a.b bVar2 = this.aKU;
        if (bVar2 != null) {
            bVar2.g(i, j);
        }
    }

    private synchronized void b(String str, byte[] bArr) {
        fV(str);
        if (bArr == null) {
            remove(str);
        } else {
            a(str, bArr, bArr, (a.C0229a) this.aKX.get(str), (byte) 7);
        }
    }

    private void b(MappedByteBuffer mappedByteBuffer) {
        if (mappedByteBuffer == null) {
            return;
        }
        if (this.aLc && mappedByteBuffer != this.aKS) {
            mappedByteBuffer.putInt(0, this.aKV - 12);
        }
        mappedByteBuffer.putLong(4, this.aKW);
        int i = this.aLb;
        if (i != 0) {
            mappedByteBuffer.put(i, this.aKU.aKG[this.aLb]);
        }
        if (this.aLa != 0) {
            mappedByteBuffer.position(this.aKZ);
            mappedByteBuffer.put(this.aKU.aKG, this.aKZ, this.aLa);
        }
    }

    private static long d(long j, int i) {
        int i2 = (i & 7) << 3;
        return (j >>> (64 - i2)) | (j << i2);
    }

    private static void d(int i, boolean z) {
        if (z) {
            if (i != 32) {
                throw new IllegalStateException("name size not match");
            }
        } else if (i < 0 || i >= 2048) {
            throw new IllegalStateException("value size out of bound");
        }
    }

    private static void dm(int i) {
        if (i > 255) {
            throw new IllegalArgumentException("key's length must less than 256");
        }
    }

    private void dn(int i) {
        if (this.aKU == null) {
            this.aKU = new com.kwad.sdk.utils.a.b(PAGE_SIZE);
        }
        int length = this.aKU.aKG.length;
        int i2 = this.aKV + i;
        if (i2 >= length) {
            int i3 = this.aLe;
            if (i3 > i && i3 > Ku()) {
                m24do(i);
                return;
            }
            int iB = B(length, i2);
            byte[] bArr = new byte[iB];
            System.arraycopy(this.aKU.aKG, 0, bArr, 0, this.aKV);
            this.aKU.aKG = bArr;
            if (this.aLg == 0) {
                try {
                    long j = iB;
                    MappedByteBuffer map = this.aKO.map(FileChannel.MapMode.READ_WRITE, 0L, j);
                    this.aKS = map;
                    map.order(ByteOrder.LITTLE_ENDIAN);
                    MappedByteBuffer map2 = this.aKP.map(FileChannel.MapMode.READ_WRITE, 0L, j);
                    this.aKT = map2;
                    map2.order(ByteOrder.LITTLE_ENDIAN);
                } catch (Throwable th) {
                    r(new Exception("map failed", th));
                    this.aKU.y(0, this.aKV - 12);
                    this.aKU.g(4, this.aKW);
                    Kq();
                }
            }
        }
    }

    /* JADX INFO: renamed from: do, reason: not valid java name */
    private void m24do(int i) {
        int i2;
        ArrayList<e> arrayList = this.aLf;
        if (arrayList == null || this.aKU == null) {
            return;
        }
        Collections.sort(arrayList);
        Kx();
        e eVar = this.aLf.get(0);
        int i3 = eVar.start;
        int i4 = this.aKV;
        int i5 = i4 - this.aLe;
        int i6 = i5 - 12;
        int i7 = i5 - i3;
        int i8 = i4 - i3;
        boolean z = i6 < i8 + i7;
        if (!z) {
            this.aKW ^= this.aKU.A(i3, i8);
        }
        int size = this.aLf.size();
        int i9 = size - 1;
        int i10 = this.aKV - this.aLf.get(i9).end;
        int[] iArr = new int[(i10 > 0 ? size : i9) << 1];
        int i11 = eVar.start;
        int i12 = eVar.end;
        int i13 = 1;
        while (i13 < size) {
            e eVar2 = this.aLf.get(i13);
            int i14 = eVar2.start - i12;
            int i15 = size;
            System.arraycopy(this.aKU.aKG, i12, this.aKU.aKG, i11, i14);
            int i16 = (i13 - 1) << 1;
            iArr[i16] = i12;
            iArr[i16 + 1] = i12 - i11;
            i11 += i14;
            i12 = eVar2.end;
            i13++;
            size = i15;
        }
        if (i10 > 0) {
            System.arraycopy(this.aKU.aKG, i12, this.aKU.aKG, i11, i10);
            int i17 = i9 << 1;
            iArr[i17] = i12;
            iArr[i17 + 1] = i12 - i11;
        }
        Ky();
        this.aKW = z ? this.aKU.A(12, i6) : this.aKW ^ this.aKU.A(i3, i7);
        this.aKV = i5;
        if (this.aLg == 0) {
            MappedByteBuffer mappedByteBuffer = this.aKS;
            if (mappedByteBuffer != null) {
                i2 = 0;
                mappedByteBuffer.putInt(0, -1);
                this.aKS.putLong(4, this.aKW);
                this.aKS.position(i3);
                this.aKS.put(this.aKU.aKG, i3, i7);
                this.aKS.putInt(0, i6);
            } else {
                i2 = 0;
            }
            MappedByteBuffer mappedByteBuffer2 = this.aKT;
            if (mappedByteBuffer2 != null) {
                mappedByteBuffer2.putInt(i2, i6);
                this.aKT.putLong(4, this.aKW);
                this.aKT.position(i3);
                this.aKT.put(this.aKU.aKG, i3, i7);
            }
        } else {
            this.aKU.y(0, i6);
            this.aKU.g(4, this.aKW);
        }
        a(i3, iArr);
        int i18 = i5 + i;
        if (this.aKU.aKG.length - i18 > aKL) {
            dp(i18);
        }
        info("gc finish");
    }

    private void dp(int i) {
        int i2 = PAGE_SIZE;
        int iB = B(i2, i + i2);
        com.kwad.sdk.utils.a.b bVar = this.aKU;
        if (bVar != null) {
            if (iB >= bVar.aKG.length) {
                return;
            }
            byte[] bArr = new byte[iB];
            System.arraycopy(this.aKU.aKG, 0, bArr, 0, this.aKV);
            this.aKU.aKG = bArr;
        }
        if (this.aLg == 0) {
            try {
                long j = iB;
                this.aKO.truncate(j);
                MappedByteBuffer map = this.aKO.map(FileChannel.MapMode.READ_WRITE, 0L, j);
                this.aKS = map;
                map.order(ByteOrder.LITTLE_ENDIAN);
                this.aKP.truncate(j);
                MappedByteBuffer map2 = this.aKP.map(FileChannel.MapMode.READ_WRITE, 0L, j);
                this.aKT = map2;
                map2.order(ByteOrder.LITTLE_ENDIAN);
            } catch (Throwable th) {
                r(new Exception("map failed", th));
                Kq();
            }
        }
        info("truncate finish");
    }

    private static void fV(String str) {
        if (str == null || str.isEmpty()) {
            throw new IllegalArgumentException("key is empty");
        }
    }

    private void fW(String str) {
        d dVar = this.aKN;
        if (dVar != null) {
            dVar.e(this.name, new Exception(str));
        }
    }

    private void g(Exception exc) {
        d dVar = this.aKN;
        if (dVar != null) {
            dVar.a(this.name, exc);
        }
    }

    private void h(File file, File file2) {
        try {
            if (ac(file)) {
                return;
            }
        } catch (IOException e2) {
            g(e2);
        }
        Ks();
        try {
            if (ac(file2)) {
                return;
            }
        } catch (Exception e3) {
            g(e3);
        }
        Ks();
    }

    private void info(String str) {
        d dVar = this.aKN;
        if (dVar != null) {
            dVar.i(this.name, str);
        }
    }

    private synchronized void putDouble(String str, double d2) {
        fV(str);
        a.d dVar = (a.d) this.aKX.get(str);
        if (dVar != null) {
            if (dVar.value != d2) {
                long jDoubleToRawLongBits = Double.doubleToRawLongBits(d2);
                long jDoubleToRawLongBits2 = Double.doubleToRawLongBits(dVar.value) ^ jDoubleToRawLongBits;
                dVar.value = d2;
                b(jDoubleToRawLongBits, jDoubleToRawLongBits2, dVar.offset);
                Km();
            }
            return;
        }
        a(str, (byte) 5);
        if (this.aKU != null) {
            int i = this.aKU.position;
            this.aKU.av(Double.doubleToRawLongBits(d2));
            Kt();
            if (this.aKX != null) {
                this.aKX.put(str, new a.d(i, d2));
            }
        }
        Km();
    }

    private synchronized void putFloat(String str, float f) {
        fV(str);
        a.e eVar = (a.e) this.aKX.get(str);
        if (eVar != null) {
            if (eVar.value != f) {
                int iFloatToRawIntBits = Float.floatToRawIntBits(f);
                long jFloatToRawIntBits = ((long) (Float.floatToRawIntBits(eVar.value) ^ iFloatToRawIntBits)) & 4294967295L;
                eVar.value = f;
                a(iFloatToRawIntBits, jFloatToRawIntBits, eVar.offset);
                Km();
            }
            return;
        }
        a(str, (byte) 3);
        if (this.aKU != null) {
            int i = this.aKU.position;
            this.aKU.df(Float.floatToRawIntBits(f));
            Kt();
            if (this.aKX != null) {
                this.aKX.put(str, new a.e(i, f));
            }
        }
        Km();
    }

    private synchronized void putStringSet(String str, Set<String> set) {
        if (set == null) {
            remove(str);
        } else {
            a(str, set, g.aLz);
        }
    }

    private void q(String str, int i) {
        com.kwad.sdk.utils.a.b bVar = this.aKU;
        if (bVar == null) {
            return;
        }
        bVar.e((byte) i);
        if (i != str.length()) {
            this.aKU.fR(str);
            return;
        }
        a(str, 0, i, this.aKU.aKG, this.aKU.position);
        this.aKU.position += i;
    }

    private void r(String str, int i) {
        com.kwad.sdk.utils.a.b bVar = this.aKU;
        if (bVar == null) {
            return;
        }
        bVar.a((short) i);
        if (i == str.length()) {
            a(str, 0, i, this.aKU.aKG, this.aKU.position);
        } else {
            this.aKU.fR(str);
        }
    }

    private void r(Throwable th) {
        d dVar = this.aKN;
        if (dVar != null) {
            dVar.e(this.name, th);
        }
    }

    private void updateBytes(int i, byte[] bArr) {
        int length = bArr.length;
        com.kwad.sdk.utils.a.b bVar = this.aKU;
        if (bVar != null) {
            this.aKW ^= bVar.A(i, length);
            this.aKU.position = i;
            this.aKU.n(bArr);
            this.aKW ^= this.aKU.A(i, length);
        }
        if (this.aLg != 0) {
            com.kwad.sdk.utils.a.b bVar2 = this.aKU;
            if (bVar2 != null) {
                bVar2.g(4, this.aKW);
                return;
            }
            return;
        }
        MappedByteBuffer mappedByteBuffer = this.aKS;
        if (mappedByteBuffer != null) {
            mappedByteBuffer.putInt(0, -1);
            this.aKS.putLong(4, this.aKW);
            this.aKS.position(i);
            this.aKS.put(bArr);
            this.aKS.putInt(0, this.aKV - 12);
        }
        MappedByteBuffer mappedByteBuffer2 = this.aKT;
        if (mappedByteBuffer2 != null) {
            mappedByteBuffer2.putLong(4, this.aKW);
            this.aKT.position(i);
            this.aKT.put(bArr);
        }
    }

    public final synchronized boolean contains(String str) {
        return this.aKX.containsKey(str);
    }

    public final synchronized Map<String, Object> getAll() {
        Object objValueOf;
        int size = this.aKX.size();
        if (size == 0) {
            return new HashMap();
        }
        HashMap map = new HashMap(((size * 4) / 3) + 1);
        for (Map.Entry<String, a.b> entry : this.aKX.entrySet()) {
            String key = entry.getKey();
            a.b value = entry.getValue();
            Object obj = null;
            switch (value.Kf()) {
                case 1:
                    objValueOf = Boolean.valueOf(((a.c) value).value);
                    break;
                case 2:
                    objValueOf = Integer.valueOf(((a.f) value).value);
                    break;
                case 3:
                    objValueOf = Float.valueOf(((a.e) value).value);
                    break;
                case 4:
                    objValueOf = Long.valueOf(((a.g) value).value);
                    break;
                case 5:
                    objValueOf = Double.valueOf(((a.d) value).value);
                    break;
                case 6:
                    a.i iVar = (a.i) value;
                    objValueOf = iVar.aKE ? a(iVar) : iVar.value;
                    break;
                case 7:
                    a.C0229a c0229a = (a.C0229a) value;
                    objValueOf = c0229a.aKE ? a(c0229a) : c0229a.value;
                    break;
                case 8:
                    a.h hVar = (a.h) value;
                    objValueOf = hVar.aKE ? a(hVar) : ((a.h) value).value;
                    break;
                default:
                    continue;
                    map.put(key, obj);
                    break;
            }
            obj = objValueOf;
            map.put(key, obj);
        }
        return map;
    }

    public final synchronized boolean getBoolean(String str, boolean z) {
        a.c cVar = (a.c) this.aKX.get(str);
        if (cVar == null) {
            return z;
        }
        return cVar.value;
    }

    public final synchronized int getInt(String str, int i) {
        a.f fVar = (a.f) this.aKX.get(str);
        if (fVar == null) {
            return i;
        }
        return fVar.value;
    }

    public final synchronized long getLong(String str, long j) {
        a.g gVar = (a.g) this.aKX.get(str);
        if (gVar == null) {
            return j;
        }
        return gVar.value;
    }

    public final synchronized String getString(String str, String str2) {
        a.i iVar = (a.i) this.aKX.get(str);
        if (iVar == null) {
            return str2;
        }
        if (iVar.aKE) {
            return a(iVar);
        }
        return (String) iVar.value;
    }

    public final void putAll(Map<String, Object> map) {
        a(map, (Map<Class, b>) null);
    }

    public final synchronized void putBoolean(String str, boolean z) {
        fV(str);
        a.c cVar = (a.c) this.aKX.get(str);
        if (cVar != null) {
            if (cVar.value != z) {
                cVar.value = z;
                a((byte) (z ? 1 : 0), cVar.offset);
                Km();
            }
            return;
        }
        a(str, (byte) 1);
        if (this.aKU != null) {
            int i = this.aKU.position;
            this.aKU.e((byte) (z ? 1 : 0));
            Kt();
            if (this.aKX != null) {
                this.aKX.put(str, new a.c(i, z));
            }
        }
        Km();
    }

    public final synchronized void putInt(String str, int i) {
        fV(str);
        a.f fVar = (a.f) this.aKX.get(str);
        if (fVar != null) {
            if (fVar.value != i) {
                long j = ((long) (fVar.value ^ i)) & 4294967295L;
                fVar.value = i;
                a(i, j, fVar.offset);
                Km();
            }
            return;
        }
        a(str, (byte) 2);
        if (this.aKU != null) {
            int i2 = this.aKU.position;
            this.aKU.df(i);
            Kt();
            if (this.aKX != null) {
                this.aKX.put(str, new a.f(i2, i));
            }
        }
        Km();
    }

    public final synchronized void putLong(String str, long j) {
        fV(str);
        a.g gVar = (a.g) this.aKX.get(str);
        if (gVar != null) {
            if (gVar.value != j) {
                long j2 = j ^ gVar.value;
                gVar.value = j;
                b(j, j2, gVar.offset);
                Km();
            }
            return;
        }
        a(str, (byte) 4);
        if (this.aKU != null) {
            int i = this.aKU.position;
            this.aKU.av(j);
            Kt();
            if (this.aKX != null) {
                this.aKX.put(str, new a.g(i, j));
            }
        }
        Km();
    }

    public final synchronized void putString(String str, String str2) {
        byte[] bArr;
        byte[] bArrFU;
        byte[] bArr2;
        fV(str);
        if (str2 == null) {
            remove(str);
            return;
        }
        a.i iVar = (a.i) this.aKX.get(str);
        if (str2.length() * 3 < 2048) {
            a(str, str2, iVar);
            return;
        }
        if (!str2.isEmpty()) {
            if (iVar != null || str2.length() >= 2048) {
                if (iVar != null && !iVar.aKE) {
                    int iFS = com.kwad.sdk.utils.a.b.fS(str2);
                    bArr = new byte[iFS];
                    if (iFS == str2.length()) {
                        a(str2, 0, iFS, bArr, 0);
                        bArr2 = bArr;
                    }
                }
                bArrFU = com.kwad.sdk.utils.a.b.fU(str2);
            } else {
                int iFS2 = com.kwad.sdk.utils.a.b.fS(str2);
                bArr = new byte[iFS2];
                if (iFS2 == str2.length()) {
                    a(str2, 0, iFS2, bArr, 0);
                    bArr2 = bArr;
                }
                bArrFU = com.kwad.sdk.utils.a.b.fU(str2);
            }
            a(str, str2, bArr2, iVar, (byte) 6);
        }
        bArrFU = aKI;
        bArr2 = bArrFU;
        a(str, str2, bArr2, iVar, (byte) 6);
    }

    public final void release() {
        h.closeQuietly(this.aKQ);
        h.closeQuietly(this.aKR);
        h.closeQuietly(this.aKO);
        h.closeQuietly(this.aKP);
        this.aKO = null;
        this.aKP = null;
        this.aKS = null;
        this.aKT = null;
        String str = this.Tt + this.name;
        C0230c c0230c = a.aLl;
        C0230c.remove(str);
    }

    public final synchronized void remove(String str) {
        a.b bVar = this.aKX.get(str);
        if (bVar != null) {
            this.aKX.remove(str);
            byte bKf = bVar.Kf();
            String str2 = null;
            if (bKf <= 5) {
                a(bKf, bVar.offset - (com.kwad.sdk.utils.a.b.fS(str) + 2), bVar.offset + aKH[bKf]);
            } else {
                a.j jVar = (a.j) bVar;
                a(bKf, jVar.start, jVar.offset + jVar.aKD);
                if (jVar.aKE) {
                    str2 = (String) jVar.value;
                }
            }
            byte b2 = (byte) (bKf | ByteCompanionObject.MIN_VALUE);
            if (this.aLg == 0) {
                if (this.aKS != null) {
                    this.aKS.putLong(4, this.aKW);
                    this.aKS.put(this.aLb, b2);
                }
                if (this.aKT != null) {
                    this.aKT.putLong(4, this.aKW);
                    this.aKT.put(this.aLb, b2);
                }
            } else if (this.aKU != null) {
                this.aKU.g(4, this.aKW);
            }
            this.aLb = 0;
            if (str2 != null) {
                h.h(new File(this.Tt + this.name, str2));
            }
            Kw();
            Km();
        }
    }

    public final synchronized String toString() {
        return "FastKV: path:" + this.Tt + " name:" + this.name;
    }
}
