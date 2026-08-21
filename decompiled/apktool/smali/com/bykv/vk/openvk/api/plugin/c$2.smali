.class Lcom/bykv/vk/openvk/api/plugin/c$2;
.super Lcom/bytedance/pangle/ZeusPluginStateListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bykv/vk/openvk/api/plugin/c;->df(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic rg:Lcom/bykv/vk/openvk/api/plugin/c;


# direct methods
.method constructor <init>(Lcom/bykv/vk/openvk/api/plugin/c;)V
    .locals 0

    .line 201
    iput-object p1, p0, Lcom/bykv/vk/openvk/api/plugin/c$2;->rg:Lcom/bykv/vk/openvk/api/plugin/c;

    invoke-direct {p0}, Lcom/bytedance/pangle/ZeusPluginStateListener;-><init>()V

    return-void
.end method


# virtual methods
.method public varargs onPluginStateChange(Ljava/lang/String;I[Ljava/lang/Object;)V
    .locals 1

    .line 204
    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, " state changed, "

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    const-string v0, "TTPluginManager"

    invoke-static {v0, p3}, Lcom/bykv/vk/openvk/api/rg;->df(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p3, 0x7

    if-ne p2, p3, :cond_0

    .line 206
    iget-object p3, p0, Lcom/bykv/vk/openvk/api/plugin/c$2;->rg:Lcom/bykv/vk/openvk/api/plugin/c;

    invoke-static {p3, p1, p2}, Lcom/bykv/vk/openvk/api/plugin/c;->rg(Lcom/bykv/vk/openvk/api/plugin/c;Ljava/lang/String;I)V

    goto :goto_0

    :cond_0
    const/4 p3, 0x6

    if-ne p2, p3, :cond_1

    .line 208
    invoke-static {}, Lcom/bykv/vk/openvk/df/rg;->rg()Lcom/bykv/vk/openvk/df/rg;

    move-result-object p3

    new-instance v0, Lcom/bykv/vk/openvk/api/plugin/c$2$1;

    invoke-direct {v0, p0, p1, p2}, Lcom/bykv/vk/openvk/api/plugin/c$2$1;-><init>(Lcom/bykv/vk/openvk/api/plugin/c$2;Ljava/lang/String;I)V

    invoke-virtual {p3, v0}, Lcom/bykv/vk/openvk/df/rg;->rg(Ljava/lang/Runnable;)V

    :cond_1
    :goto_0
    return-void
.end method
