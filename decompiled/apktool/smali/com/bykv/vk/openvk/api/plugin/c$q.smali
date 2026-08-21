.class final Lcom/bykv/vk/openvk/api/plugin/c$q;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/api/proto/EventListener;
.implements Ljava/io/Serializable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bykv/vk/openvk/api/plugin/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x18
    name = "q"
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 518
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onEvent(ILcom/bykv/vk/openvk/api/proto/Result;)Lcom/bykv/vk/openvk/api/proto/ValueSet;
    .locals 5

    .line 522
    invoke-static {}, Lcom/bykv/vk/openvk/api/q;->rg()Lcom/bykv/vk/openvk/api/q;

    move-result-object v0

    const/4 v1, 0x1

    if-ne p1, v1, :cond_5

    .line 524
    invoke-interface {p2}, Lcom/bykv/vk/openvk/api/proto/Result;->values()Lcom/bykv/vk/openvk/api/proto/ValueSet;

    move-result-object p1

    const/4 v2, 0x0

    if-nez p1, :cond_0

    return-object v2

    :cond_0
    const/4 v3, 0x3

    .line 528
    invoke-interface {p1, v3}, Lcom/bykv/vk/openvk/api/proto/ValueSet;->stringValue(I)Ljava/lang/String;

    move-result-object v3

    .line 529
    invoke-interface {p2}, Lcom/bykv/vk/openvk/api/proto/Result;->code()I

    move-result v4

    .line 531
    invoke-interface {p2}, Lcom/bykv/vk/openvk/api/proto/Result;->isSuccess()Z

    move-result p2

    if-nez p2, :cond_1

    .line 532
    invoke-static {v3, v4}, Lcom/bykv/vk/openvk/api/plugin/c;->rg(Ljava/lang/String;I)V

    return-object v2

    :cond_1
    const/4 p2, 0x2

    .line 535
    invoke-interface {p1, p2}, Lcom/bykv/vk/openvk/api/proto/ValueSet;->stringValue(I)Ljava/lang/String;

    move-result-object p1

    .line 536
    invoke-static {p1}, Lcom/bykv/vk/openvk/api/plugin/c;->df(Ljava/lang/String;)Lcom/bykv/vk/openvk/api/plugin/df;

    move-result-object p1

    const-string p2, "TTPluginManager"

    if-eqz p1, :cond_4

    .line 537
    iget-object v3, p1, Lcom/bykv/vk/openvk/api/plugin/df;->mPackageName:Ljava/lang/String;

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_2

    goto :goto_0

    .line 541
    :cond_2
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "plugin update received: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p1, Lcom/bykv/vk/openvk/api/plugin/df;->mPackageName:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {p2, v2}, Lcom/bykv/vk/openvk/api/rg;->pt(Ljava/lang/String;Ljava/lang/String;)V

    .line 542
    invoke-virtual {p1}, Lcom/bykv/vk/openvk/api/plugin/df;->isRevert()Z

    move-result p2

    if-eqz p2, :cond_3

    .line 543
    iget-object p1, p1, Lcom/bykv/vk/openvk/api/plugin/df;->mPackageName:Ljava/lang/String;

    invoke-static {p1}, Lcom/bytedance/pangle/Zeus;->unInstallPlugin(Ljava/lang/String;)V

    goto :goto_1

    .line 545
    :cond_3
    invoke-static {p1}, Lcom/bykv/vk/openvk/api/plugin/c;->rg(Lcom/bykv/vk/openvk/api/plugin/df;)Z

    move-result p1

    if-eqz p1, :cond_5

    const/4 p1, 0x4

    .line 546
    invoke-virtual {v0, p1, v1}, Lcom/bykv/vk/openvk/api/q;->rg(IZ)Lcom/bykv/vk/openvk/api/q;

    goto :goto_1

    :cond_4
    :goto_0
    const-string p1, "plugin update received with invalid config"

    .line 538
    invoke-static {p2, p1}, Lcom/bykv/vk/openvk/api/rg;->pt(Ljava/lang/String;Ljava/lang/String;)V

    return-object v2

    .line 550
    :cond_5
    :goto_1
    invoke-virtual {v0}, Lcom/bykv/vk/openvk/api/q;->df()Lcom/bykv/vk/openvk/api/proto/ValueSet;

    move-result-object p1

    return-object p1
.end method
