.class final Lcom/kwad/sdk/ip/direct/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/NetworkMonitor$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/ip/direct/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/core/NetworkMonitor$NetworkState;)V
    .locals 2

    const-string p1, "IpDirect_Helper"

    const-string v0, "*********onNetworkChange"

    invoke-static {p1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/kwad/sdk/ip/direct/a;->access$000()Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    invoke-static {v1}, Lcom/kwad/sdk/ip/direct/a;->access$102(Z)Z

    const-string v0, "*********onNetworkChange sHasNetChanged true"

    invoke-static {p1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    invoke-static {v1}, Lcom/kwad/sdk/ip/direct/a;->access$002(Z)Z

    return-void
.end method
