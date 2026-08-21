.class public Lcom/bianfeng/ymnsdk/util/cache/YmnSharedPreferencesUtils;
.super Ljava/lang/Object;
.source "YmnSharedPreferencesUtils.java"


# static fields
.field private static final YMNAGREEPRIVACY:Ljava/lang/String; = "ymn_agree_privacy"

.field private static final YMN_CLIP_ALLOW:Ljava/lang/String; = "ymn_clip_allow"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 6
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static clearAgreePrivacy()V
    .locals 2

    .line 28
    :try_start_0
    const-string v0, "ymn_agree_privacy"

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 31
    goto :goto_0

    .line 29
    :catch_0
    move-exception v0

    .line 32
    :goto_0
    return-void
.end method

.method public static isAgreeprivacy()Z
    .locals 1

    .line 22
    const-string v0, "ymn_agree_privacy"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getBoolean(Ljava/lang/String;)Z

    move-result v0

    return v0
.end method

.method public static isYmnClipAllow()Z
    .locals 1

    .line 43
    const-string v0, "ymn_clip_allow"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getBoolean(Ljava/lang/String;)Z

    move-result v0

    return v0
.end method

.method public static setYmnClipAllow(Z)V
    .locals 1
    .param p0, "isAllow"    # Z

    .line 37
    :try_start_0
    const-string v0, "ymn_clip_allow"

    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 39
    goto :goto_0

    .line 38
    :catch_0
    move-exception v0

    .line 40
    :goto_0
    return-void
.end method

.method public static setYmnagreeprivacy()V
    .locals 3

    .line 12
    const-string v0, "ymn_agree_privacy"

    :try_start_0
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getBoolean(Ljava/lang/String;)Z

    move-result v1

    .line 13
    .local v1, "isAgree":Z
    if-nez v1, :cond_0

    .line 14
    const/4 v2, 0x1

    invoke-static {v0, v2}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 17
    .end local v1    # "isAgree":Z
    :cond_0
    goto :goto_0

    .line 16
    :catch_0
    move-exception v0

    .line 18
    :goto_0
    return-void
.end method
