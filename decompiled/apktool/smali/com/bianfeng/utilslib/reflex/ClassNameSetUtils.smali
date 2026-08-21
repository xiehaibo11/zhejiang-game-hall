.class public Lcom/bianfeng/utilslib/reflex/ClassNameSetUtils;
.super Ljava/lang/Object;
.source "ClassNameSetUtils.java"


# static fields
.field private static utils:Lcom/bianfeng/utilslib/reflex/ClassNameSetUtils;


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 8
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/utilslib/reflex/ClassNameSetUtils;
    .locals 1

    .line 12
    sget-object v0, Lcom/bianfeng/utilslib/reflex/ClassNameSetUtils;->utils:Lcom/bianfeng/utilslib/reflex/ClassNameSetUtils;

    if-nez v0, :cond_0

    .line 13
    new-instance v0, Lcom/bianfeng/utilslib/reflex/ClassNameSetUtils;

    invoke-direct {v0}, Lcom/bianfeng/utilslib/reflex/ClassNameSetUtils;-><init>()V

    sput-object v0, Lcom/bianfeng/utilslib/reflex/ClassNameSetUtils;->utils:Lcom/bianfeng/utilslib/reflex/ClassNameSetUtils;

    .line 15
    :cond_0
    sget-object v0, Lcom/bianfeng/utilslib/reflex/ClassNameSetUtils;->utils:Lcom/bianfeng/utilslib/reflex/ClassNameSetUtils;

    return-object v0
.end method


# virtual methods
.method public gePayCallback()Ljava/lang/String;
    .locals 1

    const-string v0, "com.bianfeng.splitscreenlib.pay.YmnPayCallBack"

    return-object v0
.end method

.method public getH5PayCallback()Ljava/lang/String;
    .locals 1

    const-string v0, "com.bianfeng.paylib.YmnWebpaysdkCallback"

    return-object v0
.end method

.method public getH5PayWebCallback()Ljava/lang/String;
    .locals 1

    const-string v0, "com.bianfeng.paylib.YmnWebpayWebsdkCallback"

    return-object v0
.end method

.method public getH5Version()Ljava/lang/String;
    .locals 1

    const-string v0, "com.bianfeng.splitscreenlib.utils.YmnH5Version"

    return-object v0
.end method

.method public getLoginCallback()Ljava/lang/String;
    .locals 1

    const-string v0, "com.bianfeng.splitscreenlib.login.YmnLoginCallBack"

    return-object v0
.end method

.method public getTestClassName()Ljava/lang/String;
    .locals 1

    const-string v0, "com.bianfeng.utilslib_app.TestUtilslibCallback"

    return-object v0
.end method
