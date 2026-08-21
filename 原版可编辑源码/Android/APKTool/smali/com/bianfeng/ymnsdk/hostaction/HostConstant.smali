.class public Lcom/bianfeng/ymnsdk/hostaction/HostConstant;
.super Ljava/lang/Object;
.source "HostConstant.java"


# static fields
.field public static LOGIN_URL_HOST_INPACKAGE_A:Ljava/lang/String; = null

.field public static LOGIN_URL_HOST_INPACKAGE_A_WERIGHT:I = 0x0

.field public static LOGIN_URL_HOST_INPACKAGE_B:Ljava/lang/String; = null

.field public static LOGIN_URL_HOST_INPACKAGE_B_WERIGHT:I = 0x0

.field public static final MAXBOUND:I = 0x270f

.field public static final MAXGETNUM:I = 0x3

.field public static final MAXREQUEST:I = 0x0

.field public static SDK_CONFIG_HOST_INPACKAGE_A_WERIGHT:I = 0x0

.field public static SDK_CONFIG_HOST_INPACKAGE_B_WERIGHT:I = 0x0

.field public static SDK_CONFIG_URL_HOST_INPACKAGE_A:Ljava/lang/String; = null

.field public static SDK_CONFIG_URL_HOST_INPACKAGE_B:Ljava/lang/String; = null

.field public static TRADE_URL_HOST_INPACKAGE_A:Ljava/lang/String; = null

.field public static TRADE_URL_HOST_INPACKAGE_A_WERIGHT:I = 0x0

.field public static TRADE_URL_HOST_INPACKAGE_B:Ljava/lang/String; = null

.field public static TRADE_URL_HOST_INPACKAGE_B_WERIGHT:I = 0x0

.field public static YMN_URL_HOST_INPACKAGE_A:Ljava/lang/String; = null

.field public static YMN_URL_HOST_INPACKAGE_A_WERIGHT:I = 0x0

.field public static YMN_URL_HOST_INPACKAGE_B:Ljava/lang/String; = null

.field public static YMN_URL_HOST_INPACKAGE_B_WERIGHT:I = 0x0

.field public static final config:Ljava/lang/String; = "sdk_config"

.field public static final login:Ljava/lang/String; = "login"

.field public static final trade:Ljava/lang/String; = "trade"

.field public static final ymn:Ljava/lang/String; = "ymn"


# direct methods
.method static constructor <clinit>()V
    .locals 3

    .line 4
    const-string v0, "https://login.imeete.com"

    sput-object v0, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->LOGIN_URL_HOST_INPACKAGE_A:Ljava/lang/String;

    .line 6
    const-string v0, "https://login.imeete.net"

    sput-object v0, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->LOGIN_URL_HOST_INPACKAGE_B:Ljava/lang/String;

    .line 8
    const/4 v0, 0x4

    sput v0, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->LOGIN_URL_HOST_INPACKAGE_A_WERIGHT:I

    .line 10
    const/4 v1, 0x1

    sput v1, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->LOGIN_URL_HOST_INPACKAGE_B_WERIGHT:I

    .line 13
    const-string v2, "https://trade.bianfeng.com"

    sput-object v2, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->TRADE_URL_HOST_INPACKAGE_A:Ljava/lang/String;

    .line 15
    const-string v2, "https://trade.imeete.com"

    sput-object v2, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->TRADE_URL_HOST_INPACKAGE_B:Ljava/lang/String;

    .line 17
    sput v1, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->TRADE_URL_HOST_INPACKAGE_A_WERIGHT:I

    .line 19
    const/4 v2, 0x3

    sput v2, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->TRADE_URL_HOST_INPACKAGE_B_WERIGHT:I

    .line 21
    const-string v2, "https://sdk-config.imeete.net"

    sput-object v2, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->SDK_CONFIG_URL_HOST_INPACKAGE_A:Ljava/lang/String;

    .line 23
    const-string v2, "https://sdk-config.imeete.com"

    sput-object v2, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->SDK_CONFIG_URL_HOST_INPACKAGE_B:Ljava/lang/String;

    .line 25
    sput v0, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->SDK_CONFIG_HOST_INPACKAGE_A_WERIGHT:I

    .line 27
    sput v1, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->SDK_CONFIG_HOST_INPACKAGE_B_WERIGHT:I

    .line 30
    const-string v0, "https://ymn.bianfeng.com"

    sput-object v0, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->YMN_URL_HOST_INPACKAGE_A:Ljava/lang/String;

    .line 32
    const-string v0, "https://ymnsdk.bianfeng.com"

    sput-object v0, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->YMN_URL_HOST_INPACKAGE_B:Ljava/lang/String;

    .line 34
    sput v1, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->YMN_URL_HOST_INPACKAGE_A_WERIGHT:I

    .line 36
    sput v1, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->YMN_URL_HOST_INPACKAGE_B_WERIGHT:I

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 3
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method
