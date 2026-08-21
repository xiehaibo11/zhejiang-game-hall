package com.mbridge.msdk.mbdownload;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.Bundle;
import android.os.Handler;
import android.os.IBinder;
import android.os.Message;
import android.os.Messenger;
import android.os.RemoteException;
import com.bianfeng.libuniverse.Device;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.out.IDownloadListener;

public class b {
    private static final String b = b.class.getName();
    private IDownloadListener d;
    private Messenger e;
    private String f;
    private String h;
    private String i;
    private String j;
    private String k;
    private String n;
    private String o;
    private String p;
    private String[] q;
    private String[] r;
    private String[] s;
    private String[] t;
    private String[] u;
    private String[] v;
    private String g = "";
    private boolean l = true;
    private boolean m = false;
    private boolean w = false;
    private boolean x = false;
    private boolean y = false;
    final Messenger a = new Messenger(new b());
    private ServiceConnection z = new ServiceConnection() {
        @Override
        public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            z.a(b.b, "ServiceConnection.onServiceConnected");
            b.this.e = new Messenger(iBinder);
            try {
                Message messageObtain = Message.obtain((Handler) null, 4);
                a aVar = new a(b.this.f, b.this.g, b.this.h, b.this.k, b.this.l);
                aVar.e = b.this.i;
                aVar.f = b.this.j;
                aVar.a = b.this.o;
                aVar.k = b.this.q;
                aVar.m = b.this.u;
                aVar.n = b.this.r;
                aVar.o = b.this.s;
                aVar.p = b.this.t;
                aVar.l = b.this.v;
                aVar.q = b.this.w;
                aVar.r = b.this.x;
                aVar.s = b.this.y;
                aVar.j = b.this.n;
                aVar.i = b.this.m;
                Bundle bundle = new Bundle();
                bundle.putString("mComponentName", aVar.b);
                bundle.putString("mTitle", aVar.c);
                bundle.putString("mUrl", aVar.d);
                bundle.putString("mMd5", aVar.e);
                bundle.putString("mTargetMd5", aVar.f);
                bundle.putString("uniqueKey", aVar.g);
                bundle.putString("mReqClz", aVar.a);
                bundle.putStringArray("succUrls", aVar.k);
                bundle.putStringArray("faiUrls", aVar.m);
                bundle.putStringArray("startUrls", aVar.n);
                bundle.putStringArray("pauseUrls", aVar.o);
                bundle.putStringArray("cancelUrls", aVar.p);
                bundle.putStringArray("carryonUrls", aVar.l);
                bundle.putBoolean("rich_notification", aVar.q);
                bundle.putBoolean("mSilent", aVar.r);
                bundle.putBoolean("mWifiOnly", aVar.s);
                bundle.putBoolean("mOnGoingStatus", aVar.h);
                bundle.putBoolean("mCanPause", aVar.i);
                bundle.putString("mTargetAppIconUrl", aVar.j);
                messageObtain.setData(bundle);
                messageObtain.replyTo = b.this.a;
                b.this.e.send(messageObtain);
            } catch (RemoteException unused) {
            }
        }

        @Override
        public final void onServiceDisconnected(ComponentName componentName) {
            z.a(b.b, "ServiceConnection.onServiceDisconnected");
            b.this.e = null;
        }
    };
    private Context c = com.mbridge.msdk.foundation.controller.a.f().j().getApplicationContext();

    public void setMd5(String str) {
        this.i = str;
    }

    public void setTargetMd5(String str) {
        this.j = str;
    }

    public void setReportClz(String str) {
        this.o = str;
    }

    public void setSuccUrls(String... strArr) {
        this.q = strArr;
    }

    public void setFaiUrls(String... strArr) {
        this.u = strArr;
    }

    public void setStartUrls(String... strArr) {
        this.r = strArr;
    }

    public void setPauseUrls(String... strArr) {
        this.s = strArr;
    }

    public void setCancelUrls(String... strArr) {
        this.t = strArr;
    }

    public void setCarryOnUrls(String... strArr) {
        this.v = strArr;
    }

    public void setRichNotification(boolean z) {
        this.w = z;
    }

    public void setSilentDownload(boolean z) {
        this.x = z;
    }

    public void setWifiOnly(boolean z) {
        this.y = z;
    }

    public boolean isOnGoingStatus() {
        return this.l;
    }

    public void setOnGoingStatus(boolean z) {
        this.l = z;
    }

    public boolean isCanPause() {
        return this.m;
    }

    public void setCanPause(boolean z) {
        this.m = z;
    }

    public String getTargetAppIconUrl() {
        return this.n;
    }

    public void setTargetAppIconUrl(String str) {
        this.n = str;
    }

    class b extends Handler {
        b() {
        }

        @Override
        public final void handleMessage(Message message) {
            try {
                int i = message.what;
                if (i == 1) {
                    if (b.this.d != null) {
                        b.this.d.onStart();
                        return;
                    }
                    return;
                }
                if (i == 2) {
                    if (b.this.d != null) {
                        b.this.d.onStatus(message.arg1);
                        return;
                    }
                    return;
                }
                if (i == 3) {
                    if (b.this.d != null) {
                        b.this.d.onProgressUpdate(message.arg1);
                        return;
                    }
                    return;
                }
                if (i == 5) {
                    try {
                        if (b.this.z != null) {
                            b.this.c.unbindService(b.this.z);
                        }
                    } catch (Exception e) {
                        e.printStackTrace();
                    }
                    if (b.this.d != null) {
                        if (message.arg1 != 1 && message.arg1 != 3 && message.arg1 != 5) {
                            b.this.d.onEnd(8, 0, null);
                            z.a(b.b, "DownloadAgent.handleMessage(DownloadingService.DOWNLOAD_COMPLETE_FAIL): ");
                            return;
                        }
                        b.this.d.onEnd(message.arg1, message.arg2, message.getData().getString("filename"));
                        return;
                    }
                    return;
                }
                super.handleMessage(message);
            } catch (Exception e2) {
                e2.printStackTrace();
                z.a(b.b, "DownloadAgent.handleMessage(" + message.what + "): " + e2.getMessage());
            }
        }
    }

    public b(String str, String str2, String str3) {
        this.f = Device.NETWORN_NONE;
        this.f = str2;
        this.h = str3;
        this.k = str;
    }

    public b setTitle(String str) {
        this.g = str;
        return this;
    }

    public void setDownloadListener(IDownloadListener iDownloadListener) {
        this.d = iDownloadListener;
    }

    public void setDownloadClz(String str) {
        this.p = str;
    }

    public void start() {
        String str = this.p;
        if (str == null) {
            throw new IllegalArgumentException("cannot find MBService");
        }
        try {
            Class<?> cls = Class.forName(str);
            this.c.bindService(new Intent(this.c, cls), this.z, 1);
            this.c.startService(new Intent(this.c, cls));
        } catch (ClassNotFoundException e) {
            throw new IllegalArgumentException(e);
        }
    }

    static class a {
        public String a;
        public String b;
        public String c;
        public String d;
        public String e;
        public String f;
        public String g;
        public boolean h;
        public String j;
        public boolean i = false;
        public String[] k = null;
        public String[] l = null;
        public String[] m = null;
        public String[] n = null;
        public String[] o = null;
        public String[] p = null;
        public boolean q = false;
        public boolean r = false;
        public boolean s = false;

        public a(String str, String str2, String str3, String str4, boolean z) {
            this.h = true;
            this.b = str;
            this.c = str2;
            this.d = str3;
            this.g = str4;
            this.h = z;
        }
    }
}
