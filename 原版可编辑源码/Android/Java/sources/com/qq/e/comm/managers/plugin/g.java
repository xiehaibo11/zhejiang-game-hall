package com.qq.e.comm.managers.plugin;

import android.text.TextUtils;
import com.qq.e.comm.managers.plugin.c;
import com.qq.e.comm.util.GDTLogger;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStreamReader;

class g {
    private final File a;
    private final File b;
    private String c;
    private int d;
    private String e;

    public g(File file, File file2) {
        this.a = file;
        this.b = file2;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r1v0 */
    /* JADX WARN: Type inference failed for: r1v2 */
    /* JADX WARN: Type inference failed for: r1v3, types: [java.io.BufferedReader] */
    private String a(File file) throws Throwable {
        Throwable th;
        ?? r1 = 0;
        if (file != null) {
            try {
                if (file.exists()) {
                    try {
                        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(new FileInputStream(file), "UTF-8"));
                        try {
                            StringBuilder sb = new StringBuilder();
                            while (true) {
                                String line = bufferedReader.readLine();
                                if (line == null) {
                                    break;
                                }
                                sb.append(line);
                            }
                            String string = sb.toString();
                            try {
                                bufferedReader.close();
                            } catch (Exception unused) {
                                GDTLogger.d("Exception while close bufferreader");
                            }
                            return string;
                        } catch (IOException e) {
                            throw e;
                        }
                    } catch (IOException e2) {
                        throw e2;
                    } catch (Throwable th2) {
                        th = th2;
                        if (r1 != 0) {
                            try {
                                r1.close();
                            } catch (Exception unused2) {
                                GDTLogger.d("Exception while close bufferreader");
                            }
                        }
                        throw th;
                    }
                }
            } catch (Throwable th3) {
                r1 = file;
                th = th3;
            }
        }
        return null;
    }

    boolean a() {
        int i;
        try {
            if (this.b.exists() && this.a.exists()) {
                String strA = a(this.b);
                this.e = strA;
                if (TextUtils.isEmpty(strA)) {
                    return false;
                }
                String[] strArrSplit = this.e.split("#####");
                if (strArrSplit.length == 2) {
                    String str = strArrSplit[1];
                    try {
                        i = Integer.parseInt(strArrSplit[0]);
                    } catch (Throwable unused) {
                        i = 0;
                    }
                    if (c.b.a.a(str, this.a)) {
                        this.c = str;
                        this.d = i;
                        return true;
                    }
                }
            }
            return false;
        } catch (Throwable unused2) {
            GDTLogger.d("Exception while checking plugin");
            return false;
        }
    }

    boolean a(File file, File file2) {
        return (file.equals(this.a) || h.a(this.a, file)) && (file2.equals(this.b) || h.a(this.b, file2));
    }

    String b() {
        return this.c;
    }

    int c() {
        return this.d;
    }

    public String d() {
        return this.e;
    }
}
