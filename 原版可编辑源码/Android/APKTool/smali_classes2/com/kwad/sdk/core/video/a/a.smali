.class public abstract Lcom/kwad/sdk/core/video/a/a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/video/a/c;


# instance fields
.field private Sh:Lcom/kwad/sdk/core/video/a/c$e;

.field private Si:Lcom/kwad/sdk/core/video/a/c$h;

.field private Sj:Lcom/kwad/sdk/core/video/a/c$b;

.field private Sk:Lcom/kwad/sdk/core/video/a/c$c;

.field private Sl:Lcom/kwad/sdk/core/video/a/c$d;

.field private Sm:Lcom/kwad/sdk/core/video/a/c$a;

.field private avC:Lcom/kwad/sdk/core/video/a/c$f;

.field private avD:Lcom/kwad/sdk/core/video/a/c$g;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method protected static f(F)V
    .locals 1

    const/4 v0, 0x0

    cmpl-float p0, p0, v0

    if-nez p0, :cond_0

    const-string p0, "autoMute"

    :goto_0
    invoke-static {p0}, Lcom/kwad/sdk/core/video/a/a/a;->dI(Ljava/lang/String;)V

    return-void

    :cond_0
    const-string p0, "autoVoice"

    goto :goto_0
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/core/video/a/c$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/video/a/a;->Sm:Lcom/kwad/sdk/core/video/a/c$a;

    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/video/a/c$b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/video/a/a;->Sj:Lcom/kwad/sdk/core/video/a/c$b;

    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/video/a/c$c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/video/a/a;->Sk:Lcom/kwad/sdk/core/video/a/c$c;

    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/video/a/c$f;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/video/a/a;->avC:Lcom/kwad/sdk/core/video/a/c$f;

    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/video/a/c$g;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/video/a/a;->avD:Lcom/kwad/sdk/core/video/a/c$g;

    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/video/a/c$h;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/video/a/a;->Si:Lcom/kwad/sdk/core/video/a/c$h;

    return-void
.end method

.method protected final b(Landroid/media/TimedText;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/video/a/a;->avD:Lcom/kwad/sdk/core/video/a/c$g;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/kwad/sdk/core/video/a/c$g;->a(Landroid/media/TimedText;)V

    :cond_0
    return-void
.end method

.method public final b(Lcom/kwad/sdk/core/video/a/c$e;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/video/a/a;->Sh:Lcom/kwad/sdk/core/video/a/c$e;

    return-void
.end method

.method public final c(Lcom/kwad/sdk/core/video/a/c$d;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/video/a/a;->Sl:Lcom/kwad/sdk/core/video/a/c$d;

    return-void
.end method

.method protected final notifyOnBufferingUpdate(I)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/video/a/a;->Sm:Lcom/kwad/sdk/core/video/a/c$a;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/kwad/sdk/core/video/a/c$a;->aw(I)V

    :cond_0
    return-void
.end method

.method protected final notifyOnCompletion()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/video/a/a;->Sj:Lcom/kwad/sdk/core/video/a/c$b;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/core/video/a/c$b;->os()V

    :cond_0
    return-void
.end method

.method protected final notifyOnError(II)Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/video/a/a;->Sk:Lcom/kwad/sdk/core/video/a/c$c;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, p2}, Lcom/kwad/sdk/core/video/a/c$c;->j(II)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method protected final notifyOnInfo(II)Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/video/a/a;->Sl:Lcom/kwad/sdk/core/video/a/c$d;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, p2}, Lcom/kwad/sdk/core/video/a/c$d;->k(II)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method protected final notifyOnPrepared()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/video/a/a;->Sh:Lcom/kwad/sdk/core/video/a/c$e;

    if-eqz v0, :cond_0

    invoke-interface {v0, p0}, Lcom/kwad/sdk/core/video/a/c$e;->a(Lcom/kwad/sdk/core/video/a/c;)V

    :cond_0
    return-void
.end method

.method protected final notifyOnSeekComplete()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/video/a/a;->avC:Lcom/kwad/sdk/core/video/a/c$f;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/core/video/a/c$f;->ot()V

    :cond_0
    return-void
.end method

.method public final resetListeners()V
    .locals 1

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/sdk/core/video/a/a;->Sh:Lcom/kwad/sdk/core/video/a/c$e;

    iput-object v0, p0, Lcom/kwad/sdk/core/video/a/a;->Sm:Lcom/kwad/sdk/core/video/a/c$a;

    iput-object v0, p0, Lcom/kwad/sdk/core/video/a/a;->Sj:Lcom/kwad/sdk/core/video/a/c$b;

    iput-object v0, p0, Lcom/kwad/sdk/core/video/a/a;->avC:Lcom/kwad/sdk/core/video/a/c$f;

    iput-object v0, p0, Lcom/kwad/sdk/core/video/a/a;->Si:Lcom/kwad/sdk/core/video/a/c$h;

    iput-object v0, p0, Lcom/kwad/sdk/core/video/a/a;->Sk:Lcom/kwad/sdk/core/video/a/c$c;

    iput-object v0, p0, Lcom/kwad/sdk/core/video/a/a;->Sl:Lcom/kwad/sdk/core/video/a/c$d;

    iput-object v0, p0, Lcom/kwad/sdk/core/video/a/a;->avD:Lcom/kwad/sdk/core/video/a/c$g;

    return-void
.end method

.method protected final u(II)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/video/a/a;->Si:Lcom/kwad/sdk/core/video/a/c$h;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, p2}, Lcom/kwad/sdk/core/video/a/c$h;->i(II)V

    :cond_0
    return-void
.end method
