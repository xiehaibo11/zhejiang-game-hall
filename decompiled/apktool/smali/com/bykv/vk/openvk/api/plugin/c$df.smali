.class final Lcom/bykv/vk/openvk/api/plugin/c$df;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTAdEvent;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bykv/vk/openvk/api/plugin/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x18
    name = "df"
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 452
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onEvent(ILandroid/os/Bundle;)V
    .locals 4

    const/4 v0, 0x1

    if-ne p1, v0, :cond_5

    const-string p1, "config"

    .line 457
    invoke-virtual {p2, p1}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string v1, "plugin_pkg_name"

    .line 458
    invoke-virtual {p2, v1}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "code"

    .line 459
    invoke-virtual {p2, v2}, Landroid/os/Bundle;->getInt(Ljava/lang/String;)I

    move-result v2

    if-eqz v2, :cond_0

    .line 462
    invoke-static {v1, v2}, Lcom/bykv/vk/openvk/api/plugin/c;->rg(Ljava/lang/String;I)V

    return-void

    .line 465
    :cond_0
    invoke-static {p1}, Lcom/bykv/vk/openvk/api/plugin/c;->df(Ljava/lang/String;)Lcom/bykv/vk/openvk/api/plugin/df;

    move-result-object p1

    const-string v1, "TTPluginManager"

    if-eqz p1, :cond_4

    .line 466
    iget-object v2, p1, Lcom/bykv/vk/openvk/api/plugin/df;->mPackageName:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    goto :goto_0

    :cond_1
    const-string v2, "success"

    .line 470
    invoke-virtual {p2, v2}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_3

    .line 472
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "plugin update received: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p1, Lcom/bykv/vk/openvk/api/plugin/df;->mPackageName:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/bykv/vk/openvk/api/rg;->pt(Ljava/lang/String;Ljava/lang/String;)V

    .line 473
    invoke-virtual {p1}, Lcom/bykv/vk/openvk/api/plugin/df;->isRevert()Z

    move-result v1

    if-eqz v1, :cond_2

    .line 474
    iget-object p1, p1, Lcom/bykv/vk/openvk/api/plugin/df;->mPackageName:Ljava/lang/String;

    invoke-static {p1}, Lcom/bytedance/pangle/Zeus;->unInstallPlugin(Ljava/lang/String;)V

    goto :goto_1

    .line 476
    :cond_2
    invoke-static {p1}, Lcom/bykv/vk/openvk/api/plugin/c;->rg(Lcom/bykv/vk/openvk/api/plugin/df;)Z

    move-result p1

    if-eqz p1, :cond_5

    const-string p1, "installed"

    .line 477
    invoke-virtual {p2, p1, v0}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    goto :goto_1

    .line 481
    :cond_3
    iget-object p1, p1, Lcom/bykv/vk/openvk/api/plugin/df;->mPackageName:Ljava/lang/String;

    const/16 p2, 0x3ec

    invoke-static {p1, p2}, Lcom/bykv/vk/openvk/api/plugin/c;->rg(Ljava/lang/String;I)V

    goto :goto_1

    :cond_4
    :goto_0
    const-string p1, "plugin update received with invalid config"

    .line 467
    invoke-static {v1, p1}, Lcom/bykv/vk/openvk/api/rg;->pt(Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    :goto_1
    return-void
.end method
