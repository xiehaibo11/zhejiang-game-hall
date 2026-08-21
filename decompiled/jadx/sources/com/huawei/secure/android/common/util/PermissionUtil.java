package com.huawei.secure.android.common.util;

import android.content.Context;
import android.os.Binder;
import android.os.Process;
import android.support.v4.content.PermissionChecker;
import android.util.Log;
import com.huawei.secure.android.common.exception.NoPermissionCheckerException;

/* JADX INFO: loaded from: classes2.dex */
public class PermissionUtil {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f2272a = "PermissionUtil";

    public static boolean checkCallingPermission(Context context, String str, String str2) throws NoPermissionCheckerException {
        if (Binder.getCallingPid() == Process.myPid()) {
            return false;
        }
        return checkPermission(context, str, Binder.getCallingPid(), Binder.getCallingUid(), str2);
    }

    public static boolean checkPermission(Context context, String str, int i, int i2, String str2) throws NoPermissionCheckerException {
        try {
            return PermissionChecker.checkPermission(context, str, i, i2, str2) == 0;
        } catch (Throwable th) {
            Log.e(f2272a, "checkPermission: " + th.getMessage() + " , you should implementation support library or androidx library");
            throw new NoPermissionCheckerException("you should implementation support library or androidx library");
        }
    }

    public static boolean checkSelfPermission(Context context, String str) throws NoPermissionCheckerException {
        return checkPermission(context, str, Process.myPid(), Process.myUid(), context.getPackageName());
    }
}
