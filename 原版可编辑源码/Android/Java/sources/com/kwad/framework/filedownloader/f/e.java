package com.kwad.framework.filedownloader.f;

import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import java.util.Properties;

public class e {
    public final int aeJ;
    public final long aeK;
    public final boolean aeL;
    public final boolean aeM;
    public final int aeN;
    public final boolean aeO;
    public final boolean aeP;

    public static class a {
        private static final e aeQ = new e(0);
    }

    /* JADX WARN: Removed duplicated region for block: B:110:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:39:0x007d A[Catch: all -> 0x01cd, TryCatch #8 {all -> 0x01cd, blocks: (B:7:0x0033, B:8:0x003a, B:9:0x003e, B:10:0x0042, B:11:0x0046, B:12:0x004a, B:37:0x0079, B:39:0x007d, B:41:0x0081, B:42:0x0089), top: B:96:0x0033 }] */
    /* JADX WARN: Removed duplicated region for block: B:42:0x0089 A[Catch: all -> 0x01cd, TRY_LEAVE, TryCatch #8 {all -> 0x01cd, blocks: (B:7:0x0033, B:8:0x003a, B:9:0x003e, B:10:0x0042, B:11:0x0046, B:12:0x004a, B:37:0x0079, B:39:0x007d, B:41:0x0081, B:42:0x0089), top: B:96:0x0033 }] */
    /* JADX WARN: Removed duplicated region for block: B:46:0x009f  */
    /* JADX WARN: Removed duplicated region for block: B:54:0x00cb  */
    /* JADX WARN: Removed duplicated region for block: B:57:0x00d5  */
    /* JADX WARN: Removed duplicated region for block: B:58:0x00e4  */
    /* JADX WARN: Removed duplicated region for block: B:60:0x00ea  */
    /* JADX WARN: Removed duplicated region for block: B:61:0x00fc  */
    /* JADX WARN: Removed duplicated region for block: B:64:0x0105  */
    /* JADX WARN: Removed duplicated region for block: B:65:0x0115  */
    /* JADX WARN: Removed duplicated region for block: B:67:0x011a  */
    /* JADX WARN: Removed duplicated region for block: B:75:0x0143  */
    /* JADX WARN: Removed duplicated region for block: B:77:0x0148  */
    /* JADX WARN: Removed duplicated region for block: B:85:0x0170  */
    /* JADX WARN: Removed duplicated region for block: B:88:0x0176  */
    /* JADX WARN: Type inference failed for: r4v10 */
    /* JADX WARN: Type inference failed for: r4v8 */
    /* JADX WARN: Type inference failed for: r4v9, types: [boolean] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private e() throws Throwable {
        InputStream inputStream;
        InputStream inputStreamOpen;
        String property;
        String property2;
        String property3;
        String property4;
        String property5;
        String str;
        String str2;
        String property6;
        Object obj;
        int i;
        Object obj2;
        long j;
        Object obj3;
        long jMax;
        int i2;
        ?? r4;
        if (c.vM() == null) {
            throw new IllegalStateException("Please invoke the 'FileDownloader#setup' before using FileDownloader. If you want to register some components on FileDownloader please invoke the 'FileDownloader#setupOnApplicationOnCreate' on the 'Application#onCreate' first.");
        }
        long jCurrentTimeMillis = System.currentTimeMillis();
        Properties properties = new Properties();
        try {
            inputStreamOpen = c.vM().getAssets().open("filedownloader.properties");
            if (inputStreamOpen != null) {
                try {
                    try {
                        properties.load(inputStreamOpen);
                        property = properties.getProperty("http.lenient");
                    } catch (IOException e) {
                        e = e;
                        property = null;
                        property2 = null;
                        property3 = null;
                        property4 = null;
                        property5 = null;
                        if (e instanceof FileNotFoundException) {
                            e.printStackTrace();
                        } else if (d.aeI) {
                            d.c(e.class, "not found filedownloader.properties", new Object[0]);
                        }
                        com.kwad.sdk.crash.utils.b.closeQuietly(inputStreamOpen);
                        str = property;
                        str2 = property5;
                        property6 = null;
                        if (str != null) {
                        }
                        this.aeM = true;
                        if (property2 == null) {
                        }
                        if (property3 == null) {
                        }
                        this.aeK = jMax;
                        if (property4 == null) {
                        }
                        if (str2 != null) {
                        }
                        if (property6 != null) {
                        }
                        if (d.aeI) {
                        }
                    }
                    try {
                        property2 = properties.getProperty("download.min-progress-step");
                    } catch (IOException e2) {
                        e = e2;
                        property2 = null;
                        property3 = null;
                        property4 = null;
                        property5 = null;
                        if (e instanceof FileNotFoundException) {
                        }
                        com.kwad.sdk.crash.utils.b.closeQuietly(inputStreamOpen);
                        str = property;
                        str2 = property5;
                        property6 = null;
                        if (str != null) {
                        }
                        this.aeM = true;
                        if (property2 == null) {
                        }
                        if (property3 == null) {
                        }
                        this.aeK = jMax;
                        if (property4 == null) {
                        }
                        if (str2 != null) {
                        }
                        if (property6 != null) {
                        }
                        if (d.aeI) {
                        }
                    }
                    try {
                        property3 = properties.getProperty("download.min-progress-time");
                    } catch (IOException e3) {
                        e = e3;
                        property3 = null;
                        property4 = null;
                        property5 = null;
                        if (e instanceof FileNotFoundException) {
                        }
                        com.kwad.sdk.crash.utils.b.closeQuietly(inputStreamOpen);
                        str = property;
                        str2 = property5;
                        property6 = null;
                        if (str != null) {
                        }
                        this.aeM = true;
                        if (property2 == null) {
                        }
                        if (property3 == null) {
                        }
                        this.aeK = jMax;
                        if (property4 == null) {
                        }
                        if (str2 != null) {
                        }
                        if (property6 != null) {
                        }
                        if (d.aeI) {
                        }
                    }
                    try {
                        property4 = properties.getProperty("download.max-network-thread-count");
                    } catch (IOException e4) {
                        e = e4;
                        property4 = null;
                        property5 = null;
                        if (e instanceof FileNotFoundException) {
                        }
                        com.kwad.sdk.crash.utils.b.closeQuietly(inputStreamOpen);
                        str = property;
                        str2 = property5;
                        property6 = null;
                        if (str != null) {
                        }
                        this.aeM = true;
                        if (property2 == null) {
                        }
                        if (property3 == null) {
                        }
                        this.aeK = jMax;
                        if (property4 == null) {
                        }
                        if (str2 != null) {
                        }
                        if (property6 != null) {
                        }
                        if (d.aeI) {
                        }
                    }
                    try {
                        property5 = properties.getProperty("file.non-pre-allocation");
                    } catch (IOException e5) {
                        e = e5;
                        property5 = null;
                        if (e instanceof FileNotFoundException) {
                        }
                        com.kwad.sdk.crash.utils.b.closeQuietly(inputStreamOpen);
                        str = property;
                        str2 = property5;
                        property6 = null;
                        if (str != null) {
                        }
                        this.aeM = true;
                        if (property2 == null) {
                        }
                        if (property3 == null) {
                        }
                        this.aeK = jMax;
                        if (property4 == null) {
                        }
                        if (str2 != null) {
                        }
                        if (property6 != null) {
                        }
                        if (d.aeI) {
                        }
                    }
                    try {
                        property6 = properties.getProperty("broadcast.completed");
                        str = property;
                    } catch (IOException e6) {
                        e = e6;
                        if (e instanceof FileNotFoundException) {
                        }
                        com.kwad.sdk.crash.utils.b.closeQuietly(inputStreamOpen);
                        str = property;
                        str2 = property5;
                        property6 = null;
                    }
                } catch (Throwable th) {
                    th = th;
                    inputStream = inputStreamOpen;
                    com.kwad.sdk.crash.utils.b.closeQuietly(inputStream);
                    throw th;
                }
            } else {
                property6 = null;
                str = null;
                property2 = null;
                property3 = null;
                property4 = null;
                property5 = null;
            }
            com.kwad.sdk.crash.utils.b.closeQuietly(inputStreamOpen);
            str2 = property5;
        } catch (IOException e7) {
            e = e7;
            inputStreamOpen = null;
        } catch (Throwable th2) {
            th = th2;
            inputStream = null;
        }
        if (str != null) {
            obj = "download.max-network-thread-count";
            i = 0;
            this.aeL = false;
        } else {
            if (!str.equals("true") && !str.equals("false")) {
                throw new IllegalStateException(f.b("the value of '%s' must be '%s' or '%s'", "http.lenient", "true", "false"));
            }
            obj = "download.max-network-thread-count";
            i = 0;
            this.aeL = str.equals("true");
        }
        this.aeM = true;
        if (property2 == null) {
            this.aeJ = Math.max(i, Integer.valueOf(property2).intValue());
        } else {
            this.aeJ = 65536;
        }
        if (property3 == null) {
            obj2 = "download.min-progress-time";
            j = jCurrentTimeMillis;
            obj3 = "http.lenient";
            jMax = Math.max(0L, Long.valueOf(property3).longValue());
        } else {
            obj2 = "download.min-progress-time";
            j = jCurrentTimeMillis;
            obj3 = "http.lenient";
            jMax = 2000;
        }
        this.aeK = jMax;
        if (property4 == null) {
            this.aeN = bG(Integer.valueOf(property4).intValue());
            i2 = 3;
        } else {
            i2 = 3;
            this.aeN = 3;
        }
        if (str2 != null) {
            r4 = 0;
            this.aeO = false;
        } else {
            if (!str2.equals("true") && !str2.equals("false")) {
                Object[] objArr = new Object[i2];
                objArr[0] = "file.non-pre-allocation";
                objArr[1] = "true";
                objArr[2] = "false";
                throw new IllegalStateException(f.b("the value of '%s' must be '%s' or '%s'", objArr));
            }
            r4 = 0;
            this.aeO = str2.equals("true");
        }
        if (property6 != null) {
            this.aeP = r4;
        } else {
            if (!property6.equals("true") && !property6.equals("false")) {
                Object[] objArr2 = new Object[3];
                objArr2[r4] = "broadcast.completed";
                objArr2[1] = "true";
                objArr2[2] = "false";
                throw new IllegalStateException(f.b("the value of '%s' must be '%s' or '%s'", objArr2));
            }
            this.aeP = property6.equals("true");
        }
        if (d.aeI) {
            return;
        }
        Object[] objArr3 = new Object[11];
        objArr3[r4] = Long.valueOf(System.currentTimeMillis() - j);
        objArr3[1] = obj3;
        objArr3[2] = Boolean.valueOf(this.aeL);
        objArr3[3] = "process.non-separate";
        objArr3[4] = Boolean.valueOf(this.aeM);
        objArr3[5] = "download.min-progress-step";
        objArr3[6] = Integer.valueOf(this.aeJ);
        objArr3[7] = obj2;
        objArr3[8] = Long.valueOf(this.aeK);
        objArr3[9] = obj;
        objArr3[10] = Integer.valueOf(this.aeN);
        d.b(e.class, "init properties %d\n load properties: %s=%B; %s=%B; %s=%d; %s=%d; %s=%d", objArr3);
    }

    e(byte b) {
        this();
    }

    public static int bG(int i) {
        if (i > 12) {
            d.d(e.class, "require the count of network thread  is %d, what is more than the max valid count(%d), so adjust to %d auto", Integer.valueOf(i), 12, 12);
            return 12;
        }
        if (i > 0) {
            return i;
        }
        d.d(e.class, "require the count of network thread  is %d, what is less than the min valid count(%d), so adjust to %d auto", Integer.valueOf(i), 1, 1);
        return 1;
    }

    public static e vO() {
        return a.aeQ;
    }
}
