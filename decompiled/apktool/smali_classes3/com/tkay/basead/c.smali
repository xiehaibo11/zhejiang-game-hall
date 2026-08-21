.class public final Lcom/tkay/basead/c;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/basead/c$a;
    }
.end annotation


# instance fields
.field public a:Lcom/tkay/core/common/f/h;

.field public b:Lcom/tkay/core/common/f/i;

.field private c:Landroid/content/Context;

.field private d:Landroid/app/Dialog;

.field private e:Landroid/view/View;

.field private f:Landroid/widget/EditText;

.field private g:Landroid/widget/ImageView;

.field private h:Landroid/widget/TextView;

.field private i:Landroid/widget/TextView;

.field private j:Landroid/widget/TextView;

.field private k:Landroid/widget/TextView;

.field private l:Landroid/widget/TextView;

.field private m:Landroid/widget/TextView;

.field private n:Landroid/widget/TextView;

.field private o:Landroid/widget/TextView;

.field private p:Landroid/widget/TextView;

.field private q:Landroid/widget/TextView;

.field private r:Z

.field private s:Lcom/tkay/basead/c$a;

.field private t:Landroid/view/View$OnClickListener;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 28
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 194
    new-instance v0, Lcom/tkay/basead/c$5;

    invoke-direct {v0, p0}, Lcom/tkay/basead/c$5;-><init>(Lcom/tkay/basead/c;)V

    iput-object v0, p0, Lcom/tkay/basead/c;->t:Landroid/view/View$OnClickListener;

    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/c;)Lcom/tkay/basead/c$a;
    .locals 0

    .line 28
    iget-object p0, p0, Lcom/tkay/basead/c;->s:Lcom/tkay/basead/c$a;

    return-object p0
.end method

