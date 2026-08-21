package com.sigmob.sdk.base.common;

import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import com.czhj.sdk.common.exceptions.IntentNotResolvableException;
import com.czhj.sdk.common.utils.Preconditions;
import com.czhj.sdk.logger.SigmobLog;
import com.ss.android.download.api.constant.BaseConstants;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;

/* JADX INFO: loaded from: classes3.dex */
public class s {
    private s() {
    }

    public static Intent a(Context context, Class cls, Bundle bundle) {
        Intent intent = new Intent(context, (Class<?>) cls);
        intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        if (bundle != null) {
            intent.putExtras(bundle);
        }
        return intent;
    }

    private static Uri a(Intent intent) {
        Preconditions.NoThrow.checkNotNull(intent);
        return Uri.parse(BaseConstants.MARKET_PREFIX + intent.getPackage());
    }

    private static void a(Context context, Intent intent, String str) throws IntentNotResolvableException {
        Preconditions.NoThrow.checkNotNull(context);
        Preconditions.NoThrow.checkNotNull(intent);
        try {
            c(context, intent);
        } catch (Throwable th) {
            throw new IntentNotResolvableException(str + "\n" + th.getMessage());
        }
    }

    public static void a(Context context, Uri uri) throws IntentNotResolvableException {
        Intent intent = new Intent("android.intent.action.VIEW", uri);
        Preconditions.NoThrow.checkNotNull(context);
        Preconditions.NoThrow.checkNotNull(uri);
        if (a(context, intent)) {
            a(context, intent, "Unable to open intent: " + intent);
            return;
        }
        throw new IntentNotResolvableException("Could not handle application specific action: " + uri + "\n\tYou may be running in the emulator or another device which does not have the required application.");
    }

    public static void a(Context context, Uri uri, String str) throws IntentNotResolvableException {
        Preconditions.NoThrow.checkNotNull(context);
        Preconditions.NoThrow.checkNotNull(uri);
        a(context, new Intent("android.intent.action.VIEW", uri), str);
    }

    public static boolean a(Context context, Intent intent) {
        try {
            return !context.getPackageManager().queryIntentActivities(intent, 0).isEmpty();
        } catch (NullPointerException unused) {
            return false;
        }
    }

    public static boolean a(Context context, String str) {
        try {
            Intent launchIntentForPackage = context.getPackageManager().getLaunchIntentForPackage(str);
            if (launchIntentForPackage == null) {
                return false;
            }
            c(context, launchIntentForPackage);
            return true;
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
            return false;
        }
    }

    public static void b(Context context, Intent intent) throws IntentNotResolvableException {
        Preconditions.NoThrow.checkNotNull(context);
        Preconditions.NoThrow.checkNotNull(intent);
        if (a(context, intent)) {
            a(context, intent, "Unable to open intent: " + intent);
            return;
        }
        throw new IntentNotResolvableException("Could not handle application specific action: " + intent.toString() + "\n\tYou may be running in the emulator or another device which does not have the required application.");
    }

    private static void c(Context context, Intent intent) throws IntentNotResolvableException {
        Preconditions.NoThrow.checkNotNull(context);
        Preconditions.NoThrow.checkNotNull(intent);
        try {
            intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            context.startActivity(intent);
        } catch (Throwable th) {
            throw new IntentNotResolvableException(th);
        }
    }
}
