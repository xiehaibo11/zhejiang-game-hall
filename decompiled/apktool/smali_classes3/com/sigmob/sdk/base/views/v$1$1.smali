.class Lcom/sigmob/sdk/base/views/v$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/views/v$1;->onAnimationEnd(Landroid/animation/Animator;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/base/views/v$1;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/views/v$1;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/views/v$1$1;->a:Lcom/sigmob/sdk/base/views/v$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/v$1$1;->a:Lcom/sigmob/sdk/base/views/v$1;

    iget-object v0, v0, Lcom/sigmob/sdk/base/views/v$1;->a:Lcom/sigmob/sdk/base/views/v;

    invoke-static {v0}, Lcom/sigmob/sdk/base/views/v;->a(Lcom/sigmob/sdk/base/views/v;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/v$1$1;->a:Lcom/sigmob/sdk/base/views/v$1;

    iget-object v0, v0, Lcom/sigmob/sdk/base/views/v$1;->a:Lcom/sigmob/sdk/base/views/v;

    invoke-static {v0}, Lcom/sigmob/sdk/base/views/v;->b(Lcom/sigmob/sdk/base/views/v;)Landroid/animation/ObjectAnimator;

    move-result-object v0

    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->start()V

    :cond_0
    return-void
.end method
