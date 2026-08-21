package com.tkay.core.api;

public class TYAdConst {
    public static final int AD_CHOICES_PLACEMENT_BOTTOM_LEFT = 3;
    public static final int AD_CHOICES_PLACEMENT_BOTTOM_RIGHT = 2;
    public static final int AD_CHOICES_PLACEMENT_INVISIBLE = 4;
    public static final int AD_CHOICES_PLACEMENT_TOP_LEFT = 0;
    public static final int AD_CHOICES_PLACEMENT_TOP_RIGHT = 1;
    public static final java.lang.String AD_SUPPORT_TYPE_ARRAY = "[1]";
    public static final int ORIENTATION_HORIZONTAL = 2;
    public static final int ORIENTATION_VERTICAL = 1;

    public static class ATDevFrameworkType {
        public static final java.lang.String ADOBIE_AIR = "7";
        public static final java.lang.String COCOS_2DX = "3";
        public static final java.lang.String COCOS_CREATOR = "4";
        public static final java.lang.String FLUTTER = "6";
        public static final java.lang.String NATIVE = "1";
        public static final java.lang.String REACT_NATIVE = "5";
        public static final java.lang.String UNITY = "2";

        public ATDevFrameworkType() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class ATMixedFormatAdType {
        public static final int BANNER = 2;
        public static final int DEFAULT = -1;
        public static final int INTERSTITIAL = 3;
        public static final int NATIVE = 0;
        public static final int REWARDED_VIDEO = 1;
        public static final int SPLASH = 4;

        public ATMixedFormatAdType() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public class BIDDING_TYPE {
        public static final java.lang.String BIDDING_LOSS_WITH_BIDDING_TIMEOUT = "2";
        public static final java.lang.String BIDDING_LOSS_WITH_EXPIRE = "5";
        public static final java.lang.String BIDDING_LOSS_WITH_EXPIRE_SIGMOB = "2002";
        public static final java.lang.String BIDDING_LOSS_WITH_LOW_PRICE_IN_HB = "102";
        public static final java.lang.String BIDDING_LOSS_WITH_LOW_PRICE_IN_NORMAL = "103";
        final com.tkay.core.api.TYAdConst this$0;

        public BIDDING_TYPE(com.tkay.core.api.TYAdConst r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }
    }

    public enum CURRENCY extends java.lang.Enum<com.tkay.core.api.TYAdConst.CURRENCY> {
        private static final com.tkay.core.api.TYAdConst.CURRENCY[] $VALUES = null;
        public static final com.tkay.core.api.TYAdConst.CURRENCY RMB = null;
        public static final com.tkay.core.api.TYAdConst.CURRENCY RMB_CENT = null;
        public static final com.tkay.core.api.TYAdConst.CURRENCY USD = null;

        static {
                com.tkay.core.api.TYAdConst$CURRENCY r0 = new com.tkay.core.api.TYAdConst$CURRENCY
                r1 = 0
                java.lang.String r2 = "RMB"
                r0.<init>(r2, r1)
                com.tkay.core.api.TYAdConst.CURRENCY.RMB = r0
                com.tkay.core.api.TYAdConst$CURRENCY r0 = new com.tkay.core.api.TYAdConst$CURRENCY
                r2 = 1
                java.lang.String r3 = "RMB_CENT"
                r0.<init>(r3, r2)
                com.tkay.core.api.TYAdConst.CURRENCY.RMB_CENT = r0
                com.tkay.core.api.TYAdConst$CURRENCY r0 = new com.tkay.core.api.TYAdConst$CURRENCY
                r3 = 2
                java.lang.String r4 = "USD"
                r0.<init>(r4, r3)
                com.tkay.core.api.TYAdConst.CURRENCY.USD = r0
                r4 = 3
                com.tkay.core.api.TYAdConst$CURRENCY[] r4 = new com.tkay.core.api.TYAdConst.CURRENCY[r4]
                com.tkay.core.api.TYAdConst$CURRENCY r5 = com.tkay.core.api.TYAdConst.CURRENCY.RMB
                r4[r1] = r5
                com.tkay.core.api.TYAdConst$CURRENCY r1 = com.tkay.core.api.TYAdConst.CURRENCY.RMB_CENT
                r4[r2] = r1
                r4[r3] = r0
                com.tkay.core.api.TYAdConst.CURRENCY.$VALUES = r4
                return
        }

        CURRENCY(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.tkay.core.api.TYAdConst.CURRENCY valueOf(java.lang.String r1) {
                java.lang.Class<com.tkay.core.api.TYAdConst$CURRENCY> r0 = com.tkay.core.api.TYAdConst.CURRENCY.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.tkay.core.api.TYAdConst$CURRENCY r1 = (com.tkay.core.api.TYAdConst.CURRENCY) r1
                return r1
        }

        public static com.tkay.core.api.TYAdConst.CURRENCY[] values() {
                com.tkay.core.api.TYAdConst$CURRENCY[] r0 = com.tkay.core.api.TYAdConst.CURRENCY.$VALUES
                java.lang.Object r0 = r0.clone()
                com.tkay.core.api.TYAdConst$CURRENCY[] r0 = (com.tkay.core.api.TYAdConst.CURRENCY[]) r0
                return r0
        }
    }

    public static class DISMISS_TYPE {
        public static final int CLICKAD = 4;
        public static final int NORMAL = 1;
        public static final int SHOWFAILED = 99;
        public static final int SKIP = 2;
        public static final int TIMEOVER = 3;
        public static final int UNKNOWN = 0;

        public DISMISS_TYPE() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class KEY {
        public static final java.lang.String AD_CHOICES_PLACEMENT = "ad_choices_placement";
        public static final java.lang.String AD_CLICK_CONFIRM_STATUS = "ad_click_confirm_status";
        public static final java.lang.String AD_HEIGHT = "key_height";
        public static final java.lang.String AD_IS_SUPPORT_DEEP_LINK = "ad_is_support_deep_link";
        public static final java.lang.String AD_ORIENTATION = "ad_orientation";
        public static final java.lang.String AD_SOUND = "ad_sound";
        public static final java.lang.String AD_WIDTH = "key_width";
        public static final java.lang.String APP_LOGO_ID = "app_logo_id";
        public static final java.lang.String APP_NAME = "app_name";
        public static final java.lang.String CP_LOAD_MODE = "cp_pre_md";
        public static final java.lang.String CP_PLACEMENT_ID = "cp_placement_id";
        public static final java.lang.String REWARD_AMOUNT = "reward_amount";
        public static final java.lang.String REWARD_NAME = "reward_name";
        public static final java.lang.String START_APP_PRIMARY_IMAGE_SIZE = "start_app_primary_image_size";
        public static final java.lang.String START_APP_SECONDARY_IMAGE_SIZE = "start_app_secondary_image_size";
        public static final java.lang.String USER_CUSTOM_DATA = "user_custom_data";
        public static final java.lang.String USER_ID = "user_id";
        public static final java.lang.String WECHAT_APPID = "wechat_app_id";

        public KEY() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class NETWORK_CUSTOM_KEY {
        public static final java.lang.String CREATIVE_ID = "creative_id";
        public static final java.lang.String DSP_ID = "dsp_id";
        public static final java.lang.String IS_DEEPLINK_OFFER = "is_deeplink";
        public static final java.lang.String NETWORK_BIDDING_TYPE = "bidding_type";
        public static final java.lang.String NETWORK_ECPM = "network_ecpm";
        public static final java.lang.String NETWORK_ID = "network_id";
        public static final java.lang.String NETWORK_NAME = "network_name";
        public static final java.lang.String NETWORK_REQUEST_ID = "request_id";
        public static final java.lang.String NETWORK_UNIT_ID = "network_unit_id";
        public static final java.lang.String OFFER_ID = "offer_id";

        public NETWORK_CUSTOM_KEY() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class NETWORK_REQUEST_PARAMS_KEY {
        public static final java.lang.String ACCOUNT_ID = "account_id";
        public static final java.lang.String ADP_ACCEPT_TYPE = "adp_accept_type";
        public static final java.lang.String AD_HEIGHT = "ad_height";
        public static final java.lang.String AD_SOURCE_ID = "ad_source_id";
        public static final java.lang.String AD_WIDTH = "ad_width";
        public static final java.lang.String APP_ID = "app_id";
        public static final java.lang.String APP_KEY = "app_key";
        public static final java.lang.String BANNER_SIZE = "size";
        public static final java.lang.String BIDDING_FLOOR = "bidfloor";
        public static final java.lang.String BID_FLOOR = "bid_floor";
        public static final java.lang.String BID_REQUEST_INFO = "bid_info";
        public static final java.lang.String BID_TOKEN = "bid_token";
        public static final java.lang.String BUYERUID = "buyeruid";
        public static final java.lang.String CUSTOM_INHOUSE_BID_RESULT = "custom_inhouse_bid_result";
        public static final java.lang.String DIRECTLY_AD_SOURCEIDS = "unit_ids";
        public static final java.lang.String DIRECTLY_DA_CREATIVE_CLICK = "c_cl";
        public static final java.lang.String DIRECTLY_DA_CREATIVE_IMPRESSION = "c_im";
        public static final java.lang.String DIRECTLY_DA_OFFER_CLICK = "o_cl";
        public static final java.lang.String DIRECTLY_DA_OFFER_IMPRESSION = "o_im";
        public static final java.lang.String EXCLUDE_OFFER = "ecpoffer";
        public static final java.lang.String FORMAT = "ad_format";
        public static final java.lang.String GET_OFFER = "get_offer";
        public static final java.lang.String INSTANCE_ID = "instance_id";
        public static final java.lang.String NETWORK_SDK_VERSION = "display_manager_ver";
        public static final java.lang.String NW_FIRM_ID = "nw_firm_id";
        public static final java.lang.String SDK_INFO = "sdk_info";
        public static final java.lang.String SUPPORT_TEMPLATE_VERSION = "tpl_ver";
        public static final java.lang.String UNIT_ID = "unit_id";
        public static final java.lang.String UNIT_TYPE = "unit_type";

        public NETWORK_REQUEST_PARAMS_KEY() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public class PRIVACY {
        public static final int PERSIONALIZED_ALLOW_STATUS = 1;
        public static final int PERSIONALIZED_LIMIT_STATUS = 2;
        final com.tkay.core.api.TYAdConst this$0;

        public PRIVACY(com.tkay.core.api.TYAdConst r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }
    }

    public static class REWARD_EXTRA_REPLACE_HODLER_KEY {
        public static final java.lang.String NETWORK_PLACEMENT_ID_HOLDER_NAME = "{network_placement_id}";

        public REWARD_EXTRA_REPLACE_HODLER_KEY() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class START_APP_IMAGE_SIZE {
        public static final int SIZE_100x100 = 1;
        public static final int SIZE_1200x628 = 4;
        public static final int SIZE_150x150 = 2;
        public static final int SIZE_340x340 = 3;
        public static final int SIZE_72x72 = 0;

        public START_APP_IMAGE_SIZE() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public TYAdConst() {
            r0 = this;
            r0.<init>()
            return
    }
}
