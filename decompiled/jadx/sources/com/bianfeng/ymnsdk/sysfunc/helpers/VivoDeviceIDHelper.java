package com.bianfeng.ymnsdk.sysfunc.helpers;

import android.content.Context;
import android.database.Cursor;
import android.net.Uri;
import android.os.Bundle;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Message;
import android.support.v4.os.EnvironmentCompat;
import android.util.Log;
import com.alipay.sdk.m.p0.c;
import com.ss.android.socialbase.downloader.constants.MonitorConstants;

/* JADX INFO: loaded from: classes.dex */
public class VivoDeviceIDHelper {
    private Handler handler;
    private HandlerThread handlerThread;
    private Context mConetxt;
    private boolean isSupportIds = false;
    String oaid = null;

    public VivoDeviceIDHelper(Context context) {
        this.mConetxt = context;
    }

    public String getOaid() {
        Cursor cursorQuery = this.mConetxt.getContentResolver().query(Uri.parse("content://com.vivo.vms.IdProvider/IdentifierId/OAID"), null, null, null, null);
        if (cursorQuery != null) {
            string = cursorQuery.moveToNext() ? cursorQuery.getString(cursorQuery.getColumnIndex("value")) : null;
            cursorQuery.close();
        } else {
            Log.i("Wooo", "VivoDeviceIDHelper getContentResolver is faile.");
        }
        return string;
    }

    public String loge() {
        f();
        isSupportIds();
        if (!this.isSupportIds || this.oaid != null) {
            return null;
        }
        timeCheck(0, null);
        return null;
    }

    private void timeCheck(int i, String str) {
        Message messageObtainMessage = this.handler.obtainMessage();
        messageObtainMessage.what = 11;
        Bundle bundle = new Bundle();
        bundle.putInt("type", 0);
        if (i == 1 || i == 2) {
            bundle.putString("appid", str);
        }
        messageObtainMessage.setData(bundle);
        this.handler.sendMessage(messageObtainMessage);
    }

    private String sysProperty(String str, String str2) {
        try {
            Class<?> cls = Class.forName("android.os.SystemProperties");
            return (String) cls.getMethod(MonitorConstants.CONNECT_TYPE_GET, String.class, String.class).invoke(cls, str, EnvironmentCompat.MEDIA_UNKNOWN);
        } catch (Exception e) {
            e.printStackTrace();
            return str2;
        }
    }

    private boolean isSupportIds() {
        String strSysProperty = sysProperty(c.c, "0");
        Log.i("Wooo", "VIVO_OpenDeviceIDs isSupportIds issup -> " + strSysProperty);
        boolean zEquals = strSysProperty.equals("1");
        this.isSupportIds = zEquals;
        return zEquals;
    }

    private void f() {
        HandlerThread handlerThread = new HandlerThread("SqlWorkThread");
        this.handlerThread = handlerThread;
        handlerThread.start();
        this.handler = new Handler(this.handlerThread.getLooper()) { // from class: com.bianfeng.ymnsdk.sysfunc.helpers.VivoDeviceIDHelper.1
            @Override // android.os.Handler
            public void handleMessage(Message message) {
                super.handleMessage(message);
                if (message.what == 11) {
                    int i = message.getData().getInt("type");
                    String string = message.getData().getString("appid");
                    Log.i("Wooo", "VivoDeviceIDHelper getOAID id -> " + VivoDeviceIDHelper.this.getContentResolver(i, string) + " , tag -> " + i + " ,name -> " + string);
                    return;
                }
                Log.i("Wooo", "VivoDeviceIDHelper getOAID is valied.");
            }
        };
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Removed duplicated region for block: B:15:0x004e  */
    /* JADX WARN: Removed duplicated region for block: B:19:0x0063  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public java.lang.String getContentResolver(int r8, java.lang.String r9) {
        /*
            r7 = this;
            r0 = 0
            if (r8 == 0) goto L37
            r1 = 1
            if (r8 == r1) goto L21
            r1 = 2
            if (r8 == r1) goto Lb
            r2 = r0
            goto L3e
        Lb:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r1 = "content://com.vivo.vms.IdProvider/IdentifierId/AAID_"
            r8.append(r1)
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            android.net.Uri r8 = android.net.Uri.parse(r8)
            goto L3d
        L21:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r1 = "content://com.vivo.vms.IdProvider/IdentifierId/VAID_"
            r8.append(r1)
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            android.net.Uri r8 = android.net.Uri.parse(r8)
            goto L3d
        L37:
            java.lang.String r8 = "content://com.vivo.vms.IdProvider/IdentifierId/OAID"
            android.net.Uri r8 = android.net.Uri.parse(r8)
        L3d:
            r2 = r8
        L3e:
            android.content.Context r8 = r7.mConetxt
            android.content.ContentResolver r1 = r8.getContentResolver()
            r3 = 0
            r4 = 0
            r5 = 0
            r6 = 0
            android.database.Cursor r8 = r1.query(r2, r3, r4, r5, r6)
            if (r8 == 0) goto L63
            boolean r9 = r8.moveToNext()
            if (r9 == 0) goto L5f
            java.lang.String r9 = "value"
            int r9 = r8.getColumnIndex(r9)
            java.lang.String r9 = r8.getString(r9)
            r0 = r9
        L5f:
            r8.close()
            goto L6a
        L63:
            java.lang.String r8 = "Wooo"
            java.lang.String r9 = "VivoDeviceIDHelper getContentResolver is faile."
            android.util.Log.i(r8, r9)
        L6a:
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.bianfeng.ymnsdk.sysfunc.helpers.VivoDeviceIDHelper.getContentResolver(int, java.lang.String):java.lang.String");
    }
}
