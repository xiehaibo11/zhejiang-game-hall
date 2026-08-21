package com.mbridge.msdk.mbdownload;

import android.R;
import android.app.ActivityManager;
import android.app.Notification;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.graphics.Bitmap;
import android.net.ConnectivityManager;
import android.net.Uri;
import android.os.AsyncTask;
import android.os.Build;
import android.os.Bundle;
import android.os.Environment;
import android.os.Message;
import android.os.Messenger;
import android.os.RemoteException;
import android.support.v4.app.NotificationCompat;
import android.text.TextUtils;
import android.util.SparseArray;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.tools.MBFileProvider;
import com.mbridge.msdk.foundation.tools.s;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbdownload.b;
import com.ss.android.downloadad.api.constant.AdBaseConstants;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import cz.msebera.android.httpclient.HttpStatus;
import java.io.File;
import java.io.IOException;
import java.lang.reflect.InvocationTargetException;
import java.security.MessageDigest;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Random;

/* JADX INFO: compiled from: DownloadTool.java */
/* JADX INFO: loaded from: classes2.dex */
class e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f3671a = e.class.getName();
    private SparseArray<b> b;
    private Map<b.a, Messenger> c;
    private i d;

    public e(SparseArray<b> sparseArray, Map<b.a, Messenger> map, i iVar) {
        this.b = sparseArray;
        this.c = map;
        this.d = iVar;
    }

    /* JADX INFO: compiled from: DownloadTool.java */
    static class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        k f3674a;
        a b;
        int c;
        int d;
        b.a e;
        long[] f = new long[3];

        public b(b.a aVar, int i) {
            this.c = i;
            this.e = aVar;
        }
    }

    /* JADX INFO: compiled from: DownloadTool.java */
    static class a extends h {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        String f3672a;
        String b;
        String c;
        Context d;

        public a(Context context) {
            super(context);
            this.d = context;
        }

        public final a a(CharSequence charSequence) {
            Context context = this.d;
            int iW = context != null ? v.w(context) : 0;
            if (!TextUtils.isEmpty(charSequence) && charSequence.toString().contains("%")) {
                this.j.setViewVisibility(s.a(this.d, "mbridge_download_notify_progress_status", "id"), 8);
            }
            this.j.setViewVisibility(s.a(this.d, "mbridge_download_notify_progress_progess", "id"), 0);
            if ((iW >= 26 && Build.VERSION.SDK_INT >= 26) || Build.VERSION.SDK_INT >= 16) {
                this.j.setTextViewText(s.a(this.e, "mbridge_download_notify_progress_progess", "id"), charSequence);
            } else {
                this.b = charSequence.toString();
            }
            return this;
        }

        public final a b(CharSequence charSequence) {
            Context context = this.d;
            int iW = context != null ? v.w(context) : 0;
            this.j.setViewVisibility(s.a(this.d, "mbridge_download_notify_progress_status", "id"), 0);
            this.j.setViewVisibility(s.a(this.d, "mbridge_download_notify_progress_progess", "id"), 8);
            if ((iW >= 26 && Build.VERSION.SDK_INT >= 26) || Build.VERSION.SDK_INT >= 16) {
                this.j.setTextViewText(s.a(this.e, "mbridge_download_notify_progress_status", "id"), charSequence);
            } else {
                this.b = charSequence.toString();
            }
            return this;
        }

        public final a c(CharSequence charSequence) {
            Context context = this.d;
            if (((context != null ? v.w(context) : 0) >= 26 && Build.VERSION.SDK_INT >= 26) || Build.VERSION.SDK_INT >= 16) {
                this.j.setTextViewText(s.a(this.e, "mbridge_download_notify_target_name", "id"), charSequence);
            } else {
                this.f3672a = charSequence.toString();
            }
            return this;
        }

        public final a a(String str) {
            Context context = this.d;
            if (context != null) {
                v.w(context);
            }
            if (!TextUtils.isEmpty(str)) {
                com.mbridge.msdk.foundation.same.c.b.a(this.d).a(str, new com.mbridge.msdk.foundation.same.c.c() { // from class: com.mbridge.msdk.mbdownload.e.a.1
                    @Override // com.mbridge.msdk.foundation.same.c.c
                    public final void onFailedLoad(String str2, String str3) {
                    }

                    @Override // com.mbridge.msdk.foundation.same.c.c
                    public final void onSuccessLoad(Bitmap bitmap, String str2) {
                        if (bitmap.isRecycled()) {
                            return;
                        }
                        a.this.j.setImageViewBitmap(s.a(a.this.e, "mbridge_download_notify_target_icon", "id"), bitmap);
                    }
                });
            }
            return this;
        }

        public final a a() {
            this.j.setViewVisibility(s.a(this.d, "mbridge_download_notify_pause", "id"), 0);
            this.j.setViewVisibility(s.a(this.d, "mbridge_download_notify_continue", "id"), 8);
            this.j.setViewVisibility(s.a(this.d, "mbridge_download_notify_progress_status", "id"), 8);
            return this;
        }

        public final a b() {
            this.j.setViewVisibility(s.a(this.d, "mbridge_download_notify_pause", "id"), 8);
            this.j.setViewVisibility(s.a(this.d, "mbridge_download_notify_continue", "id"), 8);
            return this;
        }

        public final a c() {
            this.j.setViewVisibility(s.a(this.d, "mbridge_download_notify_pause", "id"), 8);
            this.j.setViewVisibility(s.a(this.d, "mbridge_download_notify_continue", "id"), 0);
            this.j.setViewVisibility(s.a(this.d, "mbridge_download_notify_progress_status", "id"), 8);
            return this;
        }

        public final a a(int i, int i2, boolean z) {
            if (Build.VERSION.SDK_INT >= 16) {
                try {
                    this.j.setProgressBar(s.a(this.e, "mbridge_download_notify_progress", "id"), i, i2, z);
                } catch (Exception e) {
                    z.d(e.f3671a, e.getMessage());
                }
            } else {
                this.c = i2 + "%";
            }
            return this;
        }

        public final Notification d() {
            Context context = this.d;
            if ((context != null ? v.w(context) : 0) >= 26 && Build.VERSION.SDK_INT >= 26) {
                return this.h.build();
            }
            if (Build.VERSION.SDK_INT >= 16) {
                return this.g.build();
            }
            if (Build.VERSION.SDK_INT < 16) {
                this.f = new NotificationCompat.Builder(this.e).setTicker(this.f3672a).setContentIntent(this.i).build();
            } else {
                this.f = new Notification.Builder(this.e).setTicker(this.f3672a).setContentIntent(this.i).build();
            }
            return this.f;
        }
    }

    final a a(Context context, b.a aVar, int i, int i2) {
        Context applicationContext = context.getApplicationContext();
        a aVar2 = new a(applicationContext);
        PendingIntent.getActivity(applicationContext, 0, new Intent(), DownloadExpSwitchCode.BUGFIX_SIGBUS_24_25);
        if (aVar.q) {
            aVar2.e();
            a(applicationContext, aVar2, i, 2);
        }
        a(applicationContext, aVar2, i, 3);
        aVar2.a(aVar.j);
        g.f(applicationContext);
        aVar2.a(R.drawable.stat_sys_download).a(System.currentTimeMillis());
        if (aVar.i) {
            aVar2.a();
        }
        aVar2.c(aVar.c).a((CharSequence) (i2 + "%")).a(100, i2, false);
        aVar2.a(aVar.h).b(true);
        return aVar2;
    }

    private void a(Context context, a aVar, int i, int i2) {
        if (Build.VERSION.SDK_INT >= 16) {
            PendingIntent pendingIntentA = j.a(context, j.a(i, "continue"));
            PendingIntent pendingIntentA2 = j.a(context, j.a(i, "install or active"));
            PendingIntent pendingIntentA3 = j.a(context, j.a(i, "continue"));
            PendingIntent pendingIntentA4 = j.a(context, j.a(i, "parent_view_click"));
            if (i2 == 1) {
                aVar.j.setOnClickPendingIntent(s.a(context, "mbridge_download_notify_continue", "id"), pendingIntentA);
            } else if (i2 == 2) {
                aVar.j.setOnClickPendingIntent(s.a(context, "mbridge_download_notify_pause", "id"), pendingIntentA3);
            } else if (i2 == 3) {
                aVar.j.setOnClickPendingIntent(s.a(context, "mbridge_download_notify_progress_status", "id"), pendingIntentA2);
            }
            aVar.j.setOnClickPendingIntent(s.a(context, "mbridge_download_notify_parent_view", "id"), pendingIntentA4);
        }
    }

    final boolean a(Context context) {
        List<ActivityManager.RunningAppProcessInfo> runningAppProcesses = ((ActivityManager) context.getSystemService("activity")).getRunningAppProcesses();
        if (runningAppProcesses == null) {
            return false;
        }
        String packageName = context.getPackageName();
        for (ActivityManager.RunningAppProcessInfo runningAppProcessInfo : runningAppProcesses) {
            if (runningAppProcessInfo.importance == 100 && runningAppProcessInfo.processName.equals(packageName)) {
                return true;
            }
        }
        return false;
    }

    final boolean a(b.a aVar, boolean z, Messenger messenger) {
        if (z) {
            int iNextInt = new Random().nextInt(1000);
            Map<b.a, Messenger> map = this.c;
            if (map != null) {
                for (b.a aVar2 : map.keySet()) {
                    z.a(f3671a, "_" + iNextInt + " downling  " + aVar2.c + "   " + aVar2.d);
                }
            } else {
                z.a(f3671a, "_" + iNextInt + "downling  null");
            }
        }
        Map<b.a, Messenger> map2 = this.c;
        if (map2 == null) {
            return false;
        }
        for (b.a aVar3 : map2.keySet()) {
            if (aVar.f != null && aVar.f.equals(aVar3.f)) {
                this.c.put(aVar3, messenger);
                return true;
            }
            if (aVar3.d.equals(aVar.d)) {
                this.c.put(aVar3, messenger);
                return true;
            }
        }
        return false;
    }

    final int a(b.a aVar) {
        for (int i = 0; i < this.b.size(); i++) {
            int iKeyAt = this.b.keyAt(i);
            if (aVar.f != null && aVar.f.equals(this.b.get(iKeyAt).e.f)) {
                return this.b.get(iKeyAt).c;
            }
            if (this.b.get(iKeyAt).e.d.equals(aVar.d)) {
                return this.b.get(iKeyAt).c;
            }
        }
        return -1;
    }

    private void b(Context context, int i) {
        Context applicationContext = context.getApplicationContext();
        NotificationManager notificationManager = (NotificationManager) applicationContext.getSystemService(RemoteMessageConst.NOTIFICATION);
        j.a();
        b bVar = this.b.get(i);
        bVar.b.e();
        a(applicationContext, bVar.b, i, 1);
        bVar.b.c(bVar.e.c).a(bVar.e.h).b(true);
        if (bVar.e.i) {
            bVar.b.c();
        }
        notificationManager.notify(i, bVar.b.d());
    }

    final void a(Context context, int i) {
        NotificationManager notificationManager = (NotificationManager) context.getApplicationContext().getSystemService(RemoteMessageConst.NOTIFICATION);
        b bVar = this.b.get(i);
        if (bVar != null) {
            z.a(f3671a, "download service clear cache " + bVar.e.c);
            if (bVar.f3674a != null) {
                bVar.f3674a.a(2);
            }
            notificationManager.cancel(bVar.c);
            if (this.c.containsKey(bVar.e)) {
                this.c.remove(bVar.e);
            }
            SparseArray<b> sparseArray = this.b;
            if (sparseArray.indexOfKey(bVar.c) >= 0) {
                sparseArray.remove(bVar.c);
            }
            this.d.b(i);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:80:0x01b2 A[Catch: RemoteException -> 0x019a, Exception -> 0x02ec, TRY_LEAVE, TryCatch #8 {RemoteException -> 0x019a, blocks: (B:78:0x01a8, B:80:0x01b2, B:72:0x0182, B:74:0x018c), top: B:150:0x014a, outer: #5 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    final boolean a(com.mbridge.msdk.mbdownload.c r17, android.content.Intent r18) {
        /*
            Method dump skipped, instruction units count: 754
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.mbdownload.e.a(com.mbridge.msdk.mbdownload.c, android.content.Intent):boolean");
    }

    /* JADX INFO: compiled from: DownloadTool.java */
    class c extends AsyncTask<String, Void, Integer> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public int f3675a;
        public String b;
        private b.a d;
        private Context e;
        private NotificationManager f;

        @Override // android.os.AsyncTask
        protected final /* synthetic */ Integer doInBackground(String[] strArr) {
            return 1;
        }

        @Override // android.os.AsyncTask
        protected final /* synthetic */ void onPostExecute(Integer num) {
            Uri uriForFile;
            try {
                if (num.intValue() == 1) {
                    Intent intent = new Intent("android.intent.action.VIEW");
                    intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
                    try {
                        if (v.w(this.e) >= 24 && Build.VERSION.SDK_INT >= 24) {
                            Uri uri = null;
                            try {
                                if (!TextUtils.isEmpty(MBridgeConstans.FILE_PROVIDE_CUSTOM_PATH)) {
                                    uriForFile = (Uri) Class.forName(MBridgeConstans.FILE_PROVIDE_CUSTOM_PATH).getMethod("getUriForFile", Context.class, String.class, File.class).invoke(null, this.e, this.e.getApplicationContext().getPackageName() + ".mbFileProvider", new File(this.b));
                                } else {
                                    uriForFile = MBFileProvider.getUriForFile(this.e, this.e.getApplicationContext().getPackageName() + ".mbFileProvider", new File(this.b));
                                }
                                uri = uriForFile;
                            } catch (Exception e) {
                                e.printStackTrace();
                            }
                            if (uri != null) {
                                intent.setDataAndType(uri, AdBaseConstants.MIME_APK);
                                intent.addFlags(1);
                            }
                        } else {
                            intent.setDataAndType(Uri.fromFile(new File(this.b)), AdBaseConstants.MIME_APK);
                        }
                    } catch (Exception unused) {
                        intent.setDataAndType(Uri.fromFile(new File(this.b)), AdBaseConstants.MIME_APK);
                    }
                    Notification notificationA = e.a(this.e, g.g(this.e), PendingIntent.getActivity(this.e, 0, intent, DownloadExpSwitchCode.BUGFIX_SIGBUS_24_25));
                    if (notificationA != null) {
                        notificationA.flags = 16;
                        this.f.notify(this.f3675a + 1, notificationA);
                    }
                    if (e.this.a(this.e)) {
                        this.f.cancel(this.f3675a + 1);
                        this.e.startActivity(intent);
                    }
                    Bundle bundle = new Bundle();
                    bundle.putString("filename", this.b);
                    Message messageObtain = Message.obtain();
                    messageObtain.what = 5;
                    messageObtain.arg1 = 1;
                    messageObtain.arg2 = this.f3675a;
                    messageObtain.setData(bundle);
                    try {
                        if (e.this.c.get(this.d) != null) {
                            ((Messenger) e.this.c.get(this.d)).send(messageObtain);
                            return;
                        }
                        return;
                    } catch (RemoteException unused2) {
                        e.this.a(this.e, this.f3675a);
                        return;
                    }
                }
                this.f.cancel(this.f3675a + 1);
                Bundle bundle2 = new Bundle();
                bundle2.putString("filename", this.b);
                Message messageObtain2 = Message.obtain();
                messageObtain2.what = 5;
                messageObtain2.arg1 = 3;
                messageObtain2.arg2 = this.f3675a;
                messageObtain2.setData(bundle2);
                try {
                    if (e.this.c.get(this.d) != null) {
                        ((Messenger) e.this.c.get(this.d)).send(messageObtain2);
                    }
                } catch (RemoteException unused3) {
                    e.this.a(this.e, this.f3675a);
                }
            } catch (Throwable unused4) {
            }
        }

        public c(Context context, int i, b.a aVar, String str) {
            Context applicationContext = context.getApplicationContext();
            this.e = applicationContext;
            this.f = (NotificationManager) applicationContext.getSystemService(RemoteMessageConst.NOTIFICATION);
            j.a();
            this.f3675a = i;
            this.d = aVar;
            this.b = str;
        }

        @Override // android.os.AsyncTask
        protected final void onPreExecute() {
            super.onPreExecute();
        }
    }

    public static boolean b(Context context) {
        return context.getPackageManager().checkPermission(com.kuaishou.weapon.p0.g.b, context.getPackageName()) == 0 && ((ConnectivityManager) context.getSystemService("connectivity")).getActiveNetworkInfo().isConnectedOrConnecting();
    }

    public static String a(String str) {
        if (str == null) {
            return null;
        }
        try {
            byte[] bytes = str.getBytes();
            MessageDigest messageDigest = MessageDigest.getInstance("MD5");
            messageDigest.reset();
            messageDigest.update(bytes);
            byte[] bArrDigest = messageDigest.digest();
            StringBuffer stringBuffer = new StringBuffer();
            for (byte b2 : bArrDigest) {
                stringBuffer.append(String.format("%02X", Byte.valueOf(b2)));
            }
            return stringBuffer.toString();
        } catch (Exception unused) {
            return str.replaceAll("[^[a-z][A-Z][0-9][.][_]]", "");
        }
    }

    public static String a() {
        return new SimpleDateFormat("yyyy-MM-dd HH:mm:ss", Locale.US).format(new Date());
    }

    private static boolean a(String str, int i, int i2, int i3) {
        try {
            Class.forName("android.os.FileUtils").getMethod("setPermissions", String.class, Integer.TYPE, Integer.TYPE, Integer.TYPE).invoke(null, str, Integer.valueOf(i), -1, -1);
            return true;
        } catch (ClassNotFoundException e) {
            z.a(f3671a, "error when set permissions:", e);
            return false;
        } catch (IllegalAccessException e2) {
            z.a(f3671a, "error when set permissions:", e2);
            return false;
        } catch (IllegalArgumentException e3) {
            z.a(f3671a, "error when set permissions:", e3);
            return false;
        } catch (NoSuchMethodException e4) {
            z.a(f3671a, "error when set permissions:", e4);
            return false;
        } catch (InvocationTargetException e5) {
            z.a(f3671a, "error when set permissions:", e5);
            return false;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:14:0x0060 A[Catch: all -> 0x00a5, TryCatch #0 {all -> 0x00a5, blocks: (B:7:0x000c, B:9:0x0010, B:12:0x001b, B:13:0x003a, B:14:0x0060, B:16:0x0069, B:17:0x0087), top: B:23:0x000c }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static android.app.Notification a(android.content.Context r4, java.lang.String r5, android.app.PendingIntent r6) {
        /*
            if (r4 == 0) goto L7
            int r0 = com.mbridge.msdk.foundation.tools.v.w(r4)
            goto L8
        L7:
            r0 = 0
        L8:
            r1 = 26
            if (r0 < r1) goto L60
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> La5
            if (r0 < r1) goto L60
            android.content.res.Resources r0 = r4.getResources()     // Catch: java.lang.Throwable -> La5
            java.lang.String r1 = "download"
            r2 = 17301634(0x1080082, float:2.497962E-38)
            if (r0 != 0) goto L3a
            android.support.v4.app.NotificationCompat$Builder r0 = new android.support.v4.app.NotificationCompat$Builder     // Catch: java.lang.Throwable -> La5
            r0.<init>(r4, r1)     // Catch: java.lang.Throwable -> La5
            android.support.v4.app.NotificationCompat$Builder r4 = r0.setSmallIcon(r2)     // Catch: java.lang.Throwable -> La5
            android.support.v4.app.NotificationCompat$Builder r4 = r4.setTicker(r5)     // Catch: java.lang.Throwable -> La5
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> La5
            android.support.v4.app.NotificationCompat$Builder r4 = r4.setWhen(r0)     // Catch: java.lang.Throwable -> La5
            android.support.v4.app.NotificationCompat$Builder r4 = r4.setContentIntent(r6)     // Catch: java.lang.Throwable -> La5
            android.app.Notification r4 = r4.build()     // Catch: java.lang.Throwable -> La5
            goto Lb0
        L3a:
            android.support.v4.app.NotificationCompat$Builder r3 = new android.support.v4.app.NotificationCompat$Builder     // Catch: java.lang.Throwable -> La5
            r3.<init>(r4, r1)     // Catch: java.lang.Throwable -> La5
            android.support.v4.app.NotificationCompat$Builder r4 = r3.setSmallIcon(r2)     // Catch: java.lang.Throwable -> La5
            android.graphics.Bitmap r0 = android.graphics.BitmapFactory.decodeResource(r0, r2)     // Catch: java.lang.Throwable -> La5
            android.support.v4.app.NotificationCompat$Builder r4 = r4.setLargeIcon(r0)     // Catch: java.lang.Throwable -> La5
            android.support.v4.app.NotificationCompat$Builder r4 = r4.setTicker(r5)     // Catch: java.lang.Throwable -> La5
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> La5
            android.support.v4.app.NotificationCompat$Builder r4 = r4.setWhen(r0)     // Catch: java.lang.Throwable -> La5
            android.support.v4.app.NotificationCompat$Builder r4 = r4.setContentIntent(r6)     // Catch: java.lang.Throwable -> La5
            android.app.Notification r4 = r4.build()     // Catch: java.lang.Throwable -> La5
            goto Lb0
        L60:
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> La5
            r1 = 16
            r2 = 17301633(0x1080081, float:2.4979616E-38)
            if (r0 >= r1) goto L87
            android.support.v4.app.NotificationCompat$Builder r0 = new android.support.v4.app.NotificationCompat$Builder     // Catch: java.lang.Throwable -> La5
            r0.<init>(r4)     // Catch: java.lang.Throwable -> La5
            android.support.v4.app.NotificationCompat$Builder r4 = r0.setSmallIcon(r2)     // Catch: java.lang.Throwable -> La5
            android.support.v4.app.NotificationCompat$Builder r4 = r4.setTicker(r5)     // Catch: java.lang.Throwable -> La5
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> La5
            android.support.v4.app.NotificationCompat$Builder r4 = r4.setWhen(r0)     // Catch: java.lang.Throwable -> La5
            android.support.v4.app.NotificationCompat$Builder r4 = r4.setContentIntent(r6)     // Catch: java.lang.Throwable -> La5
            android.app.Notification r4 = r4.build()     // Catch: java.lang.Throwable -> La5
            goto Lb0
        L87:
            android.app.Notification$Builder r0 = new android.app.Notification$Builder     // Catch: java.lang.Throwable -> La5
            r0.<init>(r4)     // Catch: java.lang.Throwable -> La5
            android.app.Notification$Builder r4 = r0.setSmallIcon(r2)     // Catch: java.lang.Throwable -> La5
            android.app.Notification$Builder r4 = r4.setTicker(r5)     // Catch: java.lang.Throwable -> La5
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> La5
            android.app.Notification$Builder r4 = r4.setWhen(r0)     // Catch: java.lang.Throwable -> La5
            android.app.Notification$Builder r4 = r4.setContentIntent(r6)     // Catch: java.lang.Throwable -> La5
            android.app.Notification r4 = r4.build()     // Catch: java.lang.Throwable -> La5
            goto Lb0
        La5:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            java.lang.String r5 = "DownloadTool"
            com.mbridge.msdk.foundation.tools.z.a(r5, r4)
            r4 = 0
        Lb0:
            return r4
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.mbdownload.e.a(android.content.Context, java.lang.String, android.app.PendingIntent):android.app.Notification");
    }

    public static File a(String str, Context context, boolean[] zArr) throws IOException {
        if (Environment.getExternalStorageState().equals("mounted")) {
            File file = new File(com.mbridge.msdk.foundation.same.b.e.b(com.mbridge.msdk.foundation.same.b.c.MBRIDGE_700_APK) + "/download/.mb" + str);
            file.mkdirs();
            if (file.exists()) {
                zArr[0] = true;
                return file;
            }
        }
        String absolutePath = context.getCacheDir().getAbsolutePath();
        new File(absolutePath).mkdir();
        a(absolutePath, HttpStatus.SC_HTTP_VERSION_NOT_SUPPORTED, -1, -1);
        String str2 = absolutePath + "/mbdownload";
        new File(str2).mkdir();
        a(str2, HttpStatus.SC_HTTP_VERSION_NOT_SUPPORTED, -1, -1);
        File file2 = new File(str2);
        zArr[0] = false;
        return file2;
    }
}
