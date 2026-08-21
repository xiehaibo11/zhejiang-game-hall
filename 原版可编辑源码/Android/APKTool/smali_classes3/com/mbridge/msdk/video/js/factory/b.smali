.class public final Lcom/mbridge/msdk/video/js/factory/b;
.super Lcom/mbridge/msdk/video/js/factory/a;
.source "JSFactory.java"


# instance fields
.field private h:Landroid/app/Activity;

.field private i:Landroid/webkit/WebView;

.field private j:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

.field private k:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

.field private l:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field private m:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

.field private n:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation
.end field

.field private o:Lcom/mbridge/msdk/video/js/c$a;

.field private p:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0

    .line 46
    invoke-direct {p0}, Lcom/mbridge/msdk/video/js/factory/a;-><init>()V

    .line 47
    iput-object p1, p0, Lcom/mbridge/msdk/video/js/factory/b;->h:Landroid/app/Activity;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;Landroid/webkit/WebView;Lcom/mbridge/msdk/video/module/MBridgeVideoView;Lcom/mbridge/msdk/video/module/MBridgeContainerView;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/video/js/c$a;)V
    .locals 0

    .line 64
    invoke-direct {p0}, Lcom/mbridge/msdk/video/js/factory/a;-><init>()V

    .line 65
    iput-object p1, p0, Lcom/mbridge/msdk/video/js/factory/b;->h:Landroid/app/Activity;

    .line 66
    iput-object p2, p0, Lcom/mbridge/msdk/video/js/factory/b;->i:Landroid/webkit/WebView;

    .line 67
    iput-object p3, p0, Lcom/mbridge/msdk/video/js/factory/b;->j:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    .line 68
    iput-object p4, p0, Lcom/mbridge/msdk/video/js/factory/b;->k:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    .line 69
    iput-object p5, p0, Lcom/mbridge/msdk/video/js/factory/b;->l:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 70
    iput-object p6, p0, Lcom/mbridge/msdk/video/js/factory/b;->o:Lcom/mbridge/msdk/video/js/c$a;

    .line 71
    invoke-virtual {p3}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->getUnitId()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/video/js/factory/b;->p:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;Landroid/webkit/WebView;)V
    .locals 0

    .line 50
    invoke-direct {p0}, Lcom/mbridge/msdk/video/js/factory/a;-><init>()V

    .line 51
    iput-object p1, p0, Lcom/mbridge/msdk/video/js/factory/b;->h:Landroid/app/Activity;

    .line 52
    iput-object p2, p0, Lcom/mbridge/msdk/video/js/factory/b;->m:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    .line 53
    iput-object p3, p0, Lcom/mbridge/msdk/video/js/factory/b;->i:Landroid/webkit/WebView;

    return-void
.end method


# virtual methods
.method public final a(Lcom/mbridge/msdk/video/js/a/j;)V
    .locals 0

    .line 168
    iput-object p1, p0, Lcom/mbridge/msdk/video/js/factory/b;->b:Lcom/mbridge/msdk/video/js/c;

    return-void
.end method

.method public final a(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;)V"
        }
    .end annotation

    .line 172
    iput-object p1, p0, Lcom/mbridge/msdk/video/js/factory/b;->n:Ljava/util/List;

    return-void
.end method

.method public final getActivityProxy()Lcom/mbridge/msdk/video/js/a;
    .locals 2

    .line 76
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/b;->i:Landroid/webkit/WebView;

    if-nez v0, :cond_0

    .line 77
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/factory/a;->getActivityProxy()Lcom/mbridge/msdk/video/js/a;

    move-result-object v0

    return-object v0

    .line 79
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/b;->a:Lcom/mbridge/msdk/video/js/a;

    if-nez v0, :cond_1

    .line 80
    new-instance v0, Lcom/mbridge/msdk/video/js/a/h;

    iget-object v1, p0, Lcom/mbridge/msdk/video/js/factory/b;->i:Landroid/webkit/WebView;

    invoke-direct {v0, v1}, Lcom/mbridge/msdk/video/js/a/h;-><init>(Landroid/webkit/WebView;)V

    iput-object v0, p0, Lcom/mbridge/msdk/video/js/factory/b;->a:Lcom/mbridge/msdk/video/js/a;

    .line 82
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/b;->a:Lcom/mbridge/msdk/video/js/a;

    return-object v0
