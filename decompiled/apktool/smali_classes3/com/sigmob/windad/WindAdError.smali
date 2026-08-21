.class public final enum Lcom/sigmob/windad/WindAdError;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/sigmob/windad/WindAdError;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum ERROR_AD_ERROR:Lcom/sigmob/windad/WindAdError;

.field public static final enum ERROR_AD_LOAD_FAIL_INTERVAL:Lcom/sigmob/windad/WindAdError;

.field public static final enum ERROR_AD_LOAD_FAIL_LOADING:Lcom/sigmob/windad/WindAdError;

.field public static final enum ERROR_LOAD_FILTER_FOR_ACTIVITY_ERROR:Lcom/sigmob/windad/WindAdError;

.field public static final enum ERROR_LOAD_FILTER_FOR_INSTALL_PERMISSION_ERROR:Lcom/sigmob/windad/WindAdError;

.field public static final enum ERROR_LOAD_FILTER_FOR_PROGUARD_ERROR:Lcom/sigmob/windad/WindAdError;

.field public static final enum ERROR_LOAD_FILTER_FOR_PROVIDER_ERROR:Lcom/sigmob/windad/WindAdError;

.field public static final enum ERROR_LOAD_FILTER_FOR_PROVIDER_XML_ERROR:Lcom/sigmob/windad/WindAdError;

.field public static final enum ERROR_OTHER:Lcom/sigmob/windad/WindAdError;

.field public static final enum ERROR_SIGMOB_ADCONTAINER_IS_NULL:Lcom/sigmob/windad/WindAdError;

.field public static final enum ERROR_SIGMOB_ADCONTAINER_NOT_VIEWGROUP:Lcom/sigmob/windad/WindAdError;

.field public static final enum ERROR_SIGMOB_AD_DB_INSERT:Lcom/sigmob/windad/WindAdError;

.field public static final enum ERROR_SIGMOB_AD_PLAY:Lcom/sigmob/windad/WindAdError;

.field public static final enum ERROR_SIGMOB_AD_PLAY_CHECK_FAIL:Lcom/sigmob/windad/WindAdError;

.field public static final enum ERROR_SIGMOB_AD_PLAY_HAS_PLAYING:Lcom/sigmob/windad/WindAdError;

.field public static final enum ERROR_SIGMOB_AD_TIME_OUT:Lcom/sigmob/windad/WindAdError;

.field public static final enum ERROR_SIGMOB_BID_TOKEN_IS_EMPTY:Lcom/sigmob/windad/WindAdError;

.field public static final enum ERROR_SIGMOB_FILE_DOWNLOAD:Lcom/sigmob/windad/WindAdError;

.field public static final enum ERROR_SIGMOB_FILE_MD5:Lcom/sigmob/windad/WindAdError;

.field public static final enum ERROR_SIGMOB_GDPR_DENIED:Lcom/sigmob/windad/WindAdError;

.field public static final enum ERROR_SIGMOB_INFORMATION_LOSE:Lcom/sigmob/windad/WindAdError;

.field public static final enum ERROR_SIGMOB_INIT_FAIL:Lcom/sigmob/windad/WindAdError;

.field public static final enum ERROR_SIGMOB_INSTALL_FAIL:Lcom/sigmob/windad/WindAdError;

.field public static final enum ERROR_SIGMOB_NETWORK:Lcom/sigmob/windad/WindAdError;

.field public static final enum ERROR_SIGMOB_NOT_INIT:Lcom/sigmob/windad/WindAdError;

.field public static final enum ERROR_SIGMOB_PLACEMENTID_EMPTY:Lcom/sigmob/windad/WindAdError;

.field public static final enum ERROR_SIGMOB_PLAY_VIDEO:Lcom/sigmob/windad/WindAdError;

.field public static final enum ERROR_SIGMOB_REQUEST:Lcom/sigmob/windad/WindAdError;

.field public static final enum ERROR_SIGMOB_SPLASH_NOT_READY:Lcom/sigmob/windad/WindAdError;

.field public static final enum ERROR_SIGMOB_SPLASH_TIMEOUT:Lcom/sigmob/windad/WindAdError;

.field public static final enum ERROR_SIGMOB_SPLASH_UNSUPPORT_ORIENTATION:Lcom/sigmob/windad/WindAdError;

