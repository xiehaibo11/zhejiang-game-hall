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

.field public static final YNN_INIT_ALONE:Ljava/lang/String; = "YNN_INIT_ALONE"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 5
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getYmnsdkPayNeedLogininfo()Z
    .locals 2

    .line 28
    const-string v0, "YMNSDK_PAY_NEED_LOGININFO"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 29
    .local v0, "s":Ljava/lang/String;
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    xor-int/lit8 v1, v1, 0x1

    return v1
.end method

.method private static getYmnsdkTradeType()Ljava/lang/String;
    .locals 1

    .line 32
    const-string v0, "YMNSDK_TRADE_TYPE"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private static getYmnsdkType()Ljava/lang/String;
    .locals 1

    .line 15
    const-string v0, "YMNSDK_TYPE"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static isInitAlone()Z
    .locals 2

    .line 44
    const-string v0, "YNN_INIT_ALONE"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 45
    .local v0, "str":Ljava/lang/String;
    if-eqz v0, :cond_0

    const-string v1, "alone"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 47
    const/4 v1, 0x1

    return v1

    .line 49
    :cond_0
    const/4 v1, 0x0

    return v1
.end method

.method public static isNewLogin()Z
    .locals 2

    .line 20
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnsdkTypeUtils;->getYmnsdkType()Ljava/lang/String;

    move-result-object v0

    .line 21
    .local v0, "type":Ljava/lang/String;
    const-string v1, "ymnsdk_new"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 22
    const/4 v1, 0x1

    return v1

    .line 24
    :cond_0
    const/4 v1, 0x0

    return v1
.end method

.method public static isNewTrade()Z
    .locals 2

    .line 35
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnsdkTypeUtils;->getYmnsdkTradeType()Ljava/lang/String;

    move-result-object v0

    .line 36
    .local v0, "type":Ljava/lang/String;
    const-string v1, "ymnsdk_trade_new"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 37
    const/4 v1, 0x1

    return v1

    .line 39
    :cond_0
    const/4 v1, 0x0

    return v1
.end method
