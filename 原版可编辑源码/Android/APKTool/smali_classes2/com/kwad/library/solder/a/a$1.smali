.class final Lcom/kwad/library/solder/a/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/library/solder/a/a$c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/library/solder/a/a;->a(Landroid/content/Context;Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/ext/b;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/library/solder/a/a$c<",
        "TP;TR;>;"
    }
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final d(Lcom/kwad/library/solder/lib/a/f;)V
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TR;)V"
        }
    .end annotation

    invoke-static {}, Lcom/kwad/library/solder/lib/i;->wb()Lcom/kwad/library/solder/lib/i;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/kwad/library/solder/lib/i;->l(Lcom/kwad/library/solder/lib/a/f;)V

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->wr()Ljava/lang/Throwable;

    move-result-object v0

    instance-of v0, v0, Lcom/kwad/library/solder/lib/ext/PluginError$UpdateError;

    invoke-static {}, Lcom/kwad/library/solder/a/a;->vW()Landroid/os/Handler;

    move-result-object v1

    new-instance v2, Lcom/kwad/library/solder/a/a$1$1;

    invoke-direct {v2, p0, p1}, Lcom/kwad/library/solder/a/a$1$1;-><init>(Lcom/kwad/library/solder/a/a$1;Lcom/kwad/library/solder/lib/a/f;)V

    if-eqz v0, :cond_0

    const-wide/16 v3, 0x3e8

    goto :goto_0

    :cond_0
    const-wide/16 v3, 0x0

    :goto_0
    invoke-virtual {v1, v2, v3, v4}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method
