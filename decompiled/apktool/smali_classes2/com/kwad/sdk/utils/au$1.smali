.class final Lcom/kwad/sdk/utils/au$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/f/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/utils/au;->cH(Landroid/content/Context;)Lcom/kwad/sdk/f/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic jz:Landroid/content/Context;


# direct methods
.method constructor <init>(Landroid/content/Context;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/utils/au$1;->jz:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final Fo()Ljava/lang/String;
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "getIMEI:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/utils/au$1;->jz:Landroid/content/Context;

    const/4 v2, 0x1

    invoke-static {v1, v2}, Lcom/kwad/sdk/utils/au;->j(Landroid/content/Context;Z)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "SDKPrivateSafetyDataUtil"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/sdk/utils/au$1;->jz:Landroid/content/Context;

    invoke-static {v0, v2}, Lcom/kwad/sdk/utils/au;->j(Landroid/content/Context;Z)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final Fp()Ljava/lang/String;
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "getAndroidID:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/utils/au$1;->jz:Landroid/content/Context;

    const/4 v2, 0x1

    invoke-static {v1, v2}, Lcom/kwad/sdk/utils/au;->k(Landroid/content/Context;Z)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "SDKPrivateSafetyDataUtil"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/sdk/utils/au$1;->jz:Landroid/content/Context;

    invoke-static {v0, v2}, Lcom/kwad/sdk/utils/au;->k(Landroid/content/Context;Z)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final Fq()Ljava/lang/String;
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "getMac:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/utils/au$1;->jz:Landroid/content/Context;

    const/4 v2, 0x1

    invoke-static {v1, v2}, Lcom/kwad/sdk/utils/au;->l(Landroid/content/Context;Z)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "SDKPrivateSafetyDataUtil"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/sdk/utils/au$1;->jz:Landroid/content/Context;

    invoke-static {v0, v2}, Lcom/kwad/sdk/utils/au;->l(Landroid/content/Context;Z)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final Fr()Ljava/lang/String;
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "getIMEI2:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/utils/au$1;->jz:Landroid/content/Context;

    const/4 v2, 0x1

    invoke-static {v1, v2}, Lcom/kwad/sdk/utils/au;->m(Landroid/content/Context;Z)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "SDKPrivateSafetyDataUtil"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/sdk/utils/au$1;->jz:Landroid/content/Context;

    invoke-static {v0, v2}, Lcom/kwad/sdk/utils/au;->m(Landroid/content/Context;Z)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final Fs()Ljava/lang/String;
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/utils/au$1;->jz:Landroid/content/Context;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/kwad/sdk/utils/au;->n(Landroid/content/Context;Z)Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "getIMEI2:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "SDKPrivateSafetyDataUtil"

    invoke-static {v2, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-object v0
.end method

.method public final Ft()Ljava/lang/String;
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "getIMSI:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/utils/au$1;->jz:Landroid/content/Context;

    const/4 v2, 0x1

    invoke-static {v1, v2}, Lcom/kwad/sdk/utils/au;->o(Landroid/content/Context;Z)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "SDKPrivateSafetyDataUtil"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/sdk/utils/au$1;->jz:Landroid/content/Context;

    invoke-static {v0, v2}, Lcom/kwad/sdk/utils/au;->o(Landroid/content/Context;Z)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final Fu()Ljava/lang/String;
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "getSimCardPhoneCount:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/utils/au$1;->jz:Landroid/content/Context;

    const/4 v2, 0x1

    invoke-static {v1, v2}, Lcom/kwad/sdk/utils/au;->q(Landroid/content/Context;Z)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "SDKPrivateSafetyDataUtil"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/sdk/utils/au$1;->jz:Landroid/content/Context;

    invoke-static {v0, v2}, Lcom/kwad/sdk/utils/au;->q(Landroid/content/Context;Z)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final Fv()Ljava/lang/String;
    .locals 3

    const/4 v0, 0x1

    invoke-static {v0}, Lcom/kwad/sdk/utils/au;->bJ(Z)Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "getSimCardActivePhoneCount:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "SDKPrivateSafetyDataUtil"

    invoke-static {v2, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-object v0
.end method

.method public final Fw()Ljava/lang/String;
    .locals 3

    const/4 v0, 0x1

    invoke-static {v0}, Lcom/kwad/sdk/utils/au;->bK(Z)Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "getBaseStationInfo:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "SDKPrivateSafetyDataUtil"

    invoke-static {v2, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-object v0
.end method

.method public final Fx()Ljava/lang/String;
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/utils/au$1;->jz:Landroid/content/Context;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/kwad/sdk/utils/au;->r(Landroid/content/Context;Z)Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "getWifiList:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "SDKPrivateSafetyDataUtil"

    invoke-static {v2, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-object v0
.end method

.method public final Fy()Ljava/lang/String;
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/utils/au$1;->jz:Landroid/content/Context;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/kwad/sdk/utils/au;->t(Landroid/content/Context;Z)Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "getAppList:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "SDKPrivateSafetyDataUtil"

    invoke-static {v2, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-object v0
.end method

.method public final Fz()Ljava/lang/String;
    .locals 3

    const/4 v0, 0x1

    invoke-static {v0}, Lcom/kwad/sdk/utils/au;->bN(Z)Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "getSdkType:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "SDKPrivateSafetyDataUtil"

    invoke-static {v2, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-object v0
.end method

.method public final getAppId()Ljava/lang/String;
    .locals 3

    const/4 v0, 0x1

    invoke-static {v0}, Lcom/kwad/sdk/utils/au;->bP(Z)Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "getAppId:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "SDKPrivateSafetyDataUtil"

    invoke-static {v2, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-object v0
.end method

.method public final getDeviceId()Ljava/lang/String;
    .locals 3

    const/4 v0, 0x1

    invoke-static {v0}, Lcom/kwad/sdk/utils/au;->bL(Z)Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "getDeviceId:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "SDKPrivateSafetyDataUtil"

    invoke-static {v2, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-object v0
.end method

.method public final getIccId()Ljava/lang/String;
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "getIccId:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/utils/au$1;->jz:Landroid/content/Context;

    const/4 v2, 0x1

    invoke-static {v1, v2}, Lcom/kwad/sdk/utils/au;->p(Landroid/content/Context;Z)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "SDKPrivateSafetyDataUtil"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/sdk/utils/au$1;->jz:Landroid/content/Context;

    invoke-static {v0, v2}, Lcom/kwad/sdk/utils/au;->p(Landroid/content/Context;Z)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getIp()Ljava/lang/String;
    .locals 3

    const/4 v0, 0x1

    invoke-static {v0}, Lcom/kwad/sdk/utils/au;->bM(Z)Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "getIp:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "SDKPrivateSafetyDataUtil"

    invoke-static {v2, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-object v0
.end method

.method public final getLocation()Ljava/lang/String;
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/utils/au$1;->jz:Landroid/content/Context;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/kwad/sdk/utils/au;->s(Landroid/content/Context;Z)Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "getLocation:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "SDKPrivateSafetyDataUtil"

    invoke-static {v2, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-object v0
.end method

.method public final getOaid()Ljava/lang/String;
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "getOaid:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const/4 v1, 0x1

    invoke-static {v1}, Lcom/kwad/sdk/utils/au;->bI(Z)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "SDKPrivateSafetyDataUtil"

    invoke-static {v2, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {v1}, Lcom/kwad/sdk/utils/au;->bI(Z)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getSdkVersion()Ljava/lang/String;
    .locals 3

    const/4 v0, 0x1

    invoke-static {v0}, Lcom/kwad/sdk/utils/au;->bO(Z)Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "getSdkVersion:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "SDKPrivateSafetyDataUtil"

    invoke-static {v2, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-object v0
.end method
