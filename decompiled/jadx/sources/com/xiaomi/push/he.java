package com.xiaomi.push;

import android.content.Context;
import android.content.SharedPreferences;
import java.io.File;

/* JADX INFO: loaded from: classes4.dex */
public class he {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static boolean f8202a;

    class a implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private Context f8203a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private hh f478a;

        public a(Context context, hh hhVar) {
            this.f478a = hhVar;
            this.f8203a = context;
        }

        @Override // java.lang.Runnable
        public void run() throws Throwable {
            he.c(this.f8203a, this.f478a);
        }
    }

    private static void a(Context context) {
        File file = new File(context.getFilesDir() + "/tdReadTemp");
        if (file.exists()) {
            return;
        }
        file.mkdirs();
    }

    public static void a(Context context, hh hhVar) {
        al.a(context).a(new a(context, hhVar));
    }

    /* JADX WARN: Code restructure failed: missing block: B:30:0x009d, code lost:
    
        r15 = "TinyData read from cache file failed cause lengthBuffer < 1 || too big. length:" + r7;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static void a(android.content.Context r12, com.xiaomi.push.hh r13, java.io.File r14, byte[] r15) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 221
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.he.a(android.content.Context, com.xiaomi.push.hh, java.io.File, byte[]):void");
    }

    private static void b(Context context) {
        SharedPreferences.Editor editorEdit = context.getSharedPreferences("mipush_extra", 4).edit();
        editorEdit.putLong("last_tiny_data_upload_timestamp", System.currentTimeMillis() / 1000);
        editorEdit.commit();
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Removed duplicated region for block: B:34:0x00b7  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x00bb  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static void c(android.content.Context r11, com.xiaomi.push.hh r12) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 227
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.he.c(android.content.Context, com.xiaomi.push.hh):void");
    }
}
