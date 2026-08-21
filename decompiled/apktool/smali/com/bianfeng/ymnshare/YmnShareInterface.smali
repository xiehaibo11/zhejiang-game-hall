.class public Lcom/bianfeng/ymnshare/YmnShareInterface;
.super Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
.source "YmnShareInterface.java"


# annotations
.annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin;
    entrance = .enum Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;->ACTIVITY:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;
    strategy = .enum Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;->FORCE:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/ymnshare/YmnShareInterface$downCallBack;
    }
.end annotation


# static fields
.field public static final SHARESDK_FUNCTION_IMAGE_COMPRESS_RATE:Ljava/lang/String; = "sharesdk_image_compress_rate"

.field public static final SHARESDK_FUNCTION_IMAGE_COMPRESS_W_H:Ljava/lang/String; = "sharesdk_image_compress_w_h"

.field public static final SHARESDK_FUNCTION_SHOW_SHARE_QQ:Ljava/lang/String; = "sharesdk_show_share_qq"

.field public static final SHARESDK_FUNCTION_SHOW_SHARE_QZONE:Ljava/lang/String; = "sharesdk_show_share_qzone"

.field public static final SHARESDK_FUNCTION_SHOW_SHARE_WX:Ljava/lang/String; = "sharesdk_show_share_wx"

.field public static final SHARESDK_FUNCTION_SHOW_SHARE_WX_Min_Program:Ljava/lang/String; = "sharesdk_show_share_wx_min_program"

.field public static final SHARESDK_FUNCTION_WX_LAUNCH_MINIPROGRAM:Ljava/lang/String; = "sharesdk_wx_launch_miniprogram"

.field public static final SHARESDK_FUNCTION_WX_SUBSCRIBE_MSG_REQ:Ljava/lang/String; = "sharesdk_wx_subscribe_msg_req"

.field private static final SHARE_TYPE_AUDIO:I = 0x5

.field private static final SHARE_TYPE_EMOJI:I = 0x9

.field private static final SHARE_TYPE_EMOTION:I = 0x8

.field private static final SHARE_TYPE_FILE:I = 0x7

.field private static final SHARE_TYPE_IMAGE:I = 0x2

.field private static final SHARE_TYPE_SHARE_WXMINIPROGRAM:I = 0x4

.field private static final SHARE_TYPE_TEXT:I = 0x1

.field private static final SHARE_TYPE_VIDEO:I = 0x6

.field private static final SHARE_TYPE_WEBPAGE:I = 0x3

.field private static final THUMB_SIZE:I = 0x80

.field private static final TIMELINE_SUPPORTED_VERSION:I = 0x21020001

.field private static final WX_FLAG_SHARE_FAVORITE:I = 0x3

.field private static final WX_FLAG_SHARE_SESSION:I = 0x1

.field private static final WX_FLAG_SHARE_TIMELINE:I = 0x2

.field private static instance:Lcom/bianfeng/ymnshare/YmnShareInterface;

.field private static isSupportTimeLine:Z


# instance fields
.field private final PKGNAME_LINE:Ljava/lang/String;

.field private final PKGNAME_QQ:Ljava/lang/String;

.field private final PKGNAME_SINAWEIBO:Ljava/lang/String;

.field private final PKGNAME_TWITTER:Ljava/lang/String;

.field private final PKGNAME_WECHAT:Ljava/lang/String;

.field private final PKGNAME_WHATSAPP:Ljava/lang/String;

.field private final PKGNAME_YOUTUBE:Ljava/lang/String;

.field private final REQ_CODE_LINE:I

.field private final REQ_CODE_QQ:I

.field private final REQ_CODE_SINAWEIBO:I

.field private final REQ_CODE_TWITTER:I

.field private final REQ_CODE_WECHAT:I

.field private final REQ_CODE_WHATSAPP:I

.field private final REQ_CODE_YOUTUBE:I

.field private final SHARE_RESULT_CANCEL:I

.field private final SHARE_RESULT_FAILED:I

.field private final SHARE_RESULT_SUCCESS:I

.field private final TAG:Ljava/lang/String;

.field private final YMNSHARE_LINE:Ljava/lang/String;

.field private final YMNSHARE_QQ:Ljava/lang/String;

.field private final YMNSHARE_SINAWEIBO:Ljava/lang/String;

.field private final YMNSHARE_SYSTEM:Ljava/lang/String;

.field private final YMNSHARE_TWITTER:Ljava/lang/String;

.field private final YMNSHARE_WECHAT:Ljava/lang/String;

.field private final YMNSHARE_WHATSAPP:Ljava/lang/String;

.field private final YMNSHARE_YOUTUBE:Ljava/lang/String;

.field private api:Lcom/tencent/mm/opensdk/openapi/IWXAPI;

.field bitmap:Landroid/graphics/Bitmap;

.field private files:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/io/File;",
            ">;"
        }
    .end annotation
.end field

.field private funcName:Ljava/lang/String;

.field private mTencent:Lcom/tencent/tauth/Tencent;

.field myShareFlag:Ljava/lang/String;

.field mydes:Ljava/lang/String;

.field mytitle:Ljava/lang/String;

.field myurl:Ljava/lang/String;

