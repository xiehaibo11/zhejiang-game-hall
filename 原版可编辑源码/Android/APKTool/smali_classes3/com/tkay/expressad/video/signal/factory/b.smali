.class public Lcom/tkay/expressad/video/signal/factory/b;
.super Lcom/tkay/expressad/video/signal/factory/a;


# instance fields
.field private h:Landroid/app/Activity;

.field private i:Landroid/webkit/WebView;

.field private j:Lcom/tkay/expressad/video/module/TkayVideoView;

.field private k:Lcom/tkay/expressad/video/module/TkayContainerView;

.field private l:Lcom/tkay/expressad/foundation/d/c;

.field private m:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

.field private n:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation
.end field

.field private o:Lcom/tkay/expressad/video/signal/c$a;

.field private p:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0

    .line 41
    invoke-direct {p0}, Lcom/tkay/expressad/video/signal/factory/a;-><init>()V

    .line 42
    iput-object p1, p0, Lcom/tkay/expressad/video/signal/factory/b;->h:Landroid/app/Activity;

    return-void
.end method

.method private constructor <init>(Landroid/app/Activity;Landroid/webkit/WebView;Lcom/tkay/expressad/video/module/TkayVideoView;Lcom/tkay/expressad/video/module/TkayContainerView;Lcom/tkay/expressad/foundation/d/c;)V
    .locals 0

    .line 51
    invoke-direct {p0}, Lcom/tkay/expressad/video/signal/factory/a;-><init>()V

    .line 52
    iput-object p1, p0, Lcom/tkay/expressad/video/signal/factory/b;->h:Landroid/app/Activity;

    .line 53
    iput-object p2, p0, Lcom/tkay/expressad/video/signal/factory/b;->i:Landroid/webkit/WebView;

    .line 54
    iput-object p3, p0, Lcom/tkay/expressad/video/signal/factory/b;->j:Lcom/tkay/expressad/video/module/TkayVideoView;

    .line 55
    iput-object p4, p0, Lcom/tkay/expressad/video/signal/factory/b;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    .line 56
    iput-object p5, p0, Lcom/tkay/expressad/video/signal/factory/b;->l:Lcom/tkay/expressad/foundation/d/c;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;Landroid/webkit/WebView;Lcom/tkay/expressad/video/module/TkayVideoView;Lcom/tkay/expressad/video/module/TkayContainerView;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/video/signal/c$a;)V
    .locals 0

    .line 59
    invoke-direct {p0}, Lcom/tkay/expressad/video/signal/factory/a;-><init>()V

    .line 60
    iput-object p1, p0, Lcom/tkay/expressad/video/signal/factory/b;->h:Landroid/app/Activity;

    .line 61
    iput-object p2, p0, Lcom/tkay/expressad/video/signal/factory/b;->i:Landroid/webkit/WebView;

    .line 62
    iput-object p3, p0, Lcom/tkay/expressad/video/signal/factory/b;->j:Lcom/tkay/expressad/video/module/TkayVideoView;

    .line 63
    iput-object p4, p0, Lcom/tkay/expressad/video/signal/factory/b;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    .line 64
    iput-object p5, p0, Lcom/tkay/expressad/video/signal/factory/b;->l:Lcom/tkay/expressad/foundation/d/c;

    .line 65
    iput-object p6, p0, Lcom/tkay/expressad/video/signal/factory/b;->o:Lcom/tkay/expressad/video/signal/c$a;

    .line 66
    invoke-virtual {p3}, Lcom/tkay/expressad/video/module/TkayVideoView;->getUnitId()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/video/signal/factory/b;->p:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;Lcom/tkay/expressad/video/bt/module/TkayBTContainer;Landroid/webkit/WebView;)V
    .locals 0

    .line 45
    invoke-direct {p0}, Lcom/tkay/expressad/video/signal/factory/a;-><init>()V

    .line 46
    iput-object p1, p0, Lcom/tkay/expressad/video/signal/factory/b;->h:Landroid/app/Activity;

    .line 47
    iput-object p2, p0, Lcom/tkay/expressad/video/signal/factory/b;->m:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    .line 48
    iput-object p3, p0, Lcom/tkay/expressad/video/signal/factory/b;->i:Landroid/webkit/WebView;

    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/expressad/video/signal/a/j;)V
    .locals 0

    .line 164
    iput-object p1, p0, Lcom/tkay/expressad/video/signal/factory/b;->b:Lcom/tkay/expressad/video/signal/c;

    return-void
.end method

.method public final a(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)V"
        }
    .end annotation

    .line 168
    iput-object p1, p0, Lcom/tkay/expressad/video/signal/factory/b;->n:Ljava/util/List;

    return-void
.end method

