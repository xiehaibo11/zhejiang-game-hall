package com.mbridge.msdk.dycreator.baseview.rewardpopview;

public class AcquireRewardPopViewParameters {
    public int autoDismissTime;
    public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewBehaviourListener behaviourListener;
    public int buttonBackgroundDarkColor;
    public int buttonBackgroundLightColor;
    public int buttonTextDarkColor;
    public int buttonTextLightColor;
    public boolean canClickMaskArea;
    public int containerBackgroundColor;
    public java.lang.String failTip;
    public int failTipTextColor;
    public java.lang.String failTitle;
    public int failTitleGradientEndColor;
    public int failTitleGradientStartColor;
    public int failTitleShadowColor;
    public float failTitleShadowDx;
    public float failTitleShadowDy;
    public float failTitleShadowRadius;
    public int failTitleTextSize;
    public java.lang.String language;
    public java.lang.String placementId;
    public int reduceTime;
    public java.util.List<java.lang.String> rightAnswerList;
    public java.lang.String slideSuccessTitle;
    public java.lang.String slideTip;
    public java.lang.String slideTitle;
    public java.lang.String successTip;
    public int successTipTextColor;
    public java.lang.String successTitle;
    public int successTitleGradientEndColor;
    public int successTitleGradientStartColor;
    public int successTitleShadowColor;
    public float successTitleShadowDx;
    public float successTitleShadowDy;
    public float successTitleShadowRadius;
    public int successTitleTextSize;
    public int tipTextColor;
    public java.lang.String tips;
    public java.lang.String title;
    public int titleTextColor;
    public java.lang.String unitId;
    public int viewBackLayerBottomColor;
    public int viewBackLayerTopColor;
    public int viewForegroundBottomColor;
    public int viewForegroundTopColor;
    public int viewType;
    public java.util.List<java.lang.String> wrongAnswerList;

    public static class Builder {
        private com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters a;

