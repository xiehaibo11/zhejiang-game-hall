.class public final Lcom/bianfeng/ymnsdk/utilslib/device/MacInfo;
.super Ljava/lang/Object;
.source "MacInfo.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 8
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private getMacAddressByNetworkInterface()Ljava/lang/String;
    .locals 1

    .line 18
    const/4 v0, 0x0

    return-object v0
.end method

.method private getMacAddressBySysFile()Ljava/lang/String;
    .locals 1

    .line 14
    const/4 v0, 0x0

    return-object v0
.end method


# virtual methods
.method public getMacAddress(Landroid/content/Context;)Ljava/lang/String;
    .locals 1
    .param p1, "context"    # Landroid/content/Context;

    .line 10
    const/4 v0, 0x0

    return-object v0
.end method
