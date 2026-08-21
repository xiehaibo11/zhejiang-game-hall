package com.tkay.network.mintegral;

import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.out.Campaign;
import com.mbridge.msdk.out.Frame;
import com.mbridge.msdk.out.MBBidNativeHandler;
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

/* JADX INFO: loaded from: classes3.dex */
public class MintegralTYAdapter extends CustomNativeAdapter {
    private static final String i = MintegralTYAdapter.class.getSimpleName();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    String f7616a;
    String b;
    String c;
    String d;
    String e;
    int f;
    int g;
    String h;

    @Override // com.tkay.core.api.TYBaseAdAdapter
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
        To view partially-correct add '--show-bad-code' argument
    */
    private void a(android.content.Context r17, java.util.Map<java.lang.String, java.lang.Object> r18, java.lang.String r19, java.lang.String r20, boolean r21) {
        /*
            Method dump skipped, instruction units count: 394
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.network.mintegral.MintegralTYAdapter.a(android.content.Context, java.util.Map, java.lang.String, java.lang.String, boolean):void");
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
        To view partially-correct add '--show-bad-code' argument
    */
    private void a(android.content.Context r10, java.lang.String r11, java.lang.String r12, java.util.Map<java.lang.String, java.lang.Object> r13) {
        /*
            Method dump skipped, instruction units count: 246
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.network.mintegral.MintegralTYAdapter.a(android.content.Context, java.lang.String, java.lang.String, java.util.Map):void");
    }

    /* JADX INFO: renamed from: com.tkay.network.mintegral.MintegralTYAdapter$1, reason: invalid class name */
    final class AnonymousClass1 implements NativeAdvancedAdListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ MBNativeAdvancedHandler f7617a;
        final /* synthetic */ Context b;

        @Override // com.mbridge.msdk.out.NativeAdvancedAdListener
        public final void closeFullScreen(MBridgeIds mBridgeIds) {
        }

        @Override // com.mbridge.msdk.out.NativeAdvancedAdListener
        public final void onClick(MBridgeIds mBridgeIds) {
        }

        @Override // com.mbridge.msdk.out.NativeAdvancedAdListener
        public final void onClose(MBridgeIds mBridgeIds) {
        }

        @Override // com.mbridge.msdk.out.NativeAdvancedAdListener
        public final void onLeaveApp(MBridgeIds mBridgeIds) {
        }

        @Override // com.mbridge.msdk.out.NativeAdvancedAdListener
        public final void onLogImpression(MBridgeIds mBridgeIds) {
        }

        @Override // com.mbridge.msdk.out.NativeAdvancedAdListener
        public final void showFullScreen(MBridgeIds mBridgeIds) {
        }

        AnonymousClass1(MBNativeAdvancedHandler mBNativeAdvancedHandler, Context context) {
            this.f7617a = mBNativeAdvancedHandler;
            this.b = context;
        }

        @Override // com.mbridge.msdk.out.NativeAdvancedAdListener
        public final void onLoadFailed(MBridgeIds mBridgeIds, String str) {
            if (MintegralTYAdapter.this.mLoadListener != null) {
                MintegralTYAdapter.this.mLoadListener.onAdLoadError(str, str);
            }
            this.f7617a.setAdListener(null);
        }

        @Override // com.mbridge.msdk.out.NativeAdvancedAdListener
        public final void onLoadSuccessed(MBridgeIds mBridgeIds) {
            MintegralTYExpressNativeAd mintegralTYExpressNativeAd = new MintegralTYExpressNativeAd(this.b, this.f7617a, false);
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
        if (TextUtils.isEmpty(this.f7616a)) {
            MintegralTYInitManager.getInstance().setCustomInfo(8, map);
            mBNativeHandler = new MBNativeHandler(nativeProperties, applicationContext);
            mBBidNativeHandler = null;
        } else {
            MintegralTYInitManager.getInstance().setCustomInfo(7, map);
            mBBidNativeHandler = new MBBidNativeHandler(nativeProperties, applicationContext);
            mBNativeHandler = null;
        }
        AnonymousClass2 anonymousClass2 = new AnonymousClass2(mBNativeHandler, mBBidNativeHandler, applicationContext, str, str2, z2);
        if (mBNativeHandler != null) {
            mBNativeHandler.setAdListener(anonymousClass2);
            mBNativeHandler.load();
        } else {
            mBBidNativeHandler.setAdListener(anonymousClass2);
            mBBidNativeHandler.bidLoad(this.f7616a);
        }
    }

    /* JADX INFO: renamed from: com.tkay.network.mintegral.MintegralTYAdapter$2, reason: invalid class name */
    final class AnonymousClass2 implements NativeListener.NativeAdListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ MBNativeHandler f7618a;
        final /* synthetic */ MBBidNativeHandler b;
        final /* synthetic */ Context c;
        final /* synthetic */ String d;
        final /* synthetic */ String e;
        final /* synthetic */ boolean f;

        @Override // com.mbridge.msdk.out.NativeListener.NativeAdListener
        public final void onAdClick(Campaign campaign) {
        }

        @Override // com.mbridge.msdk.out.NativeListener.NativeAdListener
        public final void onAdFramesLoaded(List<Frame> list) {
        }

        @Override // com.mbridge.msdk.out.NativeListener.NativeAdListener
        public final void onLoggingImpression(int i) {
        }

        AnonymousClass2(MBNativeHandler mBNativeHandler, MBBidNativeHandler mBBidNativeHandler, Context context, String str, String str2, boolean z) {
            this.f7618a = mBNativeHandler;
            this.b = mBBidNativeHandler;
            this.c = context;
            this.d = str;
            this.e = str2;
            this.f = z;
        }

        @Override // com.mbridge.msdk.out.NativeListener.NativeAdListener
        public final void onAdLoaded(List<Campaign> list, int i) {
            if (list == null || list.size() <= 0) {
                if (MintegralTYAdapter.this.mLoadListener != null) {
                    MintegralTYAdapter.this.mLoadListener.onAdLoadError("", "Mintegral no ad return ");
                }
                MBNativeHandler mBNativeHandler = this.f7618a;
                if (mBNativeHandler != null) {
                    mBNativeHandler.setAdListener(null);
                    this.f7618a.release();
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
                    MintegralTYNativeAd mintegralTYNativeAd = new MintegralTYNativeAd(this.c, this.d, this.e, campaign, !TextUtils.isEmpty(MintegralTYAdapter.this.f7616a));
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
            MBNativeHandler mBNativeHandler2 = this.f7618a;
            if (mBNativeHandler2 != null) {
                mBNativeHandler2.setAdListener(null);
                this.f7618a.release();
                return;
            }
            MBBidNativeHandler mBBidNativeHandler2 = this.b;
            if (mBBidNativeHandler2 != null) {
                mBBidNativeHandler2.setAdListener(null);
                this.b.bidRelease();
            }
        }

        @Override // com.mbridge.msdk.out.NativeListener.NativeAdListener
        public final void onAdLoadError(String str) {
            if (MintegralTYAdapter.this.mLoadListener != null) {
                MintegralTYAdapter.this.mLoadListener.onAdLoadError(str, str);
            }
            MBNativeHandler mBNativeHandler = this.f7618a;
            if (mBNativeHandler != null) {
                mBNativeHandler.setAdListener(null);
                this.f7618a.release();
                return;
            }
            MBBidNativeHandler mBBidNativeHandler = this.b;
            if (mBBidNativeHandler != null) {
                mBBidNativeHandler.setAdListener(null);
                this.b.bidRelease();
            }
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkName() {
        return MintegralTYInitManager.getInstance().getNetworkName();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void loadCustomNetworkAd(final Context context, final Map<String, Object> map, Map<String, Object> map2) {
        try {
            String stringFromMap = TYInitMediation.getStringFromMap(map, "appid");
            String stringFromMap2 = TYInitMediation.getStringFromMap(map, "unitid");
            String stringFromMap3 = TYInitMediation.getStringFromMap(map, "appkey");
            final String stringFromMap4 = TYInitMediation.getStringFromMap(map, l.a.c);
            this.f7616a = TYInitMediation.getStringFromMap(map, "payload");
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
                MintegralTYInitManager.getInstance().initSDK(context, map, new MediationInitCallback() { // from class: com.tkay.network.mintegral.MintegralTYAdapter.3
                    @Override // com.tkay.core.api.MediationInitCallback
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

                    @Override // com.tkay.core.api.MediationInitCallback
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

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkPlacementId() {
        return this.h;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkSDKVersion() {
        return MintegralTYInitManager.getInstance().getNetworkVersion();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public TYInitMediation getMediationInitManager() {
        return MintegralTYInitManager.getInstance();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
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
        To view partially-correct add '--show-bad-code' argument
    */
    static /* synthetic */ void a(com.tkay.network.mintegral.MintegralTYAdapter r16, android.content.Context r17, java.util.Map r18, java.lang.String r19, java.lang.String r20, boolean r21) {
        /*
            Method dump skipped, instruction units count: 394
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.network.mintegral.MintegralTYAdapter.a(com.tkay.network.mintegral.MintegralTYAdapter, android.content.Context, java.util.Map, java.lang.String, java.lang.String, boolean):void");
    }
}
