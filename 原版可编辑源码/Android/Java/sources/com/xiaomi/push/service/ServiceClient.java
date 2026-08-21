package com.xiaomi.push.service;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageInfo;
import android.os.Build;
import android.os.Bundle;
import android.os.Message;
import android.os.Messenger;
import android.os.RemoteException;
import android.text.TextUtils;
import com.xiaomi.mipush.sdk.Constants;
import com.xiaomi.push.et;
import com.xiaomi.push.gk;
import com.xiaomi.push.gl;
import com.xiaomi.push.gm;
import com.xiaomi.push.gp;
import com.xiaomi.push.gy;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import org.apache.http.NameValuePair;

public class ServiceClient {
    private static ServiceClient a;
    private static String a;
    private Context a;
    private boolean a;
    private Messenger b;
    private static String b = gy.a(5) + Constants.ACCEPT_TIME_SEPARATOR_SERVER;
    private static long a = 0;
    private Messenger a = null;
    private List<Message> a = new ArrayList();
    private boolean b = false;

    private ServiceClient(Context context) {
        this.a = false;
        this.a = context.getApplicationContext();
        if (a()) {
            com.xiaomi.channel.commonutils.logger.b.c("use miui push service");
            this.a = true;
        }
    }

    private Intent a() {
        if (!isMiuiPushServiceEnabled()) {
            Intent intent = new Intent(this.a, (Class<?>) XMPushService.class);
            intent.putExtra(bk.B, this.a.getPackageName());
            b();
            return intent;
        }
        Intent intent2 = new Intent();
        intent2.setPackage("com.xiaomi.xmsf");
        intent2.setClassName("com.xiaomi.xmsf", a());
        intent2.putExtra(bk.B, this.a.getPackageName());
        a();
        return intent2;
    }

    private Message a(Intent intent) {
        Message messageObtain = Message.obtain();
        messageObtain.what = 17;
        messageObtain.obj = intent;
        return messageObtain;
    }

    private String a() {
        try {
            return this.a.getPackageManager().getPackageInfo("com.xiaomi.xmsf", 4).versionCode >= 106 ? "com.xiaomi.push.service.XMPushService" : "com.xiaomi.xmsf.push.service.XMPushService";
        } catch (Exception unused) {
            return "com.xiaomi.xmsf.push.service.XMPushService";
        }
    }

    private String a(Map<String, String> map) {
        StringBuilder sb = new StringBuilder();
        int i = 1;
        for (Map.Entry<String, String> entry : map.entrySet()) {
            sb.append(entry.getKey());
            sb.append(Constants.COLON_SEPARATOR);
            sb.append(entry.getValue());
            if (i < map.size()) {
                sb.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
            }
            i++;
        }
        return sb.toString();
    }

    private Map<String, String> a(List<NameValuePair> list) {
        HashMap map = new HashMap();
        if (list != null && list.size() > 0) {
            for (NameValuePair nameValuePair : list) {
                if (nameValuePair != null) {
                    map.put(nameValuePair.getName(), nameValuePair.getValue());
                }
            }
        }
        return map;
    }

    private void a() {
        this.a.getPackageManager().setComponentEnabledSetting(new ComponentName(this.a, (Class<?>) XMPushService.class), 2, 1);
    }

    private synchronized void a(Intent intent) {
        if (this.b) {
            Message messageA = a(intent);
            if (this.a.size() >= 50) {
                this.a.remove(0);
            }
            this.a.add(messageA);
            return;
        }
        if (this.b == null) {
            this.a.bindService(intent, new bu(this), 1);
            this.b = true;
            this.a.clear();
            this.a.add(a(intent));
        } else {
            try {
                this.b.send(a(intent));
            } catch (RemoteException unused) {
                this.b = null;
                this.b = false;
            }
        }
    }

    private void a(Intent intent, String str, String str2, String str3, String str4, String str5, boolean z, Map<String, String> map, Map<String, String> map2) {
        intent.putExtra(bk.q, str);
        intent.putExtra(bk.t, str2);
        intent.putExtra(bk.v, str3);
        intent.putExtra(bk.x, str5);
        intent.putExtra(bk.w, str4);
        intent.putExtra(bk.y, z);
        intent.putExtra(bk.F, a);
        intent.putExtra(bk.J, this.a);
        if (map != null && map.size() > 0) {
            String strA = a(map);
            if (!TextUtils.isEmpty(strA)) {
                intent.putExtra(bk.z, strA);
            }
        }
        if (map2 == null || map2.size() <= 0) {
            return;
        }
        String strA2 = a(map2);
        if (TextUtils.isEmpty(strA2)) {
            return;
        }
        intent.putExtra(bk.A, strA2);
    }

