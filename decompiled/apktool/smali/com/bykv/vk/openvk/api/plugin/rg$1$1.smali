.class Lcom/bykv/vk/openvk/api/plugin/rg$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/api/plugin/rg$rg;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bykv/vk/openvk/api/plugin/rg$1;->rg(Lcom/bykv/vk/openvk/api/plugin/rg$rg;)V
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
.field final synthetic df:Lcom/bykv/vk/openvk/api/plugin/rg$1;

.field final synthetic rg:Lcom/bykv/vk/openvk/api/plugin/rg$rg;


# direct methods
.method constructor <init>(Lcom/bykv/vk/openvk/api/plugin/rg$1;Lcom/bykv/vk/openvk/api/plugin/rg$rg;)V
    .locals 0

    .line 46
    iput-object p1, p0, Lcom/bykv/vk/openvk/api/plugin/rg$1$1;->df:Lcom/bykv/vk/openvk/api/plugin/rg$1;

    iput-object p2, p0, Lcom/bykv/vk/openvk/api/plugin/rg$1$1;->rg:Lcom/bykv/vk/openvk/api/plugin/rg$rg;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rg(Lcom/bykv/vk/openvk/TTVfManager;)V
    .locals 2

    .line 49
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/rg$1$1;->df:Lcom/bykv/vk/openvk/api/plugin/rg$1;

    iget-object v1, v0, Lcom/bykv/vk/openvk/api/plugin/rg$1;->df:Ljava/lang/ref/WeakReference;

    invoke-virtual {v1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/content/Context;

    invoke-interface {p1, v1}, Lcom/bykv/vk/openvk/TTVfManager;->createVfNative(Landroid/content/Context;)Lcom/bykv/vk/openvk/TTVfNative;

    move-result-object p1

    iput-object p1, v0, Lcom/bykv/vk/openvk/api/plugin/rg$1;->rg:Lcom/bykv/vk/openvk/TTVfNative;

    .line 50
    iget-object p1, p0, Lcom/bykv/vk/openvk/api/plugin/rg$1$1;->rg:Lcom/bykv/vk/openvk/api/plugin/rg$rg;

    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/rg$1$1;->df:Lcom/bykv/vk/openvk/api/plugin/rg$1;

    iget-object v0, v0, Lcom/bykv/vk/openvk/api/plugin/rg$1;->rg:Lcom/bykv/vk/openvk/TTVfNative;

    invoke-interface {p1, v0}, Lcom/bykv/vk/openvk/api/plugin/rg$rg;->rg(Ljava/lang/Object;)V

    return-void
.end method

.method public bridge synthetic rg(Ljava/lang/Object;)V
    .locals 0

    .line 46
    check-cast p1, Lcom/bykv/vk/openvk/TTVfManager;

    invoke-virtual {p0, p1}, Lcom/bykv/vk/openvk/api/plugin/rg$1$1;->rg(Lcom/bykv/vk/openvk/TTVfManager;)V

    return-void
.end method
