package com.igexin.push.core.bean;

import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import com.bianfeng.libuniverse.Device;

public class k extends BaseAction {
    private String a;
    private boolean b;
    private boolean c;
    private String d;

    private String d() {
        NetworkInfo activeNetworkInfo;
        try {
            ConnectivityManager connectivityManager = (ConnectivityManager) com.igexin.push.core.d.g.getSystemService("connectivity");
            if (connectivityManager == null || (activeNetworkInfo = connectivityManager.getActiveNetworkInfo()) == null) {
                return null;
            }
            if (activeNetworkInfo.getType() == 1) {
                return Device.NETWORN_WIFI;
            }
            if (activeNetworkInfo.getType() == 0) {
                return Device.NETWORN_MOBILE;
            }
            return null;
        } catch (Throwable unused) {
            return null;
        }
    }

    public String a() {
        return this.a;
    }

    public void a(String str) {
        this.a = str;
    }

    public void a(boolean z) {
        this.b = z;
    }

    public String b() {
        return this.d;
    }

    public void b(String str) {
        this.d = str;
    }

    public void b(boolean z) {
        this.c = z;
    }

    public String c() {
        String strD;
        StringBuilder sb;
        String str;
        StringBuilder sb2;
        String str2;
        String string = this.a;
        if (this.b) {
            if (string.indexOf("?") > 0) {
                sb2 = new StringBuilder();
                sb2.append(string);
                str2 = "&cid=";
            } else {
                sb2 = new StringBuilder();
                sb2.append(string);
                str2 = "?cid=";
            }
            sb2.append(str2);
            sb2.append(com.igexin.push.core.d.u);
            string = sb2.toString();
        }
        if (!this.c || (strD = d()) == null) {
            return string;
        }
        if (string.indexOf("?") > 0) {
            sb = new StringBuilder();
            sb.append(string);
            str = "&nettype=";
        } else {
            sb = new StringBuilder();
            sb.append(string);
            str = "?nettype=";
        }
        sb.append(str);
        sb.append(strD);
        return sb.toString();
    }
}
