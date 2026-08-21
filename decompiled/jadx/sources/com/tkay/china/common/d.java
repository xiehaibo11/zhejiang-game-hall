package com.tkay.china.common;

import android.content.Context;
import android.content.Intent;
import android.os.Build;
import android.support.v4.app.ActivityCompat;
import android.util.Log;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.tkay.china.activity.TransparentActivity;
import java.util.Random;
import okhttp3.internal.http2.Http2Connection;

/* JADX INFO: loaded from: classes3.dex */
public final class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f5935a = "android.permission.READ_PHONE_STATE";
    public static final String b = "android.permission.WRITE_EXTERNAL_STORAGE";

    public interface a {
        void a();
    }

    private static void a(Context context, a aVar, String... strArr) {
        if (context != null && Build.VERSION.SDK_INT >= 23) {
            int iNextInt = new Random().nextInt(Http2Connection.DEGRADED_PONG_TIMEOUT_NS);
            if (aVar != null) {
                TransparentActivity.e.put(Integer.valueOf(iNextInt), aVar);
            }
            Intent intent = new Intent(context, (Class<?>) TransparentActivity.class);
            intent.putExtra("type", 1000);
            intent.putExtra(TransparentActivity.b, iNextInt);
            intent.putExtra(TransparentActivity.d, strArr);
            intent.setFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            context.startActivity(intent);
            return;
        }
        Log.i("PermissionManager", "Build.VERSION.SDK_INT below 23 does not require permission");
    }

    public static boolean a(Context context, String str) {
        try {
            return ActivityCompat.checkSelfPermission(context, str) == 0;
        } catch (Throwable th) {
            th.printStackTrace();
            return false;
        }
    }
}