        public Builder(java.lang.String r3, java.lang.String r4, int r5, java.lang.String r6) {
                r2 = this;
                r2.<init>()
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = new com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters
                r0.<init>()
                r2.a = r0
                r0.placementId = r3
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                r3.unitId = r4
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                r3.viewType = r5
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                r3.language = r6
                boolean r3 = android.text.TextUtils.isEmpty(r6)
                java.lang.String r4 = "KO"
                java.lang.String r5 = "JA"
                java.lang.String r0 = "EN"
                java.lang.String r1 = "ZH"
                if (r3 == 0) goto L27
                goto L4e
            L27:
                java.lang.String r3 = "CN"
                boolean r3 = r6.equalsIgnoreCase(r3)
                if (r3 == 0) goto L31
                r3 = r1
                goto L4f
            L31:
                java.lang.String r3 = "UK"
                boolean r3 = r6.equalsIgnoreCase(r3)
                if (r3 == 0) goto L3a
                goto L4e
            L3a:
                java.lang.String r3 = "JP"
                boolean r3 = r6.equalsIgnoreCase(r3)
                if (r3 == 0) goto L44
                r3 = r5
                goto L4f
            L44:
                java.lang.String r3 = "KR"
                boolean r3 = r6.equalsIgnoreCase(r3)
                if (r3 == 0) goto L4e
                r3 = r4
                goto L4f
            L4e:
                r3 = r0
            L4f:
                boolean r6 = r3.equalsIgnoreCase(r1)
                if (r6 == 0) goto L97
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String r4 = "现在播放的是以下何广告?"
                r3.title = r4
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String r4 = "答对问题即可提前%1$s秒跳过视频播放并获得奖励"
                r3.tips = r4
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String r4 = "回答正确!"
                r3.successTitle = r4
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String r4 = "恭喜您可提前%1$s秒跳过视频并获得奖励"
                r3.successTip = r4
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String r4 = "回答错误!"
                r3.failTitle = r4
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String r4 = "下次再接再厉"
                r3.failTip = r4
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String r4 = "滑动视频 获得奖励"
                r3.slideTitle = r4
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String r4 = "完成滑动即可提前%1$s秒跳过视频播放"
                r3.slideTip = r4
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String r4 = "完成滑动!"
                r3.slideSuccessTitle = r4
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String[] r4 = com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewConst.DEFAULT_RANDOM_ANSWERS_CN
                java.util.List r4 = java.util.Arrays.asList(r4)
                r3.wrongAnswerList = r4
                goto L16c
            L97:
                boolean r6 = r3.equalsIgnoreCase(r0)
                if (r6 == 0) goto Ldf
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String r4 = "Which of the following ads is currently playing?"
                r3.title = r4
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String r4 = "Answer the question correctly to skip the video %1$ss early and get reward."
                r3.tips = r4
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String r4 = "Correct!"
                r3.successTitle = r4
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String r4 = "Congrats!You can skip the video %1$ss earlier and get the reward"
                r3.successTip = r4
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String r4 = "Wrong answer!"
                r3.failTitle = r4
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String r4 = "Try again next time"
                r3.failTip = r4
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String r4 = "Scroll the video to get reward"
                r3.slideTitle = r4
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String r4 = "Scroll the video to skip the video %1$ss early."
                r3.slideTip = r4
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String r4 = "Finish scrolling!"
                r3.slideSuccessTitle = r4
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String[] r4 = com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewConst.DEFAULT_RANDOM_ANSWERS_EN
                java.util.List r4 = java.util.Arrays.asList(r4)
                r3.wrongAnswerList = r4
                goto L16c
            Ldf:
                boolean r5 = r3.equalsIgnoreCase(r5)
                if (r5 == 0) goto L126
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String r4 = "現在流れている広告はどれですか?"
                r3.title = r4
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String r4 = "質問に正しく答えますとビデオを%1$s秒早めにスキップできます。"
                r3.tips = r4
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String r4 = "正解です!"
                r3.successTitle = r4
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String r4 = "おめでとう！ビデオ%1$s秒を早くスキップしてリワードを得ることができます。"
                r3.successTip = r4
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String r4 = "間違えました！"
                r3.failTitle = r4
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String r4 = "今度また挑戦してみてください"
                r3.failTip = r4
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String r4 = "動画をスクロールしてリワードを獲得しましょう"
                r3.slideTitle = r4
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String r4 = "スクロールしますとビデオを%1$s秒早めにスキップできます。"
                r3.slideTip = r4
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String r4 = "スクロールㅈ完了！"
                r3.slideSuccessTitle = r4
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String[] r4 = com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewConst.DEFAULT_RANDOM_ANSWERS_JP
                java.util.List r4 = java.util.Arrays.asList(r4)
                r3.wrongAnswerList = r4
                goto L16c
            L126:
                boolean r3 = r3.equalsIgnoreCase(r4)
                if (r3 == 0) goto L16c
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String r4 = "지금  재생 중인 광고는 어느것입니까?"
                r3.title = r4
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String r4 = "정답을 올리면 비디오를 %1$s초 일찍 건너뛸 수 있습니다."
                r3.tips = r4
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String r4 = "정답입니다！"
                r3.successTitle = r4
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String r4 = "축하합니다! 비디오 %1$s초를  일찍 건너뛰고 보상을 받을 수 있습니다."
                r3.successTip = r4
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String r4 = "틀렸습니다！"
                r3.failTitle = r4
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String r4 = "다음에 다시 도전해보세요"
                r3.failTip = r4
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String r4 = "비디오를 스크롤해서 보상을 받으세요"
                r3.slideTitle = r4
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String r4 = "스크롤하시면 비디오를 %1$s초 일찍 건너뛸 수 있습니다."
                r3.slideTip = r4
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String r4 = "스크롤 완성!"
                r3.slideSuccessTitle = r4
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r3 = r2.a
                java.lang.String[] r4 = com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewConst.DEFAULT_RANDOM_ANSWERS_KR
                java.util.List r4 = java.util.Arrays.asList(r4)
                r3.wrongAnswerList = r4
            L16c:
                return
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters build() {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                return r0
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setAutoDismissTime(int r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.autoDismissTime = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setBehaviourListener(com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewBehaviourListener r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.behaviourListener = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setButtonBackgroundDarkColor(int r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.buttonBackgroundDarkColor = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setButtonBackgroundLightColor(int r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.buttonBackgroundLightColor = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setButtonTextDarkColor(int r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.buttonTextDarkColor = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setButtonTextLightColor(int r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.buttonTextLightColor = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setCanClickMaskArea(boolean r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.canClickMaskArea = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setContainerBackgroundColor(int r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.containerBackgroundColor = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setFailTip(java.lang.String r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.failTip = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setFailTipTextColor(int r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.failTipTextColor = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setFailTitle(java.lang.String r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.failTitle = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setFailTitleGradientEndColor(int r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.failTitleGradientEndColor = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setFailTitleGradientStartColor(int r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.failTitleGradientStartColor = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setFailTitleShadowColor(int r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.failTitleShadowColor = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setFailTitleShadowDx(float r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.failTitleShadowDx = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setFailTitleShadowDy(float r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.failTitleShadowDy = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setFailTitleShadowRadius(float r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.failTitleShadowRadius = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setFailTitleTextSize(int r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.failTitleTextSize = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setReduceTime(int r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.reduceTime = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setRightAnswerList(java.util.ArrayList<java.lang.String> r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.rightAnswerList = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setSlideSuccessTitle(java.lang.String r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.slideSuccessTitle = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setSlideTip(java.lang.String r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.slideTip = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setSlideTitle(java.lang.String r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.slideTitle = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setSuccessTip(java.lang.String r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.successTip = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setSuccessTipTextColor(int r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.successTipTextColor = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setSuccessTitle(java.lang.String r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.successTitle = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setSuccessTitleGradientEndColor(int r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.successTitleGradientEndColor = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setSuccessTitleGradientStartColor(int r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.successTitleGradientStartColor = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setSuccessTitleShadowColor(int r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.successTitleShadowColor = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setSuccessTitleShadowDx(float r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.successTitleShadowDx = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setSuccessTitleShadowDy(float r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.successTitleShadowDy = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setSuccessTitleShadowRadius(float r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.successTitleShadowRadius = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setSuccessTitleTextSize(int r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.successTitleTextSize = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setTipTextColor(int r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.tipTextColor = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setTips(java.lang.String r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.tips = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setTitle(java.lang.String r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.title = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setTitleTextColor(int r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.titleTextColor = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setViewBackLayerBottomColor(int r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.viewBackLayerBottomColor = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setViewBackLayerTopColor(int r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.viewBackLayerTopColor = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setViewForegroundBottomColor(int r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.viewForegroundBottomColor = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setViewForegroundTopColor(int r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.viewForegroundTopColor = r2
                return r1
        }

        public com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder setWrongAnswerList(java.util.ArrayList<java.lang.String> r2) {
                r1 = this;
                com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters r0 = r1.a
                r0.wrongAnswerList = r2
                return r1
        }
    }

    public AcquireRewardPopViewParameters() {
            r5 = this;
            r5.<init>()
            r0 = 5
            r5.autoDismissTime = r0
            r0 = 0
            r5.reduceTime = r0
            r0 = 1
            r5.canClickMaskArea = r0
            r0 = -15750(0xffffffffffffc27a, float:NaN)
            r5.viewBackLayerTopColor = r0
            r0 = -27861(0xffffffffffff932b, float:NaN)
            r5.viewBackLayerBottomColor = r0
            r0 = -1054(0xfffffffffffffbe2, float:NaN)
            r5.viewForegroundTopColor = r0
            r0 = -8011(0xffffffffffffe0b5, float:NaN)
            r5.viewForegroundBottomColor = r0
            r0 = -29952(0xffffffffffff8b00, float:NaN)
            r5.buttonBackgroundLightColor = r0
            r0 = 871331329(0x33ef7601, float:1.11507696E-7)
            r5.buttonBackgroundDarkColor = r0
            r0 = -1741031(0xffffffffffe56f19, float:NaN)
            r5.titleTextColor = r0
            r0 = -7772596(0xffffffffff89664c, float:NaN)
            r5.tipTextColor = r0
            r0 = -1
            r5.buttonTextLightColor = r0
            r1 = -2988288(0xffffffffffd26700, float:NaN)
            r5.buttonTextDarkColor = r1
            r5.successTipTextColor = r0
            r5.failTipTextColor = r0
            r1 = -939524096(0xffffffffc8000000, float:-131072.0)
            r5.containerBackgroundColor = r1
            r1 = -1043(0xfffffffffffffbed, float:NaN)
            r5.successTitleGradientStartColor = r1
            r1 = -17041(0xffffffffffffbd6f, float:NaN)
            r5.successTitleGradientEndColor = r1
            r1 = -1280767(0xffffffffffec7501, float:NaN)
            r5.successTitleShadowColor = r1
            r1 = 40
            r5.successTitleTextSize = r1
            r2 = 1077936128(0x40400000, float:3.0)
            r5.successTitleShadowRadius = r2
            r3 = 1069547520(0x3fc00000, float:1.5)
            r5.successTitleShadowDx = r3
            r4 = 1072064102(0x3fe66666, float:1.8)
            r5.successTitleShadowDy = r4
            r5.failTitleGradientStartColor = r0
            r0 = -7640251(0xffffffffff8b6b45, float:NaN)
            r5.failTitleGradientEndColor = r0
            r0 = -12898009(0xffffffffff3b3127, float:-2.4882085E38)
            r5.failTitleShadowColor = r0
            r5.failTitleTextSize = r1
            r5.failTitleShadowRadius = r2
            r5.failTitleShadowDx = r3
            r5.failTitleShadowDy = r4
            return
    }

    public static com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters.Builder builder(java.lang.String r1, java.lang.String r2, int r3, java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Lf
            java.lang.String r1 = "AcquireRewardPopViewParameters"
            java.lang.String r2 = "Unit id must not null."
            com.mbridge.msdk.foundation.tools.z.d(r1, r2)
            r1 = 0
            return r1
        Lf:
            if (r3 != 0) goto L12
            r3 = 1
        L12:
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L1a
            java.lang.String r4 = "EN"
        L1a:
            com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters$Builder r0 = new com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters$Builder
            r0.<init>(r1, r2, r3, r4)
            return r0
    }
}
