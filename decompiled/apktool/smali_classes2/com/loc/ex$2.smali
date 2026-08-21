.class final Lcom/loc/ex$2;
.super Ljava/lang/Object;
.source "AgeEstimator.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/loc/ex;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/loc/ex;


# direct methods
.method constructor <init>(Lcom/loc/ex;)V
    .locals 0

    iput-object p1, p0, Lcom/loc/ex$2;->a:Lcom/loc/ex;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    iget-object v0, p0, Lcom/loc/ex$2;->a:Lcom/loc/ex;

    invoke-static {v0}, Lcom/loc/ex;->b(Lcom/loc/ex;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/loc/ex$2;->a:Lcom/loc/ex;

    invoke-static {v0}, Lcom/loc/ex;->c(Lcom/loc/ex;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/loc/ex$2;->a:Lcom/loc/ex;

    invoke-static {v0}, Lcom/loc/ex;->d(Lcom/loc/ex;)V

    iget-object v0, p0, Lcom/loc/ex$2;->a:Lcom/loc/ex;

    invoke-static {v0}, Lcom/loc/ex;->e(Lcom/loc/ex;)Z

    :cond_0
    iget-object v0, p0, Lcom/loc/ex$2;->a:Lcom/loc/ex;

    invoke-static {v0}, Lcom/loc/ex;->f(Lcom/loc/ex;)Landroid/os/Handler;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/loc/ex$2;->a:Lcom/loc/ex;

    invoke-static {v0}, Lcom/loc/ex;->f(Lcom/loc/ex;)Landroid/os/Handler;

    move-result-object v0

    iget-object v1, p0, Lcom/loc/ex$2;->a:Lcom/loc/ex;

    invoke-static {v1}, Lcom/loc/ex;->g(Lcom/loc/ex;)Ljava/lang/Runnable;

    move-result-object v1

    const-wide/32 v2, 0xea60

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    :cond_1
    return-void
.end method
