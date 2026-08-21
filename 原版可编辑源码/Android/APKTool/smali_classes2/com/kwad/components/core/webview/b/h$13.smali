.class final Lcom/kwad/components/core/webview/b/h$13;
.super Lcom/kwad/components/core/video/l;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/core/webview/b/h;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Wk:Lcom/kwad/components/core/webview/b/h;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/b/h;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/h$13;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-direct {p0}, Lcom/kwad/components/core/video/l;-><init>()V

    return-void
.end method

.method private g(D)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$13;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {v0}, Lcom/kwad/components/core/webview/b/h;->l(Lcom/kwad/components/core/webview/b/h;)Lcom/kwad/components/core/webview/b/b/y;

    move-result-object v0

    const/4 v1, 0x0

    iput-boolean v1, v0, Lcom/kwad/components/core/webview/b/b/y;->Xk:Z

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$13;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {v0}, Lcom/kwad/components/core/webview/b/h;->l(Lcom/kwad/components/core/webview/b/h;)Lcom/kwad/components/core/webview/b/b/y;

    move-result-object v0

    iput-boolean v1, v0, Lcom/kwad/components/core/webview/b/b/y;->Xg:Z

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$13;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {v0}, Lcom/kwad/components/core/webview/b/h;->l(Lcom/kwad/components/core/webview/b/h;)Lcom/kwad/components/core/webview/b/b/y;

    move-result-object v0

    const-wide v1, 0x408f400000000000L    # 1000.0

    div-double/2addr p1, v1

    const-wide/high16 v1, 0x3fe0000000000000L    # 0.5

    add-double/2addr p1, v1

    double-to-int p1, p1

    iput p1, v0, Lcom/kwad/components/core/webview/b/b/y;->nM:I

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/h$13;->ja()V

    return-void
.end method

.method private ja()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$13;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {v0}, Lcom/kwad/components/core/webview/b/h;->m(Lcom/kwad/components/core/webview/b/h;)Lcom/kwad/components/core/webview/b/a/p;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$13;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {v0}, Lcom/kwad/components/core/webview/b/h;->l(Lcom/kwad/components/core/webview/b/h;)Lcom/kwad/components/core/webview/b/b/y;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$13;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {v0}, Lcom/kwad/components/core/webview/b/h;->m(Lcom/kwad/components/core/webview/b/h;)Lcom/kwad/components/core/webview/b/a/p;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/h$13;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {v1}, Lcom/kwad/components/core/webview/b/h;->l(Lcom/kwad/components/core/webview/b/h;)Lcom/kwad/components/core/webview/b/b/y;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/a/p;->a(Lcom/kwad/components/core/webview/b/b/y;)V

    :cond_0
    return-void
.end method


# virtual methods
.method public final onMediaPlayCompleted()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$13;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {v0}, Lcom/kwad/components/core/webview/b/h;->l(Lcom/kwad/components/core/webview/b/h;)Lcom/kwad/components/core/webview/b/b/y;

    move-result-object v0

    const/4 v1, 0x1

    iput-boolean v1, v0, Lcom/kwad/components/core/webview/b/b/y;->Xg:Z

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$13;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {v0}, Lcom/kwad/components/core/webview/b/h;->l(Lcom/kwad/components/core/webview/b/h;)Lcom/kwad/components/core/webview/b/b/y;

    move-result-object v0

    const/4 v1, 0x0

    iput-boolean v1, v0, Lcom/kwad/components/core/webview/b/b/y;->Xk:Z

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$13;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {v0}, Lcom/kwad/components/core/webview/b/h;->l(Lcom/kwad/components/core/webview/b/h;)Lcom/kwad/components/core/webview/b/b/y;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/h$13;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-virtual {v1}, Lcom/kwad/components/core/webview/b/h;->rL()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->G(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v1

    iput v1, v0, Lcom/kwad/components/core/webview/b/b/y;->nM:I

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/h$13;->ja()V

    return-void
.end method

.method public final onMediaPlayError(II)V
    .locals 0

    iget-object p1, p0, Lcom/kwad/components/core/webview/b/h$13;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {p1}, Lcom/kwad/components/core/webview/b/h;->l(Lcom/kwad/components/core/webview/b/h;)Lcom/kwad/components/core/webview/b/b/y;

    move-result-object p1

    const/4 p2, 0x1

    iput-boolean p2, p1, Lcom/kwad/components/core/webview/b/b/y;->Xk:Z

    iget-object p1, p0, Lcom/kwad/components/core/webview/b/h$13;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {p1}, Lcom/kwad/components/core/webview/b/h;->l(Lcom/kwad/components/core/webview/b/h;)Lcom/kwad/components/core/webview/b/b/y;

    move-result-object p1

    const/4 p2, 0x0

    iput-boolean p2, p1, Lcom/kwad/components/core/webview/b/b/y;->Xg:Z

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/h$13;->ja()V

    return-void
.end method

.method public final onMediaPlayProgress(JJ)V
    .locals 0

    long-to-double p1, p3

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/core/webview/b/h$13;->g(D)V

    return-void
.end method

.method public final onMediaPlayStart()V
    .locals 2

    const-wide/16 v0, 0x0

    invoke-direct {p0, v0, v1}, Lcom/kwad/components/core/webview/b/h$13;->g(D)V

    return-void
.end method

.method public final onMediaPreparing()V
    .locals 2

    const-wide/16 v0, 0x0

    invoke-direct {p0, v0, v1}, Lcom/kwad/components/core/webview/b/h$13;->g(D)V

    return-void
.end method
