package com.igexin.push.config;

import android.os.Bundle;

public class m {
    public static void a() {
        try {
            Bundle bundle = com.igexin.push.core.d.g.getPackageManager().getApplicationInfo(com.igexin.push.core.d.g.getPackageName(), 128).metaData;
            if (bundle != null) {
                for (String str : bundle.keySet()) {
                    if (str.equals("PUSH_DOMAIN")) {
                        com.igexin.b.a.c.b.a("PUSH_DOMAIN:" + bundle.getString(str), new Object[0]);
                        a(bundle.getString(str));
                        return;
                    }
                }
            }
        } catch (Exception e) {
            com.igexin.b.a.c.b.a(e.toString(), new Object[0]);
        }
    }

    private static void a(String str) {
        SDKUrlConfig.setXfrAddressIps(new String[]{"socket://xfr." + str + ":5224"});
        StringBuilder sb = new StringBuilder();
        sb.append("XFR_ADDRESS_IPS:");
        sb.append(SDKUrlConfig.getXfrAddress()[0]);
        com.igexin.b.a.c.b.a(sb.toString(), new Object[0]);
        SDKUrlConfig.XFR_ADDRESS_BAK = new String[]{"socket://xfr_bak." + str + ":5224"};
        StringBuilder sb2 = new StringBuilder();
        sb2.append("XFR_ADDRESS_IPS_BAK:");
        sb2.append(SDKUrlConfig.XFR_ADDRESS_BAK[0]);
        com.igexin.b.a.c.b.a(sb2.toString(), new Object[0]);
    }
}
