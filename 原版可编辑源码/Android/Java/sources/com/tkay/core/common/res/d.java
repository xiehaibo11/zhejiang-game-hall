package com.tkay.core.common.res;

import android.content.Context;
import android.text.TextUtils;
import android.util.Log;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;
import com.tkay.core.common.l.j;
import com.tkay.core.common.res.a;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.util.ArrayList;
import java.util.Collections;
import java.util.concurrent.ConcurrentHashMap;

public class d {
    public static final String a = "about:blank";
    private static final String e = "tkay_internal_resouce";
    private static final String f = "tkay_custom_resouce";
    private static final String g = "tkay_internal_extra_resource";
    private static final String h = "tkay_internal_video_resource";
    private static final String i = "tkay_internal_html_resouce";
    private static volatile d j;
    private Context k;
    private File l;
    private final String d = getClass().getSimpleName();
    ConcurrentHashMap<Integer, a> b = new ConcurrentHashMap<>();
    final long c = 172800000;

    private d(Context context) {
        Context applicationContext = context.getApplicationContext();
        this.k = applicationContext;
        this.l = j.a(applicationContext);
    }

    public static d a(Context context) {
        if (j == null) {
            synchronized (d.class) {
                if (j == null) {
                    j = new d(context);
                }
            }
        }
        return j;
    }

    public final String a() {
        return this.l.getAbsolutePath();
    }

    public final String a(String str, i iVar, h hVar) {
        File file = new File(this.l, i);
        if (!file.exists()) {
            file.mkdirs();
        }
        File file2 = new File(file, iVar.d + "_" + hVar.p() + ".html");
        FileOutputStream fileOutputStream = null;
        try {
            byte[] bytes = str.getBytes("utf-8");
            FileOutputStream fileOutputStream2 = new FileOutputStream(file2);
            try {
                fileOutputStream2.write(bytes, 0, bytes.length);
                String string = file2.toURL().toString();
                try {
                    fileOutputStream2.close();
                    return string;
                } catch (Throwable unused) {
                    return string;
                }
            } catch (Throwable unused2) {
                fileOutputStream = fileOutputStream2;
                if (fileOutputStream != null) {
                    try {
                        fileOutputStream.close();
                    } catch (Throwable unused3) {
                    }
                }
                return "";
            }
        } catch (Throwable unused4) {
        }
    }

    public final void a(i iVar, h hVar) {
        try {
            File file = new File(new File(this.l, i), iVar.d + "_" + hVar.p() + ".html");
            if (file.exists()) {
                file.delete();
            }
        } catch (Throwable unused) {
        }
    }

    public final void b() {
        File[] fileArrListFiles;
        try {
            File file = new File(this.l, i);
            if (!file.exists() || (fileArrListFiles = file.listFiles()) == null || fileArrListFiles.length <= 0) {
                return;
            }
            for (File file2 : fileArrListFiles) {
                try {
                    if (file2.isFile() && System.currentTimeMillis() - file2.lastModified() > 86400000) {
                        file2.delete();
                    }
                } catch (Throwable unused) {
                }
            }
        } catch (Throwable unused2) {
        }
    }

    public final void c() {
        com.tkay.core.common.l.b.a.a().a(new Runnable() {
            @Override
            public final void run() {
                try {
                    long jD = m.a().d(1);
                    String strA = d.a(m.a().f()).a(1);
                    long jA = j.a(strA);
                    if (jA <= 0 || jA <= jD * 1.5d) {
                        return;
                    }
                    File[] fileArrListFiles = new File(strA).listFiles();
                    ArrayList arrayList = new ArrayList();
                    if (fileArrListFiles != null) {
                        Collections.addAll(arrayList, fileArrListFiles);
                    }
                    long jCurrentTimeMillis = System.currentTimeMillis();
                    if (arrayList.size() > 0) {
                        for (int i2 = 0; i2 < arrayList.size(); i2++) {
                            File file = (File) arrayList.get(i2);
                            if (jCurrentTimeMillis - file.lastModified() > 172800000) {
                                try {
                                    file.delete();
                                } catch (Throwable unused) {
                                }
                            }
                        }
                    }
                } catch (Throwable th) {
                    th.printStackTrace();
                }
            }
        });
    }

    public final File b(i iVar, h hVar) {
        File file = new File(new File(this.l, i), iVar.d + "_" + hVar.p() + ".html");
        if (file.exists()) {
            return file;
        }
        return null;
    }

