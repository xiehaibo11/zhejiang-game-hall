.class final Lcom/mbridge/msdk/advanced/b/a$1;
.super Landroid/os/Handler;
.source "NativeAdvancedLoadManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/advanced/b/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/advanced/b/a;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/advanced/b/a;Landroid/os/Looper;)V
    .locals 0

    .line 119
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/b/a$1;->a:Lcom/mbridge/msdk/advanced/b/a;

    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public final handleMessage(Landroid/os/Message;)V
    .locals 3

    .line 122
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    .line 123
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_6

    const/4 v2, 0x2

    if-eq v0, v2, :cond_5

    const/4 v2, 0x3

    if-eq v0, v2, :cond_4

    const/4 v2, 0x4

    if-eq v0, v2, :cond_2

    const/4 v2, 0x5

    if-eq v0, v2, :cond_0

    goto/16 :goto_0

    .line 146
    :cond_0
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    if-eqz p1, :cond_7

    .line 147
    instance-of v0, p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_7

    .line 148
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a$1;->a:Lcom/mbridge/msdk/advanced/b/a;

    invoke-static {v0}, Lcom/mbridge/msdk/advanced/b/a;->a(Lcom/mbridge/msdk/advanced/b/a;)Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 149
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a$1;->a:Lcom/mbridge/msdk/advanced/b/a;

    invoke-static {v0}, Lcom/mbridge/msdk/advanced/b/a;->a(Lcom/mbridge/msdk/advanced/b/a;)Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->setVideoReady(Z)V

    .line 151
    :cond_1
    check-cast p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 152
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a$1;->a:Lcom/mbridge/msdk/advanced/b/a;

    invoke-static {v0}, Lcom/mbridge/msdk/advanced/b/a;->b(Lcom/mbridge/msdk/advanced/b/a;)I

    move-result v1

    invoke-static {v0, p1, v1}, Lcom/mbridge/msdk/advanced/b/a;->a(Lcom/mbridge/msdk/advanced/b/a;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    goto/16 :goto_0

    .line 135
    :cond_2
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    if-eqz p1, :cond_7

    .line 136
    instance-of v0, p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_7

    .line 137
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a$1;->a:Lcom/mbridge/msdk/advanced/b/a;

    invoke-static {v0}, Lcom/mbridge/msdk/advanced/b/a;->a(Lcom/mbridge/msdk/advanced/b/a;)Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 138
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a$1;->a:Lcom/mbridge/msdk/advanced/b/a;

    invoke-static {v0}, Lcom/mbridge/msdk/advanced/b/a;->a(Lcom/mbridge/msdk/advanced/b/a;)Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->setEndCardReady(Z)V

    .line 140
    :cond_3
    check-cast p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 141
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a$1;->a:Lcom/mbridge/msdk/advanced/b/a;

    invoke-static {v0}, Lcom/mbridge/msdk/advanced/b/a;->b(Lcom/mbridge/msdk/advanced/b/a;)I

    move-result v1

    invoke-static {v0, p1, v1}, Lcom/mbridge/msdk/advanced/b/a;->a(Lcom/mbridge/msdk/advanced/b/a;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    goto :goto_0

    .line 163
    :cond_4
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    if-eqz p1, :cond_7

    .line 164
    instance-of v0, p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_7

    .line 165
    check-cast p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 166
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a$1;->a:Lcom/mbridge/msdk/advanced/b/a;

    invoke-static {v0}, Lcom/mbridge/msdk/advanced/b/a;->b(Lcom/mbridge/msdk/advanced/b/a;)I

    move-result v1

    invoke-static {v0, p1, v1}, Lcom/mbridge/msdk/advanced/b/a;->a(Lcom/mbridge/msdk/advanced/b/a;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    goto :goto_0

    .line 156
    :cond_5
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    if-eqz p1, :cond_7

    .line 157
    instance-of v0, p1, Ljava/lang/String;

    if-eqz v0, :cond_7

    .line 158
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a$1;->a:Lcom/mbridge/msdk/advanced/b/a;

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/a$1;->a:Lcom/mbridge/msdk/advanced/b/a;

    invoke-static {v1}, Lcom/mbridge/msdk/advanced/b/a;->c(Lcom/mbridge/msdk/advanced/b/a;)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/a$1;->a:Lcom/mbridge/msdk/advanced/b/a;

    invoke-static {v2}, Lcom/mbridge/msdk/advanced/b/a;->b(Lcom/mbridge/msdk/advanced/b/a;)I

    move-result v2

    invoke-static {v0, p1, v1, v2}, Lcom/mbridge/msdk/advanced/b/a;->a(Lcom/mbridge/msdk/advanced/b/a;Ljava/lang/String;Ljava/lang/String;I)V

    goto :goto_0

    .line 125
    :cond_6
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 126
    iget p1, p1, Landroid/os/Message;->arg1:I

    if-eqz v0, :cond_7

    .line 127
    instance-of v1, v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v1, :cond_7

    .line 128
    check-cast v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 129
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;

    move-result-object v1

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdZip()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getH5ResAddress(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 130
    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/a$1;->a:Lcom/mbridge/msdk/advanced/b/a;

    invoke-static {v2, v1, v0, p1}, Lcom/mbridge/msdk/advanced/b/a;->a(Lcom/mbridge/msdk/advanced/b/a;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    :cond_7
    :goto_0
    return-void
.end method
