package com.tkay.china.common;

import android.content.BroadcastReceiver;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.ServiceConnection;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.net.Uri;
import android.os.Build;
import android.os.IBinder;
import android.support.v4.content.FileProvider;
import android.text.TextUtils;
import android.util.Log;
import android.widget.Toast;
import com.ss.android.downloadad.api.constant.AdBaseConstants;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.tkay.china.common.a.a;
import com.tkay.china.common.a.e;
import com.tkay.china.common.a.g;
import com.tkay.china.common.service.ApkDownloadService;
import com.tkay.core.common.b.m;
import com.tkay.core.common.l.h;
import java.io.File;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes3.dex */
public class a implements g {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f5910a = a.class.getSimpleName();
    public static final String b = "action_offer_download_start";
    public static final String c = "action_offer_download_end";
    public static final String d = "action_offer_install_start";
    public static final String e = "action_offer_install_successful";
    public static final String f = "receiver_extra_offer_id";
    public static final String g = "receiver_extra_click_id";
    private static volatile a h;
    private Context i;
    private ConcurrentHashMap<String, e> n;
    private ConcurrentHashMap<String, e> o;
    private ConcurrentHashMap<String, e> p;
    private Map<String, e> q;
    private BroadcastReceiver t;
    private ApkDownloadService.a u;
    private BroadcastReceiver v;
    private final int r = 1;
    private long s = 604800000;
    private ServiceConnection w = new ServiceConnection() { // from class: com.tkay.china.common.a.1
        @Override // android.content.ServiceConnection
        public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            String str = a.f5910a;
            try {
                a.this.u = (ApkDownloadService.a) iBinder;
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }

        @Override // android.content.ServiceConnection
        public final void onServiceDisconnected(ComponentName componentName) {
            String str = a.f5910a;
            a.this.u = null;
        }
    };
    private List<e> j = Collections.synchronizedList(new LinkedList());
    private ConcurrentHashMap<String, e> k = new ConcurrentHashMap<>();
    private ConcurrentHashMap<String, e> l = new ConcurrentHashMap<>();
    private ConcurrentHashMap<String, a.InterfaceC0405a> m = new ConcurrentHashMap<>();

    @Override // com.tkay.china.common.a.g
    public final int a() {
        return 1;
    }

    private a(Context context) {
        this.i = context.getApplicationContext();
        String strA = com.tkay.china.common.c.b.a();
        if (!TextUtils.isEmpty(strA)) {
            File file = new File(strA);
            if (!file.exists()) {
                file.mkdirs();
            }
        }
        try {
            this.v = new BroadcastReceiver() { // from class: com.tkay.china.common.a.2
                @Override // android.content.BroadcastReceiver
                public final void onReceive(Context context2, Intent intent) {
                    try {
                        ConnectivityManager connectivityManager = (ConnectivityManager) context2.getSystemService("connectivity");
                        if (connectivityManager == null || !h.a(com.kuaishou.weapon.p0.g.b, context2)) {
                            return;
                        }
                        NetworkInfo activeNetworkInfo = connectivityManager.getActiveNetworkInfo();
                        if (h.a(context2) && activeNetworkInfo.getType() == 1) {
                            a.a(a.this);
                        }
                    } catch (Throwable th) {
                        th.printStackTrace();
                    }
                }
            };
            IntentFilter intentFilter = new IntentFilter();
            intentFilter.addAction("android.net.conn.CONNECTIVITY_CHANGE");
            this.i.registerReceiver(this.v, intentFilter);
        } catch (Throwable unused) {
        }
    }

    public static a a(Context context) {
        if (h == null) {
            synchronized (a.class) {
                if (h == null) {
                    h = new a(context);
                }
            }
        }
        return h;
    }

