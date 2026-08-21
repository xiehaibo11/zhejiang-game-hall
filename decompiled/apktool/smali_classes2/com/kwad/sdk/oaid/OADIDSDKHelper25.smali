.class public Lcom/kwad/sdk/oaid/OADIDSDKHelper25;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/oaid/OADIDSDKHelper25$a;,
        Lcom/kwad/sdk/oaid/OADIDSDKHelper25$IIdentifierListener25;
    }
.end annotation


# static fields
.field private static final SUB_TAG:Ljava/lang/String; = "OADIDSDKHelper25:"

.field private static final TAG:Ljava/lang/String; = "KSAdSDK"

.field private static mIsRequestIng:Z

.field private static sGetOaidFail:Z


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$002(Z)Z
    .locals 0

    sput-boolean p0, Lcom/kwad/sdk/oaid/OADIDSDKHelper25;->sGetOaidFail:Z

    return p0
.end method

.method static synthetic access$102(Z)Z
    .locals 0

    sput-boolean p0, Lcom/kwad/sdk/oaid/OADIDSDKHelper25;->mIsRequestIng:Z

    return p0
.end method

.method public static getOAId(Landroid/content/Context;Lcom/kwad/sdk/oaid/OADIDSDKHelper25$a;)V
    .locals 7

    const-string v0, "KSAdSDK"

    if-eqz p0, :cond_3

    sget-boolean v1, Lcom/kwad/sdk/oaid/OADIDSDKHelper25;->sGetOaidFail:Z

    if-eqz v1, :cond_0

    goto :goto_0

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/oaid/OADIDSDKHelper25;->isSupport()Z

    move-result v1

    const/4 v2, 0x1

    if-nez v1, :cond_1

    sput-boolean v2, Lcom/kwad/sdk/oaid/OADIDSDKHelper25;->sGetOaidFail:Z

    return-void

    :cond_1
    sget-boolean v1, Lcom/kwad/sdk/oaid/OADIDSDKHelper25;->mIsRequestIng:Z

    if-eqz v1, :cond_2

    return-void

    :cond_2
    sput-boolean v2, Lcom/kwad/sdk/oaid/OADIDSDKHelper25;->mIsRequestIng:Z

    :try_start_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    new-instance v1, Lcom/kwad/sdk/oaid/OADIDSDKHelper25$IIdentifierListener25;

    invoke-direct {v1, v3, v4, p1}, Lcom/kwad/sdk/oaid/OADIDSDKHelper25$IIdentifierListener25;-><init>(JLcom/kwad/sdk/oaid/OADIDSDKHelper25$a;)V

    invoke-static {p0, v2, v1}, Lcom/bun/miitmdid/core/MdidSdkHelper;->InitSdk(Landroid/content/Context;ZLcom/bun/miitmdid/interfaces/IIdentifierListener;)I

    move-result p0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    sub-long/2addr v5, v3

    new-instance p1, Ljava/lang/StringBuilder;

    const-string v1, "OADIDSDKHelper25:sdk init time="

    invoke-direct {p1, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1, v5, v6}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, "--result="

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    const-string p0, "OADIDSDKHelper25:oaid sdk not find "

    invoke-static {v0, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    const/4 p0, 0x0

    sput-boolean p0, Lcom/kwad/sdk/oaid/OADIDSDKHelper25;->mIsRequestIng:Z

    sput-boolean v2, Lcom/kwad/sdk/oaid/OADIDSDKHelper25;->sGetOaidFail:Z

    :cond_3
    :goto_0
    return-void
.end method

.method public static isSupport()Z
    .locals 5

    const-string v0, "KSAdSDK"

    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/4 v2, 0x0

    const/16 v3, 0x15

    if-ge v1, v3, :cond_0

    return v2

    :cond_0
    :try_start_0
    new-instance v1, Lcom/kwad/sdk/oaid/OADIDSDKHelper25$1;

    invoke-direct {v1}, Lcom/kwad/sdk/oaid/OADIDSDKHelper25$1;-><init>()V

    const/4 v3, 0x0

    const/4 v4, 0x1

    invoke-interface {v1, v4, v3}, Lcom/bun/miitmdid/interfaces/IIdentifierListener;->OnSupport(ZLcom/bun/miitmdid/interfaces/IdSupplier;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    const-string v1, "com.bun.miitmdid.core.MdidSdkHelper"

    const-class v3, Lcom/kwad/sdk/oaid/OADIDSDKHelper25;

    invoke-virtual {v3}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v3

    invoke-static {v1, v2, v3}, Ljava/lang/Class;->forName(Ljava/lang/String;ZLjava/lang/ClassLoader;)Ljava/lang/Class;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return v4

    :catchall_0
    const-string v1, "OADIDSDKHelper25:com.bun.miitmdid.core.MdidSdkHelper oaid sdk not find "

    :goto_0
    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return v2

    :catchall_1
    const-string v1, "OADIDSDKHelper25:isSupport oaid sdk not find "

    goto :goto_0
.end method
