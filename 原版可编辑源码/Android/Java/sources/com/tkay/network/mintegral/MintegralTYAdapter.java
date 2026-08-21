package com.tkay.network.mintegral;

import android.app.Activity;
import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.out.Campaign;
import com.mbridge.msdk.out.Frame;
import com.mbridge.msdk.out.MBBidNativeHandler;
import com.mbridge.msdk.out.MBMultiStateEnum;
import com.mbridge.msdk.out.MBNativeAdvancedHandler;
import com.mbridge.msdk.out.MBNativeHandler;
import com.mbridge.msdk.out.MBridgeIds;
import com.mbridge.msdk.out.NativeAdvancedAdListener;
import com.mbridge.msdk.out.NativeListener;
import com.tkay.core.api.MediationInitCallback;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.api.TYBidRequestInfoListener;
import com.tkay.core.api.TYInitMediation;
import com.tkay.core.common.c.l;
import com.tkay.nativead.unitgroup.api.CustomNativeAd;
import com.tkay.nativead.unitgroup.api.CustomNativeAdapter;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;

public class MintegralTYAdapter extends CustomNativeAdapter {
    private static final String i = MintegralTYAdapter.class.getSimpleName();
    String a;
    String b;
    String c;
    String d;
    String e;
    int f;
    int g;
    String h;