.method public getActivityProxy()Lcom/tkay/expressad/video/signal/a;
    .locals 2

    .line 71
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/factory/b;->i:Landroid/webkit/WebView;

    if-nez v0, :cond_0

    .line 72
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/factory/a;->getActivityProxy()Lcom/tkay/expressad/video/signal/a;

    move-result-object v0

    return-object v0

    .line 74
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/factory/b;->a:Lcom/tkay/expressad/video/signal/a;

    if-nez v0, :cond_1

    .line 75
    new-instance v0, Lcom/tkay/expressad/video/signal/a/h;

    iget-object v1, p0, Lcom/tkay/expressad/video/signal/factory/b;->i:Landroid/webkit/WebView;

    invoke-direct {v0, v1}, Lcom/tkay/expressad/video/signal/a/h;-><init>(Landroid/webkit/WebView;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/signal/factory/b;->a:Lcom/tkay/expressad/video/signal/a;

    .line 77
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/factory/b;->a:Lcom/tkay/expressad/video/signal/a;

    return-object v0
.end method

.method public getIJSRewardVideoV1()Lcom/tkay/expressad/video/signal/i;
    .locals 3

    .line 141
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/factory/b;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/tkay/expressad/video/signal/factory/b;->h:Landroid/app/Activity;

    if-nez v0, :cond_0

    goto :goto_0

    .line 144
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/factory/b;->f:Lcom/tkay/expressad/video/signal/i;

    if-nez v0, :cond_1

    .line 145
    new-instance v0, Lcom/tkay/expressad/video/signal/a/m;

    iget-object v1, p0, Lcom/tkay/expressad/video/signal/factory/b;->h:Landroid/app/Activity;

    iget-object v2, p0, Lcom/tkay/expressad/video/signal/factory/b;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-direct {v0, v1, v2}, Lcom/tkay/expressad/video/signal/a/m;-><init>(Landroid/app/Activity;Lcom/tkay/expressad/video/module/TkayContainerView;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/signal/factory/b;->f:Lcom/tkay/expressad/video/signal/i;

    .line 147
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/factory/b;->f:Lcom/tkay/expressad/video/signal/i;

    return-object v0

    .line 142
    :cond_2
    :goto_0
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/factory/a;->getIJSRewardVideoV1()Lcom/tkay/expressad/video/signal/i;

    move-result-object v0

    return-object v0
.end method

.method public getJSBTModule()Lcom/tkay/expressad/video/signal/b;
    .locals 3

    .line 153
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/factory/b;->h:Landroid/app/Activity;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/tkay/expressad/video/signal/factory/b;->m:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    if-nez v0, :cond_0

    goto :goto_0

    .line 156
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/factory/b;->g:Lcom/tkay/expressad/video/signal/b;

    if-nez v0, :cond_1

    .line 157
    new-instance v0, Lcom/tkay/expressad/video/signal/a/i;

    iget-object v1, p0, Lcom/tkay/expressad/video/signal/factory/b;->h:Landroid/app/Activity;

    iget-object v2, p0, Lcom/tkay/expressad/video/signal/factory/b;->m:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-direct {v0, v1, v2}, Lcom/tkay/expressad/video/signal/a/i;-><init>(Landroid/app/Activity;Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/signal/factory/b;->g:Lcom/tkay/expressad/video/signal/b;

    .line 159
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/factory/b;->g:Lcom/tkay/expressad/video/signal/b;

    return-object v0

    .line 154
    :cond_2
    :goto_0
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/factory/a;->getJSBTModule()Lcom/tkay/expressad/video/signal/b;

    move-result-object v0

    return-object v0
.end method

.method public getJSCommon()Lcom/tkay/expressad/video/signal/c;
    .locals 3

    .line 95
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/factory/b;->h:Landroid/app/Activity;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/tkay/expressad/video/signal/factory/b;->l:Lcom/tkay/expressad/foundation/d/c;

    if-nez v0, :cond_0

    goto :goto_0

    .line 98
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/factory/b;->b:Lcom/tkay/expressad/video/signal/c;

    if-nez v0, :cond_1

    .line 99
    new-instance v0, Lcom/tkay/expressad/video/signal/a/j;

    iget-object v1, p0, Lcom/tkay/expressad/video/signal/factory/b;->h:Landroid/app/Activity;

    iget-object v2, p0, Lcom/tkay/expressad/video/signal/factory/b;->l:Lcom/tkay/expressad/foundation/d/c;

    invoke-direct {v0, v1, v2}, Lcom/tkay/expressad/video/signal/a/j;-><init>(Landroid/app/Activity;Lcom/tkay/expressad/foundation/d/c;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/signal/factory/b;->b:Lcom/tkay/expressad/video/signal/c;

    .line 102
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/factory/b;->l:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->k()I

    move-result v0

    const/4 v1, 0x5

    if-ne v0, v1, :cond_2

    iget-object v0, p0, Lcom/tkay/expressad/video/signal/factory/b;->n:Ljava/util/List;

    if-eqz v0, :cond_2

    .line 103
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/factory/b;->b:Lcom/tkay/expressad/video/signal/c;

    instance-of v0, v0, Lcom/tkay/expressad/video/signal/a/j;

    if-eqz v0, :cond_2

    .line 104
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/factory/b;->b:Lcom/tkay/expressad/video/signal/c;

    check-cast v0, Lcom/tkay/expressad/video/signal/a/j;

    iget-object v1, p0, Lcom/tkay/expressad/video/signal/factory/b;->n:Ljava/util/List;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/signal/a/j;->a(Ljava/util/List;)V

    .line 107
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/factory/b;->b:Lcom/tkay/expressad/video/signal/c;

    iget-object v1, p0, Lcom/tkay/expressad/video/signal/factory/b;->h:Landroid/app/Activity;

    invoke-interface {v0, v1}, Lcom/tkay/expressad/video/signal/c;->a(Landroid/app/Activity;)V

    .line 108
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/factory/b;->b:Lcom/tkay/expressad/video/signal/c;

    iget-object v1, p0, Lcom/tkay/expressad/video/signal/factory/b;->p:Ljava/lang/String;

    invoke-interface {v0, v1}, Lcom/tkay/expressad/video/signal/c;->a(Ljava/lang/String;)V

    .line 109
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/factory/b;->b:Lcom/tkay/expressad/video/signal/c;

    iget-object v1, p0, Lcom/tkay/expressad/video/signal/factory/b;->o:Lcom/tkay/expressad/video/signal/c$a;

    invoke-interface {v0, v1}, Lcom/tkay/expressad/video/signal/c;->a(Lcom/tkay/expressad/video/signal/c$a;)V

    .line 111
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/factory/b;->b:Lcom/tkay/expressad/video/signal/c;

    return-object v0

    .line 96
    :cond_3
    :goto_0
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/factory/a;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    return-object v0
.end method

.method public getJSContainerModule()Lcom/tkay/expressad/video/signal/e;
    .locals 2

    .line 129
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/factory/b;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-nez v0, :cond_0

    .line 130
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/factory/a;->getJSContainerModule()Lcom/tkay/expressad/video/signal/e;

    move-result-object v0

    return-object v0

    .line 132
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/factory/b;->e:Lcom/tkay/expressad/video/signal/e;

    if-nez v0, :cond_1

    .line 133
    new-instance v0, Lcom/tkay/expressad/video/signal/a/k;

    iget-object v1, p0, Lcom/tkay/expressad/video/signal/factory/b;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-direct {v0, v1}, Lcom/tkay/expressad/video/signal/a/k;-><init>(Lcom/tkay/expressad/video/module/TkayContainerView;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/signal/factory/b;->e:Lcom/tkay/expressad/video/signal/e;

    .line 135
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/factory/b;->e:Lcom/tkay/expressad/video/signal/e;

    return-object v0
.end method

.method public getJSNotifyProxy()Lcom/tkay/expressad/video/signal/g;
    .locals 2

    .line 83
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/factory/b;->i:Landroid/webkit/WebView;

    if-nez v0, :cond_0

    .line 84
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/factory/a;->getJSNotifyProxy()Lcom/tkay/expressad/video/signal/g;

    move-result-object v0

    return-object v0

    .line 86
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/factory/b;->d:Lcom/tkay/expressad/video/signal/g;

    if-nez v0, :cond_1

    .line 87
    new-instance v0, Lcom/tkay/expressad/video/signal/a/l;

    iget-object v1, p0, Lcom/tkay/expressad/video/signal/factory/b;->i:Landroid/webkit/WebView;

    invoke-direct {v0, v1}, Lcom/tkay/expressad/video/signal/a/l;-><init>(Landroid/webkit/WebView;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/signal/factory/b;->d:Lcom/tkay/expressad/video/signal/g;

    .line 89
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/factory/b;->d:Lcom/tkay/expressad/video/signal/g;

    return-object v0
.end method

.method public getJSVideoModule()Lcom/tkay/expressad/video/signal/j;
    .locals 2

    .line 117
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/factory/b;->j:Lcom/tkay/expressad/video/module/TkayVideoView;

    if-nez v0, :cond_0

    .line 118
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/factory/a;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object v0

    return-object v0

    .line 120
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/factory/b;->c:Lcom/tkay/expressad/video/signal/j;

    if-nez v0, :cond_1

    .line 121
    new-instance v0, Lcom/tkay/expressad/video/signal/a/n;

    iget-object v1, p0, Lcom/tkay/expressad/video/signal/factory/b;->j:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-direct {v0, v1}, Lcom/tkay/expressad/video/signal/a/n;-><init>(Lcom/tkay/expressad/video/module/TkayVideoView;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/signal/factory/b;->c:Lcom/tkay/expressad/video/signal/j;

    .line 123
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/factory/b;->c:Lcom/tkay/expressad/video/signal/j;

    return-object v0
.end method
