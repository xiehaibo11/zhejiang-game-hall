.class Lcom/bykv/vk/openvk/api/plugin/rg$8;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bykv/vk/openvk/api/plugin/rg;->call(Lcom/bykv/vk/openvk/api/plugin/rg$rg;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/bykv/vk/openvk/api/plugin/rg;

.field final synthetic rg:Lcom/bykv/vk/openvk/api/plugin/rg$rg;


# direct methods
.method constructor <init>(Lcom/bykv/vk/openvk/api/plugin/rg;Lcom/bykv/vk/openvk/api/plugin/rg$rg;)V
    .locals 0

    .line 185
    iput-object p1, p0, Lcom/bykv/vk/openvk/api/plugin/rg$8;->df:Lcom/bykv/vk/openvk/api/plugin/rg;

    iput-object p2, p0, Lcom/bykv/vk/openvk/api/plugin/rg$8;->rg:Lcom/bykv/vk/openvk/api/plugin/rg$rg;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    const-string v0, "PluginDefaultAdManager"

    .line 189
    :try_start_0
    iget-object v1, p0, Lcom/bykv/vk/openvk/api/plugin/rg$8;->df:Lcom/bykv/vk/openvk/api/plugin/rg;

    invoke-static {v1}, Lcom/bykv/vk/openvk/api/plugin/rg;->rg(Lcom/bykv/vk/openvk/api/plugin/rg;)Lcom/bykv/vk/openvk/TTVfManager;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 190
    iget-object v1, p0, Lcom/bykv/vk/openvk/api/plugin/rg$8;->rg:Lcom/bykv/vk/openvk/api/plugin/rg$rg;

    iget-object v2, p0, Lcom/bykv/vk/openvk/api/plugin/rg$8;->df:Lcom/bykv/vk/openvk/api/plugin/rg;

    invoke-static {v2}, Lcom/bykv/vk/openvk/api/plugin/rg;->rg(Lcom/bykv/vk/openvk/api/plugin/rg;)Lcom/bykv/vk/openvk/TTVfManager;

    move-result-object v2

    invoke-interface {v1, v2}, Lcom/bykv/vk/openvk/api/plugin/rg$rg;->rg(Ljava/lang/Object;)V

    goto :goto_0

    .line 192
    :cond_0
    iget-object v1, p0, Lcom/bykv/vk/openvk/api/plugin/rg$8;->rg:Lcom/bykv/vk/openvk/api/plugin/rg$rg;

    instance-of v1, v1, Lcom/bykv/vk/openvk/api/plugin/rg$q;

    if-eqz v1, :cond_1

    .line 193
    iget-object v1, p0, Lcom/bykv/vk/openvk/api/plugin/rg$8;->rg:Lcom/bykv/vk/openvk/api/plugin/rg$rg;

    check-cast v1, Lcom/bykv/vk/openvk/api/plugin/rg$q;

    invoke-interface {v1}, Lcom/bykv/vk/openvk/api/plugin/rg$q;->rg()V

    :cond_1
    const-string v1, "Not ready, no manager"

    .line 195
    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/api/rg;->pt(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 198
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Unexpected manager call error: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/bykv/vk/openvk/api/rg;->pt(Ljava/lang/String;Ljava/lang/String;)V

    .line 199
    invoke-static {v1}, Lcom/bykv/vk/openvk/api/plugin/c;->rg(Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method
