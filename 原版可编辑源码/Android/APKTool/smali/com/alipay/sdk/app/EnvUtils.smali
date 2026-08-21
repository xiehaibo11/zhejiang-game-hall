.class public Lcom/alipay/sdk/app/EnvUtils;
.super Ljava/lang/Object;
.source "SourceFile"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/alipay/sdk/app/EnvUtils$EnvEnum;
    }
.end annotation


# static fields
.field public static mEnv:Lcom/alipay/sdk/app/EnvUtils$EnvEnum;


# direct methods
.method public static constructor <clinit>()V
    .locals 1

    .line 1
    sget-object v0, Lcom/alipay/sdk/app/EnvUtils$EnvEnum;->ONLINE:Lcom/alipay/sdk/app/EnvUtils$EnvEnum;

    sput-object v0, Lcom/alipay/sdk/app/EnvUtils;->mEnv:Lcom/alipay/sdk/app/EnvUtils$EnvEnum;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static geEnv()Lcom/alipay/sdk/app/EnvUtils$EnvEnum;
    .locals 1

    .line 1
    sget-object v0, Lcom/alipay/sdk/app/EnvUtils;->mEnv:Lcom/alipay/sdk/app/EnvUtils$EnvEnum;

    return-object v0
.end method

.method public static isNewSanBox()Z
    .locals 2

    .line 1
    sget-object v0, Lcom/alipay/sdk/app/EnvUtils;->mEnv:Lcom/alipay/sdk/app/EnvUtils$EnvEnum;

    sget-object v1, Lcom/alipay/sdk/app/EnvUtils$EnvEnum;->SANDBOX:Lcom/alipay/sdk/app/EnvUtils$EnvEnum;

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public static isPreSandBox()Z
    .locals 2

    .line 1
    sget-object v0, Lcom/alipay/sdk/app/EnvUtils;->mEnv:Lcom/alipay/sdk/app/EnvUtils$EnvEnum;

    sget-object v1, Lcom/alipay/sdk/app/EnvUtils$EnvEnum;->PRE_SANDBOX:Lcom/alipay/sdk/app/EnvUtils$EnvEnum;

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public static isSandBox()Z
    .locals 1

    .line 1
    invoke-static {}, Lcom/alipay/sdk/app/EnvUtils;->isPreSandBox()Z

    move-result v0

    if-nez v0, :cond_1

    invoke-static {}, Lcom/alipay/sdk/app/EnvUtils;->isNewSanBox()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v0, 0x1

    :goto_1
    return v0
.end method

.method public static setEnv(Lcom/alipay/sdk/app/EnvUtils$EnvEnum;)V
    .locals 0

    .line 1
    sput-object p0, Lcom/alipay/sdk/app/EnvUtils;->mEnv:Lcom/alipay/sdk/app/EnvUtils$EnvEnum;

    return-void
.end method