    /* JADX WARN: Removed duplicated region for block: B:57:0x0139  */
    /* JADX WARN: Removed duplicated region for block: B:59:0x013c A[Catch: all -> 0x017e, TryCatch #1 {all -> 0x017e, blocks: (B:38:0x00ea, B:41:0x00f6, B:43:0x0101, B:46:0x0106, B:48:0x0115, B:50:0x0123, B:54:0x012a, B:56:0x0134, B:59:0x013c, B:63:0x014c, B:60:0x0140, B:62:0x0149, B:64:0x014f, B:66:0x0155), top: B:74:0x00ea }] */
    /* JADX WARN: Removed duplicated region for block: B:60:0x0140 A[Catch: all -> 0x017e, TryCatch #1 {all -> 0x017e, blocks: (B:38:0x00ea, B:41:0x00f6, B:43:0x0101, B:46:0x0106, B:48:0x0115, B:50:0x0123, B:54:0x012a, B:56:0x0134, B:59:0x013c, B:63:0x014c, B:60:0x0140, B:62:0x0149, B:64:0x014f, B:66:0x0155), top: B:74:0x00ea }] */
    @Override // com.tkay.china.common.a.g
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final void a(android.content.Context r18, com.tkay.core.common.f.i r19, com.tkay.core.common.f.h r20, java.lang.String r21, java.lang.String r22, java.lang.Runnable r23, com.tkay.core.common.g.b r24) {
        /*
            Method dump skipped, instruction units count: 394
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.china.common.a.a(android.content.Context, com.tkay.core.common.f.i, com.tkay.core.common.f.h, java.lang.String, java.lang.String, java.lang.Runnable, com.tkay.core.common.g.b):void");
    }

    private void a(long j) {
        if (j > 0) {
            this.s = j;
        }
    }

    @Override // com.tkay.china.common.a.g
    public final void a(e eVar) {
        if (eVar == null) {
            return;
        }
        if (this.k.containsKey(eVar.n)) {
            File file = new File(com.tkay.china.common.c.b.a(eVar.n) + com.tkay.china.common.a.a.e);
            File file2 = new File(com.tkay.china.common.c.b.a(eVar.n) + com.tkay.china.common.a.a.f);
            if (file.exists() && file2.exists()) {
                Log.i(f5910a, "(" + eVar.c + ") is downloading, do nothing");
                StringBuilder sb = new StringBuilder("正在下载中： ");
                sb.append(eVar.c);
                d(sb.toString());
                return;
            }
            this.k.remove(eVar.n);
        }
        int size = this.j.size();
        for (int i = 0; i < size; i++) {
            if (TextUtils.equals(eVar.n, this.j.get(i).n)) {
                Log.i(f5910a, "(" + eVar.c + ") is waiting for downloading, do nothing");
                StringBuilder sb2 = new StringBuilder("等待下载： ");
                sb2.append(eVar.c);
                d(sb2.toString());
                return;
            }
        }
        this.j.add(eVar);
        com.tkay.china.common.b.a.a(this.i).c(eVar);
        com.tkay.china.common.b.a.a(this.i).a(eVar, 0L, 100L, true);
    }

    @Override // com.tkay.china.common.a.g
    public final boolean a(String str) {
        String str2 = com.tkay.china.common.c.b.a(str) + com.tkay.china.common.a.a.g;
        if (TextUtils.isEmpty(str2)) {
            return false;
        }
        return new File(str2).exists();
    }

    @Override // com.tkay.china.common.a.g
    public final void b() {
        synchronized (this.j) {
            int size = this.j.size();
            if (size == 0) {
                return;
            }
            int size2 = this.k.size();
            if (size2 > 0) {
                return;
            }
            int iMin = Math.min(1 - size2, size);
            for (int i = 0; i < iMin && this.j.size() > 0; i++) {
                e eVarRemove = this.j.remove(0);
                this.k.put(eVarRemove.n, eVarRemove);
                this.m.put(eVarRemove.n, new AnonymousClass3());
                try {
                    if (this.u != null) {
                        this.u.a(eVarRemove.n);
                    } else {
                        Intent intent = new Intent();
                        intent.setClass(this.i, ApkDownloadService.class);
                        intent.putExtra(ApkDownloadService.f5936a, eVarRemove.n);
                        this.i.bindService(intent, this.w, 1);
                    }
                } catch (Throwable unused) {
                }
            }
        }
    }

    private void e(e eVar) {
        this.k.put(eVar.n, eVar);
        this.m.put(eVar.n, new AnonymousClass3());
        try {
            if (this.u != null) {
                this.u.a(eVar.n);
                return;
            }
            Intent intent = new Intent();
            intent.setClass(this.i, ApkDownloadService.class);
            intent.putExtra(ApkDownloadService.f5936a, eVar.n);
            this.i.bindService(intent, this.w, 1);
        } catch (Throwable unused) {
        }
    }

    /* JADX INFO: renamed from: com.tkay.china.common.a$3, reason: invalid class name */
    final class AnonymousClass3 implements a.InterfaceC0405a {
        AnonymousClass3() {
        }

        @Override // com.tkay.china.common.a.a.InterfaceC0405a
        public final void a(final e eVar, final long j, final long j2) {
            String str = a.f5910a;
            new StringBuilder("onStartBefore: ").append(eVar.b);
            m.a().a(new Runnable() { // from class: com.tkay.china.common.a.3.1
                @Override // java.lang.Runnable
                public final void run() {
                    if (j < j2) {
                        a.this.d("正在下载： " + eVar.c);
                        com.tkay.china.common.b.a.a(a.this.i).c(eVar);
                        com.tkay.china.common.b.a.a(a.this.i).a(eVar, j, j2);
                    }
                    Intent intent = new Intent();
                    intent.setAction(a.b);
                    intent.setPackage(a.this.i.getPackageName());
                    intent.putExtra(a.f, eVar.f);
                    intent.putExtra(a.g, eVar.m);
                    com.tkay.core.common.m.a(a.this.i).a(intent);
                    com.tkay.core.common.k.c.a(eVar.f5927a, eVar.f, eVar.b, 1, (String) null, 0L, j2);
                }
            });
        }

        @Override // com.tkay.china.common.a.a.InterfaceC0405a
        public final void a(final e eVar, final long j) {
            Log.i(a.f5910a, "onSuccess: " + eVar.c);
            m.a().a(new Runnable() { // from class: com.tkay.china.common.a.3.2
                @Override // java.lang.Runnable
                public final void run() {
                    a.this.m.remove(eVar.n);
                    a.this.k.remove(eVar.n);
                    if (a.this.n == null) {
                        a.this.n = new ConcurrentHashMap();
                    }
                    a.this.n.put(eVar.n, eVar);
                    Intent intent = new Intent();
                    intent.setAction(a.c);
                    intent.setPackage(a.this.i.getPackageName());
                    intent.putExtra(a.f, eVar.f);
                    intent.putExtra(a.g, eVar.m);
                    com.tkay.core.common.m.a(a.this.i).a(intent);
                    a.this.b(eVar);
                    com.tkay.china.common.b.a.a(a.this.i).c(eVar);
                    com.tkay.china.common.b.a.a(a.this.i).a(eVar);
                    com.tkay.core.common.k.c.a(eVar.f5927a, eVar.f, eVar.b, 2, (String) null, j, eVar.h);
                    a.this.b();
                }
            });
        }

        @Override // com.tkay.china.common.a.a.InterfaceC0405a
        public final void b(final e eVar, final long j, final long j2) {
            m.a().a(new Runnable() { // from class: com.tkay.china.common.a.3.3
                @Override // java.lang.Runnable
                public final void run() {
                    com.tkay.china.common.b.a.a(a.this.i).a(eVar, j, j2);
                }
            });
        }

        @Override // com.tkay.china.common.a.a.InterfaceC0405a
        public final void a(final e eVar, final String str) {
            Log.e(a.f5910a, "(" + eVar.c + ") download fail: " + str);
            m.a().a(new Runnable() { // from class: com.tkay.china.common.a.3.4
                @Override // java.lang.Runnable
                public final void run() {
                    a.this.d("下载失败： " + eVar.c);
                    a.this.m.remove(eVar.n);
                    a.this.k.remove(eVar.n);
                    if (a.this.q == null) {
                        a.this.q = Collections.synchronizedMap(new HashMap());
                    }
                    a.this.q.put(eVar.n, eVar);
                    com.tkay.china.common.b.a.a(a.this.i).c(eVar);
                    com.tkay.china.common.b.a.a(a.this.i).a(eVar, 0L, 100L);
                    com.tkay.core.common.k.c.a(eVar.f5927a, eVar.f, eVar.b, 3, str, 0L, eVar.h);
                    a.this.b();
                }
            });
        }

        @Override // com.tkay.china.common.a.a.InterfaceC0405a
        public final void a(final e eVar, final long j, final long j2, final int i) {
            String str = a.f5910a;
            m.a().a(new Runnable() { // from class: com.tkay.china.common.a.3.5
                @Override // java.lang.Runnable
                public final void run() {
                    a.this.k.remove(eVar.n);
                    com.tkay.china.common.b.a.a(a.this.i).c(eVar);
                    int i2 = i;
                    if (i2 == 2) {
                        Log.e(a.f5910a, "(" + eVar.c + ") pause download");
                        com.tkay.china.common.b.a.a(a.this.i).a(eVar, j, j2);
                        a.this.b();
                        return;
                    }
                    if (i2 == 3) {
                        Log.e(a.f5910a, "(" + eVar.c + ") stop download");
                    }
                }
            });
        }
    }

    @Override // com.tkay.china.common.a.g
    public final boolean c() {
        if (Build.VERSION.SDK_INT >= 26) {
            return this.i.getPackageManager().canRequestPackageInstalls();
        }
        return true;
    }

    @Override // com.tkay.china.common.a.g
    public final void d() {
        Intent intent = new Intent("android.settings.MANAGE_UNKNOWN_APP_SOURCES", Uri.parse("package:" + this.i.getPackageName()));
        intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        this.i.startActivity(intent);
    }

    @Override // com.tkay.china.common.a.g
    public final void b(e eVar) {
        Intent intent = new Intent();
        intent.setAction(d);
        intent.setPackage(this.i.getPackageName());
        intent.putExtra(f, eVar.f);
        intent.putExtra(g, eVar.m);
        com.tkay.core.common.m.a(this.i).a(intent);
        if (this.o == null) {
            this.o = new ConcurrentHashMap<>();
        }
        if (TextUtils.isEmpty(eVar.e)) {
            String strF = f(eVar);
            if (!TextUtils.isEmpty(strF)) {
                eVar.e = com.tkay.china.common.c.a.a(this.i, new File(strF));
            }
        }
        this.o.put(eVar.e, eVar);
        try {
            if (this.t == null) {
                this.t = new b();
                IntentFilter intentFilter = new IntentFilter();
                intentFilter.addAction("android.intent.action.PACKAGE_ADDED");
                intentFilter.addAction("android.intent.action.PACKAGE_REPLACED");
                intentFilter.addDataScheme("package");
                this.i.registerReceiver(this.t, intentFilter);
            }
        } catch (Throwable unused) {
        }
        String strF2 = f(eVar);
        if (TextUtils.isEmpty(strF2)) {
            return;
        }
        new StringBuilder("install: ").append(eVar.c);
        File file = new File(strF2);
        try {
            Intent intent2 = new Intent("android.intent.action.VIEW");
            intent2.setFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            if (Build.VERSION.SDK_INT >= 24) {
                intent2.addFlags(1);
                intent2.setDataAndType(FileProvider.getUriForFile(this.i, this.i.getPackageName() + ".tkay.fileProvider", file), AdBaseConstants.MIME_APK);
            } else {
                intent2.setDataAndType(Uri.parse("file://".concat(String.valueOf(strF2))), AdBaseConstants.MIME_APK);
            }
            this.i.startActivity(intent2);
            com.tkay.core.common.k.c.a(eVar.f5927a, eVar.f, eVar.b, 4, (String) null, 0L, file.length());
        } catch (Throwable th) {
            th.printStackTrace();
            com.tkay.core.common.k.c.a(eVar.f5927a, eVar.f, eVar.b, 10, th.getMessage(), 0L, file.length());
        }
    }

    @Override // com.tkay.china.common.a.g
    public final void c(e eVar) {
        String strF = f(eVar);
        if (TextUtils.isEmpty(strF)) {
            return;
        }
        new StringBuilder("install: ").append(eVar.c);
        File file = new File(strF);
        try {
            Intent intent = new Intent("android.intent.action.VIEW");
            intent.setFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            if (Build.VERSION.SDK_INT >= 24) {
                intent.addFlags(1);
                intent.setDataAndType(FileProvider.getUriForFile(this.i, this.i.getPackageName() + ".tkay.fileProvider", file), AdBaseConstants.MIME_APK);
            } else {
                intent.setDataAndType(Uri.parse("file://".concat(String.valueOf(strF))), AdBaseConstants.MIME_APK);
            }
            this.i.startActivity(intent);
            com.tkay.core.common.k.c.a(eVar.f5927a, eVar.f, eVar.b, 4, (String) null, 0L, file.length());
        } catch (Throwable th) {
            th.printStackTrace();
            com.tkay.core.common.k.c.a(eVar.f5927a, eVar.f, eVar.b, 10, th.getMessage(), 0L, file.length());
        }
    }

    private static String f(e eVar) {
        return com.tkay.china.common.c.b.a(eVar.n) + com.tkay.china.common.a.a.g;
    }

    /* JADX WARN: Removed duplicated region for block: B:21:0x004e  */
    /* JADX WARN: Removed duplicated region for block: B:23:0x0051 A[Catch: all -> 0x0094, TryCatch #0 {all -> 0x0094, blocks: (B:2:0x0000, B:5:0x000b, B:7:0x0016, B:10:0x001a, B:12:0x002a, B:14:0x0038, B:18:0x003f, B:20:0x0049, B:23:0x0051, B:27:0x0061, B:24:0x0055, B:26:0x005e, B:28:0x0064, B:30:0x006a), top: B:36:0x0000 }] */
    /* JADX WARN: Removed duplicated region for block: B:24:0x0055 A[Catch: all -> 0x0094, TryCatch #0 {all -> 0x0094, blocks: (B:2:0x0000, B:5:0x000b, B:7:0x0016, B:10:0x001a, B:12:0x002a, B:14:0x0038, B:18:0x003f, B:20:0x0049, B:23:0x0051, B:27:0x0061, B:24:0x0055, B:26:0x005e, B:28:0x0064, B:30:0x006a), top: B:36:0x0000 }] */
    @Override // com.tkay.china.common.a.g
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final void e() {
        /*
            r13 = this;
            java.lang.String r0 = com.tkay.china.common.c.b.a()     // Catch: java.lang.Throwable -> L94
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L94
            if (r1 == 0) goto Lb
            return
        Lb:
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L94
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L94
            java.io.File[] r0 = r1.listFiles()     // Catch: java.lang.Throwable -> L94
            if (r0 == 0) goto L1a
            int r1 = r0.length     // Catch: java.lang.Throwable -> L94
            if (r1 != 0) goto L1a
            return
        L1a:
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L94
            r1.<init>()     // Catch: java.lang.Throwable -> L94
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L94
            long r4 = r13.s     // Catch: java.lang.Throwable -> L94
            int r6 = r0.length     // Catch: java.lang.Throwable -> L94
            r7 = 0
            r8 = r7
        L28:
            if (r8 >= r6) goto L64
            r9 = r0[r8]     // Catch: java.lang.Throwable -> L94
            java.lang.String r10 = r9.getName()     // Catch: java.lang.Throwable -> L94
            java.lang.String r11 = ".apk"
            boolean r10 = r10.endsWith(r11)     // Catch: java.lang.Throwable -> L94
            if (r10 == 0) goto L55
            android.content.Context r10 = r13.i     // Catch: java.lang.Throwable -> L94
            if (r10 == 0) goto L4e
            if (r9 != 0) goto L3f
            goto L4e
        L3f:
            java.lang.String r11 = com.tkay.china.common.c.a.a(r10, r9)     // Catch: java.lang.Throwable -> L94
            boolean r12 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Throwable -> L94
            if (r12 != 0) goto L4e
            boolean r10 = com.tkay.china.common.c.a.a(r10, r11)     // Catch: java.lang.Throwable -> L94
            goto L4f
        L4e:
            r10 = r7
        L4f:
            if (r10 == 0) goto L55
            r1.add(r9)     // Catch: java.lang.Throwable -> L94
            goto L61
        L55:
            long r10 = r9.lastModified()     // Catch: java.lang.Throwable -> L94
            long r10 = r10 + r4
            int r10 = (r10 > r2 ? 1 : (r10 == r2 ? 0 : -1))
            if (r10 >= 0) goto L61
            r1.add(r9)     // Catch: java.lang.Throwable -> L94
        L61:
            int r8 = r8 + 1
            goto L28
        L64:
            int r0 = r1.size()     // Catch: java.lang.Throwable -> L94
        L68:
            if (r7 >= r0) goto L93
            java.lang.String r2 = com.tkay.china.common.a.f5910a     // Catch: java.lang.Throwable -> L94
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L94
            java.lang.String r4 = "clean expired file -> "
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L94
            java.lang.Object r4 = r1.get(r7)     // Catch: java.lang.Throwable -> L94
            java.io.File r4 = (java.io.File) r4     // Catch: java.lang.Throwable -> L94
            java.lang.String r4 = r4.getName()     // Catch: java.lang.Throwable -> L94
            r3.append(r4)     // Catch: java.lang.Throwable -> L94
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L94
            android.util.Log.i(r2, r3)     // Catch: java.lang.Throwable -> L94
            java.lang.Object r2 = r1.get(r7)     // Catch: java.lang.Throwable -> L94
            java.io.File r2 = (java.io.File) r2     // Catch: java.lang.Throwable -> L94
            r2.delete()     // Catch: java.lang.Throwable -> L94
            int r7 = r7 + 1
            goto L68
        L93:
            return
        L94:
            r0 = move-exception
            r0.printStackTrace()
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.china.common.a.e():void");
    }

    @Override // com.tkay.china.common.a.g
    public final void d(e eVar) {
        try {
            if (a(eVar.n)) {
                eVar.l();
                b(eVar);
                return;
            }
            e eVar2 = this.l.get(eVar.n);
            if (eVar2 != null) {
                this.l.remove(eVar.n);
                eVar2.e();
                a(eVar2);
            } else {
                a(eVar);
            }
            b();
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override // com.tkay.china.common.a.g
    public final void a(String str, String str2, int i) {
        e eVar;
        try {
            if (str2.equals(e.a.FAIL.toString())) {
                if (this.q != null) {
                    e eVarRemove = this.q.remove(str);
                    if (eVarRemove != null) {
                        eVarRemove.e();
                        Log.i(f5910a, "(" + eVarRemove.c + ") onClickNotification: download fail to retry");
                        d(eVarRemove);
                        return;
                    }
                    com.tkay.china.common.b.a.a(this.i).a(i);
                    return;
                }
                return;
            }
            if (str2.equals(e.a.FINISH.toString())) {
                if (this.n != null) {
                    e eVar2 = this.n.get(str);
                    if (eVar2 != null) {
                        Log.i(f5910a, "(" + eVar2.c + ") onClickNotification: start intall");
                        com.tkay.china.common.b.a.a(this.i).c(eVar2);
                        com.tkay.china.common.b.a.a(this.i).a(eVar2);
                        b(eVar2);
                        return;
                    }
                    com.tkay.china.common.b.a.a(this.i).a(i);
                    return;
                }
                return;
            }
            if (str2.equals(e.a.INSTALLED.toString())) {
                if (this.p != null) {
                    e eVar3 = this.p.get(str);
                    if (eVar3 != null) {
                        Log.i(f5910a, "(" + eVar3.c + ") onClickNotification: start open");
                        com.tkay.china.common.b.a.a(this.i).c(eVar3);
                        a(eVar3, true);
                        return;
                    }
                    com.tkay.china.common.b.a.a(this.i).a(i);
                    return;
                }
                return;
            }
            if (str2.equals(e.a.LOADING.toString())) {
                e eVar4 = this.k.get(str);
                if (eVar4 != null) {
                    if (!eVar4.d() || eVar4.q == 2) {
                        return;
                    }
                    Log.i(f5910a, "(" + eVar4.c + ") onClickNotification: pause download");
                    if (this.u != null) {
                        this.u.b(eVar4.n);
                    }
                    this.l.put(eVar4.n, eVar4);
                    return;
                }
                com.tkay.china.common.b.a.a(this.i).a(i);
                return;
            }
            if (str2.equals(e.a.PAUSE.toString())) {
                e eVar5 = this.l.get(str);
                if (eVar5 != null) {
                    Log.i(f5910a, "(" + eVar5.c + ") onClickNotification: resume download");
                    d(eVar5);
                    return;
                }
                com.tkay.china.common.b.a.a(this.i).a(i);
                return;
            }
            if (str2.equals(e.a.IDLE.toString())) {
                synchronized (this.j) {
                    Iterator<e> it = this.j.iterator();
                    while (true) {
                        if (!it.hasNext()) {
                            eVar = null;
                            break;
                        }
                        e next = it.next();
                        if (next.n.equals(str)) {
                            if (next.q == 2) {
                                return;
                            }
                            Log.i(f5910a, "(" + next.c + ") onClickNotification: pause download");
                            this.j.remove(next);
                            eVar = next;
                        }
                    }
                    if (eVar != null) {
                        eVar.k();
                        this.l.put(eVar.n, eVar);
                        com.tkay.china.common.b.a.a(this.i).c(eVar);
                        com.tkay.china.common.b.a.a(this.i).a(eVar, 0L, 100L, true);
                        return;
                    }
                    com.tkay.china.common.b.a.a(this.i).a(i);
                }
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override // com.tkay.china.common.a.g
    public final void a(String str, String str2) {
        e eVar;
        try {
            if (str2.equals(e.a.FAIL.toString()) && this.q != null && this.q.containsKey(str)) {
                e eVar2 = this.q.get(str);
                Log.i(f5910a, "(" + eVar2.c + ") onCleanNotification: download fail");
                com.tkay.china.common.b.a.a(this.i).c(eVar2);
                this.q.remove(str);
            }
            if (str2.equals(e.a.FINISH.toString()) && this.n != null && this.n.containsKey(str)) {
                e eVar3 = this.n.get(str);
                Log.i(f5910a, "(" + eVar3.c + ") onCleanNotification: download success");
                com.tkay.china.common.b.a.a(this.i).c(eVar3);
                this.n.remove(str);
            }
            if (str2.equals(e.a.INSTALLED.toString()) && this.p != null && this.p.containsKey(str)) {
                e eVar4 = this.p.get(str);
                Log.i(f5910a, "(" + eVar4.c + ") onCleanNotification: install success");
                com.tkay.china.common.b.a.a(this.i).c(eVar4);
                this.p.remove(str);
            }
            if (!str2.equals(e.a.PAUSE.toString()) || (eVar = this.l.get(str)) == null) {
                return;
            }
            if (this.u != null) {
                this.u.c(eVar.n);
            }
            this.l.remove(str);
            Log.i(f5910a, "(" + eVar.c + ") onCleanNotification: stop download");
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    /* JADX INFO: renamed from: com.tkay.china.common.a$4, reason: invalid class name */
    final class AnonymousClass4 implements Runnable {
        AnonymousClass4() {
        }

        @Override // java.lang.Runnable
        public final void run() {
            if (a.this.q != null) {
                synchronized (a.this.q) {
                    Iterator it = a.this.q.entrySet().iterator();
                    while (it.hasNext()) {
                        e eVar = (e) ((Map.Entry) it.next()).getValue();
                        Log.i(a.f5910a, "(" + eVar.c + ") retry to download");
                        eVar.e();
                        a.this.d(eVar);
                        it.remove();
                    }
                }
            }
        }
    }

    private void g() {
        com.tkay.core.common.l.b.a.a().a(new AnonymousClass4());
    }

    public final void b(String str) {
        e eVar;
        try {
            if (this.o.containsKey(str) && (eVar = this.o.get(str)) != null) {
                String strF = f(eVar);
                if (!TextUtils.isEmpty(strF)) {
                    new File(strF).delete();
                }
                eVar.m();
                this.o.remove(str);
                if (this.p == null) {
                    this.p = new ConcurrentHashMap<>();
                }
                this.p.put(eVar.n, eVar);
                if (this.n != null) {
                    this.n.remove(eVar.n);
                }
                com.tkay.china.common.b.a.a(this.i).c(eVar);
                com.tkay.china.common.b.a.a(this.i).a(eVar, 0L, 100L, true);
                Intent intent = new Intent();
                intent.setAction(e);
                intent.setPackage(this.i.getPackageName());
                intent.putExtra(f, eVar.f);
                intent.putExtra(g, eVar.m);
                com.tkay.core.common.m.a(this.i).a(intent);
                com.tkay.core.common.k.c.a(eVar.f5927a, eVar.f, eVar.b, 5, (String) null, 0L, 0L);
                if (this.o.size() == 0) {
                    try {
                        if (this.t != null) {
                            this.i.unregisterReceiver(this.t);
                            this.t = null;
                        }
                    } catch (Throwable unused) {
                    }
                }
                a(eVar, false);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    private void h() {
        try {
            if (this.t != null) {
                return;
            }
            this.t = new b();
            IntentFilter intentFilter = new IntentFilter();
            intentFilter.addAction("android.intent.action.PACKAGE_ADDED");
            intentFilter.addAction("android.intent.action.PACKAGE_REPLACED");
            intentFilter.addDataScheme("package");
            this.i.registerReceiver(this.t, intentFilter);
        } catch (Throwable unused) {
        }
    }

    private void i() {
        try {
            if (this.t != null) {
                this.i.unregisterReceiver(this.t);
                this.t = null;
            }
        } catch (Throwable unused) {
        }
    }

    private static void a(e eVar, boolean z) {
        if (eVar.l != null) {
            eVar.l.a(eVar.j, eVar.f5927a, eVar.b, z);
        }
    }

    public final boolean a(com.tkay.core.common.f.h hVar) {
        String strA = com.tkay.core.common.l.g.a(hVar);
        ConcurrentHashMap<String, e> concurrentHashMap = this.k;
        return concurrentHashMap != null && concurrentHashMap.containsKey(strA);
    }

    public final Map<String, e> f() {
        return this.k;
    }

    public final a.InterfaceC0405a c(String str) {
        return this.m.get(str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void d(final String str) {
        m.a().a(new Runnable() { // from class: com.tkay.china.common.a.5
            @Override // java.lang.Runnable
            public final void run() {
                Toast.makeText(a.this.i, str, 0).show();
            }
        });
    }

    public final int b(com.tkay.core.common.f.h hVar) {
        String strA = com.tkay.core.common.l.g.a(hVar);
        synchronized (this.j) {
            for (int i = 0; i < this.j.size(); i++) {
                e eVar = this.j.get(i);
                if (eVar != null && eVar.n.equals(strA)) {
                    return 0;
                }
            }
            ConcurrentHashMap<String, e> concurrentHashMap = this.k;
            if (concurrentHashMap != null && concurrentHashMap.containsKey(strA)) {
                return 0;
            }
            ConcurrentHashMap<String, e> concurrentHashMap2 = this.l;
            if (concurrentHashMap2 != null && concurrentHashMap2.containsKey(strA)) {
                return 6;
            }
            ConcurrentHashMap<String, e> concurrentHashMap3 = this.n;
            if ((concurrentHashMap3 == null || !concurrentHashMap3.containsKey(strA)) && !a(strA)) {
                return com.tkay.china.common.c.a.a(this.i, hVar.B()) ? 5 : 1;
            }
            return 4;
        }
    }

    static /* synthetic */ void a(a aVar) {
        com.tkay.core.common.l.b.a.a().a(aVar.new AnonymousClass4());
    }
}