    private boolean a() {
        if (com.xiaomi.push.ae.e) {
            return false;
        }
        try {
            PackageInfo packageInfo = this.a.getPackageManager().getPackageInfo("com.xiaomi.xmsf", 4);
            if (packageInfo == null) {
                return false;
            }
            return packageInfo.versionCode >= 104;
        } catch (Exception unused) {
            return false;
        }
    }

    private void b() {
        this.a.getPackageManager().setComponentEnabledSetting(new ComponentName(this.a, (Class<?>) XMPushService.class), 1, 1);
    }

    public static ServiceClient getInstance(Context context) {
        if (a == null) {
            a = new ServiceClient(context);
        }
        return a;
    }

    public static String getSession() {
        return a;
    }

    public static void setSession(String str) {
        a = str;
    }

    public boolean batchSendMessage(gm[] gmVarArr, boolean z) {
        if (!com.xiaomi.push.bj.b(this.a)) {
            return false;
        }
        Intent intentA = a();
        int length = gmVarArr.length;
        Bundle[] bundleArr = new Bundle[length];
        for (int i = 0; i < gmVarArr.length; i++) {
            String strA = et.a();
            if (!TextUtils.isEmpty(strA)) {
                String[] strArr = (String[]) null;
                gk gkVar = new gk("pf", null, strArr, strArr);
                gk gkVar2 = new gk("sent", null, strArr, strArr);
                gkVar2.a(strA);
                gkVar.a(gkVar2);
                gmVarArr[i].a(gkVar);
            }
            com.xiaomi.channel.commonutils.logger.b.c("SEND:" + gmVarArr[i].a());
            bundleArr[i] = gmVarArr[i].a();
        }
        if (length <= 0) {
            return false;
        }
        intentA.setAction(bk.g);
        intentA.putExtra(bk.F, a);
        intentA.putExtra("ext_packets", bundleArr);
        intentA.putExtra("ext_encrypt", z);
        return startServiceSafely(intentA);
    }

    public void checkAlive() {
        Intent intentA = a();
        intentA.setAction("com.xiaomi.push.check_alive");
        startServiceSafely(intentA);
    }

    public boolean closeChannel() {
        Intent intentA = a();
        intentA.setAction(bk.i);
        return startServiceSafely(intentA);
    }

    public boolean closeChannel(String str) {
        Intent intentA = a();
        intentA.setAction(bk.i);
        intentA.putExtra(bk.t, str);
        return startServiceSafely(intentA);
    }

    public boolean closeChannel(String str, String str2) {
        Intent intentA = a();
        intentA.setAction(bk.i);
        intentA.putExtra(bk.t, str);
        intentA.putExtra(bk.q, str2);
        return startServiceSafely(intentA);
    }

    @Deprecated
    public boolean forceReconnection(String str, String str2, String str3, String str4, String str5, boolean z, List<NameValuePair> list, List<NameValuePair> list2) {
        return forceReconnection(str, str2, str3, str4, str5, z, a(list), a(list2));
    }

    public boolean forceReconnection(String str, String str2, String str3, String str4, String str5, boolean z, Map<String, String> map, Map<String, String> map2) {
        Intent intentA = a();
        intentA.setAction(bk.j);
        a(intentA, str, str2, str3, str4, str5, z, map, map2);
        return startServiceSafely(intentA);
    }

    public boolean isMiuiPushServiceEnabled() {
        return this.a;
    }

    public int openChannel(String str, String str2, String str3, String str4, String str5, Map<String, String> map, Map<String, String> map2, boolean z) {
        Intent intentA = a();
        intentA.setAction(bk.d);
        a(intentA, str, str2, str3, str4, str5, z, map, map2);
        startServiceSafely(intentA);
        return 0;
    }

    @Deprecated
    public int openChannel(String str, String str2, String str3, String str4, String str5, boolean z, List<NameValuePair> list, List<NameValuePair> list2) {
        return openChannel(str, str2, str3, str4, str5, a(list), a(list2), z);
    }

    @Deprecated
    public void resetConnection(String str, String str2, String str3, String str4, String str5, boolean z, List<NameValuePair> list, List<NameValuePair> list2) {
        resetConnection(str, str2, str3, str4, str5, z, a(list), a(list2));
    }

    public void resetConnection(String str, String str2, String str3, String str4, String str5, boolean z, Map<String, String> map, Map<String, String> map2) {
        Intent intentA = a();
        intentA.setAction(bk.k);
        a(intentA, str, str2, str3, str4, str5, z, map, map2);
        startServiceSafely(intentA);
    }

