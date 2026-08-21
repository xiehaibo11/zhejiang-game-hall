.class public final Lcom/kwad/sdk/core/threads/a$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/core/threads/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field private auZ:Landroid/os/HandlerThread;

.field private mHandler:Landroid/os/Handler;


# direct methods
.method public constructor <init>(Ljava/lang/String;)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p1, "ksad-HT"

    goto :goto_0

    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "ksad-"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    :goto_0
    new-instance v0, Landroid/os/HandlerThread;

    invoke-direct {v0, p1}, Landroid/os/HandlerThread;-><init>(Ljava/lang/String;)V

    iput-object v0, p0, Lcom/kwad/sdk/core/threads/a$a;->auZ:Landroid/os/HandlerThread;

    invoke-virtual {v0}, Landroid/os/HandlerThread;->start()V

    new-instance p1, Landroid/os/Handler;

    iget-object v0, p0, Lcom/kwad/sdk/core/threads/a$a;->auZ:Landroid/os/HandlerThread;

    invoke-virtual {v0}, Landroid/os/HandlerThread;->getLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-direct {p1, v0}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object p1, p0, Lcom/kwad/sdk/core/threads/a$a;->mHandler:Landroid/os/Handler;

    return-void
.end method


# virtual methods
.method public final b(Lcom/kwad/sdk/utils/bn$a;)Lcom/kwad/sdk/utils/bn;
    .locals 2

    new-instance v0, Lcom/kwad/sdk/utils/bn;

    iget-object v1, p0, Lcom/kwad/sdk/core/threads/a$a;->auZ:Landroid/os/HandlerThread;

    invoke-virtual {v1}, Landroid/os/HandlerThread;->getLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, p1, v1}, Lcom/kwad/sdk/utils/bn;-><init>(Lcom/kwad/sdk/utils/bn$a;Landroid/os/Looper;)V

    return-object v0
.end method

.method public final getHandler()Landroid/os/Handler;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/threads/a$a;->mHandler:Landroid/os/Handler;

    return-object v0
.end method
