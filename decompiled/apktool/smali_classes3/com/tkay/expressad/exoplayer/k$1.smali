.class final Lcom/tkay/expressad/exoplayer/k$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/exoplayer/k;->e(Lcom/tkay/expressad/exoplayer/x;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/exoplayer/x;

.field final synthetic b:Lcom/tkay/expressad/exoplayer/k;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/exoplayer/k;Lcom/tkay/expressad/exoplayer/x;)V
    .locals 0

    .line 857
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/k$1;->b:Lcom/tkay/expressad/exoplayer/k;

    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/k$1;->a:Lcom/tkay/expressad/exoplayer/x;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 861
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k$1;->a:Lcom/tkay/expressad/exoplayer/x;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k;->b(Lcom/tkay/expressad/exoplayer/x;)V
    :try_end_0
    .catch Lcom/tkay/expressad/exoplayer/g; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    const-string v1, "ExoPlayerImplInternal"

    const-string v2, "Unexpected error delivering message on external thread."

    .line 863
    invoke-static {v1, v2, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 864
    new-instance v1, Ljava/lang/RuntimeException;

    invoke-direct {v1, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v1
.end method
