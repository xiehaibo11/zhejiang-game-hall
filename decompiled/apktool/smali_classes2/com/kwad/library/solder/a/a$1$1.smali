.class final Lcom/kwad/library/solder/a/a$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/library/solder/a/a$1;->d(Lcom/kwad/library/solder/lib/a/f;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic afr:Lcom/kwad/library/solder/lib/a/f;

.field final synthetic afs:Lcom/kwad/library/solder/a/a$1;


# direct methods
.method constructor <init>(Lcom/kwad/library/solder/a/a$1;Lcom/kwad/library/solder/lib/a/f;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/library/solder/a/a$1$1;->afs:Lcom/kwad/library/solder/a/a$1;

    iput-object p2, p0, Lcom/kwad/library/solder/a/a$1$1;->afr:Lcom/kwad/library/solder/lib/a/f;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/library/solder/a/a$1$1;->afr:Lcom/kwad/library/solder/lib/a/f;

    invoke-virtual {v0}, Lcom/kwad/library/solder/lib/a/f;->ws()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/kwad/library/solder/lib/i;->wb()Lcom/kwad/library/solder/lib/i;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/library/solder/a/a$1$1;->afr:Lcom/kwad/library/solder/lib/a/f;

    const/16 v2, 0x10

    invoke-virtual {v0, v1, v2}, Lcom/kwad/library/solder/lib/i;->a(Lcom/kwad/library/solder/lib/a/f;I)Lcom/kwad/library/solder/lib/i$a;

    :cond_0
    return-void
.end method
