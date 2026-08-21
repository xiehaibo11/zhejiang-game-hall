package com.huawei.updatesdk.a.a.d.h;

import android.car.Car;
import android.car.CarInfoManager;
import android.content.ComponentName;
import android.content.Context;
import android.content.ServiceConnection;
import android.os.IBinder;
import com.ss.android.socialbase.downloader.constants.DBDefinition;

public class a {
    private static Car a;
    private static String b;
    private static String c;
    private static boolean d;

    static class a implements ServiceConnection {
        a() {
        }

        @Override
        public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            try {
                CarInfoManager carInfoManager = (CarInfoManager) a.a.getCarManager(DBDefinition.SEGMENT_INFO);
                String unused = a.c = carInfoManager.getManufacturer();
                String unused2 = a.b = carInfoManager.getModel();
                com.huawei.updatesdk.a.a.a.b("CarInfoUtil", "car getManufacturer = " + a.c + "  getModel = " + a.b);
            } catch (Throwable th) {
                com.huawei.updatesdk.a.a.a.a("CarInfoUtil", "Car not connected in onServiceConnected" + th.toString());
            }
        }

        @Override
        public void onServiceDisconnected(ComponentName componentName) {
            com.huawei.updatesdk.a.a.a.b("CarInfoUtil", "onServiceDisconnected");
        }
    }

    private static void a(Context context) {
        if (context == null || d) {
            return;
        }
        try {
            d = true;
            Car carCreateCar = Car.createCar(context.getApplicationContext(), new a());
            a = carCreateCar;
            if (carCreateCar != null) {
                carCreateCar.connect();
            }
        } catch (Throwable th) {
            com.huawei.updatesdk.a.a.a.a("CarInfoUtil", "Car Service Connect Error" + th.toString());
        }
    }

    public static void b(Context context) {
        a(context);
    }

    public static String d() {
        return c;
    }

    public static String e() {
        return b;
    }
}
