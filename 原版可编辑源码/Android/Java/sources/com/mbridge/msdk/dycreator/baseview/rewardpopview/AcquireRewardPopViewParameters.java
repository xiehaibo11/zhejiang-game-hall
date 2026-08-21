package com.mbridge.msdk.dycreator.baseview.rewardpopview;

import android.text.TextUtils;
import com.mbridge.msdk.foundation.tools.z;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class AcquireRewardPopViewParameters {
    public AcquireRewardPopViewBehaviourListener behaviourListener;
    public String failTip;
    public String failTitle;
    public String language;
    public String placementId;
    public List<String> rightAnswerList;
    public String slideSuccessTitle;
    public String slideTip;
    public String slideTitle;
    public String successTip;
    public String successTitle;
    public String tips;
    public String title;
    public String unitId;
    public int viewType;
    public List<String> wrongAnswerList;
    public int autoDismissTime = 5;
    public int reduceTime = 0;
    public boolean canClickMaskArea = true;
    public int viewBackLayerTopColor = AcquireRewardPopViewConst.DEFAULT_COLOR_FFC27A;
    public int viewBackLayerBottomColor = AcquireRewardPopViewConst.DEFAULT_COLOR_FF932B;
    public int viewForegroundTopColor = AcquireRewardPopViewConst.DEFAULT_COLOR_FFFBE2;
    public int viewForegroundBottomColor = AcquireRewardPopViewConst.DEFAULT_COLOR_FFE0B5;
    public int buttonBackgroundLightColor = AcquireRewardPopViewConst.DEFAULT_COLOR_FF8B00;
    public int buttonBackgroundDarkColor = AcquireRewardPopViewConst.DEFAULT_COLOR_33EF7601;
    public int titleTextColor = AcquireRewardPopViewConst.DEFAULT_COLOR_E56F19;
    public int tipTextColor = AcquireRewardPopViewConst.DEFAULT_COLOR_89664C;
    public int buttonTextLightColor = -1;
    public int buttonTextDarkColor = AcquireRewardPopViewConst.DEFAULT_COLOR_D26700;
    public int successTipTextColor = -1;
    public int failTipTextColor = -1;
    public int containerBackgroundColor = AcquireRewardPopViewConst.DEFAULT_COLOR_50000000;
    public int successTitleGradientStartColor = AcquireRewardPopViewConst.DEFAULT_COLOR_FFFBED;
    public int successTitleGradientEndColor = AcquireRewardPopViewConst.DEFAULT_COLOR_FFBD6F;
    public int successTitleShadowColor = AcquireRewardPopViewConst.DEFAULT_COLOR_EC7501;
    public int successTitleTextSize = 40;
    public float successTitleShadowRadius = 3.0f;
    public float successTitleShadowDx = 1.5f;
    public float successTitleShadowDy = 1.8f;
    public int failTitleGradientStartColor = -1;
    public int failTitleGradientEndColor = AcquireRewardPopViewConst.DEFAULT_COLOR_8B6B45;
    public int failTitleShadowColor = AcquireRewardPopViewConst.DEFAULT_COLOR_3B3127;
    public int failTitleTextSize = 40;
    public float failTitleShadowRadius = 3.0f;
    public float failTitleShadowDx = 1.5f;
    public float failTitleShadowDy = 1.8f;

    public static Builder builder(String str, String str2, int i, String str3) {
        if (TextUtils.isEmpty(str2)) {
            z.d("AcquireRewardPopViewParameters", "Unit id must not null.");
            return null;
        }
        if (i == 0) {
            i = 1;
        }
        if (TextUtils.isEmpty(str3)) {
            str3 = "EN";
        }
        return new Builder(str, str2, i, str3);
    }

    public static class Builder {
        private AcquireRewardPopViewParameters a;

        /* JADX WARN: Removed duplicated region for block: B:17:0x004e  */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public Builder(String str, String str2, int i, String str3) {
            String str4;
            AcquireRewardPopViewParameters acquireRewardPopViewParameters = new AcquireRewardPopViewParameters();
            this.a = acquireRewardPopViewParameters;
            acquireRewardPopViewParameters.placementId = str;
            this.a.unitId = str2;
            this.a.viewType = i;
            this.a.language = str3;
            if (!TextUtils.isEmpty(str3)) {
                if (str3.equalsIgnoreCase("CN")) {
                    str4 = "ZH";
                } else if (!str3.equalsIgnoreCase("UK")) {
                    if (str3.equalsIgnoreCase("JP")) {
                        str4 = "JA";
                    } else {
                        str4 = str3.equalsIgnoreCase("KR") ? "KO" : "EN";
                    }
                }
            }
            if (str4.equalsIgnoreCase("ZH")) {
                this.a.title = AcquireRewardPopViewConst.DEFAULT_QUESTION_TITLE_TEXT_CN;
                this.a.tips = AcquireRewardPopViewConst.DEFAULT_QUESTION_TIP_TEXT_CN;
                this.a.successTitle = AcquireRewardPopViewConst.DEFAULT_SUCCESS_TITLE_TEXT_CN;
                this.a.successTip = AcquireRewardPopViewConst.DEFAULT_SUCCESS_TIP_TEXT_CN;
                this.a.failTitle = AcquireRewardPopViewConst.DEFAULT_FAIL_TITLE_TEXT_CN;
                this.a.failTip = AcquireRewardPopViewConst.DEFAULT_FAIL_TIP_TEXT_CN;
                this.a.slideTitle = AcquireRewardPopViewConst.DEFAULT_SLIDE_TITLE_TEXT_CN;
                this.a.slideTip = AcquireRewardPopViewConst.DEFAULT_SLIDE_TIP_TEXT_CN;
                this.a.slideSuccessTitle = AcquireRewardPopViewConst.DEFAULT_SLIDE_SUCCESS_TEXT_CN;
                this.a.wrongAnswerList = Arrays.asList(AcquireRewardPopViewConst.DEFAULT_RANDOM_ANSWERS_CN);
                return;
            }
            if (str4.equalsIgnoreCase("EN")) {
                this.a.title = AcquireRewardPopViewConst.DEFAULT_QUESTION_TITLE_TEXT_EN;
                this.a.tips = AcquireRewardPopViewConst.DEFAULT_QUESTION_TIP_TEXT_EN;
                this.a.successTitle = AcquireRewardPopViewConst.DEFAULT_SUCCESS_TITLE_TEXT_EN;
                this.a.successTip = AcquireRewardPopViewConst.DEFAULT_SUCCESS_TIP_TEXT_EN;
                this.a.failTitle = AcquireRewardPopViewConst.DEFAULT_FAIL_TITLE_TEXT_EN;
                this.a.failTip = AcquireRewardPopViewConst.DEFAULT_FAIL_TIP_TEXT_EN;
                this.a.slideTitle = AcquireRewardPopViewConst.DEFAULT_SLIDE_TITLE_TEXT_EN;
                this.a.slideTip = AcquireRewardPopViewConst.DEFAULT_SLIDE_TIP_TEXT_EN;
                this.a.slideSuccessTitle = AcquireRewardPopViewConst.DEFAULT_SLIDE_SUCCESS_TEXT_EN;
                this.a.wrongAnswerList = Arrays.asList(AcquireRewardPopViewConst.DEFAULT_RANDOM_ANSWERS_EN);
                return;
            }
            if (str4.equalsIgnoreCase("JA")) {
                this.a.title = AcquireRewardPopViewConst.DEFAULT_QUESTION_TITLE_TEXT_JP;
                this.a.tips = AcquireRewardPopViewConst.DEFAULT_QUESTION_TIP_TEXT_JP;
                this.a.successTitle = AcquireRewardPopViewConst.DEFAULT_SUCCESS_TITLE_TEXT_JP;
                this.a.successTip = AcquireRewardPopViewConst.DEFAULT_SUCCESS_TIP_TEXT_JP;
                this.a.failTitle = AcquireRewardPopViewConst.DEFAULT_FAIL_TITLE_TEXT_JP;
                this.a.failTip = AcquireRewardPopViewConst.DEFAULT_FAIL_TIP_TEXT_JP;
                this.a.slideTitle = AcquireRewardPopViewConst.DEFAULT_SLIDE_TITLE_TEXT_JP;
                this.a.slideTip = AcquireRewardPopViewConst.DEFAULT_SLIDE_TIP_TEXT_JP;
                this.a.slideSuccessTitle = AcquireRewardPopViewConst.DEFAULT_SLIDE_SUCCESS_TEXT_JP;
                this.a.wrongAnswerList = Arrays.asList(AcquireRewardPopViewConst.DEFAULT_RANDOM_ANSWERS_JP);
                return;
            }
            if (str4.equalsIgnoreCase("KO")) {
                this.a.title = AcquireRewardPopViewConst.DEFAULT_QUESTION_TITLE_TEXT_KR;
                this.a.tips = AcquireRewardPopViewConst.DEFAULT_QUESTION_TIP_TEXT_KR;
                this.a.successTitle = AcquireRewardPopViewConst.DEFAULT_SUCCESS_TITLE_TEXT_KR;
                this.a.successTip = AcquireRewardPopViewConst.DEFAULT_SUCCESS_TIP_TEXT_KR;
                this.a.failTitle = AcquireRewardPopViewConst.DEFAULT_FAIL_TITLE_TEXT_KR;
                this.a.failTip = AcquireRewardPopViewConst.DEFAULT_FAIL_TIP_TEXT_KR;
                this.a.slideTitle = AcquireRewardPopViewConst.DEFAULT_SLIDE_TITLE_TEXT_KR;
                this.a.slideTip = AcquireRewardPopViewConst.DEFAULT_SLIDE_TIP_TEXT_KR;
                this.a.slideSuccessTitle = AcquireRewardPopViewConst.DEFAULT_SLIDE_SUCCESS_TEXT_KR;
                this.a.wrongAnswerList = Arrays.asList(AcquireRewardPopViewConst.DEFAULT_RANDOM_ANSWERS_KR);
            }
        }

        public Builder setAutoDismissTime(int i) {
            this.a.autoDismissTime = i;
            return this;
        }

        public Builder setReduceTime(int i) {
            this.a.reduceTime = i;
            return this;
        }

        public Builder setCanClickMaskArea(boolean z) {
            this.a.canClickMaskArea = z;
            return this;
        }

        public Builder setTitle(String str) {
            this.a.title = str;
            return this;
        }

        public Builder setTips(String str) {
            this.a.tips = str;
            return this;
        }

        public Builder setSuccessTitle(String str) {
            this.a.successTitle = str;
            return this;
        }

        public Builder setSuccessTip(String str) {
            this.a.successTip = str;
            return this;
        }

        public Builder setFailTitle(String str) {
            this.a.failTitle = str;
            return this;
        }

        public Builder setFailTip(String str) {
            this.a.failTip = str;
            return this;
        }

        public Builder setSlideTitle(String str) {
            this.a.slideTitle = str;
            return this;
        }

        public Builder setSlideTip(String str) {
            this.a.slideTip = str;
            return this;
        }

        public Builder setSlideSuccessTitle(String str) {
            this.a.slideSuccessTitle = str;
            return this;
        }

        public Builder setRightAnswerList(ArrayList<String> arrayList) {
            this.a.rightAnswerList = arrayList;
            return this;
        }

        public Builder setWrongAnswerList(ArrayList<String> arrayList) {
            this.a.wrongAnswerList = arrayList;
            return this;
        }

        public Builder setViewBackLayerTopColor(int i) {
            this.a.viewBackLayerTopColor = i;
            return this;
        }

        public Builder setViewBackLayerBottomColor(int i) {
            this.a.viewBackLayerBottomColor = i;
            return this;
        }

        public Builder setViewForegroundTopColor(int i) {
            this.a.viewForegroundTopColor = i;
            return this;
        }

        public Builder setViewForegroundBottomColor(int i) {
            this.a.viewForegroundBottomColor = i;
            return this;
        }

        public Builder setButtonBackgroundLightColor(int i) {
            this.a.buttonBackgroundLightColor = i;
            return this;
        }

        public Builder setButtonBackgroundDarkColor(int i) {
            this.a.buttonBackgroundDarkColor = i;
            return this;
        }

        public Builder setTitleTextColor(int i) {
            this.a.titleTextColor = i;
            return this;
        }

        public Builder setTipTextColor(int i) {
            this.a.tipTextColor = i;
            return this;
        }

        public Builder setButtonTextLightColor(int i) {
            this.a.buttonTextLightColor = i;
            return this;
        }

        public Builder setButtonTextDarkColor(int i) {
            this.a.buttonTextDarkColor = i;
            return this;
        }

        public Builder setSuccessTipTextColor(int i) {
            this.a.successTipTextColor = i;
            return this;
        }

        public Builder setFailTipTextColor(int i) {
            this.a.failTipTextColor = i;
            return this;
        }

        public Builder setContainerBackgroundColor(int i) {
            this.a.containerBackgroundColor = i;
            return this;
        }

        public Builder setSuccessTitleGradientStartColor(int i) {
            this.a.successTitleGradientStartColor = i;
            return this;
        }

        public Builder setSuccessTitleGradientEndColor(int i) {
            this.a.successTitleGradientEndColor = i;
            return this;
        }

        public Builder setSuccessTitleShadowColor(int i) {
            this.a.successTitleShadowColor = i;
            return this;
        }

        public Builder setSuccessTitleTextSize(int i) {
            this.a.successTitleTextSize = i;
            return this;
        }

        public Builder setSuccessTitleShadowRadius(float f) {
            this.a.successTitleShadowRadius = f;
            return this;
        }

        public Builder setSuccessTitleShadowDx(float f) {
            this.a.successTitleShadowDx = f;
            return this;
        }

        public Builder setSuccessTitleShadowDy(float f) {
            this.a.successTitleShadowDy = f;
            return this;
        }

        public Builder setFailTitleGradientStartColor(int i) {
            this.a.failTitleGradientStartColor = i;
            return this;
        }

        public Builder setFailTitleGradientEndColor(int i) {
            this.a.failTitleGradientEndColor = i;
            return this;
        }

        public Builder setFailTitleShadowColor(int i) {
            this.a.failTitleShadowColor = i;
            return this;
        }

        public Builder setFailTitleTextSize(int i) {
            this.a.failTitleTextSize = i;
            return this;
        }

        public Builder setFailTitleShadowRadius(float f) {
            this.a.failTitleShadowRadius = f;
            return this;
        }

        public Builder setFailTitleShadowDx(float f) {
            this.a.failTitleShadowDx = f;
            return this;
        }

        public Builder setFailTitleShadowDy(float f) {
            this.a.failTitleShadowDy = f;
            return this;
        }

        public Builder setBehaviourListener(AcquireRewardPopViewBehaviourListener acquireRewardPopViewBehaviourListener) {
            this.a.behaviourListener = acquireRewardPopViewBehaviourListener;
            return this;
        }

        public AcquireRewardPopViewParameters build() {
            return this.a;
        }
    }
}