    public boolean sendIQ(gl glVar) {
        if (!com.xiaomi.push.bj.b(this.a)) {
            return false;
        }
        Intent intentA = a();
        Bundle bundleA = glVar.a();
        if (bundleA == null) {
            return false;
        }
        com.xiaomi.channel.commonutils.logger.b.c("SEND:" + glVar.a());
        intentA.setAction(bk.f);
        intentA.putExtra(bk.F, a);
        intentA.putExtra("ext_packet", bundleA);
        return startServiceSafely(intentA);
    }

    public boolean sendMessage(gm gmVar, boolean z) {
        if (!com.xiaomi.push.bj.b(this.a)) {
            return false;
        }
        Intent intentA = a();
        String strA = et.a();
        if (!TextUtils.isEmpty(strA)) {
            String[] strArr = (String[]) null;
            gk gkVar = new gk("pf", null, strArr, strArr);
            gk gkVar2 = new gk("sent", null, strArr, strArr);
            gkVar2.a(strA);
            gkVar.a(gkVar2);
            gmVar.a(gkVar);
        }
        Bundle bundleA = gmVar.a();
        if (bundleA == null) {
            return false;
        }
        com.xiaomi.channel.commonutils.logger.b.c("SEND:" + gmVar.a());
        intentA.setAction(bk.e);
        intentA.putExtra(bk.F, a);
        intentA.putExtra("ext_packet", bundleA);
        intentA.putExtra("ext_encrypt", z);
        return startServiceSafely(intentA);
    }

    public boolean sendMessage(byte[] bArr, String str, String str2) {
        String strSubstring;
        if (!com.xiaomi.push.bj.b(this.a) || bArr == null || TextUtils.isEmpty(str) || TextUtils.isEmpty(str2)) {
            com.xiaomi.channel.commonutils.logger.b.a("Failed to send message: message|userId|chid may be empty, or the network is unavailable.");
            return false;
        }
        Intent intentA = a();
        if (bArr == null) {
            return false;
        }
        intentA.setAction(bk.e);
        intentA.putExtra(bk.F, a);
        intentA.putExtra("ext_raw_packet", bArr);
        int iIndexOf = str.indexOf("@");
        String strSubstring2 = null;
        String strSubstring3 = iIndexOf != -1 ? str.substring(0, iIndexOf) : null;
        int iLastIndexOf = str.lastIndexOf("/");
        if (iLastIndexOf != -1) {
            strSubstring2 = str.substring(iIndexOf + 1, iLastIndexOf);
            strSubstring = str.substring(iLastIndexOf + 1);
        } else {
            strSubstring = null;
        }
        intentA.putExtra(bk.q, strSubstring3);
        intentA.putExtra(bk.r, strSubstring2);
        intentA.putExtra(bk.s, strSubstring);
        StringBuilder sb = new StringBuilder();
        sb.append(b);
        long j = a;
        a = 1 + j;
        sb.append(j);
        String string = sb.toString();
        intentA.putExtra("ext_pkt_id", string);
        intentA.putExtra("ext_chid", str2);
        com.xiaomi.channel.commonutils.logger.b.e("SEND: chid=" + str2 + ", packetId=" + string);
        return startServiceSafely(intentA);
    }

    public boolean sendPresence(gp gpVar) {
        if (!com.xiaomi.push.bj.b(this.a)) {
            return false;
        }
        Intent intentA = a();
        Bundle bundleA = gpVar.a();
        if (bundleA == null) {
            return false;
        }
        com.xiaomi.channel.commonutils.logger.b.c("SEND:" + gpVar.a());
        intentA.setAction(bk.h);
        intentA.putExtra(bk.F, a);
        intentA.putExtra("ext_packet", bundleA);
        return startServiceSafely(intentA);
    }

    public void setMessenger(Messenger messenger) {
        this.a = messenger;
    }

    public boolean startServiceSafely(Intent intent) {
        try {
            if (com.xiaomi.push.m.a() || Build.VERSION.SDK_INT < 26) {
                this.a.startService(intent);
                return true;
            }
            a(intent);
            return true;
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
            return false;
        }
    }

    @Deprecated
    public void updateChannelInfo(String str, List<NameValuePair> list, List<NameValuePair> list2) {
        updateChannelInfo(str, a(list), a(list2));
    }

    public void updateChannelInfo(String str, Map<String, String> map, Map<String, String> map2) {
        Intent intentA = a();
        intentA.setAction(bk.l);
        if (map != null) {
            String strA = a(map);
            if (!TextUtils.isEmpty(strA)) {
                intentA.putExtra(bk.z, strA);
            }
        }
        if (map2 != null) {
            String strA2 = a(map2);
            if (!TextUtils.isEmpty(strA2)) {
                intentA.putExtra(bk.A, strA2);
            }
        }
        intentA.putExtra(bk.t, str);
        startServiceSafely(intentA);
    }
}
