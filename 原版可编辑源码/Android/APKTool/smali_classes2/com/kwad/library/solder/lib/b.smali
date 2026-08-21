.class public final Lcom/kwad/library/solder/lib/b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/library/solder/lib/a/b;


# instance fields
.field private afv:Lcom/kwad/library/solder/lib/a/b$a;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final e(Lcom/kwad/library/solder/lib/a/f;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/library/solder/lib/b;->afv:Lcom/kwad/library/solder/lib/a/b$a;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/library/solder/lib/a/b$a;->wo()Lcom/kwad/library/solder/lib/c/b;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/kwad/library/solder/lib/a/f;->b(Lcom/kwad/library/solder/lib/c/b;)V

    return-void

    :cond_0
    const-string p1, "Sodler.PluginConfigUpdater"

    const-string v0, "config reqester not set"

    invoke-static {p1, v0}, Lcom/kwad/library/solder/lib/a;->w(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
