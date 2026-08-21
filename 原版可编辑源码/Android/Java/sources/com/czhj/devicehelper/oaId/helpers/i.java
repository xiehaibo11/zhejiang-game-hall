package com.czhj.devicehelper.oaId.helpers;

import android.content.Context;
import android.database.Cursor;
import android.net.Uri;
import android.os.Bundle;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Message;
import com.czhj.sdk.logger.SigmobLog;
import com.ss.android.socialbase.downloader.constants.MonitorConstants;

public class i {
    private Context b;
    private HandlerThread c;
    private Handler d;
    private boolean e = false;
    String a = null;

    public i(Context context) {
        this.b = context;
    }

    private String a(String str, String str2) {
        try {
            Class<?> cls = Class.forName("android.os.SystemProperties");
            return (String) cls.getMethod(MonitorConstants.CONNECT_TYPE_GET, String.class, String.class).invoke(cls, str, str2);
        } catch (Exception e) {
            SigmobLog.e(e.getMessage());
            return str2;
        }
    }

    private void a(int i, String str) {
        Message messageObtainMessage = this.d.obtainMessage();
        messageObtainMessage.what = 11;
        Bundle bundle = new Bundle();
        bundle.putInt("type", 0);
        if (i == 1 || i == 2) {
            bundle.putString("appid", str);
        }
        messageObtainMessage.setData(bundle);
        this.d.sendMessage(messageObtainMessage);
    }

    private String b(int i, String str) {
        Cursor cursorQuery = this.b.getContentResolver().query(i != 0 ? null : Uri.parse("content://com.vivo.vms.IdProvider/IdentifierId/OAID"), null, null, null, null);
        if (cursorQuery != null) {
            string = cursorQuery.moveToNext() ? cursorQuery.getString(cursorQuery.getColumnIndex("value")) : null;
            cursorQuery.close();
        }
        return string;
    }

    private boolean c() {
        boolean zEquals = a(com.alipay.sdk.m.p0.c.c, "0").equals("1");
        this.e = zEquals;
        return zEquals;
    }

    private void d() {
        HandlerThread handlerThread = new HandlerThread("SqlWorkThread");
        this.c = handlerThread;
        handlerThread.start();
        this.d = new Handler(this.c.getLooper()) {
            @Override
            public void handleMessage(Message message) {
                super.handleMessage(message);
                if (message.what == 11) {
                    i.this.b(message.getData().getInt("type"), message.getData().getString("appid"));
                }
            }
        };
    }

    public String a() {
        Cursor cursorQuery = this.b.getContentResolver().query(Uri.parse("content://com.vivo.vms.IdProvider/IdentifierId/OAID"), null, null, null, null);
        if (cursorQuery != null) {
            string = cursorQuery.moveToNext() ? cursorQuery.getString(cursorQuery.getColumnIndex("value")) : null;
            cursorQuery.close();
        }
        return string;
    }

    public String b() {
        d();
        if (!this.e || this.a != null) {
            return null;
        }
        a(0, (String) null);
        return null;
    }
}
