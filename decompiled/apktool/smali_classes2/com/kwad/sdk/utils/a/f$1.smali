.class final Lcom/kwad/sdk/utils/a/f$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/utils/a/f;->c(Ljava/lang/Runnable;)Ljava/lang/Runnable;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic aLx:Ljava/lang/Runnable;

.field final synthetic aLy:Lcom/kwad/sdk/utils/a/f;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/utils/a/f;Ljava/lang/Runnable;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/utils/a/f$1;->aLy:Lcom/kwad/sdk/utils/a/f;

    iput-object p2, p0, Lcom/kwad/sdk/utils/a/f$1;->aLx:Ljava/lang/Runnable;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/utils/a/f$1;->aLx:Ljava/lang/Runnable;

    invoke-interface {v0}, Ljava/lang/Runnable;->run()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    iget-object v0, p0, Lcom/kwad/sdk/utils/a/f$1;->aLy:Lcom/kwad/sdk/utils/a/f;

    invoke-static {v0}, Lcom/kwad/sdk/utils/a/f;->a(Lcom/kwad/sdk/utils/a/f;)V

    return-void

    :catchall_0
    move-exception v0

    iget-object v1, p0, Lcom/kwad/sdk/utils/a/f$1;->aLy:Lcom/kwad/sdk/utils/a/f;

    invoke-static {v1}, Lcom/kwad/sdk/utils/a/f;->a(Lcom/kwad/sdk/utils/a/f;)V

    throw v0
.end method
