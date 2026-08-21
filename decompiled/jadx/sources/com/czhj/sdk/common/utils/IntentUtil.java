package com.czhj.sdk.common.utils;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import com.czhj.sdk.common.exceptions.IntentNotResolvableException;
import com.czhj.sdk.common.utils.Preconditions;
import com.czhj.sdk.logger.SigmobLog;
import com.ss.android.download.api.constant.BaseConstants;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;

/* JADX INFO: loaded from: classes.dex */
public class IntentUtil {
    private IntentUtil() {
    }

    private static Uri a(Intent intent) {
        Preconditions.NoThrow.checkNotNull(intent);
        return Uri.parse(BaseConstants.MARKET_PREFIX + intent.getPackage());
    }

    private static void a(Context context, Intent intent) throws IntentNotResolvableException {
        Preconditions.NoThrow.checkNotNull(context);
        Preconditions.NoThrow.checkNotNull(intent);
        if (!(context instanceof Activity)) {
            intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        }
        try {
            context.startActivity(intent);
        } catch (Throwable th) {
            throw new IntentNotResolvableException(th);
        }
    }

    private static void a(Context context, Intent intent, String str) throws IntentNotResolvableException {
        Preconditions.NoThrow.checkNotNull(context);
        Preconditions.NoThrow.checkNotNull(intent);
        try {
            a(context, intent);
        } catch (Throwable th) {
            throw new IntentNotResolvableException(str + "\n" + th.getMessage());
        }
    }

    public static boolean deviceCanHandleIntent(Context context, Intent intent) {
        try {
            return !context.getPackageManager().queryIntentActivities(intent, 0).isEmpty();
        } catch (NullPointerException unused) {
            return false;
        }
    }

    public static Intent getStartActivityIntent(Context context, Class cls, Bundle bundle) {
        Intent intent = new Intent(context, (Class<?>) cls);
        if (!(context instanceof Activity)) {
            intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        }
        if (bundle != null) {
            intent.putExtras(bundle);
        }
        return intent;
    }

    public static void launchActionViewIntent(Context context, Uri uri, String str) throws IntentNotResolvableException {
        Preconditions.NoThrow.checkNotNull(context);
        Preconditions.NoThrow.checkNotNull(uri);
        Intent intent = new Intent("android.intent.action.VIEW", uri);
        if (!(context instanceof Activity)) {
            intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        }
        a(context, intent, str);
    }

    public static boolean launchApplicationForPackageName(Context context, String str) {
        try {
            Intent launchIntentForPackage = context.getPackageManager().getLaunchIntentForPackage(str);
            if (launchIntentForPackage == null) {
                return false;
            }
            a(context, launchIntentForPackage);
            return true;
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
            return false;
        }
    }

    public static void launchApplicationIntent(Context context, Intent intent) throws IntentNotResolvableException {
        Preconditions.NoThrow.checkNotNull(context);
        Preconditions.NoThrow.checkNotNull(intent);
        if (deviceCanHandleIntent(context, intent)) {
            intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            a(context, intent, "Unable to open intent: " + intent);
        }
    }

    public static void launchApplicationUrl(Context context, Uri uri) throws IntentNotResolvableException {
        Intent intent = new Intent("android.intent.action.VIEW", uri);
        Preconditions.NoThrow.checkNotNull(context);
        Preconditions.NoThrow.checkNotNull(uri);
        if (deviceCanHandleIntent(context, intent)) {
            launchApplicationIntent(context, intent);
            return;
        }
        throw new IntentNotResolvableException("Could not handle application specific action: " + uri + "\n\tYou may be running in the emulator or another device which does not have the required application.");
    }
}
