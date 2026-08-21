package com.mbridge.msdk.mbdownload;

import android.R;
import android.app.ActivityManager;
import android.app.Notification;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
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
import android.widget.Toast;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.tools.MBFileProvider;
import com.mbridge.msdk.foundation.tools.s;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbdownload.b;
import com.ss.android.downloadad.api.constant.AdBaseConstants;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.xiaomi.mipush.sdk.Constants;
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

class e {
    private static final String a = e.class.getName();
    private SparseArray<b> b;
    private Map<b.a, Messenger> c;
    private i d;

    public e(SparseArray<b> sparseArray, Map<b.a, Messenger> map, i iVar) {
        this.b = sparseArray;
        this.c = map;
        this.d = iVar;
    }

    static class b {
        k a;
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

    static class a extends h {
        String a;
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
                this.a = charSequence.toString();
            }
            return this;
        }

        public final a a(String str) {
            Context context = this.d;
            if (context != null) {
                v.w(context);
            }
            if (!TextUtils.isEmpty(str)) {
                com.mbridge.msdk.foundation.same.c.b.a(this.d).a(str, new com.mbridge.msdk.foundation.same.c.c() {
                    @Override
                    public final void onFailedLoad(String str2, String str3) {
                    }

                    @Override
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
                    z.d(e.a, e.getMessage());
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
                this.f = new NotificationCompat.Builder(this.e).setTicker(this.a).setContentIntent(this.i).build();
            } else {
                this.f = new Notification.Builder(this.e).setTicker(this.a).setContentIntent(this.i).build();
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
                    z.a(a, "_" + iNextInt + " downling  " + aVar2.c + "   " + aVar2.d);
                }
            } else {
                z.a(a, "_" + iNextInt + "downling  null");
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
            z.a(a, "download service clear cache " + bVar.e.c);
            if (bVar.a != null) {
                bVar.a.a(2);
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
    */
    final boolean a(com.mbridge.msdk.mbdownload.c cVar, Intent intent) {
        Context applicationContext;
        String string;
        try {
            applicationContext = cVar.c().getApplicationContext();
            string = intent.getExtras().getString("com.mbridge.msdk.broadcast.download.msg");
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
        if (string == null) {
            return false;
        }
        String[] strArrSplit = string.split(Constants.COLON_SEPARATOR);
        int i = Integer.parseInt(strArrSplit[0]);
        String strTrim = strArrSplit[1].trim();
        if (i == 0 || TextUtils.isEmpty(strTrim) || this.b.indexOfKey(i) < 0) {
            return false;
        }
        b bVar = this.b.get(i);
        k kVar = bVar.a;
        long j = bVar.f[0];
        long j2 = bVar.f[1];
        long j3 = bVar.f[2];
        if ("continue".equals(strTrim)) {
            if (kVar == null) {
                z.a(a, "Receive action do play click new thread.");
                if (!b(applicationContext)) {
                    Toast.makeText(applicationContext, g.d, 1).show();
                    return false;
                }
                k kVar2 = new k(cVar, bVar.e, i, bVar.d);
                bVar.a = kVar2;
                kVar2.start();
                Message messageObtain = Message.obtain();
                messageObtain.what = 2;
                messageObtain.arg1 = 7;
                messageObtain.arg2 = i;
                try {
                    if (this.c.get(bVar.e) != null) {
                        this.c.get(bVar.e).send(messageObtain);
                    }
                } catch (RemoteException e2) {
                    z.c(a, "", e2);
                }
                return true;
            }
            if (kVar.c() == k.b) {
                z.a(a, "Receive action do play click.");
                if (!b(applicationContext)) {
                    Toast.makeText(applicationContext, g.d, 1).show();
                    return false;
                }
                kVar.b();
                Message messageObtain2 = Message.obtain();
                messageObtain2.what = 2;
                messageObtain2.arg1 = 7;
                messageObtain2.arg2 = i;
                try {
                    if (this.c.get(bVar.e) != null) {
                        this.c.get(bVar.e).send(messageObtain2);
                    }
                } catch (RemoteException e3) {
                    z.c(a, "", e3);
                }
                return true;
            }
            z.a(a, "Receive action do pause click.");
            kVar.a();
            try {
                kVar.interrupt();
            } catch (Exception e4) {
                e4.printStackTrace();
            }
            b(applicationContext, i);
            Message messageObtain3 = Message.obtain();
            messageObtain3.what = 2;
            messageObtain3.arg1 = 6;
            messageObtain3.arg2 = i;
            try {
                if (this.c.get(bVar.e) != null) {
                    this.c.get(bVar.e).send(messageObtain3);
                }
            } catch (RemoteException e5) {
                z.c(a, "", e5);
            }
            return true;
        }
        if (com.tkay.expressad.d.a.b.dO.equals(strTrim)) {
            z.a(a, "Receive action do stop click.");
            try {
                if (kVar != null) {
                    try {
                        kVar.a(2);
                        Message messageObtain4 = Message.obtain();
                        messageObtain4.what = 5;
                        messageObtain4.arg1 = 5;
                        messageObtain4.arg2 = i;
                        if (this.c.get(bVar.e) != null) {
                            this.c.get(bVar.e).send(messageObtain4);
                        }
                    } catch (Exception unused) {
                        Message messageObtain5 = Message.obtain();
                        messageObtain5.what = 5;
                        messageObtain5.arg1 = 5;
                        messageObtain5.arg2 = i;
                        if (this.c.get(bVar.e) != null) {
                            this.c.get(bVar.e).send(messageObtain5);
                        }
                    } catch (Throwable th) {
                        Message messageObtain6 = Message.obtain();
                        messageObtain6.what = 5;
                        messageObtain6.arg1 = 5;
                        messageObtain6.arg2 = i;
                        try {
                            if (this.c.get(bVar.e) != null) {
                                this.c.get(bVar.e).send(messageObtain6);
                                throw th;
                            }
                            throw th;
                        } catch (RemoteException unused2) {
                            a(applicationContext, i);
                            throw th;
                        }
                    }
                } else {
                    Message messageObtain42 = Message.obtain();
                    messageObtain42.what = 5;
                    messageObtain42.arg1 = 5;
                    messageObtain42.arg2 = i;
                    if (this.c.get(bVar.e) != null) {
                    }
                }
            } catch (RemoteException unused3) {
                a(applicationContext, i);
            }
            return true;
        }
        if ("install or active".equals(strTrim)) {
            if (kVar != null) {
                kVar.d();
                return false;
            }
            a(applicationContext, i);
            return false;
        }
        if (!"parent_view_click".equals(strTrim)) {
            return false;
        }
        z.a("workthread", "clickParentView");
        int iC = com.mbridge.msdk.foundation.db.e.a(com.mbridge.msdk.foundation.db.i.a(applicationContext)).c(bVar.e.g);
        if (iC != 5 && iC != 6) {
            if ((iC != 1 && iC != 9 && iC != 10 && iC != 11) || kVar == null) {
                return false;
            }
            kVar.d();
            return false;
        }
        z.a(a, "Receive action clickParentView to do play click.");
        if (kVar == null) {
            z.a(a, "Receive action do play click.");
            if (!b(applicationContext)) {
                Toast.makeText(applicationContext, g.d, 1).show();
                return false;
            }
            k kVar3 = new k(cVar, bVar.e, bVar.c, bVar.d);
            bVar.a = kVar3;
            kVar3.start();
            Message messageObtain7 = Message.obtain();
            messageObtain7.what = 2;
            messageObtain7.arg1 = 7;
            messageObtain7.arg2 = bVar.c;
            try {
                if (this.c.get(bVar.e) == null) {
                    return false;
                }
                this.c.get(bVar.e).send(messageObtain7);
                return false;
            } catch (RemoteException e6) {
                z.c(a, "", e6);
                return false;
            }
        }
        if (kVar.c() == k.b) {
            z.a(a, "Receive action do play click.");
            if (!b(applicationContext)) {
                Toast.makeText(applicationContext, g.d, 1).show();
                return false;
            }
            kVar.b();
            Message messageObtain8 = Message.obtain();
            messageObtain8.what = 2;
            messageObtain8.arg1 = 7;
            messageObtain8.arg2 = bVar.c;
            try {
                if (this.c.get(bVar.e) == null) {
                    return false;
                }
                this.c.get(bVar.e).send(messageObtain8);
                return false;
            } catch (RemoteException e7) {
                z.c(a, "", e7);
                return false;
            }
        }
        z.a(a, "Receive action do pause click.");
        kVar.a();
        b(applicationContext, bVar.c);
        Message messageObtain9 = Message.obtain();
        messageObtain9.what = 2;
        messageObtain9.arg1 = 6;
        messageObtain9.arg2 = bVar.c;
        try {
            if (this.c.get(bVar.e) == null) {
                return false;
            }
            this.c.get(bVar.e).send(messageObtain9);
            return false;
        } catch (RemoteException e8) {
            z.c(a, "", e8);
            return false;
        }
        e.printStackTrace();
        return false;
    }

    class c extends AsyncTask<String, Void, Integer> {
        public int a;
        public String b;
        private b.a d;
        private Context e;
        private NotificationManager f;

        @Override
        protected final Integer doInBackground(String[] strArr) {
            return 1;
        }

        @Override
        protected final void onPostExecute(Integer num) {
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
                        this.f.notify(this.a + 1, notificationA);
                    }
                    if (e.this.a(this.e)) {
                        this.f.cancel(this.a + 1);
                        this.e.startActivity(intent);
                    }
                    Bundle bundle = new Bundle();
                    bundle.putString("filename", this.b);
                    Message messageObtain = Message.obtain();
                    messageObtain.what = 5;
                    messageObtain.arg1 = 1;
                    messageObtain.arg2 = this.a;
                    messageObtain.setData(bundle);
                    try {
                        if (e.this.c.get(this.d) != null) {
                            ((Messenger) e.this.c.get(this.d)).send(messageObtain);
                            return;
                        }
                        return;
                    } catch (RemoteException unused2) {
                        e.this.a(this.e, this.a);
                        return;
                    }
                }
                this.f.cancel(this.a + 1);
                Bundle bundle2 = new Bundle();
                bundle2.putString("filename", this.b);
                Message messageObtain2 = Message.obtain();
                messageObtain2.what = 5;
                messageObtain2.arg1 = 3;
                messageObtain2.arg2 = this.a;
                messageObtain2.setData(bundle2);
                try {
                    if (e.this.c.get(this.d) != null) {
                        ((Messenger) e.this.c.get(this.d)).send(messageObtain2);
                    }
                } catch (RemoteException unused3) {
                    e.this.a(this.e, this.a);
                }
            } catch (Throwable unused4) {
            }
        }

        public c(Context context, int i, b.a aVar, String str) {
            Context applicationContext = context.getApplicationContext();
            this.e = applicationContext;
            this.f = (NotificationManager) applicationContext.getSystemService(RemoteMessageConst.NOTIFICATION);
            j.a();
            this.a = i;
            this.d = aVar;
            this.b = str;
        }

        @Override
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
            z.a(a, "error when set permissions:", e);
            return false;
        } catch (IllegalAccessException e2) {
            z.a(a, "error when set permissions:", e2);
            return false;
        } catch (IllegalArgumentException e3) {
            z.a(a, "error when set permissions:", e3);
            return false;
        } catch (NoSuchMethodException e4) {
            z.a(a, "error when set permissions:", e4);
            return false;
        } catch (InvocationTargetException e5) {
            z.a(a, "error when set permissions:", e5);
            return false;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:14:0x0060 A[Catch: all -> 0x00a5, TryCatch #0 {all -> 0x00a5, blocks: (B:7:0x000c, B:9:0x0010, B:12:0x001b, B:13:0x003a, B:14:0x0060, B:16:0x0069, B:17:0x0087), top: B:23:0x000c }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static Notification a(Context context, String str, PendingIntent pendingIntent) {
        Notification notificationBuild;
        if ((context != null ? v.w(context) : 0) >= 26) {
            try {
                if (Build.VERSION.SDK_INT >= 26) {
                    Resources resources = context.getResources();
                    if (resources == null) {
                        notificationBuild = new NotificationCompat.Builder(context, "download").setSmallIcon(R.drawable.stat_sys_download_done).setTicker(str).setWhen(System.currentTimeMillis()).setContentIntent(pendingIntent).build();
                    } else {
                        notificationBuild = new NotificationCompat.Builder(context, "download").setSmallIcon(R.drawable.stat_sys_download_done).setLargeIcon(BitmapFactory.decodeResource(resources, R.drawable.stat_sys_download_done)).setTicker(str).setWhen(System.currentTimeMillis()).setContentIntent(pendingIntent).build();
                    }
                } else if (Build.VERSION.SDK_INT < 16) {
                    notificationBuild = new NotificationCompat.Builder(context).setSmallIcon(R.drawable.stat_sys_download).setTicker(str).setWhen(System.currentTimeMillis()).setContentIntent(pendingIntent).build();
                } else {
                    notificationBuild = new Notification.Builder(context).setSmallIcon(R.drawable.stat_sys_download).setTicker(str).setWhen(System.currentTimeMillis()).setContentIntent(pendingIntent).build();
                }
            } catch (Throwable th) {
                z.a("DownloadTool", th.getMessage());
                return null;
            }
        }
        return notificationBuild;
    }

    public static File a(String str, Context context, boolean[] zArr) throws IOException {
        if (Environment.getExternalStorageState().equals("mounted")) {
            File file = new File(com.mbridge.msdk.foundation.same.b.e.b(com.mbridge.msdk.foundation.same.b.c.h) + "/download/.mb" + str);
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
