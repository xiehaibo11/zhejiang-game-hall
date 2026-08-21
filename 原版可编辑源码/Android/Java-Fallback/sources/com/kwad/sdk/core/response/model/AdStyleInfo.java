package com.kwad.sdk.core.response.model;

public class AdStyleInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
    private static final long serialVersionUID = 8719785586052076737L;
    public com.kwad.sdk.core.response.model.AdStyleInfo.AdBrowseInfo adBrowseInfo;
    public com.kwad.sdk.core.response.model.AdStyleInfo.ExtraDisplayInfo extraDisplayInfo;
    public com.kwad.sdk.core.response.model.AdStyleInfo.FeedAdInfo feedAdInfo;
    public com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo playDetailInfo;
    public com.kwad.sdk.core.response.model.AdStyleInfo.PlayEndInfo playEndInfo;
    public java.lang.String playableExtraData;
    public boolean slideClick;

    public static class AdBrowseInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = 124904139820344132L;
        public int adBrowseDuration;
        public int enableAdBrowse;

        public AdBrowseInfo() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class ExposeTagInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        public java.lang.String text;

        public ExposeTagInfo() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class ExtraDisplayInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        public java.util.List<com.kwad.sdk.core.response.model.AdStyleInfo.ExposeTagInfo> exposeTagInfoList;

        public ExtraDisplayInfo() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class FeedAdInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = -7200581738130214277L;
        public double heightRatio;
        public java.lang.String templateConfig;

        public FeedAdInfo() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class PlayDetailInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = -1341583579732471663L;
        public com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.ActionBarInfo actionBarInfo;
        public com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.DetailCommonInfo detailCommonInfo;
        public com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.DetailTopToolBarInfo detailTopToolBarInfo;
        public com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.DetailWebCardInfo detailWebCardInfo;
        public com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.DrawAdInfo drawAdInfo;
        public com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.PatchAdInfo patchAdInfo;
        public int type;

        public static class ActionBarInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
            private static final long serialVersionUID = 8435676971458116236L;
            public long cardShowTime;
            public long lightBtnShowTime;
            public long translateBtnShowTime;

            public ActionBarInfo() {
                    r0 = this;
                    r0.<init>()
                    return
            }
        }

        public static class DetailCommonInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
            private static final long serialVersionUID = 7929119539282758308L;
            public int middleEndcardShowTime;
            public int rewardFullClickSwitch;
            public int rewardInteractionType;

            public DetailCommonInfo() {
                    r0 = this;
                    r0.<init>()
                    return
            }
        }

        public static class DetailTopToolBarInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
            private static final long serialVersionUID = 7018855616083214769L;
            public java.lang.String callButtonDescription;
            public long callButtonShowTime;
            public long maxTimeOut;
            public java.lang.String rewardCallDescription;
            public java.lang.String rewardIconUrl;
            public int style;

            public DetailTopToolBarInfo() {
                    r0 = this;
                    r0.<init>()
                    return
            }
        }

        public static class DetailWebCardInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
            private static final long serialVersionUID = -3413444348973947395L;
            public java.lang.String cardData;
            public long cardShowTime;
            public int cardType;
            public java.lang.String cardUrl;
            public long maxTimeOut;
            public int style;
            public long typeLandscape;
            public long typePortrait;

            public DetailWebCardInfo() {
                    r0 = this;
                    r0.<init>()
                    return
            }
        }

        public static class DrawAdInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
            private static final long serialVersionUID = -793446066208523006L;
            public boolean forcedWatch;

            public DrawAdInfo() {
                    r0 = this;
                    r0.<init>()
                    return
            }
        }

        public static class PatchAdInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
            private static final long serialVersionUID = 2983090319692390903L;
            public java.lang.String strongStyleAdMark;
            public long strongStyleAppearTime;
            public java.lang.String strongStyleCardUrl;
            public boolean strongStyleEnableClose;
            public long strongStyleShowTime;
            public java.lang.String strongStyleSubTitle;
            public java.lang.String strongStyleTitle;
            public int typePortrait;
            public java.lang.String weakStyleAdMark;
            public long weakStyleAppearTime;
            public java.lang.String weakStyleDownloadingTitle;
            public boolean weakStyleEnableClose;
            public java.lang.String weakStyleIcon;
            public long weakStyleShowTime;
            public java.lang.String weakStyleTitle;

            public PatchAdInfo() {
                    r0 = this;
                    r0.<init>()
                    return
            }
        }

        public static class PatchEcInfo extends com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.PatchAdInfo implements java.io.Serializable {
            public static final int PLATFORM_TYPE_JD = 2;
            public static final int PLATFORM_TYPE_KWAI = 0;
            public static final int PLATFORM_TYPE_TAOBAO = 1;
            private static final long serialVersionUID = -2026969232988644879L;
            public java.lang.String linkCode;
            public java.lang.String nebulaKwaiLink;
            public int platformTypeCode;
            public java.lang.String strongStyleItemId;
            public java.lang.String strongStyleItemPrice;
            public java.lang.String strongStyleItemUrl;
            public java.lang.String strongStylePicUrl;
            public java.lang.String strongStylePriceAfterComm;
            public java.lang.String strongStyleUserCommAmountBuying;
            public java.lang.String strongStyleUserCommAmountSharing;

            public PatchEcInfo() {
                    r0 = this;
                    r0.<init>()
                    return
            }

            public java.lang.String getLinkCode() {
                    r1 = this;
                    java.lang.String r0 = r1.linkCode
                    return r0
            }

            public java.lang.String getNebulaKwaiLink() {
                    r1 = this;
                    java.lang.String r0 = r1.nebulaKwaiLink
                    return r0
            }

            public java.lang.String getStrongStyleItemId() {
                    r1 = this;
                    java.lang.String r0 = r1.strongStyleItemId
                    return r0
            }

            public java.lang.String getStrongStyleItemPrice() {
                    r1 = this;
                    java.lang.String r0 = r1.strongStyleItemPrice
                    return r0
            }

            public java.lang.String getStrongStyleItemUrl() {
                    r1 = this;
                    java.lang.String r0 = r1.strongStyleItemUrl
                    return r0
            }

            public java.lang.String getStrongStylePicUrl() {
                    r1 = this;
                    java.lang.String r0 = r1.strongStylePicUrl
                    return r0
            }

            public java.lang.String getStrongStylePriceAfterComm() {
                    r1 = this;
                    java.lang.String r0 = r1.strongStylePriceAfterComm
                    return r0
            }

            public java.lang.String getStrongStyleUserCommAmountBuying() {
                    r1 = this;
                    java.lang.String r0 = r1.strongStyleUserCommAmountBuying
                    return r0
            }

            public java.lang.String getStrongStyleUserCommAmountSharing() {
                    r1 = this;
                    java.lang.String r0 = r1.strongStyleUserCommAmountSharing
                    return r0
            }
        }

        public static class WidgetAdInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
            private static final long serialVersionUID = -7098364163341152274L;
            public java.lang.String downloadOngoingLabel;
            public java.lang.String downloadResumeLabel;
            public java.lang.String downloadStartLabel;
            public java.lang.String installAppLabel;
            public java.lang.String openAppLabel;
            public int type;
            public java.lang.String widgetAdIcon;

            public WidgetAdInfo() {
                    r0 = this;
                    r0.<init>()
                    return
            }
        }

        public PlayDetailInfo() {
                r1 = this;
                r1.<init>()
                com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$DetailWebCardInfo r0 = new com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$DetailWebCardInfo
                r0.<init>()
                r1.detailWebCardInfo = r0
                com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$DetailTopToolBarInfo r0 = new com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$DetailTopToolBarInfo
                r0.<init>()
                r1.detailTopToolBarInfo = r0
                com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$ActionBarInfo r0 = new com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$ActionBarInfo
                r0.<init>()
                r1.actionBarInfo = r0
                com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$PatchAdInfo r0 = new com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$PatchAdInfo
                r0.<init>()
                r1.patchAdInfo = r0
                com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$DetailCommonInfo r0 = new com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$DetailCommonInfo
                r0.<init>()
                r1.detailCommonInfo = r0
                com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$DrawAdInfo r0 = new com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$DrawAdInfo
                r0.<init>()
                r1.drawAdInfo = r0
                return
        }
    }

    public static class PlayEndInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = 4733855071604625289L;
        public com.kwad.sdk.core.response.model.AdStyleInfo.PlayEndInfo.AdWebCardInfo adWebCardInfo;
        public com.kwad.sdk.core.response.model.AdStyleInfo.PlayEndInfo.EndTopToolBarInfo endTopToolBarInfo;
        public int showLandingPage3;
        public int type;

        public static class AdWebCardInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
            private static final long serialVersionUID = 5629721137592788675L;
            public java.lang.String cardData;
            public long cardDelayTime;
            public int cardShowPlayCount;
            public long cardShowTime;
            public java.lang.String cardUrl;
            public long typeLandscape;
            public long typePortrait;

            public AdWebCardInfo() {
                    r0 = this;
                    r0.<init>()
                    return
            }
        }

        public static class EndTopToolBarInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
            private static final long serialVersionUID = -3850938239125130621L;
            public java.lang.String callButtonDescription;
            public java.lang.String rewardIconUrl;

            public EndTopToolBarInfo() {
                    r0 = this;
                    r0.<init>()
                    return
            }
        }

        public PlayEndInfo() {
                r1 = this;
                r1.<init>()
                com.kwad.sdk.core.response.model.AdStyleInfo$PlayEndInfo$AdWebCardInfo r0 = new com.kwad.sdk.core.response.model.AdStyleInfo$PlayEndInfo$AdWebCardInfo
                r0.<init>()
                r1.adWebCardInfo = r0
                com.kwad.sdk.core.response.model.AdStyleInfo$PlayEndInfo$EndTopToolBarInfo r0 = new com.kwad.sdk.core.response.model.AdStyleInfo$PlayEndInfo$EndTopToolBarInfo
                r0.<init>()
                r1.endTopToolBarInfo = r0
                return
        }
    }

    public AdStyleInfo() {
            r1 = this;
            r1.<init>()
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo r0 = new com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo
            r0.<init>()
            r1.playDetailInfo = r0
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayEndInfo r0 = new com.kwad.sdk.core.response.model.AdStyleInfo$PlayEndInfo
            r0.<init>()
            r1.playEndInfo = r0
            com.kwad.sdk.core.response.model.AdStyleInfo$FeedAdInfo r0 = new com.kwad.sdk.core.response.model.AdStyleInfo$FeedAdInfo
            r0.<init>()
            r1.feedAdInfo = r0
            com.kwad.sdk.core.response.model.AdStyleInfo$AdBrowseInfo r0 = new com.kwad.sdk.core.response.model.AdStyleInfo$AdBrowseInfo
            r0.<init>()
            r1.adBrowseInfo = r0
            com.kwad.sdk.core.response.model.AdStyleInfo$ExtraDisplayInfo r0 = new com.kwad.sdk.core.response.model.AdStyleInfo$ExtraDisplayInfo
            r0.<init>()
            r1.extraDisplayInfo = r0
            return
    }
}
