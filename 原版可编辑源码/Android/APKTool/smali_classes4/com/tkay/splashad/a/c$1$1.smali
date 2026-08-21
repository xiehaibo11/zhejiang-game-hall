.class final Lcom/tkay/splashad/a/c$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/splashad/a/c$1;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

.field final synthetic b:Lcom/tkay/core/common/f/d;

.field final synthetic c:Lcom/tkay/splashad/a/c$1;


# direct methods
.method constructor <init>(Lcom/tkay/splashad/a/c$1;Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;Lcom/tkay/core/common/f/d;)V
    .locals 0

    .line 193
    iput-object p1, p0, Lcom/tkay/splashad/a/c$1$1;->c:Lcom/tkay/splashad/a/c$1;

    iput-object p2, p0, Lcom/tkay/splashad/a/c$1$1;->a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    iput-object p3, p0, Lcom/tkay/splashad/a/c$1$1;->b:Lcom/tkay/core/common/f/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 10

    .line 196
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->b()Lcom/tkay/core/api/IExHandler;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 198
    iget-object v1, p0, Lcom/tkay/splashad/a/c$1$1;->a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    const/4 v2, 0x0

    iget-object v3, p0, Lcom/tkay/splashad/a/c$1$1;->c:Lcom/tkay/splashad/a/c$1;

    iget-object v3, v3, Lcom/tkay/splashad/a/c$1;->e:Lcom/tkay/core/api/TYEventInterface;

    invoke-interface {v0, v1, v2, v3}, Lcom/tkay/core/api/IExHandler;->createDownloadListener(Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/api/BaseAd;Lcom/tkay/core/api/TYEventInterface;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->setAdDownloadListener(Lcom/tkay/core/api/TYEventInterface;)V

    .line 202
    :cond_0
    iget-object v0, p0, Lcom/tkay/splashad/a/c$1$1;->c:Lcom/tkay/splashad/a/c$1;

    iget-object v0, v0, Lcom/tkay/splashad/a/c$1;->f:Lcom/tkay/splashad/api/TYSplashSkipInfo;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/splashad/a/c$1$1;->c:Lcom/tkay/splashad/a/c$1;

    iget-object v0, v0, Lcom/tkay/splashad/a/c$1;->f:Lcom/tkay/splashad/api/TYSplashSkipInfo;

    invoke-virtual {v0}, Lcom/tkay/splashad/api/TYSplashSkipInfo;->canUseCustomSkipView()Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    goto :goto_0

    :cond_1
    const/4 v0, 0x0

    .line 203
    :goto_0
    iget-object v1, p0, Lcom/tkay/splashad/a/c$1$1;->a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    invoke-virtual {v1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->isSupportCustomSkipView()Z

    move-result v8

    if-eqz v0, :cond_2

    if-eqz v8, :cond_2

    .line 207
    iget-object v1, p0, Lcom/tkay/splashad/a/c$1$1;->c:Lcom/tkay/splashad/a/c$1;

    iget-object v1, v1, Lcom/tkay/splashad/a/c$1;->f:Lcom/tkay/splashad/api/TYSplashSkipInfo;

    iget-object v2, p0, Lcom/tkay/splashad/a/c$1$1;->c:Lcom/tkay/splashad/a/c$1;

    iget-object v2, v2, Lcom/tkay/splashad/a/c$1;->g:Landroid/view/ViewGroup;

    invoke-virtual {v1, v2}, Lcom/tkay/splashad/api/TYSplashSkipInfo;->setContainer(Landroid/view/ViewGroup;)V

    .line 208
    iget-object v1, p0, Lcom/tkay/splashad/a/c$1$1;->a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    iget-object v2, p0, Lcom/tkay/splashad/a/c$1$1;->c:Lcom/tkay/splashad/a/c$1;

    iget-object v2, v2, Lcom/tkay/splashad/a/c$1;->f:Lcom/tkay/splashad/api/TYSplashSkipInfo;

    invoke-virtual {v1, v2}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->setSplashSkipInfo(Lcom/tkay/splashad/api/TYSplashSkipInfo;)V

    .line 211
    :cond_2
    new-instance v9, Lcom/tkay/splashad/a/f;

    iget-object v1, p0, Lcom/tkay/splashad/a/c$1$1;->a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    iget-object v2, p0, Lcom/tkay/splashad/a/c$1$1;->c:Lcom/tkay/splashad/a/c$1;

    iget-object v2, v2, Lcom/tkay/splashad/a/c$1;->h:Lcom/tkay/splashad/a/a;

    invoke-direct {v9, v1, v2}, Lcom/tkay/splashad/a/f;-><init>(Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;Lcom/tkay/splashad/a/a;)V

    .line 212
    iget-object v1, p0, Lcom/tkay/splashad/a/c$1$1;->a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    invoke-virtual {v1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->getMixedFormatAdType()I

    move-result v1

    if-nez v1, :cond_3

    .line 214
    iget-object v1, p0, Lcom/tkay/splashad/a/c$1$1;->c:Lcom/tkay/splashad/a/c$1;

    iget-object v1, v1, Lcom/tkay/splashad/a/c$1;->i:Lcom/tkay/splashad/a/c;

    iget-object v2, p0, Lcom/tkay/splashad/a/c$1$1;->c:Lcom/tkay/splashad/a/c$1;

    iget-object v2, v2, Lcom/tkay/splashad/a/c$1;->b:Landroid/app/Activity;

    iget-object v3, p0, Lcom/tkay/splashad/a/c$1$1;->c:Lcom/tkay/splashad/a/c$1;

    iget-object v3, v3, Lcom/tkay/splashad/a/c$1;->g:Landroid/view/ViewGroup;

    iget-object v4, p0, Lcom/tkay/splashad/a/c$1$1;->c:Lcom/tkay/splashad/a/c$1;

    iget-object v4, v4, Lcom/tkay/splashad/a/c$1;->a:Lcom/tkay/core/common/f/a;

    invoke-virtual {v4}, Lcom/tkay/core/common/f/a;->f()Lcom/tkay/core/api/BaseAd;

    move-result-object v6

    iget-object v7, p0, Lcom/tkay/splashad/a/c$1$1;->b:Lcom/tkay/core/common/f/d;

    move-object v4, v9

    move v5, v0

    invoke-static/range {v1 .. v7}, Lcom/tkay/splashad/a/c;->a(Lcom/tkay/splashad/a/c;Landroid/app/Activity;Landroid/view/ViewGroup;Lcom/tkay/splashad/a/f;ZLcom/tkay/core/api/BaseAd;Lcom/tkay/core/common/f/d;)V

    goto :goto_1

    .line 216
    :cond_3
    iget-object v1, p0, Lcom/tkay/splashad/a/c$1$1;->a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    iget-object v2, p0, Lcom/tkay/splashad/a/c$1$1;->c:Lcom/tkay/splashad/a/c$1;

    iget-object v2, v2, Lcom/tkay/splashad/a/c$1;->b:Landroid/app/Activity;

    iget-object v3, p0, Lcom/tkay/splashad/a/c$1$1;->c:Lcom/tkay/splashad/a/c$1;

    iget-object v3, v3, Lcom/tkay/splashad/a/c$1;->g:Landroid/view/ViewGroup;

    invoke-virtual {v1, v2, v3, v9}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->internalShow(Landroid/app/Activity;Landroid/view/ViewGroup;Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;)V

    :goto_1
    if-eqz v0, :cond_6

    .line 222
    iget-object v0, p0, Lcom/tkay/splashad/a/c$1$1;->c:Lcom/tkay/splashad/a/c$1;

    iget-object v0, v0, Lcom/tkay/splashad/a/c$1;->f:Lcom/tkay/splashad/api/TYSplashSkipInfo;

    invoke-virtual {v0}, Lcom/tkay/splashad/api/TYSplashSkipInfo;->getTYSplashSkipAdListener()Lcom/tkay/splashad/api/TYSplashSkipAdListener;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 224
    invoke-interface {v0, v8}, Lcom/tkay/splashad/api/TYSplashSkipAdListener;->isSupportCustomSkipView(Z)V

    :cond_4
    if-eqz v8, :cond_5

    .line 229
    iget-object v0, p0, Lcom/tkay/splashad/a/c$1$1;->c:Lcom/tkay/splashad/a/c$1;

    iget-object v0, v0, Lcom/tkay/splashad/a/c$1;->f:Lcom/tkay/splashad/api/TYSplashSkipInfo;

    invoke-virtual {v0}, Lcom/tkay/splashad/api/TYSplashSkipInfo;->getSkipView()Landroid/view/View;

    move-result-object v0

    .line 230
    new-instance v1, Lcom/tkay/splashad/a/c$1$1$1;

    invoke-direct {v1, p0, v9}, Lcom/tkay/splashad/a/c$1$1$1;-><init>(Lcom/tkay/splashad/a/c$1$1;Lcom/tkay/splashad/a/f;)V

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_5
    return-void

    .line 241
    :cond_6
    iget-object v0, p0, Lcom/tkay/splashad/a/c$1$1;->c:Lcom/tkay/splashad/a/c$1;

    iget-object v0, v0, Lcom/tkay/splashad/a/c$1;->f:Lcom/tkay/splashad/api/TYSplashSkipInfo;

    if-eqz v0, :cond_7

    const-string v0, "tkay"

    const-string v1, "This AdSource does\'t support \'Custom SkipView\' or \'SkipView\' is null."

    .line 242
    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_7
    return-void
.end method
