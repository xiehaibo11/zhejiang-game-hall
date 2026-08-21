.class public Lcom/tkay/expressad/out/TemplateBannerView;
.super Landroid/widget/RelativeLayout;

# interfaces
.implements Lcom/tkay/core/common/a/g;


# instance fields
.field private a:Lcom/tkay/expressad/mbbanner/b/a;

.field private b:Lcom/tkay/expressad/out/b;

.field private c:Z

.field private d:Z

.field private e:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    .line 35
    invoke-direct {p0, p1, v0}, Lcom/tkay/expressad/out/TemplateBannerView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 v0, 0x0

    .line 39
    invoke-direct {p0, p1, p2, v0}, Lcom/tkay/expressad/out/TemplateBannerView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 43
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const/4 p2, 0x0

    .line 29
    iput-boolean p2, p0, Lcom/tkay/expressad/out/TemplateBannerView;->c:Z

    .line 31
    iput-boolean p2, p0, Lcom/tkay/expressad/out/TemplateBannerView;->d:Z

    .line 44
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/foundation/b/b;->b(Landroid/content/Context;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/out/TemplateBannerView;)Lcom/tkay/expressad/mbbanner/b/a;
    .locals 0

    .line 25
    iget-object p0, p0, Lcom/tkay/expressad/out/TemplateBannerView;->a:Lcom/tkay/expressad/mbbanner/b/a;

    return-object p0
.end method

.method private a()V
    .locals 3

    .line 196
    new-instance v0, Lcom/tkay/expressad/out/TemplateBannerView$1;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/out/TemplateBannerView$1;-><init>(Lcom/tkay/expressad/out/TemplateBannerView;)V

    const-wide/16 v1, 0xc8

    invoke-virtual {p0, v0, v1, v2}, Lcom/tkay/expressad/out/TemplateBannerView;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method private a(Z)V
    .locals 1

    .line 158
    iput-boolean p1, p0, Lcom/tkay/expressad/out/TemplateBannerView;->c:Z

    .line 159
    iget-object v0, p0, Lcom/tkay/expressad/out/TemplateBannerView;->a:Lcom/tkay/expressad/mbbanner/b/a;

    if-eqz v0, :cond_0

    .line 160
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/mbbanner/b/a;->b(Z)V

    :cond_0
    return-void
.end method


