.class public Lcom/bianfeng/toponad/common/ToponSpUtils;
.super Ljava/lang/Object;
.source "ToponSpUtils.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 6
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static isSHowSplashAd()Z
    .locals 3

    const-string v0, "is_show_topon_splashad"

    .line 10
    :try_start_0
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getBoolean(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_0

    const/4 v2, 0x1

    .line 12
    invoke-static {v0, v2}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Z)V
    :try_end_0
    .catch Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return v1

    :catch_0
    move-exception v0

    .line 16
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;->printStackTrace()V

    const/4 v0, 0x0

    return v0
.end method
