.class final Lcom/kwad/library/solder/a/a$b;
.super Lcom/kwad/library/solder/lib/ext/b$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/library/solder/a/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "b"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "<P:",
        "Lcom/kwad/library/solder/lib/a/a;",
        "R:",
        "Lcom/kwad/library/solder/lib/a/f<",
        "TP;>;>",
        "Lcom/kwad/library/solder/lib/ext/b$b<",
        "TP;TR;>;"
    }
.end annotation


# instance fields
.field aft:Lcom/kwad/library/solder/lib/ext/b;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/kwad/library/solder/lib/ext/b<",
            "TP;TR;>;"
        }
    .end annotation
.end field

.field afu:Lcom/kwad/library/solder/a/a$c;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/kwad/library/solder/a/a$c<",
            "TP;TR;>;"
        }
    .end annotation
.end field


# direct methods
.method protected constructor <init>(Lcom/kwad/library/solder/lib/ext/b;Lcom/kwad/library/solder/a/a$c;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/kwad/library/solder/lib/ext/b<",
            "TP;TR;>;",
            "Lcom/kwad/library/solder/a/a$c<",
            "TP;TR;>;)V"
        }
    .end annotation

    invoke-direct {p0}, Lcom/kwad/library/solder/lib/ext/b$b;-><init>()V

    iput-object p1, p0, Lcom/kwad/library/solder/a/a$b;->aft:Lcom/kwad/library/solder/lib/ext/b;

    iput-object p2, p0, Lcom/kwad/library/solder/a/a$b;->afu:Lcom/kwad/library/solder/a/a$c;

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/library/solder/lib/a/f;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TR;)V"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/library/solder/a/a$b;->aft:Lcom/kwad/library/solder/lib/ext/b;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/kwad/library/solder/lib/ext/b;->a(Lcom/kwad/library/solder/lib/a/f;)V

    :cond_0
    return-void
.end method

.method public final a(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/a/a;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TR;TP;)V"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/library/solder/a/a$b;->aft:Lcom/kwad/library/solder/lib/ext/b;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, p2}, Lcom/kwad/library/solder/lib/ext/b;->a(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/a/a;)V

    :cond_0
    return-void
.end method

.method public final a(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/ext/PluginError;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TR;",
            "Lcom/kwad/library/solder/lib/ext/PluginError;",
            ")V"
        }
    .end annotation

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "load failed:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Lcom/kwad/library/solder/lib/ext/PluginError;->getCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ":"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lcom/kwad/library/solder/lib/ext/PluginError;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Sodler.helper"

    invoke-static {v1, v0}, Lcom/kwad/library/solder/lib/a;->e(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/library/solder/a/a$b;->aft:Lcom/kwad/library/solder/lib/ext/b;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, p2}, Lcom/kwad/library/solder/lib/ext/b;->a(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/ext/PluginError;)V

    :cond_0
    iget-object p2, p0, Lcom/kwad/library/solder/a/a$b;->afu:Lcom/kwad/library/solder/a/a$c;

    if-eqz p2, :cond_1

    invoke-interface {p2, p1}, Lcom/kwad/library/solder/a/a$c;->d(Lcom/kwad/library/solder/lib/a/f;)V

    :cond_1
    return-void
.end method

.method public final b(Lcom/kwad/library/solder/lib/a/f;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TR;)V"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/library/solder/a/a$b;->aft:Lcom/kwad/library/solder/lib/ext/b;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/kwad/library/solder/lib/ext/b;->b(Lcom/kwad/library/solder/lib/a/f;)V

    :cond_0
    return-void
.end method

.method public final c(Lcom/kwad/library/solder/lib/a/f;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TR;)V"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/library/solder/a/a$b;->aft:Lcom/kwad/library/solder/lib/ext/b;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/kwad/library/solder/lib/ext/b;->c(Lcom/kwad/library/solder/lib/a/f;)V

    :cond_0
    return-void
.end method
