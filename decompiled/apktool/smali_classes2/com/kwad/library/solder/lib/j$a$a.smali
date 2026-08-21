.class final Lcom/kwad/library/solder/lib/j$a$a;
.super Lcom/kwad/library/solder/lib/j$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/library/solder/lib/j$a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "a"
.end annotation


# direct methods
.method public constructor <init>(Lcom/kwad/library/solder/lib/a/e;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/library/solder/lib/j$a;-><init>(Lcom/kwad/library/solder/lib/a/e;)V

    return-void
.end method


# virtual methods
.method public final m(Lcom/kwad/library/solder/lib/a/f;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/library/solder/lib/j$a$a;->afO:Lcom/kwad/library/solder/lib/a/e;

    invoke-interface {v0}, Lcom/kwad/library/solder/lib/a/e;->wh()Lcom/kwad/library/solder/lib/a/b;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/kwad/library/solder/lib/a/b;->e(Lcom/kwad/library/solder/lib/a/f;)V

    return-void
.end method
