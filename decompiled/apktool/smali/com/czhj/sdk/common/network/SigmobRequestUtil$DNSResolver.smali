.class Lcom/czhj/sdk/common/network/SigmobRequestUtil$DNSResolver;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/sdk/common/network/SigmobRequestUtil;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "DNSResolver"
.end annotation


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/net/InetAddress;


# direct methods
.method public constructor <init>(Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/czhj/sdk/common/network/SigmobRequestUtil$DNSResolver;->a:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public declared-synchronized get()Ljava/net/InetAddress;
    .locals 1

    monitor-enter p0

    :try_start_0
    iget-object v0, p0, Lcom/czhj/sdk/common/network/SigmobRequestUtil$DNSResolver;->b:Ljava/net/InetAddress;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public run()V
    .locals 1

    :try_start_0
    iget-object v0, p0, Lcom/czhj/sdk/common/network/SigmobRequestUtil$DNSResolver;->a:Ljava/lang/String;

    invoke-static {v0}, Ljava/net/InetAddress;->getByName(Ljava/lang/String;)Ljava/net/InetAddress;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/czhj/sdk/common/network/SigmobRequestUtil$DNSResolver;->set(Ljava/net/InetAddress;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public declared-synchronized set(Ljava/net/InetAddress;)V
    .locals 0

    monitor-enter p0

    :try_start_0
    iput-object p1, p0, Lcom/czhj/sdk/common/network/SigmobRequestUtil$DNSResolver;->b:Ljava/net/InetAddress;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method
