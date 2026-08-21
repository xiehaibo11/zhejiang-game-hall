.class Lcom/czhj/volley/ExecutorDelivery$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/util/concurrent/Executor;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/czhj/volley/ExecutorDelivery;-><init>(Landroid/os/Handler;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/os/Handler;

.field final synthetic b:Lcom/czhj/volley/ExecutorDelivery;


# direct methods
.method constructor <init>(Lcom/czhj/volley/ExecutorDelivery;Landroid/os/Handler;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/volley/ExecutorDelivery$1;->b:Lcom/czhj/volley/ExecutorDelivery;

    iput-object p2, p0, Lcom/czhj/volley/ExecutorDelivery$1;->a:Landroid/os/Handler;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public execute(Ljava/lang/Runnable;)V
    .locals 1

    iget-object v0, p0, Lcom/czhj/volley/ExecutorDelivery$1;->a:Landroid/os/Handler;

    invoke-virtual {v0, p1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method
