.class Lcom/bykv/vk/openvk/api/plugin/rg$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/api/plugin/rg$rg;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bykv/vk/openvk/api/plugin/rg;->register(Ljava/lang/Object;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/bykv/vk/openvk/api/plugin/rg$rg<",
        "Lcom/bykv/vk/openvk/TTVfManager;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic df:Ljava/lang/Object;

.field final synthetic q:Lcom/bykv/vk/openvk/api/plugin/rg;

.field final synthetic rg:Ljava/lang/Object;


# direct methods
.method constructor <init>(Lcom/bykv/vk/openvk/api/plugin/rg;Ljava/lang/Object;Ljava/lang/Object;)V
    .locals 0

    .line 70
    iput-object p1, p0, Lcom/bykv/vk/openvk/api/plugin/rg$2;->q:Lcom/bykv/vk/openvk/api/plugin/rg;

    iput-object p2, p0, Lcom/bykv/vk/openvk/api/plugin/rg$2;->rg:Ljava/lang/Object;

    iput-object p3, p0, Lcom/bykv/vk/openvk/api/plugin/rg$2;->df:Ljava/lang/Object;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rg(Lcom/bykv/vk/openvk/TTVfManager;)V
    .locals 1

    .line 73
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/rg$2;->rg:Ljava/lang/Object;

    invoke-interface {p1, v0}, Lcom/bykv/vk/openvk/TTVfManager;->register(Ljava/lang/Object;)V

    .line 74
    iget-object p1, p0, Lcom/bykv/vk/openvk/api/plugin/rg$2;->df:Ljava/lang/Object;

    instance-of p1, p1, Lcom/bykv/vk/openvk/TTPluginListener;

    if-eqz p1, :cond_0

    .line 75
    invoke-static {}, Lcom/bykv/vk/openvk/TTAppContextHolder;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/bykv/vk/openvk/api/plugin/c;->rg(Landroid/content/Context;)Lcom/bykv/vk/openvk/api/plugin/c;

    move-result-object p1

    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/rg$2;->df:Ljava/lang/Object;

    check-cast v0, Lcom/bykv/vk/openvk/TTPluginListener;

    invoke-virtual {p1, v0}, Lcom/bykv/vk/openvk/api/plugin/c;->rg(Lcom/bykv/vk/openvk/TTPluginListener;)V

    :cond_0
    return-void
.end method

.method public bridge synthetic rg(Ljava/lang/Object;)V
    .locals 0

    .line 70
    check-cast p1, Lcom/bykv/vk/openvk/TTVfManager;

    invoke-virtual {p0, p1}, Lcom/bykv/vk/openvk/api/plugin/rg$2;->rg(Lcom/bykv/vk/openvk/TTVfManager;)V

    return-void
.end method
