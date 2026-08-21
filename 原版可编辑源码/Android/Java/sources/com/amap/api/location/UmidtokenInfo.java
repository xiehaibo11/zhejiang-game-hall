package com.amap.api.location;

import android.content.Context;
import android.os.Handler;
import com.loc.fr;
import com.loc.o;

public class UmidtokenInfo {
    private static AMapLocationClient d;
    static Handler a = new Handler();
    static String b = null;
    private static long e = 30000;
    static boolean c = true;

    static class a implements AMapLocationListener {
        a() {
        }

        @Override
        public final void onLocationChanged(AMapLocation aMapLocation) {
            try {
                if (UmidtokenInfo.d != null) {
                    UmidtokenInfo.a.removeCallbacksAndMessages(null);
                    UmidtokenInfo.d.onDestroy();
                }
            } catch (Throwable th) {
                fr.a(th, "UmidListener", "onLocationChanged");
            }
        }
    }

    public static String getUmidtoken() {
        return b;
    }

    public static void setLocAble(boolean z) {
        c = z;
    }

    public static synchronized void setUmidtoken(Context context, String str) {
        try {
            b = str;
            o.a(str);
            if (d == null && c) {
                a aVar = new a();
                d = new AMapLocationClient(context);
                AMapLocationClientOption aMapLocationClientOption = new AMapLocationClientOption();
                aMapLocationClientOption.setOnceLocation(true);
                aMapLocationClientOption.setNeedAddress(false);
                d.setLocationOption(aMapLocationClientOption);
                d.setLocationListener(aVar);
                d.startLocation();
                a.postDelayed(new Runnable() {
                    @Override
                    public final void run() {
                        try {
                            if (UmidtokenInfo.d != null) {
                                UmidtokenInfo.d.onDestroy();
                            }
                        } catch (Throwable th) {
                            fr.a(th, "UmidListener", "postDelayed");
                        }
                    }
                }, 30000L);
            }
        } catch (Throwable th) {
            fr.a(th, "UmidListener", "setUmidtoken");
        }
    }
}
