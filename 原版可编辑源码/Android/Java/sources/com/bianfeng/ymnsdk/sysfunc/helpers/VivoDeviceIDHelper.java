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
        this.handler = new Handler(this.handlerThread.getLooper()) {
            @Override
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

    /* JADX WARN: Removed duplicated region for block: B:15:0x004e  */
    /* JADX WARN: Removed duplicated region for block: B:19:0x0063  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private String getContentResolver(int i, String str) {
        Uri uri;
        Uri uri2;
        Cursor cursorQuery;
        if (i == 0) {
            uri = Uri.parse("content://com.vivo.vms.IdProvider/IdentifierId/OAID");
        } else if (i == 1) {
            uri = Uri.parse("content://com.vivo.vms.IdProvider/IdentifierId/VAID_" + str);
        } else if (i == 2) {
            uri = Uri.parse("content://com.vivo.vms.IdProvider/IdentifierId/AAID_" + str);
        } else {
            uri2 = null;
            cursorQuery = this.mConetxt.getContentResolver().query(uri2, null, null, null, null);
            if (cursorQuery == null) {
                string = cursorQuery.moveToNext() ? cursorQuery.getString(cursorQuery.getColumnIndex("value")) : null;
                cursorQuery.close();
            } else {
                Log.i("Wooo", "VivoDeviceIDHelper getContentResolver is faile.");
            }
            return string;
        }
        uri2 = uri;
        cursorQuery = this.mConetxt.getContentResolver().query(uri2, null, null, null, null);
        if (cursorQuery == null) {
        }
        return string;
    }
}