    @Override
    public void destory() {
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:23:0x0061  */
    /* JADX WARN: Removed duplicated region for block: B:25:0x0064  */
    /* JADX WARN: Removed duplicated region for block: B:28:0x006b  */
    /* JADX WARN: Removed duplicated region for block: B:63:0x00d2  */
    /* JADX WARN: Removed duplicated region for block: B:65:0x00d5  */
    /* JADX WARN: Removed duplicated region for block: B:68:0x00de  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void a(Context context, Map<String, Object> map, String str, String str2, boolean z) {
        boolean z2;
        boolean z3;
        MBBidNativeHandler mBBidNativeHandler;
        MBNativeHandler mBNativeHandler;
        byte b;
        byte b2;
        byte b3 = 0;
        if (map != null) {
            try {
                z3 = Boolean.parseBoolean(map.get(CustomNativeAd.IS_AUTO_PLAY_KEY).toString());
            } catch (Exception unused) {
                z2 = false;
            }
        } else {
            z3 = false;
        }
        z2 = z3;
        if (TextUtils.equals(this.b, "1")) {
            MBNativeAdvancedHandler mBNativeAdvancedHandler = new MBNativeAdvancedHandler((Activity) context, str, str2);
            if (!TextUtils.isEmpty(this.c)) {
                String str3 = this.c;
                int iHashCode = str3.hashCode();
                if (iHashCode != 48) {
                    b2 = (iHashCode == 49 && str3.equals("1")) ? (byte) 1 : (byte) -1;
                    if (b2 != 0) {
                        mBNativeAdvancedHandler.setPlayMuteState(1);
                    } else if (b2 == 1) {
                        mBNativeAdvancedHandler.setPlayMuteState(2);
                    }
                } else {
                    if (str3.equals("0")) {
                        b2 = 0;
                    }
                    if (b2 != 0) {
                    }
                }
            }
            if (!TextUtils.isEmpty(this.d)) {
                String str4 = this.d;
                switch (str4.hashCode()) {
                    case 49:
                        b = !str4.equals("1") ? (byte) -1 : (byte) 0;
                        break;
                    case 50:
                        b = !str4.equals("2") ? (byte) -1 : (byte) 1;
                        break;
                    case 51:
                        b = !str4.equals("3") ? (byte) -1 : (byte) 2;
                        break;
                    default:
                        b = -1;
                        break;
                }
                if (b == 0) {
                    mBNativeAdvancedHandler.autoLoopPlay(1);
                } else if (b == 1) {
                    mBNativeAdvancedHandler.autoLoopPlay(2);
                } else if (b == 2) {
                    mBNativeAdvancedHandler.autoLoopPlay(3);
                }
            }
            if (!TextUtils.isEmpty(this.e)) {
                String str5 = this.e;
                int iHashCode2 = str5.hashCode();
                if (iHashCode2 != 48) {
                    b3 = (iHashCode2 == 49 && str5.equals("1")) ? (byte) 1 : (byte) -1;
                    if (b3 != 0) {
                        mBNativeAdvancedHandler.setCloseButtonState(MBMultiStateEnum.positive);
                    } else if (b3 == 1) {
                        mBNativeAdvancedHandler.setCloseButtonState(MBMultiStateEnum.negative);
                    }
                } else {
                    if (!str5.equals("0")) {
                    }
                    if (b3 != 0) {
                    }
                }
            }
            mBNativeAdvancedHandler.setNativeViewSize(this.f, this.g);
            mBNativeAdvancedHandler.setAdListener(new 1(mBNativeAdvancedHandler, context));
            if (TextUtils.isEmpty(this.a)) {
                MintegralTYInitManager.getInstance().setCustomInfo(8, map);
                mBNativeAdvancedHandler.load();
                return;
            } else {
                MintegralTYInitManager.getInstance().setCustomInfo(7, map);
                mBNativeAdvancedHandler.loadByToken(this.a);
                return;
            }
        }
        Context applicationContext = context.getApplicationContext();
        Map<String, Object> nativeProperties = MBNativeHandler.getNativeProperties(str, str2);
        nativeProperties.put("ad_num", 1);
        nativeProperties.put(MBridgeConstans.PROPERTIES_LAYOUT_TYPE, 0);
        nativeProperties.put(MBridgeConstans.NATIVE_VIDEO_SUPPORT, Boolean.valueOf(z));
        if (TextUtils.isEmpty(this.a)) {
            MintegralTYInitManager.getInstance().setCustomInfo(8, map);
            mBNativeHandler = new MBNativeHandler(nativeProperties, applicationContext);
            mBBidNativeHandler = null;
        } else {
            MintegralTYInitManager.getInstance().setCustomInfo(7, map);
            mBBidNativeHandler = new MBBidNativeHandler(nativeProperties, applicationContext);
            mBNativeHandler = null;
        }
        2 r13 = new 2(mBNativeHandler, mBBidNativeHandler, applicationContext, str, str2, z2);
        if (mBNativeHandler != null) {
            mBNativeHandler.setAdListener(r13);
            mBNativeHandler.load();
        } else {
            mBBidNativeHandler.setAdListener(r13);
            mBBidNativeHandler.bidLoad(this.a);
        }
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:14:0x0037  */
    /* JADX WARN: Removed duplicated region for block: B:16:0x003a  */
    /* JADX WARN: Removed duplicated region for block: B:19:0x0041  */
    /* JADX WARN: Removed duplicated region for block: B:54:0x00a8  */
    /* JADX WARN: Removed duplicated region for block: B:56:0x00ab  */
    /* JADX WARN: Removed duplicated region for block: B:59:0x00b4  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void a(Context context, String str, String str2, Map<String, Object> map) {
        byte b;
        byte b2;
        MBNativeAdvancedHandler mBNativeAdvancedHandler = new MBNativeAdvancedHandler((Activity) context, str, str2);
        byte b3 = 0;
        if (!TextUtils.isEmpty(this.c)) {
            String str3 = this.c;
            int iHashCode = str3.hashCode();
            if (iHashCode != 48) {
                b2 = (iHashCode == 49 && str3.equals("1")) ? (byte) 1 : (byte) -1;
                if (b2 != 0) {
                    mBNativeAdvancedHandler.setPlayMuteState(1);
                } else if (b2 == 1) {
                    mBNativeAdvancedHandler.setPlayMuteState(2);
                }
            } else {
                if (str3.equals("0")) {
                    b2 = 0;
                }
                if (b2 != 0) {
                }
            }
        }
        if (!TextUtils.isEmpty(this.d)) {
            String str4 = this.d;
            switch (str4.hashCode()) {
                case 49:
                    b = !str4.equals("1") ? (byte) -1 : (byte) 0;
                    break;
                case 50:
                    b = !str4.equals("2") ? (byte) -1 : (byte) 1;
                    break;
                case 51:
                    b = !str4.equals("3") ? (byte) -1 : (byte) 2;
                    break;
                default:
                    b = -1;
                    break;
            }
            if (b == 0) {
                mBNativeAdvancedHandler.autoLoopPlay(1);
            } else if (b == 1) {
                mBNativeAdvancedHandler.autoLoopPlay(2);
            } else if (b == 2) {
                mBNativeAdvancedHandler.autoLoopPlay(3);
            }
        }
        if (!TextUtils.isEmpty(this.e)) {
            String str5 = this.e;
            int iHashCode2 = str5.hashCode();
            if (iHashCode2 != 48) {
                b3 = (iHashCode2 == 49 && str5.equals("1")) ? (byte) 1 : (byte) -1;
                if (b3 != 0) {
                    mBNativeAdvancedHandler.setCloseButtonState(MBMultiStateEnum.positive);
                } else if (b3 == 1) {
                    mBNativeAdvancedHandler.setCloseButtonState(MBMultiStateEnum.negative);
                }
            } else {
                if (!str5.equals("0")) {
                }
                if (b3 != 0) {
                }
            }
        }
        mBNativeAdvancedHandler.setNativeViewSize(this.f, this.g);
        mBNativeAdvancedHandler.setAdListener(new 1(mBNativeAdvancedHandler, context));
        if (TextUtils.isEmpty(this.a)) {
            MintegralTYInitManager.getInstance().setCustomInfo(8, map);
            mBNativeAdvancedHandler.load();
        } else {
            MintegralTYInitManager.getInstance().setCustomInfo(7, map);
            mBNativeAdvancedHandler.loadByToken(this.a);
        }
    }

    final class 1 implements NativeAdvancedAdListener {
        final MBNativeAdvancedHandler a;
        final Context b;

        @Override
        public final void closeFullScreen(MBridgeIds mBridgeIds) {
        }

        @Override
        public final void onClick(MBridgeIds mBridgeIds) {
        }

        @Override
        public final void onClose(MBridgeIds mBridgeIds) {
        }

        @Override
        public final void onLeaveApp(MBridgeIds mBridgeIds) {
        }

        @Override
        public final void onLogImpression(MBridgeIds mBridgeIds) {
        }

        @Override
        public final void showFullScreen(MBridgeIds mBridgeIds) {
        }

        1(MBNativeAdvancedHandler mBNativeAdvancedHandler, Context context) {
            this.a = mBNativeAdvancedHandler;
            this.b = context;
        }

        @Override
        public final void onLoadFailed(MBridgeIds mBridgeIds, String str) {
            if (MintegralTYAdapter.this.mLoadListener != null) {
                MintegralTYAdapter.this.mLoadListener.onAdLoadError(str, str);
            }
            this.a.setAdListener(null);
        }

        @Override
        public final void onLoadSuccessed(MBridgeIds mBridgeIds) {
            MintegralTYExpressNativeAd mintegralTYExpressNativeAd = new MintegralTYExpressNativeAd(this.b, this.a, false);
            if (MintegralTYAdapter.this.mLoadListener != null) {
                ArrayList arrayList = new ArrayList();
                arrayList.add(mintegralTYExpressNativeAd);
                MintegralTYAdapter.this.mLoadListener.onAdCacheLoaded((CustomNativeAd[]) arrayList.toArray(new CustomNativeAd[arrayList.size()]));
            }
        }
    }

    private void a(Context context, String str, String str2, boolean z, boolean z2, Map<String, Object> map) {
        MBBidNativeHandler mBBidNativeHandler;
        MBNativeHandler mBNativeHandler;
        Context applicationContext = context.getApplicationContext();
        Map<String, Object> nativeProperties = MBNativeHandler.getNativeProperties(str, str2);
        nativeProperties.put("ad_num", 1);
        nativeProperties.put(MBridgeConstans.PROPERTIES_LAYOUT_TYPE, 0);
        nativeProperties.put(MBridgeConstans.NATIVE_VIDEO_SUPPORT, Boolean.valueOf(z));
        if (TextUtils.isEmpty(this.a)) {
            MintegralTYInitManager.getInstance().setCustomInfo(8, map);
            mBNativeHandler = new MBNativeHandler(nativeProperties, applicationContext);
            mBBidNativeHandler = null;
        } else {
            MintegralTYInitManager.getInstance().setCustomInfo(7, map);
            mBBidNativeHandler = new MBBidNativeHandler(nativeProperties, applicationContext);
            mBNativeHandler = null;
        }
        2 r14 = new 2(mBNativeHandler, mBBidNativeHandler, applicationContext, str, str2, z2);
        if (mBNativeHandler != null) {
            mBNativeHandler.setAdListener(r14);
            mBNativeHandler.load();
        } else {
            mBBidNativeHandler.setAdListener(r14);
            mBBidNativeHandler.bidLoad(this.a);
        }
    }

    final class 2 implements NativeListener.NativeAdListener {
        final MBNativeHandler a;
        final MBBidNativeHandler b;
        final Context c;
        final String d;
        final String e;
        final boolean f;

        @Override
        public final void onAdClick(Campaign campaign) {
        }

        @Override
        public final void onAdFramesLoaded(List<Frame> list) {
        }

        @Override
        public final void onLoggingImpression(int i) {
        }

        2(MBNativeHandler mBNativeHandler, MBBidNativeHandler mBBidNativeHandler, Context context, String str, String str2, boolean z) {
            this.a = mBNativeHandler;
            this.b = mBBidNativeHandler;
            this.c = context;
            this.d = str;
            this.e = str2;
            this.f = z;
        }

        @Override
        public final void onAdLoaded(List<Campaign> list, int i) {
            if (list == null || list.size() <= 0) {
                if (MintegralTYAdapter.this.mLoadListener != null) {
                    MintegralTYAdapter.this.mLoadListener.onAdLoadError("", "Mintegral no ad return ");
                }
                MBNativeHandler mBNativeHandler = this.a;
                if (mBNativeHandler != null) {
                    mBNativeHandler.setAdListener(null);
                    this.a.release();
                    return;
                }
                MBBidNativeHandler mBBidNativeHandler = this.b;
                if (mBBidNativeHandler != null) {
                    mBBidNativeHandler.setAdListener(null);
                    this.b.bidRelease();
                    return;
                }
                return;
            }
            boolean z = false;
            ArrayList arrayList = new ArrayList();
            for (Campaign campaign : list) {
                if (campaign != null) {
                    MintegralTYNativeAd mintegralTYNativeAd = new MintegralTYNativeAd(this.c, this.d, this.e, campaign, !TextUtils.isEmpty(MintegralTYAdapter.this.a));
                    mintegralTYNativeAd.e = MintegralTYAdapter.this.c;
                    mintegralTYNativeAd.h = this.f;
                    arrayList.add(mintegralTYNativeAd);
                    z = true;
                }
            }
            if (!z) {
                if (MintegralTYAdapter.this.mLoadListener != null) {
                    MintegralTYAdapter.this.mLoadListener.onAdLoadError("", "Mintegral no ad return ");
                }
            } else if (MintegralTYAdapter.this.mLoadListener != null) {
                MintegralTYAdapter.this.mLoadListener.onAdCacheLoaded((CustomNativeAd[]) arrayList.toArray(new CustomNativeAd[arrayList.size()]));
            }
            MBNativeHandler mBNativeHandler2 = this.a;
            if (mBNativeHandler2 != null) {
                mBNativeHandler2.setAdListener(null);
                this.a.release();
                return;
            }
            MBBidNativeHandler mBBidNativeHandler2 = this.b;
            if (mBBidNativeHandler2 != null) {
                mBBidNativeHandler2.setAdListener(null);
                this.b.bidRelease();
            }
        }

        @Override
        public final void onAdLoadError(String str) {
            if (MintegralTYAdapter.this.mLoadListener != null) {
                MintegralTYAdapter.this.mLoadListener.onAdLoadError(str, str);
            }
            MBNativeHandler mBNativeHandler = this.a;
            if (mBNativeHandler != null) {
                mBNativeHandler.setAdListener(null);
                this.a.release();
                return;
            }
            MBBidNativeHandler mBBidNativeHandler = this.b;
            if (mBBidNativeHandler != null) {
                mBBidNativeHandler.setAdListener(null);
                this.b.bidRelease();
            }
        }
    }

    @Override
    public String getNetworkName() {
        return MintegralTYInitManager.getInstance().getNetworkName();
    }

    @Override
    public void loadCustomNetworkAd(final Context context, final Map<String, Object> map, Map<String, Object> map2) {
        try {
            String stringFromMap = TYInitMediation.getStringFromMap(map, "appid");
            String stringFromMap2 = TYInitMediation.getStringFromMap(map, "unitid");
            String stringFromMap3 = TYInitMediation.getStringFromMap(map, "appkey");
            final String stringFromMap4 = TYInitMediation.getStringFromMap(map, l.a.c);
            this.a = TYInitMediation.getStringFromMap(map, "payload");
            this.b = TYInitMediation.getStringFromMap(map, "unit_type");
            this.c = TYInitMediation.getStringFromMap(map, "video_muted");
            this.d = TYInitMediation.getStringFromMap(map, "video_autoplay");
            this.e = TYInitMediation.getStringFromMap(map, "close_button");
            if (!TextUtils.isEmpty(stringFromMap) && !TextUtils.isEmpty(stringFromMap2) && !TextUtils.isEmpty(stringFromMap3)) {
                final boolean z = map.containsKey("suport_video") && "1".equals(TYInitMediation.getStringFromMap(map, "suport_video"));
                this.f = TYInitMediation.getIntFromMap(map2, TYAdConst.KEY.AD_WIDTH);
                this.g = TYInitMediation.getIntFromMap(map2, TYAdConst.KEY.AD_HEIGHT);
                if (this.f == 0) {
                    this.f = Math.min(context.getResources().getDisplayMetrics().widthPixels, context.getResources().getDisplayMetrics().heightPixels);
                }
                if (this.g == 0) {
                    this.g = (this.f * 3) / 4;
                }
                this.h = stringFromMap2;
                MintegralTYInitManager.getInstance().initSDK(context, map, new MediationInitCallback() {
                    @Override
                    public final void onSuccess() {
                        MintegralTYAdapter mintegralTYAdapter = MintegralTYAdapter.this;
                        Context context2 = context;
                        Map map3 = map;
                        String str = stringFromMap4;
                        String str2 = mintegralTYAdapter.h;
                        boolean z2 = z;
                        int unused = MintegralTYAdapter.this.mRequestNum;
                        MintegralTYAdapter.a(mintegralTYAdapter, context2, map3, str, str2, z2);
                    }

                    @Override
                    public final void onFail(String str) {
                        if (MintegralTYAdapter.this.mLoadListener != null) {
                            MintegralTYAdapter.this.mLoadListener.onAdLoadError("", str);
                        }
                    }
                });
                return;
            }
            if (this.mLoadListener != null) {
                this.mLoadListener.onAdLoadError("", "mintegral appid ,unitid or sdkkey is empty.");
            }
        } catch (Exception e) {
            if (this.mLoadListener != null) {
                this.mLoadListener.onAdLoadError("", e.getMessage());
            }
        }
    }

    @Override
    public String getNetworkPlacementId() {
        return this.h;
    }

    @Override
    public String getNetworkSDKVersion() {
        return MintegralTYInitManager.getInstance().getNetworkVersion();
    }

    @Override
    public TYInitMediation getMediationInitManager() {
        return MintegralTYInitManager.getInstance();
    }

    @Override
    public void getBidRequestInfo(Context context, Map<String, Object> map, Map<String, Object> map2, TYBidRequestInfoListener tYBidRequestInfoListener) {
        this.h = TYInitMediation.getStringFromMap(map, "unitid");
        MintegralTYInitManager.getInstance().a(context, map, map2, 0, tYBidRequestInfoListener);
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:23:0x0061  */
    /* JADX WARN: Removed duplicated region for block: B:25:0x0064  */
    /* JADX WARN: Removed duplicated region for block: B:28:0x006b  */
    /* JADX WARN: Removed duplicated region for block: B:63:0x00d2  */
    /* JADX WARN: Removed duplicated region for block: B:65:0x00d5  */
    /* JADX WARN: Removed duplicated region for block: B:68:0x00de  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    static void a(MintegralTYAdapter mintegralTYAdapter, Context context, Map map, String str, String str2, boolean z) {
        boolean z2;
        boolean z3;
        MBBidNativeHandler mBBidNativeHandler;
        MBNativeHandler mBNativeHandler;
        byte b;
        byte b2;
        byte b3 = 0;
        if (map != null) {
            try {
                z3 = Boolean.parseBoolean(map.get(CustomNativeAd.IS_AUTO_PLAY_KEY).toString());
            } catch (Exception unused) {
                z2 = false;
            }
        } else {
            z3 = false;
        }
        z2 = z3;
        if (TextUtils.equals(mintegralTYAdapter.b, "1")) {
            MBNativeAdvancedHandler mBNativeAdvancedHandler = new MBNativeAdvancedHandler((Activity) context, str, str2);
            if (!TextUtils.isEmpty(mintegralTYAdapter.c)) {
                String str3 = mintegralTYAdapter.c;
                int iHashCode = str3.hashCode();
                if (iHashCode != 48) {
                    b2 = (iHashCode == 49 && str3.equals("1")) ? (byte) 1 : (byte) -1;
                    if (b2 != 0) {
                        mBNativeAdvancedHandler.setPlayMuteState(1);
                    } else if (b2 == 1) {
                        mBNativeAdvancedHandler.setPlayMuteState(2);
                    }
                } else {
                    if (str3.equals("0")) {
                        b2 = 0;
                    }
                    if (b2 != 0) {
                    }
                }
            }
            if (!TextUtils.isEmpty(mintegralTYAdapter.d)) {
                String str4 = mintegralTYAdapter.d;
                switch (str4.hashCode()) {
                    case 49:
                        b = !str4.equals("1") ? (byte) -1 : (byte) 0;
                        break;
                    case 50:
                        b = !str4.equals("2") ? (byte) -1 : (byte) 1;
                        break;
                    case 51:
                        b = !str4.equals("3") ? (byte) -1 : (byte) 2;
                        break;
                    default:
                        b = -1;
                        break;
                }
                if (b == 0) {
                    mBNativeAdvancedHandler.autoLoopPlay(1);
                } else if (b == 1) {
                    mBNativeAdvancedHandler.autoLoopPlay(2);
                } else if (b == 2) {
                    mBNativeAdvancedHandler.autoLoopPlay(3);
                }
            }
            if (!TextUtils.isEmpty(mintegralTYAdapter.e)) {
                String str5 = mintegralTYAdapter.e;
                int iHashCode2 = str5.hashCode();
                if (iHashCode2 != 48) {
                    b3 = (iHashCode2 == 49 && str5.equals("1")) ? (byte) 1 : (byte) -1;
                    if (b3 != 0) {
                        mBNativeAdvancedHandler.setCloseButtonState(MBMultiStateEnum.positive);
                    } else if (b3 == 1) {
                        mBNativeAdvancedHandler.setCloseButtonState(MBMultiStateEnum.negative);
                    }
                } else {
                    if (!str5.equals("0")) {
                    }
                    if (b3 != 0) {
                    }
                }
            }
            mBNativeAdvancedHandler.setNativeViewSize(mintegralTYAdapter.f, mintegralTYAdapter.g);
            mBNativeAdvancedHandler.setAdListener(mintegralTYAdapter.new 1(mBNativeAdvancedHandler, context));
            if (TextUtils.isEmpty(mintegralTYAdapter.a)) {
                MintegralTYInitManager.getInstance().setCustomInfo(8, map);
                mBNativeAdvancedHandler.load();
                return;
            } else {
                MintegralTYInitManager.getInstance().setCustomInfo(7, map);
                mBNativeAdvancedHandler.loadByToken(mintegralTYAdapter.a);
                return;
            }
        }
        Context applicationContext = context.getApplicationContext();
        Map<String, Object> nativeProperties = MBNativeHandler.getNativeProperties(str, str2);
        nativeProperties.put("ad_num", 1);
        nativeProperties.put(MBridgeConstans.PROPERTIES_LAYOUT_TYPE, 0);
        nativeProperties.put(MBridgeConstans.NATIVE_VIDEO_SUPPORT, Boolean.valueOf(z));
        if (TextUtils.isEmpty(mintegralTYAdapter.a)) {
            MintegralTYInitManager.getInstance().setCustomInfo(8, map);
            mBNativeHandler = new MBNativeHandler(nativeProperties, applicationContext);
            mBBidNativeHandler = null;
        } else {
            MintegralTYInitManager.getInstance().setCustomInfo(7, map);
            mBBidNativeHandler = new MBBidNativeHandler(nativeProperties, applicationContext);
            mBNativeHandler = null;
        }
        2 r13 = mintegralTYAdapter.new 2(mBNativeHandler, mBBidNativeHandler, applicationContext, str, str2, z2);
        if (mBNativeHandler != null) {
            mBNativeHandler.setAdListener(r13);
            mBNativeHandler.load();
        } else {
            mBBidNativeHandler.setAdListener(r13);
            mBBidNativeHandler.bidLoad(mintegralTYAdapter.a);
        }
    }
}