.method private a(II)V
    .locals 4

    .line 80
    new-instance v0, Landroid/app/Dialog;

    iget-object v1, p0, Lcom/tkay/basead/c;->c:Landroid/content/Context;

    const-string v2, "myoffer_feedback_dialog"

    const-string v3, "style"

    invoke-static {v1, v2, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-direct {v0, v1, v2}, Landroid/app/Dialog;-><init>(Landroid/content/Context;I)V

    iput-object v0, p0, Lcom/tkay/basead/c;->d:Landroid/app/Dialog;

    .line 81
    iget-object v1, p0, Lcom/tkay/basead/c;->e:Landroid/view/View;

    invoke-virtual {v0, v1}, Landroid/app/Dialog;->setContentView(Landroid/view/View;)V

    .line 82
    iget-object v0, p0, Lcom/tkay/basead/c;->d:Landroid/app/Dialog;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/app/Dialog;->setCancelable(Z)V

    .line 83
    iget-object v0, p0, Lcom/tkay/basead/c;->d:Landroid/app/Dialog;

    new-instance v1, Lcom/tkay/basead/c$1;

    invoke-direct {v1, p0}, Lcom/tkay/basead/c$1;-><init>(Lcom/tkay/basead/c;)V

    invoke-virtual {v0, v1}, Landroid/app/Dialog;->setOnCancelListener(Landroid/content/DialogInterface$OnCancelListener;)V

    .line 92
    iget-object v0, p0, Lcom/tkay/basead/c;->d:Landroid/app/Dialog;

    invoke-virtual {v0}, Landroid/app/Dialog;->getWindow()Landroid/view/Window;

    move-result-object v0

    if-eqz v0, :cond_1

    if-le p1, p2, :cond_0

    .line 96
    iget-object p1, p0, Lcom/tkay/basead/c;->c:Landroid/content/Context;

    const/high16 p2, 0x438c0000    # 280.0f

    invoke-static {p1, p2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result p1

    iget-object p2, p0, Lcom/tkay/basead/c;->c:Landroid/content/Context;

    const/high16 v1, 0x43a00000    # 320.0f

    invoke-static {p2, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result p2

    invoke-virtual {v0, p1, p2}, Landroid/view/Window;->setLayout(II)V

    goto :goto_0

    .line 98
    :cond_0
    iget-object p1, p0, Lcom/tkay/basead/c;->c:Landroid/content/Context;

    const/high16 p2, 0x43960000    # 300.0f

    invoke-static {p1, p2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result p1

    iget-object p2, p0, Lcom/tkay/basead/c;->c:Landroid/content/Context;

    const/high16 v1, 0x43d50000    # 426.0f

    invoke-static {p2, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result p2

    invoke-virtual {v0, p1, p2}, Landroid/view/Window;->setLayout(II)V

    .line 102
    :cond_1
    :goto_0
    iget-object p1, p0, Lcom/tkay/basead/c;->d:Landroid/app/Dialog;

    invoke-virtual {p1}, Landroid/app/Dialog;->show()V

    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/c;Z)Z
    .locals 0

    .line 28
    iput-boolean p1, p0, Lcom/tkay/basead/c;->r:Z

    return p1
.end method

.method static synthetic b(Lcom/tkay/basead/c;)V
    .locals 4

    .line 2181
    new-instance v0, Landroid/os/Handler;

    invoke-direct {v0}, Landroid/os/Handler;-><init>()V

    new-instance v1, Lcom/tkay/basead/c$4;

    invoke-direct {v1, p0}, Lcom/tkay/basead/c$4;-><init>(Lcom/tkay/basead/c;)V

    const-wide/16 v2, 0x1e

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method static synthetic c(Lcom/tkay/basead/c;)Landroid/widget/EditText;
    .locals 0

    .line 28
    iget-object p0, p0, Lcom/tkay/basead/c;->f:Landroid/widget/EditText;

    return-object p0
.end method

.method private c()V
    .locals 4

    .line 110
    iget-object v0, p0, Lcom/tkay/basead/c;->e:Landroid/view/View;

    iget-object v1, p0, Lcom/tkay/basead/c;->c:Landroid/content/Context;

    const-string v2, "id"

    const-string v3, "myoffer_feedback_iv_close"

    invoke-static {v1, v3, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/tkay/basead/c;->g:Landroid/widget/ImageView;

    .line 111
    iget-object v0, p0, Lcom/tkay/basead/c;->e:Landroid/view/View;

    iget-object v1, p0, Lcom/tkay/basead/c;->c:Landroid/content/Context;

    const-string v3, "myoffer_feedback_et"

    invoke-static {v1, v3, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/tkay/basead/c;->f:Landroid/widget/EditText;

    .line 112
    iget-object v0, p0, Lcom/tkay/basead/c;->e:Landroid/view/View;

    iget-object v1, p0, Lcom/tkay/basead/c;->c:Landroid/content/Context;

    const-string v3, "myoffer_feedback_tv_commit"

    invoke-static {v1, v3, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/tkay/basead/c;->h:Landroid/widget/TextView;

    .line 114
    iget-object v0, p0, Lcom/tkay/basead/c;->e:Landroid/view/View;

    iget-object v1, p0, Lcom/tkay/basead/c;->c:Landroid/content/Context;

    const-string v3, "myoffer_feedback_tv_1"

    invoke-static {v1, v3, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/tkay/basead/c;->i:Landroid/widget/TextView;

    .line 115
    iget-object v0, p0, Lcom/tkay/basead/c;->e:Landroid/view/View;

    iget-object v1, p0, Lcom/tkay/basead/c;->c:Landroid/content/Context;

    const-string v3, "myoffer_feedback_tv_2"

    invoke-static {v1, v3, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/tkay/basead/c;->j:Landroid/widget/TextView;

    .line 116
    iget-object v0, p0, Lcom/tkay/basead/c;->e:Landroid/view/View;

    iget-object v1, p0, Lcom/tkay/basead/c;->c:Landroid/content/Context;

    const-string v3, "myoffer_feedback_tv_3"

    invoke-static {v1, v3, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/tkay/basead/c;->k:Landroid/widget/TextView;

    .line 117
    iget-object v0, p0, Lcom/tkay/basead/c;->e:Landroid/view/View;

    iget-object v1, p0, Lcom/tkay/basead/c;->c:Landroid/content/Context;

    const-string v3, "myoffer_feedback_tv_4"

    invoke-static {v1, v3, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/tkay/basead/c;->l:Landroid/widget/TextView;

    .line 118
    iget-object v0, p0, Lcom/tkay/basead/c;->e:Landroid/view/View;

    iget-object v1, p0, Lcom/tkay/basead/c;->c:Landroid/content/Context;

    const-string v3, "myoffer_feedback_tv_5"

    invoke-static {v1, v3, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/tkay/basead/c;->m:Landroid/widget/TextView;

    .line 119
    iget-object v0, p0, Lcom/tkay/basead/c;->e:Landroid/view/View;

    iget-object v1, p0, Lcom/tkay/basead/c;->c:Landroid/content/Context;

    const-string v3, "myoffer_feedback_tv_6"

    invoke-static {v1, v3, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/tkay/basead/c;->n:Landroid/widget/TextView;

    .line 120
    iget-object v0, p0, Lcom/tkay/basead/c;->e:Landroid/view/View;

    iget-object v1, p0, Lcom/tkay/basead/c;->c:Landroid/content/Context;

    const-string v3, "myoffer_feedback_tv_7"

    invoke-static {v1, v3, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/tkay/basead/c;->o:Landroid/widget/TextView;

    .line 121
    iget-object v0, p0, Lcom/tkay/basead/c;->e:Landroid/view/View;

    iget-object v1, p0, Lcom/tkay/basead/c;->c:Landroid/content/Context;

    const-string v3, "myoffer_feedback_tv_8"

    invoke-static {v1, v3, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/tkay/basead/c;->p:Landroid/widget/TextView;

    .line 122
    iget-object v0, p0, Lcom/tkay/basead/c;->e:Landroid/view/View;

    iget-object v1, p0, Lcom/tkay/basead/c;->c:Landroid/content/Context;

    const-string v3, "myoffer_feedback_tv_9"

    invoke-static {v1, v3, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/tkay/basead/c;->q:Landroid/widget/TextView;

    .line 2128
    iget-object v0, p0, Lcom/tkay/basead/c;->g:Landroid/widget/ImageView;

    new-instance v1, Lcom/tkay/basead/c$2;

    invoke-direct {v1, p0}, Lcom/tkay/basead/c$2;-><init>(Lcom/tkay/basead/c;)V

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 2134
    iget-object v0, p0, Lcom/tkay/basead/c;->i:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/tkay/basead/c;->t:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 2135
    iget-object v0, p0, Lcom/tkay/basead/c;->j:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/tkay/basead/c;->t:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 2136
    iget-object v0, p0, Lcom/tkay/basead/c;->k:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/tkay/basead/c;->t:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 2137
    iget-object v0, p0, Lcom/tkay/basead/c;->l:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/tkay/basead/c;->t:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 2138
    iget-object v0, p0, Lcom/tkay/basead/c;->m:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/tkay/basead/c;->t:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 2139
    iget-object v0, p0, Lcom/tkay/basead/c;->n:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/tkay/basead/c;->t:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 2140
    iget-object v0, p0, Lcom/tkay/basead/c;->o:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/tkay/basead/c;->t:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 2141
    iget-object v0, p0, Lcom/tkay/basead/c;->p:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/tkay/basead/c;->t:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 2142
    iget-object v0, p0, Lcom/tkay/basead/c;->q:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/tkay/basead/c;->t:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 2144
    iget-object v0, p0, Lcom/tkay/basead/c;->h:Landroid/widget/TextView;

    new-instance v1, Lcom/tkay/basead/c$3;

    invoke-direct {v1, p0}, Lcom/tkay/basead/c$3;-><init>(Lcom/tkay/basead/c;)V

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method private d()V
    .locals 2

    .line 128
    iget-object v0, p0, Lcom/tkay/basead/c;->g:Landroid/widget/ImageView;

    new-instance v1, Lcom/tkay/basead/c$2;

    invoke-direct {v1, p0}, Lcom/tkay/basead/c$2;-><init>(Lcom/tkay/basead/c;)V

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 134
    iget-object v0, p0, Lcom/tkay/basead/c;->i:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/tkay/basead/c;->t:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 135
    iget-object v0, p0, Lcom/tkay/basead/c;->j:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/tkay/basead/c;->t:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 136
    iget-object v0, p0, Lcom/tkay/basead/c;->k:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/tkay/basead/c;->t:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 137
    iget-object v0, p0, Lcom/tkay/basead/c;->l:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/tkay/basead/c;->t:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 138
    iget-object v0, p0, Lcom/tkay/basead/c;->m:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/tkay/basead/c;->t:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 139
    iget-object v0, p0, Lcom/tkay/basead/c;->n:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/tkay/basead/c;->t:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 140
    iget-object v0, p0, Lcom/tkay/basead/c;->o:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/tkay/basead/c;->t:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 141
    iget-object v0, p0, Lcom/tkay/basead/c;->p:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/tkay/basead/c;->t:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 142
    iget-object v0, p0, Lcom/tkay/basead/c;->q:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/tkay/basead/c;->t:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 144
    iget-object v0, p0, Lcom/tkay/basead/c;->h:Landroid/widget/TextView;

    new-instance v1, Lcom/tkay/basead/c$3;

    invoke-direct {v1, p0}, Lcom/tkay/basead/c$3;-><init>(Lcom/tkay/basead/c;)V

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method static synthetic d(Lcom/tkay/basead/c;)Z
    .locals 0

    .line 28
    iget-boolean p0, p0, Lcom/tkay/basead/c;->r:Z

    return p0
.end method

.method static synthetic e(Lcom/tkay/basead/c;)Landroid/content/Context;
    .locals 0

    .line 28
    iget-object p0, p0, Lcom/tkay/basead/c;->c:Landroid/content/Context;

    return-object p0
.end method

.method private e()V
    .locals 4

    .line 181
    new-instance v0, Landroid/os/Handler;

    invoke-direct {v0}, Landroid/os/Handler;-><init>()V

    new-instance v1, Lcom/tkay/basead/c$4;

    invoke-direct {v1, p0}, Lcom/tkay/basead/c$4;-><init>(Lcom/tkay/basead/c;)V

    const-wide/16 v2, 0x1e

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method static synthetic f(Lcom/tkay/basead/c;)Landroid/app/Dialog;
    .locals 0

    .line 28
    iget-object p0, p0, Lcom/tkay/basead/c;->d:Landroid/app/Dialog;

    return-object p0
.end method


# virtual methods
.method public final a(Landroid/content/Context;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/c$a;)V
    .locals 5

    const-string v0, "id"

    .line 57
    :try_start_0
    iput-object p1, p0, Lcom/tkay/basead/c;->c:Landroid/content/Context;

    .line 58
    iput-object p2, p0, Lcom/tkay/basead/c;->a:Lcom/tkay/core/common/f/h;

    .line 59
    iput-object p3, p0, Lcom/tkay/basead/c;->b:Lcom/tkay/core/common/f/i;

    .line 60
    iput-object p4, p0, Lcom/tkay/basead/c;->s:Lcom/tkay/basead/c$a;

    .line 62
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p2

    invoke-virtual {p2}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p2

    iget p2, p2, Landroid/util/DisplayMetrics;->widthPixels:I

    .line 63
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p3

    invoke-virtual {p3}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p3

    iget p3, p3, Landroid/util/DisplayMetrics;->heightPixels:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 p4, 0x0

    const/4 v1, 0x0

    const-string v2, "layout"

    if-le p2, p3, :cond_0

    .line 65
    :try_start_1
    invoke-static {p1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v3

    const-string v4, "myoffer_feedback_land"

    invoke-static {p1, v4, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {v3, p1, v1, p4}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/basead/c;->e:Landroid/view/View;

    goto :goto_0

    .line 67
    :cond_0
    invoke-static {p1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v3

    const-string v4, "myoffer_feedback"

    invoke-static {p1, v4, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {v3, p1, v1, p4}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/basead/c;->e:Landroid/view/View;

    .line 1110
    :goto_0
    iget-object p1, p0, Lcom/tkay/basead/c;->e:Landroid/view/View;

    iget-object p4, p0, Lcom/tkay/basead/c;->c:Landroid/content/Context;

    const-string v1, "myoffer_feedback_iv_close"

    invoke-static {p4, v1, v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p4

    invoke-virtual {p1, p4}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/ImageView;

    iput-object p1, p0, Lcom/tkay/basead/c;->g:Landroid/widget/ImageView;

    .line 1111
    iget-object p1, p0, Lcom/tkay/basead/c;->e:Landroid/view/View;

    iget-object p4, p0, Lcom/tkay/basead/c;->c:Landroid/content/Context;

    const-string v1, "myoffer_feedback_et"

    invoke-static {p4, v1, v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p4

    invoke-virtual {p1, p4}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/EditText;

    iput-object p1, p0, Lcom/tkay/basead/c;->f:Landroid/widget/EditText;

    .line 1112
    iget-object p1, p0, Lcom/tkay/basead/c;->e:Landroid/view/View;

    iget-object p4, p0, Lcom/tkay/basead/c;->c:Landroid/content/Context;

    const-string v1, "myoffer_feedback_tv_commit"

    invoke-static {p4, v1, v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p4

    invoke-virtual {p1, p4}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/tkay/basead/c;->h:Landroid/widget/TextView;

    .line 1114
    iget-object p1, p0, Lcom/tkay/basead/c;->e:Landroid/view/View;

    iget-object p4, p0, Lcom/tkay/basead/c;->c:Landroid/content/Context;

    const-string v1, "myoffer_feedback_tv_1"

    invoke-static {p4, v1, v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p4

    invoke-virtual {p1, p4}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/tkay/basead/c;->i:Landroid/widget/TextView;

    .line 1115
    iget-object p1, p0, Lcom/tkay/basead/c;->e:Landroid/view/View;

    iget-object p4, p0, Lcom/tkay/basead/c;->c:Landroid/content/Context;

    const-string v1, "myoffer_feedback_tv_2"

    invoke-static {p4, v1, v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p4

    invoke-virtual {p1, p4}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/tkay/basead/c;->j:Landroid/widget/TextView;

    .line 1116
    iget-object p1, p0, Lcom/tkay/basead/c;->e:Landroid/view/View;

    iget-object p4, p0, Lcom/tkay/basead/c;->c:Landroid/content/Context;

    const-string v1, "myoffer_feedback_tv_3"

    invoke-static {p4, v1, v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p4

    invoke-virtual {p1, p4}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/tkay/basead/c;->k:Landroid/widget/TextView;

    .line 1117
    iget-object p1, p0, Lcom/tkay/basead/c;->e:Landroid/view/View;

    iget-object p4, p0, Lcom/tkay/basead/c;->c:Landroid/content/Context;

    const-string v1, "myoffer_feedback_tv_4"

    invoke-static {p4, v1, v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p4

    invoke-virtual {p1, p4}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/tkay/basead/c;->l:Landroid/widget/TextView;

    .line 1118
    iget-object p1, p0, Lcom/tkay/basead/c;->e:Landroid/view/View;

    iget-object p4, p0, Lcom/tkay/basead/c;->c:Landroid/content/Context;

    const-string v1, "myoffer_feedback_tv_5"

    invoke-static {p4, v1, v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p4

    invoke-virtual {p1, p4}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/tkay/basead/c;->m:Landroid/widget/TextView;

    .line 1119
    iget-object p1, p0, Lcom/tkay/basead/c;->e:Landroid/view/View;

    iget-object p4, p0, Lcom/tkay/basead/c;->c:Landroid/content/Context;

    const-string v1, "myoffer_feedback_tv_6"

    invoke-static {p4, v1, v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p4

    invoke-virtual {p1, p4}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/tkay/basead/c;->n:Landroid/widget/TextView;

    .line 1120
    iget-object p1, p0, Lcom/tkay/basead/c;->e:Landroid/view/View;

    iget-object p4, p0, Lcom/tkay/basead/c;->c:Landroid/content/Context;

    const-string v1, "myoffer_feedback_tv_7"

    invoke-static {p4, v1, v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p4

    invoke-virtual {p1, p4}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/tkay/basead/c;->o:Landroid/widget/TextView;

    .line 1121
    iget-object p1, p0, Lcom/tkay/basead/c;->e:Landroid/view/View;

    iget-object p4, p0, Lcom/tkay/basead/c;->c:Landroid/content/Context;

    const-string v1, "myoffer_feedback_tv_8"

    invoke-static {p4, v1, v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p4

    invoke-virtual {p1, p4}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/tkay/basead/c;->p:Landroid/widget/TextView;

    .line 1122
    iget-object p1, p0, Lcom/tkay/basead/c;->e:Landroid/view/View;

    iget-object p4, p0, Lcom/tkay/basead/c;->c:Landroid/content/Context;

    const-string v1, "myoffer_feedback_tv_9"

    invoke-static {p4, v1, v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p4

    invoke-virtual {p1, p4}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/tkay/basead/c;->q:Landroid/widget/TextView;

    .line 1128
    iget-object p1, p0, Lcom/tkay/basead/c;->g:Landroid/widget/ImageView;

    new-instance p4, Lcom/tkay/basead/c$2;

    invoke-direct {p4, p0}, Lcom/tkay/basead/c$2;-><init>(Lcom/tkay/basead/c;)V

    invoke-virtual {p1, p4}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1134
    iget-object p1, p0, Lcom/tkay/basead/c;->i:Landroid/widget/TextView;

    iget-object p4, p0, Lcom/tkay/basead/c;->t:Landroid/view/View$OnClickListener;

    invoke-virtual {p1, p4}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1135
    iget-object p1, p0, Lcom/tkay/basead/c;->j:Landroid/widget/TextView;

    iget-object p4, p0, Lcom/tkay/basead/c;->t:Landroid/view/View$OnClickListener;

    invoke-virtual {p1, p4}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1136
    iget-object p1, p0, Lcom/tkay/basead/c;->k:Landroid/widget/TextView;

    iget-object p4, p0, Lcom/tkay/basead/c;->t:Landroid/view/View$OnClickListener;

    invoke-virtual {p1, p4}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1137
    iget-object p1, p0, Lcom/tkay/basead/c;->l:Landroid/widget/TextView;

    iget-object p4, p0, Lcom/tkay/basead/c;->t:Landroid/view/View$OnClickListener;

    invoke-virtual {p1, p4}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1138
    iget-object p1, p0, Lcom/tkay/basead/c;->m:Landroid/widget/TextView;

    iget-object p4, p0, Lcom/tkay/basead/c;->t:Landroid/view/View$OnClickListener;

    invoke-virtual {p1, p4}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1139
    iget-object p1, p0, Lcom/tkay/basead/c;->n:Landroid/widget/TextView;

    iget-object p4, p0, Lcom/tkay/basead/c;->t:Landroid/view/View$OnClickListener;

    invoke-virtual {p1, p4}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1140
    iget-object p1, p0, Lcom/tkay/basead/c;->o:Landroid/widget/TextView;

    iget-object p4, p0, Lcom/tkay/basead/c;->t:Landroid/view/View$OnClickListener;

    invoke-virtual {p1, p4}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1141
    iget-object p1, p0, Lcom/tkay/basead/c;->p:Landroid/widget/TextView;

    iget-object p4, p0, Lcom/tkay/basead/c;->t:Landroid/view/View$OnClickListener;

    invoke-virtual {p1, p4}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1142
    iget-object p1, p0, Lcom/tkay/basead/c;->q:Landroid/widget/TextView;

    iget-object p4, p0, Lcom/tkay/basead/c;->t:Landroid/view/View$OnClickListener;

    invoke-virtual {p1, p4}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1144
    iget-object p1, p0, Lcom/tkay/basead/c;->h:Landroid/widget/TextView;

    new-instance p4, Lcom/tkay/basead/c$3;

    invoke-direct {p4, p0}, Lcom/tkay/basead/c$3;-><init>(Lcom/tkay/basead/c;)V

    invoke-virtual {p1, p4}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 2080
    new-instance p1, Landroid/app/Dialog;

    iget-object p4, p0, Lcom/tkay/basead/c;->c:Landroid/content/Context;

    iget-object v0, p0, Lcom/tkay/basead/c;->c:Landroid/content/Context;

    const-string v1, "myoffer_feedback_dialog"

    const-string v2, "style"

    invoke-static {v0, v1, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-direct {p1, p4, v0}, Landroid/app/Dialog;-><init>(Landroid/content/Context;I)V

    iput-object p1, p0, Lcom/tkay/basead/c;->d:Landroid/app/Dialog;

    .line 2081
    iget-object p4, p0, Lcom/tkay/basead/c;->e:Landroid/view/View;

    invoke-virtual {p1, p4}, Landroid/app/Dialog;->setContentView(Landroid/view/View;)V

    .line 2082
    iget-object p1, p0, Lcom/tkay/basead/c;->d:Landroid/app/Dialog;

    const/4 p4, 0x1

    invoke-virtual {p1, p4}, Landroid/app/Dialog;->setCancelable(Z)V

    .line 2083
    iget-object p1, p0, Lcom/tkay/basead/c;->d:Landroid/app/Dialog;

    new-instance p4, Lcom/tkay/basead/c$1;

    invoke-direct {p4, p0}, Lcom/tkay/basead/c$1;-><init>(Lcom/tkay/basead/c;)V

    invoke-virtual {p1, p4}, Landroid/app/Dialog;->setOnCancelListener(Landroid/content/DialogInterface$OnCancelListener;)V

    .line 2092
    iget-object p1, p0, Lcom/tkay/basead/c;->d:Landroid/app/Dialog;

    invoke-virtual {p1}, Landroid/app/Dialog;->getWindow()Landroid/view/Window;

    move-result-object p1

    if-eqz p1, :cond_2

    if-le p2, p3, :cond_1

    .line 2096
    iget-object p2, p0, Lcom/tkay/basead/c;->c:Landroid/content/Context;

    const/high16 p3, 0x438c0000    # 280.0f

    invoke-static {p2, p3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result p2

    iget-object p3, p0, Lcom/tkay/basead/c;->c:Landroid/content/Context;

    const/high16 p4, 0x43a00000    # 320.0f

    invoke-static {p3, p4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result p3

    invoke-virtual {p1, p2, p3}, Landroid/view/Window;->setLayout(II)V

    goto :goto_1

    .line 2098
    :cond_1
    iget-object p2, p0, Lcom/tkay/basead/c;->c:Landroid/content/Context;

    const/high16 p3, 0x43960000    # 300.0f

    invoke-static {p2, p3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result p2

    iget-object p3, p0, Lcom/tkay/basead/c;->c:Landroid/content/Context;

    const/high16 p4, 0x43d50000    # 426.0f

    invoke-static {p3, p4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result p3

    invoke-virtual {p1, p2, p3}, Landroid/view/Window;->setLayout(II)V

    .line 2102
    :cond_2
    :goto_1
    iget-object p1, p0, Lcom/tkay/basead/c;->d:Landroid/app/Dialog;

    invoke-virtual {p1}, Landroid/app/Dialog;->show()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 75
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public final a()Z
    .locals 1

    .line 106
    iget-object v0, p0, Lcom/tkay/basead/c;->d:Landroid/app/Dialog;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/app/Dialog;->isShowing()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final b()V
    .locals 1

    const/4 v0, 0x0

    .line 212
    iput-object v0, p0, Lcom/tkay/basead/c;->c:Landroid/content/Context;

    .line 213
    iput-object v0, p0, Lcom/tkay/basead/c;->a:Lcom/tkay/core/common/f/h;

    .line 214
    iput-object v0, p0, Lcom/tkay/basead/c;->b:Lcom/tkay/core/common/f/i;

    .line 215
    iput-object v0, p0, Lcom/tkay/basead/c;->s:Lcom/tkay/basead/c$a;

    return-void
.end method
