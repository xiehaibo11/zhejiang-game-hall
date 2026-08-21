.class public abstract Lcom/tkay/basead/ui/BaseSplashATView;
.super Lcom/tkay/basead/ui/BaseATView;


# instance fields
.field protected A:Landroid/widget/TextView;

.field protected B:Lcom/tkay/basead/ui/CloseFrameLayout;

.field protected C:Ljava/lang/String;

.field protected D:Ljava/util/Timer;

.field protected E:Z

.field protected F:Lcom/tkay/basead/e/a;

.field protected G:Lcom/tkay/basead/ui/b;

.field final H:J

.field protected I:Lcom/tkay/basead/ui/BaseShakeView;

.field J:Lcom/tkay/basead/ui/GuideToClickView;

.field protected final K:Landroid/view/View$OnClickListener;

.field L:Z

.field M:Z

.field N:Z

.field O:Z

.field private a:Lcom/tkay/core/common/l/a/f$b;

.field private t:J


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    .line 59
    invoke-direct {p0, p1}, Lcom/tkay/basead/ui/BaseATView;-><init>(Landroid/content/Context;)V

    const-string p1, "Skip"

    .line 36
    iput-object p1, p0, Lcom/tkay/basead/ui/BaseSplashATView;->C:Ljava/lang/String;

    const-wide/16 v0, 0x3e8

    .line 45
    iput-wide v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->H:J

    const-wide/16 v0, 0x1388

    .line 46
    iput-wide v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->t:J

    .line 51
    new-instance p1, Lcom/tkay/basead/ui/BaseSplashATView$1;

    invoke-direct {p1, p0}, Lcom/tkay/basead/ui/BaseSplashATView$1;-><init>(Lcom/tkay/basead/ui/BaseSplashATView;)V

    iput-object p1, p0, Lcom/tkay/basead/ui/BaseSplashATView;->K:Landroid/view/View$OnClickListener;

    const/4 p1, 0x0

    .line 108
    iput-boolean p1, p0, Lcom/tkay/basead/ui/BaseSplashATView;->L:Z

    .line 129
    iput-boolean p1, p0, Lcom/tkay/basead/ui/BaseSplashATView;->M:Z

    .line 130
    iput-boolean p1, p0, Lcom/tkay/basead/ui/BaseSplashATView;->N:Z

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Lcom/tkay/basead/e/a;)V
    .locals 1

    .line 63
    invoke-direct {p0, p1, p2, p3}, Lcom/tkay/basead/ui/BaseATView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;)V

    const-string p1, "Skip"

    .line 36
    iput-object p1, p0, Lcom/tkay/basead/ui/BaseSplashATView;->C:Ljava/lang/String;

    const-wide/16 p1, 0x3e8

    .line 45
    iput-wide p1, p0, Lcom/tkay/basead/ui/BaseSplashATView;->H:J

    const-wide/16 p1, 0x1388

    .line 46
    iput-wide p1, p0, Lcom/tkay/basead/ui/BaseSplashATView;->t:J

    .line 51
    new-instance p1, Lcom/tkay/basead/ui/BaseSplashATView$1;

    invoke-direct {p1, p0}, Lcom/tkay/basead/ui/BaseSplashATView$1;-><init>(Lcom/tkay/basead/ui/BaseSplashATView;)V

    iput-object p1, p0, Lcom/tkay/basead/ui/BaseSplashATView;->K:Landroid/view/View$OnClickListener;

    const/4 p1, 0x0

    .line 108
    iput-boolean p1, p0, Lcom/tkay/basead/ui/BaseSplashATView;->L:Z

    .line 129
    iput-boolean p1, p0, Lcom/tkay/basead/ui/BaseSplashATView;->M:Z

    .line 130
    iput-boolean p1, p0, Lcom/tkay/basead/ui/BaseSplashATView;->N:Z

    .line 65
    new-instance p2, Lcom/tkay/core/common/l/a/f$b;

    invoke-direct {p2}, Lcom/tkay/core/common/l/a/f$b;-><init>()V

    iput-object p2, p0, Lcom/tkay/basead/ui/BaseSplashATView;->a:Lcom/tkay/core/common/l/a/f$b;

    .line 67
    iput-object p4, p0, Lcom/tkay/basead/ui/BaseSplashATView;->F:Lcom/tkay/basead/e/a;

    .line 69
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseSplashATView;->getResources()Landroid/content/res/Resources;

    move-result-object p2

    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseSplashATView;->getContext()Landroid/content/Context;

    move-result-object p3

    const-string p4, "myoffer_splash_skip_text"

    const-string v0, "string"

    invoke-static {p3, p4, v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p3

    invoke-virtual {p2, p3}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/tkay/basead/ui/BaseSplashATView;->C:Ljava/lang/String;

    .line 70
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseSplashATView;->getContext()Landroid/content/Context;

    move-result-object p2

    const-string p3, "id"

    const-string p4, "myoffer_splash_skip"

    invoke-static {p2, p4, p3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p2

    invoke-virtual {p0, p2}, Lcom/tkay/basead/ui/BaseSplashATView;->findViewById(I)Landroid/view/View;

    move-result-object p2

    check-cast p2, Landroid/widget/TextView;

    iput-object p2, p0, Lcom/tkay/basead/ui/BaseSplashATView;->A:Landroid/widget/TextView;

    .line 71
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseSplashATView;->getContext()Landroid/content/Context;

    move-result-object p2

    const-string p4, "myoffer_splash_skip_area"

    invoke-static {p2, p4, p3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p2

    invoke-virtual {p0, p2}, Lcom/tkay/basead/ui/BaseSplashATView;->findViewById(I)Landroid/view/View;

    move-result-object p2

    check-cast p2, Lcom/tkay/basead/ui/CloseFrameLayout;

    iput-object p2, p0, Lcom/tkay/basead/ui/BaseSplashATView;->B:Lcom/tkay/basead/ui/CloseFrameLayout;

    .line 73
    iget-object p2, p0, Lcom/tkay/basead/ui/BaseSplashATView;->c:Lcom/tkay/core/common/f/i;

    iget-object p2, p2, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {p2}, Lcom/tkay/core/common/f/j;->n()J

    move-result-wide p2

    iput-wide p2, p0, Lcom/tkay/basead/ui/BaseSplashATView;->t:J

    .line 75
    iget-object p2, p0, Lcom/tkay/basead/ui/BaseSplashATView;->B:Lcom/tkay/basead/ui/CloseFrameLayout;

    iget-object p3, p0, Lcom/tkay/basead/ui/BaseSplashATView;->c:Lcom/tkay/core/common/f/i;

    iget-object p3, p3, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {p3}, Lcom/tkay/core/common/f/j;->h()I

    move-result p3

    invoke-virtual {p0, p2, p3}, Lcom/tkay/basead/ui/BaseSplashATView;->a(Lcom/tkay/basead/ui/a;I)F

    .line 77
    iput-boolean p1, p0, Lcom/tkay/basead/ui/BaseSplashATView;->E:Z

    return-void
.end method

.method private a(J)V
    .locals 4

    .line 195
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->p()I

    move-result v0

    const-wide/16 v1, 0x3e8

    if-nez v0, :cond_0

    .line 196
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->A:Landroid/widget/TextView;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    div-long/2addr p1, v1

    invoke-virtual {v3, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string p1, "s | "

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p0, Lcom/tkay/basead/ui/BaseSplashATView;->C:Ljava/lang/String;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void

    .line 198
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->A:Landroid/widget/TextView;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    div-long/2addr p1, v1

    invoke-virtual {v3, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string p1, " s"

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/ui/BaseSplashATView;)V
    .locals 1

    const/4 v0, 0x1

    .line 32
    invoke-super {p0, v0}, Lcom/tkay/basead/ui/BaseATView;->b(I)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/ui/BaseSplashATView;J)V
    .locals 0

    .line 32
    invoke-direct {p0, p1, p2}, Lcom/tkay/basead/ui/BaseSplashATView;->a(J)V

    return-void
.end method

.method static synthetic b(Lcom/tkay/basead/ui/BaseSplashATView;J)J
    .locals 0

    .line 32
    iput-wide p1, p0, Lcom/tkay/basead/ui/BaseSplashATView;->t:J

    return-wide p1
.end method

.method private b()V
    .locals 9

    .line 145
    iget-boolean v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->M:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 148
    iput-boolean v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->M:Z

    .line 152
    iget-boolean v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->O:Z

    if-eqz v0, :cond_1

    return-void

    .line 2160
    :cond_1
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->B:Lcom/tkay/basead/ui/CloseFrameLayout;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/CloseFrameLayout;->setVisibility(I)V

    .line 2161
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->B:Lcom/tkay/basead/ui/CloseFrameLayout;

    new-instance v2, Lcom/tkay/basead/ui/BaseSplashATView$2;

    invoke-direct {v2, p0}, Lcom/tkay/basead/ui/BaseSplashATView$2;-><init>(Lcom/tkay/basead/ui/BaseSplashATView;)V

    invoke-virtual {v0, v2}, Lcom/tkay/basead/ui/CloseFrameLayout;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 2171
    iput-boolean v1, p0, Lcom/tkay/basead/ui/BaseSplashATView;->N:Z

    .line 2173
    new-instance v3, Ljava/util/Timer;

    invoke-direct {v3}, Ljava/util/Timer;-><init>()V

    iput-object v3, p0, Lcom/tkay/basead/ui/BaseSplashATView;->D:Ljava/util/Timer;

    .line 2174
    new-instance v4, Lcom/tkay/basead/ui/BaseSplashATView$3;

    invoke-direct {v4, p0}, Lcom/tkay/basead/ui/BaseSplashATView$3;-><init>(Lcom/tkay/basead/ui/BaseSplashATView;)V

    const-wide/16 v5, 0x3e8

    const-wide/16 v7, 0x3e8

    invoke-virtual/range {v3 .. v8}, Ljava/util/Timer;->schedule(Ljava/util/TimerTask;JJ)V

    .line 2190
    iget-wide v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->t:J

    invoke-direct {p0, v0, v1}, Lcom/tkay/basead/ui/BaseSplashATView;->a(J)V

    .line 2191
    iget-wide v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->t:J

    const-wide/16 v2, 0x3e8

    sub-long/2addr v0, v2

    iput-wide v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->t:J

    return-void
.end method

.method static synthetic b(Lcom/tkay/basead/ui/BaseSplashATView;)V
    .locals 0

    .line 32
    invoke-direct {p0}, Lcom/tkay/basead/ui/BaseSplashATView;->s()V

    return-void
.end method

.method static synthetic c(Lcom/tkay/basead/ui/BaseSplashATView;)Lcom/tkay/core/common/l/a/f$b;
    .locals 0

    .line 32
    iget-object p0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->a:Lcom/tkay/core/common/l/a/f$b;

    return-object p0
.end method

.method private c()V
    .locals 9

    .line 160
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->B:Lcom/tkay/basead/ui/CloseFrameLayout;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/CloseFrameLayout;->setVisibility(I)V

    .line 161
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->B:Lcom/tkay/basead/ui/CloseFrameLayout;

    new-instance v2, Lcom/tkay/basead/ui/BaseSplashATView$2;

    invoke-direct {v2, p0}, Lcom/tkay/basead/ui/BaseSplashATView$2;-><init>(Lcom/tkay/basead/ui/BaseSplashATView;)V

    invoke-virtual {v0, v2}, Lcom/tkay/basead/ui/CloseFrameLayout;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 171
    iput-boolean v1, p0, Lcom/tkay/basead/ui/BaseSplashATView;->N:Z

    .line 173
    new-instance v3, Ljava/util/Timer;

    invoke-direct {v3}, Ljava/util/Timer;-><init>()V

    iput-object v3, p0, Lcom/tkay/basead/ui/BaseSplashATView;->D:Ljava/util/Timer;

    .line 174
    new-instance v4, Lcom/tkay/basead/ui/BaseSplashATView$3;

    invoke-direct {v4, p0}, Lcom/tkay/basead/ui/BaseSplashATView$3;-><init>(Lcom/tkay/basead/ui/BaseSplashATView;)V

    const-wide/16 v5, 0x3e8

    const-wide/16 v7, 0x3e8

    invoke-virtual/range {v3 .. v8}, Ljava/util/Timer;->schedule(Ljava/util/TimerTask;JJ)V

    .line 190
    iget-wide v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->t:J

    invoke-direct {p0, v0, v1}, Lcom/tkay/basead/ui/BaseSplashATView;->a(J)V

    .line 191
    iget-wide v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->t:J

    const-wide/16 v2, 0x3e8

    sub-long/2addr v0, v2

    iput-wide v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->t:J

    return-void
.end method

.method static synthetic d(Lcom/tkay/basead/ui/BaseSplashATView;)J
    .locals 2

    .line 32
    iget-wide v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->t:J

    return-wide v0
.end method

.method static synthetic e(Lcom/tkay/basead/ui/BaseSplashATView;)V
    .locals 2

    .line 2203
    invoke-direct {p0}, Lcom/tkay/basead/ui/BaseSplashATView;->s()V

    .line 2204
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->A:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/tkay/basead/ui/BaseSplashATView;->C:Ljava/lang/String;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    const/4 v0, 0x1

    .line 2205
    iput-boolean v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->N:Z

    return-void
.end method

.method private o()V
    .locals 2

    .line 203
    invoke-direct {p0}, Lcom/tkay/basead/ui/BaseSplashATView;->s()V

    .line 204
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->A:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/tkay/basead/ui/BaseSplashATView;->C:Ljava/lang/String;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    const/4 v0, 0x1

    .line 205
    iput-boolean v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->N:Z

    return-void
.end method

.method private s()V
    .locals 2

    .line 209
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->D:Ljava/util/Timer;

    if-eqz v0, :cond_0

    .line 210
    invoke-virtual {v0}, Ljava/util/Timer;->cancel()V

    :cond_0
    const/4 v0, 0x0

    .line 212
    iput-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->D:Ljava/util/Timer;

    .line 214
    iget-boolean v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->E:Z

    if-nez v0, :cond_2

    const/4 v0, 0x1

    .line 215
    iput-boolean v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->E:Z

    .line 217
    iget-boolean v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->L:Z

    if-nez v0, :cond_1

    const-string v0, "40002"

    const-string v1, "SplashView not showing on screen."

    .line 218
    invoke-static {v0, v1}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/BaseSplashATView;->a(Lcom/tkay/basead/c/e;)V

    .line 221
    :cond_1
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->F:Lcom/tkay/basead/e/a;

    if-eqz v0, :cond_2

    .line 222
    invoke-interface {v0}, Lcom/tkay/basead/e/a;->onAdClosed()V

    :cond_2
    return-void
.end method


# virtual methods
.method protected final a(I)V
    .locals 1

    .line 244
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->F:Lcom/tkay/basead/e/a;

    if-eqz v0, :cond_0

    .line 245
    invoke-interface {v0, p1}, Lcom/tkay/basead/e/a;->onAdClick(I)V

    :cond_0
    return-void
.end method

.method protected final a(Lcom/tkay/basead/c/e;)V
    .locals 1

    .line 111
    iget-boolean v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->L:Z

    if-nez v0, :cond_0

    const/4 v0, 0x1

    .line 112
    iput-boolean v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->L:Z

    .line 113
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->F:Lcom/tkay/basead/e/a;

    if-eqz v0, :cond_0

    .line 114
    invoke-interface {v0, p1}, Lcom/tkay/basead/e/a;->onShowFailed(Lcom/tkay/basead/c/e;)V

    :cond_0
    return-void
.end method

.method protected final a(Z)V
    .locals 1

    .line 251
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->F:Lcom/tkay/basead/e/a;

    if-eqz v0, :cond_0

    .line 252
    invoke-interface {v0, p1}, Lcom/tkay/basead/e/a;->onDeeplinkCallback(Z)V

    :cond_0
    return-void
.end method

.method public checkSkipViewLocation()V
    .locals 5

    .line 82
    :try_start_0
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->A:Landroid/widget/TextView;

    invoke-virtual {v0}, Landroid/widget/TextView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    .line 83
    instance-of v1, v0, Landroid/widget/FrameLayout$LayoutParams;

    if-eqz v1, :cond_0

    .line 84
    check-cast v0, Landroid/widget/FrameLayout$LayoutParams;

    iget v0, v0, Landroid/widget/FrameLayout$LayoutParams;->topMargin:I

    .line 85
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseSplashATView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/l/h;->b(Landroid/content/Context;)I

    move-result v1

    add-int/2addr v0, v1

    const/4 v1, 0x2

    new-array v1, v1, [I

    .line 89
    iget-object v2, p0, Lcom/tkay/basead/ui/BaseSplashATView;->A:Landroid/widget/TextView;

    invoke-virtual {v2, v1}, Landroid/widget/TextView;->getLocationOnScreen([I)V

    const/4 v2, 0x1

    .line 90
    aget v3, v1, v2

    if-ge v3, v0, :cond_0

    .line 92
    aget v1, v1, v2

    sub-int/2addr v0, v1

    .line 93
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseSplashATView;->A:Landroid/widget/TextView;

    invoke-virtual {v1}, Landroid/widget/TextView;->getParent()Landroid/view/ViewParent;

    move-result-object v1

    .line 94
    instance-of v2, v1, Landroid/view/ViewGroup;

    if-eqz v2, :cond_0

    .line 95
    move-object v2, v1

    check-cast v2, Landroid/view/ViewGroup;

    move-object v3, v1

    check-cast v3, Landroid/view/ViewGroup;

    invoke-virtual {v3}, Landroid/view/ViewGroup;->getPaddingLeft()I

    move-result v3

    move-object v4, v1

    check-cast v4, Landroid/view/ViewGroup;

    .line 96
    invoke-virtual {v4}, Landroid/view/ViewGroup;->getPaddingTop()I

    move-result v4

    add-int/2addr v4, v0

    move-object v0, v1

    check-cast v0, Landroid/view/ViewGroup;

    .line 97
    invoke-virtual {v0}, Landroid/view/ViewGroup;->getPaddingRight()I

    move-result v0

    check-cast v1, Landroid/view/ViewGroup;

    .line 98
    invoke-virtual {v1}, Landroid/view/ViewGroup;->getPaddingBottom()I

    move-result v1

    .line 95
    invoke-virtual {v2, v3, v4, v0, v1}, Landroid/view/ViewGroup;->setPadding(IIII)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception v0

    .line 103
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public destroy()V
    .locals 1

    .line 286
    invoke-super {p0}, Lcom/tkay/basead/ui/BaseATView;->destroy()V

    const/4 v0, 0x0

    .line 288
    iput-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->F:Lcom/tkay/basead/e/a;

    return-void
.end method

.method protected final e()V
    .locals 3

    const/4 v0, 0x1

    .line 230
    iput-boolean v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->L:Z

    .line 231
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseSplashATView;->i()Lcom/tkay/basead/c/i;

    move-result-object v1

    const/16 v2, 0x8

    invoke-static {v2, v0, v1}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    .line 233
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->F:Lcom/tkay/basead/e/a;

    if-eqz v0, :cond_0

    .line 234
    invoke-interface {v0}, Lcom/tkay/basead/e/a;->onAdShow()V

    :cond_0
    return-void
.end method

.method protected final f()V
    .locals 2

    .line 258
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->J:Lcom/tkay/basead/ui/GuideToClickView;

    if-eqz v0, :cond_0

    const/16 v1, 0x8

    .line 259
    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/GuideToClickView;->setVisibility(I)V

    .line 262
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->d:Lcom/tkay/core/common/f/h;

    instance-of v0, v0, Lcom/tkay/core/common/f/z;

    if-eqz v0, :cond_2

    .line 263
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->G:Lcom/tkay/basead/ui/b;

    if-nez v0, :cond_1

    .line 264
    new-instance v0, Lcom/tkay/basead/ui/b;

    invoke-direct {v0, p0}, Lcom/tkay/basead/ui/b;-><init>(Landroid/view/ViewGroup;)V

    iput-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->G:Lcom/tkay/basead/ui/b;

    .line 266
    :cond_1
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->G:Lcom/tkay/basead/ui/b;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/b;->b()V

    :cond_2
    return-void
.end method

.method protected final g()V
    .locals 1

    .line 272
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->d:Lcom/tkay/core/common/f/h;

    instance-of v0, v0, Lcom/tkay/core/common/f/z;

    if-eqz v0, :cond_0

    .line 273
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->G:Lcom/tkay/basead/ui/b;

    if-eqz v0, :cond_0

    .line 274
    new-instance v0, Lcom/tkay/basead/ui/BaseSplashATView$4;

    invoke-direct {v0, p0}, Lcom/tkay/basead/ui/BaseSplashATView$4;-><init>(Lcom/tkay/basead/ui/BaseSplashATView;)V

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/BaseSplashATView;->post(Ljava/lang/Runnable;)Z

    :cond_0
    return-void
.end method

.method protected onAttachedToWindow()V
    .locals 0

    .line 299
    invoke-super {p0}, Lcom/tkay/basead/ui/BaseATView;->onAttachedToWindow()V

    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 0

    .line 304
    invoke-super {p0}, Lcom/tkay/basead/ui/BaseATView;->onDetachedFromWindow()V

    .line 305
    invoke-direct {p0}, Lcom/tkay/basead/ui/BaseSplashATView;->s()V

    return-void
.end method

.method protected onLayout(ZIIII)V
    .locals 0

    .line 293
    invoke-super/range {p0 .. p5}, Lcom/tkay/basead/ui/BaseATView;->onLayout(ZIIII)V

    .line 294
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseSplashATView;->checkSkipViewLocation()V

    return-void
.end method

.method protected onWindowVisibilityChanged(I)V
    .locals 8

    .line 123
    invoke-super {p0, p1}, Lcom/tkay/basead/ui/BaseATView;->onWindowVisibilityChanged(I)V

    if-nez p1, :cond_0

    .line 1145
    iget-boolean p1, p0, Lcom/tkay/basead/ui/BaseSplashATView;->M:Z

    if-nez p1, :cond_0

    const/4 p1, 0x1

    .line 1148
    iput-boolean p1, p0, Lcom/tkay/basead/ui/BaseSplashATView;->M:Z

    .line 1152
    iget-boolean p1, p0, Lcom/tkay/basead/ui/BaseSplashATView;->O:Z

    if-nez p1, :cond_0

    .line 1160
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseSplashATView;->B:Lcom/tkay/basead/ui/CloseFrameLayout;

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Lcom/tkay/basead/ui/CloseFrameLayout;->setVisibility(I)V

    .line 1161
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseSplashATView;->B:Lcom/tkay/basead/ui/CloseFrameLayout;

    new-instance v1, Lcom/tkay/basead/ui/BaseSplashATView$2;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/BaseSplashATView$2;-><init>(Lcom/tkay/basead/ui/BaseSplashATView;)V

    invoke-virtual {p1, v1}, Lcom/tkay/basead/ui/CloseFrameLayout;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1171
    iput-boolean v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->N:Z

    .line 1173
    new-instance v2, Ljava/util/Timer;

    invoke-direct {v2}, Ljava/util/Timer;-><init>()V

    iput-object v2, p0, Lcom/tkay/basead/ui/BaseSplashATView;->D:Ljava/util/Timer;

    .line 1174
    new-instance v3, Lcom/tkay/basead/ui/BaseSplashATView$3;

    invoke-direct {v3, p0}, Lcom/tkay/basead/ui/BaseSplashATView$3;-><init>(Lcom/tkay/basead/ui/BaseSplashATView;)V

    const-wide/16 v4, 0x3e8

    const-wide/16 v6, 0x3e8

    invoke-virtual/range {v2 .. v7}, Ljava/util/Timer;->schedule(Ljava/util/TimerTask;JJ)V

    .line 1190
    iget-wide v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->t:J

    invoke-direct {p0, v0, v1}, Lcom/tkay/basead/ui/BaseSplashATView;->a(J)V

    .line 1191
    iget-wide v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->t:J

    const-wide/16 v2, 0x3e8

    sub-long/2addr v0, v2

    iput-wide v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->t:J

    :cond_0
    return-void
.end method

.method protected p()V
    .locals 4

    .line 339
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->r:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_1

    .line 342
    iget-object v2, p0, Lcom/tkay/basead/ui/BaseSplashATView;->r:Ljava/util/List;

    invoke-interface {v2, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/view/View;

    if-eqz v2, :cond_0

    .line 344
    iget-object v3, p0, Lcom/tkay/basead/ui/BaseSplashATView;->K:Landroid/view/View$OnClickListener;

    invoke-virtual {v2, v3}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method

.method protected final q()V
    .locals 3

    .line 310
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseSplashATView;->m()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 311
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseSplashATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "myoffer_shake_view"

    const-string v2, "id"

    invoke-static {v0, v1, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/BaseSplashATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/tkay/basead/ui/BaseShakeView;

    iput-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->I:Lcom/tkay/basead/ui/BaseShakeView;

    const/4 v1, 0x0

    .line 312
    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/BaseShakeView;->setVisibility(I)V

    .line 313
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->I:Lcom/tkay/basead/ui/BaseShakeView;

    new-instance v1, Lcom/tkay/basead/ui/BaseSplashATView$5;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/BaseSplashATView$5;-><init>(Lcom/tkay/basead/ui/BaseSplashATView;)V

    iget-object v2, p0, Lcom/tkay/basead/ui/BaseSplashATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v2, v2, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/basead/ui/BaseShakeView;->setOnShakeListener(Lcom/tkay/basead/ui/BaseShakeView$a;Lcom/tkay/core/common/f/j;)V

    .line 324
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->r:Ljava/util/List;

    iget-object v1, p0, Lcom/tkay/basead/ui/BaseSplashATView;->I:Lcom/tkay/basead/ui/BaseShakeView;

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_0
    return-void
.end method

.method protected final r()V
    .locals 3

    .line 329
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseSplashATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "myoffer_guide_to_click_view"

    const-string v2, "id"

    invoke-static {v0, v1, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/BaseSplashATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/tkay/basead/ui/GuideToClickView;

    iput-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->J:Lcom/tkay/basead/ui/GuideToClickView;

    .line 330
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->i()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    .line 331
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->J:Lcom/tkay/basead/ui/GuideToClickView;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    .line 332
    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/GuideToClickView;->setVisibility(I)V

    .line 333
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSplashATView;->r:Ljava/util/List;

    iget-object v1, p0, Lcom/tkay/basead/ui/BaseSplashATView;->J:Lcom/tkay/basead/ui/GuideToClickView;

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_0
    return-void
.end method

.method public setDontCountDown(Z)V
    .locals 1

    .line 135
    iput-boolean p1, p0, Lcom/tkay/basead/ui/BaseSplashATView;->O:Z

    if-eqz p1, :cond_0

    .line 138
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseSplashATView;->B:Lcom/tkay/basead/ui/CloseFrameLayout;

    if-eqz p1, :cond_0

    const/16 v0, 0x8

    .line 139
    invoke-virtual {p1, v0}, Lcom/tkay/basead/ui/CloseFrameLayout;->setVisibility(I)V

    :cond_0
    return-void
.end method