.end method

.method public final getIJSRewardVideoV1()Lcom/mbridge/msdk/video/js/h;
    .locals 3

    .line 145
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/b;->k:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/b;->h:Landroid/app/Activity;

    if-nez v0, :cond_0

    goto :goto_0

    .line 148
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/b;->f:Lcom/mbridge/msdk/video/js/h;

    if-nez v0, :cond_1

    .line 149
    new-instance v0, Lcom/mbridge/msdk/video/js/a/m;

    iget-object v1, p0, Lcom/mbridge/msdk/video/js/factory/b;->h:Landroid/app/Activity;

    iget-object v2, p0, Lcom/mbridge/msdk/video/js/factory/b;->k:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-direct {v0, v1, v2}, Lcom/mbridge/msdk/video/js/a/m;-><init>(Landroid/app/Activity;Lcom/mbridge/msdk/video/module/MBridgeContainerView;)V

    iput-object v0, p0, Lcom/mbridge/msdk/video/js/factory/b;->f:Lcom/mbridge/msdk/video/js/h;

    .line 151
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/b;->f:Lcom/mbridge/msdk/video/js/h;

    return-object v0

    .line 146
    :cond_2
    :goto_0
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/factory/a;->getIJSRewardVideoV1()Lcom/mbridge/msdk/video/js/h;

    move-result-object v0

    return-object v0
.end method

.method public final getJSBTModule()Lcom/mbridge/msdk/video/js/b;
    .locals 3

    .line 157
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/b;->h:Landroid/app/Activity;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/b;->m:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    if-nez v0, :cond_0

    goto :goto_0

    .line 160
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/b;->g:Lcom/mbridge/msdk/video/js/b;

    if-nez v0, :cond_1

    .line 161
    new-instance v0, Lcom/mbridge/msdk/video/js/a/i;

    iget-object v1, p0, Lcom/mbridge/msdk/video/js/factory/b;->h:Landroid/app/Activity;

    iget-object v2, p0, Lcom/mbridge/msdk/video/js/factory/b;->m:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    invoke-direct {v0, v1, v2}, Lcom/mbridge/msdk/video/js/a/i;-><init>(Landroid/app/Activity;Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;)V

    iput-object v0, p0, Lcom/mbridge/msdk/video/js/factory/b;->g:Lcom/mbridge/msdk/video/js/b;

    .line 163
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/b;->g:Lcom/mbridge/msdk/video/js/b;

    return-object v0

    .line 158
    :cond_2
    :goto_0
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/factory/a;->getJSBTModule()Lcom/mbridge/msdk/video/js/b;

    move-result-object v0

    return-object v0
.end method

