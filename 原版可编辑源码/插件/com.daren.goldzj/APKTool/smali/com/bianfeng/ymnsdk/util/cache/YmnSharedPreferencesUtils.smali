.class public Lcom/bianfeng/ymnsdk/util/cache/YmnSharedPreferencesUtils;
.super Ljava/lang/Object;
.source "YmnSharedPreferencesUtils.java"


# static fields
.field private static final YMNAGREEPRIVACY:Ljava/lang/String; = "ymn_agree_privacy"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static isAgreeprivacy()Z
    .locals 1

    const-string v0, "ymn_agree_privacy"

    .line 1
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getBoolean(Ljava/lang/String;)Z

    move-result v0

    return v0
.end method

.method public static setYmnagreeprivacy()V
    .locals 2

    const-string v0, "ymn_agree_privacy"

    .line 1
    :try_start_0
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getBoolean(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_0

    const/4 v1, 0x1

    .line 3
    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_0
    return-void
.end method
