.class public final Lcom/kwad/components/ad/reward/presenter/f/f;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/ad/reward/j$a;


# instance fields
.field private wH:Lcom/kwad/components/core/webview/jshandler/am;

.field private wI:Z

.field private wJ:Z


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private jg()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/f;->wH:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_1

    iget-boolean v1, p0, Lcom/kwad/components/ad/reward/presenter/f/f;->wJ:Z

    if-eqz v1, :cond_1

    iget-boolean v1, p0, Lcom/kwad/components/ad/reward/presenter/f/f;->wI:Z

    if-nez v1, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rz()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/f;->wH:Lcom/kwad/components/core/webview/jshandler/am;

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rA()V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/f/f;->wI:Z

    return-void

    :cond_0
    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rD()V

    :cond_1
    return-void
.end method


# virtual methods
.method public final B(Lcom/kwad/components/ad/reward/j;)V
    .locals 0

    invoke-virtual {p1, p0}, Lcom/kwad/components/ad/reward/j;->a(Lcom/kwad/components/ad/reward/j$a;)V

    return-void
.end method

.method public final C(Lcom/kwad/components/ad/reward/j;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/f;->wH:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rB()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/f;->wH:Lcom/kwad/components/core/webview/jshandler/am;

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rC()V

    :cond_0
    invoke-virtual {p1, p0}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/j$a;)V

    return-void
.end method

.method public final b(Lcom/kwad/components/core/webview/jshandler/am;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/f;->wH:Lcom/kwad/components/core/webview/jshandler/am;

    return-void
.end method

.method public final cc()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/f;->wH:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rB()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/f;->wH:Lcom/kwad/components/core/webview/jshandler/am;

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rC()V

    :cond_0
    return-void
.end method

.method public final eh()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/f/f;->jg()V

    return-void
.end method

.method public final gj()V
    .locals 1

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/f/f;->wJ:Z

    return-void
.end method

.method public final gk()V
    .locals 1

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/f/f;->wJ:Z

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/f/f;->jg()V

    return-void
.end method

.method public final gl()V
    .locals 1

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/f/f;->wJ:Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/f;->wH:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rE()V

    :cond_0
    return-void
.end method

.method public final gm()V
    .locals 1

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/f/f;->wJ:Z

    return-void
.end method

.method public final iS()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/f/f;->wJ:Z

    return v0
.end method
