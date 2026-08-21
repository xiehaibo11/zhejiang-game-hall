.class final Lcom/bykv/vk/openvk/live/rg$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTPluginListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bykv/vk/openvk/live/rg;->rg(Lcom/bykv/vk/openvk/api/plugin/c;Landroid/os/Bundle;Lcom/bykv/vk/openvk/TTPluginListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic df:Landroid/os/Bundle;

.field final synthetic rg:Lcom/bykv/vk/openvk/TTPluginListener;


# direct methods
.method constructor <init>(Lcom/bykv/vk/openvk/TTPluginListener;Landroid/os/Bundle;)V
    .locals 0

    .line 52
    iput-object p1, p0, Lcom/bykv/vk/openvk/live/rg$1;->rg:Lcom/bykv/vk/openvk/TTPluginListener;

    iput-object p2, p0, Lcom/bykv/vk/openvk/live/rg$1;->df:Landroid/os/Bundle;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public config()Landroid/os/Bundle;
    .locals 1

    .line 67
    iget-object v0, p0, Lcom/bykv/vk/openvk/live/rg$1;->df:Landroid/os/Bundle;

    return-object v0
.end method

.method public onPluginListener(ILjava/lang/ClassLoader;Landroid/content/res/Resources;Landroid/os/Bundle;)V
    .locals 1

    .line 55
    iget-object v0, p0, Lcom/bykv/vk/openvk/live/rg$1;->rg:Lcom/bykv/vk/openvk/TTPluginListener;

    if-eqz v0, :cond_0

    .line 56
    invoke-interface {v0, p1, p2, p3, p4}, Lcom/bykv/vk/openvk/TTPluginListener;->onPluginListener(ILjava/lang/ClassLoader;Landroid/content/res/Resources;Landroid/os/Bundle;)V

    :cond_0
    return-void
.end method

.method public packageName()Ljava/lang/String;
    .locals 1

    const-string v0, "com.byted.live.lite"

    return-object v0
.end method
