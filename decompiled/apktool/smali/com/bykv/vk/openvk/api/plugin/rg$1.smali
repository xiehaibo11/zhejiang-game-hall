.class Lcom/bykv/vk/openvk/api/plugin/rg$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/api/plugin/rg$df;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bykv/vk/openvk/api/plugin/rg;->createVfNative(Landroid/content/Context;)Lcom/bykv/vk/openvk/TTVfNative;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/bykv/vk/openvk/api/plugin/rg$df<",
        "Lcom/bykv/vk/openvk/TTVfNative;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic df:Ljava/lang/ref/WeakReference;

.field final synthetic q:Lcom/bykv/vk/openvk/api/plugin/rg;

.field rg:Lcom/bykv/vk/openvk/TTVfNative;


# direct methods
.method constructor <init>(Lcom/bykv/vk/openvk/api/plugin/rg;Ljava/lang/ref/WeakReference;)V
    .locals 0

    .line 39
    iput-object p1, p0, Lcom/bykv/vk/openvk/api/plugin/rg$1;->q:Lcom/bykv/vk/openvk/api/plugin/rg;

    iput-object p2, p0, Lcom/bykv/vk/openvk/api/plugin/rg$1;->df:Ljava/lang/ref/WeakReference;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rg(Lcom/bykv/vk/openvk/api/plugin/rg$rg;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bykv/vk/openvk/api/plugin/rg$rg<",
            "Lcom/bykv/vk/openvk/TTVfNative;",
            ">;)V"
        }
    .end annotation

    .line 43
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/rg$1;->rg:Lcom/bykv/vk/openvk/TTVfNative;

    if-eqz v0, :cond_0

    .line 44
    invoke-interface {p1, v0}, Lcom/bykv/vk/openvk/api/plugin/rg$rg;->rg(Ljava/lang/Object;)V

    goto :goto_0

    .line 46
    :cond_0
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/rg$1;->q:Lcom/bykv/vk/openvk/api/plugin/rg;

    new-instance v1, Lcom/bykv/vk/openvk/api/plugin/rg$1$1;

    invoke-direct {v1, p0, p1}, Lcom/bykv/vk/openvk/api/plugin/rg$1$1;-><init>(Lcom/bykv/vk/openvk/api/plugin/rg$1;Lcom/bykv/vk/openvk/api/plugin/rg$rg;)V

    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/api/plugin/rg;->rg(Lcom/bykv/vk/openvk/api/plugin/rg;Lcom/bykv/vk/openvk/api/plugin/rg$rg;)V

    :goto_0
    return-void
.end method
