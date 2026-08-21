package com.kwad.sdk.core.response.model;

public class AdMatrixInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
    private static final long serialVersionUID = -1399297421861223421L;
    public com.kwad.sdk.core.response.model.AdMatrixInfo.AdDataV2 adDataV2;
    public com.kwad.sdk.core.response.model.AdMatrixInfo.Styles styles;
    public java.util.List<com.kwad.sdk.core.response.model.AdMatrixInfo.MatrixTag> tag;

    public static class ActionBarInfoNew extends com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate {
        private static final long serialVersionUID = -2897900789505229105L;
        public int cardType;
        public long maxTimeOut;

        public ActionBarInfoNew() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class ActivityMiddlePageInfo extends com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate {
        private static final long serialVersionUID = -7126817779477974119L;
        public boolean showHeaderBar;

        public ActivityMiddlePageInfo() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class AdDataV2 extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = -8017805390945915342L;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.ActionBarInfoNew actionBarInfo;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate actionBarTKInfo;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.ActivityMiddlePageInfo activityMiddlePageInfo;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate activityTKInfo;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.FeedInfo adUnionFeedLiveMediaInfo;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.FeedInfo adUnionFeedLiveTemplateInfo;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.AggregationCardInfo aggregationCardInfo;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.BottomBannerInfo bottomBannerInfo;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate complianceCardInfo;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate confirmTKInfo;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate downloadConfirmCardInfo;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.EndCardInfo endCardInfo;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.FeedInfo feedInfo;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.FullScreenInfo fullScreenInfo;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate halfCardInfo;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.InstalledActivateInfo installedActivateInfo;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.InterstitialCardInfo interstitialCardInfo;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.RewardWebTaskCloseInfo mRewardWebTaskCloseInfo;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.MerchantLiveReservationInfo merchantLiveReservationInfo;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate middleTKCardInfo;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate neoTKInfo;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.NeoVideoInfo neoVideoInfo;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate playendTKInfo;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.PreLandingPageTKInfo preLandingPageTKInfo;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.PushTKInfo pushTKInfo;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.RewardVideoInteractInfo rewardVideoInteractInfo;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.RewardVideoTaskInfo rewardVideoTaskInfo;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate splashActionBarInfo;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.SplashEndCardTKInfo splashEndCardTKInfo;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.SplashInfo splashInfo;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.SplashPlayCardTKInfo splashPlayCardTKInfo;
        public java.util.List<com.kwad.sdk.core.response.model.AdMatrixInfo.TemplateData> templateDataList;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate topBarTKInfo;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.TopFloorTKInfo topFloorTKInfo;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate videoImageTKInfo;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate videoLiveTKInfo;

        public AdDataV2() {
                r1 = this;
                r1.<init>()
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.templateDataList = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$BottomBannerInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$BottomBannerInfo
                r0.<init>()
                r1.bottomBannerInfo = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$ActionBarInfoNew r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$ActionBarInfoNew
                r0.<init>()
                r1.actionBarInfo = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$AggregationCardInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$AggregationCardInfo
                r0.<init>()
                r1.aggregationCardInfo = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate
                r0.<init>()
                r1.halfCardInfo = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$EndCardInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$EndCardInfo
                r0.<init>()
                r1.endCardInfo = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$InterstitialCardInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$InterstitialCardInfo
                r0.<init>()
                r1.interstitialCardInfo = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$FeedInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$FeedInfo
                r0.<init>()
                r1.feedInfo = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$FeedInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$FeedInfo
                r0.<init>()
                r1.adUnionFeedLiveMediaInfo = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$FeedInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$FeedInfo
                r0.<init>()
                r1.adUnionFeedLiveTemplateInfo = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate
                r0.<init>()
                r1.complianceCardInfo = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate
                r0.<init>()
                r1.downloadConfirmCardInfo = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$SplashInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$SplashInfo
                r0.<init>()
                r1.splashInfo = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$NeoVideoInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$NeoVideoInfo
                r0.<init>()
                r1.neoVideoInfo = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$FullScreenInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$FullScreenInfo
                r0.<init>()
                r1.fullScreenInfo = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate
                r0.<init>()
                r1.middleTKCardInfo = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate
                r0.<init>()
                r1.actionBarTKInfo = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate
                r0.<init>()
                r1.topBarTKInfo = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$SplashPlayCardTKInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$SplashPlayCardTKInfo
                r0.<init>()
                r1.splashPlayCardTKInfo = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$SplashEndCardTKInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$SplashEndCardTKInfo
                r0.<init>()
                r1.splashEndCardTKInfo = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$TopFloorTKInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$TopFloorTKInfo
                r0.<init>()
                r1.topFloorTKInfo = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$ActivityMiddlePageInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$ActivityMiddlePageInfo
                r0.<init>()
                r1.activityMiddlePageInfo = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate
                r0.<init>()
                r1.confirmTKInfo = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate
                r0.<init>()
                r1.playendTKInfo = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate
                r0.<init>()
                r1.activityTKInfo = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate
                r0.<init>()
                r1.neoTKInfo = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$RewardVideoInteractInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$RewardVideoInteractInfo
                r0.<init>()
                r1.rewardVideoInteractInfo = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$RewardVideoTaskInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$RewardVideoTaskInfo
                r0.<init>()
                r1.rewardVideoTaskInfo = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$RewardWebTaskCloseInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$RewardWebTaskCloseInfo
                r0.<init>()
                r1.mRewardWebTaskCloseInfo = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$MerchantLiveReservationInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$MerchantLiveReservationInfo
                r0.<init>()
                r1.merchantLiveReservationInfo = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$PushTKInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$PushTKInfo
                r0.<init>()
                r1.pushTKInfo = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate
                r0.<init>()
                r1.splashActionBarInfo = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate
                r0.<init>()
                r1.videoLiveTKInfo = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$PreLandingPageTKInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$PreLandingPageTKInfo
                r0.<init>()
                r1.preLandingPageTKInfo = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$InstalledActivateInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$InstalledActivateInfo
                r0.<init>()
                r1.installedActivateInfo = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate
                r0.<init>()
                r1.videoImageTKInfo = r0
                return
        }
    }

    public static class AdInteractionInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = -8105791433429537031L;
        public int interactiveStyle;
        public int interactivityDefaultStyle;
        public boolean isMediaDisable;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.RotateInfo rotateInfo;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.ShakeInfo shakeInfo;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.SplashSlideInfo slideInfo;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.SplashActionBarInfo splashActionBarInfo;
        public long switchDefaultTime;
        public long tkDefaultTimeout;

        public AdInteractionInfo() {
                r1 = this;
                r1.<init>()
                com.kwad.sdk.core.response.model.AdMatrixInfo$ShakeInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$ShakeInfo
                r0.<init>()
                r1.shakeInfo = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$RotateInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$RotateInfo
                r0.<init>()
                r1.rotateInfo = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$SplashSlideInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$SplashSlideInfo
                r0.<init>()
                r1.slideInfo = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$SplashActionBarInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$SplashActionBarInfo
                r0.<init>()
                r1.splashActionBarInfo = r0
                return
        }
    }

    public static class AggregationCardInfo extends com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate {
        private static final long serialVersionUID = 6065340139053228242L;
        public int changeTime;
        public long intervalTime;
        public int maxTimesPerDay;

        public AggregationCardInfo() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class BaseMatrixTemplate extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = 3594661163877934414L;
        public int renderType;
        public java.lang.String templateId;

        public BaseMatrixTemplate() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class BottomBannerInfo extends com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate {
        private static final long serialVersionUID = 9099955467009566699L;
        public int bannerAdType;
        public int bannerSizeType;

        public BottomBannerInfo() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class CycleAggregateInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = 3365726199254620321L;
        public java.lang.String convertIconUrl;
        public java.lang.String cutIconUrl;
        public java.lang.String refreshIconUrl;

        public CycleAggregateInfo() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class DownloadTexts extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = -2293710579116352440L;
        public java.lang.String adActionDescription;
        public java.lang.String installAppLabel;
        public java.lang.String openAppLabel;

        public DownloadTexts() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class EndCardInfo extends com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate {
        private static final long serialVersionUID = -1534468715847534303L;
        public int cardShowPlayCount;
        public int cardType;

        public EndCardInfo() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class FeedInfo extends com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate {
        private static final long serialVersionUID = -299328228771513399L;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.AdInteractionInfo interactionInfo;

        public FeedInfo() {
                r1 = this;
                r1.<init>()
                com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo
                r0.<init>()
                r1.interactionInfo = r0
                return
        }
    }

    public static class FullScreenInfo extends com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate {
        private static final long serialVersionUID = 6260475900625987915L;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.AdInteractionInfo interactionInfo;

        public FullScreenInfo() {
                r1 = this;
                r1.<init>()
                com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo
                r0.<init>()
                r1.interactionInfo = r0
                return
        }
    }

    public static class InstalledActivateInfo extends com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate {
        private static final long serialVersionUID = -959583814667849237L;
        public boolean cardSwitch;
        public long showTime;

        public InstalledActivateInfo() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class InterstitialCardInfo extends com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate {
        private static final long serialVersionUID = -5881505827627373593L;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.CycleAggregateInfo cycleAggregateInfo;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.AdInteractionInfo interactionInfo;

        public InterstitialCardInfo() {
                r1 = this;
                r1.<init>()
                com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo
                r0.<init>()
                r1.interactionInfo = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$CycleAggregateInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$CycleAggregateInfo
                r0.<init>()
                r1.cycleAggregateInfo = r0
                return
        }
    }

    public static class MatrixTag extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        public boolean isHide;
        public int styleId;
        public java.lang.String type;

        public MatrixTag() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class MatrixTemplate extends com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate {
        private static final long serialVersionUID = 1943039524913069727L;
        public java.lang.String templateMd5;
        public java.lang.String templateUrl;
        public java.lang.String templateVersion;
        public long templateVersionCode;

        public MatrixTemplate() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class MerchantLiveReservationInfo extends com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate implements java.io.Serializable {
        private static final int MIN_COUNT = 50;
        private static final long serialVersionUID = -6879010521415024815L;
        public int bookUserCount;
        public java.util.List<java.lang.String> bookUserUrlList;
        public boolean displayBookCount;
        public boolean displayWeakCard;
        public java.lang.String liveStartTime;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.MerchantLiveReservationInfo.LiveReservationPlayEndInfo playEndCard;
        public java.lang.String title;
        public java.lang.String userHeadUrl;

        public static class LiveReservationPlayEndInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
            private static final long serialVersionUID = 1682477964084325954L;
            public java.lang.String detailBtnTitle;
            public java.lang.String reservationBtnTitle;

            public LiveReservationPlayEndInfo() {
                    r1 = this;
                    r1.<init>()
                    java.lang.String r0 = "查看详情"
                    r1.detailBtnTitle = r0
                    java.lang.String r0 = "立即预约"
                    r1.reservationBtnTitle = r0
                    return
            }
        }

        public MerchantLiveReservationInfo() {
                r0 = this;
                r0.<init>()
                return
        }

        public java.lang.String getFormattedLiveSubscribeCount() {
                r5 = this;
                int r0 = r5.bookUserCount
                r1 = 50
                if (r0 >= r1) goto L8
                r0 = 0
                return r0
            L8:
                r1 = 10000(0x2710, float:1.4013E-41)
                if (r0 >= r1) goto L20
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                int r1 = r5.bookUserCount
                r0.append(r1)
                java.lang.String r1 = "人"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
            L20:
                java.text.DecimalFormat r0 = new java.text.DecimalFormat
                java.lang.String r1 = "#.#"
                r0.<init>(r1)
                int r1 = r5.bookUserCount
                float r1 = (float) r1
                r2 = 1176256512(0x461c4000, float:10000.0)
                float r1 = r1 / r2
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                double r3 = (double) r1
                java.lang.String r0 = r0.format(r3)
                r2.append(r0)
                java.lang.String r0 = "万人"
                r2.append(r0)
                java.lang.String r0 = r2.toString()
                return r0
        }

        public boolean isEmpty() {
                r1 = this;
                java.lang.String r0 = r1.title
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 == 0) goto L1a
                java.lang.String r0 = r1.liveStartTime
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 == 0) goto L1a
                java.lang.String r0 = r1.userHeadUrl
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 == 0) goto L1a
                r0 = 1
                return r0
            L1a:
                r0 = 0
                return r0
        }

        public boolean needShowSubscriberCount() {
                r2 = this;
                boolean r0 = r2.displayBookCount
                if (r0 == 0) goto Lc
                int r0 = r2.bookUserCount
                r1 = 50
                if (r0 < r1) goto Lc
                r0 = 1
                return r0
            Lc:
                r0 = 0
                return r0
        }
    }

    public static class NeoVideoInfo extends com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate {
        private static final long serialVersionUID = 6260475900625987915L;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.AdInteractionInfo interactionInfo;

        public NeoVideoInfo() {
                r1 = this;
                r1.<init>()
                com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo
                r0.<init>()
                r1.interactionInfo = r0
                return
        }
    }

    public static class PreLandingPageTKInfo extends com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate {
        private static final long serialVersionUID = -6610860492486529913L;
        public int preLandingPageShowType;

        public PreLandingPageTKInfo() {
                r1 = this;
                r1.<init>()
                r0 = 1
                r1.preLandingPageShowType = r0
                return
        }

        public boolean isPlayEndShow() {
                r3 = this;
                int r0 = r3.preLandingPageShowType
                r1 = 1
                r2 = 2
                if (r0 == r2) goto Lb
                if (r0 != r1) goto L9
                goto Lb
            L9:
                r0 = 0
                return r0
            Lb:
                return r1
        }

        public boolean isSkipShow() {
                r3 = this;
                int r0 = r3.preLandingPageShowType
                r1 = 1
                r2 = 3
                if (r0 == r2) goto Lb
                if (r0 != r1) goto L9
                goto Lb
            L9:
                r0 = 0
                return r0
            Lb:
                return r1
        }
    }

    public static class PushTKInfo extends com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate {
        private static final long serialVersionUID = -1907990715102735992L;

        public PushTKInfo() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class RewardVideoInteractInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = 8875349394489272055L;
        public int dayMaxLimit;
        public int duration;
        public java.lang.String errorMsg;
        public int intervalShow;
        public int rewardTime;
        public int showTime;
        public int style;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.StyleInfo styleInfo;
        public java.lang.String successfulMsg;
        public java.lang.String templateId;

        public RewardVideoInteractInfo() {
                r1 = this;
                r1.<init>()
                com.kwad.sdk.core.response.model.AdMatrixInfo$StyleInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$StyleInfo
                r0.<init>()
                r1.styleInfo = r0
                return
        }
    }

    public static class RewardVideoTaskInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = 2487245975856269581L;
        public int duration;
        public int showTime;
        public int taskType;
        public java.lang.String templateId;
        public int thresholdTime;

        public RewardVideoTaskInfo() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class RewardWebTaskCloseInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = -2697443981301300766L;
        public java.lang.String templateId;

        public RewardWebTaskCloseInfo() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class RotateDegreeInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = -479509878557048331L;
        public int direction;
        public int rotateDegree;

        public RotateDegreeInfo() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class RotateInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = -237926423883960071L;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.DownloadTexts downloadTexts;
        public java.lang.String subTitle;
        public java.lang.String title;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.RotateDegreeInfo x;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.RotateDegreeInfo y;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.RotateDegreeInfo z;

        public RotateInfo() {
                r1 = this;
                r1.<init>()
                com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts
                r0.<init>()
                r1.downloadTexts = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$RotateDegreeInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$RotateDegreeInfo
                r0.<init>()
                r1.x = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$RotateDegreeInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$RotateDegreeInfo
                r0.<init>()
                r1.y = r0
                com.kwad.sdk.core.response.model.AdMatrixInfo$RotateDegreeInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$RotateDegreeInfo
                r0.<init>()
                r1.z = r0
                return
        }
    }

    public static class ShakeInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = 4528782399998808588L;
        public int acceleration;
        public boolean clickDisabled;
        public int componentIndex;
        public java.lang.String subtitle;
        public java.lang.String title;

        public ShakeInfo() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class SplashActionBarInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = -2897900789505229105L;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.DownloadTexts downloadTexts;
        public java.lang.String title;

        public SplashActionBarInfo() {
                r1 = this;
                r1.<init>()
                com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts
                r0.<init>()
                r1.downloadTexts = r0
                return
        }
    }

    public static class SplashEndCardTKInfo extends com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate {
        private static final long serialVersionUID = 3536091976265473949L;
        public int endCardCountDaily;
        public boolean endCardFullScreenClick;
        public boolean endCardShowCountDown;
        public int endCardShowSecond;

        public SplashEndCardTKInfo() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class SplashInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = 240426032769377332L;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.AdInteractionInfo interactionInfo;

        public SplashInfo() {
                r1 = this;
                r1.<init>()
                com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo
                r0.<init>()
                r1.interactionInfo = r0
                return
        }
    }

    public static class SplashPlayCardTKInfo extends com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate {
        private static final long serialVersionUID = 2182484890680464601L;

        public SplashPlayCardTKInfo() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class SplashSlideInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = -5771966197460897593L;
        public int convertDistance;
        public com.kwad.sdk.core.response.model.AdMatrixInfo.DownloadTexts downloadTexts;
        public int style;
        public java.lang.String subtitle;
        public java.lang.String title;

        public SplashSlideInfo() {
                r1 = this;
                r1.<init>()
                com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts
                r0.<init>()
                r1.downloadTexts = r0
                return
        }
    }

    public static class StyleInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = 7597936730431611526L;
        public java.lang.String title;

        public StyleInfo() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class Styles extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = 1713930699658485883L;
        public java.util.List<com.kwad.sdk.core.response.model.AdMatrixInfo.MatrixTemplate> templateList;

        public Styles() {
                r1 = this;
                r1.<init>()
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.templateList = r0
                return
        }
    }

    public static class TemplateData extends com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate {
        private static final long serialVersionUID = -3330357033837521996L;
        public java.lang.String data;
        public long templateDelayTime;
        public long templateShowTime;

        public TemplateData() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class TopFloorTKInfo extends com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate {
        private static final long serialVersionUID = 341571719184500541L;

        public TopFloorTKInfo() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public AdMatrixInfo() {
            r1 = this;
            r1.<init>()
            com.kwad.sdk.core.response.model.AdMatrixInfo$Styles r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$Styles
            r0.<init>()
            r1.styles = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2
            r0.<init>()
            r1.adDataV2 = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.tag = r0
            return
    }
}
