.class final Lcom/sigmob/sdk/videocache/h$c;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/videocache/h;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x12
    name = "c"
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/videocache/h;

.field private final b:Ljava/util/concurrent/CountDownLatch;


# direct methods
.method public constructor <init>(Lcom/sigmob/sdk/videocache/h;Ljava/util/concurrent/CountDownLatch;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videocache/h$c;->a:Lcom/sigmob/sdk/videocache/h;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p2, p0, Lcom/sigmob/sdk/videocache/h$c;->b:Ljava/util/concurrent/CountDownLatch;

    return-void
.end method


# virtual methods
.method public run()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videocache/h$c;->b:Ljava/util/concurrent/CountDownLatch;

    invoke-virtual {v0}, Ljava/util/concurrent/CountDownLatch;->countDown()V

    iget-object v0, p0, Lcom/sigmob/sdk/videocache/h$c;->a:Lcom/sigmob/sdk/videocache/h;

    invoke-static {v0}, Lcom/sigmob/sdk/videocache/h;->a(Lcom/sigmob/sdk/videocache/h;)V

    return-void
.end method
