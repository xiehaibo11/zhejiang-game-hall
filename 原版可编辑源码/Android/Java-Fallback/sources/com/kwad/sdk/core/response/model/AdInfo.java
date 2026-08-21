package com.kwad.sdk.core.response.model;

public class AdInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
    private static final long serialVersionUID = -8738827282880419389L;
    public com.kwad.sdk.core.response.model.AdInfo.AdAggregateInfo adAggregateInfo;
    public com.kwad.sdk.core.response.model.AdInfo.AdBaseInfo adBaseInfo;
    public com.kwad.sdk.core.response.model.AdInfo.AdConversionInfo adConversionInfo;
    public com.kwad.sdk.core.response.model.AdInfo.AdFeedInfo adFeedInfo;
    public com.kwad.sdk.core.response.model.AdInfo.AdInsertScreenInfo adInsertScreenInfo;
    public com.kwad.sdk.core.response.model.AdInfo.AdMaterialInfo adMaterialInfo;
    public com.kwad.sdk.core.response.model.AdMatrixInfo adMatrixInfo;
    public com.kwad.sdk.core.response.model.AdInfo.AdPreloadInfo adPreloadInfo;
    public com.kwad.sdk.core.response.model.AdProductInfo adProductInfo;
    public com.kwad.sdk.core.response.model.AdInfo.AdRewardInfo adRewardInfo;
    public com.kwad.sdk.core.response.model.AdInfo.AdSplashInfo adSplashInfo;
    public com.kwad.sdk.core.response.model.AdInfo.AdStyleConfInfo adStyleConfInfo;
    public com.kwad.sdk.core.response.model.AdStyleInfo adStyleInfo;
    public com.kwad.sdk.core.response.model.AdStyleInfo adStyleInfo2;
    public java.util.List<com.kwad.sdk.core.response.model.AdInfo.AdTrackInfo> adTrackInfoList;
    public com.kwad.sdk.core.response.model.AdInfo.AdvertiserInfo advertiserInfo;
    public java.lang.String downloadFilePath;
    public java.lang.String downloadId;
    public com.kwad.sdk.core.response.model.AdInfo.DownloadSafeInfo downloadSafeInfo;
    public com.kwad.sdk.core.response.model.AdInfo.FullScreenVideoInfo fullScreenVideoInfo;

    @java.lang.Deprecated
    public int ocpcActionType;
    public int progress;
    public java.lang.String serverExt;
    public long soFarBytes;
    public int status;
    public long totalBytes;
    public java.lang.String trace;
    public com.kwad.sdk.core.response.model.AdInfo.UnDownloadConf unDownloadConf;

    public static class AdAggregateInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = 6627768757836702989L;
        public int aggregateAdType;
        public java.lang.String hotTagUrl;
        public java.lang.String upperTab;

        public AdAggregateInfo() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class AdBaseInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = 1615884096720946547L;
        public java.lang.String adActionBarColor;
        public java.lang.String adActionDescription;
        public int adAttributeType;
        public long adCacheSecond;
        public int adCacheSize;
        public int adCacheStrategy;
        public int adCacheSwitch;
        public java.lang.String adDescription;
        public java.lang.String adGrayMarkIcon;
        public java.lang.String adMarkIcon;
        public int adOperationType;
        public int adShowDuration;
        public java.lang.String adSourceDescription;
        public int adSourceType;
        public com.kwad.sdk.core.response.model.AdInfo.H5Config apiExpParam;
        public java.lang.String appCategory;
        public java.lang.String appDescription;
        public java.lang.String appDownloadCountDesc;
        public java.lang.String appIconUrl;
        public com.kwad.sdk.core.response.model.AdInfo.MaterialSize appImageSize;
        public java.util.List<java.lang.String> appImageUrl;
        public java.lang.String appName;
        public java.lang.String appPackageName;
        public int appScore;
        public java.lang.String appVersion;

        @java.lang.Deprecated
        public int campaignType;
        public java.lang.String clickUrl;
        public java.lang.String convUrl;
        public java.lang.String corporationName;
        public long creativeId;
        public int ecpm;
        public boolean enableClientProofreadTime;
        public int enableSkipAd;
        public boolean extraClickReward;
        public int industryFirstLevelId;
        public java.lang.String installAppLabel;
        public int itemType;
        public java.lang.String liveStreamId;
        public com.kwad.sdk.core.response.model.ABParams mABParams;
        public java.lang.String openAppLabel;
        public long packageSize;
        public java.lang.String productName;
        public java.lang.String sdkExtraData;
        public java.lang.String showUrl;
        public int skipSecond;
        public int taskType;
        public int universeLiveType;
        public java.lang.String videoPlayedNS;
        public long viewCount;

        public AdBaseInfo() {
                r2 = this;
                r2.<init>()
                r0 = 1800(0x708, double:8.893E-321)
                r2.adCacheSecond = r0
                r0 = 1
                r2.adCacheStrategy = r0
                r2.adCacheSize = r0
                com.kwad.sdk.core.response.model.ABParams r0 = new com.kwad.sdk.core.response.model.ABParams
                r0.<init>()
                r2.mABParams = r0
                return
        }
    }

    public static class AdConversionInfo extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b, java.io.Serializable {
        private static final long serialVersionUID = -1623240707193173136L;
        public java.lang.String appDownloadUrl;
        public boolean blockCallbackIfSpam;
        public java.lang.String callbackUrl;
        public java.lang.String callbackUrlInfo;
        public java.util.List<com.kwad.sdk.core.response.model.AdInfo.AdConversionInfo.DeeplinkItemInfo> deeplinkConf;
        public java.lang.String deeplinkExtra;
        public java.lang.String deeplinkUrl;
        public int h5DeeplinkLimitedTimeMs;
        public int h5Type;
        public java.lang.String h5Url;
        public boolean isSupportKeepPlaying;
        public long keepPlayingBackOffTime;
        public java.lang.String marketUrl;
        public boolean needDeeplinkReplaceAdapta;
        public int playableDeeplinkLimitedTimeMs;
        public com.kwad.sdk.core.response.model.AdInfo.PlayableStyleInfo playableStyleInfo;
        public java.lang.String playableUrl;
        public int retryH5TimeStep;
        public com.kwad.sdk.core.response.model.AdInfo.SmallAppJumpInfo smallAppJumpInfo;
        public int supportThirdDownload;
        public int webUriSourceType;

        public static class DeeplinkItemInfo extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b, java.io.Serializable {
            private static final long serialVersionUID = -8434342914283766519L;
            public java.util.List<java.lang.Integer> areaConf;
            public java.util.List<java.lang.Integer> sceneConf;
            public java.lang.String url;

            public DeeplinkItemInfo() {
                    r0 = this;
                    r0.<init>()
                    return
            }
        }

        public AdConversionInfo() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class AdFeedInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = 9055595743118459339L;
        public int videoAutoPlayType;
        public int videoSoundType;

        public AdFeedInfo() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class AdInsertScreenInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = 5131603307173468926L;
        public int autoCloseTime;
        public int cycleAggregateDailyShowCount;
        public int cycleAggregateInterval;
        public int cycleAggregateStyle;
        public boolean cycleAggregateSwitch;
        public int guideShowStyle;
        public int guideShowTime;
        public int retainWindowBasedAdShowCount;
        public int retainWindowDailyShowCount;
        public int retainWindowStyle;
        public java.lang.String retainWindowText;

        public AdInsertScreenInfo() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class AdMaterialInfo extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b, java.io.Serializable {
        private static final long serialVersionUID = 8841259738296866924L;
        public java.util.List<com.kwad.sdk.core.response.model.AdInfo.AdMaterialInfo.MaterialFeature> materialFeatureList;
        public int materialType;
        public boolean videoVoice;

        public static class MaterialFeature extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b, java.io.Serializable {
            private static final long serialVersionUID = -1118440558210936255L;
            public java.lang.String blurBackgroundUrl;
            public long commentCount;
            public java.lang.String coverUrl;
            public int featureType;
            public java.lang.String firstFrame;
            public int height;
            public long likeCount;
            public java.lang.String materialUrl;
            public long photoId;
            public java.lang.String ruleId;
            public int source;
            public int videoDuration;
            public int videoHeight;
            public int videoWidth;
            public java.lang.String webpCoverUrl;
            public int width;

            public MaterialFeature() {
                    r0 = this;
                    r0.<init>()
                    return
            }

            @Override
            public void afterParseJson(org.json.JSONObject r2) {
                    r1 = this;
                    super.afterParseJson(r2)
                    if (r2 != 0) goto L6
                    return
                L6:
                    java.lang.String r0 = "materialSize"
                    org.json.JSONObject r2 = r2.optJSONObject(r0)
                    if (r2 == 0) goto L1e
                    java.lang.String r0 = "width"
                    int r0 = r2.optInt(r0)
                    r1.width = r0
                    java.lang.String r0 = "height"
                    int r2 = r2.optInt(r0)
                    r1.height = r2
                L1e:
                    return
            }

            @Override
            public void afterToJson(org.json.JSONObject r4) {
                    r3 = this;
                    super.afterToJson(r4)
                    if (r4 != 0) goto L6
                    return
                L6:
                    org.json.JSONObject r0 = new org.json.JSONObject
                    r0.<init>()
                    java.lang.String r1 = "width"
                    int r2 = r3.width     // Catch: org.json.JSONException -> L1f
                    r0.put(r1, r2)     // Catch: org.json.JSONException -> L1f
                    java.lang.String r1 = "height"
                    int r2 = r3.height     // Catch: org.json.JSONException -> L1f
                    r0.put(r1, r2)     // Catch: org.json.JSONException -> L1f
                    java.lang.String r1 = "materialSize"
                    r4.put(r1, r0)     // Catch: org.json.JSONException -> L1f
                    return
                L1f:
                    r4 = move-exception
                    com.kwad.sdk.core.e.c.printStackTrace(r4)
                    return
            }
        }

        public AdMaterialInfo() {
                r1 = this;
                r1.<init>()
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.materialFeatureList = r0
                return
        }
    }

    public static class AdPreloadInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = -1208206464894428350L;
        public java.lang.String preloadId;
        public java.lang.String preloadTips;
        public int preloadType;
        public int validityPeriod;

        public AdPreloadInfo() {
                r0 = this;
                r0.<init>()
                return
        }

        public boolean equals(java.lang.Object r2) {
                r1 = this;
                boolean r0 = r2 instanceof com.kwad.sdk.core.response.model.AdInfo.AdPreloadInfo
                if (r0 == 0) goto L12
                com.kwad.sdk.core.response.model.AdInfo$AdPreloadInfo r2 = (com.kwad.sdk.core.response.model.AdInfo.AdPreloadInfo) r2
                java.lang.String r2 = r2.preloadId
                java.lang.String r0 = r1.preloadId
                boolean r2 = r2.equals(r0)
                if (r2 == 0) goto L12
                r2 = 1
                return r2
            L12:
                r2 = 0
                return r2
        }

        public int hashCode() {
                r1 = this;
                java.lang.String r0 = r1.preloadId
                if (r0 == 0) goto L9
                int r0 = r0.hashCode()
                return r0
            L9:
                int r0 = super.hashCode()
                return r0
        }
    }

    public static class AdRewardInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = -6571091401675622830L;
        public com.kwad.sdk.core.response.model.AdInfo.CallBackStrategyInfo callBackStrategyInfo;
        public boolean recommendAggregateSwitch;
        public int rewardTime;
        public boolean rewardVideoEndCardSwitch;
        public int showLandingPage;
        public int skipShowTime;

        public AdRewardInfo() {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.rewardVideoEndCardSwitch = r0
                r1.recommendAggregateSwitch = r0
                com.kwad.sdk.core.response.model.AdInfo$CallBackStrategyInfo r0 = new com.kwad.sdk.core.response.model.AdInfo$CallBackStrategyInfo
                r0.<init>()
                r1.callBackStrategyInfo = r0
                return
        }
    }

    public static class AdShowVideoH5Info extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = -9008557333776946628L;
        public int showPageType;
        public boolean videoAutoLoopAtH5;
        public boolean videoClickAtH5;
        public boolean videoMutedAtH5;

        public AdShowVideoH5Info() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class AdSplashInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = 6666286195277235837L;
        public int countdownShow;
        public com.kwad.sdk.core.response.model.AdInfo.CutRuleInfo cutRuleInfo;
        public int fullScreenClickSwitch;
        public int imageDisplaySecond;
        public double impressionLimitSize;
        public boolean impressionStatisticalChangeSwitch;
        public int logoPosition;
        public int mute;
        public int skipButtonPosition;
        public int skipSecond;
        public java.lang.String skipTips;
        public int skipType;
        public java.lang.String speakerIconUrl;
        public java.lang.String speakerMuteIconUrl;
        public int splashShowClickButtonSwitch;
        public int videoDisplaySecond;

        public AdSplashInfo() {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.fullScreenClickSwitch = r0
                r0 = 1
                r1.skipButtonPosition = r0
                r1.splashShowClickButtonSwitch = r0
                com.kwad.sdk.core.response.model.AdInfo$CutRuleInfo r0 = new com.kwad.sdk.core.response.model.AdInfo$CutRuleInfo
                r0.<init>()
                r1.cutRuleInfo = r0
                return
        }
    }

    public static class AdStyleConfInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = -6571091401675622831L;
        public int actionBarType;
        public int adPushDownloadJumpType;
        public int adPushIntervalTime;
        public int adPushShowAfterTime;
        public boolean adPushSwitch;
        public com.kwad.sdk.core.response.model.AdInfo.AdShowVideoH5Info adShowVideoH5Info;
        public long closeDelaySeconds;
        public int confirmCardType;
        public int endCardType;
        public int fullScreenSkipShowTime;
        public int innerAdType;
        public com.kwad.sdk.core.response.model.AdInfo.NativeAdInfo nativeAdInfo;
        public long playableCloseSeconds;
        public int rewardSkipConfirmSwitch;
        public boolean rewardVideoInteractSwitch;
        public boolean useNativeForOuterLiveAd;

        public AdStyleConfInfo() {
                r1 = this;
                r1.<init>()
                com.kwad.sdk.core.response.model.AdInfo$AdShowVideoH5Info r0 = new com.kwad.sdk.core.response.model.AdInfo$AdShowVideoH5Info
                r0.<init>()
                r1.adShowVideoH5Info = r0
                r0 = 900(0x384, float:1.261E-42)
                r1.adPushIntervalTime = r0
                return
        }
    }

    public static class AdTrackInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = 1185757456598461137L;
        public int type;
        public java.util.List<java.lang.String> urls;

        public AdTrackInfo() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class AdvertiserInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = 1779108296418044788L;
        public java.lang.String adAuthorText;
        public java.lang.String authorIconGuide;
        public java.lang.String brief;
        public int fansCount;
        public boolean followed;
        public java.lang.String portraitUrl;
        public java.lang.String rawUserName;
        public java.lang.String userGender;
        public long userId;
        public java.lang.String userName;

        public AdvertiserInfo() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class CallBackStrategyInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        public int callBackAdvanceMs;
        public int impressionCheckMs;
        public boolean rewardAdvanceSwitch;
        public boolean serverCheckSwitch;

        public CallBackStrategyInfo() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class ComplianceInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = -6420581965656630668L;
        public int actionBarType;
        public int describeBarType;
        public int materialJumpType;
        public int titleBarTextSwitch;

        public ComplianceInfo() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class CutRuleInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = -6799794788698091368L;
        public int picHeight;
        public int safeAreaHeight;
        public int viewTopMargin;

        public CutRuleInfo() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class DownloadSafeInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = -1575212648797728242L;
        public java.lang.String appName;
        public java.lang.String appPermissionInfoUrl;
        public java.lang.String appPrivacyUrl;
        public java.lang.String appVersion;
        public java.lang.String autoDownloadUrl;
        public com.kwad.sdk.core.response.model.AdInfo.ComplianceInfo complianceInfo;
        public java.lang.String corporationName;
        public boolean downloadPauseEnable;
        public long packageSize;
        public java.lang.String permissionInfo;
        public boolean secWindowPopNoWifiSwitch;
        public boolean secWindowPopSwitch;
        public boolean webPageTipbarSwitch;
        public java.lang.String webPageTipbarText;
        public java.lang.String windowPopUrl;

        public DownloadSafeInfo() {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.downloadPauseEnable = r0
                r1.webPageTipbarSwitch = r0
                return
        }
    }

    public static class FullScreenVideoInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = -3671755605746105593L;
        public boolean fullScreenEndCardSwitch;
        public int showLandingPage;

        public FullScreenVideoInfo() {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.fullScreenEndCardSwitch = r0
                return
        }
    }

    public static class H5Config extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b, java.io.Serializable {
        private static final long serialVersionUID = -6055740830695990438L;
        public int apiAdTag;
        public int apiBreathLamp;
        public int apiMisTouch;
        public java.lang.String tagTip;

        public H5Config() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class MaterialSize extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b, java.io.Serializable {
        private static final long serialVersionUID = 4007237406277888273L;
        public int height;
        public int width;

        public MaterialSize() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class NativeAdInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = -4576715577357334083L;
        public com.kwad.sdk.core.response.model.AdInfo.NativeAdShakeInfo shakeInfo;

        public NativeAdInfo() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class NativeAdShakeInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = -2217767053432679267L;
        public int acceleration;
        public boolean enableShake;

        public NativeAdShakeInfo() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class PlayableStyleInfo extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b, java.io.Serializable {
        private static final long serialVersionUID = -5205269652522127614L;
        public int playableOrientation;

        public PlayableStyleInfo() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class SmallAppJumpInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = 6640822363058234999L;
        public java.lang.String mediaSmallAppId;
        public java.lang.String originId;
        public java.lang.String smallAppJumpUrl;

        public SmallAppJumpInfo() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class UnDownloadConf extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = 8376426919835310330L;
        public com.kwad.sdk.core.response.model.AdInfo.UnDownloadRegionConf unDownloadRegionConf;

        public UnDownloadConf() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class UnDownloadRegionConf extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = -1060670053459154853L;
        public int actionBarType;
        public int describeBarType;
        public int materialJumpType;

        public UnDownloadRegionConf() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public AdInfo() {
            r1 = this;
            r1.<init>()
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = new com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo
            r0.<init>()
            r1.adBaseInfo = r0
            com.kwad.sdk.core.response.model.AdInfo$AdvertiserInfo r0 = new com.kwad.sdk.core.response.model.AdInfo$AdvertiserInfo
            r0.<init>()
            r1.advertiserInfo = r0
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r0 = new com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo
            r0.<init>()
            r1.adConversionInfo = r0
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo r0 = new com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo
            r0.<init>()
            r1.adMaterialInfo = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.adTrackInfoList = r0
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r0 = new com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo
            r0.<init>()
            r1.downloadSafeInfo = r0
            com.kwad.sdk.core.response.model.AdInfo$UnDownloadConf r0 = new com.kwad.sdk.core.response.model.AdInfo$UnDownloadConf
            r0.<init>()
            r1.unDownloadConf = r0
            r0 = 0
            r1.status = r0
            com.kwad.sdk.core.response.model.AdInfo$AdPreloadInfo r0 = new com.kwad.sdk.core.response.model.AdInfo$AdPreloadInfo
            r0.<init>()
            r1.adPreloadInfo = r0
            com.kwad.sdk.core.response.model.AdInfo$AdSplashInfo r0 = new com.kwad.sdk.core.response.model.AdInfo$AdSplashInfo
            r0.<init>()
            r1.adSplashInfo = r0
            com.kwad.sdk.core.response.model.AdStyleInfo r0 = new com.kwad.sdk.core.response.model.AdStyleInfo
            r0.<init>()
            r1.adStyleInfo = r0
            com.kwad.sdk.core.response.model.AdStyleInfo r0 = new com.kwad.sdk.core.response.model.AdStyleInfo
            r0.<init>()
            r1.adStyleInfo2 = r0
            com.kwad.sdk.core.response.model.AdInfo$AdAggregateInfo r0 = new com.kwad.sdk.core.response.model.AdInfo$AdAggregateInfo
            r0.<init>()
            r1.adAggregateInfo = r0
            com.kwad.sdk.core.response.model.AdInfo$AdRewardInfo r0 = new com.kwad.sdk.core.response.model.AdInfo$AdRewardInfo
            r0.<init>()
            r1.adRewardInfo = r0
            com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo r0 = new com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo
            r0.<init>()
            r1.adStyleConfInfo = r0
            com.kwad.sdk.core.response.model.AdInfo$FullScreenVideoInfo r0 = new com.kwad.sdk.core.response.model.AdInfo$FullScreenVideoInfo
            r0.<init>()
            r1.fullScreenVideoInfo = r0
            com.kwad.sdk.core.response.model.AdInfo$AdFeedInfo r0 = new com.kwad.sdk.core.response.model.AdInfo$AdFeedInfo
            r0.<init>()
            r1.adFeedInfo = r0
            com.kwad.sdk.core.response.model.AdInfo$AdInsertScreenInfo r0 = new com.kwad.sdk.core.response.model.AdInfo$AdInsertScreenInfo
            r0.<init>()
            r1.adInsertScreenInfo = r0
            com.kwad.sdk.core.response.model.AdProductInfo r0 = new com.kwad.sdk.core.response.model.AdProductInfo
            r0.<init>()
            r1.adProductInfo = r0
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = new com.kwad.sdk.core.response.model.AdMatrixInfo
            r0.<init>()
            r1.adMatrixInfo = r0
            return
    }

    @Override
    public void afterParseJson(org.json.JSONObject r1) {
            r0 = this;
            super.afterParseJson(r1)
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r1 = r0.adConversionInfo
            java.lang.String r1 = r1.appDownloadUrl
            java.lang.String r1 = com.kwad.sdk.utils.ad.bp(r1)
            r0.downloadId = r1
            return
    }
}
