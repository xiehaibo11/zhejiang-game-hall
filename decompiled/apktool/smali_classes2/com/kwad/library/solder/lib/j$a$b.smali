.class final Lcom/kwad/library/solder/lib/j$a$b;
.super Lcom/kwad/library/solder/lib/j$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/library/solder/lib/j$a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "b"
.end annotation


# direct methods
.method constructor <init>(Lcom/kwad/library/solder/lib/a/e;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/library/solder/lib/j$a;-><init>(Lcom/kwad/library/solder/lib/a/e;)V

    return-void
.end method


# virtual methods
.method public final m(Lcom/kwad/library/solder/lib/a/f;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/library/solder/lib/j$a$b;->afO:Lcom/kwad/library/solder/lib/a/e;

    invoke-interface {v0}, Lcom/kwad/library/solder/lib/a/e;->we()Lcom/kwad/library/solder/lib/a/d;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/kwad/library/solder/lib/a/d;->f(Lcom/kwad/library/solder/lib/a/f;)Lcom/kwad/library/solder/lib/a/f;

    return-void
.end method
