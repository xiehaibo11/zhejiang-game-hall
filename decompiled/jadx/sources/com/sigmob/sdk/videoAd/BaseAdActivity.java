package com.sigmob.sdk.videoAd;

import android.app.Activity;
import android.content.Context;
import android.content.ContextWrapper;
import android.content.Intent;
import android.media.AudioManager;
import android.os.Bundle;
import com.czhj.sdk.common.Constants;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.common.BaseBroadcastReceiver;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.IntentActions;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import java.util.HashMap;

/* JADX INFO: loaded from: classes3.dex */
public class BaseAdActivity extends Activity {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f5177a = "LandPage";
    public static final String b = "reward";
    public static final String c = "mraid";
    public static final String d = "mraid_two";
    public static final String e = "LandNative";
    public static final String f = "DisLike";
    protected static final String g = "ad_view_class_name";
    protected static final String h = "adUnit_requestId_key";
    public static final String i = "land_page_url";

    private static Intent a(Context context, Class<? extends BaseAdActivity> cls, String str, String str2) {
        Intent intent = new Intent(context, cls);
        intent.setFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        intent.putExtra(g, str2);
        intent.putExtra(h, str);
        int requestedOrientation = context instanceof Activity ? ((Activity) context).getRequestedOrientation() : 3;
        if (requestedOrientation != 7 && requestedOrientation != 6) {
            requestedOrientation = context.getResources().getDisplayMetrics().widthPixels > context.getResources().getDisplayMetrics().heightPixels ? 6 : 7;
        }
        intent.putExtra(com.sigmob.sdk.base.h.u, requestedOrientation);
        intent.putExtra(Constants.BROADCAST_IDENTIFIER_KEY, str);
        return intent;
    }

    public static void a(Context context, Class<? extends BaseAdActivity> cls, BaseAdUnit baseAdUnit) {
        Intent intentA = a(context, cls, baseAdUnit.getUuid(), f5177a);
        try {
            Bundle bundle = new Bundle();
            bundle.putSerializable(i, baseAdUnit);
            intentA.putExtras(bundle);
            context.startActivity(intentA);
        } catch (Throwable th) {
            new HashMap().put("error", th.getMessage());
        }
    }

    public static void a(Context context, Class<? extends BaseAdActivity> cls, String str) {
        a(context, cls, str, null, f5177a);
    }

    public static void a(Context context, Class<? extends BaseAdActivity> cls, String str, Bundle bundle, String str2) {
        Intent intentA = a(context, cls, str, str2);
        if (bundle != null) {
            try {
                intentA.putExtras(bundle);
            } catch (Throwable th) {
                HashMap map = new HashMap();
                map.put("error", th.getMessage());
                BaseBroadcastReceiver.a(context, str, map, IntentActions.ACTION_REWARDED_VIDEO_PLAYFAIL);
                return;
            }
        }
        context.startActivity(intentA);
    }

    public static void b(Context context, Class<? extends BaseAdActivity> cls, String str) {
        try {
            Intent intent = new Intent(context, cls);
            intent.setFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            intent.putExtra(g, f);
            intent.putExtra(h, str);
            int requestedOrientation = context instanceof Activity ? ((Activity) context).getRequestedOrientation() : 3;
            if (requestedOrientation != 7 && requestedOrientation != 6) {
                requestedOrientation = context.getResources().getDisplayMetrics().widthPixels > context.getResources().getDisplayMetrics().heightPixels ? 6 : 7;
            }
            intent.putExtra(com.sigmob.sdk.base.h.u, requestedOrientation);
            intent.putExtra(Constants.BROADCAST_IDENTIFIER_KEY, "dislike_broadcastIdentifier");
            context.startActivity(intent);
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override // android.app.Activity, android.view.ContextThemeWrapper, android.content.ContextWrapper
    protected void attachBaseContext(Context context) {
        super.attachBaseContext(new ContextWrapper(context) { // from class: com.sigmob.sdk.videoAd.BaseAdActivity.1
            @Override // android.content.ContextWrapper, android.content.Context
            public Object getSystemService(String str) {
                return "audio".equals(str) ? getApplicationContext().getSystemService(str) : super.getSystemService(str);
            }
        });
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        super.onDestroy();
        AudioManager audioManager = (AudioManager) getSystemService("audio");
        if (audioManager != null) {
            audioManager.abandonAudioFocus(null);
        }
        SigmobLog.d("BaseAdActivity onDestroy() called");
    }
}
