package com.xiaomi.push;

import android.content.Context;
import android.os.Build;
import com.xiaomi.mipush.sdk.Constants;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.Iterator;
import java.util.Locale;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/* JADX INFO: loaded from: classes4.dex */
class de {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static String f8099a = "/MiPushLog";

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private int f215a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private boolean f218a;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    private String f219b;
    private String c;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private final SimpleDateFormat f216a = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss");
    private int b = 2097152;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private ArrayList<File> f217a = new ArrayList<>();

    de() {
    }

    private void a(BufferedReader bufferedReader, BufferedWriter bufferedWriter, Pattern pattern) throws IOException {
        char[] cArr = new char[4096];
        int i = bufferedReader.read(cArr);
        boolean z = false;
        while (i != -1 && !z) {
            String str = new String(cArr, 0, i);
            Matcher matcher = pattern.matcher(str);
            int i2 = 0;
            int i3 = 0;
            while (true) {
                if (i2 >= i || !matcher.find(i2)) {
                    break;
                }
                int iStart = matcher.start();
                String strSubstring = str.substring(iStart, this.f219b.length() + iStart);
                if (this.f218a) {
                    if (strSubstring.compareTo(this.c) > 0) {
                        z = true;
                        i = iStart;
                        break;
                    }
                } else if (strSubstring.compareTo(this.f219b) >= 0) {
                    this.f218a = true;
                    i3 = iStart;
                }
                int iIndexOf = str.indexOf(10, iStart);
                if (iIndexOf == -1) {
                    iIndexOf = this.f219b.length();
                }
                i2 = iStart + iIndexOf;
            }
            if (this.f218a) {
                int i4 = i - i3;
                this.f215a += i4;
                bufferedWriter.write(cArr, i3, i4);
                if (z || this.f215a > this.b) {
                    return;
                }
            }
            i = bufferedReader.read(cArr);
        }
    }

    private void a(File file) throws Throwable {
        BufferedReader bufferedReader;
        String str;
        Pattern patternCompile = Pattern.compile("\\d{4}-\\d{2}-\\d{2} \\d{2}:\\d{2}:\\d{2}");
        BufferedWriter bufferedWriter = null;
        bufferedReader = null;
        bufferedReader = null;
        bufferedReader = null;
        BufferedReader bufferedReader2 = null;
        bufferedWriter = null;
        bufferedWriter = null;
        bufferedWriter = null;
        try {
            try {
                BufferedWriter bufferedWriter2 = new BufferedWriter(new OutputStreamWriter(new FileOutputStream(file)));
                try {
                    bufferedWriter2.write("model :" + Build.MODEL + "; os :" + Build.VERSION.INCREMENTAL + "; uid :" + com.xiaomi.push.service.bv.m662a() + "; lng :" + Locale.getDefault().toString() + "; sdk :48; andver :" + Build.VERSION.SDK_INT + "\n");
                    this.f215a = 0;
                    Iterator<File> it = this.f217a.iterator();
                    while (it.hasNext()) {
                        bufferedReader = new BufferedReader(new InputStreamReader(new FileInputStream(it.next())));
                        try {
                            a(bufferedReader, bufferedWriter2, patternCompile);
                            bufferedReader.close();
                            bufferedReader2 = bufferedReader;
                        } catch (FileNotFoundException e) {
                            e = e;
                            bufferedWriter = bufferedWriter2;
                            str = "LOG: filter error = " + e.getMessage();
                            com.xiaomi.channel.commonutils.logger.b.c(str);
                            ab.a(bufferedWriter);
                            ab.a(bufferedReader);
                            return;
                        } catch (IOException e2) {
                            e = e2;
                            bufferedWriter = bufferedWriter2;
                            str = "LOG: filter error = " + e.getMessage();
                            com.xiaomi.channel.commonutils.logger.b.c(str);
                            ab.a(bufferedWriter);
                            ab.a(bufferedReader);
                            return;
                        } catch (Throwable th) {
                            th = th;
                            bufferedWriter = bufferedWriter2;
                            ab.a(bufferedWriter);
                            ab.a(bufferedReader);
                            throw th;
                        }
                    }
                    bufferedWriter2.write(cv.a().c());
                    ab.a(bufferedWriter2);
                    ab.a(bufferedReader2);
                } catch (FileNotFoundException e3) {
                    e = e3;
                    bufferedReader = bufferedReader2;
                } catch (IOException e4) {
                    e = e4;
                    bufferedReader = bufferedReader2;
                } catch (Throwable th2) {
                    th = th2;
                    bufferedReader = bufferedReader2;
                }
            } catch (Throwable th3) {
                th = th3;
            }
        } catch (FileNotFoundException e5) {
            e = e5;
            bufferedReader = null;
        } catch (IOException e6) {
            e = e6;
            bufferedReader = null;
        } catch (Throwable th4) {
            th = th4;
            bufferedReader = null;
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    de m217a(File file) {
        if (file.exists()) {
            this.f217a.add(file);
        }
        return this;
    }

    de a(Date date, Date date2) {
        String str;
        if (date.after(date2)) {
            this.f219b = this.f216a.format(date2);
            str = this.f216a.format(date);
        } else {
            this.f219b = this.f216a.format(date);
            str = this.f216a.format(date2);
        }
        this.c = str;
        return this;
    }

    File a(Context context, Date date, Date date2, File file) throws Throwable {
        File file2;
        File file3;
        if ("com.xiaomi.xmsf".equalsIgnoreCase(context.getPackageName())) {
            file2 = new File(context.getExternalFilesDir(null), com.xiaomi.push.service.bk.N);
            if (!file2.exists()) {
                file2 = new File(context.getFilesDir(), com.xiaomi.push.service.bk.N);
            }
            if (!file2.exists()) {
                file2 = context.getFilesDir();
            }
            m217a(new File(file2, "xmsf.log.1"));
            file3 = new File(file2, "xmsf.log");
        } else {
            file2 = new File(context.getExternalFilesDir(null) + f8099a);
            m217a(new File(file2, "log0.txt"));
            file3 = new File(file2, "log1.txt");
        }
        m217a(file3);
        if (!file2.isDirectory()) {
            return null;
        }
        File file4 = new File(file, date.getTime() + Constants.ACCEPT_TIME_SEPARATOR_SERVER + date2.getTime() + ".zip");
        if (file4.exists()) {
            return null;
        }
        a(date, date2);
        long jCurrentTimeMillis = System.currentTimeMillis();
        File file5 = new File(file, "log.txt");
        a(file5);
        com.xiaomi.channel.commonutils.logger.b.c("LOG: filter cost = " + (System.currentTimeMillis() - jCurrentTimeMillis));
        if (file5.exists()) {
            long jCurrentTimeMillis2 = System.currentTimeMillis();
            ab.a(file4, file5);
            com.xiaomi.channel.commonutils.logger.b.c("LOG: zip cost = " + (System.currentTimeMillis() - jCurrentTimeMillis2));
            file5.delete();
            if (file4.exists()) {
                return file4;
            }
        }
        return null;
    }

    void a(int i) {
        if (i != 0) {
            this.b = i;
        }
    }
}
