package com.xiaomi.push.service;

import android.content.Context;
import android.text.TextUtils;
import com.xiaomi.push.hn;
import com.xiaomi.push.it;
import java.io.BufferedOutputStream;
import java.io.Closeable;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;

public class ca {
    public static final Object a = new Object();
    public static ArrayList<hn> a = new ArrayList<>();

    public static void a() {
        a.clear();
    }

    public static void a(Context context, hn hnVar) {
        if (bz.a(hnVar.e())) {
            com.xiaomi.push.al.a(context).a(new cb(context, hnVar));
        }
    }

    public static void a(hn hnVar) {
        if (a.size() > 10) {
            a.remove(0);
        }
        a.add(hnVar);
    }

    public static byte[] a(Context context) {
        String strA = com.xiaomi.push.r.a(context).a("mipush", "td_key", "");
        if (TextUtils.isEmpty(strA)) {
            strA = com.xiaomi.push.bp.a(20);
            com.xiaomi.push.r.a(context).a("mipush", "td_key", strA);
        }
        return a(strA);
    }

    private static byte[] a(String str) {
        byte[] bArrCopyOf = Arrays.copyOf(com.xiaomi.push.bm.a(str), 16);
        bArrCopyOf[0] = 68;
        bArrCopyOf[15] = 84;
        return bArrCopyOf;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v0, types: [byte[]] */
    /* JADX WARN: Type inference failed for: r0v1 */
    /* JADX WARN: Type inference failed for: r0v12 */
    /* JADX WARN: Type inference failed for: r0v19 */
    /* JADX WARN: Type inference failed for: r0v20 */
    /* JADX WARN: Type inference failed for: r0v4 */
    /* JADX WARN: Type inference failed for: r0v5, types: [java.io.Closeable] */
    /* JADX WARN: Type inference failed for: r0v7, types: [java.io.Closeable] */
    private static void c(Context context, hn hnVar) throws Throwable {
        BufferedOutputStream bufferedOutputStream;
        BufferedOutputStream bufferedOutputStream2;
        String str;
        String str2;
        ?? A = a(context);
        try {
            try {
                byte[] bArrB = com.xiaomi.push.i.b(A, it.a(hnVar));
                if (bArrB == null || bArrB.length < 1) {
                    str2 = "TinyData write to cache file failed case encryption fail item:" + hnVar.d() + "  ts:" + System.currentTimeMillis();
                } else {
                    if (bArrB.length <= 10240) {
                        BufferedOutputStream bufferedOutputStream3 = new BufferedOutputStream(new FileOutputStream(new File(context.getFilesDir(), "tiny_data.data"), true));
                        try {
                            bufferedOutputStream3.write(com.xiaomi.push.af.a(bArrB.length));
                            bufferedOutputStream3.write(bArrB);
                            bufferedOutputStream3.flush();
                            com.xiaomi.push.ab.a((Closeable) null);
                            com.xiaomi.push.ab.a(bufferedOutputStream3);
                            return;
                        } catch (IOException e) {
                            bufferedOutputStream2 = bufferedOutputStream3;
                            e = e;
                            str = "TinyData write to cache file failed cause io exception item:" + hnVar.d();
                            A = bufferedOutputStream2;
                            com.xiaomi.channel.commonutils.logger.b.a(str, e);
                            com.xiaomi.push.ab.a((Closeable) null);
                            com.xiaomi.push.ab.a((Closeable) A);
                            return;
                        } catch (Exception e2) {
                            bufferedOutputStream = bufferedOutputStream3;
                            e = e2;
                            str = "TinyData write to cache file  failed item:" + hnVar.d();
                            A = bufferedOutputStream;
                            com.xiaomi.channel.commonutils.logger.b.a(str, e);
                            com.xiaomi.push.ab.a((Closeable) null);
                            com.xiaomi.push.ab.a((Closeable) A);
                            return;
                        } catch (Throwable th) {
                            A = bufferedOutputStream3;
                            th = th;
                            com.xiaomi.push.ab.a((Closeable) null);
                            com.xiaomi.push.ab.a((Closeable) A);
                            throw th;
                        }
                    }
                    str2 = "TinyData write to cache file failed case too much data content item:" + hnVar.d() + "  ts:" + System.currentTimeMillis();
                }
                com.xiaomi.channel.commonutils.logger.b.a(str2);
                com.xiaomi.push.ab.a((Closeable) null);
                com.xiaomi.push.ab.a((Closeable) null);
            } catch (Throwable th2) {
                th = th2;
            }
        } catch (IOException e3) {
            e = e3;
            bufferedOutputStream2 = null;
        } catch (Exception e4) {
            e = e4;
            bufferedOutputStream = null;
        } catch (Throwable th3) {
            th = th3;
            A = 0;
        }
    }
}
