package com.ss.android.socialbase.appdownloader.c;

import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.pm.PackageManager;
import android.os.Process;
import android.telephony.TelephonyManager;
import com.ss.android.socialbase.downloader.constants.MonitorConstants;
import com.ss.android.socialbase.downloader.utils.DownloadUtils;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.net.InetAddress;
import java.net.Socket;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;

public class pp {
    private static Boolean rg;

    public static boolean rg() {
        Boolean bool = rg;
        if (bool == null) {
            return true;
        }
        return bool.booleanValue();
    }

    public static synchronized void rg(Context context) {
        if (rg == null) {
            rg = Boolean.valueOf((df() || df(context) || q(context) || !pt(context) || q() || pp(context)) ? false : true);
        }
    }

    public static boolean df() {
        if (pt() == 0) {
            return true;
        }
        return pp();
    }

    public static boolean df(Context context) {
        try {
            return (context.getApplicationInfo().flags & 2) != 0;
        } catch (Exception unused) {
            return false;
        }
    }

    private static int pt() {
        String str = null;
        try {
            Object objInvoke = Class.forName("android.os.SystemProperties").getMethod(MonitorConstants.CONNECT_TYPE_GET, String.class).invoke(null, rg("726f2e736563757265"));
            if (objInvoke != null) {
                str = (String) objInvoke;
            }
        } catch (Exception unused) {
        }
        return (str != null && "0".equals(str)) ? 0 : 1;
    }

    private static boolean pp() {
        String[] strArr = {rg("2f7362696e2f7375"), rg("2f73797374656d2f62696e2f7375"), rg("2f73797374656d2f7862696e2f7375"), rg("2f646174612f6c6f63616c2f7862696e2f7375"), rg("2f646174612f6c6f63616c2f62696e2f7375"), rg("2f73797374656d2f73642f7862696e2f7375"), rg("2f73797374656d2f62696e2f6661696c736166652f7375"), rg("2f646174612f6c6f63616c2f7375")};
        for (int i = 0; i < 8; i++) {
            if (new File(strArr[i]).exists()) {
                return true;
            }
        }
        return false;
    }

    public static boolean q(Context context) {
        Intent intentRegisterReceiver = context.registerReceiver(null, new IntentFilter("android.intent.action.BATTERY_CHANGED"));
        return intentRegisterReceiver != null && intentRegisterReceiver.getIntExtra("plugged", -1) == 2;
    }

    public static boolean pt(Context context) {
        try {
            int simState = ((TelephonyManager) context.getSystemService("phone")).getSimState();
            return (simState == 1 || simState == 0) ? false : true;
        } catch (Throwable unused) {
            return false;
        }
    }

    public static boolean q() {
        try {
            InetAddress.getByName(rg("3132372e302e302e31"));
            new Socket(rg("3132372e302e302e31"), Integer.parseInt(rg("3237303432")));
            return true;
        } catch (IOException unused) {
            return false;
        }
    }

    public static boolean pp(Context context) {
        return c() || c(context);
    }

    private static boolean c() {
        try {
            HashSet<String> hashSet = new HashSet();
            BufferedReader bufferedReader = new BufferedReader(new FileReader("/proc/" + Process.myPid() + "/maps"));
            while (true) {
                String line = bufferedReader.readLine();
                if (line == null) {
                    break;
                }
                if (line.endsWith(".so") || line.endsWith(".jar")) {
                    hashSet.add(line.substring(line.lastIndexOf(" ") + 1));
                }
            }
            bufferedReader.close();
            for (String str : hashSet) {
                if (str.contains(rg("636f6d2e73617572696b2e737562737472617465")) || str.contains(rg("58706f7365644272696467652e6a6172")) || str.contains(rg("6c696273616e64686f6f6b2e656478702e736f"))) {
                    return true;
                }
            }
            return false;
        } catch (Exception unused) {
            return false;
        }
    }

    private static boolean c(Context context) {
        List listAsList = Arrays.asList(rg("64652e726f62762e616e64726f69642e78706f736564"), rg("636f6d2e746f706a6f686e77752e6d616769736b"), rg("696f2e76612e6578706f736564"), rg("636f6d2e77696e642e636f74746572"), rg("6f72672e6d656f776361742e656478706f7365642e6d616e61676572"), rg("6d652e7765697368752e657870"), rg("636f6d2e73617572696b2e737562737472617465"));
        PackageManager packageManager = context.getPackageManager();
        Iterator it = listAsList.iterator();
        while (it.hasNext()) {
            try {
            } catch (PackageManager.NameNotFoundException e) {
                e.printStackTrace();
            }
            if (packageManager.getPackageInfo((String) it.next(), 0) != null) {
                return true;
            }
        }
        return false;
    }

    private static String rg(String str) {
        return DownloadUtils.hexToString(str);
    }
}
