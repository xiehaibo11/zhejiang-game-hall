.class final Lcom/kwad/sdk/core/videocache/f$b;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/core/videocache/f;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x10
    name = "b"
.end annotation


# instance fields
.field final synthetic awA:Lcom/kwad/sdk/core/videocache/f;

.field private final awz:Ljava/net/Socket;


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/core/videocache/f;Ljava/net/Socket;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/videocache/f$b;->awA:Lcom/kwad/sdk/core/videocache/f;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p2, p0, Lcom/kwad/sdk/core/videocache/f$b;->awz:Ljava/net/Socket;

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    const-string v0, "HttpProxyCacheServer"

    const-string v1, "schedule SocketProcessorRunnable run"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/videocache/f$b;->awA:Lcom/kwad/sdk/core/videocache/f;

    iget-object v1, p0, Lcom/kwad/sdk/core/videocache/f$b;->awz:Ljava/net/Socket;

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/videocache/f;->a(Lcom/kwad/sdk/core/videocache/f;Ljava/net/Socket;)V

    return-void
.end method
