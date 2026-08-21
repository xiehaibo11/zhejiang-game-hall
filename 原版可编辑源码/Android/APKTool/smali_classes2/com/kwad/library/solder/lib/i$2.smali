.class final Lcom/kwad/library/solder/lib/i$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/util/concurrent/Callable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/library/solder/lib/i;->b(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/j$a;)Lcom/kwad/library/solder/lib/i$a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Ljava/util/concurrent/Callable<",
        "Lcom/kwad/library/solder/lib/a/f;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic afF:Lcom/kwad/library/solder/lib/j$a;

.field final synthetic afG:Lcom/kwad/library/solder/lib/i;

.field final synthetic afr:Lcom/kwad/library/solder/lib/a/f;


# direct methods
.method constructor <init>(Lcom/kwad/library/solder/lib/i;Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/j$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/library/solder/lib/i$2;->afG:Lcom/kwad/library/solder/lib/i;

    iput-object p2, p0, Lcom/kwad/library/solder/lib/i$2;->afr:Lcom/kwad/library/solder/lib/a/f;

    iput-object p3, p0, Lcom/kwad/library/solder/lib/i$2;->afF:Lcom/kwad/library/solder/lib/j$a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private wk()Lcom/kwad/library/solder/lib/a/f;
    .locals 3

    iget-object v0, p0, Lcom/kwad/library/solder/lib/i$2;->afG:Lcom/kwad/library/solder/lib/i;

    iget-object v1, p0, Lcom/kwad/library/solder/lib/i$2;->afr:Lcom/kwad/library/solder/lib/a/f;

    iget-object v2, p0, Lcom/kwad/library/solder/lib/i$2;->afF:Lcom/kwad/library/solder/lib/j$a;

    invoke-virtual {v0, v1, v2}, Lcom/kwad/library/solder/lib/i;->a(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/j$a;)Lcom/kwad/library/solder/lib/a/f;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method public final synthetic call()Ljava/lang/Object;
    .locals 1

    invoke-direct {p0}, Lcom/kwad/library/solder/lib/i$2;->wk()Lcom/kwad/library/solder/lib/a/f;

    move-result-object v0

    return-object v0
.end method