# virtual methods
.method public getRequestId()Ljava/lang/String;
    .locals 1

    .line 100
    iget-object v0, p0, Lcom/tkay/expressad/out/TemplateBannerView;->a:Lcom/tkay/expressad/mbbanner/b/a;

    if-eqz v0, :cond_0

    .line 101
    invoke-virtual {v0}, Lcom/tkay/expressad/mbbanner/b/a;->a()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public init(Lcom/tkay/expressad/out/c;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 52
    new-instance v0, Lcom/tkay/expressad/mbbanner/b/a;

    invoke-direct {v0, p0, p1, p2, p3}, Lcom/tkay/expressad/mbbanner/b/a;-><init>(Lcom/tkay/expressad/out/TemplateBannerView;Lcom/tkay/expressad/out/c;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/tkay/expressad/out/TemplateBannerView;->a:Lcom/tkay/expressad/mbbanner/b/a;

    .line 53
    iget-boolean p1, p0, Lcom/tkay/expressad/out/TemplateBannerView;->d:Z

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/mbbanner/b/a;->c(Z)V

    .line 54
    iget-object p1, p0, Lcom/tkay/expressad/out/TemplateBannerView;->a:Lcom/tkay/expressad/mbbanner/b/a;

    iget-boolean p2, p0, Lcom/tkay/expressad/out/TemplateBannerView;->c:Z

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/mbbanner/b/a;->b(Z)V

    return-void
.end method

.method public isReady()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public load(Lcom/tkay/expressad/foundation/d/d;)V
    .locals 2

    .line 85
    iget-object v0, p0, Lcom/tkay/expressad/out/TemplateBannerView;->a:Lcom/tkay/expressad/mbbanner/b/a;

    if-eqz v0, :cond_0

    .line 86
    iget-boolean v1, p0, Lcom/tkay/expressad/out/TemplateBannerView;->c:Z

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/mbbanner/b/a;->b(Z)V

    .line 87
    iget-object v0, p0, Lcom/tkay/expressad/out/TemplateBannerView;->a:Lcom/tkay/expressad/mbbanner/b/a;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/mbbanner/b/a;->a(Lcom/tkay/expressad/foundation/d/d;)V

    return-void

    .line 89
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/out/TemplateBannerView;->b:Lcom/tkay/expressad/out/b;

    if-eqz p1, :cond_1

    const-string v0, "banner controler init error\uff0cplease check it"

    .line 90
    invoke-interface {p1, v0}, Lcom/tkay/expressad/out/b;->a(Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method protected onAttachedToWindow()V
    .locals 1

    .line 146
    invoke-super {p0}, Landroid/widget/RelativeLayout;->onAttachedToWindow()V

    const/4 v0, 0x1

    .line 147
    invoke-direct {p0, v0}, Lcom/tkay/expressad/out/TemplateBannerView;->a(Z)V

    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 1

    .line 152
    invoke-super {p0}, Landroid/widget/RelativeLayout;->onDetachedFromWindow()V

    const/4 v0, 0x0

    .line 153
    invoke-direct {p0, v0}, Lcom/tkay/expressad/out/TemplateBannerView;->a(Z)V

    return-void
.end method

.method public onPause()V
    .locals 1

    .line 215
    iget-object v0, p0, Lcom/tkay/expressad/out/TemplateBannerView;->a:Lcom/tkay/expressad/mbbanner/b/a;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/out/TemplateBannerView;->e:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 216
    iget-object v0, p0, Lcom/tkay/expressad/out/TemplateBannerView;->a:Lcom/tkay/expressad/mbbanner/b/a;

    invoke-virtual {v0}, Lcom/tkay/expressad/mbbanner/b/a;->c()V

    :cond_0
    return-void
.end method

.method public onResume()V
    .locals 1

    .line 221
    iget-object v0, p0, Lcom/tkay/expressad/out/TemplateBannerView;->a:Lcom/tkay/expressad/mbbanner/b/a;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/out/TemplateBannerView;->e:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    sget-boolean v0, Lcom/tkay/expressad/foundation/f/b;->c:Z

    if-nez v0, :cond_0

    .line 222
    iget-object v0, p0, Lcom/tkay/expressad/out/TemplateBannerView;->a:Lcom/tkay/expressad/mbbanner/b/a;

    invoke-virtual {v0}, Lcom/tkay/expressad/mbbanner/b/a;->d()V

    :cond_0
    return-void
.end method

.method protected onSizeChanged(IIII)V
    .locals 1

    .line 208
    invoke-super {p0, p1, p2, p3, p4}, Landroid/widget/RelativeLayout;->onSizeChanged(IIII)V

    .line 209
    iget-object v0, p0, Lcom/tkay/expressad/out/TemplateBannerView;->a:Lcom/tkay/expressad/mbbanner/b/a;

    if-eqz v0, :cond_0

    .line 210
    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/tkay/expressad/mbbanner/b/a;->a(IIII)V

    :cond_0
    return-void
.end method

.method protected onVisibilityChanged(Landroid/view/View;I)V
    .locals 1

    .line 183
    invoke-super {p0, p1, p2}, Landroid/widget/RelativeLayout;->onVisibilityChanged(Landroid/view/View;I)V

    const/4 p1, 0x0

    if-nez p2, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    move v0, p1

    .line 184
    :goto_0
    iput-boolean v0, p0, Lcom/tkay/expressad/out/TemplateBannerView;->d:Z

    .line 185
    iget-object v0, p0, Lcom/tkay/expressad/out/TemplateBannerView;->a:Lcom/tkay/expressad/mbbanner/b/a;

    if-eqz v0, :cond_2

    if-nez p2, :cond_1

    .line 187
    invoke-direct {p0}, Lcom/tkay/expressad/out/TemplateBannerView;->a()V

    return-void

    .line 189
    :cond_1
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/mbbanner/b/a;->c(Z)V

    :cond_2
    return-void
.end method

.method protected onWindowVisibilityChanged(I)V
    .locals 2

    .line 166
    invoke-super {p0, p1}, Landroid/widget/RelativeLayout;->onWindowVisibilityChanged(I)V

    const/4 v0, 0x0

    if-nez p1, :cond_0

    const/4 v1, 0x1

    goto :goto_0

    :cond_0
    move v1, v0

    .line 167
    :goto_0
    iput-boolean v1, p0, Lcom/tkay/expressad/out/TemplateBannerView;->d:Z

    .line 168
    iget-object v1, p0, Lcom/tkay/expressad/out/TemplateBannerView;->a:Lcom/tkay/expressad/mbbanner/b/a;

    if-eqz v1, :cond_3

    if-nez p1, :cond_1

    .line 171
    invoke-direct {p0}, Lcom/tkay/expressad/out/TemplateBannerView;->a()V

    return-void

    .line 173
    :cond_1
    sget-boolean p1, Lcom/tkay/expressad/foundation/f/b;->c:Z

    if-eqz p1, :cond_2

    return-void

    .line 176
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/out/TemplateBannerView;->a:Lcom/tkay/expressad/mbbanner/b/a;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/mbbanner/b/a;->c(Z)V

    :cond_3
    return-void
.end method

.method public release()V
    .locals 2

    .line 134
    iget-object v0, p0, Lcom/tkay/expressad/out/TemplateBannerView;->b:Lcom/tkay/expressad/out/b;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 135
    iput-object v1, p0, Lcom/tkay/expressad/out/TemplateBannerView;->b:Lcom/tkay/expressad/out/b;

    .line 137
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/out/TemplateBannerView;->a:Lcom/tkay/expressad/mbbanner/b/a;

    if-eqz v0, :cond_1

    .line 138
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/mbbanner/b/a;->a(Lcom/tkay/expressad/out/b;)V

    .line 139
    iget-object v0, p0, Lcom/tkay/expressad/out/TemplateBannerView;->a:Lcom/tkay/expressad/mbbanner/b/a;

    invoke-virtual {v0}, Lcom/tkay/expressad/mbbanner/b/a;->b()V

    .line 141
    :cond_1
    invoke-virtual {p0}, Lcom/tkay/expressad/out/TemplateBannerView;->removeAllViews()V

    return-void
.end method

.method public setAllowShowCloseBtn(Z)V
    .locals 1

    .line 79
    iget-object v0, p0, Lcom/tkay/expressad/out/TemplateBannerView;->a:Lcom/tkay/expressad/mbbanner/b/a;

    if-eqz v0, :cond_0

    .line 80
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/mbbanner/b/a;->a(Z)V

    :cond_0
    return-void
.end method

.method public setBannerAdListener(Lcom/tkay/expressad/out/b;)V
    .locals 1

    .line 127
    iput-object p1, p0, Lcom/tkay/expressad/out/TemplateBannerView;->b:Lcom/tkay/expressad/out/b;

    .line 128
    iget-object v0, p0, Lcom/tkay/expressad/out/TemplateBannerView;->a:Lcom/tkay/expressad/mbbanner/b/a;

    if-eqz v0, :cond_0

    .line 129
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/mbbanner/b/a;->a(Lcom/tkay/expressad/out/b;)V

    :cond_0
    return-void
.end method

.method public updateBannerSize(Lcom/tkay/expressad/out/c;)V
    .locals 1

    .line 58
    iget-object v0, p0, Lcom/tkay/expressad/out/TemplateBannerView;->a:Lcom/tkay/expressad/mbbanner/b/a;

    if-eqz v0, :cond_0

    .line 59
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/mbbanner/b/a;->a(Lcom/tkay/expressad/out/c;)V

    :cond_0
    return-void
.end method
