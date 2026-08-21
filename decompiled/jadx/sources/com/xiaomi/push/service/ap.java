package com.xiaomi.push.service;

import android.os.Process;
import android.text.TextUtils;
import com.xiaomi.push.dw;
import com.xiaomi.push.fh;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.net.Socket;
import java.util.List;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;
import java.util.regex.Pattern;

/* JADX INFO: loaded from: classes4.dex */
public class ap {

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final Pattern f919a = Pattern.compile("([0-9]{1,3}\\.[0-9]{1,3}\\.[0-9]{1,3}\\.[0-9]{1,3})");

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static long f8312a = 0;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static ThreadPoolExecutor f918a = new ThreadPoolExecutor(1, 1, 20, TimeUnit.SECONDS, new LinkedBlockingQueue());

    private static String a(String str) throws Throwable {
        BufferedReader bufferedReader;
        Throwable th;
        try {
            bufferedReader = new BufferedReader(new FileReader(new File(str)));
            try {
                StringBuilder sb = new StringBuilder();
                while (true) {
                    String line = bufferedReader.readLine();
                    if (line == null) {
                        String string = sb.toString();
                        com.xiaomi.push.ab.a(bufferedReader);
                        return string;
                    }
                    sb.append("\n");
                    sb.append(line);
                }
            } catch (Exception unused) {
                com.xiaomi.push.ab.a(bufferedReader);
                return null;
            } catch (Throwable th2) {
                th = th2;
                com.xiaomi.push.ab.a(bufferedReader);
                throw th;
            }
        } catch (Exception unused2) {
            bufferedReader = null;
        } catch (Throwable th3) {
            bufferedReader = null;
            th = th3;
        }
    }

    public static void a() {
        dw.a aVarM666a;
        long jCurrentTimeMillis = System.currentTimeMillis();
        if ((f918a.getActiveCount() <= 0 || jCurrentTimeMillis - f8312a >= 1800000) && fh.m337a().m342a() && (aVarM666a = bv.a().m666a()) != null && aVarM666a.e() > 0) {
            f8312a = jCurrentTimeMillis;
            a(aVarM666a.m231a(), true);
        }
    }

    public static void a(List<String> list, boolean z) {
        f918a.execute(new aq(list, z));
    }

    public static void b() throws Throwable {
        String strA = a("/proc/self/net/tcp");
        if (!TextUtils.isEmpty(strA)) {
            com.xiaomi.channel.commonutils.logger.b.m43a("dump tcp for uid = " + Process.myUid());
            com.xiaomi.channel.commonutils.logger.b.m43a(strA);
        }
        String strA2 = a("/proc/self/net/tcp6");
        if (TextUtils.isEmpty(strA2)) {
            return;
        }
        com.xiaomi.channel.commonutils.logger.b.m43a("dump tcp6 for uid = " + Process.myUid());
        com.xiaomi.channel.commonutils.logger.b.m43a(strA2);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static boolean b(String str) {
        long jCurrentTimeMillis = System.currentTimeMillis();
        try {
            com.xiaomi.channel.commonutils.logger.b.m43a("ConnectivityTest: begin to connect to " + str);
            Socket socket = new Socket();
            socket.connect(com.xiaomi.push.ct.m204a(str, 5222), 5000);
            socket.setTcpNoDelay(true);
            com.xiaomi.channel.commonutils.logger.b.m43a("ConnectivityTest: connect to " + str + " in " + (System.currentTimeMillis() - jCurrentTimeMillis));
            socket.close();
            return true;
        } catch (Throwable th) {
            com.xiaomi.channel.commonutils.logger.b.d("ConnectivityTest: could not connect to:" + str + " exception: " + th.getClass().getSimpleName() + " description: " + th.getMessage());
            return false;
        }
    }
}
