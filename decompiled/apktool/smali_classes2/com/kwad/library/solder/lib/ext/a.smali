.class public final Lcom/kwad/library/solder/lib/ext/a;
.super Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static n(Lcom/kwad/library/solder/lib/a/f;)Lcom/kwad/library/solder/lib/ext/b;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/library/solder/lib/a/f;->wx()Lcom/kwad/library/solder/lib/ext/b;

    move-result-object p0

    return-object p0
.end method


# virtual methods
.method public final c(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/a/a;)V
    .locals 1

    invoke-static {p1}, Lcom/kwad/library/solder/lib/ext/a;->n(Lcom/kwad/library/solder/lib/a/f;)Lcom/kwad/library/solder/lib/ext/b;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, p2}, Lcom/kwad/library/solder/lib/ext/b;->a(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/a/a;)V

    :cond_0
    return-void
.end method

.method public final c(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/ext/PluginError;)V
    .locals 1

    invoke-static {p1}, Lcom/kwad/library/solder/lib/ext/a;->n(Lcom/kwad/library/solder/lib/a/f;)Lcom/kwad/library/solder/lib/ext/b;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, p2}, Lcom/kwad/library/solder/lib/ext/b;->a(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/ext/PluginError;)V

    :cond_0
    return-void
.end method

.method public final o(Lcom/kwad/library/solder/lib/a/f;)V
    .locals 1

    invoke-static {p1}, Lcom/kwad/library/solder/lib/ext/a;->n(Lcom/kwad/library/solder/lib/a/f;)Lcom/kwad/library/solder/lib/ext/b;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/kwad/library/solder/lib/ext/b;->a(Lcom/kwad/library/solder/lib/a/f;)V

    :cond_0
    return-void
.end method

.method public final p(Lcom/kwad/library/solder/lib/a/f;)V
    .locals 1

    invoke-static {p1}, Lcom/kwad/library/solder/lib/ext/a;->n(Lcom/kwad/library/solder/lib/a/f;)Lcom/kwad/library/solder/lib/ext/b;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/kwad/library/solder/lib/ext/b;->c(Lcom/kwad/library/solder/lib/a/f;)V

    :cond_0
    return-void
.end method

.method public final q(Lcom/kwad/library/solder/lib/a/f;)V
    .locals 1

    invoke-static {p1}, Lcom/kwad/library/solder/lib/ext/a;->n(Lcom/kwad/library/solder/lib/a/f;)Lcom/kwad/library/solder/lib/ext/b;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/kwad/library/solder/lib/ext/b;->b(Lcom/kwad/library/solder/lib/a/f;)V

    :cond_0
    return-void
.end method
