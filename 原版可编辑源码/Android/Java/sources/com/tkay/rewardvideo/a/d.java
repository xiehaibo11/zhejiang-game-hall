package com.tkay.rewardvideo.a;

import android.app.Activity;
import android.content.Context;
import android.text.TextUtils;
import android.util.Log;
import com.tkay.core.api.AdError;
import com.tkay.core.api.ErrorCode;
import com.tkay.core.api.TYAdInfo;
import com.tkay.core.api.TYAdStatusInfo;
import com.tkay.core.api.TYEventInterface;
import com.tkay.core.common.b.f;
import com.tkay.core.common.b.i;
import com.tkay.core.common.b.m;
import com.tkay.core.common.l.n;
import com.tkay.core.common.v;
import com.tkay.rewardvideo.api.TYRewardVideoAutoEventListener;
import com.tkay.rewardvideo.api.TYRewardVideoAutoLoadListener;
import java.util.List;
import java.util.Map;

public class d {
    private static volatile d c;
    String a = "RewardVideoAuto";
    TYRewardVideoAutoLoadListener b = new TYRewardVideoAutoLoadListener() {
        @Override
        public final void onRewardVideoAutoLoaded(final String str) {
            m.a().a(new Runnable() {
                @Override
                public final void run() {
                    if (d.this.d != null) {
                        d.this.d.onRewardVideoAutoLoaded(str);
                    }
                }
            });
        }

        @Override
        public final void onRewardVideoAutoLoadFail(final String str, final AdError adError) {
            m.a().a(new Runnable() {
                @Override
                public final void run() {
                    if (d.this.d != null) {
                        d.this.d.onRewardVideoAutoLoadFail(str, adError);
                    }
                }
            });
        }
    };
    private TYRewardVideoAutoLoadListener d;

    public static d a() {
        if (c == null) {
            synchronized (d.class) {
                if (c == null) {
                    c = new d();
                }
            }
        }
        return c;
    }

    public final void a(Context context, String[] strArr, TYRewardVideoAutoLoadListener tYRewardVideoAutoLoadListener) {
        if (context instanceof Activity) {
            m.a().a((Activity) context);
        }
        if (strArr != null) {
            for (String str : strArr) {
                if (!TextUtils.isEmpty(str) && !v.a().e(str)) {
                    v.a().a(str, true);
                    a.a(context, str).a(context, 3, (com.tkay.core.common.b.a) null, (com.tkay.core.common.b.b) null, (Map<String, Object>) null);
                }
            }
        }
        this.d = tYRewardVideoAutoLoadListener;
    }

    public static void a(String... strArr) {
        if (strArr == null) {
            return;
        }
        for (String str : strArr) {
            if (!TextUtils.isEmpty(str) && !v.a().e(str)) {
                v.a().a(str, true);
                a.a(m.a().D(), str).a(m.a().D(), 3, (com.tkay.core.common.b.a) null, (com.tkay.core.common.b.b) null, (Map<String, Object>) null);
            }
        }
    }

    public static void b(String... strArr) {
        if (strArr == null) {
            return;
        }
        for (String str : strArr) {
            if (!TextUtils.isEmpty(str)) {
                v.a().a(str, false);
                a.a(m.a().f(), str).k();
            }
        }
    }

    public static void a(String str, Map<String, Object> map) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        v.a().a(str, map);
    }

    private void a(Activity activity, String str, TYRewardVideoAutoEventListener tYRewardVideoAutoEventListener) {
        a(activity, str, "", tYRewardVideoAutoEventListener);
    }

    public final void a(Activity activity, String str, String str2, TYRewardVideoAutoEventListener tYRewardVideoAutoEventListener) {
        n.b(str, f.i.u, f.i.y, f.i.n, "");
        if (TextUtils.isEmpty(str)) {
            AdError errorCode = ErrorCode.getErrorCode(ErrorCode.exception, "", "placementId is empty.");
            if (tYRewardVideoAutoEventListener != null) {
                tYRewardVideoAutoEventListener.onRewardedVideoAdPlayFailed(errorCode, i.a((com.tkay.core.common.b.n) null));
            }
            Log.e(this.a, "PlacementId is Empty!");
        }
        if (m.a().f() == null || TextUtils.isEmpty(m.a().o()) || TextUtils.isEmpty(m.a().p())) {
            AdError errorCode2 = ErrorCode.getErrorCode(ErrorCode.exception, "", "sdk init error");
            if (tYRewardVideoAutoEventListener != null) {
                tYRewardVideoAutoEventListener.onRewardedVideoAdPlayFailed(errorCode2, i.a((com.tkay.core.common.b.n) null));
            }
            Log.e(this.a, "SDK init error!");
            return;
        }
        if (activity == null) {
            Log.e(this.a, "RewardedVideo Show Activity is null.");
        }
        a.a(activity, str).a(activity, str2, new c(tYRewardVideoAutoEventListener), (TYEventInterface) null, (Map<String, Object>) null);
    }

    public final boolean a(String str) {
        boolean zIsReady = false;
        if (!TextUtils.isEmpty(str)) {
            TYAdStatusInfo tYAdStatusInfoD = d(str);
            if (tYAdStatusInfoD == null) {
                return false;
            }
            zIsReady = tYAdStatusInfoD.isReady();
        }
        n.b(str, f.i.u, f.i.z, String.valueOf(zIsReady), "");
        return zIsReady;
    }

    public final TYAdStatusInfo b(String str) {
        TYAdStatusInfo tYAdStatusInfo;
        if (TextUtils.isEmpty(str) || (tYAdStatusInfo = d(str)) == null) {
            tYAdStatusInfo = new TYAdStatusInfo(false, false, null);
        }
        n.b(str, f.i.u, f.i.A, tYAdStatusInfo.toString(), "");
        return tYAdStatusInfo;
    }

    public final List<TYAdInfo> c(String str) {
        if (TextUtils.isEmpty(str)) {
            Log.e(this.a, "PlacementId is empty.");
            return null;
        }
        a aVarA = a.a(m.a().D(), str);
        if (aVarA != null) {
            return aVarA.a(m.a().D());
        }
        return null;
    }

    public static void a(String str, String str2, Map<String, Object> map) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        m.a().a(str, str2, "1", map);
    }

    private TYAdStatusInfo d(String str) {
        if (m.a().f() == null || TextUtils.isEmpty(m.a().o()) || TextUtils.isEmpty(m.a().p())) {
            Log.e(this.a, "SDK init error!");
            return null;
        }
        a aVarA = a.a(m.a().D(), str);
        if (aVarA != null) {
            return aVarA.a(m.a().D(), (Map<String, Object>) null);
        }
        return null;
    }

    private TYRewardVideoAutoLoadListener b() {
        return this.b;
    }
}
