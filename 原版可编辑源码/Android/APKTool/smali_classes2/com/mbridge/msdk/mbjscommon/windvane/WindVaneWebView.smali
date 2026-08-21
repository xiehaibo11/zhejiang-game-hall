.class public Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;
.super Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;
.source "WindVaneWebView.java"


# instance fields
.field protected b:Lcom/mbridge/msdk/mbjscommon/windvane/l;

.field protected c:Lcom/mbridge/msdk/mbjscommon/windvane/b;

.field protected d:Lcom/mbridge/msdk/mbjscommon/windvane/g;

.field private e:Ljava/lang/Object;

.field private f:Ljava/lang/Object;

.field private g:Ljava/lang/String;

.field private h:Lcom/mbridge/msdk/mbjscommon/windvane/d;

.field private i:Ljava/lang/String;

.field private j:Z

.field private k:F

.field private l:F


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 33
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x0

    .line 28
    iput-boolean p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->j:Z

    const/4 p1, 0x0

    .line 29
    iput p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->k:F

    .line 30
    iput p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->l:F

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 37
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p1, 0x0

    .line 28
    iput-boolean p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->j:Z

    const/4 p1, 0x0

    .line 29
    iput p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->k:F

    .line 30
    iput p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->l:F

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 41
    invoke-direct {p0, p1, p2, p3}, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const/4 p1, 0x0

    .line 28
    iput-boolean p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->j:Z

    const/4 p1, 0x0

    .line 29
    iput p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->k:F

    .line 30
    iput p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->l:F

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;Z)Z
    .locals 0

    .line 19
    iput-boolean p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->j:Z

    return p1
.end method


