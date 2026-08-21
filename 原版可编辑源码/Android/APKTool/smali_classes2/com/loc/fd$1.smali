.class final Lcom/loc/fd$1;
.super Ljava/lang/Object;
.source "HistoryLocationRecorder.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/loc/fd;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/loc/fd;


# direct methods
.method constructor <init>(Lcom/loc/fd;)V
    .locals 0

    iput-object p1, p0, Lcom/loc/fd$1;->a:Lcom/loc/fd;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    iget-object v0, p0, Lcom/loc/fd$1;->a:Lcom/loc/fd;

    invoke-static {v0}, Lcom/loc/fd;->a(Lcom/loc/fd;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/loc/fd$1;->a:Lcom/loc/fd;

    invoke-static {v0}, Lcom/loc/fd;->b(Lcom/loc/fd;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/loc/fd$1;->a:Lcom/loc/fd;

    invoke-static {v0}, Lcom/loc/fd;->c(Lcom/loc/fd;)V

    iget-object v0, p0, Lcom/loc/fd$1;->a:Lcom/loc/fd;

    invoke-static {v0}, Lcom/loc/fd;->d(Lcom/loc/fd;)Z

    :cond_0
    iget-object v0, p0, Lcom/loc/fd$1;->a:Lcom/loc/fd;

    invoke-static {v0}, Lcom/loc/fd;->e(Lcom/loc/fd;)Landroid/os/Handler;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/loc/fd$1;->a:Lcom/loc/fd;

    invoke-static {v0}, Lcom/loc/fd;->e(Lcom/loc/fd;)Landroid/os/Handler;

    move-result-object v0

    iget-object v1, p0, Lcom/loc/fd$1;->a:Lcom/loc/fd;

    invoke-static {v1}, Lcom/loc/fd;->f(Lcom/loc/fd;)Ljava/lang/Runnable;

    move-result-object v1

    const-wide/32 v2, 0xea60

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    :cond_1
    return-void
.end method