.field public static final enum ERROR_SIGMOB_SPLASH_UNSUPPORT_RESOURCE:Lcom/sigmob/windad/WindAdError;

.field public static final enum ERROR_SPLASH_ADBLOCK:Lcom/sigmob/windad/WindAdError;

.field public static final enum MRAID_LOAD_ERROR:Lcom/sigmob/windad/WindAdError;

.field public static final enum RENDER_PROCESS_GONE_UNSPECIFIED:Lcom/sigmob/windad/WindAdError;

.field public static final enum RENDER_PROCESS_GONE_WITH_CRASH:Lcom/sigmob/windad/WindAdError;

.field public static final enum VIDEO_CACHE_ERROR:Lcom/sigmob/windad/WindAdError;

.field private static final synthetic b:[Lcom/sigmob/windad/WindAdError;


# instance fields
.field private a:I

.field private message:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 16

    new-instance v0, Lcom/sigmob/windad/WindAdError;

    const/4 v1, 0x0

    const-string v2, "ERROR_LOAD_FILTER_FOR_PROVIDER_ERROR"

    const v3, 0x92889

    const-string v4, "Provider\u58f0\u660e\u9519\u8bef,\u8bf7\u68c0\u67e5manifest\u6587\u4ef6"

    invoke-direct {v0, v2, v1, v3, v4}, Lcom/sigmob/windad/WindAdError;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_LOAD_FILTER_FOR_PROVIDER_ERROR:Lcom/sigmob/windad/WindAdError;

    new-instance v0, Lcom/sigmob/windad/WindAdError;

    const/4 v2, 0x1

    const-string v3, "ERROR_LOAD_FILTER_FOR_PROVIDER_XML_ERROR"

    const v4, 0x92888

    const-string v5, "Provider\u7684Xml\u914d\u7f6e\u9519\u8bef,\u8bf7\u68c0\u67e5Xml\u6587\u4ef6\u5185\u5bb9"

    invoke-direct {v0, v3, v2, v4, v5}, Lcom/sigmob/windad/WindAdError;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_LOAD_FILTER_FOR_PROVIDER_XML_ERROR:Lcom/sigmob/windad/WindAdError;

    new-instance v0, Lcom/sigmob/windad/WindAdError;

    const/4 v3, 0x2

    const-string v4, "ERROR_LOAD_FILTER_FOR_PROGUARD_ERROR"

    const v5, 0x9288a

    const-string v6, "SDK\u6df7\u6dc6\u914d\u7f6e\u9519\u8bef"

    invoke-direct {v0, v4, v3, v5, v6}, Lcom/sigmob/windad/WindAdError;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_LOAD_FILTER_FOR_PROGUARD_ERROR:Lcom/sigmob/windad/WindAdError;

    new-instance v0, Lcom/sigmob/windad/WindAdError;

    const/4 v4, 0x3

    const-string v5, "ERROR_LOAD_FILTER_FOR_ACTIVITY_ERROR"

    const v6, 0x9288b

    const-string v7, "AdActivity\u672a\u58f0\u660e,\u8bf7\u68c0\u67e5manifest\u6587\u4ef6"

    invoke-direct {v0, v5, v4, v6, v7}, Lcom/sigmob/windad/WindAdError;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_LOAD_FILTER_FOR_ACTIVITY_ERROR:Lcom/sigmob/windad/WindAdError;

    new-instance v0, Lcom/sigmob/windad/WindAdError;

    const/4 v5, 0x4

    const-string v6, "ERROR_LOAD_FILTER_FOR_INSTALL_PERMISSION_ERROR"

    const v7, 0x9288c

    const-string v8, " \u7f3a\u5c11REQUEST_INSTALL_PACKAGES,\u8bf7\u68c0\u67e5manifest\u6587\u4ef6"

    invoke-direct {v0, v6, v5, v7, v8}, Lcom/sigmob/windad/WindAdError;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_LOAD_FILTER_FOR_INSTALL_PERMISSION_ERROR:Lcom/sigmob/windad/WindAdError;

    new-instance v0, Lcom/sigmob/windad/WindAdError;

    const/4 v6, 0x5

    const-string v7, "ERROR_AD_LOAD_FAIL_LOADING"

    const v8, 0x94edc

    const-string v9, "\u5e7f\u544a\u6b63\u5728\u52a0\u8f7d\u4e2d\uff0c\u8bf7\u7a0d\u540e\u518d\u52a0\u8f7d"

    invoke-direct {v0, v7, v6, v8, v9}, Lcom/sigmob/windad/WindAdError;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_AD_LOAD_FAIL_LOADING:Lcom/sigmob/windad/WindAdError;

    new-instance v0, Lcom/sigmob/windad/WindAdError;

    const/4 v7, 0x6

    const-string v8, "ERROR_AD_LOAD_FAIL_INTERVAL"

    const v9, 0x94edd

    const-string v10, "\u5e7f\u544a\u52a0\u8f7d\u9891\u7e41\uff0c\u8bf7\u7a0d\u540e\u5728\u8bd5"

    invoke-direct {v0, v8, v7, v9, v10}, Lcom/sigmob/windad/WindAdError;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_AD_LOAD_FAIL_INTERVAL:Lcom/sigmob/windad/WindAdError;

    new-instance v0, Lcom/sigmob/windad/WindAdError;

    const/4 v8, 0x7

    const-string v9, "ERROR_SIGMOB_BID_TOKEN_IS_EMPTY"

    const v10, 0x928ec

    const-string v11, "BidToken is empty"

    invoke-direct {v0, v9, v8, v10, v11}, Lcom/sigmob/windad/WindAdError;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_BID_TOKEN_IS_EMPTY:Lcom/sigmob/windad/WindAdError;

    new-instance v0, Lcom/sigmob/windad/WindAdError;

    const/16 v9, 0x8

    const-string v10, "ERROR_SIGMOB_NETWORK"

    const v11, 0x92824

    const-string v12, "\u7f51\u7edc\u9519\u8bef"

    invoke-direct {v0, v10, v9, v11, v12}, Lcom/sigmob/windad/WindAdError;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_NETWORK:Lcom/sigmob/windad/WindAdError;

    new-instance v0, Lcom/sigmob/windad/WindAdError;

    const/16 v10, 0x9

    const-string v11, "ERROR_SIGMOB_REQUEST"

    const v12, 0x92825

    const-string v13, "\u5e7f\u544a\u8bf7\u6c42\u51fa\u9519"

    invoke-direct {v0, v11, v10, v12, v13}, Lcom/sigmob/windad/WindAdError;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_REQUEST:Lcom/sigmob/windad/WindAdError;

    new-instance v0, Lcom/sigmob/windad/WindAdError;

    const/16 v11, 0xa

    const-string v12, "ERROR_SIGMOB_FILE_DOWNLOAD"

    const v13, 0x92828

    const-string v14, "\u6587\u4ef6\u4e0b\u8f7d\u9519\u8bef"

    invoke-direct {v0, v12, v11, v13, v14}, Lcom/sigmob/windad/WindAdError;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_FILE_DOWNLOAD:Lcom/sigmob/windad/WindAdError;

    new-instance v0, Lcom/sigmob/windad/WindAdError;

    const/16 v12, 0xb

    const-string v13, "ERROR_SIGMOB_AD_TIME_OUT"

    const v14, 0x92829

    const-string v15, "\u4e0b\u8f7d\u5e7f\u544a\u8d85\u65f6"

    invoke-direct {v0, v13, v12, v14, v15}, Lcom/sigmob/windad/WindAdError;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_AD_TIME_OUT:Lcom/sigmob/windad/WindAdError;

    new-instance v0, Lcom/sigmob/windad/WindAdError;

    const/16 v13, 0xc

    const-string v14, "ERROR_SIGMOB_PLAY_VIDEO"

    const v15, 0x9282a

    const-string v12, "\u89c6\u9891\u64ad\u653e\u5931\u8d25"

    invoke-direct {v0, v14, v13, v15, v12}, Lcom/sigmob/windad/WindAdError;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_PLAY_VIDEO:Lcom/sigmob/windad/WindAdError;

    new-instance v0, Lcom/sigmob/windad/WindAdError;

    const/16 v12, 0xd

    const-string v14, "ERROR_SIGMOB_NOT_INIT"

    const v15, 0x92b44

    const-string v13, "SDK\u672a\u521d\u59cb\u5316"

    invoke-direct {v0, v14, v12, v15, v13}, Lcom/sigmob/windad/WindAdError;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_NOT_INIT:Lcom/sigmob/windad/WindAdError;

    new-instance v0, Lcom/sigmob/windad/WindAdError;

    const/16 v13, 0xe

    const-string v14, "ERROR_SIGMOB_PLACEMENTID_EMPTY"

    const v15, 0x92b45

    const-string v12, "\u5e7f\u544a\u4f4d\u4e3a\u7a7a"

    invoke-direct {v0, v14, v13, v15, v12}, Lcom/sigmob/windad/WindAdError;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_PLACEMENTID_EMPTY:Lcom/sigmob/windad/WindAdError;

    new-instance v0, Lcom/sigmob/windad/WindAdError;

    const/16 v12, 0xf

    const-string v14, "ERROR_SIGMOB_INSTALL_FAIL"

    const v15, 0x92b47

    const-string v13, "\u5b89\u88c5\u5931\u8d25"

    invoke-direct {v0, v14, v12, v15, v13}, Lcom/sigmob/windad/WindAdError;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_INSTALL_FAIL:Lcom/sigmob/windad/WindAdError;

    new-instance v0, Lcom/sigmob/windad/WindAdError;

    const/16 v13, 0x10

    const-string v14, "ERROR_SIGMOB_AD_DB_INSERT"

    const v15, 0x92b48

    const-string v12, "\u63d2\u5165\u6570\u636e\u5e93\u5931\u8d25"

    invoke-direct {v0, v14, v13, v15, v12}, Lcom/sigmob/windad/WindAdError;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_AD_DB_INSERT:Lcom/sigmob/windad/WindAdError;

    new-instance v0, Lcom/sigmob/windad/WindAdError;

    const/16 v12, 0x11

    const-string v14, "ERROR_SIGMOB_GDPR_DENIED"

    const v15, 0x92b49

    const-string v13, "GDPR \u672a\u6388\u6743"

    invoke-direct {v0, v14, v12, v15, v13}, Lcom/sigmob/windad/WindAdError;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_GDPR_DENIED:Lcom/sigmob/windad/WindAdError;

    new-instance v0, Lcom/sigmob/windad/WindAdError;

    const/16 v13, 0x12

    const-string v14, "ERROR_SIGMOB_INIT_FAIL"

    const v15, 0x92b4a

    const-string v12, "SDK \u521d\u59cb\u5316\u5931\u8d25"

    invoke-direct {v0, v14, v13, v15, v12}, Lcom/sigmob/windad/WindAdError;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_INIT_FAIL:Lcom/sigmob/windad/WindAdError;

    new-instance v0, Lcom/sigmob/windad/WindAdError;

    const/16 v12, 0x13

    const-string v14, "ERROR_SIGMOB_ADCONTAINER_IS_NULL"

    const v15, 0x92b4b

    const-string v13, "\u5e7f\u544a\u5bb9\u5668\u4e0d\u80fd\u4e3aNULL"

    invoke-direct {v0, v14, v12, v15, v13}, Lcom/sigmob/windad/WindAdError;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_ADCONTAINER_IS_NULL:Lcom/sigmob/windad/WindAdError;

    new-instance v0, Lcom/sigmob/windad/WindAdError;

    const/16 v13, 0x14

    const-string v14, "ERROR_SIGMOB_ADCONTAINER_NOT_VIEWGROUP"

    const v15, 0x92b4c

    const-string v12, "\u5e7f\u544a\u5bb9\u5668\u53ea\u5141\u8bb8\u4e3aViewGroup\u7c7b\u578b"

    invoke-direct {v0, v14, v13, v15, v12}, Lcom/sigmob/windad/WindAdError;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_ADCONTAINER_NOT_VIEWGROUP:Lcom/sigmob/windad/WindAdError;

    new-instance v0, Lcom/sigmob/windad/WindAdError;

    const/16 v12, 0x15

    const-string v14, "ERROR_OTHER"

    const v15, 0x92ba7

    const-string v13, ""

    invoke-direct {v0, v14, v12, v15, v13}, Lcom/sigmob/windad/WindAdError;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_OTHER:Lcom/sigmob/windad/WindAdError;

    new-instance v0, Lcom/sigmob/windad/WindAdError;

    const-string v13, "ERROR_SIGMOB_AD_PLAY"

    const/16 v14, 0x16

    const v15, 0x94ed2

    const-string v12, "\u6fc0\u52b1\u89c6\u9891\u64ad\u653e\u51fa\u9519"

    invoke-direct {v0, v13, v14, v15, v12}, Lcom/sigmob/windad/WindAdError;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_AD_PLAY:Lcom/sigmob/windad/WindAdError;

    new-instance v0, Lcom/sigmob/windad/WindAdError;

    const-string v12, "ERROR_SIGMOB_SPLASH_NOT_READY"

    const/16 v13, 0x17

    const v14, 0x94ed3

    const-string v15, "\u5f00\u5c4f\u5e7f\u544a\u672a\u51c6\u5907\u597d"

    invoke-direct {v0, v12, v13, v14, v15}, Lcom/sigmob/windad/WindAdError;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_SPLASH_NOT_READY:Lcom/sigmob/windad/WindAdError;

    new-instance v0, Lcom/sigmob/windad/WindAdError;

    const-string v12, "ERROR_SIGMOB_INFORMATION_LOSE"

    const/16 v13, 0x18

    const v14, 0x94ed4

    const-string v15, "server\u4e0b\u53d1\u7684\u5e7f\u544a\u4fe1\u606f\u7f3a\u5931\u5173\u952e\u4fe1\u606f"

    invoke-direct {v0, v12, v13, v14, v15}, Lcom/sigmob/windad/WindAdError;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_INFORMATION_LOSE:Lcom/sigmob/windad/WindAdError;

    new-instance v0, Lcom/sigmob/windad/WindAdError;

    const-string v12, "ERROR_SIGMOB_FILE_MD5"

    const/16 v13, 0x19

    const v14, 0x94ed5

    const-string v15, "\u4e0b\u8f7d\u7684\u6587\u4ef6\u6821\u9a8cmd5\u51fa\u9519"

    invoke-direct {v0, v12, v13, v14, v15}, Lcom/sigmob/windad/WindAdError;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_FILE_MD5:Lcom/sigmob/windad/WindAdError;

    new-instance v0, Lcom/sigmob/windad/WindAdError;

    const-string v12, "ERROR_SIGMOB_AD_PLAY_CHECK_FAIL"

    const/16 v13, 0x1a

    const v14, 0x94ed6

    const-string v15, "\u6fc0\u52b1\u89c6\u9891\u64ad\u63a5\u53e3\u68c0\u67e5\u51fa\u9519\uff08\u5e7f\u544a\u8fc7\u671f\u6216\u8005\u672aready)"

    invoke-direct {v0, v12, v13, v14, v15}, Lcom/sigmob/windad/WindAdError;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_AD_PLAY_CHECK_FAIL:Lcom/sigmob/windad/WindAdError;

    new-instance v0, Lcom/sigmob/windad/WindAdError;

    const-string v12, "ERROR_SIGMOB_AD_PLAY_HAS_PLAYING"

    const/16 v13, 0x1b

    const v14, 0x94ed7

    const-string v15, "\u6fc0\u52b1\u89c6\u9891\u64ad\u63a5\u53e3\u68c0\u67e5\u51fa\u9519\uff08\u6fc0\u52b1\u89c6\u9891\u5f53\u524d\u6709\u5e7f\u544a\u6b63\u5728\u64ad\u653e\u4e2d)"

    invoke-direct {v0, v12, v13, v14, v15}, Lcom/sigmob/windad/WindAdError;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_AD_PLAY_HAS_PLAYING:Lcom/sigmob/windad/WindAdError;

    new-instance v0, Lcom/sigmob/windad/WindAdError;

    const-string v12, "ERROR_SIGMOB_SPLASH_TIMEOUT"

    const/16 v13, 0x1c

    const v14, 0x975e1

    const-string v15, "\u5f00\u5c4f\u5e7f\u544a\u52a0\u8f7d\u8d85\u65f6"

    invoke-direct {v0, v12, v13, v14, v15}, Lcom/sigmob/windad/WindAdError;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_SPLASH_TIMEOUT:Lcom/sigmob/windad/WindAdError;

    new-instance v0, Lcom/sigmob/windad/WindAdError;

    const-string v12, "ERROR_SIGMOB_SPLASH_UNSUPPORT_ORIENTATION"

    const/16 v13, 0x1d

    const v14, 0x975e2

    const-string v15, "\u5f00\u5c4f\u5e7f\u544a\u4e0d\u652f\u6301\u5f53\u524d\u65b9\u5411"

    invoke-direct {v0, v12, v13, v14, v15}, Lcom/sigmob/windad/WindAdError;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_SPLASH_UNSUPPORT_ORIENTATION:Lcom/sigmob/windad/WindAdError;

    new-instance v0, Lcom/sigmob/windad/WindAdError;

    const-string v12, "ERROR_SIGMOB_SPLASH_UNSUPPORT_RESOURCE"

    const/16 v13, 0x1e

    const v14, 0x975e3

    const-string v15, "\u5f00\u5c4f\u5e7f\u544a\u4e0d\u652f\u6301\u7684\u8d44\u6e90\u7c7b\u578b"

    invoke-direct {v0, v12, v13, v14, v15}, Lcom/sigmob/windad/WindAdError;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_SPLASH_UNSUPPORT_RESOURCE:Lcom/sigmob/windad/WindAdError;

    new-instance v0, Lcom/sigmob/windad/WindAdError;

    const-string v12, "ERROR_SPLASH_ADBLOCK"

    const/16 v13, 0x1f

    const v14, 0x97964

    const-string v15, "AD BLOCK"

    invoke-direct {v0, v12, v13, v14, v15}, Lcom/sigmob/windad/WindAdError;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SPLASH_ADBLOCK:Lcom/sigmob/windad/WindAdError;

    new-instance v0, Lcom/sigmob/windad/WindAdError;

    const-string v12, "ERROR_AD_ERROR"

    const/16 v13, 0x20

    const-string v14, "AD ERROR"

    invoke-direct {v0, v12, v13, v1, v14}, Lcom/sigmob/windad/WindAdError;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_AD_ERROR:Lcom/sigmob/windad/WindAdError;

    new-instance v0, Lcom/sigmob/windad/WindAdError;

    const-string v12, "RENDER_PROCESS_GONE_WITH_CRASH"

    const/16 v13, 0x21

    const v14, 0x97965

    const-string v15, "RENDER PROCESS GONE WITH CRASH"

    invoke-direct {v0, v12, v13, v14, v15}, Lcom/sigmob/windad/WindAdError;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdError;->RENDER_PROCESS_GONE_WITH_CRASH:Lcom/sigmob/windad/WindAdError;

    new-instance v0, Lcom/sigmob/windad/WindAdError;

    const-string v12, "RENDER_PROCESS_GONE_UNSPECIFIED"

    const/16 v13, 0x22

    const v14, 0x97966

    const-string v15, "RENDER PROCESS GONE UNSPECIFIED"

    invoke-direct {v0, v12, v13, v14, v15}, Lcom/sigmob/windad/WindAdError;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdError;->RENDER_PROCESS_GONE_UNSPECIFIED:Lcom/sigmob/windad/WindAdError;

    new-instance v0, Lcom/sigmob/windad/WindAdError;

    const-string v12, "MRAID_LOAD_ERROR"

    const/16 v13, 0x23

    const v14, 0x97967

    const-string v15, "MRAID LOAD ERROR"

    invoke-direct {v0, v12, v13, v14, v15}, Lcom/sigmob/windad/WindAdError;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdError;->MRAID_LOAD_ERROR:Lcom/sigmob/windad/WindAdError;

    new-instance v0, Lcom/sigmob/windad/WindAdError;

    const-string v12, "VIDEO_CACHE_ERROR"

    const/16 v13, 0x24

    const v14, 0x97968

    const-string v15, "VIDEO CACHE ERROR"

    invoke-direct {v0, v12, v13, v14, v15}, Lcom/sigmob/windad/WindAdError;-><init>(Ljava/lang/String;IILjava/lang/String;)V

    sput-object v0, Lcom/sigmob/windad/WindAdError;->VIDEO_CACHE_ERROR:Lcom/sigmob/windad/WindAdError;

    const/16 v12, 0x25

    new-array v12, v12, [Lcom/sigmob/windad/WindAdError;

    sget-object v13, Lcom/sigmob/windad/WindAdError;->ERROR_LOAD_FILTER_FOR_PROVIDER_ERROR:Lcom/sigmob/windad/WindAdError;

    aput-object v13, v12, v1

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_LOAD_FILTER_FOR_PROVIDER_XML_ERROR:Lcom/sigmob/windad/WindAdError;

    aput-object v1, v12, v2

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_LOAD_FILTER_FOR_PROGUARD_ERROR:Lcom/sigmob/windad/WindAdError;

    aput-object v1, v12, v3

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_LOAD_FILTER_FOR_ACTIVITY_ERROR:Lcom/sigmob/windad/WindAdError;

    aput-object v1, v12, v4

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_LOAD_FILTER_FOR_INSTALL_PERMISSION_ERROR:Lcom/sigmob/windad/WindAdError;

    aput-object v1, v12, v5

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_AD_LOAD_FAIL_LOADING:Lcom/sigmob/windad/WindAdError;

    aput-object v1, v12, v6

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_AD_LOAD_FAIL_INTERVAL:Lcom/sigmob/windad/WindAdError;

    aput-object v1, v12, v7

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_BID_TOKEN_IS_EMPTY:Lcom/sigmob/windad/WindAdError;

    aput-object v1, v12, v8

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_NETWORK:Lcom/sigmob/windad/WindAdError;

    aput-object v1, v12, v9

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_REQUEST:Lcom/sigmob/windad/WindAdError;

    aput-object v1, v12, v10

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_FILE_DOWNLOAD:Lcom/sigmob/windad/WindAdError;

    aput-object v1, v12, v11

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_AD_TIME_OUT:Lcom/sigmob/windad/WindAdError;

    const/16 v2, 0xb

    aput-object v1, v12, v2

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_PLAY_VIDEO:Lcom/sigmob/windad/WindAdError;

    const/16 v2, 0xc

    aput-object v1, v12, v2

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_NOT_INIT:Lcom/sigmob/windad/WindAdError;

    const/16 v2, 0xd

    aput-object v1, v12, v2

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_PLACEMENTID_EMPTY:Lcom/sigmob/windad/WindAdError;

    const/16 v2, 0xe

    aput-object v1, v12, v2

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_INSTALL_FAIL:Lcom/sigmob/windad/WindAdError;

    const/16 v2, 0xf

    aput-object v1, v12, v2

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_AD_DB_INSERT:Lcom/sigmob/windad/WindAdError;

    const/16 v2, 0x10

    aput-object v1, v12, v2

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_GDPR_DENIED:Lcom/sigmob/windad/WindAdError;

    const/16 v2, 0x11

    aput-object v1, v12, v2

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_INIT_FAIL:Lcom/sigmob/windad/WindAdError;

    const/16 v2, 0x12

    aput-object v1, v12, v2

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_ADCONTAINER_IS_NULL:Lcom/sigmob/windad/WindAdError;

    const/16 v2, 0x13

    aput-object v1, v12, v2

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_ADCONTAINER_NOT_VIEWGROUP:Lcom/sigmob/windad/WindAdError;

    const/16 v2, 0x14

    aput-object v1, v12, v2

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_OTHER:Lcom/sigmob/windad/WindAdError;

    const/16 v2, 0x15

    aput-object v1, v12, v2

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_AD_PLAY:Lcom/sigmob/windad/WindAdError;

    const/16 v2, 0x16

    aput-object v1, v12, v2

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_SPLASH_NOT_READY:Lcom/sigmob/windad/WindAdError;

    const/16 v2, 0x17

    aput-object v1, v12, v2

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_INFORMATION_LOSE:Lcom/sigmob/windad/WindAdError;

    const/16 v2, 0x18

    aput-object v1, v12, v2

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_FILE_MD5:Lcom/sigmob/windad/WindAdError;

    const/16 v2, 0x19

    aput-object v1, v12, v2

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_AD_PLAY_CHECK_FAIL:Lcom/sigmob/windad/WindAdError;

    const/16 v2, 0x1a

    aput-object v1, v12, v2

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_AD_PLAY_HAS_PLAYING:Lcom/sigmob/windad/WindAdError;

    const/16 v2, 0x1b

    aput-object v1, v12, v2

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_SPLASH_TIMEOUT:Lcom/sigmob/windad/WindAdError;

    const/16 v2, 0x1c

    aput-object v1, v12, v2

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_SPLASH_UNSUPPORT_ORIENTATION:Lcom/sigmob/windad/WindAdError;

    const/16 v2, 0x1d

    aput-object v1, v12, v2

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_SPLASH_UNSUPPORT_RESOURCE:Lcom/sigmob/windad/WindAdError;

    const/16 v2, 0x1e

    aput-object v1, v12, v2

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_SPLASH_ADBLOCK:Lcom/sigmob/windad/WindAdError;

    const/16 v2, 0x1f

    aput-object v1, v12, v2

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_AD_ERROR:Lcom/sigmob/windad/WindAdError;

    const/16 v2, 0x20

    aput-object v1, v12, v2

    sget-object v1, Lcom/sigmob/windad/WindAdError;->RENDER_PROCESS_GONE_WITH_CRASH:Lcom/sigmob/windad/WindAdError;

    const/16 v2, 0x21

    aput-object v1, v12, v2

    sget-object v1, Lcom/sigmob/windad/WindAdError;->RENDER_PROCESS_GONE_UNSPECIFIED:Lcom/sigmob/windad/WindAdError;

    const/16 v2, 0x22

    aput-object v1, v12, v2

    sget-object v1, Lcom/sigmob/windad/WindAdError;->MRAID_LOAD_ERROR:Lcom/sigmob/windad/WindAdError;

    const/16 v2, 0x23

    aput-object v1, v12, v2

    const/16 v1, 0x24

    aput-object v0, v12, v1

    sput-object v12, Lcom/sigmob/windad/WindAdError;->b:[Lcom/sigmob/windad/WindAdError;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;IILjava/lang/String;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    iput p3, p0, Lcom/sigmob/windad/WindAdError;->a:I

    iput-object p4, p0, Lcom/sigmob/windad/WindAdError;->message:Ljava/lang/String;

    return-void
.end method

.method public static getWindAdError(I)Lcom/sigmob/windad/WindAdError;
    .locals 5

    invoke-static {}, Lcom/sigmob/windad/WindAdError;->values()[Lcom/sigmob/windad/WindAdError;

    move-result-object v0

    array-length v1, v0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_1

    aget-object v3, v0, v2

    invoke-virtual {v3}, Lcom/sigmob/windad/WindAdError;->getErrorCode()I

    move-result v4

    if-ne v4, p0, :cond_0

    return-object v3

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    const/4 p0, 0x0

    return-object p0
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/sigmob/windad/WindAdError;
    .locals 1

    const-class v0, Lcom/sigmob/windad/WindAdError;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/sigmob/windad/WindAdError;

    return-object p0
.end method

.method public static values()[Lcom/sigmob/windad/WindAdError;
    .locals 1

    sget-object v0, Lcom/sigmob/windad/WindAdError;->b:[Lcom/sigmob/windad/WindAdError;

    invoke-virtual {v0}, [Lcom/sigmob/windad/WindAdError;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/sigmob/windad/WindAdError;

    return-object v0
.end method


# virtual methods
.method public getErrorCode()I
    .locals 1

    iget v0, p0, Lcom/sigmob/windad/WindAdError;->a:I

    return v0
.end method

.method public getMessage()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/windad/WindAdError;->message:Ljava/lang/String;

    return-object v0
.end method

.method public setErrorMessage(ILjava/lang/String;)V
    .locals 0

    iput p1, p0, Lcom/sigmob/windad/WindAdError;->a:I

    iput-object p2, p0, Lcom/sigmob/windad/WindAdError;->message:Ljava/lang/String;

    return-void
.end method

.method public setMessage(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/windad/WindAdError;->message:Ljava/lang/String;

    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 3

    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/Object;

    iget v1, p0, Lcom/sigmob/windad/WindAdError;->a:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const/4 v2, 0x0

    aput-object v1, v0, v2

    iget-object v1, p0, Lcom/sigmob/windad/WindAdError;->message:Ljava/lang/String;

    const/4 v2, 0x1

    aput-object v1, v0, v2

    const-string v1, "{ \"error_code\":%d, \"message\": %s }"

    invoke-static {v1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