# virtual methods
.method protected final a()V
    .locals 3

    .line 87
    invoke-super {p0}, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;->a()V

    .line 88
    invoke-virtual {p0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setSavePassword(Z)V

    .line 90
    invoke-virtual {p0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v2

    invoke-virtual {v2}, Landroid/webkit/WebSettings;->getUserAgentString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " WindVane/3.0.2"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setUserAgentString(Ljava/lang/String;)V

    .line 92
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->b:Lcom/mbridge/msdk/mbjscommon/windvane/l;

    if-nez v0, :cond_0

    .line 93
    new-instance v0, Lcom/mbridge/msdk/mbjscommon/windvane/l;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/mbjscommon/windvane/l;-><init>(Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;)V

    iput-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->b:Lcom/mbridge/msdk/mbjscommon/windvane/l;

    .line 95
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->b:Lcom/mbridge/msdk/mbjscommon/windvane/l;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setWebViewChromeClient(Lcom/mbridge/msdk/mbjscommon/windvane/l;)V

    .line 97
    new-instance v0, Lcom/mbridge/msdk/mbjscommon/windvane/m;

    invoke-direct {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/m;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->mWebViewClient:Lcom/mbridge/msdk/mbjscommon/base/b;

    .line 98
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->mWebViewClient:Lcom/mbridge/msdk/mbjscommon/base/b;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    .line 100
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->c:Lcom/mbridge/msdk/mbjscommon/windvane/b;

    if-nez v0, :cond_1

    .line 101
    new-instance v0, Lcom/mbridge/msdk/mbjscommon/windvane/i;

    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->a:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/i;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->c:Lcom/mbridge/msdk/mbjscommon/windvane/b;

    .line 102
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setJsBridge(Lcom/mbridge/msdk/mbjscommon/windvane/b;)V

    .line 105
    :cond_1
    new-instance v0, Lcom/mbridge/msdk/mbjscommon/windvane/g;

    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->a:Landroid/content/Context;

    invoke-direct {v0, v1, p0}, Lcom/mbridge/msdk/mbjscommon/windvane/g;-><init>(Landroid/content/Context;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;)V

    iput-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->d:Lcom/mbridge/msdk/mbjscommon/windvane/g;

    return-void
.end method

.method public clearWebView()V
    .locals 1

    .line 192
    iget-boolean v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->j:Z

    if-nez v0, :cond_0

    const-string v0, "about:blank"

    .line 193
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->loadUrl(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public getCampaignId()Ljava/lang/String;
    .locals 1

    .line 202
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->g:Ljava/lang/String;

    return-object v0
.end method

.method public getJsBridge()Lcom/mbridge/msdk/mbjscommon/windvane/b;
    .locals 1

    .line 50
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->c:Lcom/mbridge/msdk/mbjscommon/windvane/b;

    return-object v0
.end method

.method public getJsObject(Ljava/lang/String;)Ljava/lang/Object;
    .locals 1

    .line 69
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->d:Lcom/mbridge/msdk/mbjscommon/windvane/g;

    if-nez v0, :cond_0

    const/4 p1, 0x0

    return-object p1

    .line 72
    :cond_0
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/g;->a(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    return-object p1
.end method

.method public getMraidObject()Ljava/lang/Object;
    .locals 1

    .line 144
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->f:Ljava/lang/Object;

    return-object v0
.end method

.method public getObject()Ljava/lang/Object;
    .locals 1

    .line 136
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->e:Ljava/lang/Object;

    return-object v0
.end method

.method public getRid()Ljava/lang/String;
    .locals 1

    .line 59
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->i:Ljava/lang/String;

    return-object v0
.end method

.method public getWebViewListener()Lcom/mbridge/msdk/mbjscommon/windvane/d;
    .locals 1

    .line 158
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->h:Lcom/mbridge/msdk/mbjscommon/windvane/d;

    return-object v0
.end method

.method public isDestoryed()Z
    .locals 1

    .line 162
    iget-boolean v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->j:Z

    return v0
.end method

.method public onTouchEvent(Landroid/view/MotionEvent;)Z
    .locals 7

    .line 212
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->mWebViewClient:Lcom/mbridge/msdk/mbjscommon/base/b;

    if-eqz v0, :cond_5

    .line 213
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->mWebViewClient:Lcom/mbridge/msdk/mbjscommon/base/b;

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/base/b;->b()Lcom/mbridge/msdk/mbjscommon/base/a;

    move-result-object v0

    .line 214
    instance-of v0, v0, Lcom/mbridge/msdk/mbjscommon/base/c;

    if-eqz v0, :cond_5

    .line 215
    invoke-virtual {p0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getUrl()Ljava/lang/String;

    move-result-object v0

    .line 216
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_5

    const-string v1, "https://play.google.com"

    .line 217
    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_5

    .line 219
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getAction()I

    move-result v0

    if-nez v0, :cond_0

    .line 220
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawX()F

    move-result v0

    iput v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->k:F

    .line 221
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawY()F

    move-result v0

    iput v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->l:F

    goto :goto_0

    .line 223
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    const/high16 v1, 0x41700000    # 15.0f

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v0

    .line 224
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawX()F

    move-result v1

    iget v2, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->k:F

    sub-float/2addr v1, v2

    .line 225
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getY()F

    move-result v2

    iget v3, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->l:F

    sub-float/2addr v2, v3

    const/4 v3, 0x0

    cmpg-float v4, v1, v3

    const/high16 v5, -0x40800000    # -1.0f

    if-gez v4, :cond_1

    mul-float v4, v1, v5

    int-to-float v6, v0

    cmpl-float v4, v4, v6

    if-gtz v4, :cond_5

    :cond_1
    cmpl-float v4, v1, v3

    if-lez v4, :cond_2

    int-to-float v4, v0

    cmpl-float v1, v1, v4

    if-gtz v1, :cond_5

    :cond_2
    cmpg-float v1, v2, v3

    if-gez v1, :cond_3

    mul-float/2addr v5, v2

    int-to-float v1, v0

    cmpl-float v1, v5, v1

    if-gtz v1, :cond_5

    :cond_3
    cmpl-float v1, v2, v3

    if-lez v1, :cond_4

    int-to-float v0, v0

    cmpl-float v0, v2, v0

    if-gtz v0, :cond_5

    :cond_4
    const/4 p1, 0x0

    .line 227
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setClickable(Z)V

    const/4 p1, 0x1

    return p1

    .line 240
    :cond_5
    :goto_0
    invoke-super {p0, p1}, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;->onTouchEvent(Landroid/view/MotionEvent;)Z

    move-result p1

    return p1
.end method

.method public registerWindVanePlugin(Ljava/lang/Class;)V
    .locals 1

    .line 76
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->d:Lcom/mbridge/msdk/mbjscommon/windvane/g;

    if-nez v0, :cond_0

    return-void

    .line 79
    :cond_0
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/g;->a(Ljava/lang/Class;)V

    return-void
.end method

.method public release()V
    .locals 5

    const/16 v0, 0x8

    .line 167
    :try_start_0
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setVisibility(I)V

    .line 168
    invoke-virtual {p0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->removeAllViews()V

    const/4 v0, 0x0

    .line 169
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setDownloadListener(Landroid/webkit/DownloadListener;)V

    .line 170
    iput-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->e:Ljava/lang/Object;

    .line 172
    invoke-virtual {p0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/ae;->m(Landroid/content/Context;)I

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    .line 174
    iput-boolean v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->j:Z

    .line 175
    invoke-virtual {p0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->destroy()V

    goto :goto_0

    .line 177
    :cond_0
    new-instance v1, Landroid/os/Handler;

    invoke-direct {v1}, Landroid/os/Handler;-><init>()V

    new-instance v2, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView$1;

    invoke-direct {v2, p0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView$1;-><init>(Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;)V

    mul-int/lit16 v0, v0, 0x3e8

    int-to-long v3, v0

    invoke-virtual {v1, v2, v3, v4}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 187
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public setApiManagerContext(Landroid/content/Context;)V
    .locals 1

    .line 110
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->d:Lcom/mbridge/msdk/mbjscommon/windvane/g;

    if-eqz v0, :cond_0

    .line 111
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/g;->a(Landroid/content/Context;)V

    :cond_0
    return-void
.end method

.method public setApiManagerJSFactory(Ljava/lang/Object;)V
    .locals 1

    .line 116
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->d:Lcom/mbridge/msdk/mbjscommon/windvane/g;

    if-eqz v0, :cond_0

    .line 117
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/g;->a(Ljava/lang/Object;)V

    :cond_0
    return-void
.end method

.method public setCampaignId(Ljava/lang/String;)V
    .locals 0

    .line 206
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->g:Ljava/lang/String;

    return-void
.end method

.method public setJsBridge(Lcom/mbridge/msdk/mbjscommon/windvane/b;)V
    .locals 0

    .line 45
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->c:Lcom/mbridge/msdk/mbjscommon/windvane/b;

    .line 46
    invoke-interface {p1, p0}, Lcom/mbridge/msdk/mbjscommon/windvane/b;->a(Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;)V

    return-void
.end method

.method public setMraidObject(Ljava/lang/Object;)V
    .locals 0

    .line 140
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->f:Ljava/lang/Object;

    return-void
.end method

.method public setObject(Ljava/lang/Object;)V
    .locals 0

    .line 132
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->e:Ljava/lang/Object;

    return-void
.end method

.method public setRid(Ljava/lang/String;)V
    .locals 0

    .line 55
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->i:Ljava/lang/String;

    return-void
.end method

.method public setWebViewChromeClient(Lcom/mbridge/msdk/mbjscommon/windvane/l;)V
    .locals 0

    .line 127
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->b:Lcom/mbridge/msdk/mbjscommon/windvane/l;

    .line 128
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setWebChromeClient(Landroid/webkit/WebChromeClient;)V

    return-void
.end method

.method public setWebViewListener(Lcom/mbridge/msdk/mbjscommon/windvane/d;)V
    .locals 1

    .line 148
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->h:Lcom/mbridge/msdk/mbjscommon/windvane/d;

    .line 149
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->b:Lcom/mbridge/msdk/mbjscommon/windvane/l;

    if-eqz v0, :cond_0

    .line 150
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/l;->a(Lcom/mbridge/msdk/mbjscommon/windvane/d;)V

    .line 152
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->mWebViewClient:Lcom/mbridge/msdk/mbjscommon/base/b;

    if-eqz v0, :cond_1

    .line 153
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->mWebViewClient:Lcom/mbridge/msdk/mbjscommon/base/b;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/mbjscommon/base/b;->a(Lcom/mbridge/msdk/mbjscommon/windvane/d;)V

    :cond_1
    return-void
.end method

.method public setWebViewTransparent()V
    .locals 0

    .line 198
    invoke-super {p0}, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;->setTransparent()V

    return-void
.end method
