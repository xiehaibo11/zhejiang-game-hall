package com.tkay.network.toutiao;

import android.content.Context;
import android.graphics.Bitmap;
import android.text.TextUtils;
import android.util.Log;
import com.bianfeng.ymnsdk.sysfunc.SysfuncInterface;
import com.bykv.vk.openvk.TTClientBidding;
import com.bykv.vk.openvk.TTDrawVfObject;
import com.bykv.vk.openvk.TTNtExpressObject;
import com.bykv.vk.openvk.TTNtObject;
import com.bykv.vk.openvk.TTVfConstant;
import com.bykv.vk.openvk.TTVfManager;
import com.bykv.vk.openvk.TTVfNative;
import com.bykv.vk.openvk.TTVfObject;
import com.bykv.vk.openvk.TTVfSdk;
import com.mbridge.msdk.MBridgeConstans;
import com.tkay.core.api.MediationInitCallback;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.api.TYBiddingListener;
import com.tkay.nativead.unitgroup.api.CustomNativeAd;
import com.tkay.nativead.unitgroup.api.CustomNativeAdapter;
import com.tkay.network.toutiao.TTTYNativeExpressHandler;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class TTTYAdapter extends CustomNativeAdapter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    String f7707a;
    String b;
    String c;
    private final String g = getClass().getSimpleName();
    int d = 0;
    String e = "";
    boolean f = false;

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void destory() {
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void loadCustomNetworkAd(final Context context, final Map<String, Object> map, final Map<String, Object> map2) {
        if (!a(map)) {
            notifyATLoadFail("", "app_id or slot_id is empty!");
        } else {
            TTTYInitManager.getInstance().initSDK(context, map, new MediationInitCallback() { // from class: com.tkay.network.toutiao.TTTYAdapter.1
                @Override // com.tkay.core.api.MediationInitCallback
                public final void onSuccess() {
                    TTTYAdapter tTTYAdapter = TTTYAdapter.this;
                    TTTYAdapter.a(tTTYAdapter, context, map, map2, tTTYAdapter.f ? 1 : TTTYAdapter.this.mRequestNum);
                }

                @Override // com.tkay.core.api.MediationInitCallback
                public final void onFail(String str) {
                    TTTYAdapter.this.notifyATLoadFail("", str);
                }
            });
        }
    }

    private void a(Context context, Map<String, Object> map, Map<String, Object> map2, int i) {
        Context applicationContext = context.getApplicationContext();
        if (TextUtils.isEmpty(this.c)) {
            notifyATLoadFail("", "nativeType is empty");
        } else {
            runOnNetworkRequestThread(new AnonymousClass2(applicationContext, map2, map, i));
        }
    }

    /* JADX INFO: renamed from: com.tkay.network.toutiao.TTTYAdapter$2, reason: invalid class name */
    final class AnonymousClass2 implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ Context f7709a;
        final /* synthetic */ Map b;
        final /* synthetic */ Map c;
        final /* synthetic */ int d;

        AnonymousClass2(Context context, Map map, Map map2, int i) {
            this.f7709a = context;
            this.b = map;
            this.c = map2;
            this.d = i;
        }

        /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
        @Override // java.lang.Runnable
        public final void run() {
            final boolean z;
            final int i;
            final Bitmap bitmap;
            Object obj;
            int i2;
            int i3;
            TTVfManager vfManager = TTVfSdk.getVfManager();
            int i4 = this.f7709a.getResources().getDisplayMetrics().widthPixels;
            int i5 = this.f7709a.getResources().getDisplayMetrics().heightPixels;
            Map map = this.b;
            if (map != null) {
                Object obj2 = map.containsKey(TYAdConst.KEY.AD_WIDTH) ? this.b.get(TYAdConst.KEY.AD_WIDTH) : null;
                if (this.b.containsKey(TTTYConst.NATIVE_AD_IMAGE_HEIGHT)) {
                    obj = this.b.get(TTTYConst.NATIVE_AD_IMAGE_HEIGHT);
                } else {
                    obj = this.b.containsKey(TYAdConst.KEY.AD_HEIGHT) ? this.b.get(TYAdConst.KEY.AD_HEIGHT) : null;
                }
                Object obj3 = this.b.get(TTTYConst.NATIVE_AD_INTERRUPT_VIDEOPLAY);
                Object obj4 = this.b.get(TTTYConst.NATIVE_AD_VIDEOPLAY_BTN_BITMAP);
                Object obj5 = this.b.get(TTTYConst.NATIVE_AD_VIDEOPLAY_BTN_SIZE);
                if (obj2 != null && obj != null) {
                    try {
                        i4 = (int) Double.parseDouble(obj2.toString());
                    } catch (Throwable th) {
                        th.printStackTrace();
                    }
                    try {
                        i5 = (int) Double.parseDouble(obj.toString());
                    } catch (Throwable th2) {
                        th2.printStackTrace();
                    }
                } else {
                    if (TTTYAdapter.this.d == 1) {
                        i2 = 690;
                        i3 = 388;
                    } else if (TTTYAdapter.this.d == 2) {
                        i2 = 228;
                        i3 = 150;
                    } else if (TTTYAdapter.this.d == 3) {
                        i2 = TTVfConstant.EXT_PLUGIN_UNINSTALL;
                        i3 = 720;
                    } else if (TTTYAdapter.this.d == 4) {
                        i2 = SysfuncInterface.SYSFUNC_GET_PACKAGE_ID_SUCCESS;
                        i3 = 628;
                    } else if (TTTYAdapter.this.d == 5) {
                        i4 = 640;
                        i5 = 640;
                    }
                    i5 = i3;
                    i4 = i2;
                }
                z = obj3 instanceof Boolean ? Boolean.parseBoolean(obj3.toString()) : true;
                bitmap = obj4 instanceof Bitmap ? (Bitmap) obj4 : null;
                i = obj5 instanceof Integer ? Integer.parseInt(obj5.toString()) : 0;
            } else {
                z = true;
                i = 0;
                bitmap = null;
            }
            TTVfNative tTVfNativeCreateVfNative = vfManager.createVfNative(this.f7709a);
            TTTYCustomAdSlotBuilder tTTYCustomAdSlotBuilder = new TTTYCustomAdSlotBuilder(TTTYAdapter.this.f7707a, this.c, this.b);
            tTTYCustomAdSlotBuilder.setAdCount(Math.min(this.d, 3));
            tTTYCustomAdSlotBuilder.setSupportDeepLink(true);
            if (TextUtils.equals("0", TTTYAdapter.this.c) && TextUtils.equals("0", TTTYAdapter.this.b)) {
                Log.i(TTTYAdapter.this.g, "load Native Express Ad");
                tTTYCustomAdSlotBuilder.setExpressViewAcceptedSize(TTTYAdapter.a(this.f7709a, i4), TTTYAdapter.a(this.f7709a, i5));
                tTVfNativeCreateVfNative.loadNtExpressVn(tTTYCustomAdSlotBuilder.build(), new TTVfNative.NtExpressVfListener() { // from class: com.tkay.network.toutiao.TTTYAdapter.2.1
                    @Override // com.bykv.vk.openvk.TTVfNative.NtExpressVfListener, com.bykv.vk.openvk.common.CommonListener
                    public final void onError(int i6, String str) {
                        TTTYAdapter.this.notifyATLoadFail(String.valueOf(i6), str);
                    }

                    @Override // com.bykv.vk.openvk.TTVfNative.NtExpressVfListener
                    public final void onNtExpressVnLoad(List<TTNtExpressObject> list) {
                        TTTYAdapter.a(TTTYAdapter.this, AnonymousClass2.this.f7709a, (List) list, z, false);
                    }
                });
                return;
            }
            if (TextUtils.equals("1", TTTYAdapter.this.c) && TextUtils.equals("0", TTTYAdapter.this.b)) {
                Log.i(TTTYAdapter.this.g, "load Native Express Video");
                tTTYCustomAdSlotBuilder.setExpressViewAcceptedSize(TTTYAdapter.a(this.f7709a, i4), TTTYAdapter.a(this.f7709a, i5));
                tTVfNativeCreateVfNative.loadExpressDrawVf(tTTYCustomAdSlotBuilder.build(), new TTVfNative.NtExpressVfListener() { // from class: com.tkay.network.toutiao.TTTYAdapter.2.2
                    @Override // com.bykv.vk.openvk.TTVfNative.NtExpressVfListener, com.bykv.vk.openvk.common.CommonListener
                    public final void onError(int i6, String str) {
                        if (TTTYAdapter.this.mLoadListener != null) {
                            TTTYAdapter.this.mLoadListener.onAdLoadError(String.valueOf(i6), str);
                        }
                    }

                    @Override // com.bykv.vk.openvk.TTVfNative.NtExpressVfListener
                    public final void onNtExpressVnLoad(List<TTNtExpressObject> list) {
                        TTTYAdapter.a(TTTYAdapter.this, AnonymousClass2.this.f7709a, (List) list, z, true);
                    }
                });
                return;
            }
            if (i4 > 0 && i5 > 0) {
                tTTYCustomAdSlotBuilder.setImageAcceptedSize(i4, i5);
            } else {
                tTTYCustomAdSlotBuilder.setImageAcceptedSize(640, 320);
            }
            String str = TTTYAdapter.this.c;
            byte b = -1;
            switch (str.hashCode()) {
                case 48:
                    if (str.equals("0")) {
                        b = 0;
                    }
                    break;
                case 49:
                    if (str.equals("1")) {
                        b = 1;
                    }
                    break;
                case 50:
                    if (str.equals("2")) {
                        b = 2;
                    }
                    break;
                case 51:
                    if (str.equals("3")) {
                        b = 3;
                    }
                    break;
                case 52:
                    if (str.equals("4")) {
                        b = 4;
                    }
                    break;
            }
            if (b == 0) {
                tTVfNativeCreateVfNative.loadVfList(tTTYCustomAdSlotBuilder.build(), new TTVfNative.VfListListener() { // from class: com.tkay.network.toutiao.TTTYAdapter.2.3
                    @Override // com.bykv.vk.openvk.TTVfNative.VfListListener, com.bykv.vk.openvk.common.CommonListener
                    public final void onError(int i6, String str2) {
                        TTTYAdapter.this.notifyATLoadFail(String.valueOf(i6), str2);
                    }

                    @Override // com.bykv.vk.openvk.TTVfNative.VfListListener
                    public final void onVfListLoad(List<TTVfObject> list) {
                        ArrayList arrayList = new ArrayList();
                        Iterator<TTVfObject> it = list.iterator();
                        while (it.hasNext()) {
                            arrayList.add(new TTTYNativeAd(AnonymousClass2.this.f7709a, TTTYAdapter.this.f7707a, it.next(), z, bitmap, i));
                        }
                        TTTYAdapter.a(TTTYAdapter.this, list, (CustomNativeAd[]) arrayList.toArray(new CustomNativeAd[arrayList.size()]));
                    }
                });
                return;
            }
            if (b == 1) {
                tTVfNativeCreateVfNative.loadDrawVfList(tTTYCustomAdSlotBuilder.build(), new TTVfNative.DrawVfListListener() { // from class: com.tkay.network.toutiao.TTTYAdapter.2.4
                    @Override // com.bykv.vk.openvk.TTVfNative.DrawVfListListener, com.bykv.vk.openvk.common.CommonListener
                    public final void onError(int i6, String str2) {
                        TTTYAdapter.this.notifyATLoadFail(String.valueOf(i6), str2);
                    }

                    @Override // com.bykv.vk.openvk.TTVfNative.DrawVfListListener
                    public final void onDrawFeedAdLoad(List<TTDrawVfObject> list) {
                        ArrayList arrayList = new ArrayList();
                        Iterator<TTDrawVfObject> it = list.iterator();
                        while (it.hasNext()) {
                            arrayList.add(new TTTYNativeAd(AnonymousClass2.this.f7709a, TTTYAdapter.this.f7707a, it.next(), z, bitmap, i));
                        }
                        TTTYAdapter.a(TTTYAdapter.this, list, (CustomNativeAd[]) arrayList.toArray(new CustomNativeAd[arrayList.size()]));
                    }
                });
                return;
            }
            if (b == 2) {
                tTTYCustomAdSlotBuilder.setNativeAdType(1);
                tTVfNativeCreateVfNative.loadNativeVn(tTTYCustomAdSlotBuilder.build(), new TTVfNative.NtVfListener() { // from class: com.tkay.network.toutiao.TTTYAdapter.2.5
                    @Override // com.bykv.vk.openvk.TTVfNative.NtVfListener, com.bykv.vk.openvk.common.CommonListener
                    public final void onError(int i6, String str2) {
                        TTTYAdapter.this.notifyATLoadFail(String.valueOf(i6), str2);
                    }

                    @Override // com.bykv.vk.openvk.TTVfNative.NtVfListener
                    public final void onDrawVfLoad(List<TTNtObject> list) {
                        ArrayList arrayList = new ArrayList();
                        Iterator<TTNtObject> it = list.iterator();
                        while (it.hasNext()) {
                            arrayList.add(new TTTYNativeAd(AnonymousClass2.this.f7709a, TTTYAdapter.this.f7707a, it.next(), z, bitmap, i));
                        }
                        TTTYAdapter.a(TTTYAdapter.this, list, (CustomNativeAd[]) arrayList.toArray(new CustomNativeAd[arrayList.size()]));
                    }
                });
            } else if (b == 3) {
                tTTYCustomAdSlotBuilder.setNativeAdType(2);
                tTVfNativeCreateVfNative.loadNativeVn(tTTYCustomAdSlotBuilder.build(), new TTVfNative.NtVfListener() { // from class: com.tkay.network.toutiao.TTTYAdapter.2.6
                    @Override // com.bykv.vk.openvk.TTVfNative.NtVfListener, com.bykv.vk.openvk.common.CommonListener
                    public final void onError(int i6, String str2) {
                        TTTYAdapter.this.notifyATLoadFail(String.valueOf(i6), str2);
                    }

                    @Override // com.bykv.vk.openvk.TTVfNative.NtVfListener
                    public final void onDrawVfLoad(List<TTNtObject> list) {
                        ArrayList arrayList = new ArrayList();
                        Iterator<TTNtObject> it = list.iterator();
                        while (it.hasNext()) {
                            arrayList.add(new TTTYNativeAd(AnonymousClass2.this.f7709a, TTTYAdapter.this.f7707a, it.next(), z, bitmap, i));
                        }
                        TTTYAdapter.a(TTTYAdapter.this, list, (CustomNativeAd[]) arrayList.toArray(new CustomNativeAd[arrayList.size()]));
                    }
                });
            } else if (b == 4) {
                tTVfNativeCreateVfNative.loadStream(tTTYCustomAdSlotBuilder.build(), new TTVfNative.VfListListener() { // from class: com.tkay.network.toutiao.TTTYAdapter.2.7
                    @Override // com.bykv.vk.openvk.TTVfNative.VfListListener, com.bykv.vk.openvk.common.CommonListener
                    public final void onError(int i6, String str2) {
                        TTTYAdapter.this.notifyATLoadFail(String.valueOf(i6), str2);
                    }

                    @Override // com.bykv.vk.openvk.TTVfNative.VfListListener
                    public final void onVfListLoad(List<TTVfObject> list) {
                        if (list == null || list.isEmpty()) {
                            TTTYAdapter.this.notifyATLoadFail("", "Ad list is empty.");
                            return;
                        }
                        ArrayList arrayList = new ArrayList();
                        Iterator<TTVfObject> it = list.iterator();
                        while (it.hasNext()) {
                            arrayList.add(new TTTYNativePatchAd(AnonymousClass2.this.f7709a, TTTYAdapter.this.f7707a, it.next(), z, bitmap, i));
                        }
                        TTTYAdapter.a(TTTYAdapter.this, list, (CustomNativeAd[]) arrayList.toArray(new CustomNativeAd[arrayList.size()]));
                    }
                });
            } else {
                TTTYAdapter.this.notifyATLoadFail("", "The Native type is not exit.");
            }
        }
    }

    private static int b(Context context, float f) {
        float f2 = context.getResources().getDisplayMetrics().density;
        if (f2 <= 0.0f) {
            f2 = 1.0f;
        }
        return (int) ((f / f2) + 0.5f);
    }

    /* JADX INFO: renamed from: com.tkay.network.toutiao.TTTYAdapter$3, reason: invalid class name */
    final class AnonymousClass3 implements TTTYNativeExpressHandler.RenderCallback {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ Context f7717a;
        final /* synthetic */ boolean b;
        final /* synthetic */ boolean c;

        AnonymousClass3(Context context, boolean z, boolean z2) {
            this.f7717a = context;
            this.b = z;
            this.c = z2;
        }

        @Override // com.tkay.network.toutiao.TTTYNativeExpressHandler.RenderCallback
        public final void onRenderSuccess(List<TTNtExpressObject> list) {
            ArrayList arrayList = new ArrayList();
            Iterator<TTNtExpressObject> it = list.iterator();
            while (it.hasNext()) {
                arrayList.add(new TTTYNativeExpressAd(this.f7717a, TTTYAdapter.this.f7707a, it.next(), this.b, this.c));
            }
            TTTYAdapter.a(TTTYAdapter.this, list, (CustomNativeAd[]) arrayList.toArray(new CustomNativeAd[arrayList.size()]));
        }

        @Override // com.tkay.network.toutiao.TTTYNativeExpressHandler.RenderCallback
        public final void onRenderFail(String str, int i) {
            TTTYAdapter.this.notifyATLoadFail(String.valueOf(i), str);
        }
    }

    private void a(Context context, List<TTNtExpressObject> list, boolean z, boolean z2) {
        new TTTYNativeExpressHandler(list).startRender(new AnonymousClass3(context, z, z2));
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkName() {
        return TTTYInitManager.getInstance().getNetworkName();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkPlacementId() {
        return this.f7707a;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkSDKVersion() {
        return TTTYInitManager.getInstance().getNetworkVersion();
    }

    private void a(List<? extends TTClientBidding> list, CustomNativeAd... customNativeAdArr) {
        if (list.size() == 0 || customNativeAdArr.length == 0) {
            notifyATLoadFail("", "Ad list is empty.");
            return;
        }
        TTClientBidding tTClientBidding = list.get(0);
        HashMap map = new HashMap(3);
        if (tTClientBidding instanceof TTVfObject) {
            try {
                Map<String, Object> mediaExtraInfo = ((TTVfObject) tTClientBidding).getMediaExtraInfo();
                if (mediaExtraInfo != null) {
                    map.putAll(mediaExtraInfo);
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
        if (tTClientBidding instanceof TTNtExpressObject) {
            try {
                Map<String, Object> mediaExtraInfo2 = ((TTNtExpressObject) tTClientBidding).getMediaExtraInfo();
                if (mediaExtraInfo2 != null) {
                    map.putAll(mediaExtraInfo2);
                }
            } catch (Throwable th2) {
                th2.printStackTrace();
            }
        }
        if (this.f) {
            if (this.mBiddingListener != null) {
                TTTYInitManager.getInstance().a(map, customNativeAdArr[0], list.get(0), this.mBiddingListener);
                this.mBiddingListener = null;
                return;
            }
            return;
        }
        if (this.mLoadListener != null) {
            this.mLoadListener.onAdCacheLoaded(customNativeAdArr);
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public boolean startBiddingRequest(Context context, Map<String, Object> map, Map<String, Object> map2, TYBiddingListener tYBiddingListener) {
        this.f = true;
        loadCustomNetworkAd(context, map, map2);
        return true;
    }

    private boolean a(Map<String, Object> map) {
        String str = (String) map.get("app_id");
        this.f7707a = (String) map.get("slot_id");
        if (TextUtils.isEmpty(str) || TextUtils.isEmpty(this.f7707a)) {
            return false;
        }
        this.b = "1";
        if (map.containsKey(MBridgeConstans.PROPERTIES_LAYOUT_TYPE)) {
            this.b = (String) map.get(MBridgeConstans.PROPERTIES_LAYOUT_TYPE);
        } else {
            this.b = "0";
        }
        if (map.containsKey("is_video")) {
            this.c = map.get("is_video").toString();
        }
        try {
            if (map.containsKey("media_size")) {
                this.d = Integer.parseInt(map.get("media_size").toString());
            }
        } catch (Exception unused) {
        }
        if (!map.containsKey("payload")) {
            return true;
        }
        this.e = map.get("payload").toString();
        return true;
    }

    static /* synthetic */ void a(TTTYAdapter tTTYAdapter, Context context, Map map, Map map2, int i) {
        Context applicationContext = context.getApplicationContext();
        if (TextUtils.isEmpty(tTTYAdapter.c)) {
            tTTYAdapter.notifyATLoadFail("", "nativeType is empty");
        } else {
            tTTYAdapter.runOnNetworkRequestThread(tTTYAdapter.new AnonymousClass2(applicationContext, map2, map, i));
        }
    }

    static /* synthetic */ int a(Context context, float f) {
        float f2 = context.getResources().getDisplayMetrics().density;
        if (f2 <= 0.0f) {
            f2 = 1.0f;
        }
        return (int) ((f / f2) + 0.5f);
    }

    static /* synthetic */ void a(TTTYAdapter tTTYAdapter, Context context, List list, boolean z, boolean z2) {
        new TTTYNativeExpressHandler(list).startRender(tTTYAdapter.new AnonymousClass3(context, z, z2));
    }

    static /* synthetic */ void a(TTTYAdapter tTTYAdapter, List list, CustomNativeAd[] customNativeAdArr) {
        if (list.size() == 0 || customNativeAdArr.length == 0) {
            tTTYAdapter.notifyATLoadFail("", "Ad list is empty.");
            return;
        }
        Object obj = list.get(0);
        HashMap map = new HashMap(3);
        if (obj instanceof TTVfObject) {
            try {
                Map<String, Object> mediaExtraInfo = ((TTVfObject) obj).getMediaExtraInfo();
                if (mediaExtraInfo != null) {
                    map.putAll(mediaExtraInfo);
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
        if (obj instanceof TTNtExpressObject) {
            try {
                Map<String, Object> mediaExtraInfo2 = ((TTNtExpressObject) obj).getMediaExtraInfo();
                if (mediaExtraInfo2 != null) {
                    map.putAll(mediaExtraInfo2);
                }
            } catch (Throwable th2) {
                th2.printStackTrace();
            }
        }
        if (tTTYAdapter.f) {
            if (tTTYAdapter.mBiddingListener != null) {
                TTTYInitManager.getInstance().a(map, customNativeAdArr[0], (TTClientBidding) list.get(0), tTTYAdapter.mBiddingListener);
                tTTYAdapter.mBiddingListener = null;
                return;
            }
            return;
        }
        if (tTTYAdapter.mLoadListener != null) {
            tTTYAdapter.mLoadListener.onAdCacheLoaded(customNativeAdArr);
        }
    }
}
