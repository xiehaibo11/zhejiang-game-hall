.class final Lcom/kwad/components/offline/adLive/a/a$1;
.super Lcom/kwad/library/solder/lib/ext/b$c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/offline/adLive/a/a;->a(Landroid/content/Context;Lcom/kwad/components/offline/api/core/soloader/SoLoadListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic Zt:Lcom/kwad/components/offline/api/core/soloader/SoLoadListener;


# direct methods
.method constructor <init>(Lcom/kwad/components/offline/api/core/soloader/SoLoadListener;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/offline/adLive/a/a$1;->Zt:Lcom/kwad/components/offline/api/core/soloader/SoLoadListener;

    invoke-direct {p0}, Lcom/kwad/library/solder/lib/ext/b$c;-><init>()V

    return-void
.end method

.method private a(Lcom/kwad/library/solder/lib/b/c;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/library/solder/lib/ext/b$c;->a(Lcom/kwad/library/solder/lib/a/f;)V

    return-void
.end method

.method private a(Lcom/kwad/library/solder/lib/ext/PluginError;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/offline/adLive/a/a$1;->Zt:Lcom/kwad/components/offline/api/core/soloader/SoLoadListener;

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/ext/PluginError;->getCode()I

    move-result v1

    invoke-interface {v0, v1, p1}, Lcom/kwad/components/offline/api/core/soloader/SoLoadListener;->onFailed(ILjava/lang/Throwable;)V

    return-void
.end method

.method private b(Lcom/kwad/library/solder/lib/b/c;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/library/solder/lib/ext/b$c;->c(Lcom/kwad/library/solder/lib/a/f;)V

    return-void
.end method

.method private c(Lcom/kwad/library/solder/lib/b/c;)V
    .locals 4

    invoke-super {p0, p1}, Lcom/kwad/library/solder/lib/ext/b$c;->b(Lcom/kwad/library/solder/lib/a/f;)V

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/b/c;->getState()I

    move-result v0

    const-string v1, "AdLiveSoLoadHelper"

    const/4 v2, 0x1

    if-ne v0, v2, :cond_0

    const-string p1, "onPostUpdate UPD_SUCCESS"

    invoke-static {v1, p1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/b/c;->wr()Ljava/lang/Throwable;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/b/c;->wr()Ljava/lang/Throwable;

    move-result-object v0

    instance-of v2, v0, Lcom/kwad/library/solder/lib/ext/PluginError;

    if-eqz v2, :cond_1

    check-cast v0, Lcom/kwad/library/solder/lib/ext/PluginError;

    invoke-virtual {v0}, Lcom/kwad/library/solder/lib/ext/PluginError;->getCode()I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_1
    const-string v0, "other"

    :goto_0
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "onPostUpdate error: "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/b/c;->wr()Ljava/lang/Throwable;

    move-result-object p1

    invoke-static {v1, v0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    return-void
.end method

.method private sI()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/offline/adLive/a/a$1;->Zt:Lcom/kwad/components/offline/api/core/soloader/SoLoadListener;

    invoke-interface {v0}, Lcom/kwad/components/offline/api/core/soloader/SoLoadListener;->onLoaded()V

    return-void
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/library/solder/lib/a/f;)V
    .locals 0

    check-cast p1, Lcom/kwad/library/solder/lib/b/c;

    invoke-direct {p0, p1}, Lcom/kwad/components/offline/adLive/a/a$1;->a(Lcom/kwad/library/solder/lib/b/c;)V

    return-void
.end method

.method public final synthetic a(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/a/a;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/offline/adLive/a/a$1;->sI()V

    return-void
.end method

.method public final bridge synthetic a(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/ext/PluginError;)V
    .locals 0

    invoke-direct {p0, p2}, Lcom/kwad/components/offline/adLive/a/a$1;->a(Lcom/kwad/library/solder/lib/ext/PluginError;)V

    return-void
.end method

.method public final synthetic b(Lcom/kwad/library/solder/lib/a/f;)V
    .locals 0

    check-cast p1, Lcom/kwad/library/solder/lib/b/c;

    invoke-direct {p0, p1}, Lcom/kwad/components/offline/adLive/a/a$1;->c(Lcom/kwad/library/solder/lib/b/c;)V

    return-void
.end method

.method public final synthetic c(Lcom/kwad/library/solder/lib/a/f;)V
    .locals 0

    check-cast p1, Lcom/kwad/library/solder/lib/b/c;

    invoke-direct {p0, p1}, Lcom/kwad/components/offline/adLive/a/a$1;->b(Lcom/kwad/library/solder/lib/b/c;)V

    return-void
.end method
