.class final Lcom/tkay/network/gdt/GDTTYInitManager$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/gdt/GDTTYInitManager$1;->onSuccess()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/gdt/GDTTYInitManager$1;


# direct methods
.method constructor <init>(Lcom/tkay/network/gdt/GDTTYInitManager$1;)V
    .locals 0

    .line 233
    iput-object p1, p0, Lcom/tkay/network/gdt/GDTTYInitManager$1$1;->a:Lcom/tkay/network/gdt/GDTTYInitManager$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 237
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInitManager$1$1;->a:Lcom/tkay/network/gdt/GDTTYInitManager$1;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYInitManager$1;->d:Lcom/tkay/network/gdt/GDTTYInitManager;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Lcom/tkay/network/gdt/GDTTYInitManager;)Ljava/lang/Object;

    move-result-object v0

    monitor-enter v0

    .line 238
    :try_start_0
    new-instance v1, Lcom/tkay/network/gdt/GDTBidRequestInfo;

    iget-object v2, p0, Lcom/tkay/network/gdt/GDTTYInitManager$1$1;->a:Lcom/tkay/network/gdt/GDTTYInitManager$1;

    iget-object v2, v2, Lcom/tkay/network/gdt/GDTTYInitManager$1;->a:Ljava/util/Map;

    invoke-direct {v1, v2}, Lcom/tkay/network/gdt/GDTBidRequestInfo;-><init>(Ljava/util/Map;)V

    .line 239
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 241
    invoke-virtual {v1}, Lcom/tkay/network/gdt/GDTBidRequestInfo;->isValid()Z

    move-result v0

    if-nez v0, :cond_1

    .line 242
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInitManager$1$1;->a:Lcom/tkay/network/gdt/GDTTYInitManager$1;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYInitManager$1;->c:Lcom/tkay/core/api/TYBidRequestInfoListener;

    if-eqz v0, :cond_0

    .line 243
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInitManager$1$1;->a:Lcom/tkay/network/gdt/GDTTYInitManager$1;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYInitManager$1;->c:Lcom/tkay/core/api/TYBidRequestInfoListener;

    const-string v1, "Network BidToken or Custom bid info is Empty."

    invoke-interface {v0, v1}, Lcom/tkay/core/api/TYBidRequestInfoListener;->onFailed(Ljava/lang/String;)V

    :cond_0
    return-void

    .line 248
    :cond_1
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInitManager$1$1;->a:Lcom/tkay/network/gdt/GDTTYInitManager$1;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYInitManager$1;->c:Lcom/tkay/core/api/TYBidRequestInfoListener;

    if-eqz v0, :cond_2

    .line 249
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInitManager$1$1;->a:Lcom/tkay/network/gdt/GDTTYInitManager$1;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYInitManager$1;->c:Lcom/tkay/core/api/TYBidRequestInfoListener;

    invoke-interface {v0, v1}, Lcom/tkay/core/api/TYBidRequestInfoListener;->onSuccess(Lcom/tkay/core/api/TYBidRequestInfo;)V

    :cond_2
    return-void

    :catchall_0
    move-exception v1

    .line 239
    monitor-exit v0

    throw v1
.end method
