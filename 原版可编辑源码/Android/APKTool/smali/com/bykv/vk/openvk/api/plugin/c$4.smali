.class Lcom/bykv/vk/openvk/api/plugin/c$4;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bykv/vk/openvk/api/plugin/c;->df(Lcom/bykv/vk/openvk/TTPluginListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/bykv/vk/openvk/api/plugin/c;

.field final synthetic rg:Lcom/bykv/vk/openvk/TTPluginListener;


# direct methods
.method constructor <init>(Lcom/bykv/vk/openvk/api/plugin/c;Lcom/bykv/vk/openvk/TTPluginListener;)V
    .locals 0

    .line 301
    iput-object p1, p0, Lcom/bykv/vk/openvk/api/plugin/c$4;->df:Lcom/bykv/vk/openvk/api/plugin/c;

    iput-object p2, p0, Lcom/bykv/vk/openvk/api/plugin/c$4;->rg:Lcom/bykv/vk/openvk/TTPluginListener;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 5

    .line 304
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/c$4;->rg:Lcom/bykv/vk/openvk/TTPluginListener;

    invoke-interface {v0}, Lcom/bykv/vk/openvk/TTPluginListener;->packageName()Ljava/lang/String;

    move-result-object v0

    .line 306
    invoke-static {v0}, Lcom/bytedance/pangle/Zeus;->isPluginInstalled(Ljava/lang/String;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_1

    .line 307
    invoke-static {v0}, Lcom/bytedance/pangle/Zeus;->isPluginLoaded(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_0

    invoke-static {v0}, Lcom/bytedance/pangle/Zeus;->loadPlugin(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 308
    :cond_0
    invoke-static {v0}, Lcom/bytedance/pangle/Zeus;->getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object v0

    goto :goto_0

    :cond_1
    move-object v0, v2

    .line 311
    :goto_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Find plugin:"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-eqz v0, :cond_2

    const/4 v3, 0x1

    goto :goto_1

    :cond_2
    const/4 v3, 0x0

    :goto_1
    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v3, "TTPluginManager"

    invoke-static {v3, v1}, Lcom/bykv/vk/openvk/api/rg;->df(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz v0, :cond_3

    .line 313
    invoke-static {v0}, Lcom/bykv/vk/openvk/api/plugin/c;->rg(Lcom/bytedance/pangle/plugin/Plugin;)V

    .line 314
    iget-object v1, p0, Lcom/bykv/vk/openvk/api/plugin/c$4;->rg:Lcom/bykv/vk/openvk/TTPluginListener;

    const/16 v3, 0x3e8

    iget-object v4, v0, Lcom/bytedance/pangle/plugin/Plugin;->mClassLoader:Lcom/bytedance/pangle/PluginClassLoader;

    iget-object v0, v0, Lcom/bytedance/pangle/plugin/Plugin;->mResources:Landroid/content/res/Resources;

    invoke-interface {v1, v3, v4, v0, v2}, Lcom/bykv/vk/openvk/TTPluginListener;->onPluginListener(ILjava/lang/ClassLoader;Landroid/content/res/Resources;Landroid/os/Bundle;)V

    goto :goto_2

    .line 316
    :cond_3
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/c$4;->rg:Lcom/bykv/vk/openvk/TTPluginListener;

    invoke-static {v0}, Lcom/bykv/vk/openvk/api/plugin/c;->q(Lcom/bykv/vk/openvk/TTPluginListener;)Lcom/bykv/vk/openvk/TTPluginListener;

    :goto_2
    return-void
.end method
