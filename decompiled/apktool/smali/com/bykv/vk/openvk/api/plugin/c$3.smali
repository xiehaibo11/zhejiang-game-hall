.class Lcom/bykv/vk/openvk/api/plugin/c$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bykv/vk/openvk/api/plugin/c;->rg(Lcom/bykv/vk/openvk/TTPluginListener;)V
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

    .line 273
    iput-object p1, p0, Lcom/bykv/vk/openvk/api/plugin/c$3;->df:Lcom/bykv/vk/openvk/api/plugin/c;

    iput-object p2, p0, Lcom/bykv/vk/openvk/api/plugin/c$3;->rg:Lcom/bykv/vk/openvk/TTPluginListener;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    const-string v0, "TTPluginManager"

    const-string v1, "Load plugin failed, caused by timeout."

    .line 276
    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/api/rg;->df(Ljava/lang/String;Ljava/lang/String;)V

    .line 277
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/c$3;->rg:Lcom/bykv/vk/openvk/TTPluginListener;

    const/4 v1, 0x0

    const/16 v2, 0x3e9

    invoke-interface {v0, v2, v1, v1, v1}, Lcom/bykv/vk/openvk/TTPluginListener;->onPluginListener(ILjava/lang/ClassLoader;Landroid/content/res/Resources;Landroid/os/Bundle;)V

    return-void
.end method
