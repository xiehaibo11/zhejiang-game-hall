.class public Lcom/kwad/components/ad/reward/presenter/d/a;
.super Lcom/kwad/components/ad/reward/presenter/a;

# interfaces
.implements Lcom/kwad/components/ad/reward/e/f;
.implements Lcom/kwad/components/ad/reward/e/h;


# instance fields
.field private gt:Lcom/kwad/components/core/webview/b/e/e;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/d/a$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/d/a$1;-><init>(Lcom/kwad/components/ad/reward/presenter/d/a;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/d/a;->cb()V

    return-void
.end method

.method private a(Lcom/kwad/components/ad/reward/e/f;)I
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/d/a;->getPriority()I

    move-result v0

    invoke-interface {p1}, Lcom/kwad/components/ad/reward/e/f;->getPriority()I

    move-result p1

    sub-int/2addr v0, p1

    return v0
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/d/a;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/d/a;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/d/a;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/d/a;->bU()V

    return-void
.end method

.method private bU()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/e/f;)V

    invoke-static {}, Lcom/kwad/components/ad/reward/b;->fp()Lcom/kwad/components/ad/reward/b;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/b;->a(Lcom/kwad/components/ad/reward/e/h;)V

    return-void
.end method

.method private es()V
    .locals 3

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/d/a;->Gj()Ljava/util/List;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/mvp/Presenter;

    instance-of v2, v1, Lcom/kwad/components/ad/reward/presenter/d/b/c;

    if-eqz v2, :cond_1

    check-cast v1, Lcom/kwad/components/ad/reward/presenter/d/b/c;

    invoke-interface {v1}, Lcom/kwad/components/ad/reward/presenter/d/b/c;->iJ()V

    goto :goto_0

    :cond_2
    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/playable/PlayableSource;Lcom/kwad/components/ad/reward/e/l;)V
    .locals 0

    return-void
.end method

.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/j;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/d/a;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->a(Lcom/kwad/components/core/webview/b/e/e;)V

    return-void

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/d/a;->bU()V

    return-void
.end method

.method public final bD()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/d/a;->es()V

    return-void
.end method

.method public final bS()V
    .locals 0

    return-void
.end method

.method public final bT()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/d/a;->es()V

    return-void
.end method

.method protected cb()V
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/d/b/d;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/presenter/d/b/d;-><init>()V

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/d/a;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/d/b/a;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/presenter/d/b/a;-><init>()V

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/d/a;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/d/b/b;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/presenter/d/b/b;-><init>()V

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/d/a;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    return-void
.end method

.method public synthetic compareTo(Ljava/lang/Object;)I
    .locals 0

    check-cast p1, Lcom/kwad/components/ad/reward/e/f;

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/presenter/d/a;->a(Lcom/kwad/components/ad/reward/e/f;)I

    move-result p1

    return p1
.end method

.method public final getPriority()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/d/a;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->b(Lcom/kwad/components/core/webview/b/e/e;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/j;->c(Lcom/kwad/components/ad/reward/e/f;)V

    invoke-static {}, Lcom/kwad/components/ad/reward/b;->fp()Lcom/kwad/components/ad/reward/b;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/b;->b(Lcom/kwad/components/ad/reward/e/h;)V

    return-void
.end method
