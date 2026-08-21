.class public Lcom/bianfeng/ymnsdk/util/YmnUtilsdk;
.super Ljava/lang/Object;
.source "YmnUtilsdk.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static init(Landroid/content/Context;)V
    .locals 0

    .line 1
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->initContext(Landroid/content/Context;)V

    .line 2
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->init(Landroid/content/Context;)V

    return-void
.end method

.method public static isAgreeprivacy()Z
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/cache/YmnSharedPreferencesUtils;->isAgreeprivacy()Z

    move-result v0

    return v0
.end method

.method public static setAgreePrivacy()V
    .locals 0

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/cache/YmnSharedPreferencesUtils;->setYmnagreeprivacy()V

    return-void
.end method