.field private stringItem:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 145
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;-><init>()V

    const-string v0, "YmnShareInterface"

    .line 69
    iput-object v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->TAG:Ljava/lang/String;

    const-string v0, "ymnshare_whatsapp"

    .line 72
    iput-object v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->YMNSHARE_WHATSAPP:Ljava/lang/String;

    const-string v0, "ymnshare_youtube"

    .line 73
    iput-object v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->YMNSHARE_YOUTUBE:Ljava/lang/String;

    const-string v0, "ymnshare_twitter"

    .line 74
    iput-object v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->YMNSHARE_TWITTER:Ljava/lang/String;

    const-string v0, "ymnshare_line"

    .line 75
    iput-object v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->YMNSHARE_LINE:Ljava/lang/String;

    const-string v0, "ymnshare_qq"

    .line 76
    iput-object v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->YMNSHARE_QQ:Ljava/lang/String;

    const-string v0, "ymnshare_wechat_morepic"

    .line 77
    iput-object v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->YMNSHARE_WECHAT:Ljava/lang/String;

    const-string v0, "ymnshare_sinaweibo"

    .line 78
    iput-object v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->YMNSHARE_SINAWEIBO:Ljava/lang/String;

    const-string v0, "ymnshare_system"

    .line 79
    iput-object v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->YMNSHARE_SYSTEM:Ljava/lang/String;

    const-string v0, "com.whatsapp"

    .line 82
    iput-object v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->PKGNAME_WHATSAPP:Ljava/lang/String;

    const-string v0, "com.google.android.youtube"

    .line 83
    iput-object v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->PKGNAME_YOUTUBE:Ljava/lang/String;

    const-string v0, "com.twitter.android"

    .line 84
    iput-object v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->PKGNAME_TWITTER:Ljava/lang/String;

    const-string v0, "jp.naver.line.android"

    .line 85
    iput-object v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->PKGNAME_LINE:Ljava/lang/String;

    const-string v0, "com.tencent.mobileqq"

    .line 86
    iput-object v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->PKGNAME_QQ:Ljava/lang/String;

    const-string v0, "com.tencent.mm"

    .line 87
    iput-object v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->PKGNAME_WECHAT:Ljava/lang/String;

    const-string v0, "com.sina.weibo"

    .line 88
    iput-object v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->PKGNAME_SINAWEIBO:Ljava/lang/String;

    const v0, 0x1e243

    .line 111
    iput v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->REQ_CODE_WHATSAPP:I

    const v0, 0x1e244

    .line 112
    iput v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->REQ_CODE_YOUTUBE:I

    const v0, 0x1e245

    .line 113
    iput v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->REQ_CODE_TWITTER:I

    const v0, 0x1e246

    .line 114
    iput v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->REQ_CODE_LINE:I

    const v0, 0x1e247

    .line 115
    iput v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->REQ_CODE_QQ:I

    const v0, 0x1e248

    .line 116
    iput v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->REQ_CODE_WECHAT:I

    const v0, 0x1e249

    .line 117
    iput v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->REQ_CODE_SINAWEIBO:I

    const/16 v0, 0x9c4

    .line 124
    iput v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->SHARE_RESULT_SUCCESS:I

    const/16 v0, 0x9c5

    .line 125
    iput v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->SHARE_RESULT_FAILED:I

    const/16 v0, 0x9c6

    .line 126
    iput v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->SHARE_RESULT_CANCEL:I

    .line 131
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->files:Ljava/util/List;

    const/16 v0, 0x9

    new-array v0, v0, [Ljava/lang/String;

    .line 132
    iput-object v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->stringItem:[Ljava/lang/String;

    const-string v0, ""

    .line 140
    iput-object v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->funcName:Ljava/lang/String;

    .line 146
    sput-object p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->instance:Lcom/bianfeng/ymnshare/YmnShareInterface;

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/ymnshare/YmnShareInterface;)Ljava/util/List;
    .locals 0

    .line 67
    iget-object p0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->files:Ljava/util/List;

    return-object p0
.end method

.method static synthetic access$100(Lcom/bianfeng/ymnshare/YmnShareInterface;)[Ljava/lang/String;
    .locals 0

    .line 67
    iget-object p0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->stringItem:[Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$200(Lcom/bianfeng/ymnshare/YmnShareInterface;Landroid/graphics/Bitmap;I)V
    .locals 0

    .line 67
    invoke-direct {p0, p1, p2}, Lcom/bianfeng/ymnshare/YmnShareInterface;->wxShareImage(Landroid/graphics/Bitmap;I)V

    return-void
.end method

.method static synthetic access$300(Lcom/bianfeng/ymnshare/YmnShareInterface;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/graphics/Bitmap;I)V
    .locals 0

    .line 67
    invoke-direct/range {p0 .. p5}, Lcom/bianfeng/ymnshare/YmnShareInterface;->wxShareWebPage(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/graphics/Bitmap;I)V

    return-void
.end method

.method static synthetic access$400(Lcom/bianfeng/ymnshare/YmnShareInterface;Landroid/graphics/Bitmap;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 67
    invoke-direct/range {p0 .. p7}, Lcom/bianfeng/ymnshare/YmnShareInterface;->wxShareMinProgram(Landroid/graphics/Bitmap;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static notifyResult(ILjava/lang/String;)V
    .locals 1

    .line 150
    sget-object v0, Lcom/bianfeng/ymnshare/YmnShareInterface;->instance:Lcom/bianfeng/ymnshare/YmnShareInterface;

    if-eqz v0, :cond_0

    .line 151
    invoke-virtual {v0, p0, p1}, Lcom/bianfeng/ymnshare/YmnShareInterface;->sendResult(ILjava/lang/String;)V

    goto :goto_0

    :cond_0
    const-string p0, "YmnShareInterface is null"

    .line 155
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    :goto_0
    return-void
.end method

.method private qqShareImage(Ljava/lang/String;)V
    .locals 5

    .line 770
    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v1, "imageLocalUrl"

    .line 771
    invoke-virtual {v0, v1, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "req_type"

    const/4 v2, 0x5

    .line 772
    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    const-string v1, "cflag"

    const/4 v2, 0x1

    .line 773
    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    .line 774
    new-instance v1, Ljava/io/File;

    invoke-direct {v1, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 775
    invoke-virtual {v1}, Ljava/io/File;->length()J

    move-result-wide v1

    const-wide/32 v3, 0x500000

    cmp-long p1, v1, v3

    if-ltz p1, :cond_0

    const/16 p1, 0x322

    const-string v0, "\u56fe\u7247\u8d85\u8fc75M"

    .line 776
    invoke-static {p1, v0}, Lcom/bianfeng/ymnshare/YmnShareInterface;->notifyResult(ILjava/lang/String;)V

    return-void

    .line 779
    :cond_0
    iget-object p1, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->mTencent:Lcom/tencent/tauth/Tencent;

    invoke-virtual {p0}, Lcom/bianfeng/ymnshare/YmnShareInterface;->getActivity()Landroid/app/Activity;

    move-result-object v1

    new-instance v2, Lcom/bianfeng/ymnshare/BaseUiListener;

    invoke-direct {v2}, Lcom/bianfeng/ymnshare/BaseUiListener;-><init>()V

    invoke-virtual {p1, v1, v0, v2}, Lcom/tencent/tauth/Tencent;->shareToQQ(Landroid/app/Activity;Landroid/os/Bundle;Lcom/tencent/tauth/IUiListener;)V

    return-void
.end method

.method private qqShareWebPage(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 783
    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v1, "title"

    .line 784
    invoke-virtual {v0, v1, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string p2, "summary"

    .line 785
    invoke-virtual {v0, p2, p3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string p2, "targetUrl"

    .line 786
    invoke-virtual {v0, p2, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "http"

    .line 787
    invoke-virtual {p4, p1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    const-string p1, "imageUrl"

    .line 788
    invoke-virtual {v0, p1, p4}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    const-string p1, "imageLocalUrl"

    .line 790
    invoke-virtual {v0, p1, p4}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    const/4 p1, 0x1

    const-string p2, "req_type"

    .line 792
    invoke-virtual {v0, p2, p1}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    .line 793
    new-instance p1, Ljava/io/File;

    invoke-direct {p1, p4}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 794
    invoke-virtual {p1}, Ljava/io/File;->length()J

    move-result-wide p1

    const-wide/32 p3, 0x500000

    cmp-long v1, p1, p3

    if-ltz v1, :cond_1

    const/16 p1, 0x322

    const-string p2, "\u56fe\u7247\u8d85\u8fc75M"

    .line 795
    invoke-static {p1, p2}, Lcom/bianfeng/ymnshare/YmnShareInterface;->notifyResult(ILjava/lang/String;)V

    return-void

    .line 798
    :cond_1
    iget-object p1, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->mTencent:Lcom/tencent/tauth/Tencent;

    invoke-virtual {p0}, Lcom/bianfeng/ymnshare/YmnShareInterface;->getActivity()Landroid/app/Activity;

    move-result-object p2

    new-instance p3, Lcom/bianfeng/ymnshare/BaseUiListener;

    invoke-direct {p3}, Lcom/bianfeng/ymnshare/BaseUiListener;-><init>()V

    invoke-virtual {p1, p2, v0, p3}, Lcom/tencent/tauth/Tencent;->shareToQQ(Landroid/app/Activity;Landroid/os/Bundle;Lcom/tencent/tauth/IUiListener;)V

    return-void
.end method

.method private qqZoonShareWebPage(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 846
    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    .line 847
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 848
    invoke-virtual {v1, p4}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    const-string p4, "req_type"

    const/4 v2, 0x1

    .line 849
    invoke-virtual {v0, p4, v2}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    const-string p4, "title"

    .line 850
    invoke-virtual {v0, p4, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string p2, "summary"

    .line 851
    invoke-virtual {v0, p2, p3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string p2, "targetUrl"

    .line 852
    invoke-virtual {v0, p2, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "imageUrl"

    .line 853
    invoke-virtual {v0, p1, v1}, Landroid/os/Bundle;->putStringArrayList(Ljava/lang/String;Ljava/util/ArrayList;)V

    .line 854
    iget-object p1, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->mTencent:Lcom/tencent/tauth/Tencent;

    invoke-virtual {p0}, Lcom/bianfeng/ymnshare/YmnShareInterface;->getActivity()Landroid/app/Activity;

    move-result-object p2

    new-instance p3, Lcom/bianfeng/ymnshare/BaseUiListener;

    invoke-direct {p3}, Lcom/bianfeng/ymnshare/BaseUiListener;-><init>()V

    invoke-virtual {p1, p2, v0, p3}, Lcom/tencent/tauth/Tencent;->shareToQzone(Landroid/app/Activity;Landroid/os/Bundle;Lcom/tencent/tauth/IUiListener;)V

    return-void
.end method

.method private shareImage(Ljava/util/LinkedHashMap;)V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "ymnshare_wechat_morepic"
    .end annotation

    const-string v0, "ymnshare_wechat_morepic"

    .line 249
    iput-object v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->funcName:Ljava/lang/String;

    const-string v1, "into ymnshare_wechat_morepic"

    .line 250
    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;)I

    .line 252
    invoke-static {}, Lcom/bianfeng/ymnshare/utils/ShareUtils;->getInstance()Lcom/bianfeng/ymnshare/utils/ShareUtils;

    invoke-virtual {p0}, Lcom/bianfeng/ymnshare/YmnShareInterface;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "com.tencent.mm"

    invoke-static {v1, v2}, Lcom/bianfeng/ymnshare/utils/ShareUtils;->isAPPInstalled(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_0

    const/16 p1, 0x322

    const-string v1, "wechat is not install"

    .line 253
    invoke-virtual {p0, p1, v1, v0}, Lcom/bianfeng/ymnshare/YmnShareInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    return-void

    .line 256
    :cond_0
    new-instance v0, Ljava/lang/Thread;

    new-instance v1, Lcom/bianfeng/ymnshare/YmnShareInterface$1;

    invoke-direct {v1, p0, p1}, Lcom/bianfeng/ymnshare/YmnShareInterface$1;-><init>(Lcom/bianfeng/ymnshare/YmnShareInterface;Ljava/util/LinkedHashMap;)V

    invoke-direct {v0, v1}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 325
    invoke-virtual {v0}, Ljava/lang/Thread;->start()V

    return-void
.end method

.method private wxShareImage(Landroid/graphics/Bitmap;I)V
    .locals 4

    .line 459
    new-instance v0, Lcom/tencent/mm/opensdk/modelmsg/WXImageObject;

    invoke-direct {v0, p1}, Lcom/tencent/mm/opensdk/modelmsg/WXImageObject;-><init>(Landroid/graphics/Bitmap;)V

    .line 461
    new-instance v1, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;

    invoke-direct {v1}, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;-><init>()V

    .line 462
    iput-object v0, v1, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;->mediaObject:Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage$IMediaObject;

    .line 464
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->getWidth()I

    move-result v0

    invoke-virtual {p1}, Landroid/graphics/Bitmap;->getHeight()I

    move-result v2

    const/4 v3, 0x1

    invoke-static {p1, v0, v2, v3}, Landroid/graphics/Bitmap;->createScaledBitmap(Landroid/graphics/Bitmap;IIZ)Landroid/graphics/Bitmap;

    move-result-object v0

    .line 465
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->recycle()V

    .line 466
    invoke-static {}, Lcom/bianfeng/ymnshare/utils/ShareUtils;->getInstance()Lcom/bianfeng/ymnshare/utils/ShareUtils;

    const/16 p1, 0x20

    invoke-static {v0, p1}, Lcom/bianfeng/ymnshare/utils/ShareUtils;->bmpToByteArray(Landroid/graphics/Bitmap;I)[B

    move-result-object p1

    iput-object p1, v1, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;->thumbData:[B

    .line 468
    new-instance p1, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;

    invoke-direct {p1}, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;-><init>()V

    .line 469
    invoke-static {}, Lcom/bianfeng/ymnshare/utils/ShareUtils;->getInstance()Lcom/bianfeng/ymnshare/utils/ShareUtils;

    move-result-object v0

    const-string v2, "img"

    invoke-virtual {v0, v2}, Lcom/bianfeng/ymnshare/utils/ShareUtils;->buildTransaction(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p1, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;->transaction:Ljava/lang/String;

    .line 470
    iput-object v1, p1, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;->message:Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;

    if-eq p2, v3, :cond_2

    const/4 v0, 0x2

    if-eq p2, v0, :cond_1

    const/4 v1, 0x3

    if-eq p2, v1, :cond_0

    const-string p1, "YmnShareInterface"

    const-string p2, "ShareFlag is Required!!!"

    .line 482
    invoke-static {p1, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 479
    :cond_0
    iput v0, p1, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;->scene:I

    goto :goto_0

    .line 476
    :cond_1
    sget-boolean p2, Lcom/bianfeng/ymnshare/YmnShareInterface;->isSupportTimeLine:Z

    iput p2, p1, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;->scene:I

    goto :goto_0

    :cond_2
    const/4 p2, 0x0

    .line 473
    iput p2, p1, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;->scene:I

    .line 485
    :goto_0
    iget-object p2, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->api:Lcom/tencent/mm/opensdk/openapi/IWXAPI;

    invoke-interface {p2, p1}, Lcom/tencent/mm/opensdk/openapi/IWXAPI;->sendReq(Lcom/tencent/mm/opensdk/modelbase/BaseReq;)Z

    return-void
.end method

.method private wxShareImage(Ljava/lang/String;I)V
    .locals 4

    :try_start_0
    const-string v0, "http"

    .line 492
    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 493
    new-instance v0, Ljava/net/URL;

    invoke-direct {v0, p1}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/net/URL;->openStream()Ljava/io/InputStream;

    move-result-object p1

    invoke-static {p1}, Landroid/graphics/BitmapFactory;->decodeStream(Ljava/io/InputStream;)Landroid/graphics/Bitmap;

    move-result-object p1

    goto/16 :goto_2

    :cond_0
    const-string v0, "/data/user"

    .line 494
    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    const-string v0, "mnt/sdcard"

    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    const-string v0, "data/data"

    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    const-string v0, "/storage/emulated"

    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_1

    :cond_1
    const-string v0, ".png"

    .line 502
    invoke-virtual {p1, v0}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_3

    const-string v0, ".jpg"

    invoke-virtual {p1, v0}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    goto :goto_0

    .line 505
    :cond_2
    new-instance p1, Ljava/io/FileNotFoundException;

    const-string p2, "\u8bf7\u68c0\u67e5\u7f29\u7565\u56fe\u5730\u5740\u4f20\u53c2!!"

    invoke-direct {p1, p2}, Ljava/io/FileNotFoundException;-><init>(Ljava/lang/String;)V

    throw p1

    .line 503
    :cond_3
    :goto_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnshare/YmnShareInterface;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getAssets()Landroid/content/res/AssetManager;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/content/res/AssetManager;->open(Ljava/lang/String;)Ljava/io/InputStream;

    move-result-object p1

    invoke-static {p1}, Landroid/graphics/BitmapFactory;->decodeStream(Ljava/io/InputStream;)Landroid/graphics/Bitmap;

    move-result-object p1

    goto :goto_2

    .line 495
    :cond_4
    :goto_1
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 496
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result p1

    if-eqz p1, :cond_5

    .line 497
    invoke-virtual {v0}, Ljava/io/File;->length()J

    move-result-wide v1

    .line 498
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, ""

    invoke-virtual {p1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 500
    :cond_5
    new-instance p1, Ljava/io/FileInputStream;

    invoke-direct {p1, v0}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V

    .line 501
    invoke-static {p1}, Landroid/graphics/BitmapFactory;->decodeStream(Ljava/io/InputStream;)Landroid/graphics/Bitmap;

    move-result-object p1

    .line 508
    :goto_2
    new-instance v0, Lcom/tencent/mm/opensdk/modelmsg/WXImageObject;

    invoke-direct {v0, p1}, Lcom/tencent/mm/opensdk/modelmsg/WXImageObject;-><init>(Landroid/graphics/Bitmap;)V

    .line 510
    new-instance v1, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;

    invoke-direct {v1}, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;-><init>()V

    .line 511
    iput-object v0, v1, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;->mediaObject:Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage$IMediaObject;

    .line 513
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->getWidth()I

    move-result v0

    invoke-virtual {p1}, Landroid/graphics/Bitmap;->getHeight()I

    move-result v2

    const/4 v3, 0x1

    invoke-static {p1, v0, v2, v3}, Landroid/graphics/Bitmap;->createScaledBitmap(Landroid/graphics/Bitmap;IIZ)Landroid/graphics/Bitmap;

    move-result-object v0

    .line 514
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->recycle()V

    .line 516
    invoke-static {}, Lcom/bianfeng/ymnshare/utils/ShareUtils;->getInstance()Lcom/bianfeng/ymnshare/utils/ShareUtils;

    const/16 p1, 0x20

    invoke-static {v0, p1}, Lcom/bianfeng/ymnshare/utils/ShareUtils;->bmpToByteArray(Landroid/graphics/Bitmap;I)[B

    move-result-object p1

    iput-object p1, v1, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;->thumbData:[B

    .line 518
    new-instance p1, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;

    invoke-direct {p1}, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;-><init>()V

    .line 519
    invoke-static {}, Lcom/bianfeng/ymnshare/utils/ShareUtils;->getInstance()Lcom/bianfeng/ymnshare/utils/ShareUtils;

    move-result-object v0

    const-string v2, "img"

    invoke-virtual {v0, v2}, Lcom/bianfeng/ymnshare/utils/ShareUtils;->buildTransaction(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p1, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;->transaction:Ljava/lang/String;

    .line 520
    iput-object v1, p1, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;->message:Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;

    const/4 v0, 0x0

    if-eq p2, v3, :cond_9

    const/4 v1, 0x2

    if-eq p2, v1, :cond_7

    const/4 v0, 0x3

    if-eq p2, v0, :cond_6

    const-string p1, "YmnShareInterface"

    const-string p2, "ShareFlag is Required!!!"

    .line 532
    invoke-static {p1, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 529
    :cond_6
    iput v1, p1, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;->scene:I

    goto :goto_4

    .line 526
    :cond_7
    sget-boolean p2, Lcom/bianfeng/ymnshare/YmnShareInterface;->isSupportTimeLine:Z

    if-eqz p2, :cond_8

    goto :goto_3

    :cond_8
    const/4 v3, 0x0

    :goto_3
    iput v3, p1, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;->scene:I

    goto :goto_4

    .line 523
    :cond_9
    iput v0, p1, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;->scene:I

    .line 535
    :goto_4
    iget-object p2, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->api:Lcom/tencent/mm/opensdk/openapi/IWXAPI;

    invoke-interface {p2, p1}, Lcom/tencent/mm/opensdk/openapi/IWXAPI;->sendReq(Lcom/tencent/mm/opensdk/modelbase/BaseReq;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_5

    :catch_0
    move-exception p1

    .line 537
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_5
    return-void
.end method

.method private wxShareMinProgram(Landroid/graphics/Bitmap;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 671
    new-instance v0, Lcom/tencent/mm/opensdk/modelmsg/WXMiniProgramObject;

    invoke-direct {v0}, Lcom/tencent/mm/opensdk/modelmsg/WXMiniProgramObject;-><init>()V

    .line 672
    iput-object p4, v0, Lcom/tencent/mm/opensdk/modelmsg/WXMiniProgramObject;->webpageUrl:Ljava/lang/String;

    const-string p4, ""

    .line 673
    invoke-virtual {p7, p4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const-string p7, "wxShare_wxversion"

    invoke-virtual {p0, p7}, Lcom/bianfeng/ymnshare/YmnShareInterface;->getPropertie(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p7

    .line 674
    :cond_0
    invoke-static {p7}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object p7

    invoke-virtual {p7}, Ljava/lang/Integer;->intValue()I

    move-result p7

    iput p7, v0, Lcom/tencent/mm/opensdk/modelmsg/WXMiniProgramObject;->miniprogramType:I

    .line 675
    invoke-virtual {p5, p4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p4

    if-eqz p4, :cond_1

    const-string p4, "wxShare_username"

    invoke-virtual {p0, p4}, Lcom/bianfeng/ymnshare/YmnShareInterface;->getPropertie(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p5

    .line 676
    :cond_1
    iput-object p5, v0, Lcom/tencent/mm/opensdk/modelmsg/WXMiniProgramObject;->userName:Ljava/lang/String;

    .line 677
    iput-object p6, v0, Lcom/tencent/mm/opensdk/modelmsg/WXMiniProgramObject;->path:Ljava/lang/String;

    .line 678
    new-instance p4, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;

    invoke-direct {p4, v0}, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;-><init>(Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage$IMediaObject;)V

    .line 679
    iput-object p2, p4, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;->title:Ljava/lang/String;

    .line 680
    iput-object p3, p4, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;->description:Ljava/lang/String;

    .line 681
    invoke-static {}, Lcom/bianfeng/ymnshare/utils/ShareUtils;->getInstance()Lcom/bianfeng/ymnshare/utils/ShareUtils;

    const/16 p2, 0x80

    invoke-static {p1, p2}, Lcom/bianfeng/ymnshare/utils/ShareUtils;->bmpToByteArray(Landroid/graphics/Bitmap;I)[B

    move-result-object p1

    iput-object p1, p4, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;->thumbData:[B

    .line 683
    new-instance p1, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;

    invoke-direct {p1}, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;-><init>()V

    .line 684
    invoke-static {}, Lcom/bianfeng/ymnshare/utils/ShareUtils;->getInstance()Lcom/bianfeng/ymnshare/utils/ShareUtils;

    move-result-object p2

    const-string p3, "miniProgram"

    invoke-virtual {p2, p3}, Lcom/bianfeng/ymnshare/utils/ShareUtils;->buildTransaction(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    iput-object p2, p1, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;->transaction:Ljava/lang/String;

    .line 685
    iput-object p4, p1, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;->message:Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;

    const/4 p2, 0x0

    .line 686
    iput p2, p1, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;->scene:I

    .line 687
    iget-object p2, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->api:Lcom/tencent/mm/opensdk/openapi/IWXAPI;

    invoke-interface {p2, p1}, Lcom/tencent/mm/opensdk/openapi/IWXAPI;->sendReq(Lcom/tencent/mm/opensdk/modelbase/BaseReq;)Z

    return-void
.end method

.method private wxShareMinProgram(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 10

    move-object v1, p3

    const-string v0, "http"

    .line 659
    invoke-virtual {p3, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 660
    new-instance v0, Lcom/bianfeng/ymnshare/YmnShareInterface$5;

    move-object v2, v0

    move-object v3, p0

    move-object v4, p1

    move-object v5, p2

    move-object v6, p4

    move-object v7, p5

    move-object/from16 v8, p6

    move-object/from16 v9, p7

    invoke-direct/range {v2 .. v9}, Lcom/bianfeng/ymnshare/YmnShareInterface$5;-><init>(Lcom/bianfeng/ymnshare/YmnShareInterface;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    move-object v8, p0

    invoke-virtual {p0, p3, v0}, Lcom/bianfeng/ymnshare/YmnShareInterface;->returnBitMap(Ljava/lang/String;Lcom/bianfeng/ymnshare/YmnShareInterface$downCallBack;)V

    goto :goto_0

    :cond_0
    move-object v8, p0

    move-object v0, p0

    move-object v1, p3

    move-object v2, p1

    move-object v3, p2

    move-object v4, p4

    move-object v5, p5

    move-object/from16 v6, p6

    move-object/from16 v7, p7

    .line 667
    invoke-direct/range {v0 .. v7}, Lcom/bianfeng/ymnshare/YmnShareInterface;->wxShareMinProgramLocal(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method private wxShareMinProgramLocal(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    const-string v0, ""

    :try_start_0
    const-string v1, "http"

    .line 693
    invoke-virtual {p1, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 694
    new-instance v1, Ljava/net/URL;

    invoke-direct {v1, p1}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/net/URL;->openStream()Ljava/io/InputStream;

    move-result-object p1

    invoke-static {p1}, Landroid/graphics/BitmapFactory;->decodeStream(Ljava/io/InputStream;)Landroid/graphics/Bitmap;

    move-result-object p1

    goto :goto_2

    :cond_0
    const-string v1, "mnt/sdcard"

    .line 695
    invoke-virtual {p1, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_4

    const-string v1, "data/data"

    invoke-virtual {p1, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_4

    const-string v1, "/storage/emulated"

    invoke-virtual {p1, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    goto :goto_1

    :cond_1
    const-string v1, ".png"

    .line 697
    invoke-virtual {p1, v1}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_3

    const-string v1, ".jpg"

    invoke-virtual {p1, v1}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_2

    goto :goto_0

    .line 700
    :cond_2
    new-instance p1, Ljava/io/FileNotFoundException;

    const-string p2, "\u8bf7\u68c0\u67e5\u7f29\u7565\u56fe\u5730\u5740\u4f20\u53c2!!"

    invoke-direct {p1, p2}, Ljava/io/FileNotFoundException;-><init>(Ljava/lang/String;)V

    throw p1

    .line 698
    :cond_3
    :goto_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnshare/YmnShareInterface;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getAssets()Landroid/content/res/AssetManager;

    move-result-object v1

    invoke-virtual {v1, p1}, Landroid/content/res/AssetManager;->open(Ljava/lang/String;)Ljava/io/InputStream;

    move-result-object p1

    invoke-static {p1}, Landroid/graphics/BitmapFactory;->decodeStream(Ljava/io/InputStream;)Landroid/graphics/Bitmap;

    move-result-object p1

    goto :goto_2

    .line 696
    :cond_4
    :goto_1
    invoke-static {p1}, Landroid/graphics/BitmapFactory;->decodeFile(Ljava/lang/String;)Landroid/graphics/Bitmap;

    move-result-object p1

    .line 705
    :goto_2
    new-instance v1, Lcom/tencent/mm/opensdk/modelmsg/WXMiniProgramObject;

    invoke-direct {v1}, Lcom/tencent/mm/opensdk/modelmsg/WXMiniProgramObject;-><init>()V

    .line 706
    iput-object p4, v1, Lcom/tencent/mm/opensdk/modelmsg/WXMiniProgramObject;->webpageUrl:Ljava/lang/String;

    .line 707
    invoke-virtual {p7, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p4

    if-eqz p4, :cond_5

    const-string p4, "wxShare_wxversion"

    invoke-virtual {p0, p4}, Lcom/bianfeng/ymnshare/YmnShareInterface;->getPropertie(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p7

    .line 708
    :cond_5
    invoke-static {p7}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object p4

    invoke-virtual {p4}, Ljava/lang/Integer;->intValue()I

    move-result p4

    iput p4, v1, Lcom/tencent/mm/opensdk/modelmsg/WXMiniProgramObject;->miniprogramType:I

    .line 709
    invoke-virtual {p5, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p4

    if-eqz p4, :cond_6

    const-string p4, "wxShare_username"

    invoke-virtual {p0, p4}, Lcom/bianfeng/ymnshare/YmnShareInterface;->getPropertie(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p5

    .line 710
    :cond_6
    iput-object p5, v1, Lcom/tencent/mm/opensdk/modelmsg/WXMiniProgramObject;->userName:Ljava/lang/String;

    .line 711
    iput-object p6, v1, Lcom/tencent/mm/opensdk/modelmsg/WXMiniProgramObject;->path:Ljava/lang/String;

    .line 712
    new-instance p4, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;

    invoke-direct {p4, v1}, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;-><init>(Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage$IMediaObject;)V

    .line 713
    iput-object p2, p4, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;->title:Ljava/lang/String;

    .line 714
    iput-object p3, p4, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;->description:Ljava/lang/String;

    .line 716
    invoke-static {}, Lcom/bianfeng/ymnshare/utils/ShareUtils;->getInstance()Lcom/bianfeng/ymnshare/utils/ShareUtils;

    const/16 p2, 0x80

    invoke-static {p1, p2}, Lcom/bianfeng/ymnshare/utils/ShareUtils;->bmpToByteArray(Landroid/graphics/Bitmap;I)[B

    move-result-object p1

    iput-object p1, p4, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;->thumbData:[B

    .line 718
    new-instance p1, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;

    invoke-direct {p1}, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;-><init>()V

    .line 719
    invoke-static {}, Lcom/bianfeng/ymnshare/utils/ShareUtils;->getInstance()Lcom/bianfeng/ymnshare/utils/ShareUtils;

    move-result-object p2

    const-string p3, "miniProgram"

    invoke-virtual {p2, p3}, Lcom/bianfeng/ymnshare/utils/ShareUtils;->buildTransaction(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    iput-object p2, p1, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;->transaction:Ljava/lang/String;

    .line 720
    iput-object p4, p1, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;->message:Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;

    const/4 p2, 0x0

    .line 721
    iput p2, p1, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;->scene:I

    .line 722
    iget-object p2, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->api:Lcom/tencent/mm/opensdk/openapi/IWXAPI;

    invoke-interface {p2, p1}, Lcom/tencent/mm/opensdk/openapi/IWXAPI;->sendReq(Lcom/tencent/mm/opensdk/modelbase/BaseReq;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_3

    :catch_0
    move-exception p1

    .line 724
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_3
    return-void
.end method

.method private wxShareText(Ljava/lang/String;I)V
    .locals 3

    .line 401
    new-instance v0, Lcom/tencent/mm/opensdk/modelmsg/WXTextObject;

    invoke-direct {v0}, Lcom/tencent/mm/opensdk/modelmsg/WXTextObject;-><init>()V

    .line 402
    iput-object p1, v0, Lcom/tencent/mm/opensdk/modelmsg/WXTextObject;->text:Ljava/lang/String;

    .line 405
    new-instance v1, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;

    invoke-direct {v1}, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;-><init>()V

    .line 406
    iput-object v0, v1, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;->mediaObject:Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage$IMediaObject;

    .line 409
    iput-object p1, v1, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;->description:Ljava/lang/String;

    .line 412
    new-instance p1, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;

    invoke-direct {p1}, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;-><init>()V

    .line 413
    invoke-static {}, Lcom/bianfeng/ymnshare/utils/ShareUtils;->getInstance()Lcom/bianfeng/ymnshare/utils/ShareUtils;

    move-result-object v0

    const-string v2, "text"

    invoke-virtual {v0, v2}, Lcom/bianfeng/ymnshare/utils/ShareUtils;->buildTransaction(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p1, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;->transaction:Ljava/lang/String;

    .line 414
    iput-object v1, p1, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;->message:Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;

    const/4 v0, 0x1

    const/16 v1, 0x322

    if-eq p2, v0, :cond_2

    const/4 v0, 0x2

    if-eq p2, v0, :cond_1

    const/4 v2, 0x3

    if-eq p2, v2, :cond_0

    const-string p1, "WXShareInterface"

    const-string p2, "ShareFlag is Required!!!"

    .line 426
    invoke-static {p1, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    const-string p1, "\u4e0d\u652f\u6301 wxShareText"

    .line 427
    invoke-virtual {p0, v1, p1}, Lcom/bianfeng/ymnshare/YmnShareInterface;->sendResult(ILjava/lang/String;)V

    return-void

    .line 423
    :cond_0
    iput v0, p1, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;->scene:I

    goto :goto_0

    .line 420
    :cond_1
    sget-boolean p2, Lcom/bianfeng/ymnshare/YmnShareInterface;->isSupportTimeLine:Z

    iput p2, p1, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;->scene:I

    goto :goto_0

    :cond_2
    const/4 p2, 0x0

    .line 417
    iput p2, p1, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;->scene:I

    .line 430
    :goto_0
    iget-object p2, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->api:Lcom/tencent/mm/opensdk/openapi/IWXAPI;

    if-nez p2, :cond_3

    const-string p2, "api is NUll!!! wxShareText"

    .line 432
    invoke-virtual {p0, v1, p2}, Lcom/bianfeng/ymnshare/YmnShareInterface;->sendResult(ILjava/lang/String;)V

    .line 434
    :cond_3
    iget-object p2, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->api:Lcom/tencent/mm/opensdk/openapi/IWXAPI;

    invoke-interface {p2, p1}, Lcom/tencent/mm/opensdk/openapi/IWXAPI;->sendReq(Lcom/tencent/mm/opensdk/modelbase/BaseReq;)Z

    return-void
.end method

.method private wxShareWebPage(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/graphics/Bitmap;I)V
    .locals 1

    .line 563
    new-instance v0, Lcom/tencent/mm/opensdk/modelmsg/WXWebpageObject;

    invoke-direct {v0}, Lcom/tencent/mm/opensdk/modelmsg/WXWebpageObject;-><init>()V

    .line 564
    iput-object p1, v0, Lcom/tencent/mm/opensdk/modelmsg/WXWebpageObject;->webpageUrl:Ljava/lang/String;

    .line 566
    new-instance p1, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;

    invoke-direct {p1, v0}, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;-><init>(Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage$IMediaObject;)V

    .line 567
    iput-object p2, p1, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;->title:Ljava/lang/String;

    .line 568
    iput-object p3, p1, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;->description:Ljava/lang/String;

    const/4 p2, 0x1

    const/16 p3, 0x80

    .line 569
    invoke-static {p4, p3, p3, p2}, Landroid/graphics/Bitmap;->createScaledBitmap(Landroid/graphics/Bitmap;IIZ)Landroid/graphics/Bitmap;

    move-result-object p3

    .line 570
    invoke-static {}, Lcom/bianfeng/ymnshare/utils/ShareUtils;->getInstance()Lcom/bianfeng/ymnshare/utils/ShareUtils;

    const/16 p4, 0x20

    invoke-static {p3, p4}, Lcom/bianfeng/ymnshare/utils/ShareUtils;->bmpToByteArray(Landroid/graphics/Bitmap;I)[B

    move-result-object p3

    iput-object p3, p1, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;->thumbData:[B

    .line 571
    new-instance p3, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;

    invoke-direct {p3}, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;-><init>()V

    .line 572
    invoke-static {}, Lcom/bianfeng/ymnshare/utils/ShareUtils;->getInstance()Lcom/bianfeng/ymnshare/utils/ShareUtils;

    move-result-object p4

    const-string v0, "webpage"

    invoke-virtual {p4, v0}, Lcom/bianfeng/ymnshare/utils/ShareUtils;->buildTransaction(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p4

    iput-object p4, p3, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;->transaction:Ljava/lang/String;

    .line 573
    iput-object p1, p3, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;->message:Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;

    if-eq p5, p2, :cond_2

    const/4 p1, 0x2

    if-eq p5, p1, :cond_1

    const/4 p2, 0x3

    if-eq p5, p2, :cond_0

    const-string p1, "YmnShareInterface"

    const-string p2, "ShareFlag is Required!!!"

    .line 585
    invoke-static {p1, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 582
    :cond_0
    iput p1, p3, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;->scene:I

    goto :goto_0

    .line 579
    :cond_1
    sget-boolean p1, Lcom/bianfeng/ymnshare/YmnShareInterface;->isSupportTimeLine:Z

    iput p1, p3, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;->scene:I

    goto :goto_0

    :cond_2
    const/4 p1, 0x0

    .line 576
    iput p1, p3, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;->scene:I

    .line 588
    :goto_0
    iget-object p1, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->api:Lcom/tencent/mm/opensdk/openapi/IWXAPI;

    invoke-interface {p1, p3}, Lcom/tencent/mm/opensdk/openapi/IWXAPI;->sendReq(Lcom/tencent/mm/opensdk/modelbase/BaseReq;)Z

    return-void
.end method

.method private wxShareWebPage(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V
    .locals 1

    .line 592
    new-instance v0, Lcom/tencent/mm/opensdk/modelmsg/WXWebpageObject;

    invoke-direct {v0}, Lcom/tencent/mm/opensdk/modelmsg/WXWebpageObject;-><init>()V

    .line 593
    iput-object p1, v0, Lcom/tencent/mm/opensdk/modelmsg/WXWebpageObject;->webpageUrl:Ljava/lang/String;

    .line 594
    new-instance p1, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;

    invoke-direct {p1, v0}, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;-><init>(Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage$IMediaObject;)V

    .line 595
    iput-object p2, p1, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;->title:Ljava/lang/String;

    .line 596
    iput-object p3, p1, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;->description:Ljava/lang/String;

    const/4 p2, 0x1

    :try_start_0
    const-string p3, "http"

    .line 599
    invoke-virtual {p4, p3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p3

    if-eqz p3, :cond_0

    .line 600
    new-instance p3, Ljava/net/URL;

    invoke-direct {p3, p4}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    invoke-virtual {p3}, Ljava/net/URL;->openStream()Ljava/io/InputStream;

    move-result-object p3

    invoke-static {p3}, Landroid/graphics/BitmapFactory;->decodeStream(Ljava/io/InputStream;)Landroid/graphics/Bitmap;

    move-result-object p3

    goto :goto_2

    :cond_0
    const-string p3, "mnt/sdcard"

    .line 601
    invoke-virtual {p4, p3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_4

    const-string p3, "data/data"

    invoke-virtual {p4, p3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_4

    const-string p3, "/storage/emulated"

    invoke-virtual {p4, p3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p3

    if-eqz p3, :cond_1

    goto :goto_1

    :cond_1
    const-string p3, ".png"

    .line 603
    invoke-virtual {p4, p3}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result p3

    if-nez p3, :cond_3

    const-string p3, ".jpg"

    invoke-virtual {p4, p3}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result p3

    if-eqz p3, :cond_2

    goto :goto_0

    .line 606
    :cond_2
    new-instance p3, Ljava/io/FileNotFoundException;

    const-string p4, "\u8bf7\u68c0\u67e5\u7f29\u7565\u56fe\u5730\u5740\u4f20\u53c2!!"

    invoke-direct {p3, p4}, Ljava/io/FileNotFoundException;-><init>(Ljava/lang/String;)V

    throw p3

    .line 604
    :cond_3
    :goto_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnshare/YmnShareInterface;->getContext()Landroid/content/Context;

    move-result-object p3

    invoke-virtual {p3}, Landroid/content/Context;->getAssets()Landroid/content/res/AssetManager;

    move-result-object p3

    invoke-virtual {p3, p4}, Landroid/content/res/AssetManager;->open(Ljava/lang/String;)Ljava/io/InputStream;

    move-result-object p3

    invoke-static {p3}, Landroid/graphics/BitmapFactory;->decodeStream(Ljava/io/InputStream;)Landroid/graphics/Bitmap;

    move-result-object p3

    goto :goto_2

    .line 602
    :cond_4
    :goto_1
    invoke-static {p4}, Landroid/graphics/BitmapFactory;->decodeFile(Ljava/lang/String;)Landroid/graphics/Bitmap;

    move-result-object p3

    :goto_2
    const/16 p4, 0x80

    .line 608
    invoke-static {p3, p4, p4, p2}, Landroid/graphics/Bitmap;->createScaledBitmap(Landroid/graphics/Bitmap;IIZ)Landroid/graphics/Bitmap;

    move-result-object p3

    .line 609
    invoke-static {}, Lcom/bianfeng/ymnshare/utils/ShareUtils;->getInstance()Lcom/bianfeng/ymnshare/utils/ShareUtils;

    const/16 p4, 0x20

    invoke-static {p3, p4}, Lcom/bianfeng/ymnshare/utils/ShareUtils;->bmpToByteArray(Landroid/graphics/Bitmap;I)[B

    move-result-object p3

    iput-object p3, p1, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;->thumbData:[B
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_3

    :catch_0
    move-exception p3

    .line 611
    invoke-virtual {p3}, Ljava/lang/Exception;->printStackTrace()V

    .line 614
    :goto_3
    new-instance p3, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;

    invoke-direct {p3}, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;-><init>()V

    .line 615
    invoke-static {}, Lcom/bianfeng/ymnshare/utils/ShareUtils;->getInstance()Lcom/bianfeng/ymnshare/utils/ShareUtils;

    move-result-object p4

    const-string v0, "webpage"

    invoke-virtual {p4, v0}, Lcom/bianfeng/ymnshare/utils/ShareUtils;->buildTransaction(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p4

    iput-object p4, p3, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;->transaction:Ljava/lang/String;

    .line 616
    iput-object p1, p3, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;->message:Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;

    if-eq p5, p2, :cond_7

    const/4 p1, 0x2

    if-eq p5, p1, :cond_6

    const/4 p2, 0x3

    if-eq p5, p2, :cond_5

    const-string p1, "YmnShareInterface"

    const-string p2, "ShareFlag is Required!!!"

    .line 628
    invoke-static {p1, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 625
    :cond_5
    iput p1, p3, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;->scene:I

    goto :goto_4

    .line 622
    :cond_6
    sget-boolean p1, Lcom/bianfeng/ymnshare/YmnShareInterface;->isSupportTimeLine:Z

    iput p1, p3, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;->scene:I

    goto :goto_4

    :cond_7
    const/4 p1, 0x0

    .line 619
    iput p1, p3, Lcom/tencent/mm/opensdk/modelmsg/SendMessageToWX$Req;->scene:I

    .line 631
    :goto_4
    iget-object p1, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->api:Lcom/tencent/mm/opensdk/openapi/IWXAPI;

    invoke-interface {p1, p3}, Lcom/tencent/mm/opensdk/openapi/IWXAPI;->sendReq(Lcom/tencent/mm/opensdk/modelbase/BaseReq;)Z

    return-void
.end method


# virtual methods
.method public WXLaunchMiniProgram(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sharesdk_wx_launch_miniprogram"
    .end annotation

    const-string v0, "sharesdk_wx_launch_miniprogram"

    .line 815
    iput-object v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->funcName:Ljava/lang/String;

    const-string v0, "wx_appid"

    .line 816
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnshare/YmnShareInterface;->getPropertie(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 817
    invoke-virtual {p0}, Lcom/bianfeng/ymnshare/YmnShareInterface;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, v0}, Lcom/tencent/mm/opensdk/openapi/WXAPIFactory;->createWXAPI(Landroid/content/Context;Ljava/lang/String;)Lcom/tencent/mm/opensdk/openapi/IWXAPI;

    move-result-object v0

    .line 819
    new-instance v1, Lcom/tencent/mm/opensdk/modelbiz/WXLaunchMiniProgram$Req;

    invoke-direct {v1}, Lcom/tencent/mm/opensdk/modelbiz/WXLaunchMiniProgram$Req;-><init>()V

    .line 820
    iput-object p1, v1, Lcom/tencent/mm/opensdk/modelbiz/WXLaunchMiniProgram$Req;->userName:Ljava/lang/String;

    .line 821
    invoke-virtual {p2}, Ljava/lang/String;->isEmpty()Z

    move-result p1

    if-nez p1, :cond_0

    .line 822
    iput-object p2, v1, Lcom/tencent/mm/opensdk/modelbiz/WXLaunchMiniProgram$Req;->path:Ljava/lang/String;

    .line 825
    :cond_0
    invoke-static {p3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1

    const/4 p2, 0x0

    if-eqz p1, :cond_3

    const/4 p3, 0x1

    if-eq p1, p3, :cond_2

    const/4 p3, 0x2

    if-eq p1, p3, :cond_1

    .line 836
    iput p2, v1, Lcom/tencent/mm/opensdk/modelbiz/WXLaunchMiniProgram$Req;->miniprogramType:I

    goto :goto_0

    .line 833
    :cond_1
    iput p3, v1, Lcom/tencent/mm/opensdk/modelbiz/WXLaunchMiniProgram$Req;->miniprogramType:I

    goto :goto_0

    .line 830
    :cond_2
    iput p3, v1, Lcom/tencent/mm/opensdk/modelbiz/WXLaunchMiniProgram$Req;->miniprogramType:I

    goto :goto_0

    .line 827
    :cond_3
    iput p2, v1, Lcom/tencent/mm/opensdk/modelbiz/WXLaunchMiniProgram$Req;->miniprogramType:I

    .line 842
    :goto_0
    invoke-interface {v0, v1}, Lcom/tencent/mm/opensdk/openapi/IWXAPI;->sendReq(Lcom/tencent/mm/opensdk/modelbase/BaseReq;)Z

    return-void
.end method

.method public compressBitmapToFile(Ljava/lang/String;II)V
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sharesdk_image_compress_w_h"
    .end annotation

    const-string v0, "sharesdk_image_compress_w_h"

    .line 749
    iput-object v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->funcName:Ljava/lang/String;

    .line 750
    invoke-static {}, Lcom/bianfeng/ymnshare/utils/ShareUtils;->getInstance()Lcom/bianfeng/ymnshare/utils/ShareUtils;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3}, Lcom/bianfeng/ymnshare/utils/ShareUtils;->compressBitmapToFile(Ljava/lang/String;II)V

    return-void
.end method

.method public compressBitmapToFile(Ljava/lang/String;Ljava/lang/Double;)V
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sharesdk_image_compress_rate"
    .end annotation

    const-string v0, "sharesdk_image_compress_rate"

    .line 737
    iput-object v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->funcName:Ljava/lang/String;

    .line 738
    invoke-static {}, Lcom/bianfeng/ymnshare/utils/ShareUtils;->getInstance()Lcom/bianfeng/ymnshare/utils/ShareUtils;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/bianfeng/ymnshare/utils/ShareUtils;->compressBitmapToFile(Ljava/lang/String;Ljava/lang/Double;)V

    return-void
.end method

.method public compressBitmapToFile(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sharesdk_image_compress_rate"
    .end annotation

    const-string v0, "sharesdk_image_compress_rate;string"

    .line 731
    iput-object v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->funcName:Ljava/lang/String;

    .line 732
    invoke-static {p2}, Ljava/lang/Double;->parseDouble(Ljava/lang/String;)D

    move-result-wide v0

    invoke-static {v0, v1}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object p2

    invoke-virtual {p0, p1, p2}, Lcom/bianfeng/ymnshare/YmnShareInterface;->compressBitmapToFile(Ljava/lang/String;Ljava/lang/Double;)V

    return-void
.end method

.method public compressBitmapToFile(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sharesdk_image_compress_w_h"
    .end annotation

    const-string v0, "sharesdk_image_compress_w_h;int"

    .line 743
    iput-object v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->funcName:Ljava/lang/String;

    .line 744
    invoke-static {p2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p2

    invoke-static {p3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p3

    invoke-virtual {p0, p1, p2, p3}, Lcom/bianfeng/ymnshare/YmnShareInterface;->compressBitmapToFile(Ljava/lang/String;II)V

    return-void
.end method

.method public getPluginId()Ljava/lang/String;
    .locals 1

    const-string v0, "35"

    return-object v0
.end method

.method public getPluginName()Ljava/lang/String;
    .locals 1

    const-string v0, "ymnshare"

    return-object v0
.end method

.method public getPluginVersion()I
    .locals 1

    const/16 v0, 0x1b

    return v0
.end method

.method public getSdkVersion()Ljava/lang/String;
    .locals 1

    const-string v0, "2.0.3"

    return-object v0
.end method

.method public onActivityResult(IILandroid/content/Intent;)V
    .locals 3

    .line 355
    invoke-super {p0, p1, p2, p3}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onActivityResult(IILandroid/content/Intent;)V

    const/4 v0, 0x3

    new-array v0, v0, [Ljava/lang/Object;

    .line 356
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const/4 v2, 0x0

    aput-object v1, v0, v2

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const/4 v2, 0x1

    aput-object v1, v0, v2

    const/4 v1, 0x2

    aput-object p3, v0, v1

    const-string v1, "requestcode = %s, reponsecode=%s, intent=%s"

    invoke-static {v1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;)I

    const v0, 0x1e243

    if-ne p1, v0, :cond_1

    const/4 v0, -0x1

    const-string v1, ""

    const/16 v2, 0x322

    if-ne p2, v0, :cond_0

    .line 359
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->funcName:Ljava/lang/String;

    invoke-virtual {p0, v2, v0, v1}, Lcom/bianfeng/ymnshare/YmnShareInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 361
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->funcName:Ljava/lang/String;

    invoke-virtual {p0, v2, v0, v1}, Lcom/bianfeng/ymnshare/YmnShareInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    const/16 v0, 0x2777

    if-ne p1, v0, :cond_2

    .line 365
    new-instance v0, Lcom/bianfeng/ymnshare/YmnShareInterface$2;

    invoke-direct {v0, p0}, Lcom/bianfeng/ymnshare/YmnShareInterface$2;-><init>(Lcom/bianfeng/ymnshare/YmnShareInterface;)V

    invoke-static {p1, p2, p3, v0}, Lcom/tencent/tauth/Tencent;->onActivityResultData(IILandroid/content/Intent;Lcom/tencent/tauth/IUiListener;)Z

    :cond_2
    return-void
.end method

.method public onInit(Landroid/content/Context;)V
    .locals 4

    .line 182
    invoke-super {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onInit(Landroid/content/Context;)V

    const-string v0, "wx_appid"

    .line 183
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnshare/YmnShareInterface;->getPropertie(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x1

    .line 184
    invoke-static {p1, v0, v1}, Lcom/tencent/mm/opensdk/openapi/WXAPIFactory;->createWXAPI(Landroid/content/Context;Ljava/lang/String;Z)Lcom/tencent/mm/opensdk/openapi/IWXAPI;

    move-result-object v2

    iput-object v2, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->api:Lcom/tencent/mm/opensdk/openapi/IWXAPI;

    .line 185
    invoke-interface {v2, v0}, Lcom/tencent/mm/opensdk/openapi/IWXAPI;->registerApp(Ljava/lang/String;)Z

    .line 186
    iget-object v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->api:Lcom/tencent/mm/opensdk/openapi/IWXAPI;

    invoke-interface {v0}, Lcom/tencent/mm/opensdk/openapi/IWXAPI;->getWXAppSupportAPI()I

    move-result v0

    const v2, 0x21020001

    if-lt v0, v2, :cond_0

    .line 188
    sput-boolean v1, Lcom/bianfeng/ymnshare/YmnShareInterface;->isSupportTimeLine:Z

    .line 190
    :cond_0
    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v0

    const-string v2, "qq_appid"

    .line 191
    invoke-virtual {p0, v2}, Lcom/bianfeng/ymnshare/YmnShareInterface;->getPropertie(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ".qqfileprovider"

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, p1, v0}, Lcom/tencent/tauth/Tencent;->createInstance(Ljava/lang/String;Landroid/content/Context;Ljava/lang/String;)Lcom/tencent/tauth/Tencent;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->mTencent:Lcom/tencent/tauth/Tencent;

    .line 192
    invoke-static {v1}, Lcom/tencent/tauth/Tencent;->setIsPermissionGranted(Z)V

    return-void
.end method

.method public returnBitMap(Ljava/lang/String;Lcom/bianfeng/ymnshare/YmnShareInterface$downCallBack;)V
    .locals 2

    .line 859
    new-instance v0, Ljava/lang/Thread;

    new-instance v1, Lcom/bianfeng/ymnshare/YmnShareInterface$6;

    invoke-direct {v1, p0, p1, p2}, Lcom/bianfeng/ymnshare/YmnShareInterface$6;-><init>(Lcom/bianfeng/ymnshare/YmnShareInterface;Ljava/lang/String;Lcom/bianfeng/ymnshare/YmnShareInterface$downCallBack;)V

    invoke-direct {v0, v1}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 880
    invoke-virtual {v0}, Ljava/lang/Thread;->start()V

    return-void
.end method

.method public shareToLine(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "ymnshare_line"
    .end annotation

    const-string p1, "ymnshare_line"

    .line 217
    iput-object p1, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->funcName:Ljava/lang/String;

    .line 219
    :try_start_0
    new-instance p1, Landroid/content/ComponentName;

    const-string v0, "jp.naver.line.android"

    const-string v1, "jp.naver.line.android.activity.selectchat.SelectChatActivity"

    invoke-direct {p1, v0, v1}, Landroid/content/ComponentName;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 220
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    const-string v1, "android.intent.action.SEND"

    .line 221
    invoke-virtual {v0, v1}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    const-string v1, "text/plain"

    .line 222
    invoke-virtual {v0, v1}, Landroid/content/Intent;->setType(Ljava/lang/String;)Landroid/content/Intent;

    const-string v1, "android.intent.extra.TEXT"

    .line 223
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p3, " "

    invoke-virtual {v2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, v1, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 224
    invoke-virtual {v0, p1}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    .line 225
    invoke-virtual {p0}, Lcom/bianfeng/ymnshare/YmnShareInterface;->getContext()Landroid/content/Context;

    move-result-object p1

    const-string p2, ""

    invoke-static {v0, p2}, Landroid/content/Intent;->createChooser(Landroid/content/Intent;Ljava/lang/CharSequence;)Landroid/content/Intent;

    move-result-object p2

    invoke-virtual {p1, p2}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 227
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "lineShare:"

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const-string p3, "YmnShareInterface"

    invoke-static {p3, p2}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;Ljava/lang/String;)I

    const/16 p2, 0x322

    .line 228
    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "lineShare"

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->getCause()Ljava/lang/Throwable;

    move-result-object p1

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p3, "ymnshare_whatsapp"

    invoke-virtual {p0, p2, p1, p3}, Lcom/bianfeng/ymnshare/YmnShareInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public shareToWhatsapp(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 4
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "ymnshare_whatsapp"
    .end annotation

    const-string p1, "ymnshare_whatsapp"

    .line 198
    iput-object p1, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->funcName:Ljava/lang/String;

    .line 199
    invoke-static {}, Lcom/bianfeng/ymnshare/utils/ShareUtils;->getInstance()Lcom/bianfeng/ymnshare/utils/ShareUtils;

    invoke-virtual {p0}, Lcom/bianfeng/ymnshare/YmnShareInterface;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "com.whatsapp"

    invoke-static {v0, v1}, Lcom/bianfeng/ymnshare/utils/ShareUtils;->isAPPInstalled(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v0

    const/16 v2, 0x322

    if-nez v0, :cond_0

    const-string p2, "whatsapp is not install"

    .line 200
    invoke-virtual {p0, v2, p2, p1}, Lcom/bianfeng/ymnshare/YmnShareInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    return-void

    .line 204
    :cond_0
    :try_start_0
    new-instance v0, Landroid/content/Intent;

    const-string v3, "android.intent.action.SEND"

    invoke-direct {v0, v3}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 205
    invoke-virtual {v0, v1}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    const-string v1, "text/plain"

    .line 206
    invoke-virtual {v0, v1}, Landroid/content/Intent;->setType(Ljava/lang/String;)Landroid/content/Intent;

    const-string v1, "android.intent.extra.TEXT"

    .line 207
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p3, " "

    invoke-virtual {v3, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, v1, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 208
    invoke-virtual {p0}, Lcom/bianfeng/ymnshare/YmnShareInterface;->getActivity()Landroid/app/Activity;

    move-result-object p2

    const p3, 0x1e243

    invoke-virtual {p2, v0, p3}, Landroid/app/Activity;->startActivityForResult(Landroid/content/Intent;I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p2

    .line 210
    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "whatsAppShare err:"

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    const-string v0, "YmnShareInterface"

    invoke-static {v0, p3}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 211
    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "ymnshare_whatsapp err:"

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, v2, p2, p1}, Lcom/bianfeng/ymnshare/YmnShareInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public shareToYoutube()V
    .locals 0
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "ymnshare_youtube"
    .end annotation

    return-void
.end method

.method public sharesdk_wx_subscribe_msg_req(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sharesdk_wx_subscribe_msg_req"
    .end annotation

    const-string v0, "UTF-8"

    const-string v1, "YmnShareInterface"

    const-string v2, "reqWXSubscribeReq start"

    .line 331
    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    const/4 v1, 0x3

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object p1, v1, v2

    const/4 v2, 0x1

    aput-object p2, v1, v2

    const/4 v2, 0x2

    aput-object p3, v1, v2

    const-string v2, "scene = %s, templateId=%s, reserved=%s"

    .line 332
    invoke-static {v2, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;)I

    .line 336
    :try_start_0
    new-instance v1, Ljava/lang/String;

    invoke-virtual {p3}, Ljava/lang/String;->getBytes()[B

    move-result-object p3

    invoke-direct {v1, p3, v0}, Ljava/lang/String;-><init>([BLjava/lang/String;)V

    .line 337
    invoke-static {v1, v0}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p3

    .line 339
    new-instance v0, Lcom/tencent/mm/opensdk/modelbiz/SubscribeMessage$Req;

    invoke-direct {v0}, Lcom/tencent/mm/opensdk/modelbiz/SubscribeMessage$Req;-><init>()V

    .line 340
    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1

    iput p1, v0, Lcom/tencent/mm/opensdk/modelbiz/SubscribeMessage$Req;->scene:I

    .line 341
    iput-object p2, v0, Lcom/tencent/mm/opensdk/modelbiz/SubscribeMessage$Req;->templateID:Ljava/lang/String;

    .line 342
    iput-object p3, v0, Lcom/tencent/mm/opensdk/modelbiz/SubscribeMessage$Req;->reserved:Ljava/lang/String;

    .line 343
    iget-object p1, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->api:Lcom/tencent/mm/opensdk/openapi/IWXAPI;

    if-eqz p1, :cond_0

    .line 344
    iget-object p1, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->api:Lcom/tencent/mm/opensdk/openapi/IWXAPI;

    invoke-interface {p1, v0}, Lcom/tencent/mm/opensdk/openapi/IWXAPI;->sendReq(Lcom/tencent/mm/opensdk/modelbase/BaseReq;)Z

    goto :goto_0

    :cond_0
    const p1, 0x88ba

    const-string p2, "\u521d\u59cb\u5316\u5931\u8d25"

    .line 346
    invoke-virtual {p0, p1, p2}, Lcom/bianfeng/ymnshare/YmnShareInterface;->sendResult(ILjava/lang/String;)V
    :try_end_0
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 349
    invoke-virtual {p1}, Ljava/io/UnsupportedEncodingException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public showQQShare(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sharesdk_show_share_qq"
    .end annotation

    const-string v0, "YmnShareInterface"

    const-string v1, "showQQShare start"

    .line 755
    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    const-string v0, "sharesdk_show_share_qq"

    .line 756
    iput-object v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->funcName:Ljava/lang/String;

    .line 757
    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1

    const/4 v0, 0x2

    if-eq p1, v0, :cond_1

    const/4 v0, 0x3

    if-eq p1, v0, :cond_0

    goto :goto_0

    .line 762
    :cond_0
    invoke-direct {p0, p5, p2, p3, p4}, Lcom/bianfeng/ymnshare/YmnShareInterface;->qqShareWebPage(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 759
    :cond_1
    invoke-direct {p0, p4}, Lcom/bianfeng/ymnshare/YmnShareInterface;->qqShareImage(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public showQzoneShare(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sharesdk_show_share_qzone"
    .end annotation

    const-string p6, "sharesdk_show_share_qzone"

    .line 803
    iput-object p6, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->funcName:Ljava/lang/String;

    .line 804
    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1

    const/4 p6, 0x3

    if-eq p1, p6, :cond_0

    goto :goto_0

    .line 806
    :cond_0
    invoke-direct {p0, p5, p2, p3, p4}, Lcom/bianfeng/ymnshare/YmnShareInterface;->qqZoonShareWebPage(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public showWeChatShare(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 6
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sharesdk_show_share_wx"
    .end annotation

    const-string v0, "YmnShareInterface"

    const-string v1, "showWeChatShare start"

    .line 372
    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    const-string v0, "sharesdk_show_share_wx"

    .line 373
    iput-object v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->funcName:Ljava/lang/String;

    .line 374
    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1

    const/4 v1, 0x1

    if-eq p1, v1, :cond_2

    const/4 v1, 0x2

    if-eq p1, v1, :cond_1

    const/4 v1, 0x3

    if-eq p1, v1, :cond_0

    const/16 p1, 0x322

    const-string p2, "sharesdk_show_share_wx \u4e0d\u652f\u6301 "

    .line 385
    invoke-virtual {p0, p1, p2, v0}, Lcom/bianfeng/ymnshare/YmnShareInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    move-object v0, p0

    move-object v1, p5

    move-object v2, p2

    move-object v3, p3

    move-object v4, p4

    move-object v5, p6

    .line 382
    invoke-virtual/range {v0 .. v5}, Lcom/bianfeng/ymnshare/YmnShareInterface;->wxShareWebPage(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 379
    :cond_1
    invoke-virtual {p0, p4, p6}, Lcom/bianfeng/ymnshare/YmnShareInterface;->wxShareImage(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 376
    :cond_2
    invoke-virtual {p0, p3, p6}, Lcom/bianfeng/ymnshare/YmnShareInterface;->wxShareText(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public showWeChatShareWithMiniProgram(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 9
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sharesdk_show_share_wx_min_program"
    .end annotation

    move-object v8, p0

    move-object v5, p6

    const-string v0, "YmnShareInterface"

    const-string v1, "showWeChatShareWithMiniProgram start"

    .line 636
    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    const-string v1, "showWeChatShare start"

    .line 637
    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    const-string v0, "sharesdk_show_share_wx_min_program"

    .line 638
    iput-object v0, v8, Lcom/bianfeng/ymnshare/YmnShareInterface;->funcName:Ljava/lang/String;

    .line 639
    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    const/4 v1, 0x1

    if-eq v0, v1, :cond_3

    const/4 v1, 0x2

    if-eq v0, v1, :cond_2

    const/4 v1, 0x3

    if-eq v0, v1, :cond_1

    const/4 v1, 0x4

    if-eq v0, v1, :cond_0

    goto :goto_0

    :cond_0
    move-object v0, p0

    move-object v1, p2

    move-object v2, p3

    move-object v3, p4

    move-object v4, p5

    move-object/from16 v5, p7

    move-object/from16 v6, p8

    move-object/from16 v7, p9

    .line 650
    invoke-direct/range {v0 .. v7}, Lcom/bianfeng/ymnshare/YmnShareInterface;->wxShareMinProgram(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    move-object v0, p0

    move-object v1, p5

    move-object v2, p2

    move-object v3, p3

    move-object v4, p4

    move-object v5, p6

    .line 647
    invoke-virtual/range {v0 .. v5}, Lcom/bianfeng/ymnshare/YmnShareInterface;->wxShareWebPage(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_2
    move-object v0, p4

    .line 644
    invoke-virtual {p0, p4, p6}, Lcom/bianfeng/ymnshare/YmnShareInterface;->wxShareImage(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_3
    move-object v0, p3

    .line 641
    invoke-virtual {p0, p3, p6}, Lcom/bianfeng/ymnshare/YmnShareInterface;->wxShareText(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public systemShare(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "ymnshare_system"
    .end annotation

    const-string p1, "ymnshare_system"

    .line 239
    iput-object p1, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->funcName:Ljava/lang/String;

    .line 240
    new-instance p1, Landroid/content/Intent;

    const-string p3, "android.intent.action.SEND"

    invoke-direct {p1, p3}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 241
    new-instance p3, Ljava/io/File;

    invoke-direct {p3, p2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {p3}, Landroid/net/Uri;->fromFile(Ljava/io/File;)Landroid/net/Uri;

    move-result-object p2

    const-string p3, "android.intent.extra.STREAM"

    .line 242
    invoke-virtual {p1, p3, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Landroid/os/Parcelable;)Landroid/content/Intent;

    const-string p2, "image/*"

    .line 243
    invoke-virtual {p1, p2}, Landroid/content/Intent;->setType(Ljava/lang/String;)Landroid/content/Intent;

    .line 244
    invoke-virtual {p0}, Lcom/bianfeng/ymnshare/YmnShareInterface;->getActivity()Landroid/app/Activity;

    move-result-object p2

    const-string p3, "share"

    invoke-static {p1, p3}, Landroid/content/Intent;->createChooser(Landroid/content/Intent;Ljava/lang/CharSequence;)Landroid/content/Intent;

    move-result-object p1

    invoke-virtual {p2, p1}, Landroid/app/Activity;->startActivity(Landroid/content/Intent;)V

    return-void
.end method

.method public wxShareImage(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 439
    iget-object v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->api:Lcom/tencent/mm/opensdk/openapi/IWXAPI;

    invoke-interface {v0}, Lcom/tencent/mm/opensdk/openapi/IWXAPI;->isWXAppInstalled()Z

    move-result v0

    if-nez v0, :cond_0

    const/16 p1, 0x322

    .line 440
    iget-object p2, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->funcName:Ljava/lang/String;

    const-string v0, "\u5fae\u4fe1\u672a\u5b89\u88c5\uff01"

    invoke-virtual {p0, p1, v0, p2}, Lcom/bianfeng/ymnshare/YmnShareInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    const-string v0, "http"

    .line 442
    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 443
    iput-object p2, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->myShareFlag:Ljava/lang/String;

    .line 444
    new-instance p2, Lcom/bianfeng/ymnshare/YmnShareInterface$3;

    invoke-direct {p2, p0}, Lcom/bianfeng/ymnshare/YmnShareInterface$3;-><init>(Lcom/bianfeng/ymnshare/YmnShareInterface;)V

    invoke-virtual {p0, p1, p2}, Lcom/bianfeng/ymnshare/YmnShareInterface;->returnBitMap(Ljava/lang/String;Lcom/bianfeng/ymnshare/YmnShareInterface$downCallBack;)V

    goto :goto_0

    .line 451
    :cond_1
    invoke-static {p2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p2

    invoke-direct {p0, p1, p2}, Lcom/bianfeng/ymnshare/YmnShareInterface;->wxShareImage(Ljava/lang/String;I)V

    :goto_0
    return-void
.end method

.method public wxShareText(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    const-string v0, "YmnShareInterface"

    const-string v1, "YmnShareInterface init"

    .line 391
    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 392
    invoke-static {}, Lcom/bianfeng/ymnshare/utils/ShareUtils;->getInstance()Lcom/bianfeng/ymnshare/utils/ShareUtils;

    invoke-virtual {p0}, Lcom/bianfeng/ymnshare/YmnShareInterface;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "com.tencent.mm"

    invoke-static {v0, v1}, Lcom/bianfeng/ymnshare/utils/ShareUtils;->isAPPInstalled(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const/16 p1, 0x322

    .line 393
    iget-object p2, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->funcName:Ljava/lang/String;

    const-string v0, "\u5fae\u4fe1\u672a\u5b89\u88c5\uff01"

    invoke-virtual {p0, p1, v0, p2}, Lcom/bianfeng/ymnshare/YmnShareInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 395
    :cond_0
    invoke-static {p2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p2

    invoke-direct {p0, p1, p2}, Lcom/bianfeng/ymnshare/YmnShareInterface;->wxShareText(Ljava/lang/String;I)V

    :goto_0
    return-void
.end method

.method public wxShareWebPage(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 6

    .line 542
    iget-object v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->api:Lcom/tencent/mm/opensdk/openapi/IWXAPI;

    invoke-interface {v0}, Lcom/tencent/mm/opensdk/openapi/IWXAPI;->isWXAppInstalled()Z

    move-result v0

    if-nez v0, :cond_0

    const/16 p1, 0x322

    .line 543
    iget-object p2, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->funcName:Ljava/lang/String;

    const-string p3, "\u5fae\u4fe1\u672a\u5b89\u88c5\uff01"

    invoke-virtual {p0, p1, p3, p2}, Lcom/bianfeng/ymnshare/YmnShareInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    const-string v0, "http"

    .line 545
    invoke-virtual {p4, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 546
    iput-object p5, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->myShareFlag:Ljava/lang/String;

    .line 547
    iput-object p2, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->mytitle:Ljava/lang/String;

    .line 548
    iput-object p3, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->mydes:Ljava/lang/String;

    .line 549
    iput-object p1, p0, Lcom/bianfeng/ymnshare/YmnShareInterface;->myurl:Ljava/lang/String;

    .line 550
    new-instance p1, Lcom/bianfeng/ymnshare/YmnShareInterface$4;

    invoke-direct {p1, p0}, Lcom/bianfeng/ymnshare/YmnShareInterface$4;-><init>(Lcom/bianfeng/ymnshare/YmnShareInterface;)V

    invoke-virtual {p0, p4, p1}, Lcom/bianfeng/ymnshare/YmnShareInterface;->returnBitMap(Ljava/lang/String;Lcom/bianfeng/ymnshare/YmnShareInterface$downCallBack;)V

    goto :goto_0

    .line 557
    :cond_1
    invoke-static {p5}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v5

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v4, p4

    invoke-direct/range {v0 .. v5}, Lcom/bianfeng/ymnshare/YmnShareInterface;->wxShareWebPage(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V

    :goto_0
    return-void
.end method