.method public final getJSCommon()Lcom/mbridge/msdk/video/js/c;
    .locals 3

    .line 100
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/b;->h:Landroid/app/Activity;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/b;->l:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-nez v0, :cond_0

    goto :goto_0

    .line 103
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/b;->b:Lcom/mbridge/msdk/video/js/c;

    if-nez v0, :cond_1

    .line 104
    new-instance v0, Lcom/mbridge/msdk/video/js/a/j;

    iget-object v1, p0, Lcom/mbridge/msdk/video/js/factory/b;->h:Landroid/app/Activity;

    iget-object v2, p0, Lcom/mbridge/msdk/video/js/factory/b;->l:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {v0, v1, v2}, Lcom/mbridge/msdk/video/js/a/j;-><init>(Landroid/app/Activity;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    iput-object v0, p0, Lcom/mbridge/msdk/video/js/factory/b;->b:Lcom/mbridge/msdk/video/js/c;

    .line 106
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/b;->l:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getDynamicTempCode()I

    move-result v0

    const/4 v1, 0x5

    if-ne v0, v1, :cond_2

    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/b;->n:Ljava/util/List;

    if-eqz v0, :cond_2

    .line 107
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/b;->b:Lcom/mbridge/msdk/video/js/c;

    instance-of v0, v0, Lcom/mbridge/msdk/video/js/a/j;

    if-eqz v0, :cond_2

    .line 108
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/b;->b:Lcom/mbridge/msdk/video/js/c;

    check-cast v0, Lcom/mbridge/msdk/video/js/a/j;

    iget-object v1, p0, Lcom/mbridge/msdk/video/js/factory/b;->n:Ljava/util/List;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/js/a/j;->a(Ljava/util/List;)V

    .line 111
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/b;->b:Lcom/mbridge/msdk/video/js/c;

    iget-object v1, p0, Lcom/mbridge/msdk/video/js/factory/b;->h:Landroid/app/Activity;

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/video/js/c;->a(Landroid/app/Activity;)V

    .line 112
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/b;->b:Lcom/mbridge/msdk/video/js/c;

    iget-object v1, p0, Lcom/mbridge/msdk/video/js/factory/b;->p:Ljava/lang/String;

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/video/js/c;->a(Ljava/lang/String;)V

    .line 113
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/b;->b:Lcom/mbridge/msdk/video/js/c;

    iget-object v1, p0, Lcom/mbridge/msdk/video/js/factory/b;->o:Lcom/mbridge/msdk/video/js/c$a;

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/video/js/c;->a(Lcom/mbridge/msdk/video/js/c$a;)V

    .line 115
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/b;->b:Lcom/mbridge/msdk/video/js/c;

    return-object v0

    .line 101
    :cond_3
    :goto_0
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/factory/a;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v0

    return-object v0
.end method

.method public final getJSContainerModule()Lcom/mbridge/msdk/video/js/e;
    .locals 2

    .line 133
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/b;->k:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    if-nez v0, :cond_0

    .line 134
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/factory/a;->getJSContainerModule()Lcom/mbridge/msdk/video/js/e;

    move-result-object v0

    return-object v0

    .line 136
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/b;->e:Lcom/mbridge/msdk/video/js/e;

    if-nez v0, :cond_1

    .line 137
    new-instance v0, Lcom/mbridge/msdk/video/js/a/k;

    iget-object v1, p0, Lcom/mbridge/msdk/video/js/factory/b;->k:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-direct {v0, v1}, Lcom/mbridge/msdk/video/js/a/k;-><init>(Lcom/mbridge/msdk/video/module/MBridgeContainerView;)V

    iput-object v0, p0, Lcom/mbridge/msdk/video/js/factory/b;->e:Lcom/mbridge/msdk/video/js/e;

    .line 139
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/b;->e:Lcom/mbridge/msdk/video/js/e;

    return-object v0
.end method

.method public final getJSNotifyProxy()Lcom/mbridge/msdk/video/js/f;
    .locals 2

    .line 88
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/b;->i:Landroid/webkit/WebView;

    if-nez v0, :cond_0

    .line 89
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/factory/a;->getJSNotifyProxy()Lcom/mbridge/msdk/video/js/f;

    move-result-object v0

    return-object v0

    .line 91
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/b;->d:Lcom/mbridge/msdk/video/js/f;

    if-nez v0, :cond_1

    .line 92
    new-instance v0, Lcom/mbridge/msdk/video/js/a/l;

    iget-object v1, p0, Lcom/mbridge/msdk/video/js/factory/b;->i:Landroid/webkit/WebView;

    invoke-direct {v0, v1}, Lcom/mbridge/msdk/video/js/a/l;-><init>(Landroid/webkit/WebView;)V

    iput-object v0, p0, Lcom/mbridge/msdk/video/js/factory/b;->d:Lcom/mbridge/msdk/video/js/f;

    .line 94
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/b;->d:Lcom/mbridge/msdk/video/js/f;

    return-object v0
.end method

.method public final getJSVideoModule()Lcom/mbridge/msdk/video/js/i;
    .locals 2

    .line 121
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/b;->j:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-nez v0, :cond_0

    .line 122
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/factory/a;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    return-object v0

    .line 124
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/b;->c:Lcom/mbridge/msdk/video/js/i;

    if-nez v0, :cond_1

    .line 125
    new-instance v0, Lcom/mbridge/msdk/video/js/a/n;

    iget-object v1, p0, Lcom/mbridge/msdk/video/js/factory/b;->j:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-direct {v0, v1}, Lcom/mbridge/msdk/video/js/a/n;-><init>(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)V

    iput-object v0, p0, Lcom/mbridge/msdk/video/js/factory/b;->c:Lcom/mbridge/msdk/video/js/i;

    .line 127
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/factory/b;->c:Lcom/mbridge/msdk/video/js/i;

    return-object v0
.end method
