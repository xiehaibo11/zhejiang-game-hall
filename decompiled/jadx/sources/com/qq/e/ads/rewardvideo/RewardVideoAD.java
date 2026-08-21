package com.qq.e.ads.rewardvideo;

import android.app.Activity;
import android.content.Context;
import com.qq.e.ads.LiteAbstractAD;
import com.qq.e.comm.adevent.ADEvent;
import com.qq.e.comm.adevent.ADListener;
import com.qq.e.comm.constants.LoadAdParams;
import com.qq.e.comm.listeners.NegativeFeedbackListener;
import com.qq.e.comm.pi.NFBI;
import com.qq.e.comm.pi.POFactory;
import com.qq.e.comm.pi.RVADI;
import com.qq.e.comm.util.AdErrorConvertor;
import java.util.HashMap;

/* JADX INFO: loaded from: classes3.dex */
public class RewardVideoAD extends LiteAbstractAD<RVADI> implements NFBI {
    public static final int REWARD_TYPE_PAGE = 1;
    public static final int REWARD_TYPE_VIDEO = 0;
    private final RewardVideoADListener g;
    private volatile boolean h;
    private LoadAdParams i;
    private ServerSideVerificationOptions j;
    private final boolean k;
    private final ADListenerAdapter l;

    public static class ADListenerAdapter implements ADListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private NegativeFeedbackListener f4668a;
        public RewardVideoADListener adListener;

        public ADListenerAdapter(RewardVideoADListener rewardVideoADListener) {
            this.adListener = rewardVideoADListener;
        }

        static void a(ADListenerAdapter aDListenerAdapter, NegativeFeedbackListener negativeFeedbackListener) {
            aDListenerAdapter.f4668a = negativeFeedbackListener;
        }

        @Override // com.qq.e.comm.adevent.ADListener
        public void onADEvent(ADEvent aDEvent) {
            int type = aDEvent.getType();
            if (type == 100) {
                this.adListener.onADLoad();
            }
            if (type == 201) {
                this.adListener.onVideoCached();
                return;
            }
            if (type == 206) {
                this.adListener.onVideoComplete();
                return;
            }
            if (type == 304) {
                NegativeFeedbackListener negativeFeedbackListener = this.f4668a;
                if (negativeFeedbackListener != null) {
                    negativeFeedbackListener.onComplainSuccess();
                    return;
                }
                return;
            }
            switch (type) {
                case 102:
                    this.adListener.onADShow();
                    break;
                case 103:
                    this.adListener.onADExpose();
                    break;
                case 104:
                    String str = (String) aDEvent.getParam(String.class);
                    if (str != null) {
                        HashMap map = new HashMap();
                        map.put("transId", str);
                        this.adListener.onReward(map);
                    }
                    break;
                case 105:
                    this.adListener.onADClick();
                    break;
                case 106:
                    this.adListener.onADClose();
                    break;
                case 107:
                    Integer num = (Integer) aDEvent.getParam(Integer.class);
                    if (num != null) {
                        this.adListener.onError(AdErrorConvertor.formatErrorCode(num.intValue()));
                    }
                    break;
            }
        }
    }

    public RewardVideoAD(Context context, String str, RewardVideoADListener rewardVideoADListener) {
        this(context, str, rewardVideoADListener, true);
    }

    public RewardVideoAD(Context context, String str, RewardVideoADListener rewardVideoADListener, boolean z) {
        this(rewardVideoADListener, z);
        a(context, str);
    }

    public RewardVideoAD(Context context, String str, RewardVideoADListener rewardVideoADListener, boolean z, String str2) {
        this(rewardVideoADListener, z);
        a(context, str, str2);
    }

    private RewardVideoAD(RewardVideoADListener rewardVideoADListener, boolean z) {
        this.i = null;
        this.k = z;
        this.g = rewardVideoADListener;
        this.l = new ADListenerAdapter(rewardVideoADListener);
    }

    @Override // com.qq.e.ads.AbstractAD
    protected Object a(Context context, POFactory pOFactory, String str, String str2, String str3) {
        return pOFactory.getRewardVideoADDelegate(context, str, str2, str3, this.l);
    }

    @Override // com.qq.e.ads.AbstractAD
    protected void b(int i) {
        RewardVideoADListener rewardVideoADListener = this.g;
        if (rewardVideoADListener != null) {
            rewardVideoADListener.onError(AdErrorConvertor.formatErrorCode(i));
        }
    }

    public String getAdNetWorkName() {
        T t = this.f4642a;
        if (t != 0) {
            return ((RVADI) t).getAdNetWorkName();
        }
        a("getAdNetWorkName");
        return null;
    }

    public int getRewardAdType() {
        T t = this.f4642a;
        if (t != 0) {
            return ((RVADI) t).getRewardAdType();
        }
        a("getRewardAdType");
        return 0;
    }

    public int getVideoDuration() {
        T t = this.f4642a;
        if (t != 0) {
            return ((RVADI) t).getVideoDuration();
        }
        a("getVideoDuration");
        return 0;
    }

    public boolean hasShown() {
        T t = this.f4642a;
        if (t != 0) {
            return ((RVADI) t).hasShown();
        }
        a("hasShown");
        return false;
    }

    public void loadAD() {
        if (a()) {
            if (!b()) {
                this.h = true;
                return;
            }
            T t = this.f4642a;
            if (t != 0) {
                ((RVADI) t).loadAD();
            } else {
                a("loadAD");
            }
        }
    }

    public void setLoadAdParams(LoadAdParams loadAdParams) {
        this.i = loadAdParams;
        T t = this.f4642a;
        if (t != 0) {
            ((RVADI) t).setLoadAdParams(loadAdParams);
        }
    }

    @Override // com.qq.e.comm.pi.NFBI
    public void setNegativeFeedbackListener(NegativeFeedbackListener negativeFeedbackListener) {
        ADListenerAdapter.a(this.l, negativeFeedbackListener);
    }

    public void setServerSideVerificationOptions(ServerSideVerificationOptions serverSideVerificationOptions) {
        this.j = serverSideVerificationOptions;
        T t = this.f4642a;
        if (t != 0) {
            ((RVADI) t).setServerSideVerificationOptions(serverSideVerificationOptions);
        }
    }

    public void showAD() {
        T t = this.f4642a;
        if (t != 0) {
            ((RVADI) t).showAD();
        } else {
            a("showAD");
        }
    }

    public void showAD(Activity activity) {
        T t = this.f4642a;
        if (t != 0) {
            ((RVADI) t).showAD(activity);
        } else {
            a("showAD");
        }
    }

    @Override // com.qq.e.ads.AbstractAD
    protected void a(Object obj) {
        RVADI rvadi = (RVADI) obj;
        rvadi.setVolumeOn(this.k);
        rvadi.setLoadAdParams(this.i);
        rvadi.setServerSideVerificationOptions(this.j);
        if (this.h) {
            loadAD();
        }
    }
}
