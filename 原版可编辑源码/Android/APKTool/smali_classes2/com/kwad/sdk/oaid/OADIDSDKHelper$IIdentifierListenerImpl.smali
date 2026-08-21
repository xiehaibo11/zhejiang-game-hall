.class Lcom/kwad/sdk/oaid/OADIDSDKHelper$IIdentifierListenerImpl;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bun/miitmdid/interfaces/IIdentifierListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/oaid/OADIDSDKHelper;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "IIdentifierListenerImpl"
.end annotation


# instance fields
.field private final mOaidListener:Lcom/kwad/sdk/oaid/OADIDSDKHelper$a;

.field private final mStartTime:J


# direct methods
.method public constructor <init>(JLcom/kwad/sdk/oaid/OADIDSDKHelper$a;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-wide p1, p0, Lcom/kwad/sdk/oaid/OADIDSDKHelper$IIdentifierListenerImpl;->mStartTime:J

    iput-object p3, p0, Lcom/kwad/sdk/oaid/OADIDSDKHelper$IIdentifierListenerImpl;->mOaidListener:Lcom/kwad/sdk/oaid/OADIDSDKHelper$a;

    return-void
.end method


# virtual methods
.method public onSupport(Lcom/bun/miitmdid/interfaces/IdSupplier;)V
    .locals 4

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/kwad/sdk/oaid/OADIDSDKHelper$IIdentifierListenerImpl;->mStartTime:J

    sub-long/2addr v0, v2

    if-eqz p1, :cond_1

    invoke-interface {p1}, Lcom/bun/miitmdid/interfaces/IdSupplier;->getOAID()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "OADIDSDKHelper:oaid time="

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v0, "--OAID:"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "KSAdSDK"

    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    iget-object v0, p0, Lcom/kwad/sdk/oaid/OADIDSDKHelper$IIdentifierListenerImpl;->mOaidListener:Lcom/kwad/sdk/oaid/OADIDSDKHelper$a;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/oaid/OADIDSDKHelper$a;->dr(Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    const/4 p1, 0x1

    invoke-static {p1}, Lcom/kwad/sdk/oaid/OADIDSDKHelper;->access$002(Z)Z

    :cond_1
    :goto_0
    const/4 p1, 0x0

    invoke-static {p1}, Lcom/kwad/sdk/oaid/OADIDSDKHelper;->access$102(Z)Z

    return-void
.end method
