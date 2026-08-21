.class final Lcom/kwad/components/core/offline/init/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/p/f$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/offline/init/a;->init(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Lq:Z

.field final synthetic Lr:Lcom/kwad/components/core/offline/init/a;

.field final synthetic jz:Landroid/content/Context;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/offline/init/a;ZLandroid/content/Context;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/offline/init/a$1;->Lr:Lcom/kwad/components/core/offline/init/a;

    iput-boolean p2, p0, Lcom/kwad/components/core/offline/init/a$1;->Lq:Z

    iput-object p3, p0, Lcom/kwad/components/core/offline/init/a$1;->jz:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/core/response/model/SdkConfigData;)V
    .locals 2

    iget-object p1, p0, Lcom/kwad/components/core/offline/init/a$1;->Lr:Lcom/kwad/components/core/offline/init/a;

    invoke-virtual {p1}, Lcom/kwad/components/core/offline/init/a;->getTag()Ljava/lang/String;

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "init onConfigRefresh  isSuccessLoaded:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-boolean v1, p0, Lcom/kwad/components/core/offline/init/a$1;->Lq:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object p1, p0, Lcom/kwad/components/core/offline/init/a$1;->Lr:Lcom/kwad/components/core/offline/init/a;

    invoke-virtual {p1}, Lcom/kwad/components/core/offline/init/a;->of()Z

    move-result p1

    if-eqz p1, :cond_0

    iget-boolean p1, p0, Lcom/kwad/components/core/offline/init/a$1;->Lq:Z

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/core/offline/init/a$1;->Lr:Lcom/kwad/components/core/offline/init/a;

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/a$1;->jz:Landroid/content/Context;

    invoke-static {p1, v0}, Lcom/kwad/components/core/offline/init/a;->a(Lcom/kwad/components/core/offline/init/a;Landroid/content/Context;)V

    :cond_0
    return-void
.end method

.method public final on()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/a$1;->Lr:Lcom/kwad/components/core/offline/init/a;

    invoke-virtual {v0}, Lcom/kwad/components/core/offline/init/a;->getTag()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "init onCacheLoaded  isSuccessLoaded:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-boolean v2, p0, Lcom/kwad/components/core/offline/init/a$1;->Lq:Z

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/a$1;->Lr:Lcom/kwad/components/core/offline/init/a;

    invoke-virtual {v0}, Lcom/kwad/components/core/offline/init/a;->of()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/kwad/components/core/offline/init/a$1;->Lq:Z

    if-eqz v0, :cond_1

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/offline/init/a$1;->Lr:Lcom/kwad/components/core/offline/init/a;

    iget-object v1, p0, Lcom/kwad/components/core/offline/init/a$1;->jz:Landroid/content/Context;

    invoke-static {v0, v1}, Lcom/kwad/components/core/offline/init/a;->a(Lcom/kwad/components/core/offline/init/a;Landroid/content/Context;)V

    :cond_1
    return-void
.end method
