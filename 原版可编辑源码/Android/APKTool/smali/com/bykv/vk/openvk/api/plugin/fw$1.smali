.class Lcom/bykv/vk/openvk/api/plugin/fw$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bykv/vk/openvk/api/plugin/fw;->rg(Landroid/content/Context;Lcom/bykv/vk/openvk/AdConfig;Lcom/bykv/vk/openvk/TTVfSdk$InitCallback;Lcom/bykv/vk/openvk/api/plugin/pp;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/bykv/vk/openvk/AdConfig;

.field final synthetic pp:Lcom/bykv/vk/openvk/api/plugin/fw;

.field final synthetic pt:Lcom/bykv/vk/openvk/TTVfSdk$InitCallback;

.field final synthetic q:Landroid/content/Context;

.field final synthetic rg:Lcom/bykv/vk/openvk/api/plugin/pp;


# direct methods
.method constructor <init>(Lcom/bykv/vk/openvk/api/plugin/fw;Lcom/bykv/vk/openvk/api/plugin/pp;Lcom/bykv/vk/openvk/AdConfig;Landroid/content/Context;Lcom/bykv/vk/openvk/TTVfSdk$InitCallback;)V
    .locals 0

    .line 103
    iput-object p1, p0, Lcom/bykv/vk/openvk/api/plugin/fw$1;->pp:Lcom/bykv/vk/openvk/api/plugin/fw;

    iput-object p2, p0, Lcom/bykv/vk/openvk/api/plugin/fw$1;->rg:Lcom/bykv/vk/openvk/api/plugin/pp;

    iput-object p3, p0, Lcom/bykv/vk/openvk/api/plugin/fw$1;->df:Lcom/bykv/vk/openvk/AdConfig;

    iput-object p4, p0, Lcom/bykv/vk/openvk/api/plugin/fw$1;->q:Landroid/content/Context;

    iput-object p5, p0, Lcom/bykv/vk/openvk/api/plugin/fw$1;->pt:Lcom/bykv/vk/openvk/TTVfSdk$InitCallback;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    .line 106
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/fw$1;->rg:Lcom/bykv/vk/openvk/api/plugin/pp;

    const-string v1, "wait_asyn_cost"

    invoke-virtual {v0, v1}, Lcom/bykv/vk/openvk/api/plugin/pp;->df(Ljava/lang/String;)J

    .line 107
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/fw$1;->pp:Lcom/bykv/vk/openvk/api/plugin/fw;

    iget-object v1, p0, Lcom/bykv/vk/openvk/api/plugin/fw$1;->df:Lcom/bykv/vk/openvk/AdConfig;

    iget-object v2, p0, Lcom/bykv/vk/openvk/api/plugin/fw$1;->rg:Lcom/bykv/vk/openvk/api/plugin/pp;

    invoke-static {v0, v1, v2}, Lcom/bykv/vk/openvk/api/plugin/fw;->rg(Lcom/bykv/vk/openvk/api/plugin/fw;Lcom/bykv/vk/openvk/AdConfig;Lcom/bykv/vk/openvk/api/plugin/pp;)Lcom/bykv/vk/openvk/TTInitializer;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 109
    sget-object v1, Lcom/bykv/vk/openvk/api/plugin/rg;->rg:Lcom/bykv/vk/openvk/api/plugin/rg;

    invoke-interface {v0}, Lcom/bykv/vk/openvk/TTInitializer;->getAdManager()Lcom/bykv/vk/openvk/TTVfManager;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/bykv/vk/openvk/api/plugin/rg;->rg(Lcom/bykv/vk/openvk/TTVfManager;)V

    .line 110
    iget-object v1, p0, Lcom/bykv/vk/openvk/api/plugin/fw$1;->q:Landroid/content/Context;

    iget-object v2, p0, Lcom/bykv/vk/openvk/api/plugin/fw$1;->df:Lcom/bykv/vk/openvk/AdConfig;

    iget-object v3, p0, Lcom/bykv/vk/openvk/api/plugin/fw$1;->pt:Lcom/bykv/vk/openvk/TTVfSdk$InitCallback;

    invoke-interface {v0, v1, v2, v3}, Lcom/bykv/vk/openvk/TTInitializer;->init(Landroid/content/Context;Lcom/bykv/vk/openvk/AdConfig;Lcom/bykv/vk/openvk/TTVfSdk$InitCallback;)V

    .line 111
    invoke-interface {v0}, Lcom/bykv/vk/openvk/TTInitializer;->getAdManager()Lcom/bykv/vk/openvk/TTVfManager;

    move-result-object v0

    invoke-static {}, Lcom/bykv/vk/openvk/rg/df;->rg()Lcom/bykv/vk/openvk/rg/df;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/bykv/vk/openvk/TTVfManager;->register(Ljava/lang/Object;)V

    goto :goto_0

    .line 113
    :cond_0
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/fw$1;->pt:Lcom/bykv/vk/openvk/TTVfSdk$InitCallback;

    const/16 v1, 0x1069

    const-string v2, "No initializer"

    invoke-interface {v0, v1, v2}, Lcom/bykv/vk/openvk/TTVfSdk$InitCallback;->fail(ILjava/lang/String;)V

    :goto_0
    return-void
.end method