    /* JADX WARN: Removed duplicated region for block: B:59:0x0083 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean a(int i2, String str, InputStream inputStream) throws Throwable {
        OutputStream outputStream;
        a.c cVarA;
        byte[] bArr;
        boolean z = false;
        if (str != null && inputStream != null) {
            String strA = a(i2);
            if (TextUtils.isEmpty(strA)) {
                return false;
            }
            File file = new File(strA);
            if (!file.exists()) {
                file.mkdirs();
            }
            a aVarA = a(i2, file);
            if (aVarA != null) {
                a.a aVar = null;
                outputStreamA = null;
                outputStreamA = null;
                OutputStream outputStreamA = null;
                OutputStream outputStream2 = null;
                try {
                    try {
                        try {
                            cVarA = aVarA.a(str);
                        } catch (Throwable th) {
                            th = th;
                            if (outputStream2 != null) {
                                try {
                                    outputStream2.close();
                                } catch (IOException unused) {
                                }
                            }
                            throw th;
                        }
                    } catch (Exception e2) {
                        e = e2;
                        outputStream = null;
                    }
                    if (cVarA == null) {
                        a.a aVarB = aVarA.b(str);
                        if (aVarB != null) {
                            try {
                                outputStreamA = aVarB.a(0);
                                bArr = new byte[2048];
                            } catch (Exception e3) {
                                e = e3;
                                OutputStream outputStream3 = outputStreamA;
                                aVar = aVarB;
                                outputStream = outputStream3;
                                try {
                                    new StringBuilder("writeToDiskLruCache - ").append(e);
                                    if (aVar != null) {
                                        try {
                                            aVar.b();
                                        } catch (Exception e4) {
                                            e4.printStackTrace();
                                        }
                                    }
                                    if (outputStream != null) {
                                        outputStream.close();
                                    }
                                    return z;
                                } catch (Throwable th2) {
                                    outputStream2 = outputStream;
                                    th = th2;
                                    if (outputStream2 != null) {
                                    }
                                    throw th;
                                }
                            }
                            while (true) {
                                int i3 = inputStream.read(bArr);
                                if (i3 == -1) {
                                    break;
                                }
                                outputStreamA.write(bArr, 0, i3);
                            }
                            aVarB.a();
                            outputStreamA.close();
                        }
                    } else {
                        cVarA.a().close();
                    }
                    z = true;
                    if (outputStreamA != null) {
                        outputStreamA.close();
                    }
                } catch (IOException unused2) {
                }
            }
        }
        return z;
    }

    public final FileInputStream a(int i2, String str) {
        InputStream inputStreamA;
        if (i2 != 4) {
            String strA = a(i2);
            if (TextUtils.isEmpty(strA)) {
                return null;
            }
            File file = new File(strA);
            if (!file.exists()) {
                file.mkdirs();
            }
            a aVarA = a(i2, file);
            if (aVarA != null) {
                try {
                    a.c cVarA = aVarA.a(str);
                    if (cVarA != null && (inputStreamA = cVarA.a()) != null) {
                        return (FileInputStream) inputStreamA;
                    }
                } catch (Exception e2) {
                    e2.printStackTrace();
                }
            }
            return null;
        }
        try {
            return new FileInputStream(new File(b(4, str)));
        } catch (Throwable unused) {
            return null;
        }
    }

    private synchronized a a(int i2, File file) {
        a aVarA;
        aVarA = this.b.get(Integer.valueOf(i2));
        if (aVarA == null) {
            try {
                aVarA = a.a(file, m.a().d(i2));
                this.b.put(Integer.valueOf(i2), aVarA);
            } catch (Throwable th) {
                if (m.a().z()) {
                    Log.e(this.d, "Create DiskCache error.");
                    th.printStackTrace();
                }
            }
        }
        return aVarA;
    }

    public final String a(int i2) {
        return new File(this.l, i2 != 1 ? i2 != 3 ? i2 != 4 ? f : h : g : e).getAbsolutePath();
    }

    private boolean a(String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        return new File(a(1) + File.separator + str + ".0").exists();
    }

    public final String b(int i2, String str) {
        if (i2 != 4) {
            return a(i2) + File.separator + str + ".0";
        }
        return a(i2) + File.separator + str;
    }
}
