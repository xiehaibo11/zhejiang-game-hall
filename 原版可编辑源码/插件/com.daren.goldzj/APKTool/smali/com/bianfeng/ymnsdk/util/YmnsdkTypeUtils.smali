.class public Lcom/bianfeng/ymnsdk/util/YmnsdkTypeUtils;
.super Ljava/lang/Object;
.source "YmnsdkTypeUtils.java"


# static fields
.field public static final YMNSDK_NEW:Ljava/lang/String; = "ymnsdk_new"

.field public static final YMNSDK_OLD:Ljava/lang/String; = "ymnsdk_old"

.field public static final YMNSDK_PAY_NEED_LOGININFO:Ljava/lang/String; = "YMNSDK_PAY_NEED_LOGININFO"

.field public static final YMNSDK_TRADE_NEW:Ljava/lang/String; = "ymnsdk_trade_new"

.field public static final YMNSDK_TRADE_TYPE:Ljava/lang/String; = "YMNSDK_TRADE_TYPE"

.field public static final YMNSDK_TYPE:Ljava/lang/String; = "YMNSDK_TYPE"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getYmnsdkPayNeedLogininfo()Z
    .locals 1

    const-string v0, "YMNSDK_PAY_NEED_LOGININFO"

    .line 1
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 2
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    return v0
.end method

.method private static getYmnsdkTradeType()Ljava/lang/String;
    .locals 1

    const-string v0, "YMNSDK_TRADE_TYPE"

    .line 1
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private static getYmnsdkType()Ljava/lang/String;
    .locals 1

    const-string v0, "YMNSDK_TYPE"

    .line 1
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static isNewLogin()Z
    .locals 2

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnsdkTypeUtils;->getYmnsdkType()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ymnsdk_new"

    .line 2
    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static isNewTrade()Z
    .locals 2

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnsdkTypeUtils;->getYmnsdkTradeType()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ymnsdk_trade_new"

    .line 2
    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method
