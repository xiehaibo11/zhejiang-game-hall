.class final Lcom/kwad/sdk/utils/f$2$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/collector/c$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/utils/f$2;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic aHQ:Lcom/kwad/sdk/utils/f$2;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/utils/f$2;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/utils/f$2$1;->aHQ:Lcom/kwad/sdk/utils/f$2;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final b(Lcom/kwad/sdk/collector/AppStatusRules;)V
    .locals 7

    iget-object v0, p0, Lcom/kwad/sdk/utils/f$2$1;->aHQ:Lcom/kwad/sdk/utils/f$2;

    iget-object v0, v0, Lcom/kwad/sdk/utils/f$2;->jz:Landroid/content/Context;

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/collector/AppStatusRules;->initStatus(Landroid/content/Context;)V

    invoke-static {p1}, Lcom/kwad/sdk/utils/f;->e(Lcom/kwad/sdk/collector/AppStatusRules;)Lcom/kwad/sdk/collector/AppStatusRules;

    iget-object p1, p0, Lcom/kwad/sdk/utils/f$2$1;->aHQ:Lcom/kwad/sdk/utils/f$2;

    iget-object p1, p1, Lcom/kwad/sdk/utils/f$2;->jz:Landroid/content/Context;

    invoke-static {}, Lcom/kwad/sdk/utils/f;->HL()Lcom/kwad/sdk/collector/AppStatusRules;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/kwad/sdk/utils/f;->c(Landroid/content/Context;Lcom/kwad/sdk/collector/AppStatusRules;)V

    iget-object p1, p0, Lcom/kwad/sdk/utils/f$2$1;->aHQ:Lcom/kwad/sdk/utils/f$2;

    iget-object p1, p1, Lcom/kwad/sdk/utils/f$2;->jz:Landroid/content/Context;

    invoke-static {p1}, Lcom/kwad/sdk/utils/f;->bH(Landroid/content/Context;)V

    iget-object p1, p0, Lcom/kwad/sdk/utils/f$2$1;->aHQ:Lcom/kwad/sdk/utils/f$2;

    iget-object p1, p1, Lcom/kwad/sdk/utils/f$2;->jz:Landroid/content/Context;

    invoke-static {p1}, Lcom/kwad/sdk/utils/be;->dl(Landroid/content/Context;)Z

    move-result p1

    invoke-static {}, Lcom/kwad/sdk/utils/f;->HL()Lcom/kwad/sdk/collector/AppStatusRules;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/collector/AppStatusRules;->isAppStatusTargetNotEmpty(Lcom/kwad/sdk/collector/AppStatusRules;)Z

    move-result v0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "appStatusTargetNotEmpty: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v2, ", permissionGranted: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "AppStatusHelper"

    invoke-static {v2, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    const-wide/16 v3, 0x0

    if-eqz p1, :cond_1

    if-eqz v0, :cond_1

    invoke-static {}, Lcom/kwad/sdk/utils/f;->HL()Lcom/kwad/sdk/collector/AppStatusRules;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/collector/AppStatusRules;->obtainDefaultScanInterval()J

    move-result-wide v0

    cmp-long v5, v0, v3

    if-lez v5, :cond_0

    iget-object v5, p0, Lcom/kwad/sdk/utils/f$2$1;->aHQ:Lcom/kwad/sdk/utils/f$2;

    iget-object v5, v5, Lcom/kwad/sdk/utils/f$2;->jz:Landroid/content/Context;

    invoke-static {v5, v0, v1}, Lcom/kwad/sdk/utils/f;->c(Landroid/content/Context;J)V

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/utils/f$2$1;->aHQ:Lcom/kwad/sdk/utils/f$2;

    iget-object v0, v0, Lcom/kwad/sdk/utils/f$2;->jz:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/sdk/utils/f;->bM(Landroid/content/Context;)V

    :cond_1
    :goto_0
    invoke-static {}, Lcom/kwad/sdk/utils/f;->HL()Lcom/kwad/sdk/collector/AppStatusRules;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/collector/AppStatusRules;->isUploadTargetNotEmpty(Lcom/kwad/sdk/collector/AppStatusRules;)Z

    move-result v0

    invoke-static {}, Lcom/kwad/sdk/utils/f;->HL()Lcom/kwad/sdk/collector/AppStatusRules;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/sdk/collector/AppStatusRules;->obtainUploadConfigFileMaxSize()J

    move-result-wide v5

    cmp-long v1, v5, v3

    if-lez v1, :cond_2

    const/4 v1, 0x1

    goto :goto_1

    :cond_2
    const/4 v1, 0x0

    :goto_1
    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "uploadTargetNotEmpty: "

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v4, ", enableUpload: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz v0, :cond_3

    if-eqz v1, :cond_3

    if-eqz p1, :cond_3

    invoke-static {}, Lcom/kwad/sdk/utils/f;->Ew()V

    invoke-static {}, Lcom/kwad/sdk/utils/f;->HM()Ljava/util/concurrent/ExecutorService;

    move-result-object p1

    new-instance v0, Lcom/kwad/sdk/utils/f$2$1$1;

    invoke-direct {v0, p0}, Lcom/kwad/sdk/utils/f$2$1$1;-><init>(Lcom/kwad/sdk/utils/f$2$1;)V

    invoke-interface {p1, v0}, Ljava/util/concurrent/ExecutorService;->submit(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;

    :cond_3
    return-void
.end method

.method public final k(ILjava/lang/String;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "fetchAppStatusConfig onFetchError: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, ", code: "

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "AppStatusHelper"

    invoke-static {p2, p1}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
